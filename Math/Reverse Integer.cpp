// int��ΧΪ-2147483648��2147483647 ��4�ֽڡ�
//���ǵ�����x=1000000003 ���������ת���������������result����Ϊlong long int(longlong��64λ��long ��ȫ�����ֳ�����һ����64��)
//��ĿҪ�������ת���������int�ķ�Χ�ڣ��򷵻�0
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