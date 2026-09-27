#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/JavaScriptUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JavaScriptUtils)
namespace Newtonsoft::Json {
template<typename T>
class IArrayPool_1;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json {
struct StringEscapeHandling;
}
namespace System::IO {
class TextWriter;
}
namespace System {
struct DateTime;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class JavaScriptUtils;
}
// Write type traits
MARK_REF_T(::Newtonsoft::Json::Utilities::JavaScriptUtils*);
DEFINE_IL2CPP_CLASS(::Newtonsoft::Json::Utilities::JavaScriptUtils*, "Newtonsoft.Json.Utilities", "JavaScriptUtils");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies System.Object
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: Newtonsoft.Json.Utilities.JavaScriptUtils
class CORDL_TYPE JavaScriptUtils : public ::System::Object {
public:
// Declarations
/// @brief Field DoubleQuoteCharEscapeFlags, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DoubleQuoteCharEscapeFlags, put=setStaticF_DoubleQuoteCharEscapeFlags)) ::ArrayW<bool>  DoubleQuoteCharEscapeFlags;

/// @brief Field HtmlCharEscapeFlags, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_HtmlCharEscapeFlags, put=setStaticF_HtmlCharEscapeFlags)) ::ArrayW<bool>  HtmlCharEscapeFlags;

/// @brief Field SingleQuoteCharEscapeFlags, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SingleQuoteCharEscapeFlags, put=setStaticF_SingleQuoteCharEscapeFlags)) ::ArrayW<bool>  SingleQuoteCharEscapeFlags;

/// @brief Method FirstCharToEscape, addr 0xa3a09bc, size 0xb8, virtual false, abstract: false, final false
static inline int32_t FirstCharToEscape(::StringW  s, ::ArrayW<bool>  charEscapeFlags, ::Newtonsoft::Json::StringEscapeHandling  stringEscapeHandling) ;

/// @brief Method GetCharEscapeFlags, addr 0xa3a02a0, size 0xac, virtual false, abstract: false, final false
static inline ::ArrayW<bool> GetCharEscapeFlags(::Newtonsoft::Json::StringEscapeHandling  stringEscapeHandling, char16_t  quoteChar) ;

/// @brief Method ShouldEscapeJavaScriptString, addr 0xa3a034c, size 0x7c, virtual false, abstract: false, final false
static inline bool ShouldEscapeJavaScriptString(/* [Nullable(2)] */ ::StringW  s, ::ArrayW<bool>  charEscapeFlags) ;

/// @brief Method ToEscapedJavaScriptString, addr 0xa3a0b2c, size 0x1d4, virtual false, abstract: false, final false
static inline ::StringW ToEscapedJavaScriptString(/* [Nullable(2)] */ ::StringW  value, char16_t  delimiter, bool  appendDelimiters, ::Newtonsoft::Json::StringEscapeHandling  stringEscapeHandling) ;

/// @brief Method TryGetDateConstructorValue, addr 0xa3a1224, size 0x1b0, virtual false, abstract: false, final false
static inline bool TryGetDateConstructorValue(::Newtonsoft::Json::JsonReader*  reader, ::by_ref<::System::Nullable_1<int64_t>>  integer, /* [Nullable(2)] [NotNullWhen(false)] */ ::by_ref<::StringW>  errorMessage) ;

/// @brief Method TryGetDateFromConstructorJson, addr 0xa3a0dc8, size 0x45c, virtual false, abstract: false, final false
static inline bool TryGetDateFromConstructorJson(::Newtonsoft::Json::JsonReader*  reader, ::by_ref<::System::DateTime>  dateTime, /* [Nullable(2)] [NotNullWhen(false)] */ ::by_ref<::StringW>  errorMessage) ;

/// [NullableContext(2)]
/// @brief Method WriteEscapedJavaScriptString, addr 0xa3a03c8, size 0x5f4, virtual false, abstract: false, final false
static inline void WriteEscapedJavaScriptString(/* [Nullable(1)] */ ::System::IO::TextWriter*  writer, ::StringW  s, char16_t  delimiter, bool  appendDelimiters, /* [Nullable(1)] */ ::ArrayW<bool>  charEscapeFlags, ::Newtonsoft::Json::StringEscapeHandling  stringEscapeHandling, ::Newtonsoft::Json::IArrayPool_1<char16_t>*  bufferPool, ::by_ref<::ArrayW<char16_t>>  writeBuffer) ;

static inline ::ArrayW<bool> getStaticF_DoubleQuoteCharEscapeFlags() ;

static inline ::ArrayW<bool> getStaticF_HtmlCharEscapeFlags() ;

static inline ::ArrayW<bool> getStaticF_SingleQuoteCharEscapeFlags() ;

static inline void setStaticF_DoubleQuoteCharEscapeFlags(::ArrayW<bool>  value) ;

static inline void setStaticF_HtmlCharEscapeFlags(::ArrayW<bool>  value) ;

static inline void setStaticF_SingleQuoteCharEscapeFlags(::ArrayW<bool>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JavaScriptUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JavaScriptUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JavaScriptUtils(JavaScriptUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JavaScriptUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JavaScriptUtils(JavaScriptUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23214};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Newtonsoft::Json::Utilities::JavaScriptUtils) == 0x10, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Utilities
