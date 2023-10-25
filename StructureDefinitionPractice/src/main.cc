typedef struct Student
{
    struct name
    {
        char given[20];
        char family[20];
    } fullname;
    struct date
    {
        unsigned int day;
        unsigned int month;
        unsigned int year;
        bool is_leap;
    } birthday;
    unsigned int roll_no;
} student;
typedef struct Course
{
    union c_id
    {
        char number[20];
        char code[10];
    } c_id;
    short id_flag; // 0 for number, 1 for code
    float fee;
} course;

int main(int argc, const char *argv[])
{
    student students[80], *ptr_s;
    course y11201[130], *ptr_c;
}