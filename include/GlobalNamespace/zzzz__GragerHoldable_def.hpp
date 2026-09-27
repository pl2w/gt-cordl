#pragma once
// IWYU pragma private; include "GlobalNamespace/GragerHoldable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GragerHoldable)
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class GragerHoldable;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GragerHoldable*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GragerHoldable*, "", "GragerHoldable");
// Dependencies UnityEngine.AudioClip, UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GragerHoldable
class CORDL_TYPE GragerHoldable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field LocalCenterOfMass, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_LocalCenterOfMass, put=__cordl_internal_set_LocalCenterOfMass)) ::UnityEngine::Vector3  LocalCenterOfMass;

/// @brief Field LocalRotationAxis, offset 0x2c, size 0xc 
 __declspec(property(get=__cordl_internal_get_LocalRotationAxis, put=__cordl_internal_set_LocalRotationAxis)) ::UnityEngine::Vector3  LocalRotationAxis;

/// @brief Field RotationCorrection, offset 0x90, size 0x10 
 __declspec(property(get=__cordl_internal_get_RotationCorrection, put=__cordl_internal_set_RotationCorrection)) ::UnityEngine::Quaternion  RotationCorrection;

/// @brief Field RotationCorrectionEuler, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get_RotationCorrectionEuler, put=__cordl_internal_set_RotationCorrectionEuler)) ::UnityEngine::Vector3  RotationCorrectionEuler;

/// @brief Field allClacks, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_allClacks, put=__cordl_internal_set_allClacks)) ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  allClacks;

/// @brief Field centerOfMassRadius, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_centerOfMassRadius, put=__cordl_internal_set_centerOfMassRadius)) float_t  centerOfMassRadius;

/// @brief Field clackAudio, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_clackAudio, put=__cordl_internal_set_clackAudio)) ::UnityW<::UnityEngine::AudioSource>  clackAudio;

/// @brief Field distancePerClack, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_distancePerClack, put=__cordl_internal_set_distancePerClack)) float_t  distancePerClack;

/// @brief Field drag, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_drag, put=__cordl_internal_set_drag)) float_t  drag;

/// @brief Field gravity, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_gravity, put=__cordl_internal_set_gravity)) float_t  gravity;

/// @brief Field lastClackParentLocalPosition, offset 0x84, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastClackParentLocalPosition, put=__cordl_internal_set_lastClackParentLocalPosition)) ::UnityEngine::Vector3  lastClackParentLocalPosition;

/// @brief Field lastWorldPosition, offset 0x78, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastWorldPosition, put=__cordl_internal_set_lastWorldPosition)) ::UnityEngine::Vector3  lastWorldPosition;

/// @brief Field localFriction, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_localFriction, put=__cordl_internal_set_localFriction)) float_t  localFriction;

/// @brief Field velocity, offset 0x6c, size 0xc 
 __declspec(property(get=__cordl_internal_get_velocity, put=__cordl_internal_set_velocity)) ::UnityEngine::Vector3  velocity;

static inline ::GlobalNamespace::GragerHoldable* New_ctor() ;

/// @brief Method Start, addr 0x5652af8, size 0x1c8, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x5652cc0, size 0x544, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_LocalCenterOfMass() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_LocalCenterOfMass() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_LocalRotationAxis() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_LocalRotationAxis() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_RotationCorrection() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_RotationCorrection() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_RotationCorrectionEuler() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_RotationCorrectionEuler() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& __cordl_internal_get_allClacks() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& __cordl_internal_get_allClacks() ;

constexpr float_t const& __cordl_internal_get_centerOfMassRadius() const;

constexpr float_t& __cordl_internal_get_centerOfMassRadius() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_clackAudio() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_clackAudio() ;

constexpr float_t const& __cordl_internal_get_distancePerClack() const;

constexpr float_t& __cordl_internal_get_distancePerClack() ;

constexpr float_t const& __cordl_internal_get_drag() const;

constexpr float_t& __cordl_internal_get_drag() ;

constexpr float_t const& __cordl_internal_get_gravity() const;

constexpr float_t& __cordl_internal_get_gravity() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastClackParentLocalPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastClackParentLocalPosition() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastWorldPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastWorldPosition() ;

constexpr float_t const& __cordl_internal_get_localFriction() const;

constexpr float_t& __cordl_internal_get_localFriction() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_velocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_velocity() ;

constexpr void __cordl_internal_set_LocalCenterOfMass(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_LocalRotationAxis(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_RotationCorrection(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_RotationCorrectionEuler(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_allClacks(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value) ;

constexpr void __cordl_internal_set_centerOfMassRadius(float_t  value) ;

constexpr void __cordl_internal_set_clackAudio(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_distancePerClack(float_t  value) ;

constexpr void __cordl_internal_set_drag(float_t  value) ;

constexpr void __cordl_internal_set_gravity(float_t  value) ;

constexpr void __cordl_internal_set_lastClackParentLocalPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastWorldPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_localFriction(float_t  value) ;

constexpr void __cordl_internal_set_velocity(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x5653204, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GragerHoldable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GragerHoldable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GragerHoldable(GragerHoldable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GragerHoldable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GragerHoldable(GragerHoldable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{734};

/// [SerializeField]
/// @brief Field LocalCenterOfMass, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___LocalCenterOfMass;

/// [SerializeField]
/// @brief Field LocalRotationAxis, offset: 0x2c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___LocalRotationAxis;

/// [SerializeField]
/// @brief Field RotationCorrectionEuler, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___RotationCorrectionEuler;

/// [SerializeField]
/// @brief Field drag, offset: 0x44, size: 0x4, def value: None
 float_t  ___drag;

/// [SerializeField]
/// @brief Field gravity, offset: 0x48, size: 0x4, def value: None
 float_t  ___gravity;

/// [SerializeField]
/// @brief Field localFriction, offset: 0x4c, size: 0x4, def value: None
 float_t  ___localFriction;

/// [SerializeField]
/// @brief Field distancePerClack, offset: 0x50, size: 0x4, def value: None
 float_t  ___distancePerClack;

/// [SerializeField]
/// @brief Field clackAudio, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___clackAudio;

/// [SerializeField]
/// @brief Field allClacks, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  ___allClacks;

/// @brief Field centerOfMassRadius, offset: 0x68, size: 0x4, def value: None
 float_t  ___centerOfMassRadius;

/// @brief Field velocity, offset: 0x6c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___velocity;

/// @brief Field lastWorldPosition, offset: 0x78, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastWorldPosition;

/// @brief Field lastClackParentLocalPosition, offset: 0x84, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastClackParentLocalPosition;

/// @brief Field RotationCorrection, offset: 0x90, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___RotationCorrection;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GragerHoldable, ___LocalCenterOfMass) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GragerHoldable, ___LocalRotationAxis) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GragerHoldable, ___RotationCorrectionEuler) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GragerHoldable, ___drag) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GragerHoldable, ___gravity) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GragerHoldable, ___localFriction) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GragerHoldable, ___distancePerClack) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GragerHoldable, ___clackAudio) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GragerHoldable, ___allClacks) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GragerHoldable, ___centerOfMassRadius) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GragerHoldable, ___velocity) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GragerHoldable, ___lastWorldPosition) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GragerHoldable, ___lastClackParentLocalPosition) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GragerHoldable, ___RotationCorrection) == 0x90, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GragerHoldable) == 0xa0, "Size mismatch!");

} // namespace end def GlobalNamespace
