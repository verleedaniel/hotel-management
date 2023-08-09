#include <iostream>
using namespace std;
class Booking{
	public:
		int id;
		string from;
		string to;
		int guest_no;
	void setBooking(int id,string from,string to,int guest_no){
		this->id=id;
		this->from=from;
		this->to=to;
		this->guest_no=guest_no;
	}
	void getBooking(){
		cout<<"Booking ID="<<id<<endl;
		cout<<"Date from="<<from<<" to "<<to<<endl;
		cout<<"Guest Number="<<guest_no<<endl;
	}
};
class Room :public Booking{
	public:
		int id;
		string room_type;
	void setRoom(int id,string room_type){
		this->id=id;
		this->room_type=room_type;
	}
	void getRoom(){
		cout<<"Room id="<<id<<endl;
		cout<<"Room type"<<room_type<<endl;
	}
	   
};
class Guest:public Booking{
	public:
		string name;
		string surname;
		int age;
		void setGuest(string name,string surname,int age){
			this->name=name;
			this->surname=surname;
			this->age=age;
		}
		void getGuest(){
			cout<<"Guest name="<<name<<endl;
			cout<<"Surname="<<surname<<endl;
			cout<<"Age="<<age<<endl;
		}
};

class Payment:public Booking{
	public :
		int amount;
		string cardNumber;
	void setPayment(int amount,string cardNumber){
	this->amount=amount;
	this->cardNumber=cardNumber;		
	}
	void getPayment(){
		cout<<"Amount="<<amount<<endl;
		cout<<"Card Number="<<cardNumber;
	}
};



int main() {
	Guest guest;
	Room room;
	room.setBooking(1001,"27-july-2023","28-july-2023",2);
	room.setRoom(201,"AC room");
	room.getBooking();
	room.getRoom();
	guest.setBooking(1002,"27-july-2023","31-july-2023",4);
	guest.setGuest("Nil","patil",23);
	guest.getBooking();
	guest.getGuest();
	Payment payment;
	payment.setBooking(1003,"27-july-2023","29-july-2023",7);
	payment.setPayment(3500,"N000001234");
	payment.getBooking();
	payment.getPayment();
	return 0;
}
