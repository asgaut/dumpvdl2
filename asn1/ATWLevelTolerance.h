/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PMCPDLCMessageSetVersion1"
 * 	found in "atn-cpdlc.asn1"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_ATWLevelTolerance_H_
#define	_ATWLevelTolerance_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ATWLevelTolerance {
	ATWLevelTolerance_at	= 0,
	ATWLevelTolerance_atorabove	= 1,
	ATWLevelTolerance_atorbelow	= 2
} e_ATWLevelTolerance;

/* ATWLevelTolerance */
typedef long	 ATWLevelTolerance_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ATWLevelTolerance;
asn_struct_free_f ATWLevelTolerance_free;
asn_struct_print_f ATWLevelTolerance_print;
asn_constr_check_f ATWLevelTolerance_constraint;
ber_type_decoder_f ATWLevelTolerance_decode_ber;
der_type_encoder_f ATWLevelTolerance_encode_der;
xer_type_decoder_f ATWLevelTolerance_decode_xer;
xer_type_encoder_f ATWLevelTolerance_encode_xer;
per_type_decoder_f ATWLevelTolerance_decode_uper;
per_type_encoder_f ATWLevelTolerance_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _ATWLevelTolerance_H_ */
#include <asn_internal.h>