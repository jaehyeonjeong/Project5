#include "rec.h"

Rectangle::Rectangle()
{

}

void Rectangle::SetWidth(const double width)
{
	this->width = width;
}

void Rectangle::SetHeight(const double height)
{
	this->height = height;
}

void Rectangle::CalArea()
{
	this->area = this->width * this->height;
}

double Rectangle::GetWidth()
{
	return this->width;
}

double Rectangle::GetHeight()
{
	return this->height;
}

double Rectangle::GetArea()
{
	return this->width * this->height;
}
