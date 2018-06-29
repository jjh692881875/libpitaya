/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9.1 at Wed Jun 27 11:48:04 2018. */

#ifndef PB_PROTOS_ERROR_PB_H_INCLUDED
#define PB_PROTOS_ERROR_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Struct definitions */
typedef struct _protos_Error {
    pb_callback_t code;
    pb_callback_t msg;
    pb_callback_t metadata;
/* @@protoc_insertion_point(struct:protos_Error) */
} protos_Error;

typedef struct _protos_Error_MetadataEntry {
    pb_callback_t key;
    pb_callback_t value;
/* @@protoc_insertion_point(struct:protos_Error_MetadataEntry) */
} protos_Error_MetadataEntry;

/* Default values for struct fields */

/* Initializer values for message structs */
#define protos_Error_init_default                {{{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}}
#define protos_Error_MetadataEntry_init_default  {{{NULL}, NULL}, {{NULL}, NULL}}
#define protos_Error_init_zero                   {{{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}}
#define protos_Error_MetadataEntry_init_zero     {{{NULL}, NULL}, {{NULL}, NULL}}

/* Field tags (for use in manual encoding/decoding) */
#define protos_Error_code_tag                    1
#define protos_Error_msg_tag                     2
#define protos_Error_metadata_tag                3
#define protos_Error_MetadataEntry_key_tag       1
#define protos_Error_MetadataEntry_value_tag     2

/* Struct field encoding specification for nanopb */
extern const pb_field_t protos_Error_fields[4];
extern const pb_field_t protos_Error_MetadataEntry_fields[3];

/* Maximum encoded size of messages (where known) */
/* protos_Error_size depends on runtime parameters */
/* protos_Error_MetadataEntry_size depends on runtime parameters */

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define ERROR_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif