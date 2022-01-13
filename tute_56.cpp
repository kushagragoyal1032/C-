#include<iostream>
#include<cstring>
using namespace std;

class kkgyl
{   protected:
        string title;
        float rating; 
    public:
        kkgyl(string s , float r)
        {
            title=s;
            rating=r;
        }
        virtual void display()=0 //pure virtual function
        {

        }
};

class kkgyl_video : public kkgyl
{
    float video_length;
    public:
        kkgyl_video(string s , float r , float vl) : kkgyl(s,r)
        {
                video_length = vl;
        }
        void display()
        {
            cout<<"this is best video with title = "<<title<<endl;
            cout<<"the rating of this video = "<<rating<<endl;
            cout<<"the length of this video is = "<<video_length<<endl;
        }
};


class kkgyl_text : public kkgyl
{
    float world_length;
    public:
        kkgyl_text(string s , float r , int wl) : kkgyl(s,r)
        {
                world_length = wl;
        }
        void display()
        {
            cout<<"this is best page with title = "<<title<<endl;
            cout<<"the rating of this page = "<<rating<<endl;
            cout<<"the length of this page is = "<<world_length<<endl;
        }
};

int main()
{
    string title;
    float rating,vl;
    int wl;

    //for video
    title = "how to fix it";
    rating = 3.5;
    vl = 34.00;
    kkgyl_video obj_video(title,rating,vl);
    //obj_video.display();

    title = "how to improve yourself";
    rating = 5.3;
    wl = 453;
    kkgyl_text obj_text(title,rating,wl);

    kkgyl *ptr[2];
    ptr[0] = &obj_video;
    ptr[1] = &obj_text; 

    ptr[0]->display();
    ptr[1]->display();
    return 0;

}