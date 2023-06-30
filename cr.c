#include <stdio.h>
#include <string.h>

struct book{
  int id;
  char title[100];
  char author[100];
};
int main(){
  struct book r = {1,"바람과 함께 사라지다","마가렛 미첼"};
  printf("%d, %s %s",r.id,r.title,r.author);
  \
}

typedef struct{
  char number[100];
  char name[100];
  int score;
}STU;

int main()
{
  int i;
  STU r[5] = {
    {"1101","강마고",50},
    {"1102","고마고",99},
    {"1103","나마고",79},
    {"1104","박마고",66},
    {"1105","소마고",100}
  };
  for(i=0;i<5;i++){
  if(79 < r[i].score){
    printf("%s %s\n",r[i].number,r[i].name);
    
  }
  }
}

struct date {
   int year;
   int month;
   int day;
};

struct telephon {
   char name[10];
   char tel[16];
   struct date d;
};

int main(){
  char k;
  struct telephon t[3];
  struct telephon tt[3] = {
  {"gsm","010-1111-1111",{2020,12,12}},
  {"msg","010-2222-1111",{2020,12,12}},
  {"mbc","010-3333-3333",{2020,12,12}},
  };

  printf("입력\n");
  scanf("%s",&k);

  if(k=="gsm"||k=="010-1111-1111"){
    printf("%s %s %d",tt.name,tt.tel,date.year,date.month,date.day);
  }
}


struct student {
    int num;
    char name[10];
    double grade; 
};
int equal(struct student * aa, struct student * bb);

int main() {
    // 구조체와 함수
    struct student a = { 1, "hong", 3.8 };
    struct student b = { 2, "Kim", 4.3 };
    if (equal(&a, &b) == 1) {
        printf("같은학생\n");
    }

    // 구조체를 함수의 반환값으로 넘기기
    struct student s;
   s = create();
   printf("%d %s %.lf\n",s.num,s.name,s.grade);
}
struct student create() {
  struct student s;
  s.num=1314;
  strcpy(s.name,"서지완");
  s.grade = 4.5;
  return s;
}
int equal(struct student * aa, struct student * bb) {
    if (aa->num == bb->num)
        return 1;
    return 0;
}

struct complex {
    double real;
    double imag;
};

typedef struct point {
    int x;
    int y;
}POINT;*/

struct complex add(struct complex c1,struct complex c2);
int equal(POINT p1, POINT p2) {
    if(p1.x==p2.x && p1.y==p2.y){
      return 1;
    }
  return 0;
}
typedef struct food {
  char name[30];
int calories;
}FOOD;

int calc_calories(FOOD farr[],int n) {
  int sum=0;
  for (int i=0;i<n;i++){
    sum+=farr[i].calories;
  }
  return sum;
}

int main(){
    struct complex c1 = {1.0,2.0};
    struct complex c2 = {2.0,3.0};
    struct complex re = add(c1,c2);
    printf("%.1lf + %.1lfi\n",re.real,re.imag);*/
    POINT p1 = {1,2};
    POINT p2 = {3,3};

  if(equal(p1,p2) == 1){
      printf("((%d, %d)==(%d, %d)\n",p1.x,p1.y,p2.x,p2.y);
  }
}

struct complex add(struct complex c1,struct complex c2){
  struct complex result;
  re.real = c1.real + c2.real;
  re.imag = c1.imag + c2.imag;

  return re;
  
    
}