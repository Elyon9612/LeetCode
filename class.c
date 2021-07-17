// 1. 完成这个类的编写
class ValidIpWrapper
{
public :
    explicit ValidIpWrapper(const char *input)
    {
            size_t size = strlen(input);
            content_ = new char[size + 1];
            content_[size] = '\0';
            memcpy(content_, input, size);
         
    }
      // 说明：如果content_ 是一个合法的IPV4则返回 true，否则返回 false
  bool IsAValidIpv4() const
    { /* 2.实现该函数（请尽量不要用库函数） */
    string array[] = &content_.split("\\.");
    if(array.size() != 4){
        return false;
    }
    for(int i=0;i<array.size();i++){
        int num = 0;
        check if 0<array[i] < 255
        check if array[i] != 0 && array[i]start with 0  // like 01 return false

    }
    }
     private :
  char *content_ = nullptr;
};
int main()
{
      ValidIpWrapper valid_ip("12.258.25.2");
      std::cout << (valid_ip.IsAValidIpv4() ? "true" : "false") << std::endl;
      return 0;
}