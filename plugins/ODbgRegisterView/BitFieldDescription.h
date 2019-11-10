
#ifndef BITFIELD_DESCRIPTION_H_
#define BITFIELD_DESCRIPTION_H_

#include <functional>
#include <vector>

class QString;

namespace ODbgRegisterView {

struct BitFieldDescription {
	int textWidth;
	std::vector<QString> valueNames;
	std::vector<QString> setValueTexts;
	std::function<bool(unsigned, unsigned)> const valueEqualComparator;

	BitFieldDescription(
		int textWidth, const std::vector<QString> &valueNames, const std::vector<QString> &setValueTexts, const std::function<bool(unsigned, unsigned)> &valueEqualComparator = [](unsigned a, unsigned b) { return a == b; });
};

}

#endif
