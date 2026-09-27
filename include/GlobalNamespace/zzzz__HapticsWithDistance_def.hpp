#pragma once
// IWYU pragma private; include "GlobalNamespace/HapticsWithDistance.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HapticsWithDistance)
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class HapticsWithDistance;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HapticsWithDistance*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HapticsWithDistance*, "", "HapticsWithDistance");
// [RequireComponent(typeof(UnityEngine.SphereCollider))]
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: HapticsWithDistance
class CORDL_TYPE HapticsWithDistance : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field <TickRunning>k__BackingField, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Field inverseColliderRadius, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_inverseColliderRadius, put=__cordl_internal_set_inverseColliderRadius)) float_t  inverseColliderRadius;

/// @brief Field leftOfflineHand, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftOfflineHand, put=__cordl_internal_set_leftOfflineHand)) ::UnityW<::UnityEngine::Transform>  leftOfflineHand;

/// @brief Field rightOfflineHand, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightOfflineHand, put=__cordl_internal_set_rightOfflineHand)) ::UnityW<::UnityEngine::Transform>  rightOfflineHand;

/// @brief Field vibrationIntensityByDistance, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_vibrationIntensityByDistance, put=__cordl_internal_set_vibrationIntensityByDistance)) ::UnityEngine::AnimationCurve*  vibrationIntensityByDistance;

/// @brief Field vibrationMult, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_vibrationMult, put=__cordl_internal_set_vibrationMult)) float_t  vibrationMult;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// @brief Method Awake, addr 0x578a234, size 0x68, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FingerFlexVibrationMult, addr 0x578a22c, size 0x8, virtual false, abstract: false, final false
inline void FingerFlexVibrationMult(bool  dummy, float_t  mult) ;

static inline ::GlobalNamespace::HapticsWithDistance* New_ctor() ;

/// @brief Method OnDisable, addr 0x578a548, size 0x8c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnTriggerEnter, addr 0x578a29c, size 0x12c, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x578a3c8, size 0x180, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method OnWrongLayer, addr 0x578a1f8, size 0x2c, virtual false, abstract: false, final false
inline bool OnWrongLayer() ;

/// @brief Method SetVibrationMult, addr 0x578a224, size 0x8, virtual false, abstract: false, final false
inline void SetVibrationMult(float_t  mult) ;

/// @brief Method Tick, addr 0x578a5e4, size 0x330, virtual true, abstract: false, final true
inline void Tick() ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr float_t const& __cordl_internal_get_inverseColliderRadius() const;

constexpr float_t& __cordl_internal_get_inverseColliderRadius() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftOfflineHand() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftOfflineHand() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightOfflineHand() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightOfflineHand() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_vibrationIntensityByDistance() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_vibrationIntensityByDistance() ;

constexpr float_t const& __cordl_internal_get_vibrationMult() const;

constexpr float_t& __cordl_internal_get_vibrationMult() ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_inverseColliderRadius(float_t  value) ;

constexpr void __cordl_internal_set_leftOfflineHand(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_rightOfflineHand(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_vibrationIntensityByDistance(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_vibrationMult(float_t  value) ;

/// @brief Method .ctor, addr 0x578a914, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x578a5d4, size 0x8, virtual true, abstract: false, final true
inline bool get_TickRunning() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x578a5dc, size 0x8, virtual true, abstract: false, final true
inline void set_TickRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HapticsWithDistance() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HapticsWithDistance", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HapticsWithDistance(HapticsWithDistance && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HapticsWithDistance", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HapticsWithDistance(HapticsWithDistance const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1429};

/// [SerializeField]
/// [Tooltip("X is the normalized distance and should start at 0 and end at 1. Y is the vibration amplitude and can be anywhere from 0-1.")]
/// @brief Field vibrationIntensityByDistance, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___vibrationIntensityByDistance;

/// @brief Field inverseColliderRadius, offset: 0x28, size: 0x4, def value: None
 float_t  ___inverseColliderRadius;

/// @brief Field vibrationMult, offset: 0x2c, size: 0x4, def value: None
 float_t  ___vibrationMult;

/// @brief Field leftOfflineHand, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___leftOfflineHand;

/// @brief Field rightOfflineHand, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___rightOfflineHand;

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0x40, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HapticsWithDistance, ___vibrationIntensityByDistance) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HapticsWithDistance, ___inverseColliderRadius) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HapticsWithDistance, ___vibrationMult) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HapticsWithDistance, ___leftOfflineHand) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HapticsWithDistance, ___rightOfflineHand) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HapticsWithDistance, ____TickRunning_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HapticsWithDistance) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
