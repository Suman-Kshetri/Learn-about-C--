#include<iostream>
#include<cstring>
using namespace std;
// this class is actual base class because it is made just to be derived by other class without 
// its object being made and consists at  most one virtual function in it

class youtube_channel{
    protected:
    string title;
    float rating;
    public:
    youtube_channel(string s,float r)
    {
        title=s;
        rating=r;
    }
    virtual void display()=0;//do-nothing function --> pure virtual function

};
class youtube_channel_video: public youtube_channel{
    float video_length;
    public:
    youtube_channel_video(string s,float r, float vl):youtube_channel(s,r)
    {
       video_length=vl; 
    }
    void display()
    {
        cout<<"\n\nFor video"<<endl;
        cout<<"This is an amazing video with title: " <<title<<endl;
        cout<<"Rating: "<<rating<<"out of 5 stars "<<endl;
        cout<<"Length of video is: "<<video_length<<"minutes"<<endl; 
    }
};
class youtube_channel_text: public youtube_channel{
    int text_count;
    public:
    youtube_channel_text(string s,float r, int word):youtube_channel(s,r)
    {
       text_count=word; 
    }
    void display()
    {
        cout<<"\n\nFor text"<<endl;
        cout<<"This is an amazing text tutorial with title: "<<title<<endl;
        cout<<"Rating of the text tutorial: "<<rating<<"out of 5 stars"<<endl;
        cout<<"Number of words in this details is: "<<text_count<<endl;;
    }
};
int main(){
    string title;
    float rating,vlen;
    int words;

    // for youtube video
    title="Suman_Kshetri";
    vlen=4.56;
    rating=5.5;
    youtube_channel_video youtube(title,rating,vlen);
    // youtube.display();
    // for youtube text
    title="Hello world !!!!";
    words=3444;
    rating= 6.9;
    youtube_channel_text text(title,rating,words);
    // text.display();

    youtube_channel * pointer_youtube[2];
    pointer_youtube[0]=&youtube;
    pointer_youtube[1]=&text;
    pointer_youtube[0]->display();
    pointer_youtube[1]->display();
    return 0;
}