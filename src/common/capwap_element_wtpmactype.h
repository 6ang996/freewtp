#ifndef __CAPWAP_ELEMENT_WTPMACTYPE_HEADER__
#define __CAPWAP_ELEMENT_WTPMACTYPE_HEADER__

#define CAPWAP_ELEMENT_WTPMACTYPE			44

#define CAPWAP_LOCALMAC						0
#define CAPWAP_SPLITMAC						1
#define CAPWAP_LOCALANDSPLITMAC				2

struct capwap_wtpmactype_element {
	uint8_t type;
};

extern const struct capwap_message_elements_ops capwap_element_wtpmactype_ops;

#endif /* __CAPWAP_ELEMENT_WTPMACTYPE_HEADER__ */
