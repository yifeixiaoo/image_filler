/**
 * @file deque.cpp
 * Implementation of the Deque class.
 *
 */

/* Constructor for the Deque class */
template <class T>
Deque<T>::Deque(){
k1 = 0;
k2 = -1;
/* your code here */

}

/**
 * Adds the parameter object to the right of the Deque.
 *
 * @param newItem object to be added to the Deque.
 */
template <class T>
void Deque<T>::pushR(T const& newItem)
{
    // if (data.empty()){
    //     data.push_back(newItem);
    // }else{
    k2++;
    data.push_back(newItem);
    // }

    /**
     * @todo Your code here!
     */
}

/**
 * Removes the object at the left of the Deque, and returns it to the
 * caller.
 *
 * See .h file for implementation notes. 
 *
 * @return The leftmost item of the Deque.
 */
template <class T>
T Deque<T>::popL()
{
        T poppedItem = data[k1];
        swap(data[k1], data.back());
        data.pop_back();
        // Changed push_back from NULL to poppedItem
        data.push_back(poppedItem);
        swap(data[k1], data.back());
        k1++;
    if (k1 >= ((k2+1) - k1)){
        vector<T> temp;
        for (int i = k1; i<=k2; i++){
            temp.push_back(data[i]);
        }
        data.swap(temp);
        temp.clear();
        k1 = 0;
        k2 = data.size()-1;

    }

        return poppedItem;

    /**
     * @todo Your code here! 
     */
    
}
/**
 * Removes the object at the right of the Deque, and returns it to the
 * caller.
 *
 * @return The rightmost item of the Deque.
 */
template <class T>
T Deque<T>::popR()
{
        T poppedItem = data[k2];
        data.pop_back();
        k2--;

    if (k1 >= ((k2+1) - k1)){
        vector<T> temp;
        for (int i = k1; i<=k2; i++){
            temp.push_back(data[i]);
        }
        data.swap(temp);
        temp.clear();
        k1 = 0;
        k2 = data.size()-1;

    }
            return poppedItem;
    /**
     * @todo Your code here! 
     */

}

/**
 * Finds the object at the left of the Deque, and returns it to the
 * caller. Unlike popL(), this operation does not alter the deque.
 *
 * @return The item at the left of the deque.
 */
template <class T>
T Deque<T>::peekL()
{
    /**
     * @todo Your code here! 
     */
    return data[k1];
}

/**
 * Finds the object at the right of the Deque, and returns it to the
 * caller. Unlike popR(), this operation does not alter the deque.
 *
 * @return the value of The item at the right of the deque.
 */
template <class T>
T Deque<T>::peekR()
{
    /**
     * @todo Your code here! 
     */
    return data.back();
}

/**
 * Determines if the Deque is empty.
 *
 * @return bool which is true if the Deque is empty, false otherwise.
 */
template <class T>
bool Deque<T>::isEmpty() const
{
    return ((k1-1) == k2);
    /**
     * @todo Your code here! 
     */
}
