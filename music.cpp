#include<iostream>
#include<string>
using namespace std;


class music
{
string song_title;
string artist_name;
string album_name;

int songID;
string genre;

float duration;

string playlist;
public:

music(){}

music(string m, string a, string n, int s,string g, float d, string p){
song_title=m;
artist_name=a;
album_name=n;
songID=s;
genre=g;
duration=d;
playlist=p;
cout<<"parameterized constructor"<<endl;

}

music(music &x){

song_title=x.song_title;
artist_name=x.artist_name;
album_name=x.album_name;
songID=x.songID;
genre=x.genre;
duration=x.duration;
playlist=x.playlist;
duration=x.duration;
playlist=x.playlist;

cout<<"copy constructor called"<<endl;

}

~music(){cout<<"SongID Deleted:"<<songID<<endl;}
void input(){

cout<<"Enter the Song Title:"<<endl;
getline(cin,song_title);

cout<<"Enter the Artist Name: \n";
getline(cin,artist_name);


cout<<"Enter the Album name: \n";

getline(cin,album_name);

cout<<"Enter the Song ID: \n";

cin>>songID;

cout<<"Enter the genre; \n";
cin.ignore();
getline(cin,genre);

cout<<"Enter the Duration of song: \n";

cin>>duration;

cout<<"Enter the playlist/category: "<<endl;
cin.ignore();
getline(cin,playlist);


}

void display(){


cout<<"The Title of the Song: "<<song_title<<endl;

cout<<"The Name of the Artist: "<<artist_name<<endl;

cout<<"The album name: "<<album_name<<endl;

cout<<"The SongID: "<<songID<<endl;

cout<<"The Genre: "<<genre<<endl;

cout<<"Duration: "<<duration<< " min "<<endl;

cout<<"Playlist: "<<playlist<<endl;
}


};


int main(){

music obj1;
obj1.input();
cout<<"Default"<<endl;
cout<<"-------------->Music Details<--------------"<<endl;
obj1.display();


cout<<endl;

music obj2("yashraj","samarth","sywaman",23,"action",3.4,"fav");
obj2.display();




music obj3(obj1);
obj3.display();




return 0;

}
