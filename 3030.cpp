//
//  3030.cpp
//  ICPC_regional
//
//  Created by 김하영 on 2018. 4. 3..
//  Copyright © 2018년 HAYOUNG_KIM. All rights reserved.
//


//모르게따아아아아아아
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n%10 != 0){ //30의 배수를 아예 만들 수 없는 경우
        printf("-1\n");
        return -1;
    }
    else{
        int temp=n;
        int sum=0;
        while(temp>10){
            sum=sum+temp/10;
            temp=temp%10;
        }
        if(temp/3==0){
            
        }
    }
}


