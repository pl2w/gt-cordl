#pragma once
// IWYU pragma private; include "System/Guid.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Guid)
namespace GlobalNamespace {
struct Guid_GuidParseThrowStyle;
}
namespace GlobalNamespace {
struct Guid_GuidResult;
}
namespace GlobalNamespace {
struct Guid_GuidStyles;
}
namespace GlobalNamespace {
struct Guid_ParseFailureKind;
}
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
class IComparable;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class IFormatProvider;
}
namespace System {
class IFormattable;
}
namespace System {
class ISpanFormattable;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace System {
struct Guid;
}
// Write type traits
MARK_VAL_T(::System::Guid);
DEFINE_IL2CPP_CLASS(::System::Guid, "System", "Guid");
// [NonVersionable]
// Dependencies 
namespace System {
// Is value type: true
// CS Name: System.Guid
struct CORDL_TYPE Guid {
public:
// Declarations
using GuidParseThrowStyle = ::GlobalNamespace::Guid_GuidParseThrowStyle;

using GuidResult = ::GlobalNamespace::Guid_GuidResult;

using GuidStyles = ::GlobalNamespace::Guid_GuidStyles;

using ParseFailureKind = ::GlobalNamespace::Guid_ParseFailureKind;

/// @brief Field Empty, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_Empty, put=setStaticF_Empty)) ::System::Guid  Empty;

/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() ;

/// @brief Convert operator to "::System::IComparable_1<::System::Guid>"
constexpr operator  ::System::IComparable_1<::System::Guid>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::System::Guid>"
constexpr operator  ::System::IEquatable_1<::System::Guid>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Convert operator to "::System::ISpanFormattable"
constexpr operator  ::System::ISpanFormattable*() ;

/// @brief Method CompareTo, addr 0xa2d79b0, size 0xd0, virtual true, abstract: false, final true
inline int32_t CompareTo(::System::Guid  value) ;

/// @brief Method CompareTo, addr 0xa2d7820, size 0x190, virtual true, abstract: false, final true
inline int32_t CompareTo(::System::Object*  value) ;

/// @brief Method EatAllWhitespace, addr 0xa2d6b98, size 0x24c, virtual false, abstract: false, final false
static inline ::System::ReadOnlySpan_1<char16_t> EatAllWhitespace(::System::ReadOnlySpan_1<char16_t>  str) ;

/// @brief Method Equals, addr 0xa2d77cc, size 0x44, virtual true, abstract: false, final true
inline bool Equals(::System::Guid  g) ;

/// @brief Method Equals, addr 0xa2d7724, size 0xa8, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method GetHashCode, addr 0xa2d7708, size 0x1c, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetResult, addr 0xa2d7810, size 0x10, virtual false, abstract: false, final false
inline int32_t GetResult(uint32_t  me, uint32_t  them) ;

/// @brief Method HexToChar, addr 0xa2d7ad4, size 0x1c, virtual false, abstract: false, final false
static inline char16_t HexToChar(int32_t  a) ;

/// @brief Method HexsToChars, addr 0xa2d7af0, size 0x7c, virtual false, abstract: false, final false
static inline int32_t HexsToChars(char16_t*  guidChars, int32_t  a, int32_t  b) ;

/// @brief Method HexsToCharsHexOutput, addr 0xa2d7b6c, size 0x9c, virtual false, abstract: false, final false
static inline int32_t HexsToCharsHexOutput(char16_t*  guidChars, int32_t  a, int32_t  b) ;

/// @brief Method IsHexPrefix, addr 0xa2d6de4, size 0xc0, virtual false, abstract: false, final false
static inline bool IsHexPrefix(::System::ReadOnlySpan_1<char16_t>  str, int32_t  i) ;

/// @brief Method NewGuid, addr 0xa2d54b0, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Guid NewGuid() ;

/// @brief Method Parse, addr 0xa2d5be8, size 0x94, virtual false, abstract: false, final false
static inline ::System::Guid Parse(::StringW  input) ;

/// @brief Method Parse, addr 0xa2d5c7c, size 0x64, virtual false, abstract: false, final false
static inline ::System::Guid Parse(::System::ReadOnlySpan_1<char16_t>  input) ;

/// @brief Method StringToInt, addr 0xa2d707c, size 0x1f8, virtual false, abstract: false, final false
static inline bool StringToInt(::System::ReadOnlySpan_1<char16_t>  str, ::by_ref<int32_t>  parsePos, int32_t  requiredLength, int32_t  flags, ::by_ref<int32_t>  result, ::by_ref<::GlobalNamespace::Guid_GuidResult>  parseResult) ;

/// @brief Method StringToInt, addr 0xa2d6eb0, size 0x2c, virtual false, abstract: false, final false
static inline bool StringToInt(::System::ReadOnlySpan_1<char16_t>  str, int32_t  requiredLength, int32_t  flags, ::by_ref<int32_t>  result, ::by_ref<::GlobalNamespace::Guid_GuidResult>  parseResult) ;

/// @brief Method StringToLong, addr 0xa2d6f20, size 0x15c, virtual false, abstract: false, final false
static inline bool StringToLong(::System::ReadOnlySpan_1<char16_t>  str, ::by_ref<int32_t>  parsePos, int32_t  flags, ::by_ref<int64_t>  result, ::by_ref<::GlobalNamespace::Guid_GuidResult>  parseResult) ;

/// @brief Method StringToShort, addr 0xa2d7274, size 0x34, virtual false, abstract: false, final false
static inline bool StringToShort(::System::ReadOnlySpan_1<char16_t>  str, ::by_ref<int32_t>  parsePos, int32_t  requiredLength, int32_t  flags, ::by_ref<int16_t>  result, ::by_ref<::GlobalNamespace::Guid_GuidResult>  parseResult) ;

/// @brief Method StringToShort, addr 0xa2d6edc, size 0x44, virtual false, abstract: false, final false
static inline bool StringToShort(::System::ReadOnlySpan_1<char16_t>  str, int32_t  requiredLength, int32_t  flags, ::by_ref<int16_t>  result, ::by_ref<::GlobalNamespace::Guid_GuidResult>  parseResult) ;

/// @brief Method System.ISpanFormattable.TryFormat, addr 0xa2d8028, size 0x4, virtual true, abstract: false, final true
inline bool System_ISpanFormattable_TryFormat(::System::Span_1<char16_t>  destination, ::by_ref<int32_t>  charsWritten, ::System::ReadOnlySpan_1<char16_t>  format, ::System::IFormatProvider*  provider) ;

/// @brief Method ToByteArray, addr 0xa2d73c8, size 0x94, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> ToByteArray() ;

/// @brief Method ToString, addr 0xa2d74c8, size 0x48, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0xa2d7ad0, size 0x4, virtual false, abstract: false, final false
inline ::StringW ToString(::StringW  format) ;

/// @brief Method ToString, addr 0xa2d7510, size 0x1f8, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  provider) ;

/// @brief Method TryFormat, addr 0xa2d7c08, size 0x420, virtual false, abstract: false, final false
inline bool TryFormat(::System::Span_1<char16_t>  destination, ::by_ref<int32_t>  charsWritten, ::System::ReadOnlySpan_1<char16_t>  format) ;

/// @brief Method TryParse, addr 0xa2d5ce0, size 0x8c, virtual false, abstract: false, final false
static inline bool TryParse(::StringW  input, ::by_ref<::System::Guid>  result) ;

/// @brief Method TryParse, addr 0xa2d5d6c, size 0x4c, virtual false, abstract: false, final false
static inline bool TryParse(::System::ReadOnlySpan_1<char16_t>  input, ::by_ref<::System::Guid>  result) ;

/// @brief Method TryParseExact, addr 0xa2d5db8, size 0xc4, virtual false, abstract: false, final false
static inline bool TryParseExact(::StringW  input, ::StringW  format, ::by_ref<::System::Guid>  result) ;

/// @brief Method TryParseExact, addr 0xa2d5e7c, size 0x148, virtual false, abstract: false, final false
static inline bool TryParseExact(::System::ReadOnlySpan_1<char16_t>  input, ::System::ReadOnlySpan_1<char16_t>  format, ::by_ref<::System::Guid>  result) ;

/// @brief Method TryParseGuid, addr 0xa2d5824, size 0x240, virtual false, abstract: false, final false
static inline bool TryParseGuid(::System::ReadOnlySpan_1<char16_t>  guidString, ::GlobalNamespace::Guid_GuidStyles  flags, ::by_ref<::GlobalNamespace::Guid_GuidResult>  result) ;

/// @brief Method TryParseGuidWithDashes, addr 0xa2d5fe4, size 0x28c, virtual false, abstract: false, final false
static inline bool TryParseGuidWithDashes(::System::ReadOnlySpan_1<char16_t>  guidString, ::by_ref<::GlobalNamespace::Guid_GuidResult>  result) ;

/// @brief Method TryParseGuidWithHexPrefix, addr 0xa2d6270, size 0x5b4, virtual false, abstract: false, final false
static inline bool TryParseGuidWithHexPrefix(::System::ReadOnlySpan_1<char16_t>  guidString, ::by_ref<::GlobalNamespace::Guid_GuidResult>  result) ;

/// @brief Method TryParseGuidWithNoStyle, addr 0xa2d6824, size 0x2d8, virtual false, abstract: false, final false
static inline bool TryParseGuidWithNoStyle(::System::ReadOnlySpan_1<char16_t>  guidString, ::by_ref<::GlobalNamespace::Guid_GuidResult>  result) ;

/// @brief Method TryWriteBytes, addr 0xa2d745c, size 0x6c, virtual false, abstract: false, final false
inline bool TryWriteBytes(::System::Span_1<uint8_t>  destination) ;

/// @brief Method WriteByteHelper, addr 0xa2d72b8, size 0x110, virtual false, abstract: false, final false
inline void WriteByteHelper(::System::Span_1<uint8_t>  destination) ;

/// @brief Method .ctor, addr 0xa2d56f4, size 0x40, virtual false, abstract: false, final false
inline void _ctor(int32_t  a, int16_t  b, int16_t  c, uint8_t  d, uint8_t  e, uint8_t  f, uint8_t  g, uint8_t  h, uint8_t  i, uint8_t  j, uint8_t  k) ;

/// [CLSCompliant(false)]
/// @brief Method .ctor, addr 0xa2d56b4, size 0x40, virtual false, abstract: false, final false
inline void _ctor(uint32_t  a, uint16_t  b, uint16_t  c, uint8_t  d, uint8_t  e, uint8_t  f, uint8_t  g, uint8_t  h, uint8_t  i, uint8_t  j, uint8_t  k) ;

/// @brief Method .ctor, addr 0xa2d54fc, size 0x94, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  b) ;

/// @brief Method .ctor, addr 0xa2d5590, size 0x124, virtual false, abstract: false, final false
inline void _ctor(::System::ReadOnlySpan_1<uint8_t>  b) ;

/// @brief Method .ctor, addr 0xa2d5734, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(::StringW  g) ;

static inline ::System::Guid getStaticF_Empty() ;

/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* i___System__IComparable() ;

/// @brief Convert to "::System::IComparable_1<::System::Guid>"
constexpr ::System::IComparable_1<::System::Guid>* i___System__IComparable_1___System__Guid_() ;

/// @brief Convert to "::System::IEquatable_1<::System::Guid>"
constexpr ::System::IEquatable_1<::System::Guid>* i___System__IEquatable_1___System__Guid_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Convert to "::System::ISpanFormattable"
constexpr ::System::ISpanFormattable* i___System__ISpanFormattable() ;

/// @brief Method op_Equality, addr 0xa2d7a80, size 0x28, virtual false, abstract: false, final false
static inline bool op_Equality(::System::Guid  a, ::System::Guid  b) ;

/// @brief Method op_Inequality, addr 0xa2d7aa8, size 0x28, virtual false, abstract: false, final false
static inline bool op_Inequality(::System::Guid  a, ::System::Guid  b) ;

static inline void setStaticF_Empty(::System::Guid  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Guid() ;

// Ctor Parameters [CppParam { name: "_a", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_b", ty: "int16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_c", ty: "int16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_d", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_e", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_f", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_g", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_h", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_i", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_j", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_k", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr Guid(int32_t  _a, int16_t  _b, int16_t  _c, uint8_t  _d, uint8_t  _e, uint8_t  _f, uint8_t  _g, uint8_t  _h, uint8_t  _i, uint8_t  _j, uint8_t  _k) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5511};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _a, offset: 0x0, size: 0x4, def value: None
 int32_t  _a;

/// @brief Field _b, offset: 0x4, size: 0x2, def value: None
 int16_t  _b;

/// @brief Field _c, offset: 0x6, size: 0x2, def value: None
 int16_t  _c;

/// @brief Field _d, offset: 0x8, size: 0x1, def value: None
 uint8_t  _d;

/// @brief Field _e, offset: 0x9, size: 0x1, def value: None
 uint8_t  _e;

/// @brief Field _f, offset: 0xa, size: 0x1, def value: None
 uint8_t  _f;

/// @brief Field _g, offset: 0xb, size: 0x1, def value: None
 uint8_t  _g;

/// @brief Field _h, offset: 0xc, size: 0x1, def value: None
 uint8_t  _h;

/// @brief Field _i, offset: 0xd, size: 0x1, def value: None
 uint8_t  _i;

/// @brief Field _j, offset: 0xe, size: 0x1, def value: None
 uint8_t  _j;

/// @brief Field _k, offset: 0xf, size: 0x1, def value: None
 uint8_t  _k;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Guid, _a) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Guid, _b) == 0x4, "Offset mismatch!");

static_assert(offsetof(::System::Guid, _c) == 0x6, "Offset mismatch!");

static_assert(offsetof(::System::Guid, _d) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Guid, _e) == 0x9, "Offset mismatch!");

static_assert(offsetof(::System::Guid, _f) == 0xa, "Offset mismatch!");

static_assert(offsetof(::System::Guid, _g) == 0xb, "Offset mismatch!");

static_assert(offsetof(::System::Guid, _h) == 0xc, "Offset mismatch!");

static_assert(offsetof(::System::Guid, _i) == 0xd, "Offset mismatch!");

static_assert(offsetof(::System::Guid, _j) == 0xe, "Offset mismatch!");

static_assert(offsetof(::System::Guid, _k) == 0xf, "Offset mismatch!");

static_assert(sizeof(::System::Guid) == 0x10, "Size mismatch!");

} // namespace end def System
