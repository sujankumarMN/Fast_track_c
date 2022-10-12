#define READ_SUCCESS 1
//___________________________________________________
int file_read(char []); //Read function declaration
void print_file(char []);
//___________________________________________________
struct _movie_
{
	char name[15];
	int year,duration,imdb,votes;
};
typedef struct _movie_ Movie;

struct _array_
{
	Movie arr[50];
	int c_size,t_size;
};
typedef struct _array_ Array;

Array read_line(char [],Array);


Array init();
int num_of_line(char []);
Array insert_data(Array,char [],int,int,float,int);
//________________________________________________________

void count(Array); //function to count number of movies released  each year

void top5_imdb(Array);//function to check top 5 rated movies

void max_min(Array);//function to long and short duuration movies

void popular(Array);//adding popular movies to different file
