#include <stdio.h>
#include <stdlib.h>

#define STBI_ONLY_JPEG
#define STB_IMAGE_IMPLEMENTATION
#include "../stb_image/stb_image.h"
#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "../stb_image/stb_image_write.h"
#define MAX 1000

// C:\Users\tom\Documents\testtekst.txt
void print_image_hex(unsigned char *img, int width, int height, int channels) {
    int total_pixels = width * height * channels;
    
    for (int i = 0; i < total_pixels; i++) {
        printf("%02X ", img[i]);  // %02X prints each byte as 2-digit hex
        
        // Optional: Add formatting for readability
        if ((i + 1) % 16 == 0) printf("\n");  // New line every 16 bytes
        else if ((i + 1) % channels == 0) printf("  ");  // Space between pixels
    }
    printf("\n");
}

int main() {

    char filePath[] = "";
    
    printf("enter file path: ");
    scanf("%s", filePath);

    int width, height, channels;
    unsigned char *img = stbi_load(filePath, &width, &height, &channels, 0);
        if(img == NULL) {
        printf("Error in loading the image\n");
            exit(1);
        }
    printf("Loaded image with a width of %dpx, a height of %dpx and %d channels\n", width, height, channels);

    stbi_image_free(img);
    return 0;
}


    // fileIn = fopen(filePath, "r");

    // printf("file content is: \n");

    // while(fgets(str, 100, fileIn)){
    //     printf("%s", str);
    // }    
    
    // fclose(fileIn);