class Box {
    private:
       int length;
       int width;
       int height;
    public:
       // write prototypes of setters for length, width and height
       void setLength(int nlength);
       void setWidth(int nwidth);
       void setHeight(int nheight);
       
       // write prototypes of getters for length, width and height
       int getLength();
       int getWidth();
       int getHeight();
      
       int calcVolume();
};
