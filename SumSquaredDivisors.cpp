#include<math.h>
#include<string>

using namespace std;

class SumSquaredDivisors
{
public:
    static long long dsqsum(long long i)
    {
      long long sum=0;
      for(long long j=1;j<=i;j++)
      {
        if(i%j==0)
          sum+=j*j;
      }
      return sum;
    }
    
    static bool check(long long sum)
    {
      long double res;
      res=sqrt(sum);
      
      return ((res-floor(res))==0);
    }
    
    static std::string listSquared(long long m, long long n)
    {
      long long sq;
      string res;
      res+="{";
      for(long long i=m;i<=n;i++)
      {
        sq=dsqsum(i);
        if(check(sq))
        {
          if(res.size()==1)
            res+="{"+to_string(i)+", "+to_string(sq)+"}";
          else
            res+=", {"+to_string(i)+", "+to_string(sq)+"}";
         }
       }
       res+="}";
       return res;
    }
};
