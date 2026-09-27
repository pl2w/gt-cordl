#pragma once
// IWYU pragma private; include "GlobalNamespace/ClackerCosmetic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ClackerCosmetic_PerArmData_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ClackerCosmetic)
namespace GlobalNamespace {
struct ClackerCosmetic_PerArmData;
}
namespace GlobalNamespace {
class SoundBankPlayer;
}
namespace GlobalNamespace {
class TransferrableObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class ClackerCosmetic;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ClackerCosmetic*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ClackerCosmetic*, "", "ClackerCosmetic");
// Dependencies ClackerCosmetic::PerArmData, UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: ClackerCosmetic
class CORDL_TYPE ClackerCosmetic : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using PerArmData = ::GlobalNamespace::ClackerCosmetic_PerArmData;

/// @brief Field LocalCenterOfMass, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get_LocalCenterOfMass, put=__cordl_internal_set_LocalCenterOfMass)) ::UnityEngine::Vector3  LocalCenterOfMass;

/// @brief Field LocalRotationAxis, offset 0x44, size 0xc 
 __declspec(property(get=__cordl_internal_get_LocalRotationAxis, put=__cordl_internal_set_LocalRotationAxis)) ::UnityEngine::Vector3  LocalRotationAxis;

/// @brief Field RotationCorrection, offset 0xf8, size 0x10 
 __declspec(property(get=__cordl_internal_get_RotationCorrection, put=__cordl_internal_set_RotationCorrection)) ::UnityEngine::Quaternion  RotationCorrection;

/// @brief Field RotationCorrectionEuler, offset 0x50, size 0xc 
 __declspec(property(get=__cordl_internal_get_RotationCorrectionEuler, put=__cordl_internal_set_RotationCorrectionEuler)) ::UnityEngine::Vector3  RotationCorrectionEuler;

/// @brief Field arm1, offset 0xa8, size 0x28 
 __declspec(property(get=__cordl_internal_get_arm1, put=__cordl_internal_set_arm1)) ::GlobalNamespace::ClackerCosmetic_PerArmData  arm1;

/// @brief Field arm2, offset 0xd0, size 0x28 
 __declspec(property(get=__cordl_internal_get_arm2, put=__cordl_internal_set_arm2)) ::GlobalNamespace::ClackerCosmetic_PerArmData  arm2;

/// @brief Field centerOfMassRadius, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_centerOfMassRadius, put=__cordl_internal_set_centerOfMassRadius)) float_t  centerOfMassRadius;

/// @brief Field clackerArm1, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_clackerArm1, put=__cordl_internal_set_clackerArm1)) ::UnityW<::UnityEngine::Transform>  clackerArm1;

/// @brief Field clackerArm2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_clackerArm2, put=__cordl_internal_set_clackerArm2)) ::UnityW<::UnityEngine::Transform>  clackerArm2;

/// @brief Field collisionDistance, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_collisionDistance, put=__cordl_internal_set_collisionDistance)) float_t  collisionDistance;

/// @brief Field drag, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_drag, put=__cordl_internal_set_drag)) float_t  drag;

/// @brief Field gravity, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_gravity, put=__cordl_internal_set_gravity)) float_t  gravity;

/// @brief Field heavyClackAudio, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_heavyClackAudio, put=__cordl_internal_set_heavyClackAudio)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  heavyClackAudio;

/// @brief Field heavyClackSpeed, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_heavyClackSpeed, put=__cordl_internal_set_heavyClackSpeed)) float_t  heavyClackSpeed;

/// @brief Field lightClackAudio, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_lightClackAudio, put=__cordl_internal_set_lightClackAudio)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  lightClackAudio;

/// @brief Field localFriction, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_localFriction, put=__cordl_internal_set_localFriction)) float_t  localFriction;

/// @brief Field mediumClackAudio, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_mediumClackAudio, put=__cordl_internal_set_mediumClackAudio)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  mediumClackAudio;

/// @brief Field mediumClackSpeed, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_mediumClackSpeed, put=__cordl_internal_set_mediumClackSpeed)) float_t  mediumClackSpeed;

/// @brief Field minimumClackSpeed, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_minimumClackSpeed, put=__cordl_internal_set_minimumClackSpeed)) float_t  minimumClackSpeed;

/// @brief Field parentHoldable, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentHoldable, put=__cordl_internal_set_parentHoldable)) ::UnityW<::GlobalNamespace::TransferrableObject>  parentHoldable;

/// @brief Field pushApartStrength, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_pushApartStrength, put=__cordl_internal_set_pushApartStrength)) float_t  pushApartStrength;

static inline ::GlobalNamespace::ClackerCosmetic* New_ctor() ;

/// @brief Method Start, addr 0x5647970, size 0x208, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x5647b78, size 0x49c, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_LocalCenterOfMass() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_LocalCenterOfMass() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_LocalRotationAxis() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_LocalRotationAxis() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_RotationCorrection() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_RotationCorrection() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_RotationCorrectionEuler() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_RotationCorrectionEuler() ;

constexpr ::GlobalNamespace::ClackerCosmetic_PerArmData const& __cordl_internal_get_arm1() const;

constexpr ::GlobalNamespace::ClackerCosmetic_PerArmData& __cordl_internal_get_arm1() ;

constexpr ::GlobalNamespace::ClackerCosmetic_PerArmData const& __cordl_internal_get_arm2() const;

constexpr ::GlobalNamespace::ClackerCosmetic_PerArmData& __cordl_internal_get_arm2() ;

constexpr float_t const& __cordl_internal_get_centerOfMassRadius() const;

constexpr float_t& __cordl_internal_get_centerOfMassRadius() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_clackerArm1() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_clackerArm1() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_clackerArm2() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_clackerArm2() ;

constexpr float_t const& __cordl_internal_get_collisionDistance() const;

constexpr float_t& __cordl_internal_get_collisionDistance() ;

constexpr float_t const& __cordl_internal_get_drag() const;

constexpr float_t& __cordl_internal_get_drag() ;

constexpr float_t const& __cordl_internal_get_gravity() const;

constexpr float_t& __cordl_internal_get_gravity() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_heavyClackAudio() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_heavyClackAudio() ;

constexpr float_t const& __cordl_internal_get_heavyClackSpeed() const;

constexpr float_t& __cordl_internal_get_heavyClackSpeed() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_lightClackAudio() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_lightClackAudio() ;

constexpr float_t const& __cordl_internal_get_localFriction() const;

constexpr float_t& __cordl_internal_get_localFriction() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_mediumClackAudio() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_mediumClackAudio() ;

constexpr float_t const& __cordl_internal_get_mediumClackSpeed() const;

constexpr float_t& __cordl_internal_get_mediumClackSpeed() ;

constexpr float_t const& __cordl_internal_get_minimumClackSpeed() const;

constexpr float_t& __cordl_internal_get_minimumClackSpeed() ;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& __cordl_internal_get_parentHoldable() const;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& __cordl_internal_get_parentHoldable() ;

constexpr float_t const& __cordl_internal_get_pushApartStrength() const;

constexpr float_t& __cordl_internal_get_pushApartStrength() ;

constexpr void __cordl_internal_set_LocalCenterOfMass(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_LocalRotationAxis(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_RotationCorrection(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_RotationCorrectionEuler(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_arm1(::GlobalNamespace::ClackerCosmetic_PerArmData  value) ;

constexpr void __cordl_internal_set_arm2(::GlobalNamespace::ClackerCosmetic_PerArmData  value) ;

constexpr void __cordl_internal_set_centerOfMassRadius(float_t  value) ;

constexpr void __cordl_internal_set_clackerArm1(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_clackerArm2(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_collisionDistance(float_t  value) ;

constexpr void __cordl_internal_set_drag(float_t  value) ;

constexpr void __cordl_internal_set_gravity(float_t  value) ;

constexpr void __cordl_internal_set_heavyClackAudio(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_heavyClackSpeed(float_t  value) ;

constexpr void __cordl_internal_set_lightClackAudio(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_localFriction(float_t  value) ;

constexpr void __cordl_internal_set_mediumClackAudio(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_mediumClackSpeed(float_t  value) ;

constexpr void __cordl_internal_set_minimumClackSpeed(float_t  value) ;

constexpr void __cordl_internal_set_parentHoldable(::UnityW<::GlobalNamespace::TransferrableObject>  value) ;

constexpr void __cordl_internal_set_pushApartStrength(float_t  value) ;

/// @brief Method .ctor, addr 0x56485e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClackerCosmetic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClackerCosmetic", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ClackerCosmetic(ClackerCosmetic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClackerCosmetic", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClackerCosmetic(ClackerCosmetic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{694};

/// [SerializeField]
/// @brief Field parentHoldable, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TransferrableObject>  ___parentHoldable;

/// [SerializeField]
/// @brief Field clackerArm1, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___clackerArm1;

/// [SerializeField]
/// @brief Field clackerArm2, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___clackerArm2;

/// [SerializeField]
/// @brief Field LocalCenterOfMass, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___LocalCenterOfMass;

/// [SerializeField]
/// @brief Field LocalRotationAxis, offset: 0x44, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___LocalRotationAxis;

/// [SerializeField]
/// @brief Field RotationCorrectionEuler, offset: 0x50, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___RotationCorrectionEuler;

/// [SerializeField]
/// @brief Field drag, offset: 0x5c, size: 0x4, def value: None
 float_t  ___drag;

/// [SerializeField]
/// @brief Field gravity, offset: 0x60, size: 0x4, def value: None
 float_t  ___gravity;

/// [SerializeField]
/// @brief Field localFriction, offset: 0x64, size: 0x4, def value: None
 float_t  ___localFriction;

/// [SerializeField]
/// @brief Field minimumClackSpeed, offset: 0x68, size: 0x4, def value: None
 float_t  ___minimumClackSpeed;

/// [SerializeField]
/// @brief Field lightClackAudio, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___lightClackAudio;

/// [SerializeField]
/// @brief Field mediumClackSpeed, offset: 0x78, size: 0x4, def value: None
 float_t  ___mediumClackSpeed;

/// [SerializeField]
/// @brief Field mediumClackAudio, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___mediumClackAudio;

/// [SerializeField]
/// @brief Field heavyClackSpeed, offset: 0x88, size: 0x4, def value: None
 float_t  ___heavyClackSpeed;

/// [SerializeField]
/// @brief Field heavyClackAudio, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___heavyClackAudio;

/// [SerializeField]
/// @brief Field collisionDistance, offset: 0x98, size: 0x4, def value: None
 float_t  ___collisionDistance;

/// @brief Field centerOfMassRadius, offset: 0x9c, size: 0x4, def value: None
 float_t  ___centerOfMassRadius;

/// [SerializeField]
/// @brief Field pushApartStrength, offset: 0xa0, size: 0x4, def value: None
 float_t  ___pushApartStrength;

/// @brief Field arm1, offset: 0xa8, size: 0x28, def value: None
 ::GlobalNamespace::ClackerCosmetic_PerArmData  ___arm1;

/// @brief Field arm2, offset: 0xd0, size: 0x28, def value: None
 ::GlobalNamespace::ClackerCosmetic_PerArmData  ___arm2;

/// @brief Field RotationCorrection, offset: 0xf8, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___RotationCorrection;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ClackerCosmetic, ___parentHoldable) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ClackerCosmetic, ___clackerArm1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ClackerCosmetic, ___clackerArm2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ClackerCosmetic, ___LocalCenterOfMass) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ClackerCosmetic, ___LocalRotationAxis) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ClackerCosmetic, ___RotationCorrectionEuler) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ClackerCosmetic, ___drag) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ClackerCosmetic, ___gravity) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ClackerCosmetic, ___localFriction) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ClackerCosmetic, ___minimumClackSpeed) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ClackerCosmetic, ___lightClackAudio) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ClackerCosmetic, ___mediumClackSpeed) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ClackerCosmetic, ___mediumClackAudio) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ClackerCosmetic, ___heavyClackSpeed) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ClackerCosmetic, ___heavyClackAudio) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ClackerCosmetic, ___collisionDistance) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ClackerCosmetic, ___centerOfMassRadius) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ClackerCosmetic, ___pushApartStrength) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ClackerCosmetic, ___arm1) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ClackerCosmetic, ___arm2) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ClackerCosmetic, ___RotationCorrection) == 0xf8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ClackerCosmetic) == 0x108, "Size mismatch!");

} // namespace end def GlobalNamespace
