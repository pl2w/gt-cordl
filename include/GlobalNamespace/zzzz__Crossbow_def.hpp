#pragma once
// IWYU pragma private; include "GlobalNamespace/Crossbow.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AnimHashId_def.hpp"
#include "GlobalNamespace/zzzz__ProjectileWeapon_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObjectHoldablePart_Crank_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Crossbow)
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class Crossbow;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::Crossbow*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Crossbow*, "", "Crossbow");
// Dependencies AnimHashId, ProjectileWeapon, TransferrableObjectHoldablePart_Crank
namespace GlobalNamespace {
// Is value type: false
// CS Name: Crossbow
class CORDL_TYPE Crossbow : public ::GlobalNamespace::ProjectileWeapon {
public:
// Declarations
/// @brief Field FireHashID, offset 0x3a0, size 0x10 
 __declspec(property(get=__cordl_internal_get_FireHashID, put=__cordl_internal_set_FireHashID)) ::GlobalNamespace::AnimHashId  FireHashID;

/// @brief Field ReloadFractionHashID, offset 0x3b0, size 0x10 
 __declspec(property(get=__cordl_internal_get_ReloadFractionHashID, put=__cordl_internal_set_ReloadFractionHashID)) ::GlobalNamespace::AnimHashId  ReloadFractionHashID;

/// @brief Field animator, offset 0x368, size 0x8 
 __declspec(property(get=__cordl_internal_get_animator, put=__cordl_internal_set_animator)) ::UnityW<::UnityEngine::Animator>  animator;

/// @brief Field crankSoundContinueDuration, offset 0x398, size 0x4 
 __declspec(property(get=__cordl_internal_get_crankSoundContinueDuration, put=__cordl_internal_set_crankSoundContinueDuration)) float_t  crankSoundContinueDuration;

/// @brief Field crankSoundDegrees, offset 0x3cc, size 0x4 
 __declspec(property(get=__cordl_internal_get_crankSoundDegrees, put=__cordl_internal_set_crankSoundDegrees)) float_t  crankSoundDegrees;

/// @brief Field crankSoundDegreesThreshold, offset 0x39c, size 0x4 
 __declspec(property(get=__cordl_internal_get_crankSoundDegreesThreshold, put=__cordl_internal_set_crankSoundDegreesThreshold)) float_t  crankSoundDegreesThreshold;

/// @brief Field crankTotalDegreesToReload, offset 0x370, size 0x4 
 __declspec(property(get=__cordl_internal_get_crankTotalDegreesToReload, put=__cordl_internal_set_crankTotalDegreesToReload)) float_t  crankTotalDegreesToReload;

/// @brief Field cranks, offset 0x378, size 0x8 
 __declspec(property(get=__cordl_internal_get_cranks, put=__cordl_internal_set_cranks)) ::ArrayW<::UnityW<::GlobalNamespace::TransferrableObjectHoldablePart_Crank>>  cranks;

/// @brief Field dummyProjectile, offset 0x380, size 0x8 
 __declspec(property(get=__cordl_internal_get_dummyProjectile, put=__cordl_internal_set_dummyProjectile)) ::UnityW<::UnityEngine::MeshRenderer>  dummyProjectile;

/// @brief Field launchPosition, offset 0x358, size 0x8 
 __declspec(property(get=__cordl_internal_get_launchPosition, put=__cordl_internal_set_launchPosition)) ::UnityW<::UnityEngine::Transform>  launchPosition;

/// @brief Field launchSpeed, offset 0x360, size 0x4 
 __declspec(property(get=__cordl_internal_get_launchSpeed, put=__cordl_internal_set_launchSpeed)) float_t  launchSpeed;

/// @brief Field loadFraction, offset 0x3c4, size 0x4 
 __declspec(property(get=__cordl_internal_get_loadFraction, put=__cordl_internal_set_loadFraction)) float_t  loadFraction;

/// @brief Field playingCrankSoundUntilTimestamp, offset 0x3c8, size 0x4 
 __declspec(property(get=__cordl_internal_get_playingCrankSoundUntilTimestamp, put=__cordl_internal_set_playingCrankSoundUntilTimestamp)) float_t  playingCrankSoundUntilTimestamp;

/// @brief Field reloadAudio, offset 0x388, size 0x8 
 __declspec(property(get=__cordl_internal_get_reloadAudio, put=__cordl_internal_set_reloadAudio)) ::UnityW<::UnityEngine::AudioSource>  reloadAudio;

/// @brief Field reloadComplete_audioClip, offset 0x390, size 0x8 
 __declspec(property(get=__cordl_internal_get_reloadComplete_audioClip, put=__cordl_internal_set_reloadComplete_audioClip)) ::UnityW<::UnityEngine::AudioClip>  reloadComplete_audioClip;

/// @brief Field totalCrankDegrees, offset 0x3c0, size 0x4 
 __declspec(property(get=__cordl_internal_get_totalCrankDegrees, put=__cordl_internal_set_totalCrankDegrees)) float_t  totalCrankDegrees;

/// @brief Field wasPressingTrigger, offset 0x3d0, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasPressingTrigger, put=__cordl_internal_set_wasPressingTrigger)) bool  wasPressingTrigger;

/// @brief Method Awake, addr 0x5649f28, size 0xf0, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method GetLaunchPosition, addr 0x564a1b4, size 0x18, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 GetLaunchPosition() ;

/// @brief Method GetLaunchVelocity, addr 0x564a1cc, size 0x64, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 GetLaunchVelocity() ;

/// @brief Method LateUpdateLocal, addr 0x564a230, size 0xf4, virtual true, abstract: false, final false
inline void LateUpdateLocal() ;

/// @brief Method LateUpdateReplicated, addr 0x564a324, size 0x54, virtual true, abstract: false, final false
inline void LateUpdateReplicated() ;

/// @brief Method LateUpdateShared, addr 0x564a378, size 0x58, virtual true, abstract: false, final false
inline void LateUpdateShared() ;

static inline ::GlobalNamespace::Crossbow* New_ctor() ;

/// @brief Method OnCrank, addr 0x564a0ec, size 0xc8, virtual false, abstract: false, final false
inline void OnCrank(float_t  degrees) ;

/// @brief Method SetReloadFraction, addr 0x564a018, size 0xd4, virtual false, abstract: false, final false
inline void SetReloadFraction(float_t  newFraction) ;

constexpr ::GlobalNamespace::AnimHashId const& __cordl_internal_get_FireHashID() const;

constexpr ::GlobalNamespace::AnimHashId& __cordl_internal_get_FireHashID() ;

constexpr ::GlobalNamespace::AnimHashId const& __cordl_internal_get_ReloadFractionHashID() const;

constexpr ::GlobalNamespace::AnimHashId& __cordl_internal_get_ReloadFractionHashID() ;

constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get_animator() const;

constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get_animator() ;

constexpr float_t const& __cordl_internal_get_crankSoundContinueDuration() const;

constexpr float_t& __cordl_internal_get_crankSoundContinueDuration() ;

constexpr float_t const& __cordl_internal_get_crankSoundDegrees() const;

constexpr float_t& __cordl_internal_get_crankSoundDegrees() ;

constexpr float_t const& __cordl_internal_get_crankSoundDegreesThreshold() const;

constexpr float_t& __cordl_internal_get_crankSoundDegreesThreshold() ;

constexpr float_t const& __cordl_internal_get_crankTotalDegreesToReload() const;

constexpr float_t& __cordl_internal_get_crankTotalDegreesToReload() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::TransferrableObjectHoldablePart_Crank>> const& __cordl_internal_get_cranks() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::TransferrableObjectHoldablePart_Crank>>& __cordl_internal_get_cranks() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_dummyProjectile() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_dummyProjectile() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_launchPosition() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_launchPosition() ;

constexpr float_t const& __cordl_internal_get_launchSpeed() const;

constexpr float_t& __cordl_internal_get_launchSpeed() ;

constexpr float_t const& __cordl_internal_get_loadFraction() const;

constexpr float_t& __cordl_internal_get_loadFraction() ;

constexpr float_t const& __cordl_internal_get_playingCrankSoundUntilTimestamp() const;

constexpr float_t& __cordl_internal_get_playingCrankSoundUntilTimestamp() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_reloadAudio() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_reloadAudio() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_reloadComplete_audioClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_reloadComplete_audioClip() ;

constexpr float_t const& __cordl_internal_get_totalCrankDegrees() const;

constexpr float_t& __cordl_internal_get_totalCrankDegrees() ;

constexpr bool const& __cordl_internal_get_wasPressingTrigger() const;

constexpr bool& __cordl_internal_get_wasPressingTrigger() ;

constexpr void __cordl_internal_set_FireHashID(::GlobalNamespace::AnimHashId  value) ;

constexpr void __cordl_internal_set_ReloadFractionHashID(::GlobalNamespace::AnimHashId  value) ;

constexpr void __cordl_internal_set_animator(::UnityW<::UnityEngine::Animator>  value) ;

constexpr void __cordl_internal_set_crankSoundContinueDuration(float_t  value) ;

constexpr void __cordl_internal_set_crankSoundDegrees(float_t  value) ;

constexpr void __cordl_internal_set_crankSoundDegreesThreshold(float_t  value) ;

constexpr void __cordl_internal_set_crankTotalDegreesToReload(float_t  value) ;

constexpr void __cordl_internal_set_cranks(::ArrayW<::UnityW<::GlobalNamespace::TransferrableObjectHoldablePart_Crank>>  value) ;

constexpr void __cordl_internal_set_dummyProjectile(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_launchPosition(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_launchSpeed(float_t  value) ;

constexpr void __cordl_internal_set_loadFraction(float_t  value) ;

constexpr void __cordl_internal_set_playingCrankSoundUntilTimestamp(float_t  value) ;

constexpr void __cordl_internal_set_reloadAudio(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_reloadComplete_audioClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_totalCrankDegrees(float_t  value) ;

constexpr void __cordl_internal_set_wasPressingTrigger(bool  value) ;

/// @brief Method .ctor, addr 0x564a3d0, size 0xb4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Crossbow() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Crossbow", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Crossbow(Crossbow && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Crossbow", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Crossbow(Crossbow const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{701};

/// [SerializeField]
/// @brief Field launchPosition, offset: 0x358, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___launchPosition;

/// [SerializeField]
/// @brief Field launchSpeed, offset: 0x360, size: 0x4, def value: None
 float_t  ___launchSpeed;

/// [SerializeField]
/// @brief Field animator, offset: 0x368, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  ___animator;

/// [SerializeField]
/// @brief Field crankTotalDegreesToReload, offset: 0x370, size: 0x4, def value: None
 float_t  ___crankTotalDegreesToReload;

/// [SerializeField]
/// @brief Field cranks, offset: 0x378, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::TransferrableObjectHoldablePart_Crank>>  ___cranks;

/// [SerializeField]
/// @brief Field dummyProjectile, offset: 0x380, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___dummyProjectile;

/// [SerializeField]
/// @brief Field reloadAudio, offset: 0x388, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___reloadAudio;

/// [SerializeField]
/// @brief Field reloadComplete_audioClip, offset: 0x390, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___reloadComplete_audioClip;

/// [SerializeField]
/// @brief Field crankSoundContinueDuration, offset: 0x398, size: 0x4, def value: None
 float_t  ___crankSoundContinueDuration;

/// [SerializeField]
/// @brief Field crankSoundDegreesThreshold, offset: 0x39c, size: 0x4, def value: None
 float_t  ___crankSoundDegreesThreshold;

/// @brief Field FireHashID, offset: 0x3a0, size: 0x10, def value: None
 ::GlobalNamespace::AnimHashId  ___FireHashID;

/// @brief Field ReloadFractionHashID, offset: 0x3b0, size: 0x10, def value: None
 ::GlobalNamespace::AnimHashId  ___ReloadFractionHashID;

/// @brief Field totalCrankDegrees, offset: 0x3c0, size: 0x4, def value: None
 float_t  ___totalCrankDegrees;

/// @brief Field loadFraction, offset: 0x3c4, size: 0x4, def value: None
 float_t  ___loadFraction;

/// @brief Field playingCrankSoundUntilTimestamp, offset: 0x3c8, size: 0x4, def value: None
 float_t  ___playingCrankSoundUntilTimestamp;

/// @brief Field crankSoundDegrees, offset: 0x3cc, size: 0x4, def value: None
 float_t  ___crankSoundDegrees;

/// @brief Field wasPressingTrigger, offset: 0x3d0, size: 0x1, def value: None
 bool  ___wasPressingTrigger;

/// @brief Size padding 0x408 - 0x3d8 = 0x30, packed as 0x30
 uint8_t  _cordl_size_padding[0x30];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Crossbow, ___launchPosition) == 0x358, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Crossbow, ___launchSpeed) == 0x360, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Crossbow, ___animator) == 0x368, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Crossbow, ___crankTotalDegreesToReload) == 0x370, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Crossbow, ___cranks) == 0x378, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Crossbow, ___dummyProjectile) == 0x380, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Crossbow, ___reloadAudio) == 0x388, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Crossbow, ___reloadComplete_audioClip) == 0x390, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Crossbow, ___crankSoundContinueDuration) == 0x398, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Crossbow, ___crankSoundDegreesThreshold) == 0x39c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Crossbow, ___FireHashID) == 0x3a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Crossbow, ___ReloadFractionHashID) == 0x3b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Crossbow, ___totalCrankDegrees) == 0x3c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Crossbow, ___loadFraction) == 0x3c4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Crossbow, ___playingCrankSoundUntilTimestamp) == 0x3c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Crossbow, ___crankSoundDegrees) == 0x3cc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Crossbow, ___wasPressingTrigger) == 0x3d0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Crossbow) == 0x408, "Size mismatch!");

} // namespace end def GlobalNamespace
