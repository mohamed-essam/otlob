#ifndef FEEDBACK_H
#define FEEDBACK_H

#include <cstring>
#include <cstdlib>
#include <string>

using namespace std;

class Feedback {
private:
	int id;
	int userId;
	int restaurantId;
	int rating;
	string review;
public:
	int getId();
	void setId(int id);
	int getUserid();
	void setUserid(int id);
	int getRestaurantid();
	void setRestaurantid(int id);
	int getRating();
	void setRating(int rating);
	string getReview();
	void setReview(string review);
	static Feedback create(int id, int userId, int restaurantId, int rating, string review);
	//void destroy();
	//ObjectsGetter::DeleteFeedBack(F.getId());
};
#endif // !FEEDBACK_H