一个简单的 web服务器 支持 http post/get请求、目录浏览等，支持 html 、图片、text 等文件 
可以作为临时资源分享或者本地站html站点服务器.  
1、免安装，仅一个exe，双击即可  
2、可配置根目录，不配置默认是软件所在目录  
**设置页面：**  

![image-20200426143804099](https://i.loli.net/2020/04/26/rzuYSTsMHwL5va2.png)

**软件主图：**   
![](https://i.loli.net/2020/04/26/X81vGRp5xNlYose.png)

**隐藏工具栏：**  

![image-20200426144002933](https://i.loli.net/2020/04/26/2IH8QusziBwhPDp.png)


#### 2020-4-26 更新

1、修改软件名称以及作者信息

2、添加css、js支持

---

### 以下内容为[QPPHTTPServer](https://github.com/TedQue/QPPHTTPServer.git)更新日志

#### 2012-5-17 更新内容
1.重新整理 FCGIResponder 的三个数据流的代码,现在的代码写得太恶心了.  
2.添加全缓冲模式.  

#### 2012-4-22 更新内容
v0.2版的功能已经实现.  

1. IOCPNetwork 和 XmlDocument 两个类还需要再改进.  
2. XPath 要实现,这样 xml 模块才能真正发挥作用. 返回节点集的时候,可以用类似智能指针的技术,返回一个 new 的 list指针, 用一个类包装它,析构是自动删除.  



#### 2012-4-17 更新内容
XMLNode 内码还是UNICODE,用不用 UTF-8?  
OS_Conv() 的接口重新设计  
int OS_Conv("utf-8", "gb2312", src, srcLen, dest, destLen);  
Windows 平台下的具体实现要囊括所有的中文编码.  

====================
改进XML模块,减少内存的使用量  

1. 分析函数 `LoadNode()` 直接接受 char字符串输入.
2. 分析函数 `LoadNode()` 可分块调用,每个状态都可以恢复.
3. 输出函数 `GetNode()` 可分块调用.



#### 2012-4-16 更新内容
如何简单的支持 XPath  

1. 对于绝对路径使用` /root/child1/child2`
2. 对于相对路径使用 `./child1/child2` 或者 `nodename/child1/child2`

目前就先这样好了.  

定义一个 class XPath   

1. 构造函数接受一个字符串.
2. bool GetFirst()
3. bool GetNext()
4. bool IsAbsolutePath()

或者 
```
XPath(const std::string &path, XmlDocument *doc);  
XMLHANDLE XPath::GetNode();  
```
问题: XPath 是直接操作 XmlDocument 好还是只是提供解析 XPath 字符串的功能好?  

#### 2012-4-15 更新内容

1. XmlDocument 处理 xml协议节点的方式还要在斟酌一下.
2. XMLNode::GetNode 缓冲区越界的问题.

#### 2012-4-11 更新内容
XmlDocument 在两处使用递归函数的地方使用栈和循环代替.  

#### 2012-4-10 更新内容
FCGIResponder 中2个使用了大局部变量的函数 sendPostData() 直接使用发送缓冲 reserve(),   initFCGIEnv() 也如此,避免栈溢出.  



### 鸣谢：

本程序Fork自：[QPPHTTPServer](https://github.com/TedQue/QPPHTTPServer.git)