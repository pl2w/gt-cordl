#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaGuardianZoneManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "Photon/Pun/zzzz__MonoBehaviourPunCallbacks_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaGuardianZoneManager)
namespace GlobalNamespace {
class GorillaGuardianZoneManager___c__DisplayClass49_0;
}
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class SizeChanger;
}
namespace GlobalNamespace {
class SoundBankPlayer;
}
namespace GlobalNamespace {
class TappableGuardianIdol;
}
namespace Photon::Pun {
class IPunObservable;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace Photon::Realtime {
class Player;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaGuardianZoneManager;
}
namespace GlobalNamespace {
class GorillaGuardianZoneManager___c__DisplayClass49_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaGuardianZoneManager*);
MARK_REF_T(::GlobalNamespace::GorillaGuardianZoneManager___c__DisplayClass49_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaGuardianZoneManager*, "", "GorillaGuardianZoneManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaGuardianZoneManager___c__DisplayClass49_0*, "", "GorillaGuardianZoneManager/<>c__DisplayClass49_0");
// Dependencies GTZone, Photon.Pun.MonoBehaviourPunCallbacks
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaGuardianZoneManager
class CORDL_TYPE GorillaGuardianZoneManager : public ::Photon::Pun::MonoBehaviourPunCallbacks {
public:
// Declarations
using __c__DisplayClass49_0 = ::GlobalNamespace::GorillaGuardianZoneManager___c__DisplayClass49_0;

 __declspec(property(get=get_CurrentGuardian)) ::GlobalNamespace::NetPlayer*  CurrentGuardian;

/// @brief Field ObserverGainGuardianSFX, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_ObserverGainGuardianSFX, put=__cordl_internal_set_ObserverGainGuardianSFX)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  ObserverGainGuardianSFX;

/// @brief Field PlayerGainGuardianSFX, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayerGainGuardianSFX, put=__cordl_internal_set_PlayerGainGuardianSFX)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  PlayerGainGuardianSFX;

/// @brief Field PlayerLostGuardianSFX, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayerLostGuardianSFX, put=__cordl_internal_set_PlayerLostGuardianSFX)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  PlayerLostGuardianSFX;

/// @brief Field _currentActivationTime, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentActivationTime, put=__cordl_internal_set__currentActivationTime)) float_t  _currentActivationTime;

/// @brief Field _idolActivationDisplay, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get__idolActivationDisplay, put=__cordl_internal_set__idolActivationDisplay)) float_t  _idolActivationDisplay;

/// @brief Field _lastTappedTime, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastTappedTime, put=__cordl_internal_set__lastTappedTime)) float_t  _lastTappedTime;

/// @brief Field _previousGuardian, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__previousGuardian, put=__cordl_internal_set__previousGuardian)) ::GlobalNamespace::NetPlayer*  _previousGuardian;

/// @brief Field _progressing, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get__progressing, put=__cordl_internal_set__progressing)) bool  _progressing;

/// @brief Field _sortedIdolPositions, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__sortedIdolPositions, put=__cordl_internal_set__sortedIdolPositions)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  _sortedIdolPositions;

/// @brief Field _zoneIsActive, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get__zoneIsActive, put=__cordl_internal_set__zoneIsActive)) bool  _zoneIsActive;

/// @brief Field _zoneStateChanged, offset 0xa9, size 0x1 
 __declspec(property(get=__cordl_internal_get__zoneStateChanged, put=__cordl_internal_set__zoneStateChanged)) bool  _zoneStateChanged;

/// @brief Field activationTimePerTap, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_activationTimePerTap, put=__cordl_internal_set_activationTimePerTap)) float_t  activationTimePerTap;

/// @brief Field currentIdol, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentIdol, put=__cordl_internal_set_currentIdol)) int32_t  currentIdol;

/// @brief Field guardianPlayer, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_guardianPlayer, put=__cordl_internal_set_guardianPlayer)) ::GlobalNamespace::NetPlayer*  guardianPlayer;

/// @brief Field guardianSizeChanger, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_guardianSizeChanger, put=__cordl_internal_set_guardianSizeChanger)) ::UnityW<::GlobalNamespace::SizeChanger>  guardianSizeChanger;

/// @brief Field idol, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_idol, put=__cordl_internal_set_idol)) ::UnityW<::GlobalNamespace::TappableGuardianIdol>  idol;

/// @brief Field idolKnockbackRadius, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_idolKnockbackRadius, put=__cordl_internal_set_idolKnockbackRadius)) float_t  idolKnockbackRadius;

/// @brief Field idolKnockbackStrengthHoriz, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_idolKnockbackStrengthHoriz, put=__cordl_internal_set_idolKnockbackStrengthHoriz)) float_t  idolKnockbackStrengthHoriz;

/// @brief Field idolKnockbackStrengthVert, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_idolKnockbackStrengthVert, put=__cordl_internal_set_idolKnockbackStrengthVert)) float_t  idolKnockbackStrengthVert;

/// @brief Field idolMoveCount, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_idolMoveCount, put=__cordl_internal_set_idolMoveCount)) int32_t  idolMoveCount;

/// @brief Field idolPositions, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_idolPositions, put=__cordl_internal_set_idolPositions)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  idolPositions;

/// @brief Field knockbackIncludesGuardian, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_knockbackIncludesGuardian, put=__cordl_internal_set_knockbackIncludesGuardian)) bool  knockbackIncludesGuardian;

/// @brief Field requiredActivationTime, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_requiredActivationTime, put=__cordl_internal_set_requiredActivationTime)) float_t  requiredActivationTime;

/// @brief Field zone, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_zone, put=__cordl_internal_set_zone)) ::GlobalNamespace::GTZone  zone;

/// @brief Field zoneManagers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_zoneManagers, put=setStaticF_zoneManagers)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaGuardianZoneManager>>*  zoneManagers;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Convert operator to "::Photon::Pun::IPunObservable"
constexpr operator  ::Photon::Pun::IPunObservable*() noexcept;

/// @brief Method Awake, addr 0x590b0cc, size 0x2ec, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method IdolActivated, addr 0x590bd40, size 0x2c, virtual false, abstract: false, final false
inline void IdolActivated(::GlobalNamespace::NetPlayer*  activater) ;

/// @brief Method IdolWasTapped, addr 0x590bb9c, size 0x104, virtual false, abstract: false, final false
inline void IdolWasTapped(::GlobalNamespace::NetPlayer*  tapper) ;

/// @brief Method IsPlayerGuardian, addr 0x5908afc, size 0x10, virtual false, abstract: false, final false
inline bool IsPlayerGuardian(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method IsZoneValid, addr 0x590b91c, size 0x90, virtual false, abstract: false, final false
inline bool IsZoneValid() ;

/// @brief Method MoveIdolPosition, addr 0x590bd6c, size 0x148, virtual false, abstract: false, final false
inline void MoveIdolPosition(int32_t  index) ;

static inline ::GlobalNamespace::GorillaGuardianZoneManager* New_ctor() ;

/// @brief Method OnDestroy, addr 0x590b4a8, size 0x144, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x590b610, size 0x24, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x590b5ec, size 0x24, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnLeftRoom, addr 0x590b6c4, size 0x1c, virtual true, abstract: false, final false
inline void OnLeftRoom() ;

/// @brief Method OnPhotonSerializeView, addr 0x590cd58, size 0x39c, virtual true, abstract: false, final true
inline void OnPhotonSerializeView(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method OnPlayerLeftRoom, addr 0x590b6e0, size 0x70, virtual true, abstract: false, final false
inline void OnPlayerLeftRoom(::Photon::Realtime::Player*  otherPlayer) ;

/// @brief Method OnZoneChanged, addr 0x590b750, size 0x1cc, virtual false, abstract: false, final false
inline void OnZoneChanged() ;

/// @brief Method SelectFarFromNearestPlayer, addr 0x590c140, size 0x104, virtual false, abstract: false, final false
inline int32_t SelectFarFromNearestPlayer() ;

/// @brief Method SelectFarthestFromGuardian, addr 0x590bf50, size 0x1f0, virtual false, abstract: false, final false
inline int32_t SelectFarthestFromGuardian() ;

/// @brief Method SelectNextIdol, addr 0x590b9ac, size 0xb8, virtual false, abstract: false, final false
inline int32_t SelectNextIdol() ;

/// @brief Method SelectRandomIdol, addr 0x590beb4, size 0x9c, virtual false, abstract: false, final false
inline int32_t SelectRandomIdol() ;

/// @brief Method SetGuardian, addr 0x5908c7c, size 0x52c, virtual false, abstract: false, final false
inline void SetGuardian(::GlobalNamespace::NetPlayer*  newGuardian) ;

/// @brief Method SetIdolPosition, addr 0x590ba64, size 0x120, virtual false, abstract: false, final false
inline void SetIdolPosition(int32_t  index) ;

/// @brief Method SetScaleCenterPoint, addr 0x590bb84, size 0x18, virtual false, abstract: false, final false
inline void SetScaleCenterPoint(::UnityEngine::Transform*  scaleCenterPoint) ;

/// @brief Method SliceUpdate, addr 0x590b634, size 0x90, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// @brief Method SortByDistanceToNearestPlayer, addr 0x590c244, size 0x670, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* SortByDistanceToNearestPlayer() ;

/// @brief Method Start, addr 0x590b3b8, size 0xf0, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method StartPlaying, addr 0x590859c, size 0xd8, virtual false, abstract: false, final false
inline void StartPlaying() ;

/// @brief Method StopPlaying, addr 0x5908810, size 0x64, virtual false, abstract: false, final false
inline void StopPlaying() ;

/// @brief Method TriggerIdolKnockback, addr 0x590c8bc, size 0x49c, virtual false, abstract: false, final false
inline void TriggerIdolKnockback() ;

/// @brief Method UpdateTapCount, addr 0x590bca0, size 0xa0, virtual false, abstract: false, final false
inline bool UpdateTapCount(::GlobalNamespace::NetPlayer*  tapper) ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_ObserverGainGuardianSFX() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_ObserverGainGuardianSFX() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_PlayerGainGuardianSFX() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_PlayerGainGuardianSFX() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_PlayerLostGuardianSFX() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_PlayerLostGuardianSFX() ;

constexpr float_t const& __cordl_internal_get__currentActivationTime() const;

constexpr float_t& __cordl_internal_get__currentActivationTime() ;

constexpr float_t const& __cordl_internal_get__idolActivationDisplay() const;

constexpr float_t& __cordl_internal_get__idolActivationDisplay() ;

constexpr float_t const& __cordl_internal_get__lastTappedTime() const;

constexpr float_t& __cordl_internal_get__lastTappedTime() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get__previousGuardian() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get__previousGuardian() ;

constexpr bool const& __cordl_internal_get__progressing() const;

constexpr bool& __cordl_internal_get__progressing() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get__sortedIdolPositions() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get__sortedIdolPositions() ;

constexpr bool const& __cordl_internal_get__zoneIsActive() const;

constexpr bool& __cordl_internal_get__zoneIsActive() ;

constexpr bool const& __cordl_internal_get__zoneStateChanged() const;

constexpr bool& __cordl_internal_get__zoneStateChanged() ;

constexpr float_t const& __cordl_internal_get_activationTimePerTap() const;

constexpr float_t& __cordl_internal_get_activationTimePerTap() ;

constexpr int32_t const& __cordl_internal_get_currentIdol() const;

constexpr int32_t& __cordl_internal_get_currentIdol() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_guardianPlayer() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_guardianPlayer() ;

constexpr ::UnityW<::GlobalNamespace::SizeChanger> const& __cordl_internal_get_guardianSizeChanger() const;

constexpr ::UnityW<::GlobalNamespace::SizeChanger>& __cordl_internal_get_guardianSizeChanger() ;

constexpr ::UnityW<::GlobalNamespace::TappableGuardianIdol> const& __cordl_internal_get_idol() const;

constexpr ::UnityW<::GlobalNamespace::TappableGuardianIdol>& __cordl_internal_get_idol() ;

constexpr float_t const& __cordl_internal_get_idolKnockbackRadius() const;

constexpr float_t& __cordl_internal_get_idolKnockbackRadius() ;

constexpr float_t const& __cordl_internal_get_idolKnockbackStrengthHoriz() const;

constexpr float_t& __cordl_internal_get_idolKnockbackStrengthHoriz() ;

constexpr float_t const& __cordl_internal_get_idolKnockbackStrengthVert() const;

constexpr float_t& __cordl_internal_get_idolKnockbackStrengthVert() ;

constexpr int32_t const& __cordl_internal_get_idolMoveCount() const;

constexpr int32_t& __cordl_internal_get_idolMoveCount() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get_idolPositions() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get_idolPositions() ;

constexpr bool const& __cordl_internal_get_knockbackIncludesGuardian() const;

constexpr bool& __cordl_internal_get_knockbackIncludesGuardian() ;

constexpr float_t const& __cordl_internal_get_requiredActivationTime() const;

constexpr float_t& __cordl_internal_get_requiredActivationTime() ;

constexpr ::GlobalNamespace::GTZone const& __cordl_internal_get_zone() const;

constexpr ::GlobalNamespace::GTZone& __cordl_internal_get_zone() ;

constexpr void __cordl_internal_set_ObserverGainGuardianSFX(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_PlayerGainGuardianSFX(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_PlayerLostGuardianSFX(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set__currentActivationTime(float_t  value) ;

constexpr void __cordl_internal_set__idolActivationDisplay(float_t  value) ;

constexpr void __cordl_internal_set__lastTappedTime(float_t  value) ;

constexpr void __cordl_internal_set__previousGuardian(::GlobalNamespace::NetPlayer*  value) ;

constexpr void __cordl_internal_set__progressing(bool  value) ;

constexpr void __cordl_internal_set__sortedIdolPositions(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value) ;

constexpr void __cordl_internal_set__zoneIsActive(bool  value) ;

constexpr void __cordl_internal_set__zoneStateChanged(bool  value) ;

constexpr void __cordl_internal_set_activationTimePerTap(float_t  value) ;

constexpr void __cordl_internal_set_currentIdol(int32_t  value) ;

constexpr void __cordl_internal_set_guardianPlayer(::GlobalNamespace::NetPlayer*  value) ;

constexpr void __cordl_internal_set_guardianSizeChanger(::UnityW<::GlobalNamespace::SizeChanger>  value) ;

constexpr void __cordl_internal_set_idol(::UnityW<::GlobalNamespace::TappableGuardianIdol>  value) ;

constexpr void __cordl_internal_set_idolKnockbackRadius(float_t  value) ;

constexpr void __cordl_internal_set_idolKnockbackStrengthHoriz(float_t  value) ;

constexpr void __cordl_internal_set_idolKnockbackStrengthVert(float_t  value) ;

constexpr void __cordl_internal_set_idolMoveCount(int32_t  value) ;

constexpr void __cordl_internal_set_idolPositions(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value) ;

constexpr void __cordl_internal_set_knockbackIncludesGuardian(bool  value) ;

constexpr void __cordl_internal_set_requiredActivationTime(float_t  value) ;

constexpr void __cordl_internal_set_zone(::GlobalNamespace::GTZone  value) ;

/// @brief Method .ctor, addr 0x590d0f4, size 0xc0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaGuardianZoneManager>>* getStaticF_zoneManagers() ;

/// @brief Method get_CurrentGuardian, addr 0x590b0c4, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::NetPlayer* get_CurrentGuardian() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

/// @brief Convert to "::Photon::Pun::IPunObservable"
constexpr ::Photon::Pun::IPunObservable* i___Photon__Pun__IPunObservable() noexcept;

static inline void setStaticF_zoneManagers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaGuardianZoneManager>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaGuardianZoneManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaGuardianZoneManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaGuardianZoneManager(GorillaGuardianZoneManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaGuardianZoneManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaGuardianZoneManager(GorillaGuardianZoneManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2168};

/// [SerializeField]
/// @brief Field zone, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::GTZone  ___zone;

/// [SerializeField]
/// @brief Field guardianSizeChanger, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SizeChanger>  ___guardianSizeChanger;

/// [SerializeField]
/// @brief Field idol, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TappableGuardianIdol>  ___idol;

/// [SerializeField]
/// @brief Field idolPositions, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  ___idolPositions;

/// [Space]
/// [SerializeField]
/// @brief Field requiredActivationTime, offset: 0x48, size: 0x4, def value: None
 float_t  ___requiredActivationTime;

/// [SerializeField]
/// @brief Field activationTimePerTap, offset: 0x4c, size: 0x4, def value: None
 float_t  ___activationTimePerTap;

/// [Space]
/// [SerializeField]
/// @brief Field knockbackIncludesGuardian, offset: 0x50, size: 0x1, def value: None
 bool  ___knockbackIncludesGuardian;

/// [SerializeField]
/// @brief Field idolKnockbackRadius, offset: 0x54, size: 0x4, def value: None
 float_t  ___idolKnockbackRadius;

/// [SerializeField]
/// @brief Field idolKnockbackStrengthVert, offset: 0x58, size: 0x4, def value: None
 float_t  ___idolKnockbackStrengthVert;

/// [SerializeField]
/// @brief Field idolKnockbackStrengthHoriz, offset: 0x5c, size: 0x4, def value: None
 float_t  ___idolKnockbackStrengthHoriz;

/// [Space]
/// [SerializeField]
/// @brief Field PlayerGainGuardianSFX, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___PlayerGainGuardianSFX;

/// [SerializeField]
/// @brief Field PlayerLostGuardianSFX, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___PlayerLostGuardianSFX;

/// [SerializeField]
/// @brief Field ObserverGainGuardianSFX, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___ObserverGainGuardianSFX;

/// @brief Field guardianPlayer, offset: 0x78, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___guardianPlayer;

/// @brief Field _previousGuardian, offset: 0x80, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ____previousGuardian;

/// @brief Field currentIdol, offset: 0x88, size: 0x4, def value: None
 int32_t  ___currentIdol;

/// @brief Field idolMoveCount, offset: 0x8c, size: 0x4, def value: None
 int32_t  ___idolMoveCount;

/// @brief Field _sortedIdolPositions, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  ____sortedIdolPositions;

/// @brief Field _currentActivationTime, offset: 0x98, size: 0x4, def value: None
 float_t  ____currentActivationTime;

/// @brief Field _lastTappedTime, offset: 0x9c, size: 0x4, def value: None
 float_t  ____lastTappedTime;

/// @brief Field _progressing, offset: 0xa0, size: 0x1, def value: None
 bool  ____progressing;

/// @brief Field _idolActivationDisplay, offset: 0xa4, size: 0x4, def value: None
 float_t  ____idolActivationDisplay;

/// @brief Field _zoneIsActive, offset: 0xa8, size: 0x1, def value: None
 bool  ____zoneIsActive;

/// @brief Field _zoneStateChanged, offset: 0xa9, size: 0x1, def value: None
 bool  ____zoneStateChanged;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaGuardianZoneManager, ___zone) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGuardianZoneManager, ___guardianSizeChanger) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGuardianZoneManager, ___idol) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGuardianZoneManager, ___idolPositions) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGuardianZoneManager, ___requiredActivationTime) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGuardianZoneManager, ___activationTimePerTap) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGuardianZoneManager, ___knockbackIncludesGuardian) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGuardianZoneManager, ___idolKnockbackRadius) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGuardianZoneManager, ___idolKnockbackStrengthVert) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGuardianZoneManager, ___idolKnockbackStrengthHoriz) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGuardianZoneManager, ___PlayerGainGuardianSFX) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGuardianZoneManager, ___PlayerLostGuardianSFX) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGuardianZoneManager, ___ObserverGainGuardianSFX) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGuardianZoneManager, ___guardianPlayer) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGuardianZoneManager, ____previousGuardian) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGuardianZoneManager, ___currentIdol) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGuardianZoneManager, ___idolMoveCount) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGuardianZoneManager, ____sortedIdolPositions) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGuardianZoneManager, ____currentActivationTime) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGuardianZoneManager, ____lastTappedTime) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGuardianZoneManager, ____progressing) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGuardianZoneManager, ____idolActivationDisplay) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGuardianZoneManager, ____zoneIsActive) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGuardianZoneManager, ____zoneStateChanged) == 0xa9, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaGuardianZoneManager) == 0xb0, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaGuardianZoneManager/<>c__DisplayClass49_0
class CORDL_TYPE GorillaGuardianZoneManager___c__DisplayClass49_0 : public ::System::Object {
public:
// Declarations
/// @brief Field playerPositions, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerPositions, put=__cordl_internal_set_playerPositions)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  playerPositions;

static inline ::GlobalNamespace::GorillaGuardianZoneManager___c__DisplayClass49_0* New_ctor() ;

/// @brief Method <SortByDistanceToNearestPlayer>g__CompareNearestPlayerDistance|0, addr 0x590d24c, size 0x64, virtual false, abstract: false, final false
inline int32_t _SortByDistanceToNearestPlayer_g__CompareNearestPlayerDistance_0(::UnityEngine::Transform*  idol1, ::UnityEngine::Transform*  idol2) ;

/// @brief Method <SortByDistanceToNearestPlayer>g__GetClosestPlayerSqrDistance|1, addr 0x590d2b0, size 0x170, virtual false, abstract: false, final false
inline float_t _SortByDistanceToNearestPlayer_g__GetClosestPlayerSqrDistance_1(::UnityEngine::Vector3  idolPosition) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get_playerPositions() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get_playerPositions() ;

constexpr void __cordl_internal_set_playerPositions(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

/// @brief Method .ctor, addr 0x590c8b4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaGuardianZoneManager___c__DisplayClass49_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaGuardianZoneManager___c__DisplayClass49_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaGuardianZoneManager___c__DisplayClass49_0(GorillaGuardianZoneManager___c__DisplayClass49_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaGuardianZoneManager___c__DisplayClass49_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaGuardianZoneManager___c__DisplayClass49_0(GorillaGuardianZoneManager___c__DisplayClass49_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2167};

/// @brief Field playerPositions, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  ___playerPositions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaGuardianZoneManager___c__DisplayClass49_0, ___playerPositions) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaGuardianZoneManager___c__DisplayClass49_0) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
