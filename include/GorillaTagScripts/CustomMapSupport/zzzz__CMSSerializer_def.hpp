#pragma once
// IWYU pragma private; include "GorillaTagScripts/CustomMapSupport/CMSSerializer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaSerializer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CMSSerializer)
namespace GlobalNamespace {
class CallLimiter;
}
namespace GorillaTagScripts::CustomMapSupport {
class CMSTrigger;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
// Forward declare root types
namespace GorillaTagScripts::CustomMapSupport {
class CMSSerializer;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::CustomMapSupport::CMSSerializer*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::CustomMapSupport::CMSSerializer*, "GorillaTagScripts.CustomMapSupport", "CMSSerializer");
// Dependencies GorillaSerializer
namespace GorillaTagScripts::CustomMapSupport {
// Is value type: false
// CS Name: GorillaTagScripts.CustomMapSupport.CMSSerializer
class CORDL_TYPE CMSSerializer : public ::GlobalNamespace::GorillaSerializer {
public:
// Declarations
/// @brief Field ActivateTriggerCallLimiter, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ActivateTriggerCallLimiter, put=setStaticF_ActivateTriggerCallLimiter)) ::GlobalNamespace::CallLimiter*  ActivateTriggerCallLimiter;

/// @brief Field OnTriggerHistoryProcessedForScene, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnTriggerHistoryProcessedForScene, put=setStaticF_OnTriggerHistoryProcessedForScene)) ::UnityEngine::Events::UnityEvent_1<::StringW>*  OnTriggerHistoryProcessedForScene;

/// @brief Field hasInstance, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_hasInstance, put=setStaticF_hasInstance)) bool  hasInstance;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GorillaTagScripts::CustomMapSupport::CMSSerializer>  instance;

/// @brief Field registeredTriggersPerScene, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_registeredTriggersPerScene, put=setStaticF_registeredTriggersPerScene)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<uint8_t,::UnityW<::GorillaTagScripts::CustomMapSupport::CMSTrigger>>*>*  registeredTriggersPerScene;

/// @brief Field scenesWaitingForTriggerCounts, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_scenesWaitingForTriggerCounts, put=setStaticF_scenesWaitingForTriggerCounts)) ::System::Collections::Generic::List_1<::StringW>*  scenesWaitingForTriggerCounts;

/// @brief Field scenesWaitingForTriggerHistory, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_scenesWaitingForTriggerHistory, put=setStaticF_scenesWaitingForTriggerHistory)) ::System::Collections::Generic::List_1<::StringW>*  scenesWaitingForTriggerHistory;

/// @brief Field triggerCounts, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_triggerCounts, put=setStaticF_triggerCounts)) ::System::Collections::Generic::Dictionary_2<uint8_t,uint8_t>*  triggerCounts;

/// @brief Field triggerHistory, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_triggerHistory, put=setStaticF_triggerHistory)) ::System::Collections::Generic::List_1<uint8_t>*  triggerHistory;

/// @brief Field waitingForTriggerCounts, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_waitingForTriggerCounts, put=setStaticF_waitingForTriggerCounts)) bool  waitingForTriggerCounts;

/// @brief Field waitingForTriggerHistory, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_waitingForTriggerHistory, put=setStaticF_waitingForTriggerHistory)) bool  waitingForTriggerHistory;

/// @brief Method ActivateTrigger, addr 0x5bdbc78, size 0x28c, virtual false, abstract: false, final false
inline void ActivateTrigger(uint8_t  triggerID, double_t  triggerTime, bool  originatedLocally) ;

/// [PunRPC]
/// @brief Method ActivateTrigger_RPC, addr 0x5bdc4a0, size 0x2ac, virtual false, abstract: false, final false
inline void ActivateTrigger_RPC(uint8_t  triggerID, int32_t  originatingPlayer, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method Awake, addr 0x5bd9b38, size 0xfc, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GorillaTagScripts::CustomMapSupport::CMSSerializer* New_ctor() ;

/// @brief Method OnCustomMapLoaded, addr 0x5bd9e2c, size 0x60, virtual false, abstract: false, final false
inline void OnCustomMapLoaded(bool  success) ;

/// @brief Method OnDisable, addr 0x5bd9d5c, size 0xd0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5bd9c34, size 0x128, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ProcessSceneLoad, addr 0x5bdb60c, size 0x1b4, virtual false, abstract: false, final false
static inline void ProcessSceneLoad(::StringW  sceneName) ;

/// @brief Method ProcessTriggerCounts, addr 0x5bdb1f4, size 0x418, virtual false, abstract: false, final false
static inline void ProcessTriggerCounts(::StringW  forScene) ;

/// @brief Method ProcessTriggerHistory, addr 0x5bdac04, size 0x258, virtual false, abstract: false, final false
static inline void ProcessTriggerHistory(::StringW  forScene) ;

/// @brief Method RegisterTrigger, addr 0x5bda108, size 0x1a4, virtual false, abstract: false, final false
static inline void RegisterTrigger(::StringW  sceneName, ::GorillaTagScripts::CustomMapSupport::CMSTrigger*  trigger) ;

/// @brief Method RequestSyncTriggerHistory, addr 0x5bd9e8c, size 0x1a4, virtual false, abstract: false, final false
static inline void RequestSyncTriggerHistory() ;

/// [PunRPC]
/// @brief Method RequestSyncTriggerHistory_RPC, addr 0x5bda568, size 0x300, virtual false, abstract: false, final false
inline void RequestSyncTriggerHistory_RPC(::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method RequestTrigger, addr 0x5bdb8bc, size 0x3bc, virtual false, abstract: false, final false
static inline void RequestTrigger(uint8_t  triggerID) ;

/// [PunRPC]
/// @brief Method RequestTrigger_RPC, addr 0x5bdbf04, size 0x42c, virtual false, abstract: false, final false
inline void RequestTrigger_RPC(uint8_t  triggerID, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method ResetSyncedMapObjects, addr 0x5bda030, size 0xd8, virtual false, abstract: false, final false
static inline void ResetSyncedMapObjects() ;

/// @brief Method ResetTrigger, addr 0x5bda4e8, size 0x80, virtual false, abstract: false, final false
static inline void ResetTrigger(uint8_t  triggerID) ;

/// [PunRPC]
/// @brief Method SyncTriggerCounts_RPC, addr 0x5bdae5c, size 0x398, virtual false, abstract: false, final false
inline void SyncTriggerCounts_RPC(::System::Collections::Generic::Dictionary_2<uint8_t,uint8_t>*  syncedTriggerCounts, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method SyncTriggerHistory_RPC, addr 0x5bda868, size 0x39c, virtual false, abstract: false, final false
inline void SyncTriggerHistory_RPC(::ArrayW<uint8_t>  syncedTriggerHistory, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method TryGetRegisteredTrigger, addr 0x5bda2ac, size 0x1bc, virtual false, abstract: false, final false
static inline bool TryGetRegisteredTrigger(uint8_t  triggerID, ::by_ref<::GorillaTagScripts::CustomMapSupport::CMSTrigger*>  trigger) ;

/// @brief Method UnregisterTriggers, addr 0x5bda468, size 0x80, virtual false, abstract: false, final false
static inline void UnregisterTriggers(::StringW  forScene) ;

/// @brief Method .ctor, addr 0x5bdc74c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::CallLimiter* getStaticF_ActivateTriggerCallLimiter() ;

static inline ::UnityEngine::Events::UnityEvent_1<::StringW>* getStaticF_OnTriggerHistoryProcessedForScene() ;

static inline bool getStaticF_hasInstance() ;

static inline ::UnityW<::GorillaTagScripts::CustomMapSupport::CMSSerializer> getStaticF_instance() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<uint8_t,::UnityW<::GorillaTagScripts::CustomMapSupport::CMSTrigger>>*>* getStaticF_registeredTriggersPerScene() ;

static inline ::System::Collections::Generic::List_1<::StringW>* getStaticF_scenesWaitingForTriggerCounts() ;

static inline ::System::Collections::Generic::List_1<::StringW>* getStaticF_scenesWaitingForTriggerHistory() ;

static inline ::System::Collections::Generic::Dictionary_2<uint8_t,uint8_t>* getStaticF_triggerCounts() ;

static inline ::System::Collections::Generic::List_1<uint8_t>* getStaticF_triggerHistory() ;

static inline bool getStaticF_waitingForTriggerCounts() ;

static inline bool getStaticF_waitingForTriggerHistory() ;

static inline void setStaticF_ActivateTriggerCallLimiter(::GlobalNamespace::CallLimiter*  value) ;

static inline void setStaticF_OnTriggerHistoryProcessedForScene(::UnityEngine::Events::UnityEvent_1<::StringW>*  value) ;

static inline void setStaticF_hasInstance(bool  value) ;

static inline void setStaticF_instance(::UnityW<::GorillaTagScripts::CustomMapSupport::CMSSerializer>  value) ;

static inline void setStaticF_registeredTriggersPerScene(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<uint8_t,::UnityW<::GorillaTagScripts::CustomMapSupport::CMSTrigger>>*>*  value) ;

static inline void setStaticF_scenesWaitingForTriggerCounts(::System::Collections::Generic::List_1<::StringW>*  value) ;

static inline void setStaticF_scenesWaitingForTriggerHistory(::System::Collections::Generic::List_1<::StringW>*  value) ;

static inline void setStaticF_triggerCounts(::System::Collections::Generic::Dictionary_2<uint8_t,uint8_t>*  value) ;

static inline void setStaticF_triggerHistory(::System::Collections::Generic::List_1<uint8_t>*  value) ;

static inline void setStaticF_waitingForTriggerCounts(bool  value) ;

static inline void setStaticF_waitingForTriggerHistory(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CMSSerializer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CMSSerializer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CMSSerializer(CMSSerializer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CMSSerializer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CMSSerializer(CMSSerializer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4030};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTagScripts::CustomMapSupport::CMSSerializer) == 0x48, "Size mismatch!");

} // namespace end def GorillaTagScripts::CustomMapSupport
