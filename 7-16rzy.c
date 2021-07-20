// 1. 完成这个类的编写
class ValidIpWrapper {
 public:
  explicit ValidIpWrapper(const char* input) {
    size_t size = strlen(input);
    content_ = new char[size + 1];
    content_[size] = '\0';
    memcpy(content_, input, size);
  }
  // 说明：如果content_ 是一个合法的IPV4则返回 true，否则返回 false
  bool IsAValidIpv4() const { /* 2.实现该函数（请尽量不要用库函数） */  
    int index = 0;
    int size = 0;
    while(content_[index] != '\0'){
        string s;
        while(index != '.'){
            if(!isdigit(content_[index])) return false;     // Check if the char is not '.' or digit

            s += content_[index];
            index ++;
        }
        if(s.length() > 1 && s[0] == '0')   return false;   // Check if there exist invalid number with start at 0
        int number = stoi(s);                               // Transfer to numbers
        if(number < 0 || number > 255)                      // Check if number is between 0-255
            return false;
        size ++;
        index ++;
    }
    if(size != 4) return false;                             // check if there are only four group of numbers for IPv4
    return true;
 }
 private:
  char* content_ = nullptr;
};
int main() {
  ValidIpWrapper valid_ip("12.258.25.2");
  std::cout << (valid_ip.IsAValidIpv4() ? "true" : "false") << std::endl;
  return 0;
}