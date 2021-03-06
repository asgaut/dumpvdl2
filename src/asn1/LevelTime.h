/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PMCPDLCMessageSetVersion1"
 * 	found in "atn-cpdlc.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_LevelTime_H_
#define	_LevelTime_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Level.h"
#include "Time.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* LevelTime */
typedef struct LevelTime {
	Level_t	 level;
	Time_t	 time;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LevelTime_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LevelTime;

#ifdef __cplusplus
}
#endif

#endif	/* _LevelTime_H_ */
#include "asn_internal.h"
