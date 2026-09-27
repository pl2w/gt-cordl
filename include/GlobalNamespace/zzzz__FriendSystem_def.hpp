#pragma once
// IWYU pragma private; include "GlobalNamespace/FriendSystem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FriendSystem_PlayerPrivacy_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FriendSystem)
namespace GlobalNamespace {
class FriendBackendController_Friend;
}
namespace GlobalNamespace {
class FriendSystem_FriendRemovalCallback;
}
namespace GlobalNamespace {
struct FriendSystem_FriendRemovalData;
}
namespace GlobalNamespace {
class FriendSystem_FriendRequestCallback;
}
namespace GlobalNamespace {
struct FriendSystem_FriendRequestData;
}
namespace GlobalNamespace {
struct FriendSystem_FriendRequestStatus;
}
namespace GlobalNamespace {
struct FriendSystem_PlayerPrivacy;
}
namespace GlobalNamespace {
struct GTZone;
}
namespace GlobalNamespace {
class NetPlayer;
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
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class FriendSystem;
}
namespace GlobalNamespace {
class FriendSystem_FriendRemovalCallback;
}
namespace GlobalNamespace {
class FriendSystem_FriendRequestCallback;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FriendSystem*);
MARK_REF_T(::GlobalNamespace::FriendSystem_FriendRemovalCallback*);
MARK_REF_T(::GlobalNamespace::FriendSystem_FriendRequestCallback*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FriendSystem*, "", "FriendSystem");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FriendSystem_FriendRemovalCallback*, "", "FriendSystem/FriendRemovalCallback");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FriendSystem_FriendRequestCallback*, "", "FriendSystem/FriendRequestCallback");
// Dependencies FriendSystem::PlayerPrivacy, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: FriendSystem
class CORDL_TYPE FriendSystem : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using FriendRemovalCallback = ::GlobalNamespace::FriendSystem_FriendRemovalCallback;

using FriendRemovalData = ::GlobalNamespace::FriendSystem_FriendRemovalData;

using FriendRequestCallback = ::GlobalNamespace::FriendSystem_FriendRequestCallback;

using FriendRequestData = ::GlobalNamespace::FriendSystem_FriendRequestData;

using FriendRequestStatus = ::GlobalNamespace::FriendSystem_FriendRequestStatus;

using PlayerPrivacy = ::GlobalNamespace::FriendSystem_PlayerPrivacy;

/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::UnityW<::GlobalNamespace::FriendSystem>  Instance;

 __declspec(property(get=get_LocalPlayerPrivacy)) ::GlobalNamespace::FriendSystem_PlayerPrivacy  LocalPlayerPrivacy;

/// @brief Field OnFriendListRefresh, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnFriendListRefresh, put=__cordl_internal_set_OnFriendListRefresh)) ::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>*>*  OnFriendListRefresh;

/// @brief Field friendRequestExpirationTime, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_friendRequestExpirationTime, put=__cordl_internal_set_friendRequestExpirationTime)) float_t  friendRequestExpirationTime;

/// @brief Field indexesToRemove, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_indexesToRemove, put=__cordl_internal_set_indexesToRemove)) ::System::Collections::Generic::List_1<int32_t>*  indexesToRemove;

/// @brief Field lastFriendsListRefresh, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastFriendsListRefresh, put=__cordl_internal_set_lastFriendsListRefresh)) float_t  lastFriendsListRefresh;

/// @brief Field localPlayerPrivacy, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_localPlayerPrivacy, put=__cordl_internal_set_localPlayerPrivacy)) ::GlobalNamespace::FriendSystem_PlayerPrivacy  localPlayerPrivacy;

/// @brief Field pendingFriendRemovals, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_pendingFriendRemovals, put=__cordl_internal_set_pendingFriendRemovals)) ::System::Collections::Generic::List_1<::GlobalNamespace::FriendSystem_FriendRemovalData>*  pendingFriendRemovals;

/// @brief Field pendingFriendRequests, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_pendingFriendRequests, put=__cordl_internal_set_pendingFriendRequests)) ::System::Collections::Generic::List_1<::GlobalNamespace::FriendSystem_FriendRequestData>*  pendingFriendRequests;

/// @brief Method Awake, addr 0x5aac23c, size 0xd4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckFriendshipWithPlayer, addr 0x5aa8c98, size 0x188, virtual false, abstract: false, final false
inline bool CheckFriendshipWithPlayer(int32_t  targetActorNumber) ;

/// @brief Method HasPendingFriendRequest, addr 0x5aac160, size 0xdc, virtual false, abstract: false, final false
inline bool HasPendingFriendRequest(::GlobalNamespace::GTZone  zone, int32_t  senderId) ;

static inline ::GlobalNamespace::FriendSystem* New_ctor() ;

/// @brief Method OnAddFriendReturned, addr 0x5aac714, size 0x2c0, virtual false, abstract: false, final false
inline void OnAddFriendReturned(::GlobalNamespace::NetPlayer*  targetPlayer, bool  succeeded) ;

/// @brief Method OnDestroy, addr 0x5aac48c, size 0x1cc, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnGetFriendsReturned, addr 0x5aac658, size 0xbc, virtual false, abstract: false, final false
inline void OnGetFriendsReturned(bool  succeeded) ;

/// @brief Method OnRemoveFriendReturned, addr 0x5aac9d4, size 0x240, virtual false, abstract: false, final false
inline void OnRemoveFriendReturned(::GlobalNamespace::FriendBackendController_Friend*  _cordl_friend, bool  succeeded) ;

/// @brief Method RefreshFriendsList, addr 0x5aa5208, size 0x74, virtual false, abstract: false, final false
inline void RefreshFriendsList() ;

/// @brief Method RemoveFriend, addr 0x5aa2f14, size 0x13c, virtual false, abstract: false, final false
inline void RemoveFriend(::GlobalNamespace::FriendBackendController_Friend*  _cordl_friend, ::GlobalNamespace::FriendSystem_FriendRemovalCallback*  callback) ;

/// @brief Method SendFriendRequest, addr 0x5aa956c, size 0x1d0, virtual false, abstract: false, final false
inline void SendFriendRequest(::GlobalNamespace::NetPlayer*  targetPlayer, ::GlobalNamespace::GTZone  stationZone, ::GlobalNamespace::FriendSystem_FriendRequestCallback*  callback) ;

/// @brief Method SetLocalPlayerPrivacy, addr 0x5aa5bb8, size 0x7c, virtual false, abstract: false, final false
inline void SetLocalPlayerPrivacy(::GlobalNamespace::FriendSystem_PlayerPrivacy  privacyState) ;

/// @brief Method Start, addr 0x5aac310, size 0x17c, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>*>* const& __cordl_internal_get_OnFriendListRefresh() const;

constexpr ::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>*>*& __cordl_internal_get_OnFriendListRefresh() ;

constexpr float_t const& __cordl_internal_get_friendRequestExpirationTime() const;

constexpr float_t& __cordl_internal_get_friendRequestExpirationTime() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_indexesToRemove() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_indexesToRemove() ;

constexpr float_t const& __cordl_internal_get_lastFriendsListRefresh() const;

constexpr float_t& __cordl_internal_get_lastFriendsListRefresh() ;

constexpr ::GlobalNamespace::FriendSystem_PlayerPrivacy const& __cordl_internal_get_localPlayerPrivacy() const;

constexpr ::GlobalNamespace::FriendSystem_PlayerPrivacy& __cordl_internal_get_localPlayerPrivacy() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FriendSystem_FriendRemovalData>* const& __cordl_internal_get_pendingFriendRemovals() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FriendSystem_FriendRemovalData>*& __cordl_internal_get_pendingFriendRemovals() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FriendSystem_FriendRequestData>* const& __cordl_internal_get_pendingFriendRequests() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FriendSystem_FriendRequestData>*& __cordl_internal_get_pendingFriendRequests() ;

constexpr void __cordl_internal_set_OnFriendListRefresh(::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>*>*  value) ;

constexpr void __cordl_internal_set_friendRequestExpirationTime(float_t  value) ;

constexpr void __cordl_internal_set_indexesToRemove(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_lastFriendsListRefresh(float_t  value) ;

constexpr void __cordl_internal_set_localPlayerPrivacy(::GlobalNamespace::FriendSystem_PlayerPrivacy  value) ;

constexpr void __cordl_internal_set_pendingFriendRemovals(::System::Collections::Generic::List_1<::GlobalNamespace::FriendSystem_FriendRemovalData>*  value) ;

constexpr void __cordl_internal_set_pendingFriendRequests(::System::Collections::Generic::List_1<::GlobalNamespace::FriendSystem_FriendRequestData>*  value) ;

/// @brief Method .ctor, addr 0x5aacc14, size 0x138, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnFriendListRefresh, addr 0x5aa5158, size 0xb0, virtual false, abstract: false, final false
inline void add_OnFriendListRefresh(::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>*>*  value) ;

static inline ::UnityW<::GlobalNamespace::FriendSystem> getStaticF_Instance() ;

/// @brief Method get_LocalPlayerPrivacy, addr 0x5aac158, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::FriendSystem_PlayerPrivacy get_LocalPlayerPrivacy() ;

/// [CompilerGenerated]
/// @brief Method remove_OnFriendListRefresh, addr 0x5aa594c, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnFriendListRefresh(::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>*>*  value) ;

static inline void setStaticF_Instance(::UnityW<::GlobalNamespace::FriendSystem>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FriendSystem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FriendSystem", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FriendSystem(FriendSystem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FriendSystem", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FriendSystem(FriendSystem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3274};

/// [SerializeField]
/// @brief Field friendRequestExpirationTime, offset: 0x20, size: 0x4, def value: None
 float_t  ___friendRequestExpirationTime;

/// @brief Field localPlayerPrivacy, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::FriendSystem_PlayerPrivacy  ___localPlayerPrivacy;

/// @brief Field pendingFriendRequests, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::FriendSystem_FriendRequestData>*  ___pendingFriendRequests;

/// @brief Field pendingFriendRemovals, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::FriendSystem_FriendRemovalData>*  ___pendingFriendRemovals;

/// @brief Field indexesToRemove, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___indexesToRemove;

/// [CompilerGenerated]
/// @brief Field OnFriendListRefresh, offset: 0x40, size: 0x8, def value: None
 ::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>*>*  ___OnFriendListRefresh;

/// @brief Field lastFriendsListRefresh, offset: 0x48, size: 0x4, def value: None
 float_t  ___lastFriendsListRefresh;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FriendSystem, ___friendRequestExpirationTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendSystem, ___localPlayerPrivacy) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendSystem, ___pendingFriendRequests) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendSystem, ___pendingFriendRemovals) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendSystem, ___indexesToRemove) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendSystem, ___OnFriendListRefresh) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendSystem, ___lastFriendsListRefresh) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FriendSystem) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: FriendSystem/FriendRemovalCallback
class CORDL_TYPE FriendSystem_FriendRemovalCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5aacef8, size 0x80, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  friendId, bool  success, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5aacf78, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5aacee4, size 0x14, virtual true, abstract: false, final false
inline void Invoke(int32_t  friendId, bool  success) ;

static inline ::GlobalNamespace::FriendSystem_FriendRemovalCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5aace44, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FriendSystem_FriendRemovalCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FriendSystem_FriendRemovalCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FriendSystem_FriendRemovalCallback(FriendSystem_FriendRemovalCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FriendSystem_FriendRemovalCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FriendSystem_FriendRemovalCallback(FriendSystem_FriendRemovalCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3270};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::FriendSystem_FriendRemovalCallback) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: FriendSystem/FriendRequestCallback
class CORDL_TYPE FriendSystem_FriendRequestCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5aacd60, size 0xd8, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::GTZone  zone, int32_t  localId, int32_t  friendId, bool  success, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5aace38, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5aacd4c, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::GlobalNamespace::GTZone  zone, int32_t  localId, int32_t  friendId, bool  success) ;

static inline ::GlobalNamespace::FriendSystem_FriendRequestCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5aa94cc, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FriendSystem_FriendRequestCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FriendSystem_FriendRequestCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FriendSystem_FriendRequestCallback(FriendSystem_FriendRequestCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FriendSystem_FriendRequestCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FriendSystem_FriendRequestCallback(FriendSystem_FriendRequestCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3268};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::FriendSystem_FriendRequestCallback) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
