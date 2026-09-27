#pragma once
// IWYU pragma private; include "Fusion/RangeExAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__DrawerPropertyAttribute_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RangeExAttribute)
// Forward declare root types
namespace Fusion {
class RangeExAttribute;
}
// Write type traits
MARK_REF_T(::Fusion::RangeExAttribute*);
DEFINE_IL2CPP_CLASS(::Fusion::RangeExAttribute*, "Fusion", "RangeExAttribute");
// [AttributeUsage((System.AttributeTargets)384)]
// Dependencies Fusion.DrawerPropertyAttribute
namespace Fusion {
// Is value type: false
// CS Name: Fusion.RangeExAttribute
class CORDL_TYPE RangeExAttribute : public ::Fusion::DrawerPropertyAttribute {
public:
// Declarations
/// @brief Field ClampMax, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_ClampMax, put=__cordl_internal_set_ClampMax)) bool  ClampMax;

/// @brief Field ClampMin, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_ClampMin, put=__cordl_internal_set_ClampMin)) bool  ClampMin;

/// @brief Field UseSlider, offset 0x2a, size 0x1 
 __declspec(property(get=__cordl_internal_get_UseSlider, put=__cordl_internal_set_UseSlider)) bool  UseSlider;

/// @brief Field <Max>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Max_k__BackingField, put=__cordl_internal_set__Max_k__BackingField)) double_t  _Max_k__BackingField;

/// @brief Field <Min>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Min_k__BackingField, put=__cordl_internal_set__Min_k__BackingField)) double_t  _Min_k__BackingField;

static inline ::Fusion::RangeExAttribute* New_ctor(double_t  min, double_t  max) ;

constexpr bool const& __cordl_internal_get_ClampMax() const;

constexpr bool& __cordl_internal_get_ClampMax() ;

constexpr bool const& __cordl_internal_get_ClampMin() const;

constexpr bool& __cordl_internal_get_ClampMin() ;

constexpr bool const& __cordl_internal_get_UseSlider() const;

constexpr bool& __cordl_internal_get_UseSlider() ;

constexpr double_t const& __cordl_internal_get__Max_k__BackingField() const;

constexpr double_t& __cordl_internal_get__Max_k__BackingField() ;

constexpr double_t const& __cordl_internal_get__Min_k__BackingField() const;

constexpr double_t& __cordl_internal_get__Min_k__BackingField() ;

constexpr void __cordl_internal_set_ClampMax(bool  value) ;

constexpr void __cordl_internal_set_ClampMin(bool  value) ;

constexpr void __cordl_internal_set_UseSlider(bool  value) ;

constexpr void __cordl_internal_set__Max_k__BackingField(double_t  value) ;

constexpr void __cordl_internal_set__Min_k__BackingField(double_t  value) ;

/// @brief Method .ctor, addr 0x5f3d7a8, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(double_t  min, double_t  max) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RangeExAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RangeExAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RangeExAttribute(RangeExAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RangeExAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RangeExAttribute(RangeExAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31278};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Max>k__BackingField, offset: 0x18, size: 0x8, def value: None
 double_t  ____Max_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Min>k__BackingField, offset: 0x20, size: 0x8, def value: None
 double_t  ____Min_k__BackingField;

/// @brief Field ClampMin, offset: 0x28, size: 0x1, def value: None
 bool  ___ClampMin;

/// @brief Field ClampMax, offset: 0x29, size: 0x1, def value: None
 bool  ___ClampMax;

/// @brief Field UseSlider, offset: 0x2a, size: 0x1, def value: None
 bool  ___UseSlider;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::RangeExAttribute, ____Max_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::RangeExAttribute, ____Min_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::RangeExAttribute, ___ClampMin) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::RangeExAttribute, ___ClampMax) == 0x29, "Offset mismatch!");

static_assert(offsetof(::Fusion::RangeExAttribute, ___UseSlider) == 0x2a, "Offset mismatch!");

static_assert(sizeof(::Fusion::RangeExAttribute) == 0x30, "Size mismatch!");

} // namespace end def Fusion
