  #include <iostream>
  #include <cstdio>
  #include <algorithm>
  #include <vector>
  using namespace std;
  struct Day{
    int start_month;
    int start_day;
    int end_month;
    int end_day;
  };
  bool compares(const Day& d1, const Day& d2){
    if(d1.start_month == d2.start_month && d1.start_day == d2.start_day){
      if(d1.end_month>d2.end_month)
        return true;
      else if(d1.end_month==d2.end_month){
        if (d1.end_day>d2.end_day)
          return true;
        else
          return false;
      }
      else
        return false;
    }
    else{
      if(d1.start_month>d2.start_month)
        return false;
      else if(d1.start_month==d2.start_month){
        if (d1.start_day>d2.start_day)
          return false;
        else
          return true;
      }
      else
        return true;
    }
    
    
  }
  int main(){
    vector<Day> v;
    Day day;
    int num;
    scanf("%d",&num);
    while(num--){
        int a,b,c,d;
      scanf("%d/%d %d/%d",&a,&b,&c,&d);
      day.start_month =a;
      day.start_day =b;
      day.end_month =c;
      day.end_day=d;
      v.push_back(day);
    }
    sort(v.begin(),v.end(),compares);
    int len=v.size();
    int flag=0;
    int pre_month=v[0].end_month;
    int pre_day=v[0].end_day;
    for(int i=1;i<len;i++){
      if(pre_month<v[i].start_month){
        pre_month=v[i].end_month;
        pre_day=v[i].end_day;
        continue;;
      }
      else if(pre_month==v[i].start_month && pre_day <= v[i].start_day){
        pre_month=v[i].end_month;
        pre_day=v[i].end_day;
        continue;
      }
      else{
        if(pre_month<v[i].end_month){
          flag=1;
          break;
        }
        else if(pre_month==v[i].end_month && pre_day<v[i].end_day){
          flag=1;
          break;
        }
      }
      pre_month=v[i].end_month;
      pre_day=v[i].end_day;
    }
    if(flag)
      cout<<"No";
    else
      cout<<"Yes";
      
      
  }

