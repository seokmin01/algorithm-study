## 규칙

바킹독님의 코드 규칙

### 코딩 컨벤션

#### 필수

- [규칙1] `bits/stdc++.h`를 제외한 다른 헤더파일을 include해서는 안됩니다.
- [규칙2] `using namespace std`를 꼭 써야 합니다.
- [규칙3] `define`, `typedef`는 `#define X first`, `#define Y second`, `typedef long long ll;`만 허용합니다. `typedef long long ll;` 대신 `using ll = long long;`을 사용해도 됩니다. `#define pb push_back`, `#define all(x) (x).begin(), (x).end()` 등은 사용하지 않습니다.
- [규칙4] 탭은 **공백문자 4개**를 사용해야 합니다. (바킹독님의 경우에는 공백문자 2개)
- [규칙5] BFS 혹은 기타 좌표 개념이 들어가는 문제에서 가로와 세로는 강의에서 설명한 방향을 따라야 합니다.
- [규칙6] 입출력은 C++ stream을 이용해야 하고 `ios::sync_with_stdio(0); cin.tie(0);`을 main 함수의 제일 처음에 써야 하며 `endl`을 사용하지 않아야 합니다.
- [규칙7] `new`, `malloc`과 같은 동적 할당을 사용하지 않아야 합니다.
- [규칙8] 구조체 혹은 클래스 대신 `pair`, `tuple`을 사용해야 합니다. 
- [규칙9] 꼭 실수(`float`, `double`)로 계산을 해야하는 경우가 아니라면 모든 연산은 정수에서 이루어져야 합니다.
- [규칙10] 논리 AND, OR는 `and`, `or` 대신 `&&, ||`으로 작성해야 합니다.
- [규칙11] 문제에 필요한 알고리즘이나 자료구조에 대응되는 STL이 있을 경우 직접 구현하는 대신 STL을 활용해야 합니다.
- [규칙12] 문자열은 `char*` 대신 `string` 으로 처리해야 합니다.
- [규칙13] 중괄호는 K&R 스타일로 작성해야 합니다.

#### 권장

- [규칙14] 변수와 함수의 이름은 모두 소문자로 작성하는 것을 권장합니다.
- [규칙15] 변수와 함수의 이름은 어느 정도 의미하는 바를 드러내면서도 코드가 간결하도록 7글자 이내로 두는 것을 권장합니다(ex : `cnt, val, ret, score, board, dist`). `hap, gop, su`와 같은 변수는 사용을 자제해주세요.
- [규칙16] 한줄짜리 if, for, while 문에는 중괄호를 쓰지 않는 것을 권장합니다.
- [규칙17] 주석은 꼭 필요한 경우에만 간결하게 작성하는 것을 권장합니다.
- [규칙18] 변수는 전역 변수로 선언하든 지역 변수로 선언하든 상관없습니다. 배열의 경우에는 전역 변수로 선언하는 것을 권장하고 칸 수 또한 `+1 to +10` 정도의 여유를 두는 것을 권장합니다.
- [규칙19] 코드에 불필요한 로직이 없게끔 최대한 정리를 한 후에 PR하는 것을 부탁드립니다.
- [규칙20] 자주 반복되는 루틴은 적절하게 함수로 분리하는 것을 권장합니다. `적절하게`의 기준은 사람마다 다를 수 있기 때문에 강의 내에서 제가 작성했던 코드들을 참고해주세요. ([예시 1](https://github.com/encrypted-def/basic-algo-lecture/blob/master/0x0D/12100.cpp), [예시 2](https://github.com/encrypted-def/basic-algo-lecture/blob/master/0x0D/15683.cpp), [예시 3](https://github.com/encrypted-def/basic-algo-lecture/blob/master/0x0D/18808.cpp))
- [규칙21] 발상이 어렵거나, 해당 단원 혹은 이전 단원에서 배운 적 없는 알고리즘으로 해결했거나, 코드만 보고서는 풀이를 이해하기 어렵다고 판단될 경우 `/* */` 주석을 이용해 코드 하단에 간단하게 풀이를 설명해주시면 감사하겠습니다. ([예시 1](https://github.com/encrypted-def/basic-algo-lecture/blob/master/0x11/solutions/11000.cpp), [예시 2](https://github.com/encrypted-def/basic-algo-lecture/blob/master/0x0F/solutions/7795_1.cpp))
