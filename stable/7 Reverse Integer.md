##1、题目

Reverse digits of an integer.

Example1: x = 123, return 321
Example2: x = -123, return -321 

##2、wepon的解法
###2.1 解析
###2.2 代码


    // int范围为-2147483648～2147483647 【4字节】
    //考虑到诸如x=1000000003 的情况，反转过来会溢出，所以result设置为long long int(longlong是64位，long 是全机器字长，不一定是64的)
    //题目要求如果反转后的数不在int的范围内，则返回0
    class Solution {
    public:
        int reverse(int x) { 
         long long int result=0; 
         while(x) {
             int m=x%10;
             result=result*10+m;
             x=x/10;
         }
         return (result>=INT_MIN && result<=INT_MAX)?result:0 ;
        }
    };
    
##3、有更好的解法？快来占位吧 ^_^