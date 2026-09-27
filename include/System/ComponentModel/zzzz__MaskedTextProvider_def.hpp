#pragma once
// IWYU pragma private; include "System/ComponentModel/MaskedTextProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Specialized/zzzz__BitVector32_def.hpp"
#include "System/ComponentModel/zzzz__MaskedTextProvider_CaseConversion_def.hpp"
#include "System/ComponentModel/zzzz__MaskedTextProvider_CharType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MaskedTextProvider)
namespace GlobalNamespace {
struct MaskedTextProvider_CaseConversion;
}
namespace GlobalNamespace {
struct MaskedTextProvider_CharType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::ComponentModel {
class MaskedTextProvider_CharDescriptor;
}
namespace System::ComponentModel {
struct MaskedTextResultHint;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class ICloneable;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class MaskedTextProvider;
}
namespace System::ComponentModel {
class MaskedTextProvider_CharDescriptor;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::MaskedTextProvider*);
MARK_REF_T(::System::ComponentModel::MaskedTextProvider_CharDescriptor*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::MaskedTextProvider*, "System.ComponentModel", "MaskedTextProvider");
DEFINE_IL2CPP_CLASS(::System::ComponentModel::MaskedTextProvider_CharDescriptor*, "System.ComponentModel", "MaskedTextProvider/CharDescriptor");
// [DefaultMember("Item")]
// Dependencies System.Collections.Specialized.BitVector32, System.Object
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.MaskedTextProvider
class CORDL_TYPE MaskedTextProvider : public ::System::Object {
public:
// Declarations
using CaseConversion = ::GlobalNamespace::MaskedTextProvider_CaseConversion;

using CharType = ::GlobalNamespace::MaskedTextProvider_CharType;

using CharDescriptor = ::System::ComponentModel::MaskedTextProvider_CharDescriptor;

 __declspec(property(get=get_AllowPromptAsInput)) bool  AllowPromptAsInput;

 __declspec(property(get=get_AsciiOnly)) bool  AsciiOnly;

 __declspec(property(get=get_AssignedEditPositionCount, put=set_AssignedEditPositionCount)) int32_t  AssignedEditPositionCount;

 __declspec(property(get=get_AvailableEditPositionCount)) int32_t  AvailableEditPositionCount;

 __declspec(property(get=get_Culture)) ::System::Globalization::CultureInfo*  Culture;

 __declspec(property(get=get_EditPositionCount)) int32_t  EditPositionCount;

 __declspec(property(get=get_EditPositions)) ::System::Collections::IEnumerator*  EditPositions;

 __declspec(property(get=get_IncludeLiterals, put=set_IncludeLiterals)) bool  IncludeLiterals;

 __declspec(property(get=get_IncludePrompt, put=set_IncludePrompt)) bool  IncludePrompt;

 __declspec(property(get=get_IsPassword, put=set_IsPassword)) bool  IsPassword;

 __declspec(property(get=get_Item)) char16_t  Item[];

 __declspec(property(get=get_LastAssignedPosition)) int32_t  LastAssignedPosition;

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_Mask)) ::StringW  Mask;

 __declspec(property(get=get_MaskCompleted)) bool  MaskCompleted;

 __declspec(property(get=get_MaskFull)) bool  MaskFull;

 __declspec(property(get=get_PasswordChar, put=set_PasswordChar)) char16_t  PasswordChar;

 __declspec(property(get=get_PromptChar, put=set_PromptChar)) char16_t  PromptChar;

 __declspec(property(get=get_ResetOnPrompt, put=set_ResetOnPrompt)) bool  ResetOnPrompt;

 __declspec(property(get=get_ResetOnSpace, put=set_ResetOnSpace)) bool  ResetOnSpace;

 __declspec(property(get=get_SkipLiterals, put=set_SkipLiterals)) bool  SkipLiterals;

/// @brief Field <AssignedEditPositionCount>k__BackingField, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__AssignedEditPositionCount_k__BackingField, put=__cordl_internal_set__AssignedEditPositionCount_k__BackingField)) int32_t  _AssignedEditPositionCount_k__BackingField;

/// @brief Field <Culture>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__Culture_k__BackingField, put=__cordl_internal_set__Culture_k__BackingField)) ::System::Globalization::CultureInfo*  _Culture_k__BackingField;

/// @brief Field <Mask>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__Mask_k__BackingField, put=__cordl_internal_set__Mask_k__BackingField)) ::StringW  _Mask_k__BackingField;

/// @brief Field _flagState, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__flagState, put=__cordl_internal_set__flagState)) ::System::Collections::Specialized::BitVector32  _flagState;

/// @brief Field _optionalEditChars, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__optionalEditChars, put=__cordl_internal_set__optionalEditChars)) int32_t  _optionalEditChars;

/// @brief Field _passwordChar, offset 0x2c, size 0x2 
 __declspec(property(get=__cordl_internal_get__passwordChar, put=__cordl_internal_set__passwordChar)) char16_t  _passwordChar;

/// @brief Field _promptChar, offset 0x2e, size 0x2 
 __declspec(property(get=__cordl_internal_get__promptChar, put=__cordl_internal_set__promptChar)) char16_t  _promptChar;

/// @brief Field _requiredCharCount, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__requiredCharCount, put=__cordl_internal_set__requiredCharCount)) int32_t  _requiredCharCount;

/// @brief Field _requiredEditChars, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__requiredEditChars, put=__cordl_internal_set__requiredEditChars)) int32_t  _requiredEditChars;

/// @brief Field _stringDescriptor, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__stringDescriptor, put=__cordl_internal_set__stringDescriptor)) ::System::Collections::Generic::List_1<::System::ComponentModel::MaskedTextProvider_CharDescriptor*>*  _stringDescriptor;

/// @brief Field _testString, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__testString, put=__cordl_internal_set__testString)) ::System::Text::StringBuilder*  _testString;

/// @brief Field s_ALLOW_PROMPT_AS_INPUT, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_ALLOW_PROMPT_AS_INPUT, put=setStaticF_s_ALLOW_PROMPT_AS_INPUT)) int32_t  s_ALLOW_PROMPT_AS_INPUT;

/// @brief Field s_ASCII_ONLY, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_ASCII_ONLY, put=setStaticF_s_ASCII_ONLY)) int32_t  s_ASCII_ONLY;

/// @brief Field s_INCLUDE_LITERALS, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_INCLUDE_LITERALS, put=setStaticF_s_INCLUDE_LITERALS)) int32_t  s_INCLUDE_LITERALS;

/// @brief Field s_INCLUDE_PROMPT, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_INCLUDE_PROMPT, put=setStaticF_s_INCLUDE_PROMPT)) int32_t  s_INCLUDE_PROMPT;

/// @brief Field s_RESET_ON_LITERALS, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_RESET_ON_LITERALS, put=setStaticF_s_RESET_ON_LITERALS)) int32_t  s_RESET_ON_LITERALS;

/// @brief Field s_RESET_ON_PROMPT, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_RESET_ON_PROMPT, put=setStaticF_s_RESET_ON_PROMPT)) int32_t  s_RESET_ON_PROMPT;

/// @brief Field s_SKIP_SPACE, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_SKIP_SPACE, put=setStaticF_s_SKIP_SPACE)) int32_t  s_SKIP_SPACE;

/// @brief Field s_maskTextProviderType, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_maskTextProviderType, put=setStaticF_s_maskTextProviderType)) ::System::Type*  s_maskTextProviderType;

/// @brief Convert operator to "::System::ICloneable"
constexpr operator  ::System::ICloneable*() noexcept;

/// @brief Method Add, addr 0xad5e2b0, size 0x1c, virtual false, abstract: false, final false
inline bool Add(::StringW  input) ;

/// @brief Method Add, addr 0xad5e2cc, size 0xb8, virtual false, abstract: false, final false
inline bool Add(::StringW  input, ::by_ref<int32_t>  testPosition, ::by_ref<::System::ComponentModel::MaskedTextResultHint>  resultHint) ;

/// @brief Method Add, addr 0xad5e108, size 0x1c, virtual false, abstract: false, final false
inline bool Add(char16_t  input) ;

/// @brief Method Add, addr 0xad5e124, size 0xd8, virtual false, abstract: false, final false
inline bool Add(char16_t  input, ::by_ref<int32_t>  testPosition, ::by_ref<::System::ComponentModel::MaskedTextResultHint>  resultHint) ;

/// @brief Method Clear, addr 0xad5e3cc, size 0x18, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Clear, addr 0xad5e3e4, size 0x68, virtual false, abstract: false, final false
inline void Clear(::by_ref<::System::ComponentModel::MaskedTextResultHint>  resultHint) ;

/// @brief Method Clone, addr 0xad5cedc, size 0x494, virtual true, abstract: false, final true
inline ::System::Object* Clone() ;

/// @brief Method FindAssignedEditPositionFrom, addr 0xad5dbcc, size 0x7c, virtual false, abstract: false, final false
inline int32_t FindAssignedEditPositionFrom(int32_t  position, bool  direction) ;

/// @brief Method FindAssignedEditPositionInRange, addr 0xad5e508, size 0x1c, virtual false, abstract: false, final false
inline int32_t FindAssignedEditPositionInRange(int32_t  startPosition, int32_t  endPosition, bool  direction) ;

/// @brief Method FindEditPositionFrom, addr 0xad5e1fc, size 0x58, virtual false, abstract: false, final false
inline int32_t FindEditPositionFrom(int32_t  position, bool  direction) ;

/// @brief Method FindEditPositionInRange, addr 0xad5e618, size 0x8, virtual false, abstract: false, final false
inline int32_t FindEditPositionInRange(int32_t  startPosition, int32_t  endPosition, bool  direction) ;

/// @brief Method FindEditPositionInRange, addr 0xad5e524, size 0xf4, virtual false, abstract: false, final false
inline int32_t FindEditPositionInRange(int32_t  startPosition, int32_t  endPosition, bool  direction, uint8_t  assignedStatus) ;

/// @brief Method FindNonEditPositionFrom, addr 0xad5e714, size 0x58, virtual false, abstract: false, final false
inline int32_t FindNonEditPositionFrom(int32_t  position, bool  direction) ;

/// @brief Method FindNonEditPositionInRange, addr 0xad5e76c, size 0x8, virtual false, abstract: false, final false
inline int32_t FindNonEditPositionInRange(int32_t  startPosition, int32_t  endPosition, bool  direction) ;

/// @brief Method FindPositionInRange, addr 0xad5e620, size 0xf4, virtual false, abstract: false, final false
inline int32_t FindPositionInRange(int32_t  startPosition, int32_t  endPosition, bool  direction, ::GlobalNamespace::MaskedTextProvider_CharType  charTypeFlags) ;

/// @brief Method FindUnassignedEditPositionFrom, addr 0xad5e774, size 0x58, virtual false, abstract: false, final false
inline int32_t FindUnassignedEditPositionFrom(int32_t  position, bool  direction) ;

/// @brief Method FindUnassignedEditPositionInRange, addr 0xad5e7cc, size 0x118, virtual false, abstract: false, final false
inline int32_t FindUnassignedEditPositionInRange(int32_t  startPosition, int32_t  endPosition, bool  direction) ;

/// @brief Method GetOperationResultFromHint, addr 0xad5e8e4, size 0xc, virtual false, abstract: false, final false
static inline bool GetOperationResultFromHint(::System::ComponentModel::MaskedTextResultHint  hint) ;

/// @brief Method Initialize, addr 0xad5c988, size 0x470, virtual false, abstract: false, final false
inline void Initialize() ;

/// @brief Method InsertAt, addr 0xad5e984, size 0x1c, virtual false, abstract: false, final false
inline bool InsertAt(::StringW  input, int32_t  position) ;

/// @brief Method InsertAt, addr 0xad5ea10, size 0xd4, virtual false, abstract: false, final false
inline bool InsertAt(::StringW  input, int32_t  position, ::by_ref<int32_t>  testPosition, ::by_ref<::System::ComponentModel::MaskedTextResultHint>  resultHint) ;

/// @brief Method InsertAt, addr 0xad5e8f0, size 0x94, virtual false, abstract: false, final false
inline bool InsertAt(char16_t  input, int32_t  position) ;

/// @brief Method InsertAt, addr 0xad5e9a0, size 0x70, virtual false, abstract: false, final false
inline bool InsertAt(char16_t  input, int32_t  position, ::by_ref<int32_t>  testPosition, ::by_ref<::System::ComponentModel::MaskedTextResultHint>  resultHint) ;

/// @brief Method InsertAtInt, addr 0xad5eae4, size 0x31c, virtual false, abstract: false, final false
inline bool InsertAtInt(::StringW  input, int32_t  position, ::by_ref<int32_t>  testPosition, ::by_ref<::System::ComponentModel::MaskedTextResultHint>  resultHint, bool  testOnly) ;

/// @brief Method IsAciiAlphanumeric, addr 0xad5f510, size 0x30, virtual false, abstract: false, final false
static inline bool IsAciiAlphanumeric(char16_t  c) ;

/// @brief Method IsAlphanumeric, addr 0xad5f540, size 0x6c, virtual false, abstract: false, final false
static inline bool IsAlphanumeric(char16_t  c) ;

/// @brief Method IsAscii, addr 0xad5f4fc, size 0x14, virtual false, abstract: false, final false
static inline bool IsAscii(char16_t  c) ;

/// @brief Method IsAsciiLetter, addr 0xad5f5ac, size 0x18, virtual false, abstract: false, final false
static inline bool IsAsciiLetter(char16_t  c) ;

/// @brief Method IsAvailablePosition, addr 0xad5f5c4, size 0xcc, virtual false, abstract: false, final false
inline bool IsAvailablePosition(int32_t  position) ;

/// @brief Method IsEditPosition, addr 0xad5ce28, size 0x20, virtual false, abstract: false, final false
static inline bool IsEditPosition(::System::ComponentModel::MaskedTextProvider_CharDescriptor*  charDescriptor) ;

/// @brief Method IsEditPosition, addr 0xad5df94, size 0xc0, virtual false, abstract: false, final false
inline bool IsEditPosition(int32_t  position) ;

/// @brief Method IsLiteralPosition, addr 0xad5f690, size 0x20, virtual false, abstract: false, final false
static inline bool IsLiteralPosition(::System::ComponentModel::MaskedTextProvider_CharDescriptor*  charDescriptor) ;

/// @brief Method IsPrintableChar, addr 0xad5c8ec, size 0x9c, virtual false, abstract: false, final false
static inline bool IsPrintableChar(char16_t  c) ;

/// @brief Method IsValidInputChar, addr 0xad5f6b0, size 0x54, virtual false, abstract: false, final false
static inline bool IsValidInputChar(char16_t  c) ;

/// @brief Method IsValidMaskChar, addr 0xad5f704, size 0x54, virtual false, abstract: false, final false
static inline bool IsValidMaskChar(char16_t  c) ;

/// @brief Method IsValidPasswordChar, addr 0xad5dd98, size 0x68, virtual false, abstract: false, final false
static inline bool IsValidPasswordChar(char16_t  c) ;

static inline ::System::ComponentModel::MaskedTextProvider* New_ctor(::StringW  mask) ;

static inline ::System::ComponentModel::MaskedTextProvider* New_ctor(::StringW  mask, ::System::Globalization::CultureInfo*  culture) ;

static inline ::System::ComponentModel::MaskedTextProvider* New_ctor(::StringW  mask, ::System::Globalization::CultureInfo*  culture, bool  allowPromptAsInput, char16_t  promptChar, char16_t  passwordChar, bool  restrictToAscii) ;

static inline ::System::ComponentModel::MaskedTextProvider* New_ctor(::StringW  mask, ::System::Globalization::CultureInfo*  culture, char16_t  passwordChar, bool  allowPromptAsInput) ;

static inline ::System::ComponentModel::MaskedTextProvider* New_ctor(::StringW  mask, ::System::Globalization::CultureInfo*  culture, bool  restrictToAscii) ;

static inline ::System::ComponentModel::MaskedTextProvider* New_ctor(::StringW  mask, char16_t  passwordChar, bool  allowPromptAsInput) ;

static inline ::System::ComponentModel::MaskedTextProvider* New_ctor(::StringW  mask, bool  restrictToAscii) ;

/// @brief Method Remove, addr 0xad5f758, size 0x2c, virtual false, abstract: false, final false
inline bool Remove() ;

/// @brief Method Remove, addr 0xad5f784, size 0x60, virtual false, abstract: false, final false
inline bool Remove(::by_ref<int32_t>  testPosition, ::by_ref<::System::ComponentModel::MaskedTextResultHint>  resultHint) ;

/// @brief Method RemoveAt, addr 0xad5f7e4, size 0x20, virtual false, abstract: false, final false
inline bool RemoveAt(int32_t  position) ;

/// @brief Method RemoveAt, addr 0xad5f804, size 0x1c, virtual false, abstract: false, final false
inline bool RemoveAt(int32_t  startPosition, int32_t  endPosition) ;

/// @brief Method RemoveAt, addr 0xad5f820, size 0x98, virtual false, abstract: false, final false
inline bool RemoveAt(int32_t  startPosition, int32_t  endPosition, ::by_ref<int32_t>  testPosition, ::by_ref<::System::ComponentModel::MaskedTextResultHint>  resultHint) ;

/// @brief Method RemoveAtInt, addr 0xad5f8b8, size 0x2bc, virtual false, abstract: false, final false
inline bool RemoveAtInt(int32_t  startPosition, int32_t  endPosition, ::by_ref<int32_t>  testPosition, ::by_ref<::System::ComponentModel::MaskedTextResultHint>  resultHint, bool  testOnly) ;

/// @brief Method Replace, addr 0xad60134, size 0x1c, virtual false, abstract: false, final false
inline bool Replace(::StringW  input, int32_t  position) ;

/// @brief Method Replace, addr 0xad60150, size 0xfc, virtual false, abstract: false, final false
inline bool Replace(::StringW  input, int32_t  position, ::by_ref<int32_t>  testPosition, ::by_ref<::System::ComponentModel::MaskedTextResultHint>  resultHint) ;

/// @brief Method Replace, addr 0xad5fe38, size 0x2fc, virtual false, abstract: false, final false
inline bool Replace(::StringW  input, int32_t  startPosition, int32_t  endPosition, ::by_ref<int32_t>  testPosition, ::by_ref<::System::ComponentModel::MaskedTextResultHint>  resultHint) ;

/// @brief Method Replace, addr 0xad5d530, size 0x1c, virtual false, abstract: false, final false
inline bool Replace(char16_t  input, int32_t  position) ;

/// @brief Method Replace, addr 0xad5fc00, size 0xc8, virtual false, abstract: false, final false
inline bool Replace(char16_t  input, int32_t  position, ::by_ref<int32_t>  testPosition, ::by_ref<::System::ComponentModel::MaskedTextResultHint>  resultHint) ;

/// @brief Method Replace, addr 0xad5fd40, size 0xf8, virtual false, abstract: false, final false
inline bool Replace(char16_t  input, int32_t  startPosition, int32_t  endPosition, ::by_ref<int32_t>  testPosition, ::by_ref<::System::ComponentModel::MaskedTextResultHint>  resultHint) ;

/// @brief Method ResetChar, addr 0xad5e44c, size 0xbc, virtual false, abstract: false, final false
inline void ResetChar(int32_t  testPosition) ;

/// @brief Method ResetString, addr 0xad5fb74, size 0x8c, virtual false, abstract: false, final false
inline void ResetString(int32_t  startPosition, int32_t  endPosition) ;

/// @brief Method Set, addr 0xad6024c, size 0x1c, virtual false, abstract: false, final false
inline bool Set(::StringW  input) ;

/// @brief Method Set, addr 0xad60268, size 0xf4, virtual false, abstract: false, final false
inline bool Set(::StringW  input, ::by_ref<int32_t>  testPosition, ::by_ref<::System::ComponentModel::MaskedTextResultHint>  resultHint) ;

/// @brief Method SetChar, addr 0xad5f3e4, size 0x78, virtual false, abstract: false, final false
inline void SetChar(char16_t  input, int32_t  position) ;

/// @brief Method SetChar, addr 0xad6035c, size 0x1a4, virtual false, abstract: false, final false
inline void SetChar(char16_t  input, int32_t  position, ::System::ComponentModel::MaskedTextProvider_CharDescriptor*  charDescriptor) ;

/// @brief Method SetString, addr 0xad5f45c, size 0xa0, virtual false, abstract: false, final false
inline void SetString(::StringW  input, int32_t  testPosition) ;

/// @brief Method TestChar, addr 0xad5ef60, size 0x484, virtual false, abstract: false, final false
inline bool TestChar(char16_t  input, int32_t  position, ::by_ref<::System::ComponentModel::MaskedTextResultHint>  resultHint) ;

/// @brief Method TestEscapeChar, addr 0xad5fcc8, size 0x78, virtual false, abstract: false, final false
inline bool TestEscapeChar(char16_t  input, int32_t  position) ;

/// @brief Method TestEscapeChar, addr 0xad60500, size 0xf8, virtual false, abstract: false, final false
inline bool TestEscapeChar(char16_t  input, int32_t  position, ::System::ComponentModel::MaskedTextProvider_CharDescriptor*  charDex) ;

/// @brief Method TestSetChar, addr 0xad5e254, size 0x5c, virtual false, abstract: false, final false
inline bool TestSetChar(char16_t  input, int32_t  position, ::by_ref<::System::ComponentModel::MaskedTextResultHint>  resultHint) ;

/// @brief Method TestSetString, addr 0xad5e384, size 0x48, virtual false, abstract: false, final false
inline bool TestSetString(::StringW  input, int32_t  position, ::by_ref<int32_t>  testPosition, ::by_ref<::System::ComponentModel::MaskedTextResultHint>  resultHint) ;

/// @brief Method TestString, addr 0xad5ee00, size 0x160, virtual false, abstract: false, final false
inline bool TestString(::StringW  input, int32_t  position, ::by_ref<int32_t>  testPosition, ::by_ref<::System::ComponentModel::MaskedTextResultHint>  resultHint) ;

/// @brief Method ToDisplayString, addr 0xad605f8, size 0x170, virtual false, abstract: false, final false
inline ::StringW ToDisplayString() ;

/// @brief Method ToString, addr 0xad60768, size 0x5c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0xad60ab4, size 0x68, virtual false, abstract: false, final false
inline ::StringW ToString(bool  ignorePasswordChar) ;

/// @brief Method ToString, addr 0xad607c4, size 0x2f0, virtual false, abstract: false, final false
inline ::StringW ToString(bool  ignorePasswordChar, bool  includePrompt, bool  includeLiterals, int32_t  startPosition, int32_t  length) ;

/// @brief Method ToString, addr 0xad60b6c, size 0x54, virtual false, abstract: false, final false
inline ::StringW ToString(bool  ignorePasswordChar, int32_t  startPosition, int32_t  length) ;

/// @brief Method ToString, addr 0xad60bc0, size 0x4c, virtual false, abstract: false, final false
inline ::StringW ToString(bool  includePrompt, bool  includeLiterals) ;

/// @brief Method ToString, addr 0xad60c0c, size 0x18, virtual false, abstract: false, final false
inline ::StringW ToString(bool  includePrompt, bool  includeLiterals, int32_t  startPosition, int32_t  length) ;

/// @brief Method ToString, addr 0xad60b1c, size 0x50, virtual false, abstract: false, final false
inline ::StringW ToString(int32_t  startPosition, int32_t  length) ;

/// @brief Method VerifyChar, addr 0xad60c24, size 0x80, virtual false, abstract: false, final false
inline bool VerifyChar(char16_t  input, int32_t  position, ::by_ref<::System::ComponentModel::MaskedTextResultHint>  hint) ;

/// @brief Method VerifyEscapeChar, addr 0xad60ca4, size 0x5c, virtual false, abstract: false, final false
inline bool VerifyEscapeChar(char16_t  input, int32_t  position) ;

/// @brief Method VerifyString, addr 0xad60d00, size 0x3c, virtual false, abstract: false, final false
inline bool VerifyString(::StringW  input) ;

/// @brief Method VerifyString, addr 0xad60d3c, size 0x30, virtual false, abstract: false, final false
inline bool VerifyString(::StringW  input, ::by_ref<int32_t>  testPosition, ::by_ref<::System::ComponentModel::MaskedTextResultHint>  resultHint) ;

constexpr int32_t const& __cordl_internal_get__AssignedEditPositionCount_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__AssignedEditPositionCount_k__BackingField() ;

constexpr ::System::Globalization::CultureInfo* const& __cordl_internal_get__Culture_k__BackingField() const;

constexpr ::System::Globalization::CultureInfo*& __cordl_internal_get__Culture_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Mask_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Mask_k__BackingField() ;

constexpr ::System::Collections::Specialized::BitVector32 const& __cordl_internal_get__flagState() const;

constexpr ::System::Collections::Specialized::BitVector32& __cordl_internal_get__flagState() ;

constexpr int32_t const& __cordl_internal_get__optionalEditChars() const;

constexpr int32_t& __cordl_internal_get__optionalEditChars() ;

constexpr char16_t const& __cordl_internal_get__passwordChar() const;

constexpr char16_t& __cordl_internal_get__passwordChar() ;

constexpr char16_t const& __cordl_internal_get__promptChar() const;

constexpr char16_t& __cordl_internal_get__promptChar() ;

constexpr int32_t const& __cordl_internal_get__requiredCharCount() const;

constexpr int32_t& __cordl_internal_get__requiredCharCount() ;

constexpr int32_t const& __cordl_internal_get__requiredEditChars() const;

constexpr int32_t& __cordl_internal_get__requiredEditChars() ;

constexpr ::System::Collections::Generic::List_1<::System::ComponentModel::MaskedTextProvider_CharDescriptor*>* const& __cordl_internal_get__stringDescriptor() const;

constexpr ::System::Collections::Generic::List_1<::System::ComponentModel::MaskedTextProvider_CharDescriptor*>*& __cordl_internal_get__stringDescriptor() ;

constexpr ::System::Text::StringBuilder* const& __cordl_internal_get__testString() const;

constexpr ::System::Text::StringBuilder*& __cordl_internal_get__testString() ;

constexpr void __cordl_internal_set__AssignedEditPositionCount_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__Culture_k__BackingField(::System::Globalization::CultureInfo*  value) ;

constexpr void __cordl_internal_set__Mask_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__flagState(::System::Collections::Specialized::BitVector32  value) ;

constexpr void __cordl_internal_set__optionalEditChars(int32_t  value) ;

constexpr void __cordl_internal_set__passwordChar(char16_t  value) ;

constexpr void __cordl_internal_set__promptChar(char16_t  value) ;

constexpr void __cordl_internal_set__requiredCharCount(int32_t  value) ;

constexpr void __cordl_internal_set__requiredEditChars(int32_t  value) ;

constexpr void __cordl_internal_set__stringDescriptor(::System::Collections::Generic::List_1<::System::ComponentModel::MaskedTextProvider_CharDescriptor*>*  value) ;

constexpr void __cordl_internal_set__testString(::System::Text::StringBuilder*  value) ;

/// @brief Method .ctor, addr 0xad5c444, size 0x18, virtual false, abstract: false, final false
inline void _ctor(::StringW  mask) ;

/// @brief Method .ctor, addr 0xad5c89c, size 0x14, virtual false, abstract: false, final false
inline void _ctor(::StringW  mask, ::System::Globalization::CultureInfo*  culture) ;

/// @brief Method .ctor, addr 0xad5c45c, size 0x428, virtual false, abstract: false, final false
inline void _ctor(::StringW  mask, ::System::Globalization::CultureInfo*  culture, bool  allowPromptAsInput, char16_t  promptChar, char16_t  passwordChar, bool  restrictToAscii) ;

/// @brief Method .ctor, addr 0xad5c8d8, size 0x14, virtual false, abstract: false, final false
inline void _ctor(::StringW  mask, ::System::Globalization::CultureInfo*  culture, char16_t  passwordChar, bool  allowPromptAsInput) ;

/// @brief Method .ctor, addr 0xad5c8b0, size 0x14, virtual false, abstract: false, final false
inline void _ctor(::StringW  mask, ::System::Globalization::CultureInfo*  culture, bool  restrictToAscii) ;

/// @brief Method .ctor, addr 0xad5c8c4, size 0x14, virtual false, abstract: false, final false
inline void _ctor(::StringW  mask, char16_t  passwordChar, bool  allowPromptAsInput) ;

/// @brief Method .ctor, addr 0xad5c884, size 0x18, virtual false, abstract: false, final false
inline void _ctor(::StringW  mask, bool  restrictToAscii) ;

static inline int32_t getStaticF_s_ALLOW_PROMPT_AS_INPUT() ;

static inline int32_t getStaticF_s_ASCII_ONLY() ;

static inline int32_t getStaticF_s_INCLUDE_LITERALS() ;

static inline int32_t getStaticF_s_INCLUDE_PROMPT() ;

static inline int32_t getStaticF_s_RESET_ON_LITERALS() ;

static inline int32_t getStaticF_s_RESET_ON_PROMPT() ;

static inline int32_t getStaticF_s_SKIP_SPACE() ;

static inline ::System::Type* getStaticF_s_maskTextProviderType() ;

/// @brief Method get_AllowPromptAsInput, addr 0xad5ce48, size 0x64, virtual false, abstract: false, final false
inline bool get_AllowPromptAsInput() ;

/// @brief Method get_AsciiOnly, addr 0xad5d370, size 0x64, virtual false, abstract: false, final false
inline bool get_AsciiOnly() ;

/// [CompilerGenerated]
/// @brief Method get_AssignedEditPositionCount, addr 0xad5ceac, size 0x8, virtual false, abstract: false, final false
inline int32_t get_AssignedEditPositionCount() ;

/// @brief Method get_AvailableEditPositionCount, addr 0xad5cebc, size 0x14, virtual false, abstract: false, final false
inline int32_t get_AvailableEditPositionCount() ;

/// [CompilerGenerated]
/// @brief Method get_Culture, addr 0xad5d828, size 0x8, virtual false, abstract: false, final false
inline ::System::Globalization::CultureInfo* get_Culture() ;

/// @brief Method get_DefaultPasswordChar, addr 0xad5d830, size 0x8, virtual false, abstract: false, final false
static inline char16_t get_DefaultPasswordChar() ;

/// @brief Method get_EditPositionCount, addr 0xad5ced0, size 0xc, virtual false, abstract: false, final false
inline int32_t get_EditPositionCount() ;

/// @brief Method get_EditPositions, addr 0xad5d838, size 0x2b0, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* get_EditPositions() ;

/// @brief Method get_IncludeLiterals, addr 0xad5d678, size 0x64, virtual false, abstract: false, final false
inline bool get_IncludeLiterals() ;

/// @brief Method get_IncludePrompt, addr 0xad5d750, size 0x64, virtual false, abstract: false, final false
inline bool get_IncludePrompt() ;

/// @brief Method get_InvalidIndex, addr 0xad5db78, size 0x8, virtual false, abstract: false, final false
static inline int32_t get_InvalidIndex() ;

/// @brief Method get_IsPassword, addr 0xad5dae8, size 0x10, virtual false, abstract: false, final false
inline bool get_IsPassword() ;

/// @brief Method get_Item, addr 0xad5e054, size 0xb4, virtual false, abstract: false, final false
inline char16_t get_Item(int32_t  index) ;

/// @brief Method get_LastAssignedPosition, addr 0xad5db80, size 0x4c, virtual false, abstract: false, final false
inline int32_t get_LastAssignedPosition() ;

/// @brief Method get_Length, addr 0xad5dc48, size 0x18, virtual false, abstract: false, final false
inline int32_t get_Length() ;

/// [CompilerGenerated]
/// @brief Method get_Mask, addr 0xad5dc60, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Mask() ;

/// @brief Method get_MaskCompleted, addr 0xad5dc68, size 0x10, virtual false, abstract: false, final false
inline bool get_MaskCompleted() ;

/// @brief Method get_MaskFull, addr 0xad5dc78, size 0x18, virtual false, abstract: false, final false
inline bool get_MaskFull() ;

/// @brief Method get_PasswordChar, addr 0xad5dc90, size 0x8, virtual false, abstract: false, final false
inline char16_t get_PasswordChar() ;

/// @brief Method get_PromptChar, addr 0xad5de00, size 0x8, virtual false, abstract: false, final false
inline char16_t get_PromptChar() ;

/// @brief Method get_ResetOnPrompt, addr 0xad5d54c, size 0x64, virtual false, abstract: false, final false
inline bool get_ResetOnPrompt() ;

/// @brief Method get_ResetOnSpace, addr 0xad5d5b0, size 0x64, virtual false, abstract: false, final false
inline bool get_ResetOnSpace() ;

/// @brief Method get_SkipLiterals, addr 0xad5d614, size 0x64, virtual false, abstract: false, final false
inline bool get_SkipLiterals() ;

/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

static inline void setStaticF_s_ALLOW_PROMPT_AS_INPUT(int32_t  value) ;

static inline void setStaticF_s_ASCII_ONLY(int32_t  value) ;

static inline void setStaticF_s_INCLUDE_LITERALS(int32_t  value) ;

static inline void setStaticF_s_INCLUDE_PROMPT(int32_t  value) ;

static inline void setStaticF_s_RESET_ON_LITERALS(int32_t  value) ;

static inline void setStaticF_s_RESET_ON_PROMPT(int32_t  value) ;

static inline void setStaticF_s_SKIP_SPACE(int32_t  value) ;

static inline void setStaticF_s_maskTextProviderType(::System::Type*  value) ;

/// [CompilerGenerated]
/// @brief Method set_AssignedEditPositionCount, addr 0xad5ceb4, size 0x8, virtual false, abstract: false, final false
inline void set_AssignedEditPositionCount(int32_t  value) ;

/// @brief Method set_IncludeLiterals, addr 0xad5d6dc, size 0x74, virtual false, abstract: false, final false
inline void set_IncludeLiterals(bool  value) ;

/// @brief Method set_IncludePrompt, addr 0xad5d7b4, size 0x74, virtual false, abstract: false, final false
inline void set_IncludePrompt(bool  value) ;

/// @brief Method set_IsPassword, addr 0xad5daf8, size 0x80, virtual false, abstract: false, final false
inline void set_IsPassword(bool  value) ;

/// @brief Method set_PasswordChar, addr 0xad5dc98, size 0x100, virtual false, abstract: false, final false
inline void set_PasswordChar(char16_t  value) ;

/// @brief Method set_PromptChar, addr 0xad5de08, size 0x18c, virtual false, abstract: false, final false
inline void set_PromptChar(char16_t  value) ;

/// @brief Method set_ResetOnPrompt, addr 0xad5d3d4, size 0x74, virtual false, abstract: false, final false
inline void set_ResetOnPrompt(bool  value) ;

/// @brief Method set_ResetOnSpace, addr 0xad5d448, size 0x74, virtual false, abstract: false, final false
inline void set_ResetOnSpace(bool  value) ;

/// @brief Method set_SkipLiterals, addr 0xad5d4bc, size 0x74, virtual false, abstract: false, final false
inline void set_SkipLiterals(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MaskedTextProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MaskedTextProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MaskedTextProvider(MaskedTextProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MaskedTextProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaskedTextProvider(MaskedTextProvider const& ) = delete;

/// @brief Field BACKWARD offset 0xffffffff size 0x1
static constexpr bool  BACKWARD{false};

/// @brief Field DEFAULT_ALLOW_PROMPT offset 0xffffffff size 0x1
static constexpr bool  DEFAULT_ALLOW_PROMPT{true};

/// @brief Field DEFAULT_PROMPT_CHAR offset 0xffffffff size 0x2
static constexpr char16_t  DEFAULT_PROMPT_CHAR{u'_'};

/// @brief Field EDIT_ANY offset 0xffffffff size 0x1
static constexpr uint8_t  EDIT_ANY{static_cast<uint8_t>(0x0u)};

/// @brief Field EDIT_ASSIGNED offset 0xffffffff size 0x1
static constexpr uint8_t  EDIT_ASSIGNED{static_cast<uint8_t>(0x2u)};

/// @brief Field EDIT_UNASSIGNED offset 0xffffffff size 0x1
static constexpr uint8_t  EDIT_UNASSIGNED{static_cast<uint8_t>(0x1u)};

/// @brief Field FORWARD offset 0xffffffff size 0x1
static constexpr bool  FORWARD{true};

/// @brief Field INVALID_INDEX offset 0xffffffff size 0x4
static constexpr int32_t  INVALID_INDEX{static_cast<int32_t>(0xffffffff)};

/// @brief Field NULL_PASSWORD_CHAR offset 0xffffffff size 0x2
static constexpr char16_t  NULL_PASSWORD_CHAR{u'\u{0}'};

/// @brief Field SPACE_CHAR offset 0xffffffff size 0x2
static constexpr char16_t  SPACE_CHAR{u' '};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10208};

/// @brief Field _flagState, offset: 0x10, size: 0x4, def value: None
 ::System::Collections::Specialized::BitVector32  ____flagState;

/// @brief Field _testString, offset: 0x18, size: 0x8, def value: None
 ::System::Text::StringBuilder*  ____testString;

/// @brief Field _requiredCharCount, offset: 0x20, size: 0x4, def value: None
 int32_t  ____requiredCharCount;

/// @brief Field _requiredEditChars, offset: 0x24, size: 0x4, def value: None
 int32_t  ____requiredEditChars;

/// @brief Field _optionalEditChars, offset: 0x28, size: 0x4, def value: None
 int32_t  ____optionalEditChars;

/// @brief Field _passwordChar, offset: 0x2c, size: 0x2, def value: None
 char16_t  ____passwordChar;

/// @brief Field _promptChar, offset: 0x2e, size: 0x2, def value: None
 char16_t  ____promptChar;

/// @brief Field _stringDescriptor, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::ComponentModel::MaskedTextProvider_CharDescriptor*>*  ____stringDescriptor;

/// [CompilerGenerated]
/// @brief Field <AssignedEditPositionCount>k__BackingField, offset: 0x38, size: 0x4, def value: None
 int32_t  ____AssignedEditPositionCount_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Culture>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::System::Globalization::CultureInfo*  ____Culture_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Mask>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::StringW  ____Mask_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::MaskedTextProvider, ____flagState) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::MaskedTextProvider, ____testString) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::MaskedTextProvider, ____requiredCharCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::MaskedTextProvider, ____requiredEditChars) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::MaskedTextProvider, ____optionalEditChars) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::MaskedTextProvider, ____passwordChar) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::MaskedTextProvider, ____promptChar) == 0x2e, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::MaskedTextProvider, ____stringDescriptor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::MaskedTextProvider, ____AssignedEditPositionCount_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::MaskedTextProvider, ____Culture_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::MaskedTextProvider, ____Mask_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(sizeof(::System::ComponentModel::MaskedTextProvider) == 0x50, "Size mismatch!");

} // namespace end def System::ComponentModel
// Dependencies System.ComponentModel.MaskedTextProvider::CaseConversion, System.ComponentModel.MaskedTextProvider::CharType, System.Object
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.MaskedTextProvider/CharDescriptor
class CORDL_TYPE MaskedTextProvider_CharDescriptor : public ::System::Object {
public:
// Declarations
/// @brief Field CaseConversion, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_CaseConversion, put=__cordl_internal_set_CaseConversion)) ::GlobalNamespace::MaskedTextProvider_CaseConversion  CaseConversion;

/// @brief Field CharType, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_CharType, put=__cordl_internal_set_CharType)) ::GlobalNamespace::MaskedTextProvider_CharType  CharType;

/// @brief Field IsAssigned, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsAssigned, put=__cordl_internal_set_IsAssigned)) bool  IsAssigned;

/// @brief Field MaskPosition, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaskPosition, put=__cordl_internal_set_MaskPosition)) int32_t  MaskPosition;

static inline ::System::ComponentModel::MaskedTextProvider_CharDescriptor* New_ctor(int32_t  maskPos, ::GlobalNamespace::MaskedTextProvider_CharType  charType) ;

/// @brief Method ToString, addr 0xad60e88, size 0x238, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::GlobalNamespace::MaskedTextProvider_CaseConversion const& __cordl_internal_get_CaseConversion() const;

constexpr ::GlobalNamespace::MaskedTextProvider_CaseConversion& __cordl_internal_get_CaseConversion() ;

constexpr ::GlobalNamespace::MaskedTextProvider_CharType const& __cordl_internal_get_CharType() const;

constexpr ::GlobalNamespace::MaskedTextProvider_CharType& __cordl_internal_get_CharType() ;

constexpr bool const& __cordl_internal_get_IsAssigned() const;

constexpr bool& __cordl_internal_get_IsAssigned() ;

constexpr int32_t const& __cordl_internal_get_MaskPosition() const;

constexpr int32_t& __cordl_internal_get_MaskPosition() ;

constexpr void __cordl_internal_set_CaseConversion(::GlobalNamespace::MaskedTextProvider_CaseConversion  value) ;

constexpr void __cordl_internal_set_CharType(::GlobalNamespace::MaskedTextProvider_CharType  value) ;

constexpr void __cordl_internal_set_IsAssigned(bool  value) ;

constexpr void __cordl_internal_set_MaskPosition(int32_t  value) ;

/// @brief Method .ctor, addr 0xad5cdf8, size 0x30, virtual false, abstract: false, final false
inline void _ctor(int32_t  maskPos, ::GlobalNamespace::MaskedTextProvider_CharType  charType) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MaskedTextProvider_CharDescriptor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MaskedTextProvider_CharDescriptor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MaskedTextProvider_CharDescriptor(MaskedTextProvider_CharDescriptor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MaskedTextProvider_CharDescriptor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaskedTextProvider_CharDescriptor(MaskedTextProvider_CharDescriptor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10207};

/// @brief Field MaskPosition, offset: 0x10, size: 0x4, def value: None
 int32_t  ___MaskPosition;

/// @brief Field CaseConversion, offset: 0x14, size: 0x4, def value: None
 ::GlobalNamespace::MaskedTextProvider_CaseConversion  ___CaseConversion;

/// @brief Field CharType, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::MaskedTextProvider_CharType  ___CharType;

/// @brief Field IsAssigned, offset: 0x1c, size: 0x1, def value: None
 bool  ___IsAssigned;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::MaskedTextProvider_CharDescriptor, ___MaskPosition) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::MaskedTextProvider_CharDescriptor, ___CaseConversion) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::MaskedTextProvider_CharDescriptor, ___CharType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::MaskedTextProvider_CharDescriptor, ___IsAssigned) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::System::ComponentModel::MaskedTextProvider_CharDescriptor) == 0x20, "Size mismatch!");

} // namespace end def System::ComponentModel
