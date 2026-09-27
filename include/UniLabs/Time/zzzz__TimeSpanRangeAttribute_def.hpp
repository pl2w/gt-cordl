#pragma once
// IWYU pragma private; include "UniLabs/Time/TimeSpanRangeAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "UniLabs/Time/zzzz__TimeUnit_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TimeSpanRangeAttribute)
namespace UniLabs::Time {
struct TimeUnit;
}
// Forward declare root types
namespace UniLabs::Time {
class TimeSpanRangeAttribute;
}
// Write type traits
MARK_REF_T(::UniLabs::Time::TimeSpanRangeAttribute*);
DEFINE_IL2CPP_CLASS(::UniLabs::Time::TimeSpanRangeAttribute*, "UniLabs.Time", "TimeSpanRangeAttribute");
// [AttributeUsage((System.AttributeTargets)32767)]
// [Conditional("UNITY_EDITOR")]
// Dependencies System.Attribute, UniLabs.Time.TimeUnit
namespace UniLabs::Time {
// Is value type: false
// CS Name: UniLabs.Time.TimeSpanRangeAttribute
class CORDL_TYPE TimeSpanRangeAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief Field DisableMinMaxIf, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_DisableMinMaxIf, put=__cordl_internal_set_DisableMinMaxIf)) ::StringW  DisableMinMaxIf;

/// @brief Field Inline, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_Inline, put=__cordl_internal_set_Inline)) bool  Inline;

/// @brief Field MaxGetter, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_MaxGetter, put=__cordl_internal_set_MaxGetter)) ::StringW  MaxGetter;

/// @brief Field MinGetter, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_MinGetter, put=__cordl_internal_set_MinGetter)) ::StringW  MinGetter;

/// @brief Field SnappingUnit, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_SnappingUnit, put=__cordl_internal_set_SnappingUnit)) ::UniLabs::Time::TimeUnit  SnappingUnit;

static inline ::UniLabs::Time::TimeSpanRangeAttribute* New_ctor(::StringW  maxGetter, bool  _cordl_inline, ::UniLabs::Time::TimeUnit  snappingUnit) ;

static inline ::UniLabs::Time::TimeSpanRangeAttribute* New_ctor(::StringW  minGetter, ::StringW  maxGetter, bool  _cordl_inline, ::UniLabs::Time::TimeUnit  snappingUnit) ;

constexpr ::StringW const& __cordl_internal_get_DisableMinMaxIf() const;

constexpr ::StringW& __cordl_internal_get_DisableMinMaxIf() ;

constexpr bool const& __cordl_internal_get_Inline() const;

constexpr bool& __cordl_internal_get_Inline() ;

constexpr ::StringW const& __cordl_internal_get_MaxGetter() const;

constexpr ::StringW& __cordl_internal_get_MaxGetter() ;

constexpr ::StringW const& __cordl_internal_get_MinGetter() const;

constexpr ::StringW& __cordl_internal_get_MinGetter() ;

constexpr ::UniLabs::Time::TimeUnit const& __cordl_internal_get_SnappingUnit() const;

constexpr ::UniLabs::Time::TimeUnit& __cordl_internal_get_SnappingUnit() ;

constexpr void __cordl_internal_set_DisableMinMaxIf(::StringW  value) ;

constexpr void __cordl_internal_set_Inline(bool  value) ;

constexpr void __cordl_internal_set_MaxGetter(::StringW  value) ;

constexpr void __cordl_internal_set_MinGetter(::StringW  value) ;

constexpr void __cordl_internal_set_SnappingUnit(::UniLabs::Time::TimeUnit  value) ;

/// @brief Method .ctor, addr 0x5b6bee0, size 0x4c, virtual false, abstract: false, final false
inline void _ctor(::StringW  maxGetter, bool  _cordl_inline, ::UniLabs::Time::TimeUnit  snappingUnit) ;

/// @brief Method .ctor, addr 0x5b6bf2c, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::StringW  minGetter, ::StringW  maxGetter, bool  _cordl_inline, ::UniLabs::Time::TimeUnit  snappingUnit) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimeSpanRangeAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimeSpanRangeAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeSpanRangeAttribute(TimeSpanRangeAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeSpanRangeAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeSpanRangeAttribute(TimeSpanRangeAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3851};

/// @brief Field MinGetter, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___MinGetter;

/// @brief Field MaxGetter, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___MaxGetter;

/// @brief Field SnappingUnit, offset: 0x20, size: 0x4, def value: None
 ::UniLabs::Time::TimeUnit  ___SnappingUnit;

/// @brief Field Inline, offset: 0x24, size: 0x1, def value: None
 bool  ___Inline;

/// @brief Field DisableMinMaxIf, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___DisableMinMaxIf;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UniLabs::Time::TimeSpanRangeAttribute, ___MinGetter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UniLabs::Time::TimeSpanRangeAttribute, ___MaxGetter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UniLabs::Time::TimeSpanRangeAttribute, ___SnappingUnit) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UniLabs::Time::TimeSpanRangeAttribute, ___Inline) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UniLabs::Time::TimeSpanRangeAttribute, ___DisableMinMaxIf) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UniLabs::Time::TimeSpanRangeAttribute) == 0x30, "Size mismatch!");

} // namespace end def UniLabs::Time
