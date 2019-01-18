/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PMCPDLCMessageSetVersion1"
 * 	found in "atn-cpdlc.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_LongitudeType_H_
#define	_LongitudeType_H_


#include "asn_application.h"

/* Including external dependencies */
#include "LongitudeDegrees.h"
#include "LongitudeDegreesMinutes.h"
#include "LongitudeDegreesMinutesSeconds.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LongitudeType_PR {
	LongitudeType_PR_NOTHING,	/* No components present */
	LongitudeType_PR_longitudeDegrees,
	LongitudeType_PR_longitudeDegreesMinutes,
	LongitudeType_PR_longitudeDMS
} LongitudeType_PR;

/* LongitudeType */
typedef struct LongitudeType {
	LongitudeType_PR present;
	union LongitudeType_u {
		LongitudeDegrees_t	 longitudeDegrees;
		LongitudeDegreesMinutes_t	 longitudeDegreesMinutes;
		LongitudeDegreesMinutesSeconds_t	 longitudeDMS;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LongitudeType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LongitudeType;

#ifdef __cplusplus
}
#endif

#endif	/* _LongitudeType_H_ */
#include "asn_internal.h"