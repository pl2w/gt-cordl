#pragma once
// IWYU pragma private; include "GlobalNamespace/VRRigCache.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VRRigCache)
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class RigContainer;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaTag {
class TickSystemTimer;
}
namespace Photon::Realtime {
class Player;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
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
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class VRRigCache;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VRRigCache*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VRRigCache*, "", "VRRigCache");
// Dependencies System.Object, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: VRRigCache
class CORDL_TYPE VRRigCache : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_NetworkParent)) ::UnityW<::UnityEngine::Transform>  NetworkParent;

/// @brief Field OnActiveRigsChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnActiveRigsChanged, put=setStaticF_OnActiveRigsChanged)) ::System::Action*  OnActiveRigsChanged;

/// @brief Field OnPostInitialize, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnPostInitialize, put=setStaticF_OnPostInitialize)) ::System::Action*  OnPostInitialize;

/// @brief Field OnPostSpawnRig, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnPostSpawnRig, put=setStaticF_OnPostSpawnRig)) ::System::Action*  OnPostSpawnRig;

/// @brief Field OnRigActivated, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnRigActivated, put=setStaticF_OnRigActivated)) ::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*  OnRigActivated;

/// @brief Field OnRigDeactivated, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnRigDeactivated, put=setStaticF_OnRigDeactivated)) ::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*  OnRigDeactivated;

/// @brief Field OnRigNameChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnRigNameChanged, put=setStaticF_OnRigNameChanged)) ::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*  OnRigNameChanged;

/// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Instance_k__BackingField, put=setStaticF__Instance_k__BackingField)) ::UnityW<::GlobalNamespace::VRRigCache>  _Instance_k__BackingField;

/// @brief Field _isBatchingRigActivations, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__isBatchingRigActivations, put=setStaticF__isBatchingRigActivations)) bool  _isBatchingRigActivations;

/// @brief Field <isInitialized>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__isInitialized_k__BackingField, put=setStaticF__isInitialized_k__BackingField)) bool  _isInitialized_k__BackingField;

/// @brief Field freeRigs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_freeRigs, put=setStaticF_freeRigs)) ::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::RigContainer>>*  freeRigs;

/// @brief Field localRig, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_localRig, put=__cordl_internal_set_localRig)) ::UnityW<::GlobalNamespace::RigContainer>  localRig;

/// @brief Field m_activeRigContainers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_activeRigContainers, put=setStaticF_m_activeRigContainers)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::RigContainer>>*  m_activeRigContainers;

/// @brief Field m_activeRigs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_activeRigs, put=setStaticF_m_activeRigs)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  m_activeRigs;

/// @brief Field m_allRigContainers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_allRigContainers, put=setStaticF_m_allRigContainers)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::RigContainer>>*  m_allRigContainers;

/// @brief Field m_allRigs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_allRigs, put=setStaticF_m_allRigs)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  m_allRigs;

/// @brief Field m_ensureNetworkObjectTimer, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ensureNetworkObjectTimer, put=__cordl_internal_set_m_ensureNetworkObjectTimer)) ::GorillaTag::TickSystemTimer*  m_ensureNetworkObjectTimer;

/// @brief Field networkParent, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_networkParent, put=__cordl_internal_set_networkParent)) ::UnityW<::UnityEngine::Transform>  networkParent;

/// @brief Field rigAmount, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_rigAmount, put=__cordl_internal_set_rigAmount)) int32_t  rigAmount;

/// @brief Field rigParent, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigParent, put=__cordl_internal_set_rigParent)) ::UnityW<::UnityEngine::Transform>  rigParent;

/// @brief Field rigRGBData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_rigRGBData, put=setStaticF_rigRGBData)) ::ArrayW<::System::Object*>  rigRGBData;

/// @brief Field rigTemplate, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigTemplate, put=__cordl_internal_set_rigTemplate)) ::UnityW<::UnityEngine::GameObject>  rigTemplate;

/// @brief Field rigsInUse, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_rigsInUse, put=setStaticF_rigsInUse)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetPlayer*,::UnityW<::GlobalNamespace::RigContainer>>*  rigsInUse;

/// @brief Method ApplyToAllActiveRigs, addr 0x58fd5dc, size 0x19c, virtual false, abstract: false, final false
static inline void ApplyToAllActiveRigs(::System::Action_1<::UnityW<::GlobalNamespace::VRRig>>*  action) ;

/// @brief Method ApplyToAllRigs, addr 0x58fd2ec, size 0x2f0, virtual false, abstract: false, final false
static inline void ApplyToAllRigs(::System::Action_1<::UnityW<::GlobalNamespace::VRRig>>*  action) ;

/// @brief Method Awake, addr 0x58fa734, size 0x290, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckForMissingPlayer, addr 0x58fbb5c, size 0x4a8, virtual false, abstract: false, final false
inline void CheckForMissingPlayer() ;

/// @brief Method GetActiveRigs, addr 0x58fcfd4, size 0x318, virtual false, abstract: false, final false
inline void GetActiveRigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  rigsListToUpdate) ;

/// @brief Method GetAllRigs, addr 0x58fc9f0, size 0x3f0, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::GlobalNamespace::VRRig>> GetAllRigs() ;

/// @brief Method GetAllRigsHash, addr 0x58fd778, size 0x2c8, virtual false, abstract: false, final false
inline int32_t GetAllRigsHash() ;

/// @brief Method GetAllUsedRigs, addr 0x58fcde0, size 0x1f4, virtual false, abstract: false, final false
inline void GetAllUsedRigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  rigs) ;

/// @brief Method InitializeVRRigCache, addr 0x58fa9c4, size 0x610, virtual false, abstract: false, final false
inline void InitializeVRRigCache() ;

/// @brief Method InstantiateNetworkObject, addr 0x58fda40, size 0x4b4, virtual false, abstract: false, final false
inline void InstantiateNetworkObject() ;

/// @brief Method LogError, addr 0x58fc004, size 0x4, virtual false, abstract: false, final false
inline void LogError(::StringW  log) ;

/// @brief Method LogInfo, addr 0x58fdf70, size 0x4, virtual false, abstract: false, final false
inline void LogInfo(::StringW  log) ;

/// @brief Method LogWarning, addr 0x58fdf74, size 0x4, virtual false, abstract: false, final false
inline void LogWarning(::StringW  log) ;

static inline ::GlobalNamespace::VRRigCache* New_ctor() ;

/// @brief Method OnDestroy, addr 0x58fb000, size 0x288, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnJoinedRoom, addr 0x58fb6ac, size 0x164, virtual false, abstract: false, final false
inline void OnJoinedRoom() ;

/// @brief Method OnLeftRoom, addr 0x58fc008, size 0x9e8, virtual false, abstract: false, final false
inline void OnLeftRoom() ;

/// @brief Method OnPlayerEnteredRoom, addr 0x58fb5fc, size 0xb0, virtual false, abstract: false, final false
inline void OnPlayerEnteredRoom(::GlobalNamespace::NetPlayer*  newPlayer) ;

/// @brief Method OnPlayerLeftRoom, addr 0x58fb810, size 0x34c, virtual false, abstract: false, final false
inline void OnPlayerLeftRoom(::GlobalNamespace::NetPlayer*  leavingPlayer) ;

/// @brief Method OnVrrigSerializerSuccesfullySpawned, addr 0x58fdef4, size 0x7c, virtual false, abstract: false, final false
inline void OnVrrigSerializerSuccesfullySpawned() ;

/// @brief Method SpawnRig, addr 0x58fb288, size 0x248, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::RigContainer> SpawnRig() ;

/// @brief Method TryGetVrrig, addr 0x58f23f0, size 0x458, virtual false, abstract: false, final false
inline bool TryGetVrrig(::GlobalNamespace::NetPlayer*  targetPlayer, ::by_ref<::GlobalNamespace::RigContainer*>  playerRig) ;

/// @brief Method TryGetVrrig, addr 0x58fb4d0, size 0x98, virtual false, abstract: false, final false
inline bool TryGetVrrig(::Photon::Realtime::Player*  targetPlayer, ::by_ref<::GlobalNamespace::RigContainer*>  playerRig) ;

/// @brief Method TryGetVrrig, addr 0x58fb568, size 0x94, virtual false, abstract: false, final false
inline bool TryGetVrrig(int32_t  targetPlayerId, ::by_ref<::GlobalNamespace::RigContainer*>  playerRig) ;

constexpr ::UnityW<::GlobalNamespace::RigContainer> const& __cordl_internal_get_localRig() const;

constexpr ::UnityW<::GlobalNamespace::RigContainer>& __cordl_internal_get_localRig() ;

constexpr ::GorillaTag::TickSystemTimer* const& __cordl_internal_get_m_ensureNetworkObjectTimer() const;

constexpr ::GorillaTag::TickSystemTimer*& __cordl_internal_get_m_ensureNetworkObjectTimer() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_networkParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_networkParent() ;

constexpr int32_t const& __cordl_internal_get_rigAmount() const;

constexpr int32_t& __cordl_internal_get_rigAmount() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rigParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rigParent() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_rigTemplate() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_rigTemplate() ;

constexpr void __cordl_internal_set_localRig(::UnityW<::GlobalNamespace::RigContainer>  value) ;

constexpr void __cordl_internal_set_m_ensureNetworkObjectTimer(::GorillaTag::TickSystemTimer*  value) ;

constexpr void __cordl_internal_set_networkParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_rigAmount(int32_t  value) ;

constexpr void __cordl_internal_set_rigParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_rigTemplate(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x58fdf78, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnActiveRigsChanged, addr 0x58fa024, size 0xdc, virtual false, abstract: false, final false
static inline void add_OnActiveRigsChanged(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnPostInitialize, addr 0x58fa1dc, size 0xdc, virtual false, abstract: false, final false
static inline void add_OnPostInitialize(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnPostSpawnRig, addr 0x58fa394, size 0xdc, virtual false, abstract: false, final false
static inline void add_OnPostSpawnRig(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnRigActivated, addr 0x58ed5b8, size 0xf4, virtual false, abstract: false, final false
static inline void add_OnRigActivated(::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnRigDeactivated, addr 0x58ed6ac, size 0xf4, virtual false, abstract: false, final false
static inline void add_OnRigDeactivated(::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnRigNameChanged, addr 0x58fa54c, size 0xf4, virtual false, abstract: false, final false
static inline void add_OnRigNameChanged(::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*  value) ;

static inline ::System::Action* getStaticF_OnActiveRigsChanged() ;

static inline ::System::Action* getStaticF_OnPostInitialize() ;

static inline ::System::Action* getStaticF_OnPostSpawnRig() ;

static inline ::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>* getStaticF_OnRigActivated() ;

static inline ::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>* getStaticF_OnRigDeactivated() ;

static inline ::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>* getStaticF_OnRigNameChanged() ;

static inline ::UnityW<::GlobalNamespace::VRRigCache> getStaticF__Instance_k__BackingField() ;

static inline bool getStaticF__isBatchingRigActivations() ;

static inline bool getStaticF__isInitialized_k__BackingField() ;

static inline ::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::RigContainer>>* getStaticF_freeRigs() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::RigContainer>>* getStaticF_m_activeRigContainers() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* getStaticF_m_activeRigs() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::RigContainer>>* getStaticF_m_allRigContainers() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* getStaticF_m_allRigs() ;

static inline ::ArrayW<::System::Object*> getStaticF_rigRGBData() ;

static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetPlayer*,::UnityW<::GlobalNamespace::RigContainer>>* getStaticF_rigsInUse() ;

/// @brief Method get_ActiveRigContainers, addr 0x58f9e0c, size 0x58, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::RigContainer>>* get_ActiveRigContainers() ;

/// @brief Method get_ActiveRigs, addr 0x58f9e64, size 0x58, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::VRRig>>* get_ActiveRigs() ;

/// @brief Method get_AllRigContainers, addr 0x58f9f14, size 0x58, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::RigContainer>>* get_AllRigContainers() ;

/// @brief Method get_AllRigs, addr 0x58f9ebc, size 0x58, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::VRRig>>* get_AllRigs() ;

/// [CompilerGenerated]
/// @brief Method get_Instance, addr 0x58f9d44, size 0x58, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::VRRigCache> get_Instance() ;

/// @brief Method get_NetworkParent, addr 0x58f9e04, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_NetworkParent() ;

/// [CompilerGenerated]
/// @brief Method get_isInitialized, addr 0x58f9f6c, size 0x58, virtual false, abstract: false, final false
static inline bool get_isInitialized() ;

/// [CompilerGenerated]
/// @brief Method remove_OnActiveRigsChanged, addr 0x58fa100, size 0xdc, virtual false, abstract: false, final false
static inline void remove_OnActiveRigsChanged(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnPostInitialize, addr 0x58fa2b8, size 0xdc, virtual false, abstract: false, final false
static inline void remove_OnPostInitialize(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnPostSpawnRig, addr 0x58fa470, size 0xdc, virtual false, abstract: false, final false
static inline void remove_OnPostSpawnRig(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnRigActivated, addr 0x58edbc4, size 0xf4, virtual false, abstract: false, final false
static inline void remove_OnRigActivated(::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnRigDeactivated, addr 0x58edcb8, size 0xf4, virtual false, abstract: false, final false
static inline void remove_OnRigDeactivated(::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnRigNameChanged, addr 0x58fa640, size 0xf4, virtual false, abstract: false, final false
static inline void remove_OnRigNameChanged(::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*  value) ;

static inline void setStaticF_OnActiveRigsChanged(::System::Action*  value) ;

static inline void setStaticF_OnPostInitialize(::System::Action*  value) ;

static inline void setStaticF_OnPostSpawnRig(::System::Action*  value) ;

static inline void setStaticF_OnRigActivated(::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*  value) ;

static inline void setStaticF_OnRigDeactivated(::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*  value) ;

static inline void setStaticF_OnRigNameChanged(::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*  value) ;

static inline void setStaticF__Instance_k__BackingField(::UnityW<::GlobalNamespace::VRRigCache>  value) ;

static inline void setStaticF__isBatchingRigActivations(bool  value) ;

static inline void setStaticF__isInitialized_k__BackingField(bool  value) ;

static inline void setStaticF_freeRigs(::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::RigContainer>>*  value) ;

static inline void setStaticF_m_activeRigContainers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::RigContainer>>*  value) ;

static inline void setStaticF_m_activeRigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value) ;

static inline void setStaticF_m_allRigContainers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::RigContainer>>*  value) ;

static inline void setStaticF_m_allRigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value) ;

static inline void setStaticF_rigRGBData(::ArrayW<::System::Object*>  value) ;

static inline void setStaticF_rigsInUse(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetPlayer*,::UnityW<::GlobalNamespace::RigContainer>>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Instance, addr 0x58f9d9c, size 0x68, virtual false, abstract: false, final false
static inline void set_Instance(::GlobalNamespace::VRRigCache*  value) ;

/// [CompilerGenerated]
/// @brief Method set_isInitialized, addr 0x58f9fc4, size 0x60, virtual false, abstract: false, final false
static inline void set_isInitialized(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VRRigCache() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VRRigCache", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VRRigCache(VRRigCache && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VRRigCache", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VRRigCache(VRRigCache const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2139};

/// @brief Field preErr offset 0xffffffff size 0x8
static constexpr ::ConstString  preErr{u"[GT/VRRigCache]  ERROR!!!  "};

/// @brief Field preErrBeta offset 0xffffffff size 0x8
static constexpr ::ConstString  preErrBeta{u"[GT/VRRigCache]  ERROR!!!  (beta only log) "};

/// @brief Field preErrEd offset 0xffffffff size 0x8
static constexpr ::ConstString  preErrEd{u"[GT/VRRigCache]  ERROR!!!  (editor only log) "};

/// @brief Field preLog offset 0xffffffff size 0x8
static constexpr ::ConstString  preLog{u"[GT/VRRigCache] "};

/// @brief Field localRig, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RigContainer>  ___localRig;

/// [SerializeField]
/// @brief Field rigParent, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___rigParent;

/// [SerializeField]
/// @brief Field networkParent, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___networkParent;

/// [SerializeField]
/// @brief Field rigTemplate, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___rigTemplate;

/// @brief Field rigAmount, offset: 0x40, size: 0x4, def value: None
 int32_t  ___rigAmount;

/// [SerializeField]
/// @brief Field m_ensureNetworkObjectTimer, offset: 0x48, size: 0x8, def value: None
 ::GorillaTag::TickSystemTimer*  ___m_ensureNetworkObjectTimer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VRRigCache, ___localRig) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigCache, ___rigParent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigCache, ___networkParent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigCache, ___rigTemplate) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigCache, ___rigAmount) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigCache, ___m_ensureNetworkObjectTimer) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VRRigCache) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
