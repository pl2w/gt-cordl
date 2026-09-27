#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadget.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__SIExclusionType_def.hpp"
#include "GlobalNamespace/zzzz__SIGadget_UpgradeVisual_def.hpp"
#include "GlobalNamespace/zzzz__SITechTreePageId_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SIGadget)
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
class IGameActivatable;
}
namespace GlobalNamespace {
class IGameEntityComponent;
}
namespace GlobalNamespace {
class IGameStateProvider;
}
namespace GlobalNamespace {
class IGameStateReceiver;
}
namespace GlobalNamespace {
class IPrefabRequirements;
}
namespace GlobalNamespace {
struct SIExclusionType;
}
namespace GlobalNamespace {
class SIExclusionZone;
}
namespace GlobalNamespace {
struct SIGadget_UpgradeVisual;
}
namespace GlobalNamespace {
struct SITechTreePageId;
}
namespace GlobalNamespace {
struct SIUpgradeSet;
}
namespace GlobalNamespace {
class VRRig;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class SIGadget;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIGadget*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIGadget*, "", "SIGadget");
// [RequireComponent(typeof(GameEntity))]
// Dependencies GameEntity, SIExclusionType, SIGadget::UpgradeVisual, SITechTreePageId, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIGadget
class CORDL_TYPE SIGadget : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using UpgradeVisual = ::GlobalNamespace::SIGadget_UpgradeVisual;

/// @brief Field OnPostRefreshVisuals, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPostRefreshVisuals, put=__cordl_internal_set_OnPostRefreshVisuals)) ::System::Action_1<::GlobalNamespace::SIUpgradeSet>*  OnPostRefreshVisuals;

 __declspec(property(get=get_PageId, put=set_PageId)) ::GlobalNamespace::SITechTreePageId  PageId;

 __declspec(property(get=get_RequiredPrefabs)) ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::GameEntity>>*  RequiredPrefabs;

/// @brief Field UpgradeBasedVisuals, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_UpgradeBasedVisuals, put=__cordl_internal_set_UpgradeBasedVisuals)) ::ArrayW<::GlobalNamespace::SIGadget_UpgradeVisual>  UpgradeBasedVisuals;

/// @brief Field _activeExclusionFlags, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__activeExclusionFlags, put=__cordl_internal_set__activeExclusionFlags)) ::GlobalNamespace::SIExclusionType  _activeExclusionFlags;

/// @brief Field _gameStateReceivers, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__gameStateReceivers, put=__cordl_internal_set__gameStateReceivers)) ::System::Collections::Generic::List_1<::GlobalNamespace::IGameStateReceiver*>*  _gameStateReceivers;

/// @brief Field activatedLocally, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_activatedLocally, put=__cordl_internal_set_activatedLocally)) bool  activatedLocally;

/// @brief Field additionalRequiredPrefabs, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_additionalRequiredPrefabs, put=__cordl_internal_set_additionalRequiredPrefabs)) ::ArrayW<::UnityW<::GlobalNamespace::GameEntity>>  additionalRequiredPrefabs;

/// @brief Field appliedExclusionZones, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_appliedExclusionZones, put=__cordl_internal_set_appliedExclusionZones)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIExclusionZone>>*  appliedExclusionZones;

/// @brief Field didApplyId, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_didApplyId, put=__cordl_internal_set_didApplyId)) bool  didApplyId;

/// @brief Field gameEntity, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameEntity, put=__cordl_internal_set_gameEntity)) ::UnityW<::GlobalNamespace::GameEntity>  gameEntity;

/// @brief Field isSleeping, offset 0x35, size 0x1 
 __declspec(property(get=__cordl_internal_get_isSleeping, put=__cordl_internal_set_isSleeping)) bool  isSleeping;

/// @brief Field pageId, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_pageId, put=__cordl_internal_set_pageId)) ::GlobalNamespace::SITechTreePageId  pageId;

/// @brief Field shouldSleep, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_shouldSleep, put=__cordl_internal_set_shouldSleep)) bool  shouldSleep;

/// @brief Field sleepTime, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_sleepTime, put=__cordl_internal_set_sleepTime)) float_t  sleepTime;

/// @brief Field timeReleased, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeReleased, put=__cordl_internal_set_timeReleased)) float_t  timeReleased;

/// @brief Field uniqueId, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_uniqueId, put=setStaticF_uniqueId)) int32_t  uniqueId;

/// @brief Convert operator to "::GlobalNamespace::IGameActivatable"
constexpr operator  ::GlobalNamespace::IGameActivatable*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IGameEntityComponent"
constexpr operator  ::GlobalNamespace::IGameEntityComponent*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IGameStateProvider"
constexpr operator  ::GlobalNamespace::IGameStateProvider*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IPrefabRequirements"
constexpr operator  ::GlobalNamespace::IPrefabRequirements*() noexcept;

/// @brief Method ApplyExclusionZone, addr 0x58ddf20, size 0x114, virtual false, abstract: false, final false
inline void ApplyExclusionZone(::GlobalNamespace::SIExclusionZone*  exclusionZone) ;

/// @brief Method ApplyUpgradeNodes, addr 0x58dc5e4, size 0x4, virtual true, abstract: false, final false
inline void ApplyUpgradeNodes(::GlobalNamespace::SIUpgradeSet  withUpgrades) ;

/// @brief Method FilterUpgradeNodes, addr 0x58dc5dc, size 0x8, virtual true, abstract: false, final false
inline ::GlobalNamespace::SIUpgradeSet FilterUpgradeNodes(::GlobalNamespace::SIUpgradeSet  upgrades) ;

/// @brief Method FindAttachedHand, addr 0x58d627c, size 0x80, virtual false, abstract: false, final false
inline bool FindAttachedHand(::by_ref<bool>  isLeft) ;

/// @brief Method GetAttachedPlayerRig, addr 0x58d847c, size 0x54, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::VRRig> GetAttachedPlayerRig() ;

/// @brief Method GetJoystickInput, addr 0x58dc414, size 0x94, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetJoystickInput() ;

/// @brief Method GrabInitialization, addr 0x58dcf00, size 0x184, virtual false, abstract: false, final false
inline void GrabInitialization() ;

/// @brief Method HandleBlockedActionChanged, addr 0x58de194, size 0x4, virtual true, abstract: false, final false
inline void HandleBlockedActionChanged(bool  isBlocked) ;

/// @brief Method IGameStateProvider.GameStateReceiverRegister, addr 0x58de198, size 0xac, virtual true, abstract: false, final true
inline void IGameStateProvider_GameStateReceiverRegister(::GlobalNamespace::IGameStateReceiver*  receiver) ;

/// @brief Method IGameStateProvider.GameStateReceiverUnregister, addr 0x58de244, size 0x58, virtual true, abstract: false, final true
inline void IGameStateProvider_GameStateReceiverUnregister(::GlobalNamespace::IGameStateReceiver*  receiver) ;

/// @brief Method IsBlocked, addr 0x58de188, size 0xc, virtual false, abstract: false, final false
inline bool IsBlocked() ;

/// @brief Method IsBlocked, addr 0x58d61e8, size 0x10, virtual false, abstract: false, final false
inline bool IsBlocked(::GlobalNamespace::SIExclusionType  flag) ;

/// @brief Method IsEquippedLocal, addr 0x58dc3d4, size 0x40, virtual true, abstract: false, final false
inline bool IsEquippedLocal() ;

/// @brief Method LeaveAllExclusionZones, addr 0x58dcd44, size 0x1bc, virtual false, abstract: false, final false
inline void LeaveAllExclusionZones() ;

/// @brief Method LeaveExclusionZone, addr 0x58de034, size 0xb8, virtual false, abstract: false, final false
inline void LeaveExclusionZone(::GlobalNamespace::SIExclusionZone*  exclusionZone) ;

static inline ::GlobalNamespace::SIGadget* New_ctor() ;

/// @brief Method OnDisable, addr 0x58dcaf0, size 0x254, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x58dc7c8, size 0x328, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnEntityDestroy, addr 0x58dd21c, size 0x4, virtual true, abstract: false, final false
inline void OnEntityDestroy() ;

/// @brief Method OnEntityInit, addr 0x58dd218, size 0x4, virtual true, abstract: false, final false
inline void OnEntityInit() ;

/// @brief Method OnEntityStateChange, addr 0x58dd220, size 0x1b4, virtual true, abstract: false, final false
inline void OnEntityStateChange(int64_t  prevState, int64_t  newState) ;

/// @brief Method OnUpdateAuthority, addr 0x58dc338, size 0x4, virtual true, abstract: false, final false
inline void OnUpdateAuthority(float_t  dt) ;

/// @brief Method OnUpdateRemote, addr 0x58d6070, size 0x4, virtual true, abstract: false, final false
inline void OnUpdateRemote(float_t  dt) ;

/// @brief Method ProcessAuthorityToClientRPC, addr 0x58dd3d8, size 0x4, virtual true, abstract: false, final false
inline void ProcessAuthorityToClientRPC(::Photon::Pun::PhotonMessageInfo  info, int32_t  rpcID, ::ArrayW<::System::Object*>  data) ;

/// @brief Method ProcessClientToAuthorityRPC, addr 0x58dd3d4, size 0x4, virtual true, abstract: false, final false
inline void ProcessClientToAuthorityRPC(::Photon::Pun::PhotonMessageInfo  info, int32_t  rpcID, ::ArrayW<::System::Object*>  data) ;

/// @brief Method ProcessClientToClientRPC, addr 0x58dd3dc, size 0x4, virtual true, abstract: false, final false
inline void ProcessClientToClientRPC(::Photon::Pun::PhotonMessageInfo  info, int32_t  rpcID, ::ArrayW<::System::Object*>  data) ;

/// @brief Method RecalcExclusionFlags, addr 0x58de0ec, size 0x9c, virtual false, abstract: false, final false
inline void RecalcExclusionFlags() ;

/// @brief Method RefreshUpgradeVisuals, addr 0x58dc5e8, size 0xc0, virtual true, abstract: false, final false
inline void RefreshUpgradeVisuals(::GlobalNamespace::SIUpgradeSet  withUpgrades) ;

/// @brief Method ReleaseInitialization, addr 0x58dd084, size 0x194, virtual false, abstract: false, final false
inline void ReleaseInitialization() ;

/// @brief Method SendAuthorityToClientRPC, addr 0x58dd7a0, size 0x1c4, virtual false, abstract: false, final false
inline void SendAuthorityToClientRPC(int32_t  rpcID) ;

/// @brief Method SendAuthorityToClientRPC, addr 0x58dd964, size 0x1fc, virtual false, abstract: false, final false
inline void SendAuthorityToClientRPC(int32_t  rpcID, ::ArrayW<::System::Object*>  data) ;

/// @brief Method SendClientToAuthorityRPC, addr 0x58dd3e0, size 0x1c4, virtual false, abstract: false, final false
inline void SendClientToAuthorityRPC(int32_t  rpcID) ;

/// @brief Method SendClientToAuthorityRPC, addr 0x58dd5a4, size 0x1fc, virtual false, abstract: false, final false
inline void SendClientToAuthorityRPC(int32_t  rpcID, ::ArrayW<::System::Object*>  data) ;

/// @brief Method SendClientToClientRPC, addr 0x58ddb60, size 0x1c4, virtual false, abstract: false, final false
inline void SendClientToClientRPC(int32_t  rpcID) ;

/// @brief Method SendClientToClientRPC, addr 0x58ddd24, size 0x1fc, virtual false, abstract: false, final false
inline void SendClientToClientRPC(int32_t  rpcID, ::ArrayW<::System::Object*>  data) ;

/// @brief Method ShouldProcessInput, addr 0x58dc4a8, size 0x134, virtual false, abstract: false, final false
inline bool ShouldProcessInput() ;

/// @brief Method SleepAfterDelay, addr 0x58dc33c, size 0x98, virtual false, abstract: false, final false
inline void SleepAfterDelay() ;

/// @brief Method Update, addr 0x58dc278, size 0xc0, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::System::Action_1<::GlobalNamespace::SIUpgradeSet>* const& __cordl_internal_get_OnPostRefreshVisuals() const;

constexpr ::System::Action_1<::GlobalNamespace::SIUpgradeSet>*& __cordl_internal_get_OnPostRefreshVisuals() ;

constexpr ::ArrayW<::GlobalNamespace::SIGadget_UpgradeVisual> const& __cordl_internal_get_UpgradeBasedVisuals() const;

constexpr ::ArrayW<::GlobalNamespace::SIGadget_UpgradeVisual>& __cordl_internal_get_UpgradeBasedVisuals() ;

constexpr ::GlobalNamespace::SIExclusionType const& __cordl_internal_get__activeExclusionFlags() const;

constexpr ::GlobalNamespace::SIExclusionType& __cordl_internal_get__activeExclusionFlags() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IGameStateReceiver*>* const& __cordl_internal_get__gameStateReceivers() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IGameStateReceiver*>*& __cordl_internal_get__gameStateReceivers() ;

constexpr bool const& __cordl_internal_get_activatedLocally() const;

constexpr bool& __cordl_internal_get_activatedLocally() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GameEntity>> const& __cordl_internal_get_additionalRequiredPrefabs() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GameEntity>>& __cordl_internal_get_additionalRequiredPrefabs() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIExclusionZone>>* const& __cordl_internal_get_appliedExclusionZones() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIExclusionZone>>*& __cordl_internal_get_appliedExclusionZones() ;

constexpr bool const& __cordl_internal_get_didApplyId() const;

constexpr bool& __cordl_internal_get_didApplyId() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_gameEntity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_gameEntity() ;

constexpr bool const& __cordl_internal_get_isSleeping() const;

constexpr bool& __cordl_internal_get_isSleeping() ;

constexpr ::GlobalNamespace::SITechTreePageId const& __cordl_internal_get_pageId() const;

constexpr ::GlobalNamespace::SITechTreePageId& __cordl_internal_get_pageId() ;

constexpr bool const& __cordl_internal_get_shouldSleep() const;

constexpr bool& __cordl_internal_get_shouldSleep() ;

constexpr float_t const& __cordl_internal_get_sleepTime() const;

constexpr float_t& __cordl_internal_get_sleepTime() ;

constexpr float_t const& __cordl_internal_get_timeReleased() const;

constexpr float_t& __cordl_internal_get_timeReleased() ;

constexpr void __cordl_internal_set_OnPostRefreshVisuals(::System::Action_1<::GlobalNamespace::SIUpgradeSet>*  value) ;

constexpr void __cordl_internal_set_UpgradeBasedVisuals(::ArrayW<::GlobalNamespace::SIGadget_UpgradeVisual>  value) ;

constexpr void __cordl_internal_set__activeExclusionFlags(::GlobalNamespace::SIExclusionType  value) ;

constexpr void __cordl_internal_set__gameStateReceivers(::System::Collections::Generic::List_1<::GlobalNamespace::IGameStateReceiver*>*  value) ;

constexpr void __cordl_internal_set_activatedLocally(bool  value) ;

constexpr void __cordl_internal_set_additionalRequiredPrefabs(::ArrayW<::UnityW<::GlobalNamespace::GameEntity>>  value) ;

constexpr void __cordl_internal_set_appliedExclusionZones(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIExclusionZone>>*  value) ;

constexpr void __cordl_internal_set_didApplyId(bool  value) ;

constexpr void __cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_isSleeping(bool  value) ;

constexpr void __cordl_internal_set_pageId(::GlobalNamespace::SITechTreePageId  value) ;

constexpr void __cordl_internal_set_shouldSleep(bool  value) ;

constexpr void __cordl_internal_set_sleepTime(float_t  value) ;

constexpr void __cordl_internal_set_timeReleased(float_t  value) ;

/// @brief Method .ctor, addr 0x58d64a4, size 0xec, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_uniqueId() ;

/// @brief Method get_PageId, addr 0x58dc260, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::SITechTreePageId get_PageId() ;

/// @brief Method get_RequiredPrefabs, addr 0x58dc270, size 0x8, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::GameEntity>>* get_RequiredPrefabs() ;

/// @brief Convert to "::GlobalNamespace::IGameActivatable"
constexpr ::GlobalNamespace::IGameActivatable* i___GlobalNamespace__IGameActivatable() noexcept;

/// @brief Convert to "::GlobalNamespace::IGameEntityComponent"
constexpr ::GlobalNamespace::IGameEntityComponent* i___GlobalNamespace__IGameEntityComponent() noexcept;

/// @brief Convert to "::GlobalNamespace::IGameStateProvider"
constexpr ::GlobalNamespace::IGameStateProvider* i___GlobalNamespace__IGameStateProvider() noexcept;

/// @brief Convert to "::GlobalNamespace::IPrefabRequirements"
constexpr ::GlobalNamespace::IPrefabRequirements* i___GlobalNamespace__IPrefabRequirements() noexcept;

static inline void setStaticF_uniqueId(int32_t  value) ;

/// @brief Method set_PageId, addr 0x58dc268, size 0x8, virtual false, abstract: false, final false
inline void set_PageId(::GlobalNamespace::SITechTreePageId  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIGadget() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIGadget", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIGadget(SIGadget && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIGadget", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIGadget(SIGadget const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{257};

/// @brief Field gameEntity, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___gameEntity;

/// [Tooltip("Add additional required prefabs here.  These will be automatically added to the GameEntityManager factory.")]
/// @brief Field additionalRequiredPrefabs, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::GameEntity>>  ___additionalRequiredPrefabs;

/// @brief Field sleepTime, offset: 0x30, size: 0x4, def value: None
 float_t  ___sleepTime;

/// @brief Field shouldSleep, offset: 0x34, size: 0x1, def value: None
 bool  ___shouldSleep;

/// @brief Field isSleeping, offset: 0x35, size: 0x1, def value: None
 bool  ___isSleeping;

/// @brief Field timeReleased, offset: 0x38, size: 0x4, def value: None
 float_t  ___timeReleased;

/// @brief Field activatedLocally, offset: 0x3c, size: 0x1, def value: None
 bool  ___activatedLocally;

/// [SerializeField]
/// @brief Field pageId, offset: 0x40, size: 0x4, def value: None
 ::GlobalNamespace::SITechTreePageId  ___pageId;

/// @brief Field OnPostRefreshVisuals, offset: 0x48, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::SIUpgradeSet>*  ___OnPostRefreshVisuals;

/// @brief Field didApplyId, offset: 0x50, size: 0x1, def value: None
 bool  ___didApplyId;

/// [SerializeField]
/// @brief Field UpgradeBasedVisuals, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::SIGadget_UpgradeVisual>  ___UpgradeBasedVisuals;

/// @brief Field appliedExclusionZones, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIExclusionZone>>*  ___appliedExclusionZones;

/// @brief Field _activeExclusionFlags, offset: 0x68, size: 0x4, def value: None
 ::GlobalNamespace::SIExclusionType  ____activeExclusionFlags;

/// @brief Field _gameStateReceivers, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::IGameStateReceiver*>*  ____gameStateReceivers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIGadget, ___gameEntity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadget, ___additionalRequiredPrefabs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadget, ___sleepTime) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadget, ___shouldSleep) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadget, ___isSleeping) == 0x35, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadget, ___timeReleased) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadget, ___activatedLocally) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadget, ___pageId) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadget, ___OnPostRefreshVisuals) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadget, ___didApplyId) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadget, ___UpgradeBasedVisuals) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadget, ___appliedExclusionZones) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadget, ____activeExclusionFlags) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadget, ____gameStateReceivers) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIGadget) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
