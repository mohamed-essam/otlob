#include "Feedback.h"

using namespace std;

int Feedback::getId()
{
	return id;
}
void Feedback::setId(int id)
{
	this->id = id;
}
int Feedback::getUserid()
{
	return userId;
}
void Feedback::setUserid(int userid)
{
	this->userId = userid;
}
int Feedback::getRestaurantid()
{
	return restaurantId;
}
void Feedback::setRestaurantid(int restaurantid)
{
	this->restaurantId = restaurantId;
}
int Feedback::getRating()
{
	return rating;
}
void Feedback::setRating(int rating)
{
	this->rating = rating;
}
string Feedback::getReview()
{
	return review;
}
void Feedback::setReview(string review)
{
	this->review = review;
}
Feedback Feedback::create(int id, int userId, int restaurantId, int rating, string review)
{
	Feedback f;
	f.setId(id);
	f.setUserid(userId);
	f.setRestaurantid(restaurantId);
	f.setRating(rating);
	f.setReview(review);
	return f;
}