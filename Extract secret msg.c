#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <string.h>
#include "utils.h"

Image *read_PPM(char *filename)
{
    /* opens a PPM file, constructs an Image object and returns a pointer to it.
    Use fopen(), fscanf(), fprintf(), and fclose().*/
    char s[5];
    int i;
    int rgb;
    Image *img;
    img = (Image*)malloc(sizeof(Image));
    FILE *fp;
    fp = fopen(filename,"rb");
    fscanf(fp,"%s %d %d %d",s,&img->cols,&img->rows,&rgb);
    img->image = (Color**)malloc(img->rows *  sizeof(Color*));

    for(i =0; i<img->rows; i++)
    {
        img->image[i]= (Color*)malloc( img->cols *  sizeof(Color));
    }
    for(i =0; i<img->rows; i++)
    {


        for(int j=0; j<img->cols; j++)
        {


            fscanf(fp,"%d %d %d",&img->image[i][j].R,&img->image[i][j].G,&img->image[i][j].B);

        }
    }
    fclose(fp);
    return img;

}

void write_PPM(Image *image, char *filename)
{
    /* takes an Image object and writes to filename in PPM format.*/
    FILE *fp;
    fp = fopen(filename, "wb");
    if (!fp)
    {
        printf( "Unable to open file");
        exit(1);
    }
    fprintf(fp, "P3\n");
    fprintf(fp, "%d %d\n",image->cols,image->rows);
    fprintf(fp,"255\n");


    for(int i =0; i<image->rows; i++)
    {


        for(int j=0; j<image->cols; j++)
        {
            fprintf(fp,"%3d %3d %3d   ",image->image[i][j].R,image->image[i][j].G,image->image[i][j].B);

        }
        fprintf(fp,"\n");

    }
    fclose(fp);

}

void free_image(Image *image)
{
    /* takes an Image object and frees all the memory associated with it.
    This involves not only calling free on image but also on the appropriate
    members of it.
    */
    for(int i =0; i<image->rows; i++)
    {
        free(image->image[i]);
    }
    free(image->image);
    free(image);
}




    /* Takes an Image object and returns what color the pixel at the given row/col
    should be in the secret image. This function should not change image*/



void change(Image *image)
{
    /* takes an Image object, and constructs the secret image from it by extracting
    the LSB of the B channel. You should call evaluate_one_pixel() here. */
    for(int i =0;i<image->rows;i++){
            for(int j = 0;j<image->cols;j++){
      if(image->image[i][j].B %2!=0)
    {
        image->image[i][j].R = 255;
        image->image[i][j].G = 255;
        image->image[i][j].B = 255;
    }
    else
    {
        image->image[i][j].R = 0;
        image->image[i][j].G = 0;
        image->image[i][j].B = 0;
    }
}
    }
}

int main()
{
    /* Call read_PPM(), write_PPM(), free_image(), get_secret_image() in some order
    to obtain the hidden message.*/
    Image *ppm;
    ppm = read_PPM("DennisRitchie.ppm");
    change(ppm);
    write_PPM(ppm,"SecretMsg.ppm");
    free_image(ppm);
    printf(".......");
    return 0;
}



