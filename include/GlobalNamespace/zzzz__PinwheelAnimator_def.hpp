#pragma once
// IWYU pragma private; include "GlobalNamespace/PinwheelAnimator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PinwheelAnimator)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class PinwheelAnimator;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PinwheelAnimator*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PinwheelAnimator*, "", "PinwheelAnimator");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: PinwheelAnimator
class CORDL_TYPE PinwheelAnimator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field damping, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_damping, put=__cordl_internal_set_damping)) float_t  damping;

/// @brief Field maxSpinSpeed, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxSpinSpeed, put=__cordl_internal_set_maxSpinSpeed)) float_t  maxSpinSpeed;

/// @brief Field oldPos, offset 0x34, size 0xc 
 __declspec(property(get=__cordl_internal_get_oldPos, put=__cordl_internal_set_oldPos)) ::UnityEngine::Vector3  oldPos;

/// @brief Field spinSpeed, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_spinSpeed, put=__cordl_internal_set_spinSpeed)) float_t  spinSpeed;

/// @brief Field spinSpeedMultiplier, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_spinSpeedMultiplier, put=__cordl_internal_set_spinSpeedMultiplier)) float_t  spinSpeedMultiplier;

/// @brief Field spinnerTransform, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_spinnerTransform, put=__cordl_internal_set_spinnerTransform)) ::UnityW<::UnityEngine::Transform>  spinnerTransform;

/// @brief Method LateUpdate, addr 0x5e06048, size 0x284, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::PinwheelAnimator* New_ctor() ;

/// @brief Method OnEnable, addr 0x5e06018, size 0x30, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr float_t const& __cordl_internal_get_damping() const;

constexpr float_t& __cordl_internal_get_damping() ;

constexpr float_t const& __cordl_internal_get_maxSpinSpeed() const;

constexpr float_t& __cordl_internal_get_maxSpinSpeed() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_oldPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_oldPos() ;

constexpr float_t const& __cordl_internal_get_spinSpeed() const;

constexpr float_t& __cordl_internal_get_spinSpeed() ;

constexpr float_t const& __cordl_internal_get_spinSpeedMultiplier() const;

constexpr float_t& __cordl_internal_get_spinSpeedMultiplier() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_spinnerTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_spinnerTransform() ;

constexpr void __cordl_internal_set_damping(float_t  value) ;

constexpr void __cordl_internal_set_maxSpinSpeed(float_t  value) ;

constexpr void __cordl_internal_set_oldPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_spinSpeed(float_t  value) ;

constexpr void __cordl_internal_set_spinSpeedMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_spinnerTransform(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x5e062cc, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PinwheelAnimator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PinwheelAnimator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PinwheelAnimator(PinwheelAnimator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PinwheelAnimator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PinwheelAnimator(PinwheelAnimator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{526};

/// @brief Field spinnerTransform, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___spinnerTransform;

/// [Tooltip("In revolutions per second.")]
/// @brief Field maxSpinSpeed, offset: 0x28, size: 0x4, def value: None
 float_t  ___maxSpinSpeed;

/// @brief Field spinSpeedMultiplier, offset: 0x2c, size: 0x4, def value: None
 float_t  ___spinSpeedMultiplier;

/// @brief Field damping, offset: 0x30, size: 0x4, def value: None
 float_t  ___damping;

/// @brief Field oldPos, offset: 0x34, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___oldPos;

/// @brief Field spinSpeed, offset: 0x40, size: 0x4, def value: None
 float_t  ___spinSpeed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PinwheelAnimator, ___spinnerTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PinwheelAnimator, ___maxSpinSpeed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PinwheelAnimator, ___spinSpeedMultiplier) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PinwheelAnimator, ___damping) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PinwheelAnimator, ___oldPos) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PinwheelAnimator, ___spinSpeed) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PinwheelAnimator) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
