#include <stdio.h>
#include <stdbool.h>

//六角形を描く関数を定義する＞＞＞辺長、様式（？）を引数に
void drawhexagram(int edge, bool fil){
    int height, width, space;
    height = edge / 2;
    
    if(fil == true){
    	//Upper half
    	for(int i = 0; i < height; i++){
    		width = edge + i;
    	    space = edge/2 - i;
    	    
    	    for(int j = 0; j < space; j++){
    	    	printf(" ");
    	    }
    		for(int k = 0; k < width; k++){
    			printf("＊");
    		}
    		printf("\n");
    	}
    	
    	//Lower half
    	for(int i = 0; i < height + 1; i++){
    		width = edge + edge/2 - i;
    		space = i;
    		
    		for(int j = 0; j < space; j++){
    			printf(" ");
    		}
    		for(int k = 0; k < width; k++){
    			printf("＊");
    		}
    		printf("\n");
    	}
    	printf("\n");
    }
    
    else{
    	//first line
    	for(int j = 0; j < edge/2; j++){
    		printf(" ");
    	}
    	for(int k = 0; k < edge; k++){
    		printf("＊");
    	}
    	printf("\n");
    	
    	//upper half
    	for(int i = 1; i < height; i++){
    		width = edge + i;
    	    space = edge/2 - i;
    	    
    	    for(int j = 0; j < space; j++){
    	    	printf(" ");
    	    }
    	    printf("＊");
    		for(int k = 0; k < width-2; k++){
    			printf("  ");
    		}
    		printf("＊");
    		printf("\n");
    	}
    	
    	//lower half
    	for(int i = 0; i < height; i++){
    		width = edge + edge/2 - i;
    		space = i;
    		
    		for(int j = 0; j < space; j++){
    			printf(" ");
    		}
    		printf("＊");
    		for(int k = 0; k < width-2; k++){
    			printf("  ");
    		}
    		printf("＊");
    		printf("\n");
    	}
    	
    	//last line
    	for(int j = 0; j < edge/2; j++){
    		printf(" ");
    	}
    	for(int k = 0; k < edge; k++){
    	    printf("＊");
    	}
    	printf("\n");
   }
}

int main(void){
    int param;
    printf("2以上の整数を入力してください＞＞＞　");
    scanf("%d", &param);
    
    drawhexagram(param, true);
    drawhexagram(param, false);
}