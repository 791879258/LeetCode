/*
˼·��
ʹ���ַ���������istringstream���ַ���S��������Ȼ���ַ���������ַ������������װ��������
���S�������ʷ������װ��S
*/

class Solution {
public:
    void reverseWords(string &s) {
        istringstream istr(s);     //istr��s��ȡ�ַ����Կհ���Ϊ�ָ���
		vector<string> vec; 
		string word;
		while(istr>>word) 
			vec.push_back(word);
		s="";  //s���
		if(!vec.empty()){
	    	for(vector<string>::iterator i=vec.end()-1;i!=vec.begin();i--)
		    	s=s+*i+" ";
	    	s=s+vec[0];
		}
    }
};