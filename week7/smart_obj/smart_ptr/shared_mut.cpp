
// Created by Hwang on 14/10/2019.
//

#include "shared_mut.h"

namespace ptr {
shared_mut::shared_mut() {
    _mgr = new mgr();
}

shared_mut::shared_mut(Object* _obj) {
    _mgr = new mgr(_obj);
}
shared_mut::shared_mut(const shared_mut& shared) {
	_mgr = shared._mgr;
	increase();
}
shared_mut::~shared_mut() {
    release();
}
void shared_mut::release() {
	_mgr->count--;
	if (_mgr->count == 0) {
		_mgr->ptr == nullptr;
		}
}
int shared_mut::count() {
	return _mgr->count;
}
void shared_mut::increase() {
	_mgr->count++;
}
Object* shared_mut::get() const {
	return _mgr->ptr;
}
shared_mut shared_mut::operator+(const shared_mut &shared){
	int temp = this->_mgr->ptr->get() + shared._mgr->ptr->get();
	return shared_mut(new Object(temp));
}
shared_mut shared_mut::operator-(const shared_mut &shared){
	int temp = this->_mgr->ptr->get() - shared._mgr->ptr->get();

	return shared_mut(new Object(temp));

}
shared_mut shared_mut::operator*(const shared_mut &shared){
	int temp = this->_mgr->ptr->get() * shared._mgr->ptr->get();
	return shared_mut(new Object(temp));
}
shared_mut shared_mut::operator/(const shared_mut &shared){
	int temp = this->_mgr->ptr->get() / shared._mgr->ptr->get();
        return shared_mut(new Object(temp));
}
Object* shared_mut::operator->() {
	return _mgr->ptr;
}
shared_mut &shared_mut::operator=(const shared_mut &r){
	release();
	this->_mgr = r._mgr;
	increase();
	return *this;
}
} // end of namespace ptr
