#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerCosmeticsSystem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TimeSince_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerCosmeticsSystem)
namespace GlobalNamespace {
class ITickSystemPre;
}
namespace GlobalNamespace {
class IUserCosmeticsCallback;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class PlayerCosmeticsSystem_SharedSubscriptionData;
}
namespace GlobalNamespace {
class PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21;
}
namespace GlobalNamespace {
class PlayerCosmeticsSystem___c;
}
namespace GlobalNamespace {
class PlayerCosmeticsSystem___c__DisplayClass21_0;
}
namespace GlobalNamespace {
class PlayerCosmeticsSystem___c__DisplayClass21_1;
}
namespace GlobalNamespace {
class RigContainer;
}
namespace GlobalNamespace {
class VRRig;
}
namespace PlayFab::ClientModels {
class GetSharedGroupDataResult;
}
namespace PlayFab {
class PlayFabError;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerCosmeticsSystem;
}
namespace GlobalNamespace {
class PlayerCosmeticsSystem_SharedSubscriptionData;
}
namespace GlobalNamespace {
class PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21;
}
namespace GlobalNamespace {
class PlayerCosmeticsSystem___c;
}
namespace GlobalNamespace {
class PlayerCosmeticsSystem___c__DisplayClass21_0;
}
namespace GlobalNamespace {
class PlayerCosmeticsSystem___c__DisplayClass21_1;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerCosmeticsSystem*);
MARK_REF_T(::GlobalNamespace::PlayerCosmeticsSystem_SharedSubscriptionData*);
MARK_REF_T(::GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21*);
MARK_REF_T(::GlobalNamespace::PlayerCosmeticsSystem___c*);
MARK_REF_T(::GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_0*);
MARK_REF_T(::GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_1*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerCosmeticsSystem*, "", "PlayerCosmeticsSystem");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerCosmeticsSystem_SharedSubscriptionData*, "", "PlayerCosmeticsSystem/SharedSubscriptionData");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21*, "", "PlayerCosmeticsSystem/<NewCosmeticsPathCoroutine>d__21");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerCosmeticsSystem___c*, "", "PlayerCosmeticsSystem/<>c");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_0*, "", "PlayerCosmeticsSystem/<>c__DisplayClass21_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_1*, "", "PlayerCosmeticsSystem/<>c__DisplayClass21_1");
// Dependencies TimeSince, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerCosmeticsSystem
class CORDL_TYPE PlayerCosmeticsSystem : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using SharedSubscriptionData = ::GlobalNamespace::PlayerCosmeticsSystem_SharedSubscriptionData;

using _NewCosmeticsPathCoroutine_d__21 = ::GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21;

using __c = ::GlobalNamespace::PlayerCosmeticsSystem___c;

using __c__DisplayClass21_0 = ::GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_0;

using __c__DisplayClass21_1 = ::GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_1;

 __declspec(property(get=ITickSystemPre_get_PreTickRunning, put=ITickSystemPre_set_PreTickRunning)) bool  ITickSystemPre_PreTickRunning;

/// @brief Field <ITickSystemPre.PreTickRunning>k__BackingField, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__ITickSystemPre_PreTickRunning_k__BackingField, put=__cordl_internal_set__ITickSystemPre_PreTickRunning_k__BackingField)) bool  _ITickSystemPre_PreTickRunning_k__BackingField;

/// @brief Field <TempUnlockCosmeticString>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__TempUnlockCosmeticString_k__BackingField, put=setStaticF__TempUnlockCosmeticString_k__BackingField)) ::ArrayW<::StringW>  _TempUnlockCosmeticString_k__BackingField;

/// @brief Field <TempUnlocksEnabled>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__TempUnlocksEnabled_k__BackingField, put=setStaticF__TempUnlocksEnabled_k__BackingField)) bool  _TempUnlocksEnabled_k__BackingField;

/// @brief Field getSharedGroupDataCooldown, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_getSharedGroupDataCooldown, put=__cordl_internal_set_getSharedGroupDataCooldown)) float_t  getSharedGroupDataCooldown;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::PlayerCosmeticsSystem>  instance;

/// @brief Field inventory, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_inventory, put=__cordl_internal_set_inventory)) ::System::Collections::Generic::List_1<::StringW>*  inventory;

/// @brief Field isLookingUp, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_isLookingUp, put=__cordl_internal_set_isLookingUp)) bool  isLookingUp;

/// @brief Field isLookingUpNew, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get_isLookingUpNew, put=__cordl_internal_set_isLookingUpNew)) bool  isLookingUpNew;

/// @brief Field k_tempUnlockedCosmetics, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_tempUnlockedCosmetics, put=setStaticF_k_tempUnlockedCosmetics)) ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  k_tempUnlockedCosmetics;

/// @brief Field playerActorNumberList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_playerActorNumberList, put=setStaticF_playerActorNumberList)) ::System::Collections::Generic::List_1<int32_t>*  playerActorNumberList;

/// @brief Field playerIDsList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_playerIDsList, put=setStaticF_playerIDsList)) ::System::Collections::Generic::List_1<::StringW>*  playerIDsList;

/// @brief Field playerLookUpCooldown, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_playerLookUpCooldown, put=__cordl_internal_set_playerLookUpCooldown)) float_t  playerLookUpCooldown;

/// @brief Field playerTemp, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerTemp, put=__cordl_internal_set_playerTemp)) ::GlobalNamespace::NetPlayer*  playerTemp;

/// @brief Field playersToLookUp, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_playersToLookUp, put=setStaticF_playersToLookUp)) ::System::Collections::Generic::Queue_1<::GlobalNamespace::NetPlayer*>*  playersToLookUp;

/// @brief Field playersWaiting, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_playersWaiting, put=setStaticF_playersWaiting)) ::System::Collections::Generic::List_1<int32_t>*  playersWaiting;

/// @brief Field sinceLastTryOnEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_sinceLastTryOnEvent, put=setStaticF_sinceLastTryOnEvent)) ::GlobalNamespace::TimeSince  sinceLastTryOnEvent;

/// @brief Field startSearchingTime, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_startSearchingTime, put=__cordl_internal_set_startSearchingTime)) float_t  startSearchingTime;

/// @brief Field subscriptionKey, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_subscriptionKey, put=setStaticF_subscriptionKey)) ::StringW  subscriptionKey;

/// @brief Field tempCosmetics, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_tempCosmetics, put=__cordl_internal_set_tempCosmetics)) ::StringW  tempCosmetics;

/// @brief Field tempRC, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_tempRC, put=__cordl_internal_set_tempRC)) ::UnityW<::GlobalNamespace::RigContainer>  tempRC;

/// @brief Field userCosmeticCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_userCosmeticCallback, put=setStaticF_userCosmeticCallback)) ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::IUserCosmeticsCallback*>*  userCosmeticCallback;

/// @brief Field userCosmeticsWaiting, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_userCosmeticsWaiting, put=setStaticF_userCosmeticsWaiting)) ::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*  userCosmeticsWaiting;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemPre"
constexpr operator  ::GlobalNamespace::ITickSystemPre*() noexcept;

/// @brief Method Awake, addr 0x5ac7390, size 0x300, virtual false, abstract: false, final false
inline void Awake() ;

/// [CompilerGenerated]
/// @brief Method ITickSystemPre.get_PreTickRunning, addr 0x5ac7380, size 0x8, virtual true, abstract: false, final true
inline bool ITickSystemPre_get_PreTickRunning() ;

/// [CompilerGenerated]
/// @brief Method ITickSystemPre.set_PreTickRunning, addr 0x5ac7388, size 0x8, virtual true, abstract: false, final true
inline void ITickSystemPre_set_PreTickRunning(bool  value) ;

/// @brief Method IsTemporaryCosmeticAllowed, addr 0x5ac9904, size 0xe8, virtual false, abstract: false, final false
static inline bool IsTemporaryCosmeticAllowed(::GlobalNamespace::VRRig*  rigRef, ::StringW  cosmeticId) ;

/// @brief Method LocalIsTemporaryCosmetic, addr 0x5ac99ec, size 0xf4, virtual false, abstract: false, final false
static inline bool LocalIsTemporaryCosmetic(::StringW  cosmeticId) ;

/// @brief Method LocalPlayerInTemporaryCosmeticSpace, addr 0x5ac9ae0, size 0xa4, virtual false, abstract: false, final false
static inline bool LocalPlayerInTemporaryCosmeticSpace() ;

/// @brief Method LockTemporaryCosmeticGlobal, addr 0x5ac978c, size 0x178, virtual false, abstract: false, final false
static inline void LockTemporaryCosmeticGlobal(::StringW  cosmeticId) ;

/// @brief Method LockTemporaryCosmeticsForPlayer, addr 0x5ac9308, size 0x90, virtual false, abstract: false, final false
static inline void LockTemporaryCosmeticsForPlayer(::GlobalNamespace::RigContainer*  rigRef) ;

/// @brief Method LockTemporaryCosmeticsForPlayer, addr 0x5ac8e10, size 0x468, virtual false, abstract: false, final false
static inline void LockTemporaryCosmeticsForPlayer(::GlobalNamespace::RigContainer*  rigRef, ::System::Collections::Generic::IReadOnlyList_1<::StringW>*  cosmeticIds) ;

/// @brief Method LockTemporaryCosmeticsGlobal, addr 0x5ac961c, size 0x170, virtual false, abstract: false, final false
static inline void LockTemporaryCosmeticsGlobal(::System::Collections::Generic::IReadOnlyList_1<::StringW>*  cosmeticIds) ;

/// @brief Method LookUpPlayerCosmetics, addr 0x5ac7940, size 0xa0, virtual false, abstract: false, final false
inline void LookUpPlayerCosmetics(bool  wait) ;

/// @brief Method NewCosmeticsPath, addr 0x5ac7ae4, size 0x2c, virtual false, abstract: false, final false
inline void NewCosmeticsPath() ;

/// [IteratorStateMachine(typeof(PlayerCosmeticsSystem::<NewCosmeticsPathCoroutine>d__21))]
/// @brief Method NewCosmeticsPathCoroutine, addr 0x5ac7b10, size 0x74, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* NewCosmeticsPathCoroutine() ;

static inline ::GlobalNamespace::PlayerCosmeticsSystem* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5ac787c, size 0xc4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnNetEvent, addr 0x5ac7b84, size 0x160, virtual false, abstract: false, final false
inline void OnNetEvent(uint8_t  code, ::System::Object*  data, int32_t  source) ;

/// @brief Method PreTick, addr 0x5ac79e0, size 0x104, virtual true, abstract: false, final true
inline void PreTick() ;

/// @brief Method RegisterCosmeticCallback, addr 0x5ac80b8, size 0x1f0, virtual false, abstract: false, final false
static inline void RegisterCosmeticCallback(int32_t  playerID, ::GlobalNamespace::IUserCosmeticsCallback*  callback) ;

/// @brief Method RemoveCosmeticCallback, addr 0x5ac82a8, size 0xd0, virtual false, abstract: false, final false
static inline void RemoveCosmeticCallback(int32_t  playerID) ;

/// @brief Method SetRigTemporarySpace, addr 0x5ac8890, size 0x118, virtual false, abstract: false, final false
static inline void SetRigTemporarySpace(bool  enteringSpace, ::GlobalNamespace::RigContainer*  rigRef, ::System::Collections::Generic::IReadOnlyList_1<::StringW>*  cosmeticIds) ;

/// @brief Method SetRigTryOn, addr 0x5ac8660, size 0x230, virtual false, abstract: false, final false
static inline void SetRigTryOn(bool  inTryon, ::GlobalNamespace::RigContainer*  rigRefg) ;

/// @brief Method Start, addr 0x5ac7690, size 0x1ec, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method StaticReset, addr 0x5ac9b84, size 0x13c, virtual false, abstract: false, final false
static inline void StaticReset() ;

/// @brief Method UnlockTemporaryCosmeticGlobal, addr 0x5ac9508, size 0x114, virtual false, abstract: false, final false
static inline void UnlockTemporaryCosmeticGlobal(::StringW  cosmeticId) ;

/// @brief Method UnlockTemporaryCosmeticsForPlayer, addr 0x5ac9278, size 0x90, virtual false, abstract: false, final false
static inline void UnlockTemporaryCosmeticsForPlayer(::GlobalNamespace::RigContainer*  rigRef) ;

/// @brief Method UnlockTemporaryCosmeticsForPlayer, addr 0x5ac89a8, size 0x468, virtual false, abstract: false, final false
static inline void UnlockTemporaryCosmeticsForPlayer(::GlobalNamespace::RigContainer*  rigRef, ::System::Collections::Generic::IReadOnlyList_1<::StringW>*  cosmeticIds) ;

/// @brief Method UnlockTemporaryCosmeticsGlobal, addr 0x5ac9398, size 0x170, virtual false, abstract: false, final false
static inline void UnlockTemporaryCosmeticsGlobal(::System::Collections::Generic::IReadOnlyList_1<::StringW>*  cosmeticIds) ;

/// @brief Method UpdatePlayerCosmetics, addr 0x5ac7ce4, size 0x1b0, virtual false, abstract: false, final false
static inline void UpdatePlayerCosmetics(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method UpdatePlayerCosmetics, addr 0x5ac8378, size 0x2e8, virtual false, abstract: false, final false
static inline void UpdatePlayerCosmetics(::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  players) ;

constexpr bool const& __cordl_internal_get__ITickSystemPre_PreTickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__ITickSystemPre_PreTickRunning_k__BackingField() ;

constexpr float_t const& __cordl_internal_get_getSharedGroupDataCooldown() const;

constexpr float_t& __cordl_internal_get_getSharedGroupDataCooldown() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_inventory() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_inventory() ;

constexpr bool const& __cordl_internal_get_isLookingUp() const;

constexpr bool& __cordl_internal_get_isLookingUp() ;

constexpr bool const& __cordl_internal_get_isLookingUpNew() const;

constexpr bool& __cordl_internal_get_isLookingUpNew() ;

constexpr float_t const& __cordl_internal_get_playerLookUpCooldown() const;

constexpr float_t& __cordl_internal_get_playerLookUpCooldown() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_playerTemp() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_playerTemp() ;

constexpr float_t const& __cordl_internal_get_startSearchingTime() const;

constexpr float_t& __cordl_internal_get_startSearchingTime() ;

constexpr ::StringW const& __cordl_internal_get_tempCosmetics() const;

constexpr ::StringW& __cordl_internal_get_tempCosmetics() ;

constexpr ::UnityW<::GlobalNamespace::RigContainer> const& __cordl_internal_get_tempRC() const;

constexpr ::UnityW<::GlobalNamespace::RigContainer>& __cordl_internal_get_tempRC() ;

constexpr void __cordl_internal_set__ITickSystemPre_PreTickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_getSharedGroupDataCooldown(float_t  value) ;

constexpr void __cordl_internal_set_inventory(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_isLookingUp(bool  value) ;

constexpr void __cordl_internal_set_isLookingUpNew(bool  value) ;

constexpr void __cordl_internal_set_playerLookUpCooldown(float_t  value) ;

constexpr void __cordl_internal_set_playerTemp(::GlobalNamespace::NetPlayer*  value) ;

constexpr void __cordl_internal_set_startSearchingTime(float_t  value) ;

constexpr void __cordl_internal_set_tempCosmetics(::StringW  value) ;

constexpr void __cordl_internal_set_tempRC(::UnityW<::GlobalNamespace::RigContainer>  value) ;

/// @brief Method .ctor, addr 0x5ac9cc0, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::StringW> getStaticF__TempUnlockCosmeticString_k__BackingField() ;

static inline bool getStaticF__TempUnlocksEnabled_k__BackingField() ;

static inline ::UnityW<::GlobalNamespace::PlayerCosmeticsSystem> getStaticF_instance() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* getStaticF_k_tempUnlockedCosmetics() ;

static inline ::System::Collections::Generic::List_1<int32_t>* getStaticF_playerActorNumberList() ;

static inline ::System::Collections::Generic::List_1<::StringW>* getStaticF_playerIDsList() ;

static inline ::System::Collections::Generic::Queue_1<::GlobalNamespace::NetPlayer*>* getStaticF_playersToLookUp() ;

static inline ::System::Collections::Generic::List_1<int32_t>* getStaticF_playersWaiting() ;

static inline ::GlobalNamespace::TimeSince getStaticF_sinceLastTryOnEvent() ;

static inline ::StringW getStaticF_subscriptionKey() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::IUserCosmeticsCallback*>* getStaticF_userCosmeticCallback() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::StringW>* getStaticF_userCosmeticsWaiting() ;

/// [CompilerGenerated]
/// @brief Method get_TempUnlockCosmeticString, addr 0x5ac8000, size 0x58, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> get_TempUnlockCosmeticString() ;

/// [CompilerGenerated]
/// @brief Method get_TempUnlocksEnabled, addr 0x5ac7f48, size 0x58, virtual false, abstract: false, final false
static inline bool get_TempUnlocksEnabled() ;

/// @brief Method get_nullInstance, addr 0x5ac7e94, size 0xb4, virtual false, abstract: false, final false
static inline bool get_nullInstance() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemPre"
constexpr ::GlobalNamespace::ITickSystemPre* i___GlobalNamespace__ITickSystemPre() noexcept;

static inline void setStaticF__TempUnlockCosmeticString_k__BackingField(::ArrayW<::StringW>  value) ;

static inline void setStaticF__TempUnlocksEnabled_k__BackingField(bool  value) ;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::PlayerCosmeticsSystem>  value) ;

static inline void setStaticF_k_tempUnlockedCosmetics(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value) ;

static inline void setStaticF_playerActorNumberList(::System::Collections::Generic::List_1<int32_t>*  value) ;

static inline void setStaticF_playerIDsList(::System::Collections::Generic::List_1<::StringW>*  value) ;

static inline void setStaticF_playersToLookUp(::System::Collections::Generic::Queue_1<::GlobalNamespace::NetPlayer*>*  value) ;

static inline void setStaticF_playersWaiting(::System::Collections::Generic::List_1<int32_t>*  value) ;

static inline void setStaticF_sinceLastTryOnEvent(::GlobalNamespace::TimeSince  value) ;

static inline void setStaticF_subscriptionKey(::StringW  value) ;

static inline void setStaticF_userCosmeticCallback(::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::IUserCosmeticsCallback*>*  value) ;

static inline void setStaticF_userCosmeticsWaiting(::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_TempUnlockCosmeticString, addr 0x5ac8058, size 0x60, virtual false, abstract: false, final false
static inline void set_TempUnlockCosmeticString(::ArrayW<::StringW>  value) ;

/// [CompilerGenerated]
/// @brief Method set_TempUnlocksEnabled, addr 0x5ac7fa0, size 0x60, virtual false, abstract: false, final false
static inline void set_TempUnlocksEnabled(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerCosmeticsSystem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerCosmeticsSystem", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerCosmeticsSystem(PlayerCosmeticsSystem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerCosmeticsSystem", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerCosmeticsSystem(PlayerCosmeticsSystem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3386};

/// @brief Field inventoryKey offset 0xffffffff size 0x8
static constexpr ::ConstString  inventoryKey{u"InventoryDict"};

/// [CompilerGenerated]
/// @brief Field <ITickSystemPre.PreTickRunning>k__BackingField, offset: 0x20, size: 0x1, def value: None
 bool  ____ITickSystemPre_PreTickRunning_k__BackingField;

/// @brief Field playerLookUpCooldown, offset: 0x24, size: 0x4, def value: None
 float_t  ___playerLookUpCooldown;

/// @brief Field getSharedGroupDataCooldown, offset: 0x28, size: 0x4, def value: None
 float_t  ___getSharedGroupDataCooldown;

/// @brief Field startSearchingTime, offset: 0x2c, size: 0x4, def value: None
 float_t  ___startSearchingTime;

/// @brief Field isLookingUp, offset: 0x30, size: 0x1, def value: None
 bool  ___isLookingUp;

/// @brief Field isLookingUpNew, offset: 0x31, size: 0x1, def value: None
 bool  ___isLookingUpNew;

/// @brief Field tempCosmetics, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___tempCosmetics;

/// @brief Field playerTemp, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___playerTemp;

/// @brief Field tempRC, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RigContainer>  ___tempRC;

/// @brief Field inventory, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___inventory;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerCosmeticsSystem, ____ITickSystemPre_PreTickRunning_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCosmeticsSystem, ___playerLookUpCooldown) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCosmeticsSystem, ___getSharedGroupDataCooldown) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCosmeticsSystem, ___startSearchingTime) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCosmeticsSystem, ___isLookingUp) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCosmeticsSystem, ___isLookingUpNew) == 0x31, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCosmeticsSystem, ___tempCosmetics) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCosmeticsSystem, ___playerTemp) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCosmeticsSystem, ___tempRC) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCosmeticsSystem, ___inventory) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerCosmeticsSystem) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerCosmeticsSystem/<NewCosmeticsPathCoroutine>d__21
class CORDL_TYPE PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::PlayerCosmeticsSystem>  __4__this;

/// @brief Field <>8__1, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___8__1, put=__cordl_internal_set___8__1)) ::GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_0*  __8__1;

/// @brief Field <i>5__2, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__i_5__2, put=__cordl_internal_set__i_5__2)) int32_t  _i_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5acb020, size 0x6e8, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5acb708, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5acb710, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5acb748, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5acb01c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCosmeticsSystem> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCosmeticsSystem>& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_0* const& __cordl_internal_get___8__1() const;

constexpr ::GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_0*& __cordl_internal_get___8__1() ;

constexpr int32_t const& __cordl_internal_get__i_5__2() const;

constexpr int32_t& __cordl_internal_get__i_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PlayerCosmeticsSystem>  value) ;

constexpr void __cordl_internal_set___8__1(::GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_0*  value) ;

constexpr void __cordl_internal_set__i_5__2(int32_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5acaff4, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21(PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21(PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3385};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCosmeticsSystem>  _____4__this;

/// @brief Field <>8__1, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_0*  _____8__1;

/// @brief Field <i>5__2, offset: 0x30, size: 0x4, def value: None
 int32_t  ____i_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21, _____8__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21, ____i_5__2) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerCosmeticsSystem/<>c__DisplayClass21_1
class CORDL_TYPE PlayerCosmeticsSystem___c__DisplayClass21_1 : public ::System::Object {
public:
// Declarations
/// @brief Field CS$<>8__locals1, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CS$__8__locals1, put=__cordl_internal_set_CS$__8__locals1)) ::GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_0*  CS$__8__locals1;

/// @brief Field j, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_j, put=__cordl_internal_set_j)) int32_t  j;

static inline ::GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_1* New_ctor() ;

/// @brief Method <NewCosmeticsPathCoroutine>b__0, addr 0x5aca4bc, size 0xb38, virtual false, abstract: false, final false
inline void _NewCosmeticsPathCoroutine_b__0(::PlayFab::ClientModels::GetSharedGroupDataResult*  result) ;

constexpr ::GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_0* const& __cordl_internal_get_CS$__8__locals1() const;

constexpr ::GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_0*& __cordl_internal_get_CS$__8__locals1() ;

constexpr int32_t const& __cordl_internal_get_j() const;

constexpr int32_t& __cordl_internal_get_j() ;

constexpr void __cordl_internal_set_CS$__8__locals1(::GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_0*  value) ;

constexpr void __cordl_internal_set_j(int32_t  value) ;

/// @brief Method .ctor, addr 0x5aca4b4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerCosmeticsSystem___c__DisplayClass21_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerCosmeticsSystem___c__DisplayClass21_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerCosmeticsSystem___c__DisplayClass21_1(PlayerCosmeticsSystem___c__DisplayClass21_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerCosmeticsSystem___c__DisplayClass21_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerCosmeticsSystem___c__DisplayClass21_1(PlayerCosmeticsSystem___c__DisplayClass21_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3384};

/// @brief Field j, offset: 0x10, size: 0x4, def value: None
 int32_t  ___j;

/// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_0*  ___CS$__8__locals1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_1, ___j) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_1) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerCosmeticsSystem/<>c__DisplayClass21_0
class CORDL_TYPE PlayerCosmeticsSystem___c__DisplayClass21_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::PlayerCosmeticsSystem>  __4__this;

/// @brief Field player, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_player, put=__cordl_internal_set_player)) ::GlobalNamespace::NetPlayer*  player;

static inline ::GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_0* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCosmeticsSystem> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCosmeticsSystem>& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_player() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_player() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PlayerCosmeticsSystem>  value) ;

constexpr void __cordl_internal_set_player(::GlobalNamespace::NetPlayer*  value) ;

/// @brief Method .ctor, addr 0x5aca4ac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerCosmeticsSystem___c__DisplayClass21_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerCosmeticsSystem___c__DisplayClass21_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerCosmeticsSystem___c__DisplayClass21_0(PlayerCosmeticsSystem___c__DisplayClass21_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerCosmeticsSystem___c__DisplayClass21_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerCosmeticsSystem___c__DisplayClass21_0(PlayerCosmeticsSystem___c__DisplayClass21_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3383};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCosmeticsSystem>  _____4__this;

/// @brief Field player, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___player;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_0, ___player) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_0) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerCosmeticsSystem/<>c
class CORDL_TYPE PlayerCosmeticsSystem___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::PlayerCosmeticsSystem___c*  __9;

/// @brief Field <>9__16_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__16_0, put=setStaticF___9__16_0)) ::System::Action_1<::StringW>*  __9__16_0;

/// @brief Field <>9__16_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__16_1, put=setStaticF___9__16_1)) ::System::Action_1<::PlayFab::PlayFabError*>*  __9__16_1;

/// @brief Field <>9__21_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__21_1, put=setStaticF___9__21_1)) ::System::Action_1<::PlayFab::PlayFabError*>*  __9__21_1;

static inline ::GlobalNamespace::PlayerCosmeticsSystem___c* New_ctor() ;

/// @brief Method <NewCosmeticsPathCoroutine>b__21_1, addr 0x5aca418, size 0x94, virtual false, abstract: false, final false
inline void _NewCosmeticsPathCoroutine_b__21_1(::PlayFab::PlayFabError*  error) ;

/// @brief Method <Start>b__16_0, addr 0x5aca304, size 0x110, virtual false, abstract: false, final false
inline void _Start_b__16_0(::StringW  data) ;

/// @brief Method <Start>b__16_1, addr 0x5aca414, size 0x4, virtual false, abstract: false, final false
inline void _Start_b__16_1(::PlayFab::PlayFabError*  error) ;

/// @brief Method .ctor, addr 0x5aca2fc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::PlayerCosmeticsSystem___c* getStaticF___9() ;

static inline ::System::Action_1<::StringW>* getStaticF___9__16_0() ;

static inline ::System::Action_1<::PlayFab::PlayFabError*>* getStaticF___9__16_1() ;

static inline ::System::Action_1<::PlayFab::PlayFabError*>* getStaticF___9__21_1() ;

static inline void setStaticF___9(::GlobalNamespace::PlayerCosmeticsSystem___c*  value) ;

static inline void setStaticF___9__16_0(::System::Action_1<::StringW>*  value) ;

static inline void setStaticF___9__16_1(::System::Action_1<::PlayFab::PlayFabError*>*  value) ;

static inline void setStaticF___9__21_1(::System::Action_1<::PlayFab::PlayFabError*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerCosmeticsSystem___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerCosmeticsSystem___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerCosmeticsSystem___c(PlayerCosmeticsSystem___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerCosmeticsSystem___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerCosmeticsSystem___c(PlayerCosmeticsSystem___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3382};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::PlayerCosmeticsSystem___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.DateTimeOffset, System.Nullable`1<T>, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerCosmeticsSystem/SharedSubscriptionData
class CORDL_TYPE PlayerCosmeticsSystem_SharedSubscriptionData : public ::System::Object {
public:
// Declarations
/// @brief Field ExpirationTime, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_ExpirationTime, put=__cordl_internal_set_ExpirationTime)) ::System::Nullable_1<::System::DateTimeOffset>  ExpirationTime;

/// @brief Field Sku, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Sku, put=__cordl_internal_set_Sku)) ::StringW  Sku;

/// @brief Field TotalLifetimeSeconds, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_TotalLifetimeSeconds, put=__cordl_internal_set_TotalLifetimeSeconds)) int32_t  TotalLifetimeSeconds;

static inline ::GlobalNamespace::PlayerCosmeticsSystem_SharedSubscriptionData* New_ctor() ;

constexpr ::System::Nullable_1<::System::DateTimeOffset> const& __cordl_internal_get_ExpirationTime() const;

constexpr ::System::Nullable_1<::System::DateTimeOffset>& __cordl_internal_get_ExpirationTime() ;

constexpr ::StringW const& __cordl_internal_get_Sku() const;

constexpr ::StringW& __cordl_internal_get_Sku() ;

constexpr int32_t const& __cordl_internal_get_TotalLifetimeSeconds() const;

constexpr int32_t& __cordl_internal_get_TotalLifetimeSeconds() ;

constexpr void __cordl_internal_set_ExpirationTime(::System::Nullable_1<::System::DateTimeOffset>  value) ;

constexpr void __cordl_internal_set_Sku(::StringW  value) ;

constexpr void __cordl_internal_set_TotalLifetimeSeconds(int32_t  value) ;

/// @brief Method .ctor, addr 0x5aca28c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerCosmeticsSystem_SharedSubscriptionData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerCosmeticsSystem_SharedSubscriptionData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerCosmeticsSystem_SharedSubscriptionData(PlayerCosmeticsSystem_SharedSubscriptionData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerCosmeticsSystem_SharedSubscriptionData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerCosmeticsSystem_SharedSubscriptionData(PlayerCosmeticsSystem_SharedSubscriptionData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3381};

/// @brief Field Sku, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Sku;

/// @brief Field ExpirationTime, offset: 0x18, size: 0x10, def value: None
 ::System::Nullable_1<::System::DateTimeOffset>  ___ExpirationTime;

/// @brief Field TotalLifetimeSeconds, offset: 0x28, size: 0x4, def value: None
 int32_t  ___TotalLifetimeSeconds;

/// @brief Size padding 0x38 - 0x30 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerCosmeticsSystem_SharedSubscriptionData, ___Sku) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCosmeticsSystem_SharedSubscriptionData, ___ExpirationTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCosmeticsSystem_SharedSubscriptionData, ___TotalLifetimeSeconds) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerCosmeticsSystem_SharedSubscriptionData) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
