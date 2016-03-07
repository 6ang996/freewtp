#ifndef __CAPWAP_ELEMENT_ACNAME_HEADER__
#define __CAPWAP_ELEMENT_ACNAME_HEADER__

#define CAPWAP_ELEMENT_ACNAME			4

#define CAPWAP_ACNAME_MAXLENGTH			512

struct capwap_acname_element {
	uint8_t* name;
};

extern const struct capwap_message_elements_ops capwap_element_acname_ops;

#endif /* __CAPWAP_ELEMENT_ACNAME_HEADER__ */
