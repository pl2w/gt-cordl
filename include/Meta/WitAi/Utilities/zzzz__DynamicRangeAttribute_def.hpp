#pragma once
// IWYU pragma private; include "Meta/WitAi/Utilities/DynamicRangeAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DynamicRangeAttribute)
// Forward declare root types
namespace Meta::WitAi::Utilities {
class DynamicRangeAttribute;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Utilities::DynamicRangeAttribute*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Utilities::DynamicRangeAttribute*, "Meta.WitAi.Utilities", "DynamicRangeAttribute");
// Dependencies UnityEngine.PropertyAttribute
namespace Meta::WitAi::Utilities {
// Is value type: false
// CS Name: Meta.WitAi.Utilities.DynamicRangeAttribute
class CORDL_TYPE DynamicRangeAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
 __declspec(property(put=set_DefaultMax)) float_t  DefaultMax;

 __declspec(property(put=set_DefaultMin)) float_t  DefaultMin;

 __declspec(property(put=set_RangeProperty)) ::StringW  RangeProperty;

/// @brief Field <DefaultMax>k__BackingField, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__DefaultMax_k__BackingField, put=__cordl_internal_set__DefaultMax_k__BackingField)) float_t  _DefaultMax_k__BackingField;

/// @brief Field <DefaultMin>k__BackingField, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__DefaultMin_k__BackingField, put=__cordl_internal_set__DefaultMin_k__BackingField)) float_t  _DefaultMin_k__BackingField;

/// @brief Field <RangeProperty>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__RangeProperty_k__BackingField, put=__cordl_internal_set__RangeProperty_k__BackingField)) ::StringW  _RangeProperty_k__BackingField;

static inline ::Meta::WitAi::Utilities::DynamicRangeAttribute* New_ctor(::StringW  rangeProperty, float_t  defaultMin, float_t  defaultMax) ;

constexpr float_t const& __cordl_internal_get__DefaultMax_k__BackingField() const;

constexpr float_t& __cordl_internal_get__DefaultMax_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__DefaultMin_k__BackingField() const;

constexpr float_t& __cordl_internal_get__DefaultMin_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__RangeProperty_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__RangeProperty_k__BackingField() ;

constexpr void __cordl_internal_set__DefaultMax_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__DefaultMin_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__RangeProperty_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x9e84988, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::StringW  rangeProperty, float_t  defaultMin, float_t  defaultMax) ;

/// [CompilerGenerated]
/// @brief Method set_DefaultMax, addr 0x9e84980, size 0x8, virtual false, abstract: false, final false
inline void set_DefaultMax(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_DefaultMin, addr 0x9e84978, size 0x8, virtual false, abstract: false, final false
inline void set_DefaultMin(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_RangeProperty, addr 0x9e84970, size 0x8, virtual false, abstract: false, final false
inline void set_RangeProperty(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DynamicRangeAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DynamicRangeAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DynamicRangeAttribute(DynamicRangeAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DynamicRangeAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DynamicRangeAttribute(DynamicRangeAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25576};

/// [CompilerGenerated]
/// @brief Field <RangeProperty>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____RangeProperty_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <DefaultMin>k__BackingField, offset: 0x20, size: 0x4, def value: None
 float_t  ____DefaultMin_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <DefaultMax>k__BackingField, offset: 0x24, size: 0x4, def value: None
 float_t  ____DefaultMax_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Utilities::DynamicRangeAttribute, ____RangeProperty_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Utilities::DynamicRangeAttribute, ____DefaultMin_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Utilities::DynamicRangeAttribute, ____DefaultMax_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Utilities::DynamicRangeAttribute) == 0x28, "Size mismatch!");

} // namespace end def Meta::WitAi::Utilities
