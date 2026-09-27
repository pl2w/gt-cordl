#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Composites/AxisComposite.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Composites/zzzz__AxisComposite_WhichSideWins_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_1_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AxisComposite)
namespace GlobalNamespace {
struct AxisComposite_WhichSideWins;
}
namespace UnityEngine::InputSystem {
struct InputBindingCompositeContext;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Composites {
class AxisComposite;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::Composites::AxisComposite*);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::Composites::AxisComposite*, "UnityEngine.InputSystem.Composites", "AxisComposite");
// [DisplayStringFormat("{negative}/{positive}")]
// [DisplayName("Positive/Negative Binding")]
// Dependencies UnityEngine.InputSystem.Composites.AxisComposite::WhichSideWins, UnityEngine.InputSystem.InputBindingComposite`1<TValue>
namespace UnityEngine::InputSystem::Composites {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Composites.AxisComposite
class CORDL_TYPE AxisComposite : public ::UnityEngine::InputSystem::InputBindingComposite_1<float_t> {
public:
// Declarations
using WhichSideWins = ::GlobalNamespace::AxisComposite_WhichSideWins;

/// @brief Field maxValue, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxValue, put=__cordl_internal_set_maxValue)) float_t  maxValue;

 __declspec(property(get=get_midPoint)) float_t  midPoint;

/// @brief Field minValue, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_minValue, put=__cordl_internal_set_minValue)) float_t  minValue;

/// @brief Field negative, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_negative, put=__cordl_internal_set_negative)) int32_t  negative;

/// @brief Field positive, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_positive, put=__cordl_internal_set_positive)) int32_t  positive;

/// @brief Field whichSideWins, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_whichSideWins, put=__cordl_internal_set_whichSideWins)) ::GlobalNamespace::AxisComposite_WhichSideWins  whichSideWins;

/// @brief Method EvaluateMagnitude, addr 0xaf46c38, size 0x48, virtual true, abstract: false, final false
inline float_t EvaluateMagnitude(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>  context) ;

static inline ::UnityEngine::InputSystem::Composites::AxisComposite* New_ctor() ;

/// @brief Method ReadValue, addr 0xaf46b2c, size 0x10c, virtual true, abstract: false, final false
inline float_t ReadValue(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>  context) ;

constexpr float_t const& __cordl_internal_get_maxValue() const;

constexpr float_t& __cordl_internal_get_maxValue() ;

constexpr float_t const& __cordl_internal_get_minValue() const;

constexpr float_t& __cordl_internal_get_minValue() ;

constexpr int32_t const& __cordl_internal_get_negative() const;

constexpr int32_t& __cordl_internal_get_negative() ;

constexpr int32_t const& __cordl_internal_get_positive() const;

constexpr int32_t& __cordl_internal_get_positive() ;

constexpr ::GlobalNamespace::AxisComposite_WhichSideWins const& __cordl_internal_get_whichSideWins() const;

constexpr ::GlobalNamespace::AxisComposite_WhichSideWins& __cordl_internal_get_whichSideWins() ;

constexpr void __cordl_internal_set_maxValue(float_t  value) ;

constexpr void __cordl_internal_set_minValue(float_t  value) ;

constexpr void __cordl_internal_set_negative(int32_t  value) ;

constexpr void __cordl_internal_set_positive(int32_t  value) ;

constexpr void __cordl_internal_set_whichSideWins(::GlobalNamespace::AxisComposite_WhichSideWins  value) ;

/// @brief Method .ctor, addr 0xaf46c80, size 0x54, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_midPoint, addr 0xaf46b18, size 0x14, virtual false, abstract: false, final false
inline float_t get_midPoint() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AxisComposite() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AxisComposite", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AxisComposite(AxisComposite && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AxisComposite", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AxisComposite(AxisComposite const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13939};

/// [InputControl(layout = "Axis")]
/// @brief Field negative, offset: 0x10, size: 0x4, def value: None
 int32_t  ___negative;

/// [InputControl(layout = "Axis")]
/// @brief Field positive, offset: 0x14, size: 0x4, def value: None
 int32_t  ___positive;

/// [Tooltip("Value to return when the negative side is fully actuated.")]
/// @brief Field minValue, offset: 0x18, size: 0x4, def value: None
 float_t  ___minValue;

/// [Tooltip("Value to return when the positive side is fully actuated.")]
/// @brief Field maxValue, offset: 0x1c, size: 0x4, def value: None
 float_t  ___maxValue;

/// [Tooltip("If both the positive and negative side are actuated, decides what value to return. \'Neither\' (default) means that the resulting value is the midpoint between min and max. \'Positive\' means that max will be returned. \'Negative\' means that min will be returned.")]
/// @brief Field whichSideWins, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::AxisComposite_WhichSideWins  ___whichSideWins;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Composites::AxisComposite, ___negative) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Composites::AxisComposite, ___positive) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Composites::AxisComposite, ___minValue) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Composites::AxisComposite, ___maxValue) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Composites::AxisComposite, ___whichSideWins) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::Composites::AxisComposite) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Composites
