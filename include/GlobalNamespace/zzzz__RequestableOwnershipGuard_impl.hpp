#pragma once
// IWYU pragma private; include "GlobalNamespace/RequestableOwnershipGuard.hpp"
#include "GlobalNamespace/zzzz__NetworkView_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkingState_impl.hpp"
#include "Photon/Pun/zzzz__MonoBehaviourPunCallbacks_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RequestableOwnershipGuard_def.hpp"
#include "GlobalNamespace/zzzz__IRequestableOwnershipGuardCallbacks_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__NetworkView_def.hpp"
#include "GlobalNamespace/zzzz__NetworkingState_def.hpp"
#include "GlobalNamespace/zzzz__RequestableOwnershipGuard_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "Sirenix/OdinInspector/zzzz__ISelfValidator_def.hpp"
#include "Sirenix/OdinInspector/zzzz__SelfValidationResult_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuard.SetViewToRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuard::*)()>(&::GlobalNamespace::RequestableOwnershipGuard::SetViewToRequest)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x56a8a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"SetViewToRequest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuard.get_netView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::NetworkView> (::GlobalNamespace::RequestableOwnershipGuard::*)()>(&::GlobalNamespace::RequestableOwnershipGuard::get_netView)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x56a8aec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"get_netView", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuard.get_isTrulyMine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RequestableOwnershipGuard::*)()>(&::GlobalNamespace::RequestableOwnershipGuard::get_isTrulyMine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x56a8b18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"get_isTrulyMine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuard.get_isMine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RequestableOwnershipGuard::*)()>(&::GlobalNamespace::RequestableOwnershipGuard::get_isMine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x56a8b94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"get_isMine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuard.BindNetworkViews
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuard::*)()>(&::GlobalNamespace::RequestableOwnershipGuard::BindNetworkViews)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x56a8c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"BindNetworkViews", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuard.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuard::*)()>(&::GlobalNamespace::RequestableOwnershipGuard::OnDisable)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x56a8c68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                    {::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuard.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuard::*)()>(&::GlobalNamespace::RequestableOwnershipGuard::OnEnable)> {
  constexpr static std::size_t size = 0x538;
  constexpr static std::size_t addrs = 0x56a8f4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                    {::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuard.PlayerEnteredRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuard::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::RequestableOwnershipGuard::PlayerEnteredRoom)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x56a9770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"PlayerEnteredRoom", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuard.OnPreLeavingRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuard::*)()>(&::GlobalNamespace::RequestableOwnershipGuard::OnPreLeavingRoom)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x56a99fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                    {::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(), 55}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuard.JoinedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuard::*)()>(&::GlobalNamespace::RequestableOwnershipGuard::JoinedRoom)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x56a9c04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"JoinedRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuard.PlayerLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuard::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::RequestableOwnershipGuard::PlayerLeftRoom)> {
  constexpr static std::size_t size = 0x5c4;
  constexpr static std::size_t addrs = 0x56a9d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"PlayerLeftRoom", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuard.MasterClientSwitch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuard::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::RequestableOwnershipGuard::MasterClientSwitch)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x56aa2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"MasterClientSwitch", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuard.RequestCurrentOwnerFromAuthorityRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuard::*)(::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::RequestableOwnershipGuard::RequestCurrentOwnerFromAuthorityRPC)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x56aa438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"RequestCurrentOwnerFromAuthorityRPC", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuard.TransferOwnershipFromToRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuard::*)(::Photon::Realtime::Player*, ::StringW, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::RequestableOwnershipGuard::TransferOwnershipFromToRPC)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0x56aa6e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"TransferOwnershipFromToRPC", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuard.SetOwnershipFromMasterClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuard::*)(::Photon::Realtime::Player*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::RequestableOwnershipGuard::SetOwnershipFromMasterClient)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x56aab50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"SetOwnershipFromMasterClient", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuard.SetOwnershipFromMasterClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuard::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::RequestableOwnershipGuard::SetOwnershipFromMasterClient)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x56aac78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"SetOwnershipFromMasterClient", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuard.OwnershipRequested
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuard::*)(::StringW, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::RequestableOwnershipGuard::OwnershipRequested)> {
  constexpr static std::size_t size = 0x468;
  constexpr static std::size_t addrs = 0x56ab0b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"OwnershipRequested", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuard.TransferOwnershipWithID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuard::*)(int32_t)>(&::GlobalNamespace::RequestableOwnershipGuard::TransferOwnershipWithID)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x56ab83c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"TransferOwnershipWithID", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuard.TransferOwnership
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuard::*)(::GlobalNamespace::NetPlayer*, ::StringW)>(&::GlobalNamespace::RequestableOwnershipGuard::TransferOwnership)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x56ab51c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"TransferOwnership", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuard.RequestTheCurrentOwnerFromAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuard::*)()>(&::GlobalNamespace::RequestableOwnershipGuard::RequestTheCurrentOwnerFromAuthority)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x56a967c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"RequestTheCurrentOwnerFromAuthority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuard.SetCurrentOwner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuard::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::RequestableOwnershipGuard::SetCurrentOwner)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x56ab964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"SetCurrentOwner", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuard.SetOwnership
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuard::*)(::GlobalNamespace::NetPlayer*, bool, bool)>(&::GlobalNamespace::RequestableOwnershipGuard::SetOwnership)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x56a9484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"SetOwnership", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuard.GetAuthoritativePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NetPlayer* (::GlobalNamespace::RequestableOwnershipGuard::*)()>(&::GlobalNamespace::RequestableOwnershipGuard::GetAuthoritativePlayer)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x56ab8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"GetAuthoritativePlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuard.OwnershipRequestDenied
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuard::*)(::StringW, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::RequestableOwnershipGuard::OwnershipRequestDenied)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x56aba64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"OwnershipRequestDenied", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuard.RequestTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::RequestableOwnershipGuard::*)()>(&::GlobalNamespace::RequestableOwnershipGuard::RequestTimeout)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x56abd48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"RequestTimeout", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuard.RequestOwnership
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuard::*)(::System::Action*, ::System::Action*)>(&::GlobalNamespace::RequestableOwnershipGuard::RequestOwnership)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x56abddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"RequestOwnership", {}, {::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuard.RequestOwnershipImmediately
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuard::*)(::System::Action*)>(&::GlobalNamespace::RequestableOwnershipGuard::RequestOwnershipImmediately)> {
  constexpr static std::size_t size = 0x494;
  constexpr static std::size_t addrs = 0x56ac0e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"RequestOwnershipImmediately", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuard.RequestOwnershipImmediatelyWithGuaranteedAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuard::*)()>(&::GlobalNamespace::RequestableOwnershipGuard::RequestOwnershipImmediatelyWithGuaranteedAuthority)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x56ac57c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"RequestOwnershipImmediatelyWithGuaranteedAuthority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuard.AddCallbackTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuard::*)(::GlobalNamespace::IRequestableOwnershipGuardCallbacks*)>(&::GlobalNamespace::RequestableOwnershipGuard::AddCallbackTarget)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x56ac8b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"AddCallbackTarget", {}, {::i2c::type_of<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuard.RemoveCallbackTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuard::*)(::GlobalNamespace::IRequestableOwnershipGuardCallbacks*)>(&::GlobalNamespace::RequestableOwnershipGuard::RemoveCallbackTarget)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x56aca18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"RemoveCallbackTarget", {}, {::i2c::type_of<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuard.SetCreator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuard::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::RequestableOwnershipGuard::SetCreator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56acb28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"SetCreator", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuard.get_EdCurrentState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NetworkingState (::GlobalNamespace::RequestableOwnershipGuard::*)()>(&::GlobalNamespace::RequestableOwnershipGuard::get_EdCurrentState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56acb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"get_EdCurrentState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuard.Validate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuard::*)(::Sirenix::OdinInspector::SelfValidationResult*)>(&::GlobalNamespace::RequestableOwnershipGuard::Validate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56acb38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"Validate", {}, {::i2c::type_of<::Sirenix::OdinInspector::SelfValidationResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuard.PlayerHasAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RequestableOwnershipGuard::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::RequestableOwnershipGuard::PlayerHasAuthority)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x56a9660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"PlayerHasAuthority", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuard._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuard::*)()>(&::GlobalNamespace::RequestableOwnershipGuard::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x56acb3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuard._OnEnable_b__22_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuard::*)()>(&::GlobalNamespace::RequestableOwnershipGuard::_OnEnable_b__22_0)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x56acbcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"<OnEnable>b__22_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::NetworkingState& GlobalNamespace::RequestableOwnershipGuard::__cordl_internal_get_currentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr ::GlobalNamespace::NetworkingState const& GlobalNamespace::RequestableOwnershipGuard::__cordl_internal_get_currentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr void GlobalNamespace::RequestableOwnershipGuard::__cordl_internal_set_currentState(::GlobalNamespace::NetworkingState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentState = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::NetworkView>>& GlobalNamespace::RequestableOwnershipGuard::__cordl_internal_get_netViews()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netViews;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::NetworkView>> const& GlobalNamespace::RequestableOwnershipGuard::__cordl_internal_get_netViews() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netViews;
}
constexpr void GlobalNamespace::RequestableOwnershipGuard::__cordl_internal_set_netViews(::ArrayW<::UnityW<::GlobalNamespace::NetworkView>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___netViews = value;
}
constexpr bool& GlobalNamespace::RequestableOwnershipGuard::__cordl_internal_get_autoRegister()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoRegister;
}
constexpr bool const& GlobalNamespace::RequestableOwnershipGuard::__cordl_internal_get_autoRegister() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoRegister;
}
constexpr void GlobalNamespace::RequestableOwnershipGuard::__cordl_internal_set_autoRegister(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoRegister = value;
}
constexpr ::GlobalNamespace::NetPlayer*& GlobalNamespace::RequestableOwnershipGuard::__cordl_internal_get_currentOwner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentOwner;
}
constexpr ::GlobalNamespace::NetPlayer* const& GlobalNamespace::RequestableOwnershipGuard::__cordl_internal_get_currentOwner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentOwner;
}
constexpr void GlobalNamespace::RequestableOwnershipGuard::__cordl_internal_set_currentOwner(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentOwner = value;
}
constexpr ::GlobalNamespace::NetPlayer*& GlobalNamespace::RequestableOwnershipGuard::__cordl_internal_get_currentMasterClient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentMasterClient;
}
constexpr ::GlobalNamespace::NetPlayer* const& GlobalNamespace::RequestableOwnershipGuard::__cordl_internal_get_currentMasterClient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentMasterClient;
}
constexpr void GlobalNamespace::RequestableOwnershipGuard::__cordl_internal_set_currentMasterClient(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentMasterClient = value;
}
constexpr ::GlobalNamespace::NetPlayer*& GlobalNamespace::RequestableOwnershipGuard::__cordl_internal_get_fallbackOwner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fallbackOwner;
}
constexpr ::GlobalNamespace::NetPlayer* const& GlobalNamespace::RequestableOwnershipGuard::__cordl_internal_get_fallbackOwner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fallbackOwner;
}
constexpr void GlobalNamespace::RequestableOwnershipGuard::__cordl_internal_set_fallbackOwner(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fallbackOwner = value;
}
constexpr ::GlobalNamespace::NetPlayer*& GlobalNamespace::RequestableOwnershipGuard::__cordl_internal_get_creator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___creator;
}
constexpr ::GlobalNamespace::NetPlayer* const& GlobalNamespace::RequestableOwnershipGuard::__cordl_internal_get_creator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___creator;
}
constexpr void GlobalNamespace::RequestableOwnershipGuard::__cordl_internal_set_creator(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___creator = value;
}
constexpr bool& GlobalNamespace::RequestableOwnershipGuard::__cordl_internal_get_giveCreatorAbsoluteAuthority()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___giveCreatorAbsoluteAuthority;
}
constexpr bool const& GlobalNamespace::RequestableOwnershipGuard::__cordl_internal_get_giveCreatorAbsoluteAuthority() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___giveCreatorAbsoluteAuthority;
}
constexpr void GlobalNamespace::RequestableOwnershipGuard::__cordl_internal_set_giveCreatorAbsoluteAuthority(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___giveCreatorAbsoluteAuthority = value;
}
constexpr bool& GlobalNamespace::RequestableOwnershipGuard::__cordl_internal_get_attemptMasterAssistedTakeoverOnDeny()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attemptMasterAssistedTakeoverOnDeny;
}
constexpr bool const& GlobalNamespace::RequestableOwnershipGuard::__cordl_internal_get_attemptMasterAssistedTakeoverOnDeny() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attemptMasterAssistedTakeoverOnDeny;
}
constexpr void GlobalNamespace::RequestableOwnershipGuard::__cordl_internal_set_attemptMasterAssistedTakeoverOnDeny(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attemptMasterAssistedTakeoverOnDeny = value;
}
constexpr ::System::Action*& GlobalNamespace::RequestableOwnershipGuard::__cordl_internal_get_ownershipDenied()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ownershipDenied;
}
constexpr ::System::Action* const& GlobalNamespace::RequestableOwnershipGuard::__cordl_internal_get_ownershipDenied() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ownershipDenied;
}
constexpr void GlobalNamespace::RequestableOwnershipGuard::__cordl_internal_set_ownershipDenied(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ownershipDenied = value;
}
constexpr ::System::Action*& GlobalNamespace::RequestableOwnershipGuard::__cordl_internal_get_ownershipRequestAccepted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ownershipRequestAccepted;
}
constexpr ::System::Action* const& GlobalNamespace::RequestableOwnershipGuard::__cordl_internal_get_ownershipRequestAccepted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ownershipRequestAccepted;
}
constexpr void GlobalNamespace::RequestableOwnershipGuard::__cordl_internal_set_ownershipRequestAccepted(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ownershipRequestAccepted = value;
}
constexpr ::GlobalNamespace::NetPlayer*& GlobalNamespace::RequestableOwnershipGuard::__cordl_internal_get_actualOwner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actualOwner;
}
constexpr ::GlobalNamespace::NetPlayer* const& GlobalNamespace::RequestableOwnershipGuard::__cordl_internal_get_actualOwner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actualOwner;
}
constexpr void GlobalNamespace::RequestableOwnershipGuard::__cordl_internal_set_actualOwner(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___actualOwner = value;
}
constexpr ::StringW& GlobalNamespace::RequestableOwnershipGuard::__cordl_internal_get_ownershipRequestNonce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ownershipRequestNonce;
}
constexpr ::StringW const& GlobalNamespace::RequestableOwnershipGuard::__cordl_internal_get_ownershipRequestNonce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ownershipRequestNonce;
}
constexpr void GlobalNamespace::RequestableOwnershipGuard::__cordl_internal_set_ownershipRequestNonce(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ownershipRequestNonce = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>*& GlobalNamespace::RequestableOwnershipGuard::__cordl_internal_get_callbacksList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callbacksList;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>* const& GlobalNamespace::RequestableOwnershipGuard::__cordl_internal_get_callbacksList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callbacksList;
}
constexpr void GlobalNamespace::RequestableOwnershipGuard::__cordl_internal_set_callbacksList(::System::Collections::Generic::List_1<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callbacksList = value;
}
inline void GlobalNamespace::RequestableOwnershipGuard::SetViewToRequest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"SetViewToRequest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::NetworkView> GlobalNamespace::RequestableOwnershipGuard::get_netView()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"get_netView", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::NetworkView>>(this, ___internal_method);
}
inline bool GlobalNamespace::RequestableOwnershipGuard::get_isTrulyMine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"get_isTrulyMine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::RequestableOwnershipGuard::get_isMine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"get_isMine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::RequestableOwnershipGuard::BindNetworkViews()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"BindNetworkViews", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RequestableOwnershipGuard::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RequestableOwnershipGuard::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RequestableOwnershipGuard::PlayerEnteredRoom(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"PlayerEnteredRoom", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::RequestableOwnershipGuard::OnPreLeavingRoom()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(), 55}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RequestableOwnershipGuard::JoinedRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"JoinedRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RequestableOwnershipGuard::PlayerLeftRoom(::GlobalNamespace::NetPlayer*  otherPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"PlayerLeftRoom", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, otherPlayer);
}
inline void GlobalNamespace::RequestableOwnershipGuard::MasterClientSwitch(::GlobalNamespace::NetPlayer*  newMaster)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"MasterClientSwitch", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newMaster);
}
inline void GlobalNamespace::RequestableOwnershipGuard::RequestCurrentOwnerFromAuthorityRPC(::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"RequestCurrentOwnerFromAuthorityRPC", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GlobalNamespace::RequestableOwnershipGuard::TransferOwnershipFromToRPC(/* [CanBeNull] */ ::Photon::Realtime::Player*  nextplayer, ::StringW  nonce, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"TransferOwnershipFromToRPC", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nextplayer, nonce, info);
}
inline void GlobalNamespace::RequestableOwnershipGuard::SetOwnershipFromMasterClient(/* [CanBeNull] */ ::Photon::Realtime::Player*  nextMaster, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"SetOwnershipFromMasterClient", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nextMaster, info);
}
inline void GlobalNamespace::RequestableOwnershipGuard::SetOwnershipFromMasterClient(/* [CanBeNull] */ ::GlobalNamespace::NetPlayer*  nextMaster, ::GlobalNamespace::NetPlayer*  sender)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"SetOwnershipFromMasterClient", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nextMaster, sender);
}
inline void GlobalNamespace::RequestableOwnershipGuard::OwnershipRequested(::StringW  nonce, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"OwnershipRequested", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nonce, info);
}
inline void GlobalNamespace::RequestableOwnershipGuard::TransferOwnershipWithID(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"TransferOwnershipWithID", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline void GlobalNamespace::RequestableOwnershipGuard::TransferOwnership(::GlobalNamespace::NetPlayer*  player, ::StringW  Nonce)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"TransferOwnership", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, Nonce);
}
inline void GlobalNamespace::RequestableOwnershipGuard::RequestTheCurrentOwnerFromAuthority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"RequestTheCurrentOwnerFromAuthority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RequestableOwnershipGuard::SetCurrentOwner(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"SetCurrentOwner", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::RequestableOwnershipGuard::SetOwnership(::GlobalNamespace::NetPlayer*  player, bool  isLocalOnly, bool  dontPropigate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"SetOwnership", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, isLocalOnly, dontPropigate);
}
inline ::GlobalNamespace::NetPlayer* GlobalNamespace::RequestableOwnershipGuard::GetAuthoritativePlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"GetAuthoritativePlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetPlayer*>(this, ___internal_method);
}
inline void GlobalNamespace::RequestableOwnershipGuard::OwnershipRequestDenied(::StringW  nonce, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"OwnershipRequestDenied", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nonce, info);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::RequestableOwnershipGuard::RequestTimeout()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"RequestTimeout", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::RequestableOwnershipGuard::RequestOwnership(::System::Action*  onRequestSuccess, ::System::Action*  onRequestFailed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"RequestOwnership", {}, {::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onRequestSuccess, onRequestFailed);
}
inline void GlobalNamespace::RequestableOwnershipGuard::RequestOwnershipImmediately(::System::Action*  onRequestFailed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"RequestOwnershipImmediately", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onRequestFailed);
}
inline void GlobalNamespace::RequestableOwnershipGuard::RequestOwnershipImmediatelyWithGuaranteedAuthority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"RequestOwnershipImmediatelyWithGuaranteedAuthority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RequestableOwnershipGuard::AddCallbackTarget(::GlobalNamespace::IRequestableOwnershipGuardCallbacks*  callbackObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"AddCallbackTarget", {}, {::i2c::type_of<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callbackObject);
}
inline void GlobalNamespace::RequestableOwnershipGuard::RemoveCallbackTarget(::GlobalNamespace::IRequestableOwnershipGuardCallbacks*  callbackObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"RemoveCallbackTarget", {}, {::i2c::type_of<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callbackObject);
}
inline void GlobalNamespace::RequestableOwnershipGuard::SetCreator(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"SetCreator", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline ::GlobalNamespace::NetworkingState GlobalNamespace::RequestableOwnershipGuard::get_EdCurrentState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"get_EdCurrentState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetworkingState>(this, ___internal_method);
}
inline void GlobalNamespace::RequestableOwnershipGuard::Validate(::Sirenix::OdinInspector::SelfValidationResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"Validate", {}, {::i2c::type_of<::Sirenix::OdinInspector::SelfValidationResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline bool GlobalNamespace::RequestableOwnershipGuard::PlayerHasAuthority(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"PlayerHasAuthority", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player);
}
inline void GlobalNamespace::RequestableOwnershipGuard::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RequestableOwnershipGuard::_OnEnable_b__22_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard*>(),
                        {"<OnEnable>b__22_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RequestableOwnershipGuard* GlobalNamespace::RequestableOwnershipGuard::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RequestableOwnershipGuard*>());
}
/// @brief Convert operator to "::Sirenix::OdinInspector::ISelfValidator"
constexpr  GlobalNamespace::RequestableOwnershipGuard::operator ::Sirenix::OdinInspector::ISelfValidator*() noexcept {
return static_cast<::Sirenix::OdinInspector::ISelfValidator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Sirenix::OdinInspector::ISelfValidator"
constexpr ::Sirenix::OdinInspector::ISelfValidator* GlobalNamespace::RequestableOwnershipGuard::i___Sirenix__OdinInspector__ISelfValidator() noexcept {
return static_cast<::Sirenix::OdinInspector::ISelfValidator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RequestableOwnershipGuard::RequestableOwnershipGuard()   {
}
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40::*)(int32_t)>(&::GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x56abdb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40::*)()>(&::GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56ad090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40::*)()>(&::GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40::MoveNext)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x56ad094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40::*)()>(&::GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56ad380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40::*)()>(&::GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x56ad388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40::*)()>(&::GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56ad3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::RequestableOwnershipGuard>& GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::RequestableOwnershipGuard> const& GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::RequestableOwnershipGuard>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40* GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RequestableOwnershipGuard__RequestTimeout_d__40::RequestableOwnershipGuard__RequestTimeout_d__40()   {
}
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuard___c__DisplayClass37_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuard___c__DisplayClass37_0::*)()>(&::GlobalNamespace::RequestableOwnershipGuard___c__DisplayClass37_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56aba5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard___c__DisplayClass37_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuard___c__DisplayClass37_0._SetOwnership_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuard___c__DisplayClass37_0::*)(::GlobalNamespace::IRequestableOwnershipGuardCallbacks*)>(&::GlobalNamespace::RequestableOwnershipGuard___c__DisplayClass37_0::_SetOwnership_b__0)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x56acfd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard___c__DisplayClass37_0*>(),
                        {"<SetOwnership>b__0", {}, {::i2c::type_of<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::NetPlayer*& GlobalNamespace::RequestableOwnershipGuard___c__DisplayClass37_0::__cordl_internal_get_player()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___player;
}
constexpr ::GlobalNamespace::NetPlayer* const& GlobalNamespace::RequestableOwnershipGuard___c__DisplayClass37_0::__cordl_internal_get_player() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___player;
}
constexpr void GlobalNamespace::RequestableOwnershipGuard___c__DisplayClass37_0::__cordl_internal_set_player(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___player = value;
}
constexpr ::UnityW<::GlobalNamespace::RequestableOwnershipGuard>& GlobalNamespace::RequestableOwnershipGuard___c__DisplayClass37_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::RequestableOwnershipGuard> const& GlobalNamespace::RequestableOwnershipGuard___c__DisplayClass37_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::RequestableOwnershipGuard___c__DisplayClass37_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::RequestableOwnershipGuard>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::RequestableOwnershipGuard___c__DisplayClass37_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard___c__DisplayClass37_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RequestableOwnershipGuard___c__DisplayClass37_0::_SetOwnership_b__0(::GlobalNamespace::IRequestableOwnershipGuardCallbacks*  actualOwner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard___c__DisplayClass37_0*>(),
                        {"<SetOwnership>b__0", {}, {::i2c::type_of<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, actualOwner);
}
inline ::GlobalNamespace::RequestableOwnershipGuard___c__DisplayClass37_0* GlobalNamespace::RequestableOwnershipGuard___c__DisplayClass37_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RequestableOwnershipGuard___c__DisplayClass37_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RequestableOwnershipGuard___c__DisplayClass37_0::RequestableOwnershipGuard___c__DisplayClass37_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuard___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuard___c::*)()>(&::GlobalNamespace::RequestableOwnershipGuard___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56accb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuard___c._OnPreLeavingRoom_b__24_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuard___c::*)(::GlobalNamespace::IRequestableOwnershipGuardCallbacks*)>(&::GlobalNamespace::RequestableOwnershipGuard___c::_OnPreLeavingRoom_b__24_0)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x56accb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard___c*>(),
                        {"<OnPreLeavingRoom>b__24_0", {}, {::i2c::type_of<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuard___c._PlayerLeftRoom_b__26_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuard___c::*)(::GlobalNamespace::IRequestableOwnershipGuardCallbacks*)>(&::GlobalNamespace::RequestableOwnershipGuard___c::_PlayerLeftRoom_b__26_0)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x56acd58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard___c*>(),
                        {"<PlayerLeftRoom>b__26_0", {}, {::i2c::type_of<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuard___c._PlayerLeftRoom_b__26_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuard___c::*)(::GlobalNamespace::IRequestableOwnershipGuardCallbacks*)>(&::GlobalNamespace::RequestableOwnershipGuard___c::_PlayerLeftRoom_b__26_1)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x56acdf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard___c*>(),
                        {"<PlayerLeftRoom>b__26_1", {}, {::i2c::type_of<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuard___c._PlayerLeftRoom_b__26_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuard___c::*)(::GlobalNamespace::IRequestableOwnershipGuardCallbacks*)>(&::GlobalNamespace::RequestableOwnershipGuard___c::_PlayerLeftRoom_b__26_2)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x56ace98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard___c*>(),
                        {"<PlayerLeftRoom>b__26_2", {}, {::i2c::type_of<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestableOwnershipGuard___c._PlayerLeftRoom_b__26_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestableOwnershipGuard___c::*)(::GlobalNamespace::IRequestableOwnershipGuardCallbacks*)>(&::GlobalNamespace::RequestableOwnershipGuard___c::_PlayerLeftRoom_b__26_3)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x56acf38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard___c*>(),
                        {"<PlayerLeftRoom>b__26_3", {}, {::i2c::type_of<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RequestableOwnershipGuard___c::setStaticF___9(::GlobalNamespace::RequestableOwnershipGuard___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::RequestableOwnershipGuard___c*, "<>9", ::GlobalNamespace::RequestableOwnershipGuard___c*>(std::forward<::GlobalNamespace::RequestableOwnershipGuard___c*>(value));
}
inline ::GlobalNamespace::RequestableOwnershipGuard___c* GlobalNamespace::RequestableOwnershipGuard___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::RequestableOwnershipGuard___c*, "<>9", ::GlobalNamespace::RequestableOwnershipGuard___c*>();
}
inline void GlobalNamespace::RequestableOwnershipGuard___c::setStaticF___9__24_0(::System::Action_1<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>*, "<>9__24_0", ::GlobalNamespace::RequestableOwnershipGuard___c*>(std::forward<::System::Action_1<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>*>(value));
}
inline ::System::Action_1<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>* GlobalNamespace::RequestableOwnershipGuard___c::getStaticF___9__24_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>*, "<>9__24_0", ::GlobalNamespace::RequestableOwnershipGuard___c*>();
}
inline void GlobalNamespace::RequestableOwnershipGuard___c::setStaticF___9__26_0(::System::Action_1<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>*, "<>9__26_0", ::GlobalNamespace::RequestableOwnershipGuard___c*>(std::forward<::System::Action_1<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>*>(value));
}
inline ::System::Action_1<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>* GlobalNamespace::RequestableOwnershipGuard___c::getStaticF___9__26_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>*, "<>9__26_0", ::GlobalNamespace::RequestableOwnershipGuard___c*>();
}
inline void GlobalNamespace::RequestableOwnershipGuard___c::setStaticF___9__26_1(::System::Action_1<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>*, "<>9__26_1", ::GlobalNamespace::RequestableOwnershipGuard___c*>(std::forward<::System::Action_1<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>*>(value));
}
inline ::System::Action_1<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>* GlobalNamespace::RequestableOwnershipGuard___c::getStaticF___9__26_1()  {
return ::cordl_internals::getStaticField<::System::Action_1<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>*, "<>9__26_1", ::GlobalNamespace::RequestableOwnershipGuard___c*>();
}
inline void GlobalNamespace::RequestableOwnershipGuard___c::setStaticF___9__26_2(::System::Action_1<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>*, "<>9__26_2", ::GlobalNamespace::RequestableOwnershipGuard___c*>(std::forward<::System::Action_1<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>*>(value));
}
inline ::System::Action_1<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>* GlobalNamespace::RequestableOwnershipGuard___c::getStaticF___9__26_2()  {
return ::cordl_internals::getStaticField<::System::Action_1<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>*, "<>9__26_2", ::GlobalNamespace::RequestableOwnershipGuard___c*>();
}
inline void GlobalNamespace::RequestableOwnershipGuard___c::setStaticF___9__26_3(::System::Action_1<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>*, "<>9__26_3", ::GlobalNamespace::RequestableOwnershipGuard___c*>(std::forward<::System::Action_1<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>*>(value));
}
inline ::System::Action_1<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>* GlobalNamespace::RequestableOwnershipGuard___c::getStaticF___9__26_3()  {
return ::cordl_internals::getStaticField<::System::Action_1<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>*, "<>9__26_3", ::GlobalNamespace::RequestableOwnershipGuard___c*>();
}
inline void GlobalNamespace::RequestableOwnershipGuard___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RequestableOwnershipGuard___c::_OnPreLeavingRoom_b__24_0(::GlobalNamespace::IRequestableOwnershipGuardCallbacks*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard___c*>(),
                        {"<OnPreLeavingRoom>b__24_0", {}, {::i2c::type_of<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void GlobalNamespace::RequestableOwnershipGuard___c::_PlayerLeftRoom_b__26_0(::GlobalNamespace::IRequestableOwnershipGuardCallbacks*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard___c*>(),
                        {"<PlayerLeftRoom>b__26_0", {}, {::i2c::type_of<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void GlobalNamespace::RequestableOwnershipGuard___c::_PlayerLeftRoom_b__26_1(::GlobalNamespace::IRequestableOwnershipGuardCallbacks*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard___c*>(),
                        {"<PlayerLeftRoom>b__26_1", {}, {::i2c::type_of<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void GlobalNamespace::RequestableOwnershipGuard___c::_PlayerLeftRoom_b__26_2(::GlobalNamespace::IRequestableOwnershipGuardCallbacks*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard___c*>(),
                        {"<PlayerLeftRoom>b__26_2", {}, {::i2c::type_of<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void GlobalNamespace::RequestableOwnershipGuard___c::_PlayerLeftRoom_b__26_3(::GlobalNamespace::IRequestableOwnershipGuardCallbacks*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestableOwnershipGuard___c*>(),
                        {"<PlayerLeftRoom>b__26_3", {}, {::i2c::type_of<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline ::GlobalNamespace::RequestableOwnershipGuard___c* GlobalNamespace::RequestableOwnershipGuard___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RequestableOwnershipGuard___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RequestableOwnershipGuard___c::RequestableOwnershipGuard___c()   {
}
