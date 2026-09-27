#pragma once
// IWYU pragma private; include "GlobalNamespace/FriendSystem.hpp"
#include "GlobalNamespace/zzzz__FriendSystem_PlayerPrivacy_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FriendSystem_def.hpp"
#include "GlobalNamespace/zzzz__FriendBackendController_def.hpp"
#include "GlobalNamespace/zzzz__FriendSystem_FriendRemovalData_def.hpp"
#include "GlobalNamespace/zzzz__FriendSystem_FriendRequestData_def.hpp"
#include "GlobalNamespace/zzzz__FriendSystem_FriendRequestStatus_def.hpp"
#include "GlobalNamespace/zzzz__FriendSystem_PlayerPrivacy_def.hpp"
#include "GlobalNamespace/zzzz__FriendSystem_def.hpp"
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FriendSystem.get_LocalPlayerPrivacy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::FriendSystem_PlayerPrivacy (::GlobalNamespace::FriendSystem::*)()>(&::GlobalNamespace::FriendSystem::get_LocalPlayerPrivacy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aac158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendSystem*>(),
                        {"get_LocalPlayerPrivacy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendSystem.add_OnFriendListRefresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendSystem::*)(::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>*>*)>(&::GlobalNamespace::FriendSystem::add_OnFriendListRefresh)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5aa5158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendSystem*>(),
                        {"add_OnFriendListRefresh", {}, {::i2c::type_of<::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendSystem.remove_OnFriendListRefresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendSystem::*)(::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>*>*)>(&::GlobalNamespace::FriendSystem::remove_OnFriendListRefresh)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5aa594c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendSystem*>(),
                        {"remove_OnFriendListRefresh", {}, {::i2c::type_of<::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendSystem.SetLocalPlayerPrivacy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendSystem::*)(::GlobalNamespace::FriendSystem_PlayerPrivacy)>(&::GlobalNamespace::FriendSystem::SetLocalPlayerPrivacy)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5aa5bb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendSystem*>(),
                        {"SetLocalPlayerPrivacy", {}, {::i2c::type_of<::GlobalNamespace::FriendSystem_PlayerPrivacy>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendSystem.RefreshFriendsList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendSystem::*)()>(&::GlobalNamespace::FriendSystem::RefreshFriendsList)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5aa5208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendSystem*>(),
                        {"RefreshFriendsList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendSystem.SendFriendRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendSystem::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::GTZone, ::GlobalNamespace::FriendSystem_FriendRequestCallback*)>(&::GlobalNamespace::FriendSystem::SendFriendRequest)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5aa956c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendSystem*>(),
                        {"SendFriendRequest", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::GTZone>(), ::i2c::type_of<::GlobalNamespace::FriendSystem_FriendRequestCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendSystem.RemoveFriend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendSystem::*)(::GlobalNamespace::FriendBackendController_Friend*, ::GlobalNamespace::FriendSystem_FriendRemovalCallback*)>(&::GlobalNamespace::FriendSystem::RemoveFriend)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5aa2f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendSystem*>(),
                        {"RemoveFriend", {}, {::i2c::type_of<::GlobalNamespace::FriendBackendController_Friend*>(), ::i2c::type_of<::GlobalNamespace::FriendSystem_FriendRemovalCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendSystem.HasPendingFriendRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::FriendSystem::*)(::GlobalNamespace::GTZone, int32_t)>(&::GlobalNamespace::FriendSystem::HasPendingFriendRequest)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5aac160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendSystem*>(),
                        {"HasPendingFriendRequest", {}, {::i2c::type_of<::GlobalNamespace::GTZone>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendSystem.CheckFriendshipWithPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::FriendSystem::*)(int32_t)>(&::GlobalNamespace::FriendSystem::CheckFriendshipWithPlayer)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5aa8c98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendSystem*>(),
                        {"CheckFriendshipWithPlayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendSystem.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendSystem::*)()>(&::GlobalNamespace::FriendSystem::Awake)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5aac23c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendSystem*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendSystem.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendSystem::*)()>(&::GlobalNamespace::FriendSystem::Start)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5aac310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendSystem*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendSystem.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendSystem::*)()>(&::GlobalNamespace::FriendSystem::OnDestroy)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5aac48c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendSystem*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendSystem.OnGetFriendsReturned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendSystem::*)(bool)>(&::GlobalNamespace::FriendSystem::OnGetFriendsReturned)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5aac658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendSystem*>(),
                        {"OnGetFriendsReturned", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendSystem.OnAddFriendReturned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendSystem::*)(::GlobalNamespace::NetPlayer*, bool)>(&::GlobalNamespace::FriendSystem::OnAddFriendReturned)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x5aac714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendSystem*>(),
                        {"OnAddFriendReturned", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendSystem.OnRemoveFriendReturned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendSystem::*)(::GlobalNamespace::FriendBackendController_Friend*, bool)>(&::GlobalNamespace::FriendSystem::OnRemoveFriendReturned)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x5aac9d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendSystem*>(),
                        {"OnRemoveFriendReturned", {}, {::i2c::type_of<::GlobalNamespace::FriendBackendController_Friend*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendSystem._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendSystem::*)()>(&::GlobalNamespace::FriendSystem::_ctor)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5aacc14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendSystem*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::FriendSystem::__cordl_internal_get_friendRequestExpirationTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___friendRequestExpirationTime;
}
constexpr float_t const& GlobalNamespace::FriendSystem::__cordl_internal_get_friendRequestExpirationTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___friendRequestExpirationTime;
}
constexpr void GlobalNamespace::FriendSystem::__cordl_internal_set_friendRequestExpirationTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___friendRequestExpirationTime = value;
}
constexpr ::GlobalNamespace::FriendSystem_PlayerPrivacy& GlobalNamespace::FriendSystem::__cordl_internal_get_localPlayerPrivacy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPlayerPrivacy;
}
constexpr ::GlobalNamespace::FriendSystem_PlayerPrivacy const& GlobalNamespace::FriendSystem::__cordl_internal_get_localPlayerPrivacy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPlayerPrivacy;
}
constexpr void GlobalNamespace::FriendSystem::__cordl_internal_set_localPlayerPrivacy(::GlobalNamespace::FriendSystem_PlayerPrivacy  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localPlayerPrivacy = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FriendSystem_FriendRequestData>*& GlobalNamespace::FriendSystem::__cordl_internal_get_pendingFriendRequests()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pendingFriendRequests;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FriendSystem_FriendRequestData>* const& GlobalNamespace::FriendSystem::__cordl_internal_get_pendingFriendRequests() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pendingFriendRequests;
}
constexpr void GlobalNamespace::FriendSystem::__cordl_internal_set_pendingFriendRequests(::System::Collections::Generic::List_1<::GlobalNamespace::FriendSystem_FriendRequestData>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pendingFriendRequests = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FriendSystem_FriendRemovalData>*& GlobalNamespace::FriendSystem::__cordl_internal_get_pendingFriendRemovals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pendingFriendRemovals;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FriendSystem_FriendRemovalData>* const& GlobalNamespace::FriendSystem::__cordl_internal_get_pendingFriendRemovals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pendingFriendRemovals;
}
constexpr void GlobalNamespace::FriendSystem::__cordl_internal_set_pendingFriendRemovals(::System::Collections::Generic::List_1<::GlobalNamespace::FriendSystem_FriendRemovalData>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pendingFriendRemovals = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::FriendSystem::__cordl_internal_get_indexesToRemove()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___indexesToRemove;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::FriendSystem::__cordl_internal_get_indexesToRemove() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___indexesToRemove;
}
constexpr void GlobalNamespace::FriendSystem::__cordl_internal_set_indexesToRemove(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___indexesToRemove = value;
}
constexpr ::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>*>*& GlobalNamespace::FriendSystem::__cordl_internal_get_OnFriendListRefresh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFriendListRefresh;
}
constexpr ::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>*>* const& GlobalNamespace::FriendSystem::__cordl_internal_get_OnFriendListRefresh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFriendListRefresh;
}
constexpr void GlobalNamespace::FriendSystem::__cordl_internal_set_OnFriendListRefresh(::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnFriendListRefresh = value;
}
constexpr float_t& GlobalNamespace::FriendSystem::__cordl_internal_get_lastFriendsListRefresh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastFriendsListRefresh;
}
constexpr float_t const& GlobalNamespace::FriendSystem::__cordl_internal_get_lastFriendsListRefresh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastFriendsListRefresh;
}
constexpr void GlobalNamespace::FriendSystem::__cordl_internal_set_lastFriendsListRefresh(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastFriendsListRefresh = value;
}
inline void GlobalNamespace::FriendSystem::setStaticF_Instance(::UnityW<::GlobalNamespace::FriendSystem>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::FriendSystem>, "Instance", ::GlobalNamespace::FriendSystem*>(std::forward<::UnityW<::GlobalNamespace::FriendSystem>>(value));
}
inline ::UnityW<::GlobalNamespace::FriendSystem> GlobalNamespace::FriendSystem::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::FriendSystem>, "Instance", ::GlobalNamespace::FriendSystem*>();
}
inline ::GlobalNamespace::FriendSystem_PlayerPrivacy GlobalNamespace::FriendSystem::get_LocalPlayerPrivacy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendSystem*>(),
                        {"get_LocalPlayerPrivacy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::FriendSystem_PlayerPrivacy>(this, ___internal_method);
}
inline void GlobalNamespace::FriendSystem::add_OnFriendListRefresh(::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendSystem*>(),
                        {"add_OnFriendListRefresh", {}, {::i2c::type_of<::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::FriendSystem::remove_OnFriendListRefresh(::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendSystem*>(),
                        {"remove_OnFriendListRefresh", {}, {::i2c::type_of<::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::FriendSystem::SetLocalPlayerPrivacy(::GlobalNamespace::FriendSystem_PlayerPrivacy  privacyState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendSystem*>(),
                        {"SetLocalPlayerPrivacy", {}, {::i2c::type_of<::GlobalNamespace::FriendSystem_PlayerPrivacy>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, privacyState);
}
inline void GlobalNamespace::FriendSystem::RefreshFriendsList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendSystem*>(),
                        {"RefreshFriendsList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FriendSystem::SendFriendRequest(::GlobalNamespace::NetPlayer*  targetPlayer, ::GlobalNamespace::GTZone  stationZone, ::GlobalNamespace::FriendSystem_FriendRequestCallback*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendSystem*>(),
                        {"SendFriendRequest", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::GTZone>(), ::i2c::type_of<::GlobalNamespace::FriendSystem_FriendRequestCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPlayer, stationZone, callback);
}
inline void GlobalNamespace::FriendSystem::RemoveFriend(::GlobalNamespace::FriendBackendController_Friend*  _cordl_friend, ::GlobalNamespace::FriendSystem_FriendRemovalCallback*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendSystem*>(),
                        {"RemoveFriend", {}, {::i2c::type_of<::GlobalNamespace::FriendBackendController_Friend*>(), ::i2c::type_of<::GlobalNamespace::FriendSystem_FriendRemovalCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_friend, callback);
}
inline bool GlobalNamespace::FriendSystem::HasPendingFriendRequest(::GlobalNamespace::GTZone  zone, int32_t  senderId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendSystem*>(),
                        {"HasPendingFriendRequest", {}, {::i2c::type_of<::GlobalNamespace::GTZone>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, zone, senderId);
}
inline bool GlobalNamespace::FriendSystem::CheckFriendshipWithPlayer(int32_t  targetActorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendSystem*>(),
                        {"CheckFriendshipWithPlayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, targetActorNumber);
}
inline void GlobalNamespace::FriendSystem::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendSystem*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FriendSystem::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendSystem*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FriendSystem::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendSystem*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FriendSystem::OnGetFriendsReturned(bool  succeeded)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendSystem*>(),
                        {"OnGetFriendsReturned", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, succeeded);
}
inline void GlobalNamespace::FriendSystem::OnAddFriendReturned(::GlobalNamespace::NetPlayer*  targetPlayer, bool  succeeded)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendSystem*>(),
                        {"OnAddFriendReturned", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPlayer, succeeded);
}
inline void GlobalNamespace::FriendSystem::OnRemoveFriendReturned(::GlobalNamespace::FriendBackendController_Friend*  _cordl_friend, bool  succeeded)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendSystem*>(),
                        {"OnRemoveFriendReturned", {}, {::i2c::type_of<::GlobalNamespace::FriendBackendController_Friend*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_friend, succeeded);
}
inline void GlobalNamespace::FriendSystem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendSystem*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FriendSystem* GlobalNamespace::FriendSystem::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FriendSystem*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FriendSystem::FriendSystem()   {
}
//  Writing Method size for method: ::GlobalNamespace::FriendSystem_FriendRemovalCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendSystem_FriendRemovalCallback::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::FriendSystem_FriendRemovalCallback::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5aace44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendSystem_FriendRemovalCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendSystem_FriendRemovalCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendSystem_FriendRemovalCallback::*)(int32_t, bool)>(&::GlobalNamespace::FriendSystem_FriendRemovalCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5aacee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FriendSystem_FriendRemovalCallback*>(),
                    {::i2c::class_of<::GlobalNamespace::FriendSystem_FriendRemovalCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendSystem_FriendRemovalCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::FriendSystem_FriendRemovalCallback::*)(int32_t, bool, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::FriendSystem_FriendRemovalCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5aacef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FriendSystem_FriendRemovalCallback*>(),
                    {::i2c::class_of<::GlobalNamespace::FriendSystem_FriendRemovalCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendSystem_FriendRemovalCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendSystem_FriendRemovalCallback::*)(::System::IAsyncResult*)>(&::GlobalNamespace::FriendSystem_FriendRemovalCallback::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5aacf78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FriendSystem_FriendRemovalCallback*>(),
                    {::i2c::class_of<::GlobalNamespace::FriendSystem_FriendRemovalCallback*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::FriendSystem_FriendRemovalCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendSystem_FriendRemovalCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::FriendSystem_FriendRemovalCallback::Invoke(int32_t  friendId, bool  success)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FriendSystem_FriendRemovalCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, friendId, success);
}
inline ::System::IAsyncResult* GlobalNamespace::FriendSystem_FriendRemovalCallback::BeginInvoke(int32_t  friendId, bool  success, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FriendSystem_FriendRemovalCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, friendId, success, callback, object);
}
inline void GlobalNamespace::FriendSystem_FriendRemovalCallback::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FriendSystem_FriendRemovalCallback*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::FriendSystem_FriendRemovalCallback* GlobalNamespace::FriendSystem_FriendRemovalCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FriendSystem_FriendRemovalCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FriendSystem_FriendRemovalCallback::FriendSystem_FriendRemovalCallback()   {
}
//  Writing Method size for method: ::GlobalNamespace::FriendSystem_FriendRequestCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendSystem_FriendRequestCallback::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::FriendSystem_FriendRequestCallback::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5aa94cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendSystem_FriendRequestCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendSystem_FriendRequestCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendSystem_FriendRequestCallback::*)(::GlobalNamespace::GTZone, int32_t, int32_t, bool)>(&::GlobalNamespace::FriendSystem_FriendRequestCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5aacd4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FriendSystem_FriendRequestCallback*>(),
                    {::i2c::class_of<::GlobalNamespace::FriendSystem_FriendRequestCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendSystem_FriendRequestCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::FriendSystem_FriendRequestCallback::*)(::GlobalNamespace::GTZone, int32_t, int32_t, bool, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::FriendSystem_FriendRequestCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5aacd60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FriendSystem_FriendRequestCallback*>(),
                    {::i2c::class_of<::GlobalNamespace::FriendSystem_FriendRequestCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendSystem_FriendRequestCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendSystem_FriendRequestCallback::*)(::System::IAsyncResult*)>(&::GlobalNamespace::FriendSystem_FriendRequestCallback::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5aace38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FriendSystem_FriendRequestCallback*>(),
                    {::i2c::class_of<::GlobalNamespace::FriendSystem_FriendRequestCallback*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::FriendSystem_FriendRequestCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendSystem_FriendRequestCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::FriendSystem_FriendRequestCallback::Invoke(::GlobalNamespace::GTZone  zone, int32_t  localId, int32_t  friendId, bool  success)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FriendSystem_FriendRequestCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, zone, localId, friendId, success);
}
inline ::System::IAsyncResult* GlobalNamespace::FriendSystem_FriendRequestCallback::BeginInvoke(::GlobalNamespace::GTZone  zone, int32_t  localId, int32_t  friendId, bool  success, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FriendSystem_FriendRequestCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, zone, localId, friendId, success, callback, object);
}
inline void GlobalNamespace::FriendSystem_FriendRequestCallback::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FriendSystem_FriendRequestCallback*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::FriendSystem_FriendRequestCallback* GlobalNamespace::FriendSystem_FriendRequestCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FriendSystem_FriendRequestCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FriendSystem_FriendRequestCallback::FriendSystem_FriendRequestCallback()   {
}
