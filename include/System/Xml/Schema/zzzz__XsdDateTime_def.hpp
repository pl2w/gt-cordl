#pragma once
// IWYU pragma private; include "System/Xml/Schema/XsdDateTime.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlTypeCode_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XsdDateTime)
namespace GlobalNamespace {
struct XsdDateTime_DateTimeTypeCode;
}
namespace GlobalNamespace {
struct XsdDateTime_Parser;
}
namespace GlobalNamespace {
struct XsdDateTime_XsdDateTimeKind;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Xml::Schema {
struct XsdDateTimeFlags;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace System::Xml::Schema {
struct XsdDateTime;
}
// Write type traits
MARK_VAL_T(::System::Xml::Schema::XsdDateTime);
DEFINE_IL2CPP_CLASS(::System::Xml::Schema::XsdDateTime, "System.Xml.Schema", "XsdDateTime");
// Dependencies System.DateTime, System.Xml.Schema.XmlTypeCode
namespace System::Xml::Schema {
// Is value type: true
// CS Name: System.Xml.Schema.XsdDateTime
struct CORDL_TYPE XsdDateTime {
public:
// Declarations
using DateTimeTypeCode = ::GlobalNamespace::XsdDateTime_DateTimeTypeCode;

using Parser = ::GlobalNamespace::XsdDateTime_Parser;

using XsdDateTimeKind = ::GlobalNamespace::XsdDateTime_XsdDateTimeKind;

 __declspec(property(get=get_Day)) int32_t  Day;

 __declspec(property(get=get_Fraction)) int32_t  Fraction;

 __declspec(property(get=get_Hour)) int32_t  Hour;

 __declspec(property(get=get_InternalKind)) ::GlobalNamespace::XsdDateTime_XsdDateTimeKind  InternalKind;

 __declspec(property(get=get_InternalTypeCode)) ::GlobalNamespace::XsdDateTime_DateTimeTypeCode  InternalTypeCode;

/// @brief Field LzHH, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_LzHH, put=setStaticF_LzHH)) int32_t  LzHH;

/// @brief Field LzHH_, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_LzHH_, put=setStaticF_LzHH_)) int32_t  LzHH_;

/// @brief Field LzHH_mm, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_LzHH_mm, put=setStaticF_LzHH_mm)) int32_t  LzHH_mm;

/// @brief Field LzHH_mm_, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_LzHH_mm_, put=setStaticF_LzHH_mm_)) int32_t  LzHH_mm_;

/// @brief Field LzHH_mm_ss, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_LzHH_mm_ss, put=setStaticF_LzHH_mm_ss)) int32_t  LzHH_mm_ss;

/// @brief Field Lz_, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Lz_, put=setStaticF_Lz_)) int32_t  Lz_;

/// @brief Field Lz__, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Lz__, put=setStaticF_Lz__)) int32_t  Lz__;

/// @brief Field Lz___, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Lz___, put=setStaticF_Lz___)) int32_t  Lz___;

/// @brief Field Lz___dd, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Lz___dd, put=setStaticF_Lz___dd)) int32_t  Lz___dd;

/// @brief Field Lz__mm, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Lz__mm, put=setStaticF_Lz__mm)) int32_t  Lz__mm;

/// @brief Field Lz__mm_, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Lz__mm_, put=setStaticF_Lz__mm_)) int32_t  Lz__mm_;

/// @brief Field Lz__mm__, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Lz__mm__, put=setStaticF_Lz__mm__)) int32_t  Lz__mm__;

/// @brief Field Lz__mm_dd, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Lz__mm_dd, put=setStaticF_Lz__mm_dd)) int32_t  Lz__mm_dd;

/// @brief Field Lz_zz, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Lz_zz, put=setStaticF_Lz_zz)) int32_t  Lz_zz;

/// @brief Field Lz_zz_, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Lz_zz_, put=setStaticF_Lz_zz_)) int32_t  Lz_zz_;

/// @brief Field Lz_zz_zz, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Lz_zz_zz, put=setStaticF_Lz_zz_zz)) int32_t  Lz_zz_zz;

/// @brief Field Lzyyyy, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Lzyyyy, put=setStaticF_Lzyyyy)) int32_t  Lzyyyy;

/// @brief Field Lzyyyy_, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Lzyyyy_, put=setStaticF_Lzyyyy_)) int32_t  Lzyyyy_;

/// @brief Field Lzyyyy_MM, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Lzyyyy_MM, put=setStaticF_Lzyyyy_MM)) int32_t  Lzyyyy_MM;

/// @brief Field Lzyyyy_MM_, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Lzyyyy_MM_, put=setStaticF_Lzyyyy_MM_)) int32_t  Lzyyyy_MM_;

/// @brief Field Lzyyyy_MM_dd, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Lzyyyy_MM_dd, put=setStaticF_Lzyyyy_MM_dd)) int32_t  Lzyyyy_MM_dd;

/// @brief Field Lzyyyy_MM_ddT, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Lzyyyy_MM_ddT, put=setStaticF_Lzyyyy_MM_ddT)) int32_t  Lzyyyy_MM_ddT;

 __declspec(property(get=get_Minute)) int32_t  Minute;

 __declspec(property(get=get_Month)) int32_t  Month;

 __declspec(property(get=get_Second)) int32_t  Second;

 __declspec(property(get=get_Year)) int32_t  Year;

 __declspec(property(get=get_ZoneHour)) int32_t  ZoneHour;

 __declspec(property(get=get_ZoneMinute)) int32_t  ZoneMinute;

/// @brief Field typeCodes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_typeCodes, put=setStaticF_typeCodes)) ::ArrayW<::System::Xml::Schema::XmlTypeCode>  typeCodes;

/// @brief Method InitiateXsdDateTime, addr 0xab7e648, size 0xbc, virtual false, abstract: false, final false
inline void InitiateXsdDateTime(::GlobalNamespace::XsdDateTime_Parser  parser) ;

/// @brief Method IntToCharArray, addr 0xab7ffd8, size 0x68, virtual false, abstract: false, final false
inline void IntToCharArray(::ArrayW<char16_t>  text, int32_t  start, int32_t  value, int32_t  digits) ;

/// @brief Method PrintDate, addr 0xab7fc44, size 0x144, virtual false, abstract: false, final false
inline void PrintDate(::System::Text::StringBuilder*  sb) ;

/// @brief Method PrintTime, addr 0xab7fd88, size 0x250, virtual false, abstract: false, final false
inline void PrintTime(::System::Text::StringBuilder*  sb) ;

/// @brief Method PrintZone, addr 0xab800a8, size 0x1a4, virtual false, abstract: false, final false
inline void PrintZone(::System::Text::StringBuilder*  sb) ;

/// @brief Method ShortToCharArray, addr 0xab80040, size 0x68, virtual false, abstract: false, final false
inline void ShortToCharArray(::ArrayW<char16_t>  text, int32_t  start, int32_t  value) ;

/// @brief Method ToString, addr 0xab7f7d4, size 0x470, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method TryParse, addr 0xab7e788, size 0xc0, virtual false, abstract: false, final false
static inline bool TryParse(::StringW  text, ::System::Xml::Schema::XsdDateTimeFlags  kinds, ::by_ref<::System::Xml::Schema::XsdDateTime>  result) ;

/// @brief Method .ctor, addr 0xab7e848, size 0x1d4, virtual false, abstract: false, final false
inline void _ctor(::System::DateTime  dateTime, ::System::Xml::Schema::XsdDateTimeFlags  kinds) ;

/// @brief Method .ctor, addr 0xab7ea1c, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::System::DateTimeOffset  dateTimeOffset) ;

/// @brief Method .ctor, addr 0xab7ea8c, size 0x194, virtual false, abstract: false, final false
inline void _ctor(::System::DateTimeOffset  dateTimeOffset, ::System::Xml::Schema::XsdDateTimeFlags  kinds) ;

/// @brief Method .ctor, addr 0xab7e704, size 0x84, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::XsdDateTime_Parser  parser) ;

/// @brief Method .ctor, addr 0xab7d98c, size 0x190, virtual false, abstract: false, final false
inline void _ctor(::StringW  text, ::System::Xml::Schema::XsdDateTimeFlags  kinds) ;

static inline int32_t getStaticF_LzHH() ;

static inline int32_t getStaticF_LzHH_() ;

static inline int32_t getStaticF_LzHH_mm() ;

static inline int32_t getStaticF_LzHH_mm_() ;

static inline int32_t getStaticF_LzHH_mm_ss() ;

static inline int32_t getStaticF_Lz_() ;

static inline int32_t getStaticF_Lz__() ;

static inline int32_t getStaticF_Lz___() ;

static inline int32_t getStaticF_Lz___dd() ;

static inline int32_t getStaticF_Lz__mm() ;

static inline int32_t getStaticF_Lz__mm_() ;

static inline int32_t getStaticF_Lz__mm__() ;

static inline int32_t getStaticF_Lz__mm_dd() ;

static inline int32_t getStaticF_Lz_zz() ;

static inline int32_t getStaticF_Lz_zz_() ;

static inline int32_t getStaticF_Lz_zz_zz() ;

static inline int32_t getStaticF_Lzyyyy() ;

static inline int32_t getStaticF_Lzyyyy_() ;

static inline int32_t getStaticF_Lzyyyy_MM() ;

static inline int32_t getStaticF_Lzyyyy_MM_() ;

static inline int32_t getStaticF_Lzyyyy_MM_dd() ;

static inline int32_t getStaticF_Lzyyyy_MM_ddT() ;

static inline ::ArrayW<::System::Xml::Schema::XmlTypeCode> getStaticF_typeCodes() ;

/// @brief Method get_Day, addr 0xab7ece0, size 0x58, virtual false, abstract: false, final false
inline int32_t get_Day() ;

/// @brief Method get_Fraction, addr 0xab7ee40, size 0x118, virtual false, abstract: false, final false
inline int32_t get_Fraction() ;

/// @brief Method get_Hour, addr 0xab7ed38, size 0x58, virtual false, abstract: false, final false
inline int32_t get_Hour() ;

/// @brief Method get_InternalKind, addr 0xab7ec28, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::XsdDateTime_XsdDateTimeKind get_InternalKind() ;

/// @brief Method get_InternalTypeCode, addr 0xab7ec20, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::XsdDateTime_DateTimeTypeCode get_InternalTypeCode() ;

/// @brief Method get_Minute, addr 0xab7ed90, size 0x58, virtual false, abstract: false, final false
inline int32_t get_Minute() ;

/// @brief Method get_Month, addr 0xab7ec88, size 0x58, virtual false, abstract: false, final false
inline int32_t get_Month() ;

/// @brief Method get_Second, addr 0xab7ede8, size 0x58, virtual false, abstract: false, final false
inline int32_t get_Second() ;

/// @brief Method get_Year, addr 0xab7ec30, size 0x58, virtual false, abstract: false, final false
inline int32_t get_Year() ;

/// @brief Method get_ZoneHour, addr 0xab7ef58, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ZoneHour() ;

/// @brief Method get_ZoneMinute, addr 0xab7ef60, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ZoneMinute() ;

/// @brief Method op_Implicit, addr 0xab7ef68, size 0x51c, virtual false, abstract: false, final false
static inline ::System::DateTime op_Implicit___System__DateTime(::System::Xml::Schema::XsdDateTime  xdt) ;

/// @brief Method op_Implicit, addr 0xab7f484, size 0x350, virtual false, abstract: false, final false
static inline ::System::DateTimeOffset op_Implicit___System__DateTimeOffset(::System::Xml::Schema::XsdDateTime  xdt) ;

static inline void setStaticF_LzHH(int32_t  value) ;

static inline void setStaticF_LzHH_(int32_t  value) ;

static inline void setStaticF_LzHH_mm(int32_t  value) ;

static inline void setStaticF_LzHH_mm_(int32_t  value) ;

static inline void setStaticF_LzHH_mm_ss(int32_t  value) ;

static inline void setStaticF_Lz_(int32_t  value) ;

static inline void setStaticF_Lz__(int32_t  value) ;

static inline void setStaticF_Lz___(int32_t  value) ;

static inline void setStaticF_Lz___dd(int32_t  value) ;

static inline void setStaticF_Lz__mm(int32_t  value) ;

static inline void setStaticF_Lz__mm_(int32_t  value) ;

static inline void setStaticF_Lz__mm__(int32_t  value) ;

static inline void setStaticF_Lz__mm_dd(int32_t  value) ;

static inline void setStaticF_Lz_zz(int32_t  value) ;

static inline void setStaticF_Lz_zz_(int32_t  value) ;

static inline void setStaticF_Lz_zz_zz(int32_t  value) ;

static inline void setStaticF_Lzyyyy(int32_t  value) ;

static inline void setStaticF_Lzyyyy_(int32_t  value) ;

static inline void setStaticF_Lzyyyy_MM(int32_t  value) ;

static inline void setStaticF_Lzyyyy_MM_(int32_t  value) ;

static inline void setStaticF_Lzyyyy_MM_dd(int32_t  value) ;

static inline void setStaticF_Lzyyyy_MM_ddT(int32_t  value) ;

static inline void setStaticF_typeCodes(::ArrayW<::System::Xml::Schema::XmlTypeCode>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr XsdDateTime() ;

// Ctor Parameters [CppParam { name: "dt", ty: "::System::DateTime", modifiers: "", def_value: None, comment: None }, CppParam { name: "extra", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr XsdDateTime(::System::DateTime  dt, uint32_t  extra) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14587};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field dt, offset: 0x0, size: 0x8, def value: None
 ::System::DateTime  dt;

/// @brief Field extra, offset: 0x8, size: 0x4, def value: None
 uint32_t  extra;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XsdDateTime, dt) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdDateTime, extra) == 0x8, "Offset mismatch!");

static_assert(sizeof(::System::Xml::Schema::XsdDateTime) == 0x10, "Size mismatch!");

} // namespace end def System::Xml::Schema
