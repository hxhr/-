/* 2250748 王渝鹮 信02 */

#include <cstdio>   //NULL
//不再允许包含任何系统头文件

/* ----- 不允许定义任何形式的全局变量/全部数组/只读全局变量/宏定义!!!!! ----- */

/* 函数实现部分，{ }内的东西可以任意调整，目前的return只是一个示例，可改变 */
/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strlen(const char *str)//牛 学到了新的东西
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int length = 0;
    if (str == NULL) {
        return 0;
    }
    while (*str != '\0') {
        length++;
        str++;
    }

    return length;
   

}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
char *tj_strcat(char *s1, const char *s2)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
   
    if (s1 == NULL) {
        return NULL;
    }
    if (s2 == NULL) {
       
        return s1;
    }
    char* result = s1;  // 保存起始位置的指针

    // 移动到s1字符串的末尾
    while (*s1 != '\0') {
        s1++;
    }

    // 将s2字符串的内容追加到s1的末尾
    while (*s2 != '\0') {
        *s1 = *s2;
        s1++;
        s2++;
    }

    // 在追加完s2后，添加字符串结束标志'\0'
    *s1 = '\0';

    return result;  // 返回追加后的字符串起始位置的指针
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
char *tj_strncat(char *s1, const char *s2, const int len)
{
    if (s1 == NULL) {
        return NULL;
    }
    if (s2 == NULL) {

        return s1;
    }
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    char* result = s1;
    s1 += tj_strlen(s1);
    for (int i = 1; *s2 != '\0' && i <= len; i++) {
        *s1 = *s2;
        s1++;
        s2++;
    }
    *s1 = '\0';

    return result;
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
char *tj_strcpy(char *s1, const char *s2)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    if (s1 == NULL) {
        return NULL;
    }
    if (s2 == NULL) {
        *s1 = '\0';
        return s1;
    }
    char* result = s1;
    while (*s2 != '\0') {
        *s1 = *s2;
        s1++;
        s2++;
    }
    *s1 = '\0';

    return result;
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
char *tj_strncpy(char *s1, const char *s2, const int len)
{
    if (s1 == NULL) {
        return NULL;
    }
    if (s2 == NULL) {
        *s1 = '\0';
        return s1;
    }

    char* result = s1;
    for (int i = 1; *s2 != '\0' && i <= len; i++) {
        *s1 = *s2;
        s1++;
        s2++;
    }
    return result;
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strcmp(const char *s1, const char *s2)
{
    if (s1 == NULL && s2 == NULL) {
        return 0;
    }
    if (s1 == NULL || s2 == NULL) {
        if (s1 == NULL) {
            return -1;
        }
        else {
            return 1;
        }
    }
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    for (;;s1++,s2++) {
        if (*s1 == *s2) {
            if (*s1 == '\0' && *s2 == '\0') {
                break;
            }
            continue;
        }
        else {
            return *s1 - *s2;
        }
    }

    return 0;
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strcasecmp(const char *s1, const char *s2)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    if (s1 == NULL && s2 == NULL) {
        return 0;
    }
    if (s1 == NULL || s2 == NULL) {
        if (s1 == NULL) {
            return -1;
        }
        else {
            return 1;
        }
    }
    int a1 = 0;
    int a2 = 0;
    for (;; s1++, s2++) {
        a1 = 0;
        a2 = 0;
        if (*s1 >= 'A' && *s1 <= 'Z') {
            a1 = 32;
        }
        if (*s2 >= 'A' && *s2 <= 'Z') {
            a2 = 32;
        }
        if (*s1+a1 == *s2+a2) {
            if (*s1 == '\0' && *s2 == '\0') {
                break;
            }
            continue;
        }
        else {
            return *s1 - *s2+a1-a2;
        }
    }



    return 0;
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strncmp(const char *s1, const char *s2, const int len)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    if (s1 == NULL && s2 == NULL) {
        return 0;
    }
    if (s1 == NULL || s2 == NULL) {
        if (s1 == NULL) {
            return -1;
        }
        else {
            return 1;
        }
    }

    for (int i=0;i<len; s1++, s2++) {
       
        if (*s1 == *s2 ) {
            if (*s1 == '\0' && *s2 == '\0') {
                break;
            }
            else if (i == len - 1) {
                return 0;
            }
            continue;
        }
        else {
            return *s1 - *s2 ;
        }
    }



    return 0;

}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strcasencmp(const char *s1, const char *s2, const int len)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    if (s1 == NULL && s2 == NULL) {
        return 0;
    }
    if (s1 == NULL || s2 == NULL) {
        if (s1 == NULL) {
            return -1;
        }
        else {
            return 1;
        }
    }

    int a1 = 0;
    int a2 = 0;
    for (int i=0;i<len; s1++, s2++) {
        a1 = 0;
        a2 = 0;
        if (*s1 >= 'A' && *s1 <= 'Z') {
            a1 = 32;
        }
        if (*s2 >= 'A' && *s2 <= 'Z') {
            a2 = 32;
        }
        if (*s1 + a1 == *s2 + a2) {
            if (*s1 == '\0' && *s2 == '\0') {
                break;
            }
            else if (i == len - 1) {
                return 0;
            }
            continue;
        }
        else {
            return *s1 - *s2 + a1 - a2;
        }
    }
    return 0;
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
char *tj_strupr(char *str)
{
    if (str == NULL) {
        return NULL;
    }
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    char* result = str;
    while (*str != '\0') {
        if (*str >= 'a' && *str <= 'z') {
            *str -= 32;
        }
        str++;
    }

    return result;
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
char *tj_strlwr(char *str)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    if (str == NULL) {
        return NULL;
    }
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    char* result = str;
    while (*str != '\0') {
        if (*str >= 'A' && *str <= 'Z') {
            *str += 32;
        }
        str++;
    }

    return result;

   
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strchr(const char *str, const char ch)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    if (str == NULL) {
        return 0;
    }

    for (int i = 0; *str != '\0'; i++) {
        if (*str == ch) {
            return i + 1;
        }
        str++;
    }

   

    return 0;
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strstr(const char *str, const char *substr)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    if (str == NULL || substr == NULL) {
        return 0;
    }

    int length1 = tj_strlen(str);
    int length2 = tj_strlen(substr);
    int length3 = 0;
    for (int i=0; *str != '\0';str++,i++) {
        if (*str == *substr) {
            if (length3==length2-1) {
                return i+2-length2;
            }
            length3++;
            substr++;
        }
        else {
            substr -= length3;
            length3 = 0;
        }
    }


    return 0;
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strrchr(const char *str, const char ch)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    if (str == NULL) {
        return 0;
    }
    int length = tj_strlen(str);

    str += length-1;

    for (int i = length; *str != '\0'; i--) {
        if (*str == ch) {
            return i ;
        }
        str--;
    }



   
  
    return 0;
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strrstr(const char *str, const char *substr)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    if (str == NULL || substr == NULL) {
        return 0;
    }

    int length1 = tj_strlen(str);
    int length2 = tj_strlen(substr);
    int length3 = 0;
    str += length1 - 1;
    for (int i = length1; *str != '\0'; str--, i--) {
        if (tj_strstr(str,substr) != 0) {
            return tj_strstr(str, substr) + i-1;
        }
    }




    return 0;
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
char *tj_strrev(char *str)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    char* result = str;
    int length = tj_strlen(str);
    char* change = str +length  - 1;
    for (int i = 0; i < length / 2; i++) {
        char time = *str;
        *str = *change;
        *change = time;
        str++;
        change--;
    }

    return result;
}
