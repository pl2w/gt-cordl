#pragma once
// IWYU pragma private; include "GlobalNamespace/StringUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StringUtils)
namespace GlobalNamespace {
class StringUtils___c;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
struct StringComparison;
}
// Forward declare root types
namespace GlobalNamespace {
class StringUtils;
}
namespace GlobalNamespace {
class StringUtils___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::StringUtils*);
MARK_REF_T(::GlobalNamespace::StringUtils___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StringUtils*, "", "StringUtils");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StringUtils___c*, "", "StringUtils/<>c");
// [Extension]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: StringUtils
class CORDL_TYPE StringUtils : public ::System::Object {
public:
// Declarations
using __c = ::GlobalNamespace::StringUtils___c;

/// [Extension]
/// @brief Method Capitalize, addr 0x5b18ef4, size 0xa0, virtual false, abstract: false, final false
static inline ::StringW Capitalize(::StringW  s) ;

/// @brief Method Combine, addr 0x5b192f0, size 0xf8, virtual false, abstract: false, final false
static inline ::StringW Combine(::StringW  separator, /* [ParamArray] */ ::ArrayW<::StringW>  values) ;

/// [Extension]
/// @brief Method ComputeSHV2, addr 0x5b19154, size 0x30, virtual false, abstract: false, final false
static inline ::StringW ComputeSHV2(::StringW  s) ;

/// [Extension]
/// @brief Method Concat, addr 0x5b18f94, size 0x8, virtual false, abstract: false, final false
static inline ::StringW Concat(::System::Collections::Generic::IEnumerable_1<::StringW>*  source) ;

/// [Extension]
/// @brief Method IsNullOrEmpty, addr 0x5b18c64, size 0x8, virtual false, abstract: false, final false
static inline bool IsNullOrEmpty(::StringW  s) ;

/// [Extension]
/// @brief Method IsNullOrWhiteSpace, addr 0x5b18c6c, size 0x8, virtual false, abstract: false, final false
static inline bool IsNullOrWhiteSpace(::StringW  s) ;

/// [Extension]
/// @brief Method Join, addr 0x5b18f9c, size 0x14, virtual false, abstract: false, final false
static inline ::StringW Join(::System::Collections::Generic::IEnumerable_1<::StringW>*  source, ::StringW  separator) ;

/// [Extension]
/// @brief Method Join, addr 0x5b18fb0, size 0x58, virtual false, abstract: false, final false
static inline ::StringW Join(::System::Collections::Generic::IEnumerable_1<::StringW>*  source, char16_t  separator) ;

/// [Extension]
/// @brief Method RemoveAll, addr 0x5b19008, size 0x68, virtual false, abstract: false, final false
static inline ::StringW RemoveAll(::StringW  s, ::StringW  value, ::System::StringComparison  mode) ;

/// [Extension]
/// @brief Method RemoveAll, addr 0x5b19070, size 0x54, virtual false, abstract: false, final false
static inline ::StringW RemoveAll(::StringW  s, char16_t  value, ::System::StringComparison  mode) ;

/// [Extension]
/// @brief Method RemoveBothEnds, addr 0x5b19a44, size 0x28, virtual false, abstract: false, final false
static inline ::StringW RemoveBothEnds(::StringW  s, ::StringW  value, ::System::StringComparison  comparison) ;

/// [Extension]
/// @brief Method RemoveEnd, addr 0x5b199cc, size 0x78, virtual false, abstract: false, final false
static inline ::StringW RemoveEnd(::StringW  s, ::StringW  value, ::System::StringComparison  comparison) ;

/// [Extension]
/// @brief Method RemoveStart, addr 0x5b19960, size 0x6c, virtual false, abstract: false, final false
static inline ::StringW RemoveStart(::StringW  s, ::StringW  value, ::System::StringComparison  comparison) ;

/// [Extension]
/// @brief Method ToAlphaNumeric, addr 0x5b18c74, size 0x280, virtual false, abstract: false, final false
static inline ::StringW ToAlphaNumeric(::StringW  s) ;

/// [Extension]
/// @brief Method ToBytesASCII, addr 0x5b190c4, size 0x30, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> ToBytesASCII(::StringW  s) ;

/// [Extension]
/// @brief Method ToBytesUTF8, addr 0x5b190f4, size 0x30, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> ToBytesUTF8(::StringW  s) ;

/// [Extension]
/// @brief Method ToBytesUnicode, addr 0x5b19124, size 0x30, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> ToBytesUnicode(::StringW  s) ;

/// [Extension]
/// @brief Method ToQueryString, addr 0x5b19184, size 0x16c, virtual false, abstract: false, final false
static inline ::StringW ToQueryString(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  d) ;

/// [Extension]
/// @brief Method ToUpperCamelCase, addr 0x5b193e8, size 0x1f4, virtual false, abstract: false, final false
static inline ::StringW ToUpperCamelCase(::StringW  input) ;

/// [Extension]
/// @brief Method ToUpperCaseFromCamelCase, addr 0x5b195dc, size 0x384, virtual false, abstract: false, final false
static inline ::StringW ToUpperCaseFromCamelCase(::StringW  input) ;

/// [Extension]
/// @brief Method TrailingSpace, addr 0x5b19a6c, size 0xdc, virtual false, abstract: false, final false
static inline ::StringW TrailingSpace(::StringW  s) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StringUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StringUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StringUtils(StringUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StringUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StringUtils(StringUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3566};

/// @brief Field kBackSlash offset 0xffffffff size 0x8
static constexpr ::ConstString  kBackSlash{u"/"};

/// @brief Field kBackTick offset 0xffffffff size 0x8
static constexpr ::ConstString  kBackTick{u"`"};

/// @brief Field kColon offset 0xffffffff size 0x8
static constexpr ::ConstString  kColon{u":"};

/// @brief Field kForwardSlash offset 0xffffffff size 0x8
static constexpr ::ConstString  kForwardSlash{u"/"};

/// @brief Field kMinusDash offset 0xffffffff size 0x8
static constexpr ::ConstString  kMinusDash{u"-"};

/// @brief Field kPeriod offset 0xffffffff size 0x8
static constexpr ::ConstString  kPeriod{u"."};

/// @brief Field kUnderScore offset 0xffffffff size 0x8
static constexpr ::ConstString  kUnderScore{u"_"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::StringUtils) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: StringUtils/<>c
class CORDL_TYPE StringUtils___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::StringUtils___c*  __9;

/// @brief Field <>9__20_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__20_0, put=setStaticF___9__20_0)) ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>,::StringW>*  __9__20_0;

static inline ::GlobalNamespace::StringUtils___c* New_ctor() ;

/// @brief Method <ToQueryString>b__20_0, addr 0x5b19bb8, size 0x74, virtual false, abstract: false, final false
inline ::StringW _ToQueryString_b__20_0(::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>  x) ;

/// @brief Method .ctor, addr 0x5b19bb0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::StringUtils___c* getStaticF___9() ;

static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>,::StringW>* getStaticF___9__20_0() ;

static inline void setStaticF___9(::GlobalNamespace::StringUtils___c*  value) ;

static inline void setStaticF___9__20_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StringUtils___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StringUtils___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StringUtils___c(StringUtils___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StringUtils___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StringUtils___c(StringUtils___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3565};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::StringUtils___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
