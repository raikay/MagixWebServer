һ���򵥵� web������ ֧�� http post/get����Ŀ¼����ȣ�֧�� html ��ͼƬ��text ���ļ� 
������Ϊ��ʱ��Դ������߱���վhtmlվ�������.  
1���ⰲװ����һ��exe��˫������  
2�������ø�Ŀ¼��������Ĭ�����������Ŀ¼  
**����ҳ�棺**  

![image-20200426143804099](https://i.loli.net/2020/04/26/rzuYSTsMHwL5va2.png)

**�����ͼ��**   
![](https://i.loli.net/2020/04/26/X81vGRp5xNlYose.png)

**���ع�������**  

![image-20200426144002933](https://i.loli.net/2020/04/26/2IH8QusziBwhPDp.png)


#### 2020-4-26 ����

1���޸���������Լ�������Ϣ

2�����css��js֧��

---

### ��������Ϊ[QPPHTTPServer](https://github.com/TedQue/QPPHTTPServer.git)������־

#### 2012-5-17 ��������
1.�������� FCGIResponder �������������Ĵ���,���ڵĴ���д��̫������.  
2.���ȫ����ģʽ.  

#### 2012-4-22 ��������
v0.2��Ĺ����Ѿ�ʵ��.  

1. IOCPNetwork �� XmlDocument �����໹��Ҫ�ٸĽ�.  
2. XPath Ҫʵ��,���� xml ģ�����������������. ���ؽڵ㼯��ʱ��,��������������ָ��ļ���,����һ�� new �� listָ��, ��һ�����װ��,�������Զ�ɾ��.  



#### 2012-4-17 ��������
XMLNode ���뻹��UNICODE,�ò��� UTF-8?  
OS_Conv() �Ľӿ��������  
int OS_Conv("utf-8", "gb2312", src, srcLen, dest, destLen);  
Windows ƽ̨�µľ���ʵ��Ҫ�������е����ı���.  

====================
�Ľ�XMLģ��,�����ڴ��ʹ����  

1. �������� `LoadNode()` ֱ�ӽ��� char�ַ�������.
2. �������� `LoadNode()` �ɷֿ����,ÿ��״̬�����Իָ�.
3. ������� `GetNode()` �ɷֿ����.



#### 2012-4-16 ��������
��μ򵥵�֧�� XPath  

1. ���ھ���·��ʹ��` /root/child1/child2`
2. �������·��ʹ�� `./child1/child2` ���� `nodename/child1/child2`

Ŀǰ������������.  

����һ�� class XPath   

1. ���캯������һ���ַ���.
2. bool GetFirst()
3. bool GetNext()
4. bool IsAbsolutePath()

���� 
```
XPath(const std::string &path, XmlDocument *doc);  
XMLHANDLE XPath::GetNode();  
```
����: XPath ��ֱ�Ӳ��� XmlDocument �û���ֻ���ṩ���� XPath �ַ����Ĺ��ܺ�?  

#### 2012-4-15 ��������

1. XmlDocument ���� xmlЭ��ڵ�ķ�ʽ��Ҫ������һ��.
2. XMLNode::GetNode ������Խ�������.

#### 2012-4-11 ��������
XmlDocument ������ʹ�õݹ麯���ĵط�ʹ��ջ��ѭ������.  

#### 2012-4-10 ��������
FCGIResponder ��2��ʹ���˴�ֲ������ĺ��� sendPostData() ֱ��ʹ�÷��ͻ��� reserve(),   initFCGIEnv() Ҳ���,����ջ���.  



### ��л��

������Fork�ԣ�[QPPHTTPServer](https://github.com/TedQue/QPPHTTPServer.git)