#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersCage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CrittersActor_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CrittersCage)
namespace GlobalNamespace {
class CrittersActor;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class CrittersCage;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CrittersCage*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CrittersCage*, "", "CrittersCage");
// Dependencies CrittersActor, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: CrittersCage
class CORDL_TYPE CrittersCage : public ::GlobalNamespace::CrittersActor {
public:
// Declarations
 __declspec(property(get=get_CanCatch)) bool  CanCatch;

/// @brief Field _lidActive, offset 0x1d8, size 0x1 
 __declspec(property(get=__cordl_internal_get__lidActive, put=__cordl_internal_set__lidActive)) bool  _lidActive;

/// @brief Field _releaseCooldownEnd, offset 0x1d4, size 0x4 
 __declspec(property(get=__cordl_internal_get__releaseCooldownEnd, put=__cordl_internal_set__releaseCooldownEnd)) float_t  _releaseCooldownEnd;

/// @brief Field cagePosition, offset 0x190, size 0x8 
 __declspec(property(get=__cordl_internal_get_cagePosition, put=__cordl_internal_set_cagePosition)) ::UnityW<::UnityEngine::Transform>  cagePosition;

/// @brief Field closeSound, offset 0x1c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_closeSound, put=__cordl_internal_set_closeSound)) ::UnityW<::UnityEngine::AudioClip>  closeSound;

 __declspec(property(get=get_critterScale)) ::UnityEngine::Vector3  critterScale;

/// @brief Field critterScales, offset 0x1a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_critterScales, put=__cordl_internal_set_critterScales)) ::ArrayW<::UnityEngine::Vector3>  critterScales;

/// @brief Field grabDistance, offset 0x198, size 0x4 
 __declspec(property(get=__cordl_internal_get_grabDistance, put=__cordl_internal_set_grabDistance)) float_t  grabDistance;

/// @brief Field grabPosition, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get_grabPosition, put=__cordl_internal_set_grabPosition)) ::UnityW<::UnityEngine::Transform>  grabPosition;

/// @brief Field hasCritter, offset 0x1d1, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasCritter, put=__cordl_internal_set_hasCritter)) bool  hasCritter;

/// @brief Field heldByPlayer, offset 0x1d0, size 0x1 
 __declspec(property(get=__cordl_internal_get_heldByPlayer, put=__cordl_internal_set_heldByPlayer)) bool  heldByPlayer;

/// @brief Field inReleasingPosition, offset 0x1d2, size 0x1 
 __declspec(property(get=__cordl_internal_get_inReleasingPosition, put=__cordl_internal_set_inReleasingPosition)) bool  inReleasingPosition;

/// @brief Field lid, offset 0x1c8, size 0x8 
 __declspec(property(get=__cordl_internal_get_lid, put=__cordl_internal_set_lid)) ::UnityW<::UnityEngine::GameObject>  lid;

/// @brief Field openSound, offset 0x1b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_openSound, put=__cordl_internal_set_openSound)) ::UnityW<::UnityEngine::AudioClip>  openSound;

/// @brief Field releaseCooldown, offset 0x1a8, size 0x4 
 __declspec(property(get=__cordl_internal_get_releaseCooldown, put=__cordl_internal_set_releaseCooldown)) float_t  releaseCooldown;

/// @brief Field sound, offset 0x1b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_sound, put=__cordl_internal_set_sound)) ::UnityW<::UnityEngine::AudioSource>  sound;

/// @brief Method AddActorDataToList, addr 0x55fd378, size 0xf0, virtual true, abstract: false, final false
inline int32_t AddActorDataToList(::by_ref<::System::Collections::Generic::List_1<::System::Object*>*>  objList) ;

/// @brief Method GrabbedBy, addr 0x55fd17c, size 0x54, virtual true, abstract: false, final false
inline void GrabbedBy(::GlobalNamespace::CrittersActor*  grabbingActor, bool  positionOverride, ::UnityEngine::Quaternion  localRotation, ::UnityEngine::Vector3  localOffset, bool  disableGrabbing) ;

/// @brief Method HandleRemoteReleased, addr 0x55fd220, size 0x28, virtual true, abstract: false, final false
inline void HandleRemoteReleased() ;

/// @brief Method Initialize, addr 0x55fd088, size 0x2c, virtual true, abstract: false, final false
inline void Initialize() ;

static inline ::GlobalNamespace::CrittersCage* New_ctor() ;

/// @brief Method Released, addr 0x55fd1d0, size 0x50, virtual true, abstract: false, final false
inline void Released(bool  keepWorldPosition, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  position, ::UnityEngine::Vector3  impulseVelocity, ::UnityEngine::Vector3  impulseAngularVelocity) ;

/// @brief Method RemoteGrabbedBy, addr 0x55fd128, size 0x54, virtual true, abstract: false, final false
inline void RemoteGrabbedBy(::GlobalNamespace::CrittersActor*  grabbingActor) ;

/// @brief Method SendDataByCrittersActorType, addr 0x55fd278, size 0x58, virtual true, abstract: false, final false
inline void SendDataByCrittersActorType(::Photon::Pun::PhotonStream*  stream) ;

/// @brief Method SetHasCritter, addr 0x55fd000, size 0x64, virtual false, abstract: false, final false
inline void SetHasCritter(bool  value) ;

/// @brief Method SetLidActive, addr 0x55fd0b4, size 0x74, virtual false, abstract: false, final false
inline void SetLidActive(bool  active, bool  playAudio) ;

/// @brief Method ShouldDespawn, addr 0x55fd248, size 0x30, virtual true, abstract: false, final false
inline bool ShouldDespawn() ;

/// @brief Method TotalActorDataLength, addr 0x55fd468, size 0x18, virtual true, abstract: false, final false
inline int32_t TotalActorDataLength() ;

/// @brief Method UpdateCageVisuals, addr 0x55fd064, size 0x24, virtual false, abstract: false, final false
inline void UpdateCageVisuals() ;

/// @brief Method UpdateFromRPC, addr 0x55fd480, size 0xbc, virtual true, abstract: false, final false
inline int32_t UpdateFromRPC(::ArrayW<::System::Object*>  data, int32_t  startingIndex) ;

/// @brief Method UpdateSpecificActor, addr 0x55fd2d0, size 0xa8, virtual true, abstract: false, final false
inline bool UpdateSpecificActor(::Photon::Pun::PhotonStream*  stream) ;

constexpr bool const& __cordl_internal_get__lidActive() const;

constexpr bool& __cordl_internal_get__lidActive() ;

constexpr float_t const& __cordl_internal_get__releaseCooldownEnd() const;

constexpr float_t& __cordl_internal_get__releaseCooldownEnd() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_cagePosition() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_cagePosition() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_closeSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_closeSound() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_critterScales() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_critterScales() ;

constexpr float_t const& __cordl_internal_get_grabDistance() const;

constexpr float_t& __cordl_internal_get_grabDistance() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_grabPosition() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_grabPosition() ;

constexpr bool const& __cordl_internal_get_hasCritter() const;

constexpr bool& __cordl_internal_get_hasCritter() ;

constexpr bool const& __cordl_internal_get_heldByPlayer() const;

constexpr bool& __cordl_internal_get_heldByPlayer() ;

constexpr bool const& __cordl_internal_get_inReleasingPosition() const;

constexpr bool& __cordl_internal_get_inReleasingPosition() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_lid() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_lid() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_openSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_openSound() ;

constexpr float_t const& __cordl_internal_get_releaseCooldown() const;

constexpr float_t& __cordl_internal_get_releaseCooldown() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_sound() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_sound() ;

constexpr void __cordl_internal_set__lidActive(bool  value) ;

constexpr void __cordl_internal_set__releaseCooldownEnd(float_t  value) ;

constexpr void __cordl_internal_set_cagePosition(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_closeSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_critterScales(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_grabDistance(float_t  value) ;

constexpr void __cordl_internal_set_grabPosition(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_hasCritter(bool  value) ;

constexpr void __cordl_internal_set_heldByPlayer(bool  value) ;

constexpr void __cordl_internal_set_inReleasingPosition(bool  value) ;

constexpr void __cordl_internal_set_lid(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_openSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_releaseCooldown(float_t  value) ;

constexpr void __cordl_internal_set_sound(::UnityW<::UnityEngine::AudioSource>  value) ;

/// @brief Method .ctor, addr 0x55fd53c, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CanCatch, addr 0x55fcfb8, size 0x48, virtual false, abstract: false, final false
inline bool get_CanCatch() ;

/// @brief Method get_critterScale, addr 0x55fcf2c, size 0x8c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_critterScale() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CrittersCage() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrittersCage", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CrittersCage(CrittersCage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrittersCage", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrittersCage(CrittersCage const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{90};

/// @brief Field grabPosition, offset: 0x188, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___grabPosition;

/// @brief Field cagePosition, offset: 0x190, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___cagePosition;

/// @brief Field grabDistance, offset: 0x198, size: 0x4, def value: None
 float_t  ___grabDistance;

/// [SerializeField]
/// @brief Field critterScales, offset: 0x1a0, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___critterScales;

/// [SerializeField]
/// @brief Field releaseCooldown, offset: 0x1a8, size: 0x4, def value: None
 float_t  ___releaseCooldown;

/// [SerializeField]
/// @brief Field sound, offset: 0x1b0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___sound;

/// [SerializeField]
/// @brief Field openSound, offset: 0x1b8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___openSound;

/// [SerializeField]
/// @brief Field closeSound, offset: 0x1c0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___closeSound;

/// @brief Field lid, offset: 0x1c8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___lid;

/// @brief Field heldByPlayer, offset: 0x1d0, size: 0x1, def value: None
 bool  ___heldByPlayer;

/// @brief Field hasCritter, offset: 0x1d1, size: 0x1, def value: None
 bool  ___hasCritter;

/// @brief Field inReleasingPosition, offset: 0x1d2, size: 0x1, def value: None
 bool  ___inReleasingPosition;

/// @brief Field _releaseCooldownEnd, offset: 0x1d4, size: 0x4, def value: None
 float_t  ____releaseCooldownEnd;

/// @brief Field _lidActive, offset: 0x1d8, size: 0x1, def value: None
 bool  ____lidActive;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CrittersCage, ___grabPosition) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersCage, ___cagePosition) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersCage, ___grabDistance) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersCage, ___critterScales) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersCage, ___releaseCooldown) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersCage, ___sound) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersCage, ___openSound) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersCage, ___closeSound) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersCage, ___lid) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersCage, ___heldByPlayer) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersCage, ___hasCritter) == 0x1d1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersCage, ___inReleasingPosition) == 0x1d2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersCage, ____releaseCooldownEnd) == 0x1d4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersCage, ____lidActive) == 0x1d8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CrittersCage) == 0x1e0, "Size mismatch!");

} // namespace end def GlobalNamespace
