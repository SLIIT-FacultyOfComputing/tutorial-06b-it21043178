class Box {
    private:
       int length;
       int width;
       int height;
    public:
       // write prototypes of setters for length, width and height
       void setlength(int nlength);
       void setwidth(int nwidgth);
       void setheight(int neight);
       // write prototypes of getters for length, width and height
       int getlength();
       int getwidth();
       int getheight();
 
       int calcVolume();
};
