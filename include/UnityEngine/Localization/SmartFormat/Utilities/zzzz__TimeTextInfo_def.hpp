#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Utilities/TimeTextInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TimeTextInfo)
namespace System {
struct Decimal;
}
namespace UnityEngine::Localization::SmartFormat::Utilities {
class PluralRules_PluralRuleDelegate;
}
namespace UnityEngine::Localization::SmartFormat::Utilities {
struct TimeSpanFormatOptions;
}
namespace UnityEngine::Localization::SmartFormat::Utilities {
class TimeTextInfo___c;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::Utilities {
class TimeTextInfo;
}
namespace UnityEngine::Localization::SmartFormat::Utilities {
class TimeTextInfo___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Utilities::TimeTextInfo*);
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Utilities::TimeTextInfo___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Utilities::TimeTextInfo*, "UnityEngine.Localization.SmartFormat.Utilities", "TimeTextInfo");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Utilities::TimeTextInfo___c*, "UnityEngine.Localization.SmartFormat.Utilities", "TimeTextInfo/<>c");
// Dependencies System.Object
namespace UnityEngine::Localization::SmartFormat::Utilities {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Utilities.TimeTextInfo
class CORDL_TYPE TimeTextInfo : public ::System::Object {
public:
// Declarations
using __c = ::UnityEngine::Localization::SmartFormat::Utilities::TimeTextInfo___c;

/// @brief Field PluralRule, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_PluralRule, put=__cordl_internal_set_PluralRule)) ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  PluralRule;

/// @brief Field d, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_d, put=__cordl_internal_set_d)) ::ArrayW<::StringW>  d;

/// @brief Field day, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_day, put=__cordl_internal_set_day)) ::ArrayW<::StringW>  day;

/// @brief Field h, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_h, put=__cordl_internal_set_h)) ::ArrayW<::StringW>  h;

/// @brief Field hour, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_hour, put=__cordl_internal_set_hour)) ::ArrayW<::StringW>  hour;

/// @brief Field lessThan, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_lessThan, put=__cordl_internal_set_lessThan)) ::StringW  lessThan;

/// @brief Field m, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m, put=__cordl_internal_set_m)) ::ArrayW<::StringW>  m;

/// @brief Field millisecond, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_millisecond, put=__cordl_internal_set_millisecond)) ::ArrayW<::StringW>  millisecond;

/// @brief Field minute, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_minute, put=__cordl_internal_set_minute)) ::ArrayW<::StringW>  minute;

/// @brief Field ms, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_ms, put=__cordl_internal_set_ms)) ::ArrayW<::StringW>  ms;

/// @brief Field s, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_s, put=__cordl_internal_set_s)) ::ArrayW<::StringW>  s;

/// @brief Field second, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_second, put=__cordl_internal_set_second)) ::ArrayW<::StringW>  second;

/// @brief Field w, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_w, put=__cordl_internal_set_w)) ::ArrayW<::StringW>  w;

/// @brief Field week, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_week, put=__cordl_internal_set_week)) ::ArrayW<::StringW>  week;

/// @brief Method GetLessThanText, addr 0xb035dcc, size 0xc, virtual false, abstract: false, final false
inline ::StringW GetLessThanText(::StringW  minimumValue) ;

/// @brief Method GetUnitText, addr 0xb03721c, size 0xb8, virtual true, abstract: false, final false
inline ::StringW GetUnitText(::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions  unit, int32_t  value, bool  abbr) ;

/// @brief Method GetValue, addr 0xb037128, size 0xf4, virtual false, abstract: false, final false
static inline ::StringW GetValue(::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  pluralRule, int32_t  value, ::ArrayW<::StringW>  units) ;

static inline ::UnityEngine::Localization::SmartFormat::Utilities::TimeTextInfo* New_ctor(::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  pluralRule, ::ArrayW<::StringW>  week, ::ArrayW<::StringW>  day, ::ArrayW<::StringW>  hour, ::ArrayW<::StringW>  minute, ::ArrayW<::StringW>  second, ::ArrayW<::StringW>  millisecond, ::ArrayW<::StringW>  w, ::ArrayW<::StringW>  d, ::ArrayW<::StringW>  h, ::ArrayW<::StringW>  m, ::ArrayW<::StringW>  s, ::ArrayW<::StringW>  ms, ::StringW  lessThan) ;

static inline ::UnityEngine::Localization::SmartFormat::Utilities::TimeTextInfo* New_ctor(::StringW  week, ::StringW  day, ::StringW  hour, ::StringW  minute, ::StringW  second, ::StringW  millisecond, ::StringW  lessThan) ;

constexpr ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* const& __cordl_internal_get_PluralRule() const;

constexpr ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*& __cordl_internal_get_PluralRule() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_d() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_d() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_day() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_day() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_h() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_h() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_hour() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_hour() ;

constexpr ::StringW const& __cordl_internal_get_lessThan() const;

constexpr ::StringW& __cordl_internal_get_lessThan() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_m() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_m() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_millisecond() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_millisecond() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_minute() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_minute() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_ms() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_ms() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_s() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_s() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_second() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_second() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_w() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_w() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_week() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_week() ;

constexpr void __cordl_internal_set_PluralRule(::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  value) ;

constexpr void __cordl_internal_set_d(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_day(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_h(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_hour(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_lessThan(::StringW  value) ;

constexpr void __cordl_internal_set_m(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_millisecond(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_minute(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_ms(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_s(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_second(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_w(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_week(::ArrayW<::StringW>  value) ;

/// @brief Method .ctor, addr 0xb036c8c, size 0x158, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  pluralRule, ::ArrayW<::StringW>  week, ::ArrayW<::StringW>  day, ::ArrayW<::StringW>  hour, ::ArrayW<::StringW>  minute, ::ArrayW<::StringW>  second, ::ArrayW<::StringW>  millisecond, ::ArrayW<::StringW>  w, ::ArrayW<::StringW>  d, ::ArrayW<::StringW>  h, ::ArrayW<::StringW>  m, ::ArrayW<::StringW>  s, ::ArrayW<::StringW>  ms, ::StringW  lessThan) ;

/// @brief Method .ctor, addr 0xb036de4, size 0x344, virtual false, abstract: false, final false
inline void _ctor(::StringW  week, ::StringW  day, ::StringW  hour, ::StringW  minute, ::StringW  second, ::StringW  millisecond, ::StringW  lessThan) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimeTextInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimeTextInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeTextInfo(TimeTextInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeTextInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeTextInfo(TimeTextInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25166};

/// @brief Field d, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___d;

/// @brief Field day, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___day;

/// @brief Field h, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___h;

/// @brief Field hour, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___hour;

/// @brief Field lessThan, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___lessThan;

/// @brief Field m, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___m;

/// @brief Field millisecond, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___millisecond;

/// @brief Field minute, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___minute;

/// @brief Field ms, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___ms;

/// @brief Field PluralRule, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  ___PluralRule;

/// @brief Field s, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___s;

/// @brief Field second, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___second;

/// @brief Field w, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___w;

/// @brief Field week, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___week;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Utilities::TimeTextInfo, ___d) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Utilities::TimeTextInfo, ___day) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Utilities::TimeTextInfo, ___h) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Utilities::TimeTextInfo, ___hour) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Utilities::TimeTextInfo, ___lessThan) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Utilities::TimeTextInfo, ___m) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Utilities::TimeTextInfo, ___millisecond) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Utilities::TimeTextInfo, ___minute) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Utilities::TimeTextInfo, ___ms) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Utilities::TimeTextInfo, ___PluralRule) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Utilities::TimeTextInfo, ___s) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Utilities::TimeTextInfo, ___second) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Utilities::TimeTextInfo, ___w) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Utilities::TimeTextInfo, ___week) == 0x78, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Utilities::TimeTextInfo) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Utilities
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Localization::SmartFormat::Utilities {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Utilities.TimeTextInfo/<>c
class CORDL_TYPE TimeTextInfo___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Localization::SmartFormat::Utilities::TimeTextInfo___c*  __9;

/// @brief Field <>9__15_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__15_0, put=setStaticF___9__15_0)) ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  __9__15_0;

static inline ::UnityEngine::Localization::SmartFormat::Utilities::TimeTextInfo___c* New_ctor() ;

/// @brief Method <.ctor>b__15_0, addr 0xb037344, size 0x8, virtual false, abstract: false, final false
inline int32_t __ctor_b__15_0(::System::Decimal  d, int32_t  c) ;

/// @brief Method .ctor, addr 0xb03733c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Localization::SmartFormat::Utilities::TimeTextInfo___c* getStaticF___9() ;

static inline ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* getStaticF___9__15_0() ;

static inline void setStaticF___9(::UnityEngine::Localization::SmartFormat::Utilities::TimeTextInfo___c*  value) ;

static inline void setStaticF___9__15_0(::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimeTextInfo___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimeTextInfo___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeTextInfo___c(TimeTextInfo___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeTextInfo___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeTextInfo___c(TimeTextInfo___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25165};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Utilities::TimeTextInfo___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Utilities
