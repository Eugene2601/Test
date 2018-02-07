#ifndef FUNC_H_INCLUDED
#define FUNC_H_INCLUDED
float func(num1,num2,sel){

  if(sel == 1){
            float ans = num1 + num2;

            printf("%f", ans);
            }

        if(sel == 2){
            float ans = num1 - num2;

            printf("%f", ans);
        }
        if(sel == 3){
            float ans = num1 * num2;

            printf("%f", ans);

        }
        if(sel == 4){
            float ans = num1 / num2;

            printf("%f", ans);
        }

#endif // FUNC_H_INCLUDED
