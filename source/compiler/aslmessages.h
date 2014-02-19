/******************************************************************************
 *
 * Module Name: aslmessages.h - Compiler error/warning messages
 *
 *****************************************************************************/

/******************************************************************************
 *
 * 1. Copyright Notice
 *
 * Some or all of this work - Copyright (c) 1999 - 2014, Intel Corp.
 * All rights reserved.
 *
 * 2. License
 *
 * 2.1. This is your license from Intel Corp. under its intellectual property
 * rights. You may have additional license terms from the party that provided
 * you this software, covering your right to use that party's intellectual
 * property rights.
 *
 * 2.2. Intel grants, free of charge, to any person ("Licensee") obtaining a
 * copy of the source code appearing in this file ("Covered Code") an
 * irrevocable, perpetual, worldwide license under Intel's copyrights in the
 * base code distributed originally by Intel ("Original Intel Code") to copy,
 * make derivatives, distribute, use and display any portion of the Covered
 * Code in any form, with the right to sublicense such rights; and
 *
 * 2.3. Intel grants Licensee a non-exclusive and non-transferable patent
 * license (with the right to sublicense), under only those claims of Intel
 * patents that are infringed by the Original Intel Code, to make, use, sell,
 * offer to sell, and import the Covered Code and derivative works thereof
 * solely to the minimum extent necessary to exercise the above copyright
 * license, and in no event shall the patent license extend to any additions
 * to or modifications of the Original Intel Code. No other license or right
 * is granted directly or by implication, estoppel or otherwise;
 *
 * The above copyright and patent license is granted only if the following
 * conditions are met:
 *
 * 3. Conditions
 *
 * 3.1. Redistribution of Source with Rights to Further Distribute Source.
 * Redistribution of source code of any substantial portion of the Covered
 * Code or modification with rights to further distribute source must include
 * the above Copyright Notice, the above License, this list of Conditions,
 * and the following Disclaimer and Export Compliance provision. In addition,
 * Licensee must cause all Covered Code to which Licensee contributes to
 * contain a file documenting the changes Licensee made to create that Covered
 * Code and the date of any change. Licensee must include in that file the
 * documentation of any changes made by any predecessor Licensee. Licensee
 * must include a prominent statement that the modification is derived,
 * directly or indirectly, from Original Intel Code.
 *
 * 3.2. Redistribution of Source with no Rights to Further Distribute Source.
 * Redistribution of source code of any substantial portion of the Covered
 * Code or modification without rights to further distribute source must
 * include the following Disclaimer and Export Compliance provision in the
 * documentation and/or other materials provided with distribution. In
 * addition, Licensee may not authorize further sublicense of source of any
 * portion of the Covered Code, and must include terms to the effect that the
 * license from Licensee to its licensee is limited to the intellectual
 * property embodied in the software Licensee provides to its licensee, and
 * not to intellectual property embodied in modifications its licensee may
 * make.
 *
 * 3.3. Redistribution of Executable. Redistribution in executable form of any
 * substantial portion of the Covered Code or modification must reproduce the
 * above Copyright Notice, and the following Disclaimer and Export Compliance
 * provision in the documentation and/or other materials provided with the
 * distribution.
 *
 * 3.4. Intel retains all right, title, and interest in and to the Original
 * Intel Code.
 *
 * 3.5. Neither the name Intel nor any other trademark owned or controlled by
 * Intel shall be used in advertising or otherwise to promote the sale, use or
 * other dealings in products derived from or relating to the Covered Code
 * without prior written authorization from Intel.
 *
 * 4. Disclaimer and Export Compliance
 *
 * 4.1. INTEL MAKES NO WARRANTY OF ANY KIND REGARDING ANY SOFTWARE PROVIDED
 * HERE. ANY SOFTWARE ORIGINATING FROM INTEL OR DERIVED FROM INTEL SOFTWARE
 * IS PROVIDED "AS IS," AND INTEL WILL NOT PROVIDE ANY SUPPORT, ASSISTANCE,
 * INSTALLATION, TRAINING OR OTHER SERVICES. INTEL WILL NOT PROVIDE ANY
 * UPDATES, ENHANCEMENTS OR EXTENSIONS. INTEL SPECIFICALLY DISCLAIMS ANY
 * IMPLIED WARRANTIES OF MERCHANTABILITY, NONINFRINGEMENT AND FITNESS FOR A
 * PARTICULAR PURPOSE.
 *
 * 4.2. IN NO EVENT SHALL INTEL HAVE ANY LIABILITY TO LICENSEE, ITS LICENSEES
 * OR ANY OTHER THIRD PARTY, FOR ANY LOST PROFITS, LOST DATA, LOSS OF USE OR
 * COSTS OF PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES, OR FOR ANY INDIRECT,
 * SPECIAL OR CONSEQUENTIAL DAMAGES ARISING OUT OF THIS AGREEMENT, UNDER ANY
 * CAUSE OF ACTION OR THEORY OF LIABILITY, AND IRRESPECTIVE OF WHETHER INTEL
 * HAS ADVANCE NOTICE OF THE POSSIBILITY OF SUCH DAMAGES. THESE LIMITATIONS
 * SHALL APPLY NOTWITHSTANDING THE FAILURE OF THE ESSENTIAL PURPOSE OF ANY
 * LIMITED REMEDY.
 *
 * 4.3. Licensee shall not export, either directly or indirectly, any of this
 * software or system incorporating such software without first obtaining any
 * required license or other approval from the U. S. Department of Commerce or
 * any other agency or department of the United States Government. In the
 * event Licensee exports any such software from the United States or
 * re-exports any such software from a foreign destination, Licensee shall
 * ensure that the distribution and export/re-export of the software is in
 * compliance with all laws, regulations, orders, or other restrictions of the
 * U.S. Export Administration Regulations. Licensee agrees that neither it nor
 * any of its subsidiaries will export/re-export any technical data, process,
 * software, or service, directly or indirectly, to any country for which the
 * United States government or any agency thereof requires an export license,
 * other governmental approval, or letter of assurance, without first obtaining
 * such license, approval or letter.
 *
 *****************************************************************************/


#ifndef __ASLMESSAGES_H
#define __ASLMESSAGES_H


typedef enum
{
    ASL_OPTIMIZATION = 0,
    ASL_REMARK,
    ASL_WARNING,
    ASL_WARNING2,
    ASL_WARNING3,
    ASL_ERROR,
    ASL_NUM_REPORT_LEVELS

} ASL_MESSAGE_TYPES;

#ifdef ASL_EXCEPTIONS

/* Strings for message reporting levels, must match values above */

const char              *AslErrorLevel [ASL_NUM_REPORT_LEVELS] = {
    "Optimize",
    "Remark  ",
    "Warning ",
    "Warning ",
    "Warning ",
    "Error   "
};

/* All lowercase versions for IDEs */

const char              *AslErrorLevelIde [ASL_NUM_REPORT_LEVELS] = {
    "optimize",
    "remark  ",
    "warning ",
    "warning ",
    "warning ",
    "error   "
};

#define ASL_ERROR_LEVEL_LENGTH          8       /* Length of strings above */
#endif

/*
 * Values for all compiler messages.
 *
 * NOTE: With the introduction of the -vw option to disable specific messages,
 * new messages should only be added to the end of this list, so that values
 * for existing messages are not disturbed.
 */
typedef enum
{
    ASL_MSG_RESERVED = 0,

    ASL_MSG_ALIGNMENT,
    ASL_MSG_ALPHANUMERIC_STRING,
    ASL_MSG_AML_NOT_IMPLEMENTED,
    ASL_MSG_ARG_COUNT_HI,
    ASL_MSG_ARG_COUNT_LO,
    ASL_MSG_ARG_INIT,
    ASL_MSG_BACKWARDS_OFFSET,
    ASL_MSG_BUFFER_LENGTH,
    ASL_MSG_CLOSE,
    ASL_MSG_COMPILER_INTERNAL,
    ASL_MSG_COMPILER_RESERVED,
    ASL_MSG_CONNECTION_MISSING,
    ASL_MSG_CONNECTION_INVALID,
    ASL_MSG_CONSTANT_EVALUATION,
    ASL_MSG_CONSTANT_FOLDED,
    ASL_MSG_CORE_EXCEPTION,
    ASL_MSG_DEBUG_FILE_OPEN,
    ASL_MSG_DEBUG_FILENAME,
    ASL_MSG_DEPENDENT_NESTING,
    ASL_MSG_DMA_CHANNEL,
    ASL_MSG_DMA_LIST,
    ASL_MSG_DUPLICATE_CASE,
    ASL_MSG_DUPLICATE_ITEM,
    ASL_MSG_EARLY_EOF,
    ASL_MSG_ENCODING_LENGTH,
    ASL_MSG_EX_INTERRUPT_LIST,
    ASL_MSG_EX_INTERRUPT_LIST_MIN,
    ASL_MSG_EX_INTERRUPT_NUMBER,
    ASL_MSG_FIELD_ACCESS_WIDTH,
    ASL_MSG_FIELD_UNIT_ACCESS_WIDTH,
    ASL_MSG_FIELD_UNIT_OFFSET,
    ASL_MSG_GPE_NAME_CONFLICT,
    ASL_MSG_HID_LENGTH,
    ASL_MSG_HID_PREFIX,
    ASL_MSG_HID_SUFFIX,
    ASL_MSG_INCLUDE_FILE_OPEN,
    ASL_MSG_INPUT_FILE_OPEN,
    ASL_MSG_INTEGER_LENGTH,
    ASL_MSG_INTEGER_OPTIMIZATION,
    ASL_MSG_INTERRUPT_LIST,
    ASL_MSG_INTERRUPT_NUMBER,
    ASL_MSG_INVALID_ACCESS_SIZE,
    ASL_MSG_INVALID_ADDR_FLAGS,
    ASL_MSG_INVALID_CONSTANT_OP,
    ASL_MSG_INVALID_EISAID,
    ASL_MSG_INVALID_ESCAPE,
    ASL_MSG_INVALID_GRAN_FIXED,
    ASL_MSG_INVALID_GRANULARITY,
    ASL_MSG_INVALID_LENGTH,
    ASL_MSG_INVALID_LENGTH_FIXED,
    ASL_MSG_INVALID_MIN_MAX,
    ASL_MSG_INVALID_OPERAND,
    ASL_MSG_INVALID_PERFORMANCE,
    ASL_MSG_INVALID_PRIORITY,
    ASL_MSG_INVALID_STRING,
    ASL_MSG_INVALID_TARGET,
    ASL_MSG_INVALID_TIME,
    ASL_MSG_INVALID_TYPE,
    ASL_MSG_INVALID_UUID,
    ASL_MSG_ISA_ADDRESS,
    ASL_MSG_LEADING_ASTERISK,
    ASL_MSG_LIST_LENGTH_LONG,
    ASL_MSG_LIST_LENGTH_SHORT,
    ASL_MSG_LISTING_FILE_OPEN,
    ASL_MSG_LISTING_FILENAME,
    ASL_MSG_LOCAL_INIT,
    ASL_MSG_LOCAL_OUTSIDE_METHOD,
    ASL_MSG_LONG_LINE,
    ASL_MSG_MEMORY_ALLOCATION,
    ASL_MSG_MISSING_ENDDEPENDENT,
    ASL_MSG_MISSING_STARTDEPENDENT,
    ASL_MSG_MULTIPLE_DEFAULT,
    ASL_MSG_MULTIPLE_TYPES,
    ASL_MSG_NAME_EXISTS,
    ASL_MSG_NAME_OPTIMIZATION,
    ASL_MSG_NAMED_OBJECT_IN_WHILE,
    ASL_MSG_NESTED_COMMENT,
    ASL_MSG_NO_CASES,
    ASL_MSG_NO_REGION,
    ASL_MSG_NO_RETVAL,
    ASL_MSG_NO_WHILE,
    ASL_MSG_NON_ASCII,
    ASL_MSG_NON_ZERO,
    ASL_MSG_NOT_EXIST,
    ASL_MSG_NOT_FOUND,
    ASL_MSG_NOT_METHOD,
    ASL_MSG_NOT_PARAMETER,
    ASL_MSG_NOT_REACHABLE,
    ASL_MSG_NOT_REFERENCED,
    ASL_MSG_NULL_DESCRIPTOR,
    ASL_MSG_NULL_STRING,
    ASL_MSG_OPEN,
    ASL_MSG_OUTPUT_FILE_OPEN,
    ASL_MSG_OUTPUT_FILENAME,
    ASL_MSG_PACKAGE_LENGTH,
    ASL_MSG_PREPROCESSOR_FILENAME,
    ASL_MSG_READ,
    ASL_MSG_RECURSION,
    ASL_MSG_REGION_BUFFER_ACCESS,
    ASL_MSG_REGION_BYTE_ACCESS,
    ASL_MSG_RESERVED_ARG_COUNT_HI,
    ASL_MSG_RESERVED_ARG_COUNT_LO,
    ASL_MSG_RESERVED_METHOD,
    ASL_MSG_RESERVED_NO_RETURN_VAL,
    ASL_MSG_RESERVED_OPERAND_TYPE,
    ASL_MSG_RESERVED_PACKAGE_LENGTH,
    ASL_MSG_RESERVED_RETURN_VALUE,
    ASL_MSG_RESERVED_USE,
    ASL_MSG_RESERVED_WORD,
    ASL_MSG_RESOURCE_FIELD,
    ASL_MSG_RESOURCE_INDEX,
    ASL_MSG_RESOURCE_LIST,
    ASL_MSG_RESOURCE_SOURCE,
    ASL_MSG_RESULT_NOT_USED,
    ASL_MSG_RETURN_TYPES,
    ASL_MSG_SCOPE_FWD_REF,
    ASL_MSG_SCOPE_TYPE,
    ASL_MSG_SEEK,
    ASL_MSG_SERIALIZED,
    ASL_MSG_SERIALIZED_REQUIRED,
    ASL_MSG_SINGLE_NAME_OPTIMIZATION,
    ASL_MSG_SOME_NO_RETVAL,
    ASL_MSG_STRING_LENGTH,
    ASL_MSG_SWITCH_TYPE,
    ASL_MSG_SYNC_LEVEL,
    ASL_MSG_SYNTAX,
    ASL_MSG_TABLE_SIGNATURE,
    ASL_MSG_TAG_LARGER,
    ASL_MSG_TAG_SMALLER,
    ASL_MSG_TIMEOUT,
    ASL_MSG_TOO_MANY_TEMPS,
    ASL_MSG_TRUNCATION,
    ASL_MSG_UNKNOWN_RESERVED_NAME,
    ASL_MSG_UNREACHABLE_CODE,
    ASL_MSG_UNSUPPORTED,
    ASL_MSG_UPPER_CASE,
    ASL_MSG_VENDOR_LIST,
    ASL_MSG_WRITE,
    ASL_MSG_RANGE,
    ASL_MSG_BUFFER_ALLOCATION,

    /* These messages are used by the Preprocessor only */

    ASL_MSG_DIRECTIVE_SYNTAX,
    ASL_MSG_ENDIF_MISMATCH,
    ASL_MSG_ERROR_DIRECTIVE,
    ASL_MSG_EXISTING_NAME,
    ASL_MSG_INVALID_INVOCATION,
    ASL_MSG_MACRO_SYNTAX,
    ASL_MSG_TOO_MANY_ARGUMENTS,
    ASL_MSG_UNKNOWN_DIRECTIVE,
    ASL_MSG_UNKNOWN_PRAGMA,
    ASL_MSG_WARNING_DIRECTIVE,

    /* These messages are used by the data table compiler only */

    ASL_MSG_BUFFER_ELEMENT,
    ASL_MSG_DIVIDE_BY_ZERO,
    ASL_MSG_FLAG_VALUE,
    ASL_MSG_INTEGER_SIZE,
    ASL_MSG_INVALID_EXPRESSION,
    ASL_MSG_INVALID_FIELD_NAME,
    ASL_MSG_INVALID_HEX_INTEGER,
    ASL_MSG_OEM_TABLE,
    ASL_MSG_RESERVED_VALUE,
    ASL_MSG_UNKNOWN_LABEL,
    ASL_MSG_UNKNOWN_SUBTABLE,
    ASL_MSG_UNKNOWN_TABLE,
    ASL_MSG_ZERO_VALUE

} ASL_MESSAGE_IDS;


#ifdef ASL_EXCEPTIONS

/*
 * Actual message strings for each compiler message.
 *
 * NOTE: With the introduction of the -vw option to disable specific messages,
 * new messages should only be added to the end of this list, so that values
 * for existing messages are not disturbed.
 */
char                        *AslMessages [] =
{
/*    The zeroth message is reserved */    "",
/*    ASL_MSG_ALIGNMENT */                  "Must be a multiple of alignment/granularity value",
/*    ASL_MSG_ALPHANUMERIC_STRING */        "String must be entirely alphanumeric",
/*    ASL_MSG_AML_NOT_IMPLEMENTED */        "Opcode is not implemented in compiler AML code generator",
/*    ASL_MSG_ARG_COUNT_HI */               "Too many arguments",
/*    ASL_MSG_ARG_COUNT_LO */               "Too few arguments",
/*    ASL_MSG_ARG_INIT */                   "Method argument is not initialized",
/*    ASL_MSG_BACKWARDS_OFFSET */           "Invalid backwards offset",
/*    ASL_MSG_BUFFER_LENGTH */              "Effective AML buffer length is zero",
/*    ASL_MSG_CLOSE */                      "Could not close file",
/*    ASL_MSG_COMPILER_INTERNAL */          "Internal compiler error",
/*    ASL_MSG_COMPILER_RESERVED */          "Use of compiler reserved name",
/*    ASL_MSG_CONNECTION_MISSING */         "A Connection operator is required for this field SpaceId",
/*    ASL_MSG_CONNECTION_INVALID */         "Invalid OpRegion SpaceId for use of Connection operator",
/*    ASL_MSG_CONSTANT_EVALUATION */        "Could not evaluate constant expression",
/*    ASL_MSG_CONSTANT_FOLDED */            "Constant expression evaluated and reduced",
/*    ASL_MSG_CORE_EXCEPTION */             "From ACPICA Subsystem",
/*    ASL_MSG_DEBUG_FILE_OPEN */            "Could not open debug file",
/*    ASL_MSG_DEBUG_FILENAME */             "Could not create debug filename",
/*    ASL_MSG_DEPENDENT_NESTING */          "Dependent function macros cannot be nested",\
/*    ASL_MSG_DMA_CHANNEL */                "Invalid DMA channel (must be 0-7)",
/*    ASL_MSG_DMA_LIST */                   "Too many DMA channels (8 max)",
/*    ASL_MSG_DUPLICATE_CASE */             "Case value already specified",
/*    ASL_MSG_DUPLICATE_ITEM */             "Duplicate value in list",
/*    ASL_MSG_EARLY_EOF */                  "Premature end-of-file reached",
/*    ASL_MSG_ENCODING_LENGTH */            "Package length too long to encode",
/*    ASL_MSG_EX_INTERRUPT_LIST */          "Too many interrupts (255 max)",
/*    ASL_MSG_EX_INTERRUPT_LIST_MIN */      "Too few interrupts (1 minimum required)",
/*    ASL_MSG_EX_INTERRUPT_NUMBER */        "Invalid interrupt number (must be 32 bits)",
/*    ASL_MSG_FIELD_ACCESS_WIDTH */         "Access width is greater than region size",
/*    ASL_MSG_FIELD_UNIT_ACCESS_WIDTH */    "Access width of Field Unit extends beyond region limit",
/*    ASL_MSG_FIELD_UNIT_OFFSET */          "Field Unit extends beyond region limit",
/*    ASL_MSG_GPE_NAME_CONFLICT */          "Name conflicts with a previous GPE method",
/*    ASL_MSG_HID_LENGTH */                 "_HID string must be exactly 7 or 8 characters",
/*    ASL_MSG_HID_PREFIX */                 "_HID prefix must be all uppercase or decimal digits",
/*    ASL_MSG_HID_SUFFIX */                 "_HID suffix must be all hex digits",
/*    ASL_MSG_INCLUDE_FILE_OPEN */          "Could not open include file",
/*    ASL_MSG_INPUT_FILE_OPEN */            "Could not open input file",
/*    ASL_MSG_INTEGER_LENGTH */             "64-bit integer in 32-bit table, truncating (DSDT version < 2)",
/*    ASL_MSG_INTEGER_OPTIMIZATION */       "Integer optimized to single-byte AML opcode",
/*    ASL_MSG_INTERRUPT_LIST */             "Too many interrupts (16 max)",
/*    ASL_MSG_INTERRUPT_NUMBER */           "Invalid interrupt number (must be 0-15)",
/*    ASL_MSG_INVALID_ACCESS_SIZE */        "Invalid AccessSize (Maximum is 4 - QWord access)",
/*    ASL_MSG_INVALID_ADDR_FLAGS */         "Invalid combination of Length and Min/Max fixed flags",
/*    ASL_MSG_INVALID_CONSTANT_OP */        "Invalid operator in constant expression (not type 3/4/5)",
/*    ASL_MSG_INVALID_EISAID */             "EISAID string must be of the form \"UUUXXXX\" (3 uppercase, 4 hex digits)",
/*    ASL_MSG_INVALID_ESCAPE */             "Invalid or unknown escape sequence",
/*    ASL_MSG_INVALID_GRAN_FIXED */         "Granularity must be zero for fixed Min/Max",
/*    ASL_MSG_INVALID_GRANULARITY */        "Granularity must be zero or a power of two minus one",
/*    ASL_MSG_INVALID_LENGTH */             "Length is larger than Min/Max window",
/*    ASL_MSG_INVALID_LENGTH_FIXED */       "Length is not equal to fixed Min/Max window",
/*    ASL_MSG_INVALID_MIN_MAX */            "Address Min is greater than Address Max",
/*    ASL_MSG_INVALID_OPERAND */            "Invalid operand",
/*    ASL_MSG_INVALID_PERFORMANCE */        "Invalid performance/robustness value",
/*    ASL_MSG_INVALID_PRIORITY */           "Invalid priority value",
/*    ASL_MSG_INVALID_STRING */             "Invalid Hex/Octal Escape - Non-ASCII or NULL",
/*    ASL_MSG_INVALID_TARGET */             "Target operand not allowed in constant expression",
/*    ASL_MSG_INVALID_TIME */               "Time parameter too long (255 max)",
/*    ASL_MSG_INVALID_TYPE */               "Invalid type",
/*    ASL_MSG_INVALID_UUID */               "UUID string must be of the form \"aabbccdd-eeff-gghh-iijj-kkllmmnnoopp\"",
/*    ASL_MSG_ISA_ADDRESS */                "Maximum 10-bit ISA address (0x3FF)",
/*    ASL_MSG_LEADING_ASTERISK */           "Invalid leading asterisk",
/*    ASL_MSG_LIST_LENGTH_LONG */           "Initializer list longer than declared package length",
/*    ASL_MSG_LIST_LENGTH_SHORT */          "Initializer list shorter than declared package length",
/*    ASL_MSG_LISTING_FILE_OPEN */          "Could not open listing file",
/*    ASL_MSG_LISTING_FILENAME */           "Could not create listing filename",
/*    ASL_MSG_LOCAL_INIT */                 "Method local variable is not initialized",
/*    ASL_MSG_LOCAL_OUTSIDE_METHOD */       "Local or Arg used outside a control method",
/*    ASL_MSG_LONG_LINE */                  "Splitting long input line",
/*    ASL_MSG_MEMORY_ALLOCATION */          "Memory allocation failure",
/*    ASL_MSG_MISSING_ENDDEPENDENT */       "Missing EndDependentFn() macro in dependent resource list",
/*    ASL_MSG_MISSING_STARTDEPENDENT */     "Missing StartDependentFn() macro in dependent resource list",
/*    ASL_MSG_MULTIPLE_DEFAULT */           "More than one Default statement within Switch construct",
/*    ASL_MSG_MULTIPLE_TYPES */             "Multiple types",
/*    ASL_MSG_NAME_EXISTS */                "Name already exists in scope",
/*    ASL_MSG_NAME_OPTIMIZATION */          "NamePath optimized",
/*    ASL_MSG_NAMED_OBJECT_IN_WHILE */      "Creating a named object in a While loop",
/*    ASL_MSG_NESTED_COMMENT */             "Nested comment found",
/*    ASL_MSG_NO_CASES */                   "No Case statements under Switch",
/*    ASL_MSG_NO_REGION */                  "_REG has no corresponding Operation Region",
/*    ASL_MSG_NO_RETVAL */                  "Called method returns no value",
/*    ASL_MSG_NO_WHILE */                   "No enclosing While statement",
/*    ASL_MSG_NON_ASCII */                  "Invalid characters found in file",
/*    ASL_MSG_NON_ZERO */                   "Operand evaluates to zero",
/*    ASL_MSG_NOT_EXIST */                  "Object does not exist",
/*    ASL_MSG_NOT_FOUND */                  "Object not found or not accessible from scope",
/*    ASL_MSG_NOT_METHOD */                 "Not a control method, cannot invoke",
/*    ASL_MSG_NOT_PARAMETER */              "Not a parameter, used as local only",
/*    ASL_MSG_NOT_REACHABLE */              "Object is not accessible from this scope",
/*    ASL_MSG_NOT_REFERENCED */             "Object is not referenced",
/*    ASL_MSG_NULL_DESCRIPTOR */            "Min/Max/Length/Gran are all zero, but no resource tag",
/*    ASL_MSG_NULL_STRING */                "Invalid zero-length (null) string",
/*    ASL_MSG_OPEN */                       "Could not open file",
/*    ASL_MSG_OUTPUT_FILE_OPEN */           "Could not open output AML file",
/*    ASL_MSG_OUTPUT_FILENAME */            "Could not create output filename",
/*    ASL_MSG_PACKAGE_LENGTH */             "Effective AML package length is zero",
/*    ASL_MSG_PREPROCESSOR_FILENAME */      "Could not create preprocessor filename",
/*    ASL_MSG_READ */                       "Could not read file",
/*    ASL_MSG_RECURSION */                  "Recursive method call",
/*    ASL_MSG_REGION_BUFFER_ACCESS */       "Host Operation Region requires BufferAcc access",
/*    ASL_MSG_REGION_BYTE_ACCESS */         "Host Operation Region requires ByteAcc access",
/*    ASL_MSG_RESERVED_ARG_COUNT_HI */      "Reserved method has too many arguments",
/*    ASL_MSG_RESERVED_ARG_COUNT_LO */      "Reserved method has too few arguments",
/*    ASL_MSG_RESERVED_METHOD */            "Reserved name must be a control method",
/*    ASL_MSG_RESERVED_NO_RETURN_VAL */     "Reserved method should not return a value",
/*    ASL_MSG_RESERVED_OPERAND_TYPE */      "Invalid object type for reserved name",
/*    ASL_MSG_RESERVED_PACKAGE_LENGTH */    "Invalid package length for reserved name",
/*    ASL_MSG_RESERVED_RETURN_VALUE */      "Reserved method must return a value",
/*    ASL_MSG_RESERVED_USE */               "Invalid use of reserved name",
/*    ASL_MSG_RESERVED_WORD */              "Use of reserved name",
/*    ASL_MSG_RESOURCE_FIELD */             "Resource field name cannot be used as a target",
/*    ASL_MSG_RESOURCE_INDEX */             "Missing ResourceSourceIndex (required)",
/*    ASL_MSG_RESOURCE_LIST */              "Too many resource items (internal error)",
/*    ASL_MSG_RESOURCE_SOURCE */            "Missing ResourceSource string (required)",
/*    ASL_MSG_RESULT_NOT_USED */            "Result is not used, operator has no effect",
/*    ASL_MSG_RETURN_TYPES */               "Not all control paths return a value",
/*    ASL_MSG_SCOPE_FWD_REF */              "Forward references from Scope operator not allowed",
/*    ASL_MSG_SCOPE_TYPE */                 "Existing object has invalid type for Scope operator",
/*    ASL_MSG_SEEK */                       "Could not seek file",
/*    ASL_MSG_SERIALIZED */                 "Control Method marked Serialized",
/*    ASL_MSG_SERIALIZED_REQUIRED */        "Control Method should be made Serialized",
/*    ASL_MSG_SINGLE_NAME_OPTIMIZATION */   "NamePath optimized to NameSeg (uses run-time search path)",
/*    ASL_MSG_SOME_NO_RETVAL */             "Called method may not always return a value",
/*    ASL_MSG_STRING_LENGTH */              "String literal too long",
/*    ASL_MSG_SWITCH_TYPE */                "Switch expression is not a static Integer/Buffer/String data type, defaulting to Integer",
/*    ASL_MSG_SYNC_LEVEL */                 "SyncLevel must be in the range 0-15",
/*    ASL_MSG_SYNTAX */                     "",
/*    ASL_MSG_TABLE_SIGNATURE */            "Invalid Table Signature",
/*    ASL_MSG_TAG_LARGER */                 "ResourceTag larger than Field",
/*    ASL_MSG_TAG_SMALLER */                "ResourceTag smaller than Field",
/*    ASL_MSG_TIMEOUT */                    "Result is not used, possible operator timeout will be missed",
/*    ASL_MSG_TOO_MANY_TEMPS */             "Method requires too many temporary variables (_T_x)",
/*    ASL_MSG_TRUNCATION */                 "64-bit return value will be truncated to 32 bits (DSDT version < 2)",
/*    ASL_MSG_UNKNOWN_RESERVED_NAME */      "Unknown reserved name",
/*    ASL_MSG_UNREACHABLE_CODE */           "Statement is unreachable",
/*    ASL_MSG_UNSUPPORTED */                "Unsupported feature",
/*    ASL_MSG_UPPER_CASE */                 "Non-hex letters must be upper case",
/*    ASL_MSG_VENDOR_LIST */                "Too many vendor data bytes (7 max)",
/*    ASL_MSG_WRITE */                      "Could not write file",
/*    ASL_MSG_RANGE */                      "Constant out of range",
/*    ASL_MSG_BUFFER_ALLOCATION */          "Could not allocate line buffer",

/* Preprocessor */

/*    ASL_MSG_DIRECTIVE_SYNTAX */           "Invalid directive syntax",
/*    ASL_MSG_ENDIF_MISMATCH */             "Mismatched #endif",
/*    ASL_MSG_ERROR_DIRECTIVE */            "#error",
/*    ASL_MSG_EXISTING_NAME */              "Name is already defined",
/*    ASL_MSG_INVALID_INVOCATION */         "Invalid macro invocation",
/*    ASL_MSG_MACRO_SYNTAX */               "Invalid macro syntax",
/*    ASL_MSG_TOO_MANY_ARGUMENTS */         "Too many macro arguments",
/*    ASL_MSG_UNKNOWN_DIRECTIVE */          "Unknown directive",
/*    ASL_MSG_UNKNOWN_PRAGMA */             "Unknown pragma",
/*    ASL_MSG_WARNING_DIRECTIVE */          "#warning",

/* Table compiler */

/*    ASL_MSG_BUFFER_ELEMENT */             "Invalid element in buffer initializer list",
/*    ASL_MSG_DIVIDE_BY_ZERO */             "Expression contains divide-by-zero",
/*    ASL_MSG_FLAG_VALUE */                 "Flag value is too large",
/*    ASL_MSG_INTEGER_SIZE */               "Integer too large for target",
/*    ASL_MSG_INVALID_EXPRESSION */         "Invalid expression",
/*    ASL_MSG_INVALID_FIELD_NAME */         "Invalid Field Name",
/*    ASL_MSG_INVALID_HEX_INTEGER */        "Invalid hex integer constant",
/*    ASL_MSG_OEM_TABLE */                  "OEM table - unknown contents",
/*    ASL_MSG_RESERVED_VALUE */             "Reserved field",
/*    ASL_MSG_UNKNOWN_LABEL */              "Label is undefined",
/*    ASL_MSG_UNKNOWN_SUBTABLE */           "Unknown subtable type",
/*    ASL_MSG_UNKNOWN_TABLE */              "Unknown ACPI table signature",
/*    ASL_MSG_ZERO_VALUE */                 "Value must be non-zero"
};

#endif  /* ASL_EXCEPTIONS */

#endif  /* __ASLMESSAGES_H */
