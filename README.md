wsl 환경에서 clock_gettime함수를 사용할 수 없었기에, 최대한 비슷한 커널함수 gettimeofday()를 사용하여 진행하였습니다.

그리고 timespec 구조체 말고 timeval 구조체를 사용해서 비슷한 형식으로 코드를 작성했습니다

해당 구조체는 멤버로 ns가 아니라 us의 단위를 갖고있습니다
