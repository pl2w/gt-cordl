#pragma once
// IWYU pragma private; include "GlobalNamespace/ForceVolume.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ForceVolume_AudioState_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ForceVolume)
namespace GT_CustomMapSupportRuntime {
struct ForceVolumeProperties;
}
namespace GlobalNamespace {
struct ForceVolume_AudioState;
}
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class ForceVolume;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ForceVolume*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ForceVolume*, "", "ForceVolume");
// Dependencies ForceVolume::AudioState, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: ForceVolume
class CORDL_TYPE ForceVolume : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using AudioState = ::GlobalNamespace::ForceVolume_AudioState;

/// @brief Field accel, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_accel, put=__cordl_internal_set_accel)) float_t  accel;

/// @brief Field applyPullToCenterAcceleration, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_applyPullToCenterAcceleration, put=__cordl_internal_set_applyPullToCenterAcceleration)) bool  applyPullToCenterAcceleration;

/// @brief Field audioSource, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field audioState, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_audioState, put=__cordl_internal_set_audioState)) ::GlobalNamespace::ForceVolume_AudioState  audioState;

/// @brief Field dampenLateralVelocity, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get_dampenLateralVelocity, put=__cordl_internal_set_dampenLateralVelocity)) bool  dampenLateralVelocity;

/// @brief Field dampenXVelPerc, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_dampenXVelPerc, put=__cordl_internal_set_dampenXVelPerc)) float_t  dampenXVelPerc;

/// @brief Field dampenZVelPerc, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_dampenZVelPerc, put=__cordl_internal_set_dampenZVelPerc)) float_t  dampenZVelPerc;

/// @brief Field disableGrip, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_disableGrip, put=__cordl_internal_set_disableGrip)) bool  disableGrip;

/// @brief Field enterClip, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_enterClip, put=__cordl_internal_set_enterClip)) ::UnityW<::UnityEngine::AudioClip>  enterClip;

/// @brief Field enterPos, offset 0x80, size 0xc 
 __declspec(property(get=__cordl_internal_get_enterPos, put=__cordl_internal_set_enterPos)) ::UnityEngine::Vector3  enterPos;

/// @brief Field exitClip, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_exitClip, put=__cordl_internal_set_exitClip)) ::UnityW<::UnityEngine::AudioClip>  exitClip;

/// @brief Field loopClip, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_loopClip, put=__cordl_internal_set_loopClip)) ::UnityW<::UnityEngine::AudioClip>  loopClip;

/// @brief Field loopCresendoClip, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_loopCresendoClip, put=__cordl_internal_set_loopCresendoClip)) ::UnityW<::UnityEngine::AudioClip>  loopCresendoClip;

/// @brief Field maxDepth, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDepth, put=__cordl_internal_set_maxDepth)) float_t  maxDepth;

/// @brief Field maxSpeed, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxSpeed, put=__cordl_internal_set_maxSpeed)) float_t  maxSpeed;

/// @brief Field pullTOCenterMinDistance, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_pullTOCenterMinDistance, put=__cordl_internal_set_pullTOCenterMinDistance)) float_t  pullTOCenterMinDistance;

/// @brief Field pullToCenterAccel, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_pullToCenterAccel, put=__cordl_internal_set_pullToCenterAccel)) float_t  pullToCenterAccel;

/// @brief Field pullToCenterMaxSpeed, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_pullToCenterMaxSpeed, put=__cordl_internal_set_pullToCenterMaxSpeed)) float_t  pullToCenterMaxSpeed;

/// @brief Field scaleWithSize, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_scaleWithSize, put=__cordl_internal_set_scaleWithSize)) bool  scaleWithSize;

/// @brief Field volume, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_volume, put=__cordl_internal_set_volume)) ::UnityW<::UnityEngine::Collider>  volume;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method Awake, addr 0x5a986ac, size 0x60, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::ForceVolume* New_ctor() ;

/// @brief Method OnDisable, addr 0x5a98718, size 0xc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDrawGizmosSelected, addr 0x5a99684, size 0x154, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method OnEnable, addr 0x5a9870c, size 0xc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnTriggerEnter, addr 0x5a98a74, size 0x100, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x5a98b74, size 0xbc, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerStay, addr 0x5a98c30, size 0xa54, virtual false, abstract: false, final false
inline void OnTriggerStay(::UnityEngine::Collider*  other) ;

/// @brief Method SetPropertiesFromPlaceholder, addr 0x5a997d8, size 0x170, virtual false, abstract: false, final false
inline void SetPropertiesFromPlaceholder(::GT_CustomMapSupportRuntime::ForceVolumeProperties  properties, ::UnityEngine::AudioSource*  volumeAudioSource, ::UnityEngine::Collider*  colliderVolume) ;

/// @brief Method SliceUpdate, addr 0x5a98724, size 0xd4, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// @brief Method TriggerFilter, addr 0x5a987f8, size 0x27c, virtual false, abstract: false, final false
inline bool TriggerFilter(::UnityEngine::Collider*  other, ::by_ref<::UnityEngine::Rigidbody*>  rb, ::by_ref<::UnityEngine::Transform*>  xf) ;

constexpr float_t const& __cordl_internal_get_accel() const;

constexpr float_t& __cordl_internal_get_accel() ;

constexpr bool const& __cordl_internal_get_applyPullToCenterAcceleration() const;

constexpr bool& __cordl_internal_get_applyPullToCenterAcceleration() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::GlobalNamespace::ForceVolume_AudioState const& __cordl_internal_get_audioState() const;

constexpr ::GlobalNamespace::ForceVolume_AudioState& __cordl_internal_get_audioState() ;

constexpr bool const& __cordl_internal_get_dampenLateralVelocity() const;

constexpr bool& __cordl_internal_get_dampenLateralVelocity() ;

constexpr float_t const& __cordl_internal_get_dampenXVelPerc() const;

constexpr float_t& __cordl_internal_get_dampenXVelPerc() ;

constexpr float_t const& __cordl_internal_get_dampenZVelPerc() const;

constexpr float_t& __cordl_internal_get_dampenZVelPerc() ;

constexpr bool const& __cordl_internal_get_disableGrip() const;

constexpr bool& __cordl_internal_get_disableGrip() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_enterClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_enterClip() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_enterPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_enterPos() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_exitClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_exitClip() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_loopClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_loopClip() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_loopCresendoClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_loopCresendoClip() ;

constexpr float_t const& __cordl_internal_get_maxDepth() const;

constexpr float_t& __cordl_internal_get_maxDepth() ;

constexpr float_t const& __cordl_internal_get_maxSpeed() const;

constexpr float_t& __cordl_internal_get_maxSpeed() ;

constexpr float_t const& __cordl_internal_get_pullTOCenterMinDistance() const;

constexpr float_t& __cordl_internal_get_pullTOCenterMinDistance() ;

constexpr float_t const& __cordl_internal_get_pullToCenterAccel() const;

constexpr float_t& __cordl_internal_get_pullToCenterAccel() ;

constexpr float_t const& __cordl_internal_get_pullToCenterMaxSpeed() const;

constexpr float_t& __cordl_internal_get_pullToCenterMaxSpeed() ;

constexpr bool const& __cordl_internal_get_scaleWithSize() const;

constexpr bool& __cordl_internal_get_scaleWithSize() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_volume() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_volume() ;

constexpr void __cordl_internal_set_accel(float_t  value) ;

constexpr void __cordl_internal_set_applyPullToCenterAcceleration(bool  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_audioState(::GlobalNamespace::ForceVolume_AudioState  value) ;

constexpr void __cordl_internal_set_dampenLateralVelocity(bool  value) ;

constexpr void __cordl_internal_set_dampenXVelPerc(float_t  value) ;

constexpr void __cordl_internal_set_dampenZVelPerc(float_t  value) ;

constexpr void __cordl_internal_set_disableGrip(bool  value) ;

constexpr void __cordl_internal_set_enterClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_enterPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_exitClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_loopClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_loopCresendoClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_maxDepth(float_t  value) ;

constexpr void __cordl_internal_set_maxSpeed(float_t  value) ;

constexpr void __cordl_internal_set_pullTOCenterMinDistance(float_t  value) ;

constexpr void __cordl_internal_set_pullToCenterAccel(float_t  value) ;

constexpr void __cordl_internal_set_pullToCenterMaxSpeed(float_t  value) ;

constexpr void __cordl_internal_set_scaleWithSize(bool  value) ;

constexpr void __cordl_internal_set_volume(::UnityW<::UnityEngine::Collider>  value) ;

/// @brief Method .ctor, addr 0x5a99948, size 0x304c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ForceVolume() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ForceVolume", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ForceVolume(ForceVolume && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ForceVolume", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ForceVolume(ForceVolume const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3235};

/// [SerializeField]
/// @brief Field scaleWithSize, offset: 0x20, size: 0x1, def value: None
 bool  ___scaleWithSize;

/// [SerializeField]
/// @brief Field accel, offset: 0x24, size: 0x4, def value: None
 float_t  ___accel;

/// [SerializeField]
/// @brief Field maxDepth, offset: 0x28, size: 0x4, def value: None
 float_t  ___maxDepth;

/// [SerializeField]
/// @brief Field maxSpeed, offset: 0x2c, size: 0x4, def value: None
 float_t  ___maxSpeed;

/// [SerializeField]
/// @brief Field disableGrip, offset: 0x30, size: 0x1, def value: None
 bool  ___disableGrip;

/// [SerializeField]
/// @brief Field dampenLateralVelocity, offset: 0x31, size: 0x1, def value: None
 bool  ___dampenLateralVelocity;

/// [SerializeField]
/// @brief Field dampenXVelPerc, offset: 0x34, size: 0x4, def value: None
 float_t  ___dampenXVelPerc;

/// [SerializeField]
/// @brief Field dampenZVelPerc, offset: 0x38, size: 0x4, def value: None
 float_t  ___dampenZVelPerc;

/// [SerializeField]
/// @brief Field applyPullToCenterAcceleration, offset: 0x3c, size: 0x1, def value: None
 bool  ___applyPullToCenterAcceleration;

/// [SerializeField]
/// @brief Field pullToCenterAccel, offset: 0x40, size: 0x4, def value: None
 float_t  ___pullToCenterAccel;

/// [SerializeField]
/// @brief Field pullToCenterMaxSpeed, offset: 0x44, size: 0x4, def value: None
 float_t  ___pullToCenterMaxSpeed;

/// [SerializeField]
/// @brief Field pullTOCenterMinDistance, offset: 0x48, size: 0x4, def value: None
 float_t  ___pullTOCenterMinDistance;

/// @brief Field volume, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___volume;

/// @brief Field enterClip, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___enterClip;

/// @brief Field exitClip, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___exitClip;

/// @brief Field loopClip, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___loopClip;

/// @brief Field loopCresendoClip, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___loopCresendoClip;

/// @brief Field audioSource, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field enterPos, offset: 0x80, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___enterPos;

/// @brief Field audioState, offset: 0x8c, size: 0x4, def value: None
 ::GlobalNamespace::ForceVolume_AudioState  ___audioState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ForceVolume, ___scaleWithSize) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ForceVolume, ___accel) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ForceVolume, ___maxDepth) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ForceVolume, ___maxSpeed) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ForceVolume, ___disableGrip) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ForceVolume, ___dampenLateralVelocity) == 0x31, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ForceVolume, ___dampenXVelPerc) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ForceVolume, ___dampenZVelPerc) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ForceVolume, ___applyPullToCenterAcceleration) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ForceVolume, ___pullToCenterAccel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ForceVolume, ___pullToCenterMaxSpeed) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ForceVolume, ___pullTOCenterMinDistance) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ForceVolume, ___volume) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ForceVolume, ___enterClip) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ForceVolume, ___exitClip) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ForceVolume, ___loopClip) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ForceVolume, ___loopCresendoClip) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ForceVolume, ___audioSource) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ForceVolume, ___enterPos) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ForceVolume, ___audioState) == 0x8c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ForceVolume) == 0x90, "Size mismatch!");

} // namespace end def GlobalNamespace
