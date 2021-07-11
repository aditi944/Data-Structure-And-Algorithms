class MedianFinder {
public:
    /** initialize your data structure here. */
    /**priority_queue<int> pqmax;
    priority_queue<int,vector<int>, greater<int> > pqmin;
    MedianFinder() {
       
    }
    
    void addNum(int num) {
        if(pqmax.size()==pqmin.size()){
            if(pqmax.size()==0){
            pqmax.push(num);
                return;
            }
            else if(num<pqmax.top()){

                pqmax.push(num);
            }
            else{
                pqmin.push(num);
            }
        }
        else{
            //two cases are posiible
            //size of max is greater or size of min is greter than each other
            if(pqmax.size()>pqmin.size()){
                if(num>=pqmax.top()){
                    pqmin.push(num);
                    return;
                }
                else{
                    pqmax.push(num);
                    return;
                }

            }
            else{
                
                if(num<=pqmin.top()){
                    pqmax.push(num);
                    return;
                }
                else{
                    int temp=pqmin.top();
                    pqmin.pop();
                    pqmax.push(temp);
                    pqmin.push(num);
                }
            }
        }
        
    }
    
    double findMedian() {
        if(pqmax.size()==pqmin.size()){
            return (pqmax.top()+pqmin.top())/2.0;
        }
        else if(pqmax.size()>pqmin.size()){

            return pqmax.top();
            }
        else{
            return pqmin.top();

        }
    }
    **/
    priority_queue<int>q1;  //max_heap
priority_queue<int,vector<int>,greater<int> >q2; //min_heap
void addNum(int num) {      // adding the number stream in queue
   
    if(q1.empty() || q1.top() >= num)
        q1.push(num);
    else q2.push(num);
  
    if(q1.size() > q2.size() + 1){
        q2.push(q1.top());
        q1.pop();
    }
    else if(q1.size() < q2.size()){
        q1.push(q2.top());
        q2.pop();
    }
    
}

double findMedian() {
    if(q1.size() == q2.size())    // for even case
        return (q1.top() + q2.top()) / 2.0; 
   
    return q1.top();  // for odd case
}

};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */