/*
#include <stdio.h>

int main()
{
	int T, R;
	char S[21];
	scanf("%d", &T);
	for(int i=0; i<T; i++){
		scanf("%d", &R);
		scanf("%s", &S)
		for(int j=0; j<R; j++){
				for (int k=0; k<R; k++){
					printf("%c", S[j]);
			}
		}printf("\n");
	}
	return 0;
}

//예시데로는 잘 나오는데 계속 틀렸다고 나옴...
*/

/*=================================================================*/

//다음과 같이 for문을 while문으로 바꿨을 경우에, 맞다고 나온다...

#include <stdio.h>
#include <string.h>
 
int main() {
    int T, R;
    char S[21];
    
    scanf("%d", &T);
    //T만큼의 테스트케이스
    while (T--) {
        scanf("%d %s", &R, S);
        
        //결과를 출력하기 위한 반복문
        for (int i = 0; i < strlen(S); i++) {
            for (int j = 0; j < R; j++)
                printf("%c", S[i]);
        }
 
        printf("\n");
    }
    return 0;
}
