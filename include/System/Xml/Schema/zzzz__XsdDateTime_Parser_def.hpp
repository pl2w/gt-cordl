#pragma once
// IWYU pragma private; include "System/Xml/Schema/XsdDateTime_Parser.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XsdDateTime_DateTimeTypeCode_def.hpp"
#include "System/Xml/Schema/zzzz__XsdDateTime_XsdDateTimeKind_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XsdDateTime_Parser)
namespace System::Xml::Schema {
struct XsdDateTimeFlags;
}
// Forward declare root types
namespace GlobalNamespace {
struct XsdDateTime_Parser;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XsdDateTime_Parser);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XsdDateTime_Parser, "System.Xml.Schema", "XsdDateTime/Parser");
// Dependencies System.Xml.Schema.XsdDateTime::DateTimeTypeCode, System.Xml.Schema.XsdDateTime::XsdDateTimeKind
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.Schema.XsdDateTime/Parser
struct CORDL_TYPE XsdDateTime_Parser {
public:
// Declarations
/// @brief Field Power10, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Power10, put=setStaticF_Power10)) ::ArrayW<int32_t>  Power10;

/// @brief Method Parse, addr 0xab7db1c, size 0xb2c, virtual false, abstract: false, final false
inline bool Parse(::StringW  text, ::System::Xml::Schema::XsdDateTimeFlags  kinds) ;

/// @brief Method Parse2Dig, addr 0xab80cfc, size 0xa8, virtual false, abstract: false, final false
inline bool Parse2Dig(int32_t  start, ::by_ref<int32_t>  num) ;

/// @brief Method Parse4Dig, addr 0xab80bd0, size 0x12c, virtual false, abstract: false, final false
inline bool Parse4Dig(int32_t  start, ::by_ref<int32_t>  num) ;

/// @brief Method ParseChar, addr 0xab80810, size 0x44, virtual false, abstract: false, final false
inline bool ParseChar(int32_t  start, char16_t  ch) ;

/// @brief Method ParseDate, addr 0xab8060c, size 0x204, virtual false, abstract: false, final false
inline bool ParseDate(int32_t  start) ;

/// @brief Method ParseTime, addr 0xab80da4, size 0x35c, virtual false, abstract: false, final false
inline bool ParseTime(::by_ref<int32_t>  start) ;

/// @brief Method ParseTimeAndWhitespace, addr 0xab80b44, size 0x8c, virtual false, abstract: false, final false
inline bool ParseTimeAndWhitespace(int32_t  start) ;

/// @brief Method ParseTimeAndZoneAndWhitespace, addr 0xab80854, size 0x9c, virtual false, abstract: false, final false
inline bool ParseTimeAndZoneAndWhitespace(int32_t  start) ;

/// @brief Method ParseZoneAndWhitespace, addr 0xab808f0, size 0x254, virtual false, abstract: false, final false
inline bool ParseZoneAndWhitespace(int32_t  start) ;

/// @brief Method Test, addr 0xab80600, size 0xc, virtual false, abstract: false, final false
static inline bool Test(::System::Xml::Schema::XsdDateTimeFlags  left, ::System::Xml::Schema::XsdDateTimeFlags  right) ;

static inline ::ArrayW<int32_t> getStaticF_Power10() ;

static inline void setStaticF_Power10(::ArrayW<int32_t>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr XsdDateTime_Parser() ;

// Ctor Parameters [CppParam { name: "typeCode", ty: "::GlobalNamespace::XsdDateTime_DateTimeTypeCode", modifiers: "", def_value: None, comment: None }, CppParam { name: "year", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "month", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "day", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "hour", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "minute", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "second", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "fraction", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "kind", ty: "::GlobalNamespace::XsdDateTime_XsdDateTimeKind", modifiers: "", def_value: None, comment: None }, CppParam { name: "zoneHour", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "zoneMinute", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "text", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XsdDateTime_Parser(::GlobalNamespace::XsdDateTime_DateTimeTypeCode  typeCode, int32_t  year, int32_t  month, int32_t  day, int32_t  hour, int32_t  minute, int32_t  second, int32_t  fraction, ::GlobalNamespace::XsdDateTime_XsdDateTimeKind  kind, int32_t  zoneHour, int32_t  zoneMinute, ::StringW  text, int32_t  length) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14586};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field typeCode, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::XsdDateTime_DateTimeTypeCode  typeCode;

/// @brief Field year, offset: 0x4, size: 0x4, def value: None
 int32_t  year;

/// @brief Field month, offset: 0x8, size: 0x4, def value: None
 int32_t  month;

/// @brief Field day, offset: 0xc, size: 0x4, def value: None
 int32_t  day;

/// @brief Field hour, offset: 0x10, size: 0x4, def value: None
 int32_t  hour;

/// @brief Field minute, offset: 0x14, size: 0x4, def value: None
 int32_t  minute;

/// @brief Field second, offset: 0x18, size: 0x4, def value: None
 int32_t  second;

/// @brief Field fraction, offset: 0x1c, size: 0x4, def value: None
 int32_t  fraction;

/// @brief Field kind, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::XsdDateTime_XsdDateTimeKind  kind;

/// @brief Field zoneHour, offset: 0x24, size: 0x4, def value: None
 int32_t  zoneHour;

/// @brief Field zoneMinute, offset: 0x28, size: 0x4, def value: None
 int32_t  zoneMinute;

/// @brief Field text, offset: 0x30, size: 0x8, def value: None
 ::StringW  text;

/// @brief Field length, offset: 0x38, size: 0x4, def value: None
 int32_t  length;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XsdDateTime_Parser, typeCode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XsdDateTime_Parser, year) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XsdDateTime_Parser, month) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XsdDateTime_Parser, day) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XsdDateTime_Parser, hour) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XsdDateTime_Parser, minute) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XsdDateTime_Parser, second) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XsdDateTime_Parser, fraction) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XsdDateTime_Parser, kind) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XsdDateTime_Parser, zoneHour) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XsdDateTime_Parser, zoneMinute) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XsdDateTime_Parser, text) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XsdDateTime_Parser, length) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XsdDateTime_Parser) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
