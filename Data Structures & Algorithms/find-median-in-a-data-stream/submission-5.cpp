class MedianFinder {
private:
    priority_queue<int> first_half;
    priority_queue<int,vector<int>,greater<int>> second_half;

public:
    MedianFinder() {
    }
    
    void addNum(int num) {
        first_half.push(num);
        second_half.push(first_half.top());
        first_half.pop();
        
        if (second_half.size() > first_half.size()) {
            first_half.push(second_half.top());
            second_half.pop();
        }
    }
    
    double findMedian() {
        if (first_half.size() == second_half.size())
            return (first_half.top() + second_half.top())/2.0;
        else return first_half.top();
    }
};

