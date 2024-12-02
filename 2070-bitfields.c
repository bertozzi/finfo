// structs and bitfield, the GIF image format example
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

// this struct correspond to the exact data organization of the initial
// header of a GIF file (13 bytes)
struct gif_header
{
  // beginning of the file:
  unsigned long signature         :24; // it shouled contain 'G', 'I', 'F'
  unsigned long version           :16; // usually '8' '9' but also '8' '7' exists
  unsigned long subversion        :8;  // typically 'a'

  // logical Screen Width:
  unsigned long width             :16; // canvas width
  unsigned long height            :16; // canvas height

  // packed fields:
  unsigned long global_color      :1;  // true when the file features a global palette
  unsigned long color_res         :3;  // used to determine how many colors we have in the image
  unsigned long sort_flag         :1;  // true when colors in the palette are sorted according the frequency
  unsigned long color_table_size  :3;  // used to compute the size of the palette

  unsigned long bg_color_index    :8;  // backround color (if any)
  unsigned long pixel_aspect_ratio:8;  // when != 0 can be used to compute pixel aspect ratio
};
// 13 bytes (actually we should use __attribute__((packed)) to obtain this)



void print_gif_data(const char *);

int main(int argc, char **argv)
{

  printf("struct gif_header needs %ld bytes to be stored\n", sizeof(struct gif_header));

  print_gif_data("files/logical.gif");
  print_gif_data("files/test.gif");
  print_gif_data("files/test2.gif");
  print_gif_data("files/test3.gif");
  print_gif_data("files/animated.gif");
  print_gif_data("files/gif87a.gif");
  print_gif_data("files/test.jpg");

  return 0;
}

void print_gif_data(const char *s)
{

  FILE *bf;

  bf=fopen(s, "rb"); 
  if(!bf)
  {
    perror("\nError in opening the file");
    return;
  }

  struct gif_header a;

  if( fread(&a, sizeof(a), 1, bf) != 1 )
  {
    printf("\nUnable to read %ld bytes from the file\n", sizeof(a));
    fclose(bf);
    return;
  }
  fclose(bf);

  if(a.signature != 0x464947)
  {
    printf("\n%s is an invalid GIF file\n", s);
    return;
  }
  

  printf("\nHeader of the GIF image file '%s':\n", s);
    printf(" %d x %d width x height\n", a.width, a.height);
    if(a.global_color)
    {
      printf(" The file has a global color table\n");
      printf(" Background color index is %d\n", a.bg_color_index);
      printf(" Color table size is %d\n", a.color_table_size);
    }
    else
    {
      printf( " The file has not a global color table\n");
    }

    printf(" Color Resolution is %d\n", a.color_res);
    if(a.sort_flag)
      printf(" color values are sorted according to their frequency\n");
    else
      printf(" color values are unsorted\n");

    if(a.pixel_aspect_ratio)
      printf(" the aspect ratio of each pixel is %d\n", a.pixel_aspect_ratio);


  return;
}

