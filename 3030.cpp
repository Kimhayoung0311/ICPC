//
//  3030.cpp
//  ICPC_regional
//
//  Created by 김하영 on 2018. 4. 3..
//  Copyright © 2018년 HAYOUNG_KIM. All rights reserved.
//
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(int a, int b){
    return a>b;
}

int main(){
    int n;
    scanf("%d",&n);
    if(n%10 != 0){ //30의 배수를 아예 만들 수 없는 경우
        printf("-1\n");
        return -1;
    }
    else{
        vector<int> arr;
        int temp=n;
        int sum=0;
        temp=temp/10;
        while(temp>0){
            arr.push_back(temp%10);
            sum=sum+temp/10;
            temp=temp/10;
        }
       // sort(arr.begin(),arr.end(),comp);
        sort(arr.begin(),arr.end());
        
        for(int i=0; i<arr.size(); i++)
            sum=sum+arr[i];
        if(sum%3 ==0 ) printf("we");
        else{
            
        }
    }

    return 0;
}


