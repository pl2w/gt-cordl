#pragma once
// IWYU pragma private; include "Unity/Cinemachine/RangeSliderAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RangeSliderAttribute)
// Forward declare root types
namespace Unity::Cinemachine {
class RangeSliderAttribute;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::RangeSliderAttribute*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::RangeSliderAttribute*, "Unity.Cinemachine", "RangeSliderAttribute");
// [Obsolete("Use RangeAttribute instead")]
// Dependencies UnityEngine.PropertyAttribute
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.RangeSliderAttribute
class CORDL_TYPE RangeSliderAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief Field Max, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Max, put=__cordl_internal_set_Max)) float_t  Max;

/// @brief Field Min, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Min, put=__cordl_internal_set_Min)) float_t  Min;

static inline ::Unity::Cinemachine::RangeSliderAttribute* New_ctor(float_t  min, float_t  max) ;

constexpr float_t const& __cordl_internal_get_Max() const;

constexpr float_t& __cordl_internal_get_Max() ;

constexpr float_t const& __cordl_internal_get_Min() const;

constexpr float_t& __cordl_internal_get_Min() ;

constexpr void __cordl_internal_set_Max(float_t  value) ;

constexpr void __cordl_internal_set_Min(float_t  value) ;

/// @brief Method .ctor, addr 0xaeb368c, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(float_t  min, float_t  max) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RangeSliderAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RangeSliderAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RangeSliderAttribute(RangeSliderAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RangeSliderAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RangeSliderAttribute(RangeSliderAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22294};

/// @brief Field Min, offset: 0x18, size: 0x4, def value: None
 float_t  ___Min;

/// @brief Field Max, offset: 0x1c, size: 0x4, def value: None
 float_t  ___Max;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::RangeSliderAttribute, ___Min) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::RangeSliderAttribute, ___Max) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::RangeSliderAttribute) == 0x20, "Size mismatch!");

} // namespace end def Unity::Cinemachine
