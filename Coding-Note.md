## include <bits/stdc++.h>
**包含C++所有的头文件**
****
## C/C++中sizeof()、strlen()、length()、size()的区别：  
**一、数组或字符串的长度：sizeof()、strlen()**  
&emsp; 1、sizeof()：返回所占总空间的字节数  
&emsp;&emsp;(1)、对于整型字符型数组  
&emsp;&emsp;(2)、对于整型或字符型指针  
&emsp; 2、strlen()：返回字符数组或字符串所占的字节数  
&emsp;&emsp;(1)、针对字符数组  
&emsp;&emsp;(2)、针对字符指针
```
char ss[100] = "0123456789";

sizeof(ss)为100

sizeof(*ss)为1，*ss是第一个字符

strlen(ss)为10
```
**二、C++中的string中length()和size()没有区别**
****
**string对象的相关操作**
```
#include <string>
using namespace std;

string s = "123456789";

s.erase(start, length);

s.insert(2, b);  //在s中下标为2的字符前插入字符串b

s.find(b, pos);  //从s字符串中pos位置开始查找字符串b，返回其第一次出现的下标。

int t = s.find(b, pos);
t == string::npos  //表示未找到，不等于表示找到

s.c_str();     //将string类对象转换成c中的字符串样式，但不能直接赋值，一定要使用strcpy()函数操作

char c[20];
string s = "1234";
strcpy(c, s.c_str());
```
**string.h中字符串处理函数**
```
strcpy(str1, str2);     //把字符串str2(包括'\0')拷贝到字符串str1当中，并返回str1

strncpy(str1, str2, count);     //把字符串str2中最多count个字符拷贝到字符串str1，并返回str1.如果str2中少于count个字符，用'\0'填充。

strcat(str1, str2);     //把str2(包括'\0')拷贝到str1的尾部（连接），并返回str1.其中终止原str1的'\0'被str2的第一个字符覆盖。

strncat(str1, str2, count);     //同上，把str2最多count个字符连接到str1尾部。

strcmp(str1, str2);     //比较两个字符串。 小于0，str1 < str2； 大于、等于同理。

strncmp(str1, str2, count);     //同上，最多比较count个字符。

strstr(str1, str2);     //返回指向字符串str2第一次出现在字符串str1中的位置的指针；如果str1中不包含str2，返回NULL。

strchr(str, ch);        //返回指向字符串str中字符ch第一次出现的位置的指针，若不包括，返回NULL。

strrchr(str, ch);       //返回指向字符串str中字符ch最后一次出现的位置的指针，若不包括，返回NULL。

memset(str, c, n);      //赋值字符c到str所指向的字符串的前n个字符。
```
****
**math.h中常用函数**
```
double pow(double x, double y);     //x的y次方。
sqrt(int x);  //开方。
```
****
**优先队列**
```
#include <queue>
#inlcude <vector>
using namespace std;

priority_queue<int> Q;      //建立大顶堆
priority_queue<int, vector<int>, greater<int> > Q;      //小顶堆
```
****
**c++数字与字符串的转换( sprintf()、sscanf() )**
+ sprintf() 用于将数字转化为字符串
```
#include <string>
using namespace std;

char str[10];
int a = 1234;
double b = 123.432;
//将整型数转化为字符串
sprintf(str, "%d", a);
//将浮点数转化为字符串
sprintf(str, "%.3lf", b);
```
+ sscanf() 用于将字符串转化为数字
```
#include <string>
using namespace std;

char str[] = "12345";
int a;
//将字符串转化为整型数
sscanf(str, "%d", &a);

char str[] = "123.321";
double b;
//将字符串转化为浮点数
sscanf(str, "%.3lf", &b);
```
****
### 用STL全排列函数，不断求上一个字典序---头文件\<algorithm\>  
**prev_permutation()函数用法：**  
&emsp; （buf, buf + n）内为内存中的一段连续空间的起点和终点，每次调用都将指定内存中的值修改为上一个字典序，如果当前排列已是第一个，返回"false"。  
**next_permutation()函数：**  
&emsp; 求一个排序的下一个排列的函数。如果存在当前序列之后的排列，就返回true。如果当前序列是最后一个排列没有后继，返回false。
****
### C++产生随机数
&emsp; srand()可用来设置rand()产生随机数时的随机数种子。  
&emsp; 可以利用srand((int)time(NULL))的方法，利用系统时钟，产生不同的随机数种子。
```
#include <ctime>

srand((int)time(0));   //产生随机种子 把0换成NULL也行
for(int i = 0; i < 10; i++){
    cout << rand() % 100 << " ";
}
```
****
### C++向上取证/向下取整  
函数名称|函数说明
--|:--:
floor()|不大于自变量的最大整数  
ceil()|不小于自变量的最小整数
round()|四舍五入到最邻近的整数   
****
### 累加求和   
&emsp; 在numeric头文件里有函数accumulate(头指针，尾指针，初始值)。头两个形参指定要累加的元素范围，第三个形参则是累加的初值。    
```
for(int i = 1; i <= n; i++) a[i] = i;   //将1~n存入数组
printf("%d", accumulate(a+1, a+n+1, 0)); //调用STL
```     
****  
### 几种输入方法的总结  
+ **scanf**  
&emsp; scanf()在读取**数字**时会跳过空格、制表符和换行符！（换行符不进数据缓冲区）   
```
    int main()
    {
        int str[6];
        for(int i = 0; i < 3; i++){
            scanf("%d", &str[i]);
        }
        for(int i = 0; i < 3; i++){
            printf("%d", str[i]);
        }
        return 0;
    }
```
```
    输入：
    1[回车]
    2[回车]
    3[回车]
    输出：
    123
```
&emsp; scanf()在读取**字符**时，<font color=red>回车符会残留在数据缓冲区中</font>  
```
    int main()  
    {
        char str[6];
        for(int i = 0; i < 3; i++){
            scanf("%c", &str[i]);
        }
        for(int i = 0; i < 3; i++){
            printf("%c", str[i]);
        }
        return 0;
    }
```  
```
    输入：
    A[回车]
    B[回车]
    输出：
    A
    B
```  
+ **cin**  
&emsp;结果同scanf的输入数字。cin后的回车符会留在缓冲区中，只不过cin流有一个默认状态是为输入操作符（即">>"操作符）跳过空白，所以默认情况下用输入操作符读取时会跳过回车符等空白字符。即不受回车符的影响。
+ **cin.get()**：它是面向字符的输入方法。  
   + 如果待输入的对象是字符数组，应该是cin.get(字符数组名，接受字符数目)，**该方法可以接受空格和Tab**  
   + 如果待输入的对象是字符变量，那么应该是cin.get(字符变量名)  
+ **cin.getline()**：它是面向字符数组的输入方法。  
&emsp;它的用法是cin.getline(字符数组名，接收字符数目)，**该方法可以接收空格和Tab**  
&emsp; 当用户输入完毕回车时，**cin.getline()不会再在输入缓冲中保存换行符，而cin.get()会（cin也会）**  
+ **getline()**：面向string字符串的输入方法。用法时getline(cin，字符串名)，**该方法可以接收空格和Tab**  
+ **gets()**：这个方法编译器提示不安全  
+ **getchar()**：面向字符的输入方法  
****  
### 字母、字符串大小写转换  
+ **C语言下字母的大小写转换 —— toupper()、tolower()**  
```  
#include<ctype.h>
#include<string>
using namespace std;

string s = "ABC";
for(int i = 0; i < s.size(); i++){
    s[i] = tolower(s[i]);   转小写
}
for(int i = 0; i < s.size(); i++){
    s[i] = toupper(s[i]);   //转大写
}
```  
+ **C++下字符串的大小写转换 —— transform()**    
```
#include<algorithm>
#include<string>
using namespace std;

string s = "ABC";
transform(s.begin(), s.end(), s.begin(), ::tolower);  //注意 :: ，且没有 ()
transform(s.begin(), s.end(), s.begin(), ::toupper); 
```  
****
### Vector  
```
#include<stdio.h>
#include <vector>
using namespace std;

// vector的初始化
vector<int> list1;    //vector为空，size为0，不能用list1[i]
vector<int> list2(list1);
vector<int> list3 = {1, 2, 3, 4, 5};
vector<int> list4 {1, 2, 3, 4, 5};
vector<int> list5(list4.begin()+2, list4.end()-1);  //list5 = {3, 4}
vector<int> list6(7);   //list6中将包含7个元素，每个元素进行缺省的值初始化，int为0  
vector<int> list7(7, 3);   //list7被初始化为包含7个值为3的int

// 遍历 
for(vector<int>::iterator it = list.begin(); it != list.end(); it++){
    ...
}   
for(int i = 0; i < list.size(); i++){   //不通用
    ...
}

struct Edge {
	int nextNode;
	int cost;
}; 

vector<Edge> edge[10];

// 清空链表 
for(int i = 0; i < 10; i++){
	edge[i].clear();
}

// 添加 
Edge tmp;
tmp.nextNode = 3;
tmp.cost = 38;
edge[1].push_back(tmp);

// 删除 
edge[1].erase(edge[1][2].begin() + 1, edge[1][2].end()+1); // （第一个要删除的元素的编号， 最后一个要删除的元素的编号+1）

// 查询 
for(int i = 0; i < edge[2].size(); i++){
	int nextNode = edge[2][i].nextNode;
	int cost = edge[2][i].cost;
} 
```
****  
### Map  
```
map<string, int> M;
M.clear();
M.find(b);  //确定map中是否保存string对象b的映射，若没有函数返回M.end(), 与string的find判断区别  
M[b] = idx; 
idxb = M[b];

//map的遍历
for(auto it = M.begin(); it != M.end(); it++){
    ...
}
```  
****  
### 素数 线性筛法  
```
int prime[MAXN];
int flag[MAXN] = {0};
int primeSize;

void init(){
    primeSize = 0;
    for(int i = 2; i <= n; i++){
        if(flag[i] == 0){
            prime[primeSize++] = i;
        }

        for(int j = 0; j < primeSize && i * prime[j]; j++){
            flag[i * prime[j]] = 1;
            if(i % prime[j] == 0)   break;
        }
    }
}
```  
&emsp; 偶数位的回文数不是质数。  
****  
### C++标准输出保留几位小数，用setprecision与fixed合作  
```  
#include<iomanip>
using namespace std;

double s = 20.7843909;
cout << setprecision(3) << s << endl;     //输出20.7  

cout << fixed << setprecision(3) << s << endl;    //输出20.784  

cout.self(ios::fixed);
cout << setprecision(3) << s << endl;     //输出20.784  
```  
  





