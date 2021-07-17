// 给两个List a,b，实现两个List两个List的并集，即合并两个List，重复的元素只保留一个。
// 不可以调用现成的集合方法
// 有空闲限制，a的长度是m，b的长度是n，额外空间最多用m+n (不是O(m+n))
// 尝试优化下，最少的时间复杂度是多少，在代码注释里给出最终的时间复杂度
public static class ListUnion {
         static List<Integer> union(List<Integer> a, List<Integer> b) {
               // 在这儿实现
                // Using STL to sort two lists
                a.sort();
                b.sort();
                // 常规思路:
                // Create a new List with using max space: m+n // (a.size() + b.size())
                List<Integer> result;
                int len1 = 0;
                int len2 = 0;
                // This method would make the final time complexity O(m+n)
                // 如果可以扩展extra space， 比如用hash table去各自List遍历一遍，我可以将时间复杂度缩短到O(m) 或者O(n)
                // 或者可以尝试 先整合，再Sort，再遍历一遍去除重复数字  但时间复杂度依旧是O(m+n)
                for(len1 < a.size() && len2 < b.size()){
                    if(a[len1] == b[len2]){
                        result.insert(a[len1]);
                        len1 ++;
                    }else if(a[len1] < b[len2]){
                        result.insert(a.[len1]);
                        len1 ++;
                    }else{
                        result.insert(b.[len2]);
                        len2 ++;
                    }
                }

                while(len1 < a.size())
                {
                    result.insert(a.[len1]);
                    len1 ++;
                }

                while (len2 < b.size())
                {
                    result.insert(b.[len2]);
                    len2 ++;
                }

                return result;
          }
          public static void main(String[] args) {
             // union([ 2, 1, 3], [ 2, 3, 4]) ==  [1, 2, 3, 4]
             System.out.println(union(Arrays.asList(2,1,3), Arrays.asList(2,3,4));
         }
}

