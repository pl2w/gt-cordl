#pragma once
// IWYU pragma private; include "GlobalNamespace/RotationAnimation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RotationAnimation)
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace GlobalNamespace {
class RotationAnimation;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RotationAnimation*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RotationAnimation*, "", "RotationAnimation");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: RotationAnimation
class CORDL_TYPE RotationAnimation : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field <TickRunning>k__BackingField, offset 0x79, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Field amplitude, offset 0x48, size 0xc 
 __declspec(property(get=__cordl_internal_get_amplitude, put=__cordl_internal_set_amplitude)) ::UnityEngine::Vector3  amplitude;

/// @brief Field attack, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_attack, put=__cordl_internal_set_attack)) ::UnityEngine::AnimationCurve*  attack;

/// @brief Field baseRotation, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get_baseRotation, put=__cordl_internal_set_baseRotation)) ::UnityEngine::Quaternion  baseRotation;

/// @brief Field baseTime, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_baseTime, put=__cordl_internal_set_baseTime)) float_t  baseTime;

/// @brief Field period, offset 0x54, size 0xc 
 __declspec(property(get=__cordl_internal_get_period, put=__cordl_internal_set_period)) ::UnityEngine::Vector3  period;

/// @brief Field release, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_release, put=__cordl_internal_set_release)) ::UnityEngine::AnimationCurve*  release;

/// @brief Field releaseSet, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_releaseSet, put=__cordl_internal_set_releaseSet)) bool  releaseSet;

/// @brief Field releaseTime, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_releaseTime, put=__cordl_internal_set_releaseTime)) float_t  releaseTime;

/// @brief Field x, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_x, put=__cordl_internal_set_x)) ::UnityEngine::AnimationCurve*  x;

/// @brief Field y, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_y, put=__cordl_internal_set_y)) ::UnityEngine::AnimationCurve*  y;

/// @brief Field z, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_z, put=__cordl_internal_set_z)) ::UnityEngine::AnimationCurve*  z;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// @brief Method Awake, addr 0x574488c, size 0x30, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CancelRelease, addr 0x5744960, size 0x8, virtual false, abstract: false, final false
inline void CancelRelease() ;

static inline ::GlobalNamespace::RotationAnimation* New_ctor() ;

/// @brief Method OnDisable, addr 0x5744968, size 0x90, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x57448bc, size 0x80, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ReleaseToDisable, addr 0x574493c, size 0x24, virtual false, abstract: false, final false
inline void ReleaseToDisable() ;

/// @brief Method Tick, addr 0x5744648, size 0x244, virtual true, abstract: false, final true
inline void Tick() ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_amplitude() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_amplitude() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_attack() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_attack() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_baseRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_baseRotation() ;

constexpr float_t const& __cordl_internal_get_baseTime() const;

constexpr float_t& __cordl_internal_get_baseTime() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_period() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_period() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_release() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_release() ;

constexpr bool const& __cordl_internal_get_releaseSet() const;

constexpr bool& __cordl_internal_get_releaseSet() ;

constexpr float_t const& __cordl_internal_get_releaseTime() const;

constexpr float_t& __cordl_internal_get_releaseTime() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_x() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_x() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_y() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_y() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_z() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_z() ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_amplitude(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_attack(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_baseRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_baseTime(float_t  value) ;

constexpr void __cordl_internal_set_period(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_release(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_releaseSet(bool  value) ;

constexpr void __cordl_internal_set_releaseTime(float_t  value) ;

constexpr void __cordl_internal_set_x(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_y(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_z(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method .ctor, addr 0x57449f8, size 0x74, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x5744638, size 0x8, virtual true, abstract: false, final true
inline bool get_TickRunning() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x5744640, size 0x8, virtual true, abstract: false, final true
inline void set_TickRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RotationAnimation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RotationAnimation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RotationAnimation(RotationAnimation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RotationAnimation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RotationAnimation(RotationAnimation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1258};

/// [SerializeField]
/// @brief Field x, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___x;

/// [SerializeField]
/// @brief Field y, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___y;

/// [SerializeField]
/// @brief Field z, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___z;

/// [SerializeField]
/// @brief Field attack, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___attack;

/// [SerializeField]
/// @brief Field release, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___release;

/// [SerializeField]
/// @brief Field amplitude, offset: 0x48, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___amplitude;

/// [SerializeField]
/// @brief Field period, offset: 0x54, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___period;

/// @brief Field baseRotation, offset: 0x60, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___baseRotation;

/// @brief Field baseTime, offset: 0x70, size: 0x4, def value: None
 float_t  ___baseTime;

/// @brief Field releaseTime, offset: 0x74, size: 0x4, def value: None
 float_t  ___releaseTime;

/// @brief Field releaseSet, offset: 0x78, size: 0x1, def value: None
 bool  ___releaseSet;

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0x79, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RotationAnimation, ___x) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotationAnimation, ___y) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotationAnimation, ___z) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotationAnimation, ___attack) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotationAnimation, ___release) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotationAnimation, ___amplitude) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotationAnimation, ___period) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotationAnimation, ___baseRotation) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotationAnimation, ___baseTime) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotationAnimation, ___releaseTime) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotationAnimation, ___releaseSet) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotationAnimation, ____TickRunning_k__BackingField) == 0x79, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RotationAnimation) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
