/*
��һ��Ͱ��������ʱ��ռ临�Ӷ�
*/
class Solution {
public:
    int maximumGap(vector<int> &num) {
       if (num.size() < 2) return 0;
        //����һ�飬�ҳ������Сֵ
        int maxNum = num[0];
        int minNum = num[0];
        for (int i : num) {
            maxNum=max(maxNum,i);
            minNum=min(minNum,i);
        }
        // ÿ��Ͱ�ĳ���len,����ȡ�����Լ�+
        int len = (maxNum - minNum) / num.size() + 1;
        
        //Ͱ�ĸ���:(maxNum - minNum) / len + 1,ÿ��Ͱ����洢���ڸ�Ͱ�����ֵ����Сֵ���ɣ�ע������������Сֵ�Ǿֲ���
        vector<vector<int>> buckets((maxNum - minNum) / len + 1);
        for (int x : num) {
            int i = (x - minNum) / len;
            if (buckets[i].empty()) {
                buckets[i].reserve(2);
                buckets[i].push_back(x);
                buckets[i].push_back(x);
            } else {
                if (x < buckets[i][0]) buckets[i][0] = x;
                if (x > buckets[i][1]) buckets[i][1] = x;
            }
        }
        //gap�ļ��㣬For each non-empty buckets p, find the next non-empty buckets q, return min�� q.min - p.max ��
        int gap = 0;
        int prev = 0;
        for (int i = 1; i < buckets.size(); i++) {
            if (buckets[i].empty()) continue;
            gap = max(gap, buckets[i][0] - buckets[prev][1]);
            prev = i;
        }
        return gap;
    }
};





/*
���������Ӷ�O��nlogn��
*/
class Solution {
public:
    int maximumGap(vector<int> &num) {
        if(num.size()<2) return 0;
        sort(num.begin(),num.end()); //O(nlogn)
        int gap=-1;
        for(int i=1;i<num.size();i++){
            gap=max(gap,num[i]-num[i-1]);
        }
        return gap;
    }
};