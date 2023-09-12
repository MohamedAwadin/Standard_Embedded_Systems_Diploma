#ifndef _STRING_H_
#define _STRING_H_
void string_print(const char* str);
int string_len(char* str);
void string_CapitalToSmall(char* str);
int string_Compare(char* str1,char* str2);
int string_CompareNotCaseSens(char* str1,char* str2);
void string_scan(char* str,int MaxSize);
void string_longestWord(char* str, char *word);
void string_longestWord_1(char*str,char *word);
void string_subreverse(char* str,int frist, int last);
void string_reversefull(char* str);
void string_reverse(char* str);
void string_IntToString(int num, char* str);
int string_StringToInt(char* str);
int string_StringToInt_NoChar(char* str, int* pnum);
int string_MirorCheck(char* str);
void string_TriangleCheck(char* str, char* strRes);
void string_FloatToString(float num,char* str);
void string_find(char* main,char* find,char* replace );
void string_words_with_num_1(char* str);
void string_copy(char* str1, char* str2);

#endif // _STRING_H_
