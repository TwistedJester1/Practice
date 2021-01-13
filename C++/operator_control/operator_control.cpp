#include <iostream>

struct Vec3 {
	float x , y, z;
	Vec3(float x2, float y2,float z2)
		: x(x2), y(y2), z(z2) {};
	
	Vec3 operator+(const Vec3& other) const {
		return Vec3(x + other.x, y + other.y, z + other.z);
	}
	
	Vec3 operator+=( Vec3& other) {
		return Vec3(x = x + other.x, y = y + other.y, z = z + other.z);
	}
};

std::ostream& operator<<(std::ostream& stream, Vec3& other) {
	stream << other.x << ", " << other.y << ", " << other.z;
	return stream;
}

class Entity {
private:
	Vec3 position;
public:
	Entity()
		: position({ 10.0f, 10.0f, 10.0f }) {};

	void AddPosition(Vec3& other) {
		position += other;
	}

	Vec3& getPosition() {
		return position;
	}
};

int main() {
	Vec3 vector1(10.0f, 10.0f, 10.0f);
	Vec3 vector2(15.0f, 15.0f, 15.0f);
	Entity player;
	player.AddPosition(vector2);
	
	std::cout << "Entity Position: " << player.getPosition() << std::endl;
}