# isUnique_bitset

### 📋 contents

1. code : isUnique_bitset()
2. code : main()
3. result

-----

#### 📝 사전지식(prior knowledge)

1. 아스키 코드의 총 개수는 128개이다. (문자, 숫자, 특수기호 등등)
2. bitset의 이름이 b인 경우 `b.test(n)`은 b의 인덱스 n의 비트값이 0인지 1인지 검사한다.
3. bitset의 이름이 b인 경우, `b.set(n)`은 인덱스 n의 비트값을 1로 설정한다.

---------

## 1. code : isUnique_bitset()

```c++
bool isUnique_bitset(const string &str) {
    bitset<256> bits(0);
    for(int i=0; i<str.length(); ++i) {
        int val = str[i];
        if(bits.test(val) > 0) return false;
        bits.set(val);
    }
    return true;
}
```

`bitset<256> bits(0)` : ASCII code의 총 개수는 128개. 각 문자별 2개의 비트(0,1)가 필요하므로 256비트짜리 bits를 선언

`int val = str[i]` : 각 문자를 정수값으로 변환

`if(bits.test(val) > 0)` : 해당 위치의 비트값이 1이면, 이미 해당 문자가 있었다는 것이므로 false반환

`bits.set(val)` : 해당 위치의 비트값을 1로 설정

## 2. code : main()

```c++
int main() {
    cout<<"<isUnique_bitset>"<<endl;
    string words[3] = {"apple", "mango", "kiwi"};
    for(auto word : words) {
        cout<<"input : "<<word<<endl;
        cout<<"result : ";
        if(isUnique_bitset(word)) cout<<"duplication doesn't exist"<<endl;
        else cout<<"duplication exist"<<endl;
        cout<<endl;
    }
    return 0;
}
```

## 3. result

```
<isUnique_bitset>
input : apple
result : duplication exist

input : mango
result : duplication doesn't exist

input : kiwi
result : duplication exist
```

