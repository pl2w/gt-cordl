#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/StringUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StringUtils)
namespace GlobalNamespace {
struct StringUtils_SeparatedCaseState;
}
namespace Newtonsoft::Json::Utilities {
template<typename TSource>
class StringUtils___c__DisplayClass14_0_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::IO {
class StringWriter;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class StringUtils;
}
namespace Newtonsoft::Json::Utilities {
template<typename TSource>
class StringUtils___c__DisplayClass14_0_1;
}
// Write type traits
MARK_REF_T(::Newtonsoft::Json::Utilities::StringUtils*);
MARK_GEN_REF_T_PTR(::Newtonsoft::Json::Utilities::StringUtils___c__DisplayClass14_0_1);
DEFINE_IL2CPP_CLASS(::Newtonsoft::Json::Utilities::StringUtils*, "Newtonsoft.Json.Utilities", "StringUtils");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Newtonsoft::Json::Utilities::StringUtils___c__DisplayClass14_0_1, "Newtonsoft.Json.Utilities", "StringUtils/<>c__DisplayClass14_0`1");
// [NullableContext(1)]
// [Nullable(0)]
// [Extension]
// Dependencies System.Object
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: Newtonsoft.Json.Utilities.StringUtils
class CORDL_TYPE StringUtils : public ::System::Object {
public:
// Declarations
using SeparatedCaseState = ::GlobalNamespace::StringUtils_SeparatedCaseState;

template<typename TSource>
using __c__DisplayClass14_0_1 = ::Newtonsoft::Json::Utilities::StringUtils___c__DisplayClass14_0_1<TSource>;

/// @brief Method CreateStringWriter, addr 0xa3a0d00, size 0xc8, virtual false, abstract: false, final false
static inline ::System::IO::StringWriter* CreateStringWriter(int32_t  capacity) ;

/// [Extension]
/// @brief Method EndsWith, addr 0xa3a8344, size 0x40, virtual false, abstract: false, final false
static inline bool EndsWith(::StringW  source, char16_t  value) ;

/// [Extension]
/// @brief Method ForgivingCaseSensitiveFind, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline TSource ForgivingCaseSensitiveFind(::System::Collections::Generic::IEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::StringW>*  valueSelector, ::StringW  testValue) ;

/// [Extension]
/// @brief Method FormatWith, addr 0xa39a63c, size 0xb4, virtual false, abstract: false, final false
static inline ::StringW FormatWith(::StringW  format, ::System::IFormatProvider*  provider, /* [Nullable(2)] */ ::System::Object*  arg0) ;

/// [Extension]
/// @brief Method FormatWith, addr 0xa39bf9c, size 0xf4, virtual false, abstract: false, final false
static inline ::StringW FormatWith(::StringW  format, ::System::IFormatProvider*  provider, /* [Nullable(2)] */ ::System::Object*  arg0, /* [Nullable(2)] */ ::System::Object*  arg1) ;

/// [Extension]
/// @brief Method FormatWith, addr 0xa3a7acc, size 0x12c, virtual false, abstract: false, final false
static inline ::StringW FormatWith(::StringW  format, ::System::IFormatProvider*  provider, /* [Nullable(2)] */ ::System::Object*  arg0, /* [Nullable(2)] */ ::System::Object*  arg1, /* [Nullable(2)] */ ::System::Object*  arg2) ;

/// [Extension]
/// @brief Method FormatWith, addr 0xa3a7a60, size 0x6c, virtual false, abstract: false, final false
static inline ::StringW FormatWith(::StringW  format, ::System::IFormatProvider*  provider, /* [ParamArray] [Nullable(new[] { 1, 2 })] */ ::ArrayW<::System::Object*>  args) ;

/// [NullableContext(2)]
/// [Extension]
/// @brief Method FormatWith, addr 0xa3a7bf8, size 0x16c, virtual false, abstract: false, final false
static inline ::StringW FormatWith(/* [Nullable(1)] */ ::StringW  format, /* [Nullable(1)] */ ::System::IFormatProvider*  provider, ::System::Object*  arg0, ::System::Object*  arg1, ::System::Object*  arg2, ::System::Object*  arg3) ;

/// @brief Method IndexOf, addr 0xa3a1ec4, size 0x14, virtual false, abstract: false, final false
static inline int32_t IndexOf(::StringW  s, char16_t  c) ;

/// @brief Method IsHighSurrogate, addr 0xa3a8298, size 0x34, virtual false, abstract: false, final false
static inline bool IsHighSurrogate(char16_t  c) ;

/// @brief Method IsLowSurrogate, addr 0xa3a82cc, size 0x34, virtual false, abstract: false, final false
static inline bool IsLowSurrogate(char16_t  c) ;

/// [NullableContext(2)]
/// @brief Method IsNullOrEmpty, addr 0xa398628, size 0x8, virtual false, abstract: false, final false
static inline bool IsNullOrEmpty(/* [NotNullWhen(false)] */ ::StringW  value) ;

/// [Extension]
/// @brief Method StartsWith, addr 0xa3a8300, size 0x44, virtual false, abstract: false, final false
static inline bool StartsWith(::StringW  source, char16_t  value) ;

/// @brief Method ToCamelCase, addr 0xa3a7d64, size 0x1c4, virtual false, abstract: false, final false
static inline ::StringW ToCamelCase(::StringW  s) ;

/// @brief Method ToCharAsUnicode, addr 0xa3a0a74, size 0xb8, virtual false, abstract: false, final false
static inline void ToCharAsUnicode(char16_t  c, ::ArrayW<char16_t>  buffer) ;

/// @brief Method ToKebabCase, addr 0xa3a8290, size 0x8, virtual false, abstract: false, final false
static inline ::StringW ToKebabCase(::StringW  s) ;

/// @brief Method ToLower, addr 0xa3a7f28, size 0x84, virtual false, abstract: false, final false
static inline char16_t ToLower(char16_t  c) ;

/// @brief Method ToSeparatedCase, addr 0xa3a7fb4, size 0x2dc, virtual false, abstract: false, final false
static inline ::StringW ToSeparatedCase(::StringW  s, char16_t  separator) ;

/// @brief Method ToSnakeCase, addr 0xa3a7fac, size 0x8, virtual false, abstract: false, final false
static inline ::StringW ToSnakeCase(::StringW  s) ;

/// [Extension]
/// @brief Method Trim, addr 0xa3a6460, size 0x190, virtual false, abstract: false, final false
static inline ::StringW Trim(::StringW  s, int32_t  start, int32_t  length) ;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23244};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Newtonsoft::Json::Utilities::StringUtils) == 0x10, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Utilities
// [CompilerGenerated]
// Dependencies System.Object
namespace Newtonsoft::Json::Utilities {
// cpp template
template<typename TSource>
// Is value type: false
// CS Name: Newtonsoft.Json.Utilities.StringUtils/<>c__DisplayClass14_0`1<TSource>
class CORDL_TYPE StringUtils___c__DisplayClass14_0_1 : public ::System::Object {
public:
// Declarations
/// @brief Field testValue, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_testValue, put=__cordl_internal_set_testValue)) ::StringW  testValue;

/// @brief Field valueSelector, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_valueSelector, put=__cordl_internal_set_valueSelector)) ::System::Func_2<TSource,::StringW>*  valueSelector;

static inline ::Newtonsoft::Json::Utilities::StringUtils___c__DisplayClass14_0_1<TSource>* New_ctor() ;

/// [NullableContext(0)]
/// @brief Method <ForgivingCaseSensitiveFind>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool _ForgivingCaseSensitiveFind_b__0(TSource  s) ;

/// [NullableContext(0)]
/// @brief Method <ForgivingCaseSensitiveFind>b__1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool _ForgivingCaseSensitiveFind_b__1(TSource  s) ;

constexpr ::StringW const& __cordl_internal_get_testValue() const;

constexpr ::StringW& __cordl_internal_get_testValue() ;

constexpr ::System::Func_2<TSource,::StringW>* const& __cordl_internal_get_valueSelector() const;

constexpr ::System::Func_2<TSource,::StringW>*& __cordl_internal_get_valueSelector() ;

constexpr void __cordl_internal_set_testValue(::StringW  value) ;

constexpr void __cordl_internal_set_valueSelector(::System::Func_2<TSource,::StringW>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StringUtils___c__DisplayClass14_0_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StringUtils___c__DisplayClass14_0_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StringUtils___c__DisplayClass14_0_1(StringUtils___c__DisplayClass14_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StringUtils___c__DisplayClass14_0_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StringUtils___c__DisplayClass14_0_1(StringUtils___c__DisplayClass14_0_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23243};

/// [Nullable(new[] { 0, 0, 1 })]
/// @brief Field valueSelector, offset: 0x10, size: 0x8, def value: None
 ::System::Func_2<TSource,::StringW>*  ___valueSelector;

/// [Nullable(0)]
/// @brief Field testValue, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___testValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
