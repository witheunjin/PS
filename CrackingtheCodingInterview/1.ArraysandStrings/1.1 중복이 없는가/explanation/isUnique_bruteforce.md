# isUnique_bruteforce

### 📋 contents

1. code : isUnique_brute()
2. code : main()
3. result

-----

#### 📝 사전지식(prior knowledge)

*null*

---------

## 1. code : isUnique_brute()

```c++
bool isUnique_brute(const string &str) {
    for(int i=0; i<str.length()-1; ++i) {
        for(int j=i+1; j<str.length(); ++j) {
            if(str[i]==str[j]) {
                cout<<"character at index "<<i<<"(="<<str[i]<<") is same as ";
                cout<<"character at index "<<j<<"(="<<str[j]<<")"<<endl;
                return false;
            }
        }
    }
    return true;
}
```

- **완전탐색(brute force)**을 이용하여 해결.

- 시간복잡도는 **O(N)** *(N은 문자의 개수)*

## 2. code : main()

```c++
int main() {
    cout<<"<isUnique :: brute force>"<<endl;
    string words[3] = {"apple", "mango", "kiwi"};
    for(auto word : words) {
        cout<<"input : "<<word<<endl;
        cout<<"result : ";
        if(isUnique_brute(word)) cout<<"duplication doesn't exist"<<endl;
        else cout<<"duplication exists"<<endl;
        cout<<endl;
    }
    return 0;
}
```

## 3. result

```
<isUnique :: brute force>
input : apple
result : character at index 1(=p) is same as character at index 2(=p)
duplication exists

input : mango
result : duplication doesn't exist

input : kiwi
result : character at index 1(=i) is same as character at index 3(=i)
duplication exists
```

