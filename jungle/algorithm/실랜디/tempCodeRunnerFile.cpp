//도키도키 간식드리미
// 스택에 쌓이는게 순서가 만약 역순이라면 끝임
// 5 - 4 는 가능하지만
// 4 - 5 는 스택에서 꺼낼 수 없음

#include <stack>
#include <iostream>

using namespace std;

int main() {
  stack<int> st;

  int N;
  cin >> N;

  int peoples[N];
  for(int i = 0; i<N; i++){
    cin >> peoples[i];
  }

  int count = 1;

  for(int i = 0; i<N; i++){
    if(peoples[i] != count){
      if(!st.empty()){
        if(count == st.top()){
          st.pop();
          count++;
        }
      }
      // cout << "inert value = " << peoples[i] << "\n";
      st.push(peoples[i]);
    } else {
      count++;
    }
  }

  for(int i = 0; i<st.size(); i++){
    // cout << "count = " << count << "\n";
    // cout << "st.top = " << st.top() << "\n";
    int temp = st.top();
    if(count != st.top()){
      cout << "Sad";
      return 0;
    }
    st.pop();
    count ++;

  }
  cout << "Nice";
  return 0;
}