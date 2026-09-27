#pragma once
// IWYU pragma private; include "GorillaTag/MonkeAgentCleanup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MonkeAgentCleanup)
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace GorillaTag {
class TickSystemTimer;
}
namespace Photon::Pun {
class PhotonView;
}
namespace Photon::Realtime {
class RaiseEventOptions;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GorillaTag {
class MonkeAgentCleanup;
}
// Write type traits
MARK_REF_T(::GorillaTag::MonkeAgentCleanup*);
DEFINE_IL2CPP_CLASS(::GorillaTag::MonkeAgentCleanup*, "GorillaTag", "MonkeAgentCleanup");
// Dependencies System.Object
namespace GorillaTag {
// Is value type: false
// CS Name: GorillaTag.MonkeAgentCleanup
class CORDL_TYPE MonkeAgentCleanup : public ::System::Object {
public:
// Declarations
/// @brief Field k_cacheInfo, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_cacheInfo, put=setStaticF_k_cacheInfo)) ::ExitGames::Client::Photon::Hashtable*  k_cacheInfo;

/// @brief Field k_destroyQueue, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_destroyQueue, put=setStaticF_k_destroyQueue)) ::System::Collections::Generic::Queue_1<::UnityW<::Photon::Pun::PhotonView>>*  k_destroyQueue;

/// @brief Field k_destroyTargets, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_destroyTargets, put=setStaticF_k_destroyTargets)) ::System::Collections::Generic::HashSet_1<::UnityW<::Photon::Pun::PhotonView>>*  k_destroyTargets;

/// @brief Field k_destroyTimer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_destroyTimer, put=setStaticF_k_destroyTimer)) ::GorillaTag::TickSystemTimer*  k_destroyTimer;

/// @brief Field k_raiseEventOptions, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_raiseEventOptions, put=setStaticF_k_raiseEventOptions)) ::Photon::Realtime::RaiseEventOptions*  k_raiseEventOptions;

/// @brief Field k_viewIdKey, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_viewIdKey, put=setStaticF_k_viewIdKey)) ::System::Object*  k_viewIdKey;

/// @brief Method CheckDestroyQueue, addr 0x5d29f54, size 0x3ac, virtual false, abstract: false, final false
static inline void CheckDestroyQueue() ;

/// @brief Method OnLeftRoom, addr 0x5d29e94, size 0xc0, virtual false, abstract: false, final false
static inline void OnLeftRoom() ;

/// @brief Method RegisterForDestroy, addr 0x5d29c98, size 0x1fc, virtual false, abstract: false, final false
static inline void RegisterForDestroy(::Photon::Pun::PhotonView*  target) ;

static inline ::ExitGames::Client::Photon::Hashtable* getStaticF_k_cacheInfo() ;

static inline ::System::Collections::Generic::Queue_1<::UnityW<::Photon::Pun::PhotonView>>* getStaticF_k_destroyQueue() ;

static inline ::System::Collections::Generic::HashSet_1<::UnityW<::Photon::Pun::PhotonView>>* getStaticF_k_destroyTargets() ;

static inline ::GorillaTag::TickSystemTimer* getStaticF_k_destroyTimer() ;

static inline ::Photon::Realtime::RaiseEventOptions* getStaticF_k_raiseEventOptions() ;

static inline ::System::Object* getStaticF_k_viewIdKey() ;

static inline void setStaticF_k_cacheInfo(::ExitGames::Client::Photon::Hashtable*  value) ;

static inline void setStaticF_k_destroyQueue(::System::Collections::Generic::Queue_1<::UnityW<::Photon::Pun::PhotonView>>*  value) ;

static inline void setStaticF_k_destroyTargets(::System::Collections::Generic::HashSet_1<::UnityW<::Photon::Pun::PhotonView>>*  value) ;

static inline void setStaticF_k_destroyTimer(::GorillaTag::TickSystemTimer*  value) ;

static inline void setStaticF_k_raiseEventOptions(::Photon::Realtime::RaiseEventOptions*  value) ;

static inline void setStaticF_k_viewIdKey(::System::Object*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonkeAgentCleanup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonkeAgentCleanup", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonkeAgentCleanup(MonkeAgentCleanup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonkeAgentCleanup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonkeAgentCleanup(MonkeAgentCleanup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4633};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTag::MonkeAgentCleanup) == 0x10, "Size mismatch!");

} // namespace end def GorillaTag
