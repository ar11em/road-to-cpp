
//VISTO CHE NON AVEVO NULLA DA FARE ((AA SONO LE 1:35 STO MORENDO))
// ti ho fatto un esempio di come funziona uno shared ptr magari dacci unocchiata anche con chat gpt ecco
//non so neanche quanto è giusto eh

template<T>
class Counter{
    public:
        int counter = 0;
        T* value;
        Counter(T* value) : value(value) {}
        ~Counter(){
            delete value;
        }
};

template<typename T>
class SharedPtrExample<T>{
    protected:
        Counter<T>* _counter;
        SharedPtrExample(T* value) : _value(value){
            _counter = new Counter(value);
            _counter->counter++;
        }

        ~SharedPtrExample(){
            reset();
        }

        SharedPtrExample(Counter& counter) _counter(counter){
            _counter->counter++;
        }

        
    public:
        template <typename... Args>
        static SharedPtrExample<T> make_shared(Args&&... args){
            return SharedPtrExample(new T(std::forward<Args>(args)...));
        }

        T& Get(){
            if(_counter){
                return *_counter.value;
            }
            throw std::runtime_error("Null pointer access.");
            
        }

        void reset(){
            _counter->counter--;
            if(_counter->counter <= 0){
                delete _counter;
            }
        }

        SharedPtrExample(const SharedPtrExample<T>& other) _counter(other._counter){
            other._counter->counter++;

        }
        friend class WeakPtrExample<T>;
};

template<T>
class WeakPtrExample<T>{
    protected:
        Counter<T>* _counter;
    public:
        WeakPtrExample(SharedPtrExample<T> shared) : _counter(shared._counter){

        }
    
        SharedPtrExample<T> lock(){
            if(_counter){
                return SharedPtrExample(_counter);
            }
            return SharedPtrExample(nullptr);
            
        }

}