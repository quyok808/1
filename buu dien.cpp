#include<stdio.h>
#include<stdlib.h>
#define MAX_STRING_LENGTH 6

struct package
{
	char id;
	int Can_Nang;
};

typedef struct package package;

struct post_office
{
	int min_Can_Nang;
	int max_Can_Nang;
	package Kien_Hang;
	int So_Kien_Hang;
};

typedef struct post_office post_office;

struct town
{
	char Ten;
	post_office Buu_Dien;
	int So_Buu_Dien;
};

typedef struct town town;

int main()
{
	
	return 0;
}
