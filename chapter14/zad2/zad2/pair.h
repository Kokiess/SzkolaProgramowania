#pragma once

template <typename T1, typename T2>
class Pair
{
public:
	T1 a;
	T2 b;
public:
	Pair( const T1 aval, const T2 bval) : a(aval), b(bval) {}
	//Pair(const T1 aval, const T2 bval) : a(aval), b(bval{}
	T1& first() { return a; }
	T2& second() { return b; }
	T1 first() const { return a; }
	T2 second() const { return b; }
};