#pragma once
// IWYU pragma private; include "GlobalNamespace/FriendBackendController.hpp"
#include "GlobalNamespace/zzzz__FriendBackendController_PrivacyState_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FriendBackendController_def.hpp"
#include "GlobalNamespace/zzzz__FriendBackendController_PendingRequestStatus_def.hpp"
#include "GlobalNamespace/zzzz__FriendBackendController_PrivacyState_def.hpp"
#include "GlobalNamespace/zzzz__FriendBackendController_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController.add_OnGetFriendsComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController::*)(::System::Action_1<bool>*)>(&::GlobalNamespace::FriendBackendController::add_OnGetFriendsComplete)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a9e004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"add_OnGetFriendsComplete", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController.remove_OnGetFriendsComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController::*)(::System::Action_1<bool>*)>(&::GlobalNamespace::FriendBackendController::remove_OnGetFriendsComplete)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a9e0b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"remove_OnGetFriendsComplete", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController.add_OnSetPrivacyStateComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController::*)(::System::Action_1<bool>*)>(&::GlobalNamespace::FriendBackendController::add_OnSetPrivacyStateComplete)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a9e164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"add_OnSetPrivacyStateComplete", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController.remove_OnSetPrivacyStateComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController::*)(::System::Action_1<bool>*)>(&::GlobalNamespace::FriendBackendController::remove_OnSetPrivacyStateComplete)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a9e214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"remove_OnSetPrivacyStateComplete", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController.add_OnAddFriendComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController::*)(::System::Action_2<::GlobalNamespace::NetPlayer*,bool>*)>(&::GlobalNamespace::FriendBackendController::add_OnAddFriendComplete)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a9e2c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"add_OnAddFriendComplete", {}, {::i2c::type_of<::System::Action_2<::GlobalNamespace::NetPlayer*,bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController.remove_OnAddFriendComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController::*)(::System::Action_2<::GlobalNamespace::NetPlayer*,bool>*)>(&::GlobalNamespace::FriendBackendController::remove_OnAddFriendComplete)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a9e374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"remove_OnAddFriendComplete", {}, {::i2c::type_of<::System::Action_2<::GlobalNamespace::NetPlayer*,bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController.add_OnRemoveFriendComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController::*)(::System::Action_2<::GlobalNamespace::FriendBackendController_Friend*,bool>*)>(&::GlobalNamespace::FriendBackendController::add_OnRemoveFriendComplete)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a9e424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"add_OnRemoveFriendComplete", {}, {::i2c::type_of<::System::Action_2<::GlobalNamespace::FriendBackendController_Friend*,bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController.remove_OnRemoveFriendComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController::*)(::System::Action_2<::GlobalNamespace::FriendBackendController_Friend*,bool>*)>(&::GlobalNamespace::FriendBackendController::remove_OnRemoveFriendComplete)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a9e4d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"remove_OnRemoveFriendComplete", {}, {::i2c::type_of<::System::Action_2<::GlobalNamespace::FriendBackendController_Friend*,bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController.get_FriendsList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>* (::GlobalNamespace::FriendBackendController::*)()>(&::GlobalNamespace::FriendBackendController::get_FriendsList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a9e584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"get_FriendsList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController.get_MyPrivacyState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::FriendBackendController_PrivacyState (::GlobalNamespace::FriendBackendController::*)()>(&::GlobalNamespace::FriendBackendController::get_MyPrivacyState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a9e58c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"get_MyPrivacyState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController.GetFriends
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController::*)()>(&::GlobalNamespace::FriendBackendController::GetFriends)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a9e594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"GetFriends", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController.SetPrivacyState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController::*)(::GlobalNamespace::FriendBackendController_PrivacyState)>(&::GlobalNamespace::FriendBackendController::SetPrivacyState)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5a9e6ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"SetPrivacyState", {}, {::i2c::type_of<::GlobalNamespace::FriendBackendController_PrivacyState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController.AddFriend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::FriendBackendController::AddFriend)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5a9e8d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"AddFriend", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController.RemoveFriend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController::*)(::GlobalNamespace::FriendBackendController_Friend*)>(&::GlobalNamespace::FriendBackendController::RemoveFriend)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5a9ebfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"RemoveFriend", {}, {::i2c::type_of<::GlobalNamespace::FriendBackendController_Friend*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController::*)()>(&::GlobalNamespace::FriendBackendController::Awake)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5a9ef08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController.GetFriendsInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController::*)()>(&::GlobalNamespace::FriendBackendController::GetFriendsInternal)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5a9e5ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"GetFriendsInternal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController.SendGetFriendsRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::FriendBackendController::*)(::GlobalNamespace::FriendBackendController_GetFriendsRequest*, ::System::Action_1<::GlobalNamespace::FriendBackendController_GetFriendsResponse*>*)>(&::GlobalNamespace::FriendBackendController::SendGetFriendsRequest)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5a9f034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"SendGetFriendsRequest", {}, {::i2c::type_of<::GlobalNamespace::FriendBackendController_GetFriendsRequest*>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::FriendBackendController_GetFriendsResponse*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController.GetFriendsComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController::*)(::GlobalNamespace::FriendBackendController_GetFriendsResponse*)>(&::GlobalNamespace::FriendBackendController::GetFriendsComplete)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x5a9f0f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"GetFriendsComplete", {}, {::i2c::type_of<::GlobalNamespace::FriendBackendController_GetFriendsResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController.CreateTestFriends
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController::*)()>(&::GlobalNamespace::FriendBackendController::CreateTestFriends)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x5a9f36c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"CreateTestFriends", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController.SetPrivacyStateInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController::*)()>(&::GlobalNamespace::FriendBackendController::SetPrivacyStateInternal)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5a9e768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"SetPrivacyStateInternal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController.SendSetPrivacyStateRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::FriendBackendController::*)(::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest*, ::System::Action_1<::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse*>*)>(&::GlobalNamespace::FriendBackendController::SendSetPrivacyStateRequest)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5a9f614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"SendSetPrivacyStateRequest", {}, {::i2c::type_of<::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest*>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController.SetPrivacyStateComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController::*)(::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse*)>(&::GlobalNamespace::FriendBackendController::SetPrivacyStateComplete)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5a9f6d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"SetPrivacyStateComplete", {}, {::i2c::type_of<::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController.AddFriendInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController::*)()>(&::GlobalNamespace::FriendBackendController::AddFriendInternal)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5a9ea2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"AddFriendInternal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController.SendAddFriendRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::FriendBackendController::*)(::GlobalNamespace::FriendBackendController_FriendRequestRequest*, ::System::Action_1<bool>*)>(&::GlobalNamespace::FriendBackendController::SendAddFriendRequest)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5a9f7fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"SendAddFriendRequest", {}, {::i2c::type_of<::GlobalNamespace::FriendBackendController_FriendRequestRequest*>(), ::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController.AddFriendComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController::*)(bool)>(&::GlobalNamespace::FriendBackendController::AddFriendComplete)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5a9f8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"AddFriendComplete", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController.RemoveFriendInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController::*)()>(&::GlobalNamespace::FriendBackendController::RemoveFriendInternal)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5a9ed4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"RemoveFriendInternal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController.SendRemoveFriendRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::FriendBackendController::*)(::GlobalNamespace::FriendBackendController_RemoveFriendRequest*, ::System::Action_1<bool>*)>(&::GlobalNamespace::FriendBackendController::SendRemoveFriendRequest)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5a9f9d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"SendRemoveFriendRequest", {}, {::i2c::type_of<::GlobalNamespace::FriendBackendController_RemoveFriendRequest*>(), ::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController.RemoveFriendComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController::*)(bool)>(&::GlobalNamespace::FriendBackendController::RemoveFriendComplete)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5a9fa98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"RemoveFriendComplete", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController.LogNetPlayersInRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController::*)()>(&::GlobalNamespace::FriendBackendController::LogNetPlayersInRoom)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x5a9fb54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"LogNetPlayersInRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController.TestAddFriend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController::*)()>(&::GlobalNamespace::FriendBackendController::TestAddFriend)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5a9febc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"TestAddFriend", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController.TestAddFriendCompleteCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController::*)(::GlobalNamespace::NetPlayer*, bool)>(&::GlobalNamespace::FriendBackendController::TestAddFriendCompleteCallback)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5aa0024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"TestAddFriendCompleteCallback", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController.TestRemoveFriend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController::*)()>(&::GlobalNamespace::FriendBackendController::TestRemoveFriend)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5aa00ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"TestRemoveFriend", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController.TestRemoveFriendCompleteCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController::*)(::GlobalNamespace::FriendBackendController_Friend*, bool)>(&::GlobalNamespace::FriendBackendController::TestRemoveFriendCompleteCallback)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5aa01b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"TestRemoveFriendCompleteCallback", {}, {::i2c::type_of<::GlobalNamespace::FriendBackendController_Friend*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController.TestGetFriends
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController::*)()>(&::GlobalNamespace::FriendBackendController::TestGetFriends)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5aa0238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"TestGetFriends", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController.TestGetFriendsCompleteCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController::*)(bool)>(&::GlobalNamespace::FriendBackendController::TestGetFriendsCompleteCallback)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x5aa0308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"TestGetFriendsCompleteCallback", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController.TestSetPrivacyState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController::*)()>(&::GlobalNamespace::FriendBackendController::TestSetPrivacyState)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5aa0738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"TestSetPrivacyState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController.TestSetPrivacyStateCompleteCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController::*)(bool)>(&::GlobalNamespace::FriendBackendController::TestSetPrivacyStateCompleteCallback)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5aa07ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"TestSetPrivacyStateCompleteCallback", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController::*)()>(&::GlobalNamespace::FriendBackendController::_ctor)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5aa08fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<bool>*& GlobalNamespace::FriendBackendController::__cordl_internal_get_OnGetFriendsComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGetFriendsComplete;
}
constexpr ::System::Action_1<bool>* const& GlobalNamespace::FriendBackendController::__cordl_internal_get_OnGetFriendsComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGetFriendsComplete;
}
constexpr void GlobalNamespace::FriendBackendController::__cordl_internal_set_OnGetFriendsComplete(::System::Action_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnGetFriendsComplete = value;
}
constexpr ::System::Action_1<bool>*& GlobalNamespace::FriendBackendController::__cordl_internal_get_OnSetPrivacyStateComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSetPrivacyStateComplete;
}
constexpr ::System::Action_1<bool>* const& GlobalNamespace::FriendBackendController::__cordl_internal_get_OnSetPrivacyStateComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSetPrivacyStateComplete;
}
constexpr void GlobalNamespace::FriendBackendController::__cordl_internal_set_OnSetPrivacyStateComplete(::System::Action_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnSetPrivacyStateComplete = value;
}
constexpr ::System::Action_2<::GlobalNamespace::NetPlayer*,bool>*& GlobalNamespace::FriendBackendController::__cordl_internal_get_OnAddFriendComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnAddFriendComplete;
}
constexpr ::System::Action_2<::GlobalNamespace::NetPlayer*,bool>* const& GlobalNamespace::FriendBackendController::__cordl_internal_get_OnAddFriendComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnAddFriendComplete;
}
constexpr void GlobalNamespace::FriendBackendController::__cordl_internal_set_OnAddFriendComplete(::System::Action_2<::GlobalNamespace::NetPlayer*,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnAddFriendComplete = value;
}
constexpr ::System::Action_2<::GlobalNamespace::FriendBackendController_Friend*,bool>*& GlobalNamespace::FriendBackendController::__cordl_internal_get_OnRemoveFriendComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRemoveFriendComplete;
}
constexpr ::System::Action_2<::GlobalNamespace::FriendBackendController_Friend*,bool>* const& GlobalNamespace::FriendBackendController::__cordl_internal_get_OnRemoveFriendComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRemoveFriendComplete;
}
constexpr void GlobalNamespace::FriendBackendController::__cordl_internal_set_OnRemoveFriendComplete(::System::Action_2<::GlobalNamespace::FriendBackendController_Friend*,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnRemoveFriendComplete = value;
}
constexpr int32_t& GlobalNamespace::FriendBackendController::__cordl_internal_get_maxRetriesOnFail()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxRetriesOnFail;
}
constexpr int32_t const& GlobalNamespace::FriendBackendController::__cordl_internal_get_maxRetriesOnFail() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxRetriesOnFail;
}
constexpr void GlobalNamespace::FriendBackendController::__cordl_internal_set_maxRetriesOnFail(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxRetriesOnFail = value;
}
constexpr int32_t& GlobalNamespace::FriendBackendController::__cordl_internal_get_getFriendsRetryCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___getFriendsRetryCount;
}
constexpr int32_t const& GlobalNamespace::FriendBackendController::__cordl_internal_get_getFriendsRetryCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___getFriendsRetryCount;
}
constexpr void GlobalNamespace::FriendBackendController::__cordl_internal_set_getFriendsRetryCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___getFriendsRetryCount = value;
}
constexpr int32_t& GlobalNamespace::FriendBackendController::__cordl_internal_get_setPrivacyStateRetryCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setPrivacyStateRetryCount;
}
constexpr int32_t const& GlobalNamespace::FriendBackendController::__cordl_internal_get_setPrivacyStateRetryCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setPrivacyStateRetryCount;
}
constexpr void GlobalNamespace::FriendBackendController::__cordl_internal_set_setPrivacyStateRetryCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___setPrivacyStateRetryCount = value;
}
constexpr int32_t& GlobalNamespace::FriendBackendController::__cordl_internal_get_addFriendRetryCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___addFriendRetryCount;
}
constexpr int32_t const& GlobalNamespace::FriendBackendController::__cordl_internal_get_addFriendRetryCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___addFriendRetryCount;
}
constexpr void GlobalNamespace::FriendBackendController::__cordl_internal_set_addFriendRetryCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___addFriendRetryCount = value;
}
constexpr int32_t& GlobalNamespace::FriendBackendController::__cordl_internal_get_removeFriendRetryCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___removeFriendRetryCount;
}
constexpr int32_t const& GlobalNamespace::FriendBackendController::__cordl_internal_get_removeFriendRetryCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___removeFriendRetryCount;
}
constexpr void GlobalNamespace::FriendBackendController::__cordl_internal_set_removeFriendRetryCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___removeFriendRetryCount = value;
}
constexpr bool& GlobalNamespace::FriendBackendController::__cordl_internal_get_getFriendsInProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___getFriendsInProgress;
}
constexpr bool const& GlobalNamespace::FriendBackendController::__cordl_internal_get_getFriendsInProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___getFriendsInProgress;
}
constexpr void GlobalNamespace::FriendBackendController::__cordl_internal_set_getFriendsInProgress(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___getFriendsInProgress = value;
}
constexpr ::GlobalNamespace::FriendBackendController_GetFriendsResponse*& GlobalNamespace::FriendBackendController::__cordl_internal_get_lastGetFriendsResponse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastGetFriendsResponse;
}
constexpr ::GlobalNamespace::FriendBackendController_GetFriendsResponse* const& GlobalNamespace::FriendBackendController::__cordl_internal_get_lastGetFriendsResponse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastGetFriendsResponse;
}
constexpr void GlobalNamespace::FriendBackendController::__cordl_internal_set_lastGetFriendsResponse(::GlobalNamespace::FriendBackendController_GetFriendsResponse*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastGetFriendsResponse = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>*& GlobalNamespace::FriendBackendController::__cordl_internal_get_lastFriendsList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastFriendsList;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>* const& GlobalNamespace::FriendBackendController::__cordl_internal_get_lastFriendsList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastFriendsList;
}
constexpr void GlobalNamespace::FriendBackendController::__cordl_internal_set_lastFriendsList(::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastFriendsList = value;
}
constexpr bool& GlobalNamespace::FriendBackendController::__cordl_internal_get_setPrivacyStateInProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setPrivacyStateInProgress;
}
constexpr bool const& GlobalNamespace::FriendBackendController::__cordl_internal_get_setPrivacyStateInProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setPrivacyStateInProgress;
}
constexpr void GlobalNamespace::FriendBackendController::__cordl_internal_set_setPrivacyStateInProgress(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___setPrivacyStateInProgress = value;
}
constexpr ::GlobalNamespace::FriendBackendController_PrivacyState& GlobalNamespace::FriendBackendController::__cordl_internal_get_setPrivacyStateState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setPrivacyStateState;
}
constexpr ::GlobalNamespace::FriendBackendController_PrivacyState const& GlobalNamespace::FriendBackendController::__cordl_internal_get_setPrivacyStateState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setPrivacyStateState;
}
constexpr void GlobalNamespace::FriendBackendController::__cordl_internal_set_setPrivacyStateState(::GlobalNamespace::FriendBackendController_PrivacyState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___setPrivacyStateState = value;
}
constexpr ::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse*& GlobalNamespace::FriendBackendController::__cordl_internal_get_lastPrivacyStateResponse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPrivacyStateResponse;
}
constexpr ::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse* const& GlobalNamespace::FriendBackendController::__cordl_internal_get_lastPrivacyStateResponse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPrivacyStateResponse;
}
constexpr void GlobalNamespace::FriendBackendController::__cordl_internal_set_lastPrivacyStateResponse(::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastPrivacyStateResponse = value;
}
constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::FriendBackendController_PrivacyState>*& GlobalNamespace::FriendBackendController::__cordl_internal_get_setPrivacyStateQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setPrivacyStateQueue;
}
constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::FriendBackendController_PrivacyState>* const& GlobalNamespace::FriendBackendController::__cordl_internal_get_setPrivacyStateQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setPrivacyStateQueue;
}
constexpr void GlobalNamespace::FriendBackendController::__cordl_internal_set_setPrivacyStateQueue(::System::Collections::Generic::Queue_1<::GlobalNamespace::FriendBackendController_PrivacyState>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___setPrivacyStateQueue = value;
}
constexpr ::GlobalNamespace::FriendBackendController_PrivacyState& GlobalNamespace::FriendBackendController::__cordl_internal_get_lastPrivacyState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPrivacyState;
}
constexpr ::GlobalNamespace::FriendBackendController_PrivacyState const& GlobalNamespace::FriendBackendController::__cordl_internal_get_lastPrivacyState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPrivacyState;
}
constexpr void GlobalNamespace::FriendBackendController::__cordl_internal_set_lastPrivacyState(::GlobalNamespace::FriendBackendController_PrivacyState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastPrivacyState = value;
}
constexpr bool& GlobalNamespace::FriendBackendController::__cordl_internal_get_addFriendInProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___addFriendInProgress;
}
constexpr bool const& GlobalNamespace::FriendBackendController::__cordl_internal_get_addFriendInProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___addFriendInProgress;
}
constexpr void GlobalNamespace::FriendBackendController::__cordl_internal_set_addFriendInProgress(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___addFriendInProgress = value;
}
constexpr int32_t& GlobalNamespace::FriendBackendController::__cordl_internal_get_addFriendTargetIdHash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___addFriendTargetIdHash;
}
constexpr int32_t const& GlobalNamespace::FriendBackendController::__cordl_internal_get_addFriendTargetIdHash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___addFriendTargetIdHash;
}
constexpr void GlobalNamespace::FriendBackendController::__cordl_internal_set_addFriendTargetIdHash(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___addFriendTargetIdHash = value;
}
constexpr ::GlobalNamespace::NetPlayer*& GlobalNamespace::FriendBackendController::__cordl_internal_get_addFriendTargetPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___addFriendTargetPlayer;
}
constexpr ::GlobalNamespace::NetPlayer* const& GlobalNamespace::FriendBackendController::__cordl_internal_get_addFriendTargetPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___addFriendTargetPlayer;
}
constexpr void GlobalNamespace::FriendBackendController::__cordl_internal_set_addFriendTargetPlayer(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___addFriendTargetPlayer = value;
}
constexpr ::System::Collections::Generic::Queue_1<::System::ValueTuple_2<int32_t,::GlobalNamespace::NetPlayer*>>*& GlobalNamespace::FriendBackendController::__cordl_internal_get_addFriendRequestQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___addFriendRequestQueue;
}
constexpr ::System::Collections::Generic::Queue_1<::System::ValueTuple_2<int32_t,::GlobalNamespace::NetPlayer*>>* const& GlobalNamespace::FriendBackendController::__cordl_internal_get_addFriendRequestQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___addFriendRequestQueue;
}
constexpr void GlobalNamespace::FriendBackendController::__cordl_internal_set_addFriendRequestQueue(::System::Collections::Generic::Queue_1<::System::ValueTuple_2<int32_t,::GlobalNamespace::NetPlayer*>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___addFriendRequestQueue = value;
}
constexpr bool& GlobalNamespace::FriendBackendController::__cordl_internal_get_removeFriendInProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___removeFriendInProgress;
}
constexpr bool const& GlobalNamespace::FriendBackendController::__cordl_internal_get_removeFriendInProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___removeFriendInProgress;
}
constexpr void GlobalNamespace::FriendBackendController::__cordl_internal_set_removeFriendInProgress(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___removeFriendInProgress = value;
}
constexpr int32_t& GlobalNamespace::FriendBackendController::__cordl_internal_get_removeFriendTargetIdHash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___removeFriendTargetIdHash;
}
constexpr int32_t const& GlobalNamespace::FriendBackendController::__cordl_internal_get_removeFriendTargetIdHash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___removeFriendTargetIdHash;
}
constexpr void GlobalNamespace::FriendBackendController::__cordl_internal_set_removeFriendTargetIdHash(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___removeFriendTargetIdHash = value;
}
constexpr ::GlobalNamespace::FriendBackendController_Friend*& GlobalNamespace::FriendBackendController::__cordl_internal_get_removeFriendTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___removeFriendTarget;
}
constexpr ::GlobalNamespace::FriendBackendController_Friend* const& GlobalNamespace::FriendBackendController::__cordl_internal_get_removeFriendTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___removeFriendTarget;
}
constexpr void GlobalNamespace::FriendBackendController::__cordl_internal_set_removeFriendTarget(::GlobalNamespace::FriendBackendController_Friend*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___removeFriendTarget = value;
}
constexpr ::System::Collections::Generic::Queue_1<::System::ValueTuple_2<int32_t,::GlobalNamespace::FriendBackendController_Friend*>>*& GlobalNamespace::FriendBackendController::__cordl_internal_get_removeFriendRequestQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___removeFriendRequestQueue;
}
constexpr ::System::Collections::Generic::Queue_1<::System::ValueTuple_2<int32_t,::GlobalNamespace::FriendBackendController_Friend*>>* const& GlobalNamespace::FriendBackendController::__cordl_internal_get_removeFriendRequestQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___removeFriendRequestQueue;
}
constexpr void GlobalNamespace::FriendBackendController::__cordl_internal_set_removeFriendRequestQueue(::System::Collections::Generic::Queue_1<::System::ValueTuple_2<int32_t,::GlobalNamespace::FriendBackendController_Friend*>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___removeFriendRequestQueue = value;
}
constexpr int32_t& GlobalNamespace::FriendBackendController::__cordl_internal_get_netPlayerIndexToAddFriend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netPlayerIndexToAddFriend;
}
constexpr int32_t const& GlobalNamespace::FriendBackendController::__cordl_internal_get_netPlayerIndexToAddFriend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netPlayerIndexToAddFriend;
}
constexpr void GlobalNamespace::FriendBackendController::__cordl_internal_set_netPlayerIndexToAddFriend(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___netPlayerIndexToAddFriend = value;
}
constexpr int32_t& GlobalNamespace::FriendBackendController::__cordl_internal_get_friendListIndexToRemoveFriend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___friendListIndexToRemoveFriend;
}
constexpr int32_t const& GlobalNamespace::FriendBackendController::__cordl_internal_get_friendListIndexToRemoveFriend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___friendListIndexToRemoveFriend;
}
constexpr void GlobalNamespace::FriendBackendController::__cordl_internal_set_friendListIndexToRemoveFriend(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___friendListIndexToRemoveFriend = value;
}
constexpr ::GlobalNamespace::FriendBackendController_PrivacyState& GlobalNamespace::FriendBackendController::__cordl_internal_get_privacyStateToSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___privacyStateToSet;
}
constexpr ::GlobalNamespace::FriendBackendController_PrivacyState const& GlobalNamespace::FriendBackendController::__cordl_internal_get_privacyStateToSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___privacyStateToSet;
}
constexpr void GlobalNamespace::FriendBackendController::__cordl_internal_set_privacyStateToSet(::GlobalNamespace::FriendBackendController_PrivacyState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___privacyStateToSet = value;
}
inline void GlobalNamespace::FriendBackendController::setStaticF_Instance(::UnityW<::GlobalNamespace::FriendBackendController>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::FriendBackendController>, "Instance", ::GlobalNamespace::FriendBackendController*>(std::forward<::UnityW<::GlobalNamespace::FriendBackendController>>(value));
}
inline ::UnityW<::GlobalNamespace::FriendBackendController> GlobalNamespace::FriendBackendController::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::FriendBackendController>, "Instance", ::GlobalNamespace::FriendBackendController*>();
}
inline void GlobalNamespace::FriendBackendController::add_OnGetFriendsComplete(::System::Action_1<bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"add_OnGetFriendsComplete", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::FriendBackendController::remove_OnGetFriendsComplete(::System::Action_1<bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"remove_OnGetFriendsComplete", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::FriendBackendController::add_OnSetPrivacyStateComplete(::System::Action_1<bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"add_OnSetPrivacyStateComplete", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::FriendBackendController::remove_OnSetPrivacyStateComplete(::System::Action_1<bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"remove_OnSetPrivacyStateComplete", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::FriendBackendController::add_OnAddFriendComplete(::System::Action_2<::GlobalNamespace::NetPlayer*,bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"add_OnAddFriendComplete", {}, {::i2c::type_of<::System::Action_2<::GlobalNamespace::NetPlayer*,bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::FriendBackendController::remove_OnAddFriendComplete(::System::Action_2<::GlobalNamespace::NetPlayer*,bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"remove_OnAddFriendComplete", {}, {::i2c::type_of<::System::Action_2<::GlobalNamespace::NetPlayer*,bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::FriendBackendController::add_OnRemoveFriendComplete(::System::Action_2<::GlobalNamespace::FriendBackendController_Friend*,bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"add_OnRemoveFriendComplete", {}, {::i2c::type_of<::System::Action_2<::GlobalNamespace::FriendBackendController_Friend*,bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::FriendBackendController::remove_OnRemoveFriendComplete(::System::Action_2<::GlobalNamespace::FriendBackendController_Friend*,bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"remove_OnRemoveFriendComplete", {}, {::i2c::type_of<::System::Action_2<::GlobalNamespace::FriendBackendController_Friend*,bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>* GlobalNamespace::FriendBackendController::get_FriendsList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"get_FriendsList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>*>(this, ___internal_method);
}
inline ::GlobalNamespace::FriendBackendController_PrivacyState GlobalNamespace::FriendBackendController::get_MyPrivacyState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"get_MyPrivacyState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::FriendBackendController_PrivacyState>(this, ___internal_method);
}
inline void GlobalNamespace::FriendBackendController::GetFriends()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"GetFriends", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FriendBackendController::SetPrivacyState(::GlobalNamespace::FriendBackendController_PrivacyState  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"SetPrivacyState", {}, {::i2c::type_of<::GlobalNamespace::FriendBackendController_PrivacyState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void GlobalNamespace::FriendBackendController::AddFriend(::GlobalNamespace::NetPlayer*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"AddFriend", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void GlobalNamespace::FriendBackendController::RemoveFriend(::GlobalNamespace::FriendBackendController_Friend*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"RemoveFriend", {}, {::i2c::type_of<::GlobalNamespace::FriendBackendController_Friend*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void GlobalNamespace::FriendBackendController::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FriendBackendController::GetFriendsInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"GetFriendsInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::FriendBackendController::SendGetFriendsRequest(::GlobalNamespace::FriendBackendController_GetFriendsRequest*  data, ::System::Action_1<::GlobalNamespace::FriendBackendController_GetFriendsResponse*>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"SendGetFriendsRequest", {}, {::i2c::type_of<::GlobalNamespace::FriendBackendController_GetFriendsRequest*>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::FriendBackendController_GetFriendsResponse*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, data, callback);
}
inline void GlobalNamespace::FriendBackendController::GetFriendsComplete(/* [CanBeNull] */ ::GlobalNamespace::FriendBackendController_GetFriendsResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"GetFriendsComplete", {}, {::i2c::type_of<::GlobalNamespace::FriendBackendController_GetFriendsResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response);
}
inline void GlobalNamespace::FriendBackendController::CreateTestFriends()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"CreateTestFriends", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FriendBackendController::SetPrivacyStateInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"SetPrivacyStateInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::FriendBackendController::SendSetPrivacyStateRequest(::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest*  data, ::System::Action_1<::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse*>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"SendSetPrivacyStateRequest", {}, {::i2c::type_of<::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest*>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, data, callback);
}
inline void GlobalNamespace::FriendBackendController::SetPrivacyStateComplete(/* [CanBeNull] */ ::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"SetPrivacyStateComplete", {}, {::i2c::type_of<::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response);
}
inline void GlobalNamespace::FriendBackendController::AddFriendInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"AddFriendInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::FriendBackendController::SendAddFriendRequest(::GlobalNamespace::FriendBackendController_FriendRequestRequest*  data, ::System::Action_1<bool>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"SendAddFriendRequest", {}, {::i2c::type_of<::GlobalNamespace::FriendBackendController_FriendRequestRequest*>(), ::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, data, callback);
}
inline void GlobalNamespace::FriendBackendController::AddFriendComplete(/* [CanBeNull] */ bool  success)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"AddFriendComplete", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, success);
}
inline void GlobalNamespace::FriendBackendController::RemoveFriendInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"RemoveFriendInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::FriendBackendController::SendRemoveFriendRequest(::GlobalNamespace::FriendBackendController_RemoveFriendRequest*  data, ::System::Action_1<bool>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"SendRemoveFriendRequest", {}, {::i2c::type_of<::GlobalNamespace::FriendBackendController_RemoveFriendRequest*>(), ::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, data, callback);
}
inline void GlobalNamespace::FriendBackendController::RemoveFriendComplete(/* [CanBeNull] */ bool  success)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"RemoveFriendComplete", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, success);
}
inline void GlobalNamespace::FriendBackendController::LogNetPlayersInRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"LogNetPlayersInRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FriendBackendController::TestAddFriend()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"TestAddFriend", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FriendBackendController::TestAddFriendCompleteCallback(::GlobalNamespace::NetPlayer*  player, bool  success)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"TestAddFriendCompleteCallback", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, success);
}
inline void GlobalNamespace::FriendBackendController::TestRemoveFriend()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"TestRemoveFriend", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FriendBackendController::TestRemoveFriendCompleteCallback(::GlobalNamespace::FriendBackendController_Friend*  _cordl_friend, bool  success)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"TestRemoveFriendCompleteCallback", {}, {::i2c::type_of<::GlobalNamespace::FriendBackendController_Friend*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_friend, success);
}
inline void GlobalNamespace::FriendBackendController::TestGetFriends()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"TestGetFriends", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FriendBackendController::TestGetFriendsCompleteCallback(bool  success)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"TestGetFriendsCompleteCallback", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, success);
}
inline void GlobalNamespace::FriendBackendController::TestSetPrivacyState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"TestSetPrivacyState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FriendBackendController::TestSetPrivacyStateCompleteCallback(bool  success)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {"TestSetPrivacyStateCompleteCallback", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, success);
}
inline void GlobalNamespace::FriendBackendController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FriendBackendController* GlobalNamespace::FriendBackendController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FriendBackendController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FriendBackendController::FriendBackendController()   {
}
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61::*)(int32_t)>(&::GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a9f6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61::*)()>(&::GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5aa1b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61::*)()>(&::GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61::MoveNext)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0x5aa1b4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61::*)()>(&::GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa1fc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61::*)()>(&::GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5aa1fcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61::*)()>(&::GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa2004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest*& GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest* const& GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61::__cordl_internal_set_data(::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::System::Action_1<::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse*>*& GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr ::System::Action_1<::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse*>* const& GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr void GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61::__cordl_internal_set_callback(::System::Action_1<::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callback = value;
}
constexpr ::UnityW<::GlobalNamespace::FriendBackendController>& GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::FriendBackendController> const& GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::FriendBackendController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61::__cordl_internal_get__request_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61::__cordl_internal_get__request_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr void GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61::__cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____request_5__2 = value;
}
inline void GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61* GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FriendBackendController__SendSetPrivacyStateRequest_d__61::FriendBackendController__SendSetPrivacyStateRequest_d__61()   {
}
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67::*)(int32_t)>(&::GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a9fa70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67::*)()>(&::GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5aa16e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67::*)()>(&::GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67::MoveNext)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0x5aa16e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67::*)()>(&::GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa1b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67::*)()>(&::GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5aa1b08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67::*)()>(&::GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa1b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::GlobalNamespace::FriendBackendController_RemoveFriendRequest*& GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GlobalNamespace::FriendBackendController_RemoveFriendRequest* const& GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67::__cordl_internal_set_data(::GlobalNamespace::FriendBackendController_RemoveFriendRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::System::Action_1<bool>*& GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr ::System::Action_1<bool>* const& GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr void GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67::__cordl_internal_set_callback(::System::Action_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callback = value;
}
constexpr ::UnityW<::GlobalNamespace::FriendBackendController>& GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::FriendBackendController> const& GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::FriendBackendController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67::__cordl_internal_get__request_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67::__cordl_internal_get__request_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr void GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67::__cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____request_5__2 = value;
}
inline void GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67* GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FriendBackendController__SendRemoveFriendRequest_d__67::FriendBackendController__SendRemoveFriendRequest_d__67()   {
}
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57::*)(int32_t)>(&::GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a9f0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57::*)()>(&::GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5aa1224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57::*)()>(&::GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57::MoveNext)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0x5aa1228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57::*)()>(&::GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa169c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57::*)()>(&::GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5aa16a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57::*)()>(&::GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa16dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::GlobalNamespace::FriendBackendController_GetFriendsRequest*& GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GlobalNamespace::FriendBackendController_GetFriendsRequest* const& GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57::__cordl_internal_set_data(::GlobalNamespace::FriendBackendController_GetFriendsRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::System::Action_1<::GlobalNamespace::FriendBackendController_GetFriendsResponse*>*& GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr ::System::Action_1<::GlobalNamespace::FriendBackendController_GetFriendsResponse*>* const& GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr void GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57::__cordl_internal_set_callback(::System::Action_1<::GlobalNamespace::FriendBackendController_GetFriendsResponse*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callback = value;
}
constexpr ::UnityW<::GlobalNamespace::FriendBackendController>& GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::FriendBackendController> const& GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::FriendBackendController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57::__cordl_internal_get__request_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57::__cordl_internal_get__request_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr void GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57::__cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____request_5__2 = value;
}
inline void GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57* GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FriendBackendController__SendGetFriendsRequest_d__57::FriendBackendController__SendGetFriendsRequest_d__57()   {
}
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64::*)(int32_t)>(&::GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a9f898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64::*)()>(&::GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5aa0db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64::*)()>(&::GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64::MoveNext)> {
  constexpr static std::size_t size = 0x428;
  constexpr static std::size_t addrs = 0x5aa0db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64::*)()>(&::GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa11dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64::*)()>(&::GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5aa11e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64::*)()>(&::GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa121c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::GlobalNamespace::FriendBackendController_FriendRequestRequest*& GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GlobalNamespace::FriendBackendController_FriendRequestRequest* const& GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64::__cordl_internal_set_data(::GlobalNamespace::FriendBackendController_FriendRequestRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::System::Action_1<bool>*& GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr ::System::Action_1<bool>* const& GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr void GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64::__cordl_internal_set_callback(::System::Action_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callback = value;
}
constexpr ::UnityW<::GlobalNamespace::FriendBackendController>& GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::FriendBackendController> const& GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::FriendBackendController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64::__cordl_internal_get__request_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64::__cordl_internal_get__request_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr void GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64::__cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____request_5__2 = value;
}
inline void GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64* GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FriendBackendController__SendAddFriendRequest_d__64::FriendBackendController__SendAddFriendRequest_d__64()   {
}
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_RemoveFriendRequest.get_PlayFabId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FriendBackendController_RemoveFriendRequest::*)()>(&::GlobalNamespace::FriendBackendController_RemoveFriendRequest::get_PlayFabId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_RemoveFriendRequest*>(),
                        {"get_PlayFabId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_RemoveFriendRequest.set_PlayFabId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController_RemoveFriendRequest::*)(::StringW)>(&::GlobalNamespace::FriendBackendController_RemoveFriendRequest::set_PlayFabId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0d58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_RemoveFriendRequest*>(),
                        {"set_PlayFabId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_RemoveFriendRequest.get_MothershipId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FriendBackendController_RemoveFriendRequest::*)()>(&::GlobalNamespace::FriendBackendController_RemoveFriendRequest::get_MothershipId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_RemoveFriendRequest*>(),
                        {"get_MothershipId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_RemoveFriendRequest.set_MothershipId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController_RemoveFriendRequest::*)(::StringW)>(&::GlobalNamespace::FriendBackendController_RemoveFriendRequest::set_MothershipId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0d68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_RemoveFriendRequest*>(),
                        {"set_MothershipId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_RemoveFriendRequest.get_PlayFabTicket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FriendBackendController_RemoveFriendRequest::*)()>(&::GlobalNamespace::FriendBackendController_RemoveFriendRequest::get_PlayFabTicket)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_RemoveFriendRequest*>(),
                        {"get_PlayFabTicket", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_RemoveFriendRequest.set_PlayFabTicket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController_RemoveFriendRequest::*)(::StringW)>(&::GlobalNamespace::FriendBackendController_RemoveFriendRequest::set_PlayFabTicket)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_RemoveFriendRequest*>(),
                        {"set_PlayFabTicket", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_RemoveFriendRequest.get_MothershipToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FriendBackendController_RemoveFriendRequest::*)()>(&::GlobalNamespace::FriendBackendController_RemoveFriendRequest::get_MothershipToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_RemoveFriendRequest*>(),
                        {"get_MothershipToken", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_RemoveFriendRequest.set_MothershipToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController_RemoveFriendRequest::*)(::StringW)>(&::GlobalNamespace::FriendBackendController_RemoveFriendRequest::set_MothershipToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_RemoveFriendRequest*>(),
                        {"set_MothershipToken", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_RemoveFriendRequest.get_MyFriendLinkId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FriendBackendController_RemoveFriendRequest::*)()>(&::GlobalNamespace::FriendBackendController_RemoveFriendRequest::get_MyFriendLinkId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_RemoveFriendRequest*>(),
                        {"get_MyFriendLinkId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_RemoveFriendRequest.set_MyFriendLinkId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController_RemoveFriendRequest::*)(::StringW)>(&::GlobalNamespace::FriendBackendController_RemoveFriendRequest::set_MyFriendLinkId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0d98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_RemoveFriendRequest*>(),
                        {"set_MyFriendLinkId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_RemoveFriendRequest.get_FriendFriendLinkId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FriendBackendController_RemoveFriendRequest::*)()>(&::GlobalNamespace::FriendBackendController_RemoveFriendRequest::get_FriendFriendLinkId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_RemoveFriendRequest*>(),
                        {"get_FriendFriendLinkId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_RemoveFriendRequest.set_FriendFriendLinkId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController_RemoveFriendRequest::*)(::StringW)>(&::GlobalNamespace::FriendBackendController_RemoveFriendRequest::set_FriendFriendLinkId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0da8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_RemoveFriendRequest*>(),
                        {"set_FriendFriendLinkId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_RemoveFriendRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController_RemoveFriendRequest::*)()>(&::GlobalNamespace::FriendBackendController_RemoveFriendRequest::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5a9f97c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_RemoveFriendRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::FriendBackendController_RemoveFriendRequest::__cordl_internal_get__PlayFabId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayFabId_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::FriendBackendController_RemoveFriendRequest::__cordl_internal_get__PlayFabId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayFabId_k__BackingField;
}
constexpr void GlobalNamespace::FriendBackendController_RemoveFriendRequest::__cordl_internal_set__PlayFabId_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PlayFabId_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::FriendBackendController_RemoveFriendRequest::__cordl_internal_get__MothershipId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MothershipId_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::FriendBackendController_RemoveFriendRequest::__cordl_internal_get__MothershipId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MothershipId_k__BackingField;
}
constexpr void GlobalNamespace::FriendBackendController_RemoveFriendRequest::__cordl_internal_set__MothershipId_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MothershipId_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::FriendBackendController_RemoveFriendRequest::__cordl_internal_get__PlayFabTicket_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayFabTicket_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::FriendBackendController_RemoveFriendRequest::__cordl_internal_get__PlayFabTicket_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayFabTicket_k__BackingField;
}
constexpr void GlobalNamespace::FriendBackendController_RemoveFriendRequest::__cordl_internal_set__PlayFabTicket_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PlayFabTicket_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::FriendBackendController_RemoveFriendRequest::__cordl_internal_get__MothershipToken_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MothershipToken_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::FriendBackendController_RemoveFriendRequest::__cordl_internal_get__MothershipToken_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MothershipToken_k__BackingField;
}
constexpr void GlobalNamespace::FriendBackendController_RemoveFriendRequest::__cordl_internal_set__MothershipToken_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MothershipToken_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::FriendBackendController_RemoveFriendRequest::__cordl_internal_get__MyFriendLinkId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MyFriendLinkId_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::FriendBackendController_RemoveFriendRequest::__cordl_internal_get__MyFriendLinkId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MyFriendLinkId_k__BackingField;
}
constexpr void GlobalNamespace::FriendBackendController_RemoveFriendRequest::__cordl_internal_set__MyFriendLinkId_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MyFriendLinkId_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::FriendBackendController_RemoveFriendRequest::__cordl_internal_get__FriendFriendLinkId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FriendFriendLinkId_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::FriendBackendController_RemoveFriendRequest::__cordl_internal_get__FriendFriendLinkId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FriendFriendLinkId_k__BackingField;
}
constexpr void GlobalNamespace::FriendBackendController_RemoveFriendRequest::__cordl_internal_set__FriendFriendLinkId_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FriendFriendLinkId_k__BackingField = value;
}
inline ::StringW GlobalNamespace::FriendBackendController_RemoveFriendRequest::get_PlayFabId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_RemoveFriendRequest*>(),
                        {"get_PlayFabId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::FriendBackendController_RemoveFriendRequest::set_PlayFabId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_RemoveFriendRequest*>(),
                        {"set_PlayFabId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::FriendBackendController_RemoveFriendRequest::get_MothershipId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_RemoveFriendRequest*>(),
                        {"get_MothershipId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::FriendBackendController_RemoveFriendRequest::set_MothershipId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_RemoveFriendRequest*>(),
                        {"set_MothershipId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::FriendBackendController_RemoveFriendRequest::get_PlayFabTicket()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_RemoveFriendRequest*>(),
                        {"get_PlayFabTicket", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::FriendBackendController_RemoveFriendRequest::set_PlayFabTicket(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_RemoveFriendRequest*>(),
                        {"set_PlayFabTicket", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::FriendBackendController_RemoveFriendRequest::get_MothershipToken()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_RemoveFriendRequest*>(),
                        {"get_MothershipToken", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::FriendBackendController_RemoveFriendRequest::set_MothershipToken(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_RemoveFriendRequest*>(),
                        {"set_MothershipToken", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::FriendBackendController_RemoveFriendRequest::get_MyFriendLinkId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_RemoveFriendRequest*>(),
                        {"get_MyFriendLinkId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::FriendBackendController_RemoveFriendRequest::set_MyFriendLinkId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_RemoveFriendRequest*>(),
                        {"set_MyFriendLinkId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::FriendBackendController_RemoveFriendRequest::get_FriendFriendLinkId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_RemoveFriendRequest*>(),
                        {"get_FriendFriendLinkId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::FriendBackendController_RemoveFriendRequest::set_FriendFriendLinkId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_RemoveFriendRequest*>(),
                        {"set_FriendFriendLinkId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::FriendBackendController_RemoveFriendRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_RemoveFriendRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FriendBackendController_RemoveFriendRequest* GlobalNamespace::FriendBackendController_RemoveFriendRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FriendBackendController_RemoveFriendRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FriendBackendController_RemoveFriendRequest::FriendBackendController_RemoveFriendRequest()   {
}
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse.get_StatusCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse::*)()>(&::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse::get_StatusCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse*>(),
                        {"get_StatusCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse.set_StatusCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse::*)(int32_t)>(&::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse::set_StatusCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse*>(),
                        {"set_StatusCode", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse.get_Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse::*)()>(&::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse::get_Error)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0d38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse*>(),
                        {"get_Error", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse.set_Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse::*)(::StringW)>(&::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse::set_Error)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse*>(),
                        {"set_Error", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse::*)()>(&::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0d48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::FriendBackendController_SetPrivacyStateResponse::__cordl_internal_get__StatusCode_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StatusCode_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::FriendBackendController_SetPrivacyStateResponse::__cordl_internal_get__StatusCode_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StatusCode_k__BackingField;
}
constexpr void GlobalNamespace::FriendBackendController_SetPrivacyStateResponse::__cordl_internal_set__StatusCode_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____StatusCode_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::FriendBackendController_SetPrivacyStateResponse::__cordl_internal_get__Error_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Error_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::FriendBackendController_SetPrivacyStateResponse::__cordl_internal_get__Error_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Error_k__BackingField;
}
constexpr void GlobalNamespace::FriendBackendController_SetPrivacyStateResponse::__cordl_internal_set__Error_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Error_k__BackingField = value;
}
inline int32_t GlobalNamespace::FriendBackendController_SetPrivacyStateResponse::get_StatusCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse*>(),
                        {"get_StatusCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::FriendBackendController_SetPrivacyStateResponse::set_StatusCode(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse*>(),
                        {"set_StatusCode", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::FriendBackendController_SetPrivacyStateResponse::get_Error()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse*>(),
                        {"get_Error", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::FriendBackendController_SetPrivacyStateResponse::set_Error(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse*>(),
                        {"set_Error", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::FriendBackendController_SetPrivacyStateResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse* GlobalNamespace::FriendBackendController_SetPrivacyStateResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse::FriendBackendController_SetPrivacyStateResponse()   {
}
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest.get_PlayFabId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest::*)()>(&::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest::get_PlayFabId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0cf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest*>(),
                        {"get_PlayFabId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest.set_PlayFabId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest::*)(::StringW)>(&::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest::set_PlayFabId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest*>(),
                        {"set_PlayFabId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest.get_PlayFabTicket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest::*)()>(&::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest::get_PlayFabTicket)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest*>(),
                        {"get_PlayFabTicket", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest.set_PlayFabTicket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest::*)(::StringW)>(&::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest::set_PlayFabTicket)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest*>(),
                        {"set_PlayFabTicket", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest.get_PrivacyState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest::*)()>(&::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest::get_PrivacyState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest*>(),
                        {"get_PrivacyState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest.set_PrivacyState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest::*)(::StringW)>(&::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest::set_PrivacyState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest*>(),
                        {"set_PrivacyState", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest::*)()>(&::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a9f60c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::FriendBackendController_SetPrivacyStateRequest::__cordl_internal_get__PlayFabId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayFabId_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::FriendBackendController_SetPrivacyStateRequest::__cordl_internal_get__PlayFabId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayFabId_k__BackingField;
}
constexpr void GlobalNamespace::FriendBackendController_SetPrivacyStateRequest::__cordl_internal_set__PlayFabId_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PlayFabId_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::FriendBackendController_SetPrivacyStateRequest::__cordl_internal_get__PlayFabTicket_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayFabTicket_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::FriendBackendController_SetPrivacyStateRequest::__cordl_internal_get__PlayFabTicket_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayFabTicket_k__BackingField;
}
constexpr void GlobalNamespace::FriendBackendController_SetPrivacyStateRequest::__cordl_internal_set__PlayFabTicket_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PlayFabTicket_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::FriendBackendController_SetPrivacyStateRequest::__cordl_internal_get__PrivacyState_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PrivacyState_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::FriendBackendController_SetPrivacyStateRequest::__cordl_internal_get__PrivacyState_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PrivacyState_k__BackingField;
}
constexpr void GlobalNamespace::FriendBackendController_SetPrivacyStateRequest::__cordl_internal_set__PrivacyState_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PrivacyState_k__BackingField = value;
}
inline ::StringW GlobalNamespace::FriendBackendController_SetPrivacyStateRequest::get_PlayFabId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest*>(),
                        {"get_PlayFabId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::FriendBackendController_SetPrivacyStateRequest::set_PlayFabId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest*>(),
                        {"set_PlayFabId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::FriendBackendController_SetPrivacyStateRequest::get_PlayFabTicket()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest*>(),
                        {"get_PlayFabTicket", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::FriendBackendController_SetPrivacyStateRequest::set_PlayFabTicket(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest*>(),
                        {"set_PlayFabTicket", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::FriendBackendController_SetPrivacyStateRequest::get_PrivacyState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest*>(),
                        {"get_PrivacyState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::FriendBackendController_SetPrivacyStateRequest::set_PrivacyState(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest*>(),
                        {"set_PrivacyState", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::FriendBackendController_SetPrivacyStateRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest* GlobalNamespace::FriendBackendController_SetPrivacyStateRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest::FriendBackendController_SetPrivacyStateRequest()   {
}
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_GetFriendsResult.get_Friends
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>* (::GlobalNamespace::FriendBackendController_GetFriendsResult::*)()>(&::GlobalNamespace::FriendBackendController_GetFriendsResult::get_Friends)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_GetFriendsResult*>(),
                        {"get_Friends", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_GetFriendsResult.set_Friends
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController_GetFriendsResult::*)(::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>*)>(&::GlobalNamespace::FriendBackendController_GetFriendsResult::set_Friends)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0cd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_GetFriendsResult*>(),
                        {"set_Friends", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_GetFriendsResult.get_MyPrivacyState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::FriendBackendController_PrivacyState (::GlobalNamespace::FriendBackendController_GetFriendsResult::*)()>(&::GlobalNamespace::FriendBackendController_GetFriendsResult::get_MyPrivacyState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_GetFriendsResult*>(),
                        {"get_MyPrivacyState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_GetFriendsResult.set_MyPrivacyState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController_GetFriendsResult::*)(::GlobalNamespace::FriendBackendController_PrivacyState)>(&::GlobalNamespace::FriendBackendController_GetFriendsResult::set_MyPrivacyState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0ce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_GetFriendsResult*>(),
                        {"set_MyPrivacyState", {}, {::i2c::type_of<::GlobalNamespace::FriendBackendController_PrivacyState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_GetFriendsResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController_GetFriendsResult::*)()>(&::GlobalNamespace::FriendBackendController_GetFriendsResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_GetFriendsResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>*& GlobalNamespace::FriendBackendController_GetFriendsResult::__cordl_internal_get__Friends_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Friends_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>* const& GlobalNamespace::FriendBackendController_GetFriendsResult::__cordl_internal_get__Friends_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Friends_k__BackingField;
}
constexpr void GlobalNamespace::FriendBackendController_GetFriendsResult::__cordl_internal_set__Friends_k__BackingField(::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Friends_k__BackingField = value;
}
constexpr ::GlobalNamespace::FriendBackendController_PrivacyState& GlobalNamespace::FriendBackendController_GetFriendsResult::__cordl_internal_get__MyPrivacyState_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MyPrivacyState_k__BackingField;
}
constexpr ::GlobalNamespace::FriendBackendController_PrivacyState const& GlobalNamespace::FriendBackendController_GetFriendsResult::__cordl_internal_get__MyPrivacyState_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MyPrivacyState_k__BackingField;
}
constexpr void GlobalNamespace::FriendBackendController_GetFriendsResult::__cordl_internal_set__MyPrivacyState_k__BackingField(::GlobalNamespace::FriendBackendController_PrivacyState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MyPrivacyState_k__BackingField = value;
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>* GlobalNamespace::FriendBackendController_GetFriendsResult::get_Friends()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_GetFriendsResult*>(),
                        {"get_Friends", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>*>(this, ___internal_method);
}
inline void GlobalNamespace::FriendBackendController_GetFriendsResult::set_Friends(::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_GetFriendsResult*>(),
                        {"set_Friends", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::FriendBackendController_PrivacyState GlobalNamespace::FriendBackendController_GetFriendsResult::get_MyPrivacyState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_GetFriendsResult*>(),
                        {"get_MyPrivacyState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::FriendBackendController_PrivacyState>(this, ___internal_method);
}
inline void GlobalNamespace::FriendBackendController_GetFriendsResult::set_MyPrivacyState(::GlobalNamespace::FriendBackendController_PrivacyState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_GetFriendsResult*>(),
                        {"set_MyPrivacyState", {}, {::i2c::type_of<::GlobalNamespace::FriendBackendController_PrivacyState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::FriendBackendController_GetFriendsResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_GetFriendsResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FriendBackendController_GetFriendsResult* GlobalNamespace::FriendBackendController_GetFriendsResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FriendBackendController_GetFriendsResult*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FriendBackendController_GetFriendsResult::FriendBackendController_GetFriendsResult()   {
}
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_GetFriendsResponse.get_Result
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::FriendBackendController_GetFriendsResult* (::GlobalNamespace::FriendBackendController_GetFriendsResponse::*)()>(&::GlobalNamespace::FriendBackendController_GetFriendsResponse::get_Result)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0c98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_GetFriendsResponse*>(),
                        {"get_Result", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_GetFriendsResponse.set_Result
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController_GetFriendsResponse::*)(::GlobalNamespace::FriendBackendController_GetFriendsResult*)>(&::GlobalNamespace::FriendBackendController_GetFriendsResponse::set_Result)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_GetFriendsResponse*>(),
                        {"set_Result", {}, {::i2c::type_of<::GlobalNamespace::FriendBackendController_GetFriendsResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_GetFriendsResponse.get_StatusCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::FriendBackendController_GetFriendsResponse::*)()>(&::GlobalNamespace::FriendBackendController_GetFriendsResponse::get_StatusCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_GetFriendsResponse*>(),
                        {"get_StatusCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_GetFriendsResponse.set_StatusCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController_GetFriendsResponse::*)(int32_t)>(&::GlobalNamespace::FriendBackendController_GetFriendsResponse::set_StatusCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_GetFriendsResponse*>(),
                        {"set_StatusCode", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_GetFriendsResponse.get_Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FriendBackendController_GetFriendsResponse::*)()>(&::GlobalNamespace::FriendBackendController_GetFriendsResponse::get_Error)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0cb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_GetFriendsResponse*>(),
                        {"get_Error", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_GetFriendsResponse.set_Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController_GetFriendsResponse::*)(::StringW)>(&::GlobalNamespace::FriendBackendController_GetFriendsResponse::set_Error)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_GetFriendsResponse*>(),
                        {"set_Error", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_GetFriendsResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController_GetFriendsResponse::*)()>(&::GlobalNamespace::FriendBackendController_GetFriendsResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0cc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_GetFriendsResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::FriendBackendController_GetFriendsResult*& GlobalNamespace::FriendBackendController_GetFriendsResponse::__cordl_internal_get__Result_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Result_k__BackingField;
}
constexpr ::GlobalNamespace::FriendBackendController_GetFriendsResult* const& GlobalNamespace::FriendBackendController_GetFriendsResponse::__cordl_internal_get__Result_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Result_k__BackingField;
}
constexpr void GlobalNamespace::FriendBackendController_GetFriendsResponse::__cordl_internal_set__Result_k__BackingField(::GlobalNamespace::FriendBackendController_GetFriendsResult*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Result_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::FriendBackendController_GetFriendsResponse::__cordl_internal_get__StatusCode_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StatusCode_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::FriendBackendController_GetFriendsResponse::__cordl_internal_get__StatusCode_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StatusCode_k__BackingField;
}
constexpr void GlobalNamespace::FriendBackendController_GetFriendsResponse::__cordl_internal_set__StatusCode_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____StatusCode_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::FriendBackendController_GetFriendsResponse::__cordl_internal_get__Error_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Error_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::FriendBackendController_GetFriendsResponse::__cordl_internal_get__Error_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Error_k__BackingField;
}
constexpr void GlobalNamespace::FriendBackendController_GetFriendsResponse::__cordl_internal_set__Error_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Error_k__BackingField = value;
}
inline ::GlobalNamespace::FriendBackendController_GetFriendsResult* GlobalNamespace::FriendBackendController_GetFriendsResponse::get_Result()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_GetFriendsResponse*>(),
                        {"get_Result", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::FriendBackendController_GetFriendsResult*>(this, ___internal_method);
}
inline void GlobalNamespace::FriendBackendController_GetFriendsResponse::set_Result(::GlobalNamespace::FriendBackendController_GetFriendsResult*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_GetFriendsResponse*>(),
                        {"set_Result", {}, {::i2c::type_of<::GlobalNamespace::FriendBackendController_GetFriendsResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::FriendBackendController_GetFriendsResponse::get_StatusCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_GetFriendsResponse*>(),
                        {"get_StatusCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::FriendBackendController_GetFriendsResponse::set_StatusCode(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_GetFriendsResponse*>(),
                        {"set_StatusCode", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::FriendBackendController_GetFriendsResponse::get_Error()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_GetFriendsResponse*>(),
                        {"get_Error", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::FriendBackendController_GetFriendsResponse::set_Error(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_GetFriendsResponse*>(),
                        {"set_Error", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::FriendBackendController_GetFriendsResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_GetFriendsResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FriendBackendController_GetFriendsResponse* GlobalNamespace::FriendBackendController_GetFriendsResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FriendBackendController_GetFriendsResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FriendBackendController_GetFriendsResponse::FriendBackendController_GetFriendsResponse()   {
}
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_GetFriendsRequest.get_PlayFabId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FriendBackendController_GetFriendsRequest::*)()>(&::GlobalNamespace::FriendBackendController_GetFriendsRequest::get_PlayFabId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0c58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_GetFriendsRequest*>(),
                        {"get_PlayFabId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_GetFriendsRequest.set_PlayFabId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController_GetFriendsRequest::*)(::StringW)>(&::GlobalNamespace::FriendBackendController_GetFriendsRequest::set_PlayFabId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_GetFriendsRequest*>(),
                        {"set_PlayFabId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_GetFriendsRequest.get_MothershipId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FriendBackendController_GetFriendsRequest::*)()>(&::GlobalNamespace::FriendBackendController_GetFriendsRequest::get_MothershipId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0c68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_GetFriendsRequest*>(),
                        {"get_MothershipId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_GetFriendsRequest.set_MothershipId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController_GetFriendsRequest::*)(::StringW)>(&::GlobalNamespace::FriendBackendController_GetFriendsRequest::set_MothershipId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_GetFriendsRequest*>(),
                        {"set_MothershipId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_GetFriendsRequest.get_MothershipToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FriendBackendController_GetFriendsRequest::*)()>(&::GlobalNamespace::FriendBackendController_GetFriendsRequest::get_MothershipToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_GetFriendsRequest*>(),
                        {"get_MothershipToken", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_GetFriendsRequest.set_MothershipToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController_GetFriendsRequest::*)(::StringW)>(&::GlobalNamespace::FriendBackendController_GetFriendsRequest::set_MothershipToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_GetFriendsRequest*>(),
                        {"set_MothershipToken", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_GetFriendsRequest.get_PlayFabTicket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FriendBackendController_GetFriendsRequest::*)()>(&::GlobalNamespace::FriendBackendController_GetFriendsRequest::get_PlayFabTicket)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0c88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_GetFriendsRequest*>(),
                        {"get_PlayFabTicket", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_GetFriendsRequest.set_PlayFabTicket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController_GetFriendsRequest::*)(::StringW)>(&::GlobalNamespace::FriendBackendController_GetFriendsRequest::set_PlayFabTicket)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_GetFriendsRequest*>(),
                        {"set_PlayFabTicket", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_GetFriendsRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController_GetFriendsRequest::*)()>(&::GlobalNamespace::FriendBackendController_GetFriendsRequest::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5a9efdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_GetFriendsRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::FriendBackendController_GetFriendsRequest::__cordl_internal_get__PlayFabId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayFabId_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::FriendBackendController_GetFriendsRequest::__cordl_internal_get__PlayFabId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayFabId_k__BackingField;
}
constexpr void GlobalNamespace::FriendBackendController_GetFriendsRequest::__cordl_internal_set__PlayFabId_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PlayFabId_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::FriendBackendController_GetFriendsRequest::__cordl_internal_get__MothershipId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MothershipId_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::FriendBackendController_GetFriendsRequest::__cordl_internal_get__MothershipId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MothershipId_k__BackingField;
}
constexpr void GlobalNamespace::FriendBackendController_GetFriendsRequest::__cordl_internal_set__MothershipId_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MothershipId_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::FriendBackendController_GetFriendsRequest::__cordl_internal_get__MothershipToken_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MothershipToken_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::FriendBackendController_GetFriendsRequest::__cordl_internal_get__MothershipToken_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MothershipToken_k__BackingField;
}
constexpr void GlobalNamespace::FriendBackendController_GetFriendsRequest::__cordl_internal_set__MothershipToken_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MothershipToken_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::FriendBackendController_GetFriendsRequest::__cordl_internal_get__PlayFabTicket_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayFabTicket_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::FriendBackendController_GetFriendsRequest::__cordl_internal_get__PlayFabTicket_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayFabTicket_k__BackingField;
}
constexpr void GlobalNamespace::FriendBackendController_GetFriendsRequest::__cordl_internal_set__PlayFabTicket_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PlayFabTicket_k__BackingField = value;
}
inline ::StringW GlobalNamespace::FriendBackendController_GetFriendsRequest::get_PlayFabId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_GetFriendsRequest*>(),
                        {"get_PlayFabId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::FriendBackendController_GetFriendsRequest::set_PlayFabId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_GetFriendsRequest*>(),
                        {"set_PlayFabId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::FriendBackendController_GetFriendsRequest::get_MothershipId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_GetFriendsRequest*>(),
                        {"get_MothershipId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::FriendBackendController_GetFriendsRequest::set_MothershipId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_GetFriendsRequest*>(),
                        {"set_MothershipId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::FriendBackendController_GetFriendsRequest::get_MothershipToken()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_GetFriendsRequest*>(),
                        {"get_MothershipToken", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::FriendBackendController_GetFriendsRequest::set_MothershipToken(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_GetFriendsRequest*>(),
                        {"set_MothershipToken", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::FriendBackendController_GetFriendsRequest::get_PlayFabTicket()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_GetFriendsRequest*>(),
                        {"get_PlayFabTicket", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::FriendBackendController_GetFriendsRequest::set_PlayFabTicket(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_GetFriendsRequest*>(),
                        {"set_PlayFabTicket", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::FriendBackendController_GetFriendsRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_GetFriendsRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FriendBackendController_GetFriendsRequest* GlobalNamespace::FriendBackendController_GetFriendsRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FriendBackendController_GetFriendsRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FriendBackendController_GetFriendsRequest::FriendBackendController_GetFriendsRequest()   {
}
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_FriendRequestRequest.get_PlayFabId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FriendBackendController_FriendRequestRequest::*)()>(&::GlobalNamespace::FriendBackendController_FriendRequestRequest::get_PlayFabId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0bf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendRequestRequest*>(),
                        {"get_PlayFabId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_FriendRequestRequest.set_PlayFabId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController_FriendRequestRequest::*)(::StringW)>(&::GlobalNamespace::FriendBackendController_FriendRequestRequest::set_PlayFabId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendRequestRequest*>(),
                        {"set_PlayFabId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_FriendRequestRequest.get_MothershipId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FriendBackendController_FriendRequestRequest::*)()>(&::GlobalNamespace::FriendBackendController_FriendRequestRequest::get_MothershipId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0c08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendRequestRequest*>(),
                        {"get_MothershipId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_FriendRequestRequest.set_MothershipId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController_FriendRequestRequest::*)(::StringW)>(&::GlobalNamespace::FriendBackendController_FriendRequestRequest::set_MothershipId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendRequestRequest*>(),
                        {"set_MothershipId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_FriendRequestRequest.get_PlayFabTicket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FriendBackendController_FriendRequestRequest::*)()>(&::GlobalNamespace::FriendBackendController_FriendRequestRequest::get_PlayFabTicket)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0c18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendRequestRequest*>(),
                        {"get_PlayFabTicket", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_FriendRequestRequest.set_PlayFabTicket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController_FriendRequestRequest::*)(::StringW)>(&::GlobalNamespace::FriendBackendController_FriendRequestRequest::set_PlayFabTicket)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendRequestRequest*>(),
                        {"set_PlayFabTicket", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_FriendRequestRequest.get_MothershipToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FriendBackendController_FriendRequestRequest::*)()>(&::GlobalNamespace::FriendBackendController_FriendRequestRequest::get_MothershipToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0c28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendRequestRequest*>(),
                        {"get_MothershipToken", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_FriendRequestRequest.set_MothershipToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController_FriendRequestRequest::*)(::StringW)>(&::GlobalNamespace::FriendBackendController_FriendRequestRequest::set_MothershipToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendRequestRequest*>(),
                        {"set_MothershipToken", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_FriendRequestRequest.get_MyFriendLinkId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FriendBackendController_FriendRequestRequest::*)()>(&::GlobalNamespace::FriendBackendController_FriendRequestRequest::get_MyFriendLinkId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0c38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendRequestRequest*>(),
                        {"get_MyFriendLinkId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_FriendRequestRequest.set_MyFriendLinkId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController_FriendRequestRequest::*)(::StringW)>(&::GlobalNamespace::FriendBackendController_FriendRequestRequest::set_MyFriendLinkId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendRequestRequest*>(),
                        {"set_MyFriendLinkId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_FriendRequestRequest.get_FriendFriendLinkId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FriendBackendController_FriendRequestRequest::*)()>(&::GlobalNamespace::FriendBackendController_FriendRequestRequest::get_FriendFriendLinkId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0c48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendRequestRequest*>(),
                        {"get_FriendFriendLinkId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_FriendRequestRequest.set_FriendFriendLinkId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController_FriendRequestRequest::*)(::StringW)>(&::GlobalNamespace::FriendBackendController_FriendRequestRequest::set_FriendFriendLinkId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendRequestRequest*>(),
                        {"set_FriendFriendLinkId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_FriendRequestRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController_FriendRequestRequest::*)()>(&::GlobalNamespace::FriendBackendController_FriendRequestRequest::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5a9f7a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendRequestRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::FriendBackendController_FriendRequestRequest::__cordl_internal_get__PlayFabId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayFabId_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::FriendBackendController_FriendRequestRequest::__cordl_internal_get__PlayFabId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayFabId_k__BackingField;
}
constexpr void GlobalNamespace::FriendBackendController_FriendRequestRequest::__cordl_internal_set__PlayFabId_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PlayFabId_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::FriendBackendController_FriendRequestRequest::__cordl_internal_get__MothershipId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MothershipId_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::FriendBackendController_FriendRequestRequest::__cordl_internal_get__MothershipId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MothershipId_k__BackingField;
}
constexpr void GlobalNamespace::FriendBackendController_FriendRequestRequest::__cordl_internal_set__MothershipId_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MothershipId_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::FriendBackendController_FriendRequestRequest::__cordl_internal_get__PlayFabTicket_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayFabTicket_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::FriendBackendController_FriendRequestRequest::__cordl_internal_get__PlayFabTicket_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayFabTicket_k__BackingField;
}
constexpr void GlobalNamespace::FriendBackendController_FriendRequestRequest::__cordl_internal_set__PlayFabTicket_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PlayFabTicket_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::FriendBackendController_FriendRequestRequest::__cordl_internal_get__MothershipToken_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MothershipToken_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::FriendBackendController_FriendRequestRequest::__cordl_internal_get__MothershipToken_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MothershipToken_k__BackingField;
}
constexpr void GlobalNamespace::FriendBackendController_FriendRequestRequest::__cordl_internal_set__MothershipToken_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MothershipToken_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::FriendBackendController_FriendRequestRequest::__cordl_internal_get__MyFriendLinkId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MyFriendLinkId_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::FriendBackendController_FriendRequestRequest::__cordl_internal_get__MyFriendLinkId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MyFriendLinkId_k__BackingField;
}
constexpr void GlobalNamespace::FriendBackendController_FriendRequestRequest::__cordl_internal_set__MyFriendLinkId_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MyFriendLinkId_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::FriendBackendController_FriendRequestRequest::__cordl_internal_get__FriendFriendLinkId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FriendFriendLinkId_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::FriendBackendController_FriendRequestRequest::__cordl_internal_get__FriendFriendLinkId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FriendFriendLinkId_k__BackingField;
}
constexpr void GlobalNamespace::FriendBackendController_FriendRequestRequest::__cordl_internal_set__FriendFriendLinkId_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FriendFriendLinkId_k__BackingField = value;
}
inline ::StringW GlobalNamespace::FriendBackendController_FriendRequestRequest::get_PlayFabId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendRequestRequest*>(),
                        {"get_PlayFabId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::FriendBackendController_FriendRequestRequest::set_PlayFabId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendRequestRequest*>(),
                        {"set_PlayFabId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::FriendBackendController_FriendRequestRequest::get_MothershipId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendRequestRequest*>(),
                        {"get_MothershipId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::FriendBackendController_FriendRequestRequest::set_MothershipId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendRequestRequest*>(),
                        {"set_MothershipId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::FriendBackendController_FriendRequestRequest::get_PlayFabTicket()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendRequestRequest*>(),
                        {"get_PlayFabTicket", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::FriendBackendController_FriendRequestRequest::set_PlayFabTicket(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendRequestRequest*>(),
                        {"set_PlayFabTicket", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::FriendBackendController_FriendRequestRequest::get_MothershipToken()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendRequestRequest*>(),
                        {"get_MothershipToken", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::FriendBackendController_FriendRequestRequest::set_MothershipToken(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendRequestRequest*>(),
                        {"set_MothershipToken", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::FriendBackendController_FriendRequestRequest::get_MyFriendLinkId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendRequestRequest*>(),
                        {"get_MyFriendLinkId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::FriendBackendController_FriendRequestRequest::set_MyFriendLinkId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendRequestRequest*>(),
                        {"set_MyFriendLinkId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::FriendBackendController_FriendRequestRequest::get_FriendFriendLinkId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendRequestRequest*>(),
                        {"get_FriendFriendLinkId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::FriendBackendController_FriendRequestRequest::set_FriendFriendLinkId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendRequestRequest*>(),
                        {"set_FriendFriendLinkId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::FriendBackendController_FriendRequestRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendRequestRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FriendBackendController_FriendRequestRequest* GlobalNamespace::FriendBackendController_FriendRequestRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FriendBackendController_FriendRequestRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FriendBackendController_FriendRequestRequest::FriendBackendController_FriendRequestRequest()   {
}
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_FriendIdResponse.get_PlayFabId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FriendBackendController_FriendIdResponse::*)()>(&::GlobalNamespace::FriendBackendController_FriendIdResponse::get_PlayFabId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendIdResponse*>(),
                        {"get_PlayFabId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_FriendIdResponse.set_PlayFabId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController_FriendIdResponse::*)(::StringW)>(&::GlobalNamespace::FriendBackendController_FriendIdResponse::set_PlayFabId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0b88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendIdResponse*>(),
                        {"set_PlayFabId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_FriendIdResponse.get_MothershipId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FriendBackendController_FriendIdResponse::*)()>(&::GlobalNamespace::FriendBackendController_FriendIdResponse::get_MothershipId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendIdResponse*>(),
                        {"get_MothershipId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_FriendIdResponse.set_MothershipId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController_FriendIdResponse::*)(::StringW)>(&::GlobalNamespace::FriendBackendController_FriendIdResponse::set_MothershipId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0b98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendIdResponse*>(),
                        {"set_MothershipId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_FriendIdResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController_FriendIdResponse::*)()>(&::GlobalNamespace::FriendBackendController_FriendIdResponse::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5aa0ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendIdResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::FriendBackendController_FriendIdResponse::__cordl_internal_get__PlayFabId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayFabId_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::FriendBackendController_FriendIdResponse::__cordl_internal_get__PlayFabId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayFabId_k__BackingField;
}
constexpr void GlobalNamespace::FriendBackendController_FriendIdResponse::__cordl_internal_set__PlayFabId_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PlayFabId_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::FriendBackendController_FriendIdResponse::__cordl_internal_get__MothershipId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MothershipId_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::FriendBackendController_FriendIdResponse::__cordl_internal_get__MothershipId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MothershipId_k__BackingField;
}
constexpr void GlobalNamespace::FriendBackendController_FriendIdResponse::__cordl_internal_set__MothershipId_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MothershipId_k__BackingField = value;
}
inline ::StringW GlobalNamespace::FriendBackendController_FriendIdResponse::get_PlayFabId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendIdResponse*>(),
                        {"get_PlayFabId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::FriendBackendController_FriendIdResponse::set_PlayFabId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendIdResponse*>(),
                        {"set_PlayFabId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::FriendBackendController_FriendIdResponse::get_MothershipId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendIdResponse*>(),
                        {"get_MothershipId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::FriendBackendController_FriendIdResponse::set_MothershipId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendIdResponse*>(),
                        {"set_MothershipId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::FriendBackendController_FriendIdResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendIdResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FriendBackendController_FriendIdResponse* GlobalNamespace::FriendBackendController_FriendIdResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FriendBackendController_FriendIdResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FriendBackendController_FriendIdResponse::FriendBackendController_FriendIdResponse()   {
}
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_FriendLink.get_my_playfab_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FriendBackendController_FriendLink::*)()>(&::GlobalNamespace::FriendBackendController_FriendLink::get_my_playfab_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0b08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendLink*>(),
                        {"get_my_playfab_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_FriendLink.set_my_playfab_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController_FriendLink::*)(::StringW)>(&::GlobalNamespace::FriendBackendController_FriendLink::set_my_playfab_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendLink*>(),
                        {"set_my_playfab_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_FriendLink.get_my_mothership_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FriendBackendController_FriendLink::*)()>(&::GlobalNamespace::FriendBackendController_FriendLink::get_my_mothership_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0b18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendLink*>(),
                        {"get_my_mothership_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_FriendLink.set_my_mothership_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController_FriendLink::*)(::StringW)>(&::GlobalNamespace::FriendBackendController_FriendLink::set_my_mothership_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendLink*>(),
                        {"set_my_mothership_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_FriendLink.get_my_friendlink_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FriendBackendController_FriendLink::*)()>(&::GlobalNamespace::FriendBackendController_FriendLink::get_my_friendlink_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0b28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendLink*>(),
                        {"get_my_friendlink_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_FriendLink.set_my_friendlink_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController_FriendLink::*)(::StringW)>(&::GlobalNamespace::FriendBackendController_FriendLink::set_my_friendlink_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendLink*>(),
                        {"set_my_friendlink_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_FriendLink.get_friend_playfab_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FriendBackendController_FriendLink::*)()>(&::GlobalNamespace::FriendBackendController_FriendLink::get_friend_playfab_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendLink*>(),
                        {"get_friend_playfab_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_FriendLink.set_friend_playfab_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController_FriendLink::*)(::StringW)>(&::GlobalNamespace::FriendBackendController_FriendLink::set_friend_playfab_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendLink*>(),
                        {"set_friend_playfab_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_FriendLink.get_friend_mothership_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FriendBackendController_FriendLink::*)()>(&::GlobalNamespace::FriendBackendController_FriendLink::get_friend_mothership_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendLink*>(),
                        {"get_friend_mothership_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_FriendLink.set_friend_mothership_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController_FriendLink::*)(::StringW)>(&::GlobalNamespace::FriendBackendController_FriendLink::set_friend_mothership_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendLink*>(),
                        {"set_friend_mothership_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_FriendLink.get_friend_friendlink_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FriendBackendController_FriendLink::*)()>(&::GlobalNamespace::FriendBackendController_FriendLink::get_friend_friendlink_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendLink*>(),
                        {"get_friend_friendlink_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_FriendLink.set_friend_friendlink_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController_FriendLink::*)(::StringW)>(&::GlobalNamespace::FriendBackendController_FriendLink::set_friend_friendlink_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendLink*>(),
                        {"set_friend_friendlink_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_FriendLink.get_created
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::GlobalNamespace::FriendBackendController_FriendLink::*)()>(&::GlobalNamespace::FriendBackendController_FriendLink::get_created)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0b68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendLink*>(),
                        {"get_created", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_FriendLink.set_created
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController_FriendLink::*)(::System::DateTime)>(&::GlobalNamespace::FriendBackendController_FriendLink::set_created)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendLink*>(),
                        {"set_created", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_FriendLink._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController_FriendLink::*)()>(&::GlobalNamespace::FriendBackendController_FriendLink::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0b78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendLink*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::FriendBackendController_FriendLink::__cordl_internal_get__my_playfab_id_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____my_playfab_id_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::FriendBackendController_FriendLink::__cordl_internal_get__my_playfab_id_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____my_playfab_id_k__BackingField;
}
constexpr void GlobalNamespace::FriendBackendController_FriendLink::__cordl_internal_set__my_playfab_id_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____my_playfab_id_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::FriendBackendController_FriendLink::__cordl_internal_get__my_mothership_id_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____my_mothership_id_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::FriendBackendController_FriendLink::__cordl_internal_get__my_mothership_id_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____my_mothership_id_k__BackingField;
}
constexpr void GlobalNamespace::FriendBackendController_FriendLink::__cordl_internal_set__my_mothership_id_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____my_mothership_id_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::FriendBackendController_FriendLink::__cordl_internal_get__my_friendlink_id_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____my_friendlink_id_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::FriendBackendController_FriendLink::__cordl_internal_get__my_friendlink_id_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____my_friendlink_id_k__BackingField;
}
constexpr void GlobalNamespace::FriendBackendController_FriendLink::__cordl_internal_set__my_friendlink_id_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____my_friendlink_id_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::FriendBackendController_FriendLink::__cordl_internal_get__friend_playfab_id_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____friend_playfab_id_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::FriendBackendController_FriendLink::__cordl_internal_get__friend_playfab_id_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____friend_playfab_id_k__BackingField;
}
constexpr void GlobalNamespace::FriendBackendController_FriendLink::__cordl_internal_set__friend_playfab_id_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____friend_playfab_id_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::FriendBackendController_FriendLink::__cordl_internal_get__friend_mothership_id_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____friend_mothership_id_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::FriendBackendController_FriendLink::__cordl_internal_get__friend_mothership_id_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____friend_mothership_id_k__BackingField;
}
constexpr void GlobalNamespace::FriendBackendController_FriendLink::__cordl_internal_set__friend_mothership_id_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____friend_mothership_id_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::FriendBackendController_FriendLink::__cordl_internal_get__friend_friendlink_id_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____friend_friendlink_id_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::FriendBackendController_FriendLink::__cordl_internal_get__friend_friendlink_id_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____friend_friendlink_id_k__BackingField;
}
constexpr void GlobalNamespace::FriendBackendController_FriendLink::__cordl_internal_set__friend_friendlink_id_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____friend_friendlink_id_k__BackingField = value;
}
constexpr ::System::DateTime& GlobalNamespace::FriendBackendController_FriendLink::__cordl_internal_get__created_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____created_k__BackingField;
}
constexpr ::System::DateTime const& GlobalNamespace::FriendBackendController_FriendLink::__cordl_internal_get__created_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____created_k__BackingField;
}
constexpr void GlobalNamespace::FriendBackendController_FriendLink::__cordl_internal_set__created_k__BackingField(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____created_k__BackingField = value;
}
inline ::StringW GlobalNamespace::FriendBackendController_FriendLink::get_my_playfab_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendLink*>(),
                        {"get_my_playfab_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::FriendBackendController_FriendLink::set_my_playfab_id(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendLink*>(),
                        {"set_my_playfab_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::FriendBackendController_FriendLink::get_my_mothership_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendLink*>(),
                        {"get_my_mothership_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::FriendBackendController_FriendLink::set_my_mothership_id(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendLink*>(),
                        {"set_my_mothership_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::FriendBackendController_FriendLink::get_my_friendlink_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendLink*>(),
                        {"get_my_friendlink_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::FriendBackendController_FriendLink::set_my_friendlink_id(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendLink*>(),
                        {"set_my_friendlink_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::FriendBackendController_FriendLink::get_friend_playfab_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendLink*>(),
                        {"get_friend_playfab_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::FriendBackendController_FriendLink::set_friend_playfab_id(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendLink*>(),
                        {"set_friend_playfab_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::FriendBackendController_FriendLink::get_friend_mothership_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendLink*>(),
                        {"get_friend_mothership_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::FriendBackendController_FriendLink::set_friend_mothership_id(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendLink*>(),
                        {"set_friend_mothership_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::FriendBackendController_FriendLink::get_friend_friendlink_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendLink*>(),
                        {"get_friend_friendlink_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::FriendBackendController_FriendLink::set_friend_friendlink_id(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendLink*>(),
                        {"set_friend_friendlink_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::DateTime GlobalNamespace::FriendBackendController_FriendLink::get_created()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendLink*>(),
                        {"get_created", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline void GlobalNamespace::FriendBackendController_FriendLink::set_created(::System::DateTime  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendLink*>(),
                        {"set_created", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::FriendBackendController_FriendLink::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendLink*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FriendBackendController_FriendLink* GlobalNamespace::FriendBackendController_FriendLink::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FriendBackendController_FriendLink*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FriendBackendController_FriendLink::FriendBackendController_FriendLink()   {
}
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_FriendPresence.get_FriendLinkId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FriendBackendController_FriendPresence::*)()>(&::GlobalNamespace::FriendBackendController_FriendPresence::get_FriendLinkId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0aa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendPresence*>(),
                        {"get_FriendLinkId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_FriendPresence.set_FriendLinkId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController_FriendPresence::*)(::StringW)>(&::GlobalNamespace::FriendBackendController_FriendPresence::set_FriendLinkId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendPresence*>(),
                        {"set_FriendLinkId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_FriendPresence.get_UserName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FriendBackendController_FriendPresence::*)()>(&::GlobalNamespace::FriendBackendController_FriendPresence::get_UserName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendPresence*>(),
                        {"get_UserName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_FriendPresence.set_UserName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController_FriendPresence::*)(::StringW)>(&::GlobalNamespace::FriendBackendController_FriendPresence::set_UserName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendPresence*>(),
                        {"set_UserName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_FriendPresence.get_RoomId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FriendBackendController_FriendPresence::*)()>(&::GlobalNamespace::FriendBackendController_FriendPresence::get_RoomId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendPresence*>(),
                        {"get_RoomId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_FriendPresence.set_RoomId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController_FriendPresence::*)(::StringW)>(&::GlobalNamespace::FriendBackendController_FriendPresence::set_RoomId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendPresence*>(),
                        {"set_RoomId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_FriendPresence.get_Zone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FriendBackendController_FriendPresence::*)()>(&::GlobalNamespace::FriendBackendController_FriendPresence::get_Zone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0ad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendPresence*>(),
                        {"get_Zone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_FriendPresence.set_Zone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController_FriendPresence::*)(::StringW)>(&::GlobalNamespace::FriendBackendController_FriendPresence::set_Zone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendPresence*>(),
                        {"set_Zone", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_FriendPresence.get_Region
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FriendBackendController_FriendPresence::*)()>(&::GlobalNamespace::FriendBackendController_FriendPresence::get_Region)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0ae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendPresence*>(),
                        {"get_Region", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_FriendPresence.set_Region
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController_FriendPresence::*)(::StringW)>(&::GlobalNamespace::FriendBackendController_FriendPresence::set_Region)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendPresence*>(),
                        {"set_Region", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_FriendPresence.get_IsPublic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<bool> (::GlobalNamespace::FriendBackendController_FriendPresence::*)()>(&::GlobalNamespace::FriendBackendController_FriendPresence::get_IsPublic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0af8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendPresence*>(),
                        {"get_IsPublic", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_FriendPresence.set_IsPublic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController_FriendPresence::*)(::System::Nullable_1<bool>)>(&::GlobalNamespace::FriendBackendController_FriendPresence::set_IsPublic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendPresence*>(),
                        {"set_IsPublic", {}, {::i2c::type_of<::System::Nullable_1<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_FriendPresence._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController_FriendPresence::*)()>(&::GlobalNamespace::FriendBackendController_FriendPresence::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a9f5fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendPresence*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::FriendBackendController_FriendPresence::__cordl_internal_get__FriendLinkId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FriendLinkId_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::FriendBackendController_FriendPresence::__cordl_internal_get__FriendLinkId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FriendLinkId_k__BackingField;
}
constexpr void GlobalNamespace::FriendBackendController_FriendPresence::__cordl_internal_set__FriendLinkId_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FriendLinkId_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::FriendBackendController_FriendPresence::__cordl_internal_get__UserName_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UserName_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::FriendBackendController_FriendPresence::__cordl_internal_get__UserName_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UserName_k__BackingField;
}
constexpr void GlobalNamespace::FriendBackendController_FriendPresence::__cordl_internal_set__UserName_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UserName_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::FriendBackendController_FriendPresence::__cordl_internal_get__RoomId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RoomId_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::FriendBackendController_FriendPresence::__cordl_internal_get__RoomId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RoomId_k__BackingField;
}
constexpr void GlobalNamespace::FriendBackendController_FriendPresence::__cordl_internal_set__RoomId_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RoomId_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::FriendBackendController_FriendPresence::__cordl_internal_get__Zone_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Zone_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::FriendBackendController_FriendPresence::__cordl_internal_get__Zone_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Zone_k__BackingField;
}
constexpr void GlobalNamespace::FriendBackendController_FriendPresence::__cordl_internal_set__Zone_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Zone_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::FriendBackendController_FriendPresence::__cordl_internal_get__Region_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Region_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::FriendBackendController_FriendPresence::__cordl_internal_get__Region_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Region_k__BackingField;
}
constexpr void GlobalNamespace::FriendBackendController_FriendPresence::__cordl_internal_set__Region_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Region_k__BackingField = value;
}
constexpr ::System::Nullable_1<bool>& GlobalNamespace::FriendBackendController_FriendPresence::__cordl_internal_get__IsPublic_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsPublic_k__BackingField;
}
constexpr ::System::Nullable_1<bool> const& GlobalNamespace::FriendBackendController_FriendPresence::__cordl_internal_get__IsPublic_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsPublic_k__BackingField;
}
constexpr void GlobalNamespace::FriendBackendController_FriendPresence::__cordl_internal_set__IsPublic_k__BackingField(::System::Nullable_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsPublic_k__BackingField = value;
}
inline ::StringW GlobalNamespace::FriendBackendController_FriendPresence::get_FriendLinkId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendPresence*>(),
                        {"get_FriendLinkId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::FriendBackendController_FriendPresence::set_FriendLinkId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendPresence*>(),
                        {"set_FriendLinkId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::FriendBackendController_FriendPresence::get_UserName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendPresence*>(),
                        {"get_UserName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::FriendBackendController_FriendPresence::set_UserName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendPresence*>(),
                        {"set_UserName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::FriendBackendController_FriendPresence::get_RoomId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendPresence*>(),
                        {"get_RoomId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::FriendBackendController_FriendPresence::set_RoomId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendPresence*>(),
                        {"set_RoomId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::FriendBackendController_FriendPresence::get_Zone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendPresence*>(),
                        {"get_Zone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::FriendBackendController_FriendPresence::set_Zone(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendPresence*>(),
                        {"set_Zone", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::FriendBackendController_FriendPresence::get_Region()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendPresence*>(),
                        {"get_Region", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::FriendBackendController_FriendPresence::set_Region(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendPresence*>(),
                        {"set_Region", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<bool> GlobalNamespace::FriendBackendController_FriendPresence::get_IsPublic()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendPresence*>(),
                        {"get_IsPublic", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<bool>>(this, ___internal_method);
}
inline void GlobalNamespace::FriendBackendController_FriendPresence::set_IsPublic(::System::Nullable_1<bool>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendPresence*>(),
                        {"set_IsPublic", {}, {::i2c::type_of<::System::Nullable_1<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::FriendBackendController_FriendPresence::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_FriendPresence*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FriendBackendController_FriendPresence* GlobalNamespace::FriendBackendController_FriendPresence::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FriendBackendController_FriendPresence*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FriendBackendController_FriendPresence::FriendBackendController_FriendPresence()   {
}
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_Friend.get_Presence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::FriendBackendController_FriendPresence* (::GlobalNamespace::FriendBackendController_Friend::*)()>(&::GlobalNamespace::FriendBackendController_Friend::get_Presence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0a88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_Friend*>(),
                        {"get_Presence", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_Friend.set_Presence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController_Friend::*)(::GlobalNamespace::FriendBackendController_FriendPresence*)>(&::GlobalNamespace::FriendBackendController_Friend::set_Presence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_Friend*>(),
                        {"set_Presence", {}, {::i2c::type_of<::GlobalNamespace::FriendBackendController_FriendPresence*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_Friend.get_Created
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::GlobalNamespace::FriendBackendController_Friend::*)()>(&::GlobalNamespace::FriendBackendController_Friend::get_Created)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_Friend*>(),
                        {"get_Created", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_Friend.set_Created
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController_Friend::*)(::System::DateTime)>(&::GlobalNamespace::FriendBackendController_Friend::set_Created)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa0aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_Friend*>(),
                        {"set_Created", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendBackendController_Friend._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendBackendController_Friend::*)()>(&::GlobalNamespace::FriendBackendController_Friend::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a9f604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_Friend*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::FriendBackendController_FriendPresence*& GlobalNamespace::FriendBackendController_Friend::__cordl_internal_get__Presence_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Presence_k__BackingField;
}
constexpr ::GlobalNamespace::FriendBackendController_FriendPresence* const& GlobalNamespace::FriendBackendController_Friend::__cordl_internal_get__Presence_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Presence_k__BackingField;
}
constexpr void GlobalNamespace::FriendBackendController_Friend::__cordl_internal_set__Presence_k__BackingField(::GlobalNamespace::FriendBackendController_FriendPresence*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Presence_k__BackingField = value;
}
constexpr ::System::DateTime& GlobalNamespace::FriendBackendController_Friend::__cordl_internal_get__Created_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Created_k__BackingField;
}
constexpr ::System::DateTime const& GlobalNamespace::FriendBackendController_Friend::__cordl_internal_get__Created_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Created_k__BackingField;
}
constexpr void GlobalNamespace::FriendBackendController_Friend::__cordl_internal_set__Created_k__BackingField(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Created_k__BackingField = value;
}
inline ::GlobalNamespace::FriendBackendController_FriendPresence* GlobalNamespace::FriendBackendController_Friend::get_Presence()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_Friend*>(),
                        {"get_Presence", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::FriendBackendController_FriendPresence*>(this, ___internal_method);
}
inline void GlobalNamespace::FriendBackendController_Friend::set_Presence(::GlobalNamespace::FriendBackendController_FriendPresence*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_Friend*>(),
                        {"set_Presence", {}, {::i2c::type_of<::GlobalNamespace::FriendBackendController_FriendPresence*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::DateTime GlobalNamespace::FriendBackendController_Friend::get_Created()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_Friend*>(),
                        {"get_Created", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline void GlobalNamespace::FriendBackendController_Friend::set_Created(::System::DateTime  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_Friend*>(),
                        {"set_Created", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::FriendBackendController_Friend::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendBackendController_Friend*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FriendBackendController_Friend* GlobalNamespace::FriendBackendController_Friend::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FriendBackendController_Friend*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FriendBackendController_Friend::FriendBackendController_Friend()   {
}
