#include <iostream>

template<typename type>
class Interval
{
	public:
		Interval(Type inStart, Type inEnd)
				:start(inStart), end(inEnd)
		{
		}

		Type getStart() const
		{
			return start;
		}

		Type getEnd() const
		{
			return end;
		}

		Type getSize() const
		{
			return (end - start);
		}

		Interval<type> intersection(const Interval<Type>& inOther) const
		{
			return Interval<Type>{
				max(start, inOther.start),
				min(end, inOther.end)
			};
		}

	private:
		Type start;
		Type end;
};

class h
{
	
}

int main()
{
	const Interval<int> intervalA{ 1, 3 };
	const Interval<int> intervalB{ 2, 4 };

	const Interval<int> intersection{ intervalA.intersection(intervalB) };
	const int intersectionStart = intersection.getStart();
	const int intersectionEnd = intersection.getEnd();
	const int intersectionSize3 = intersection.getSize();

	const Interval<char> intervalAChar{ 'a', 'c' };
	const Interval<char> intervalBChar{ 'b', 'd' };

	const Interval<char> intersectionChar{ intervalAchar.intersection(intervalBChar)};
	const char intersectionStartChar = intersectionChar.getStart();
	const char intersectionEndChar = intersectionChar.getEnd();
	const char intersectionSizeChar = intersectionChar.getSize();

	return 0;
}	
