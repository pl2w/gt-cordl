#pragma once
// IWYU pragma private; include "GlobalNamespace/OwnershipGuardHandler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OwnershipGuardHandler_def.hpp"
#include "Photon/Pun/zzzz__IPunOwnershipCallbacks_def.hpp"
#include "Photon/Pun/zzzz__PhotonView_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OwnershipGuardHandler.RegisterView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Photon::Pun::PhotonView*)>(&::GlobalNamespace::OwnershipGuardHandler::RegisterView)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5ab1690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OwnershipGuardHandler*>(),
                        {"RegisterView", {}, {::i2c::type_of<::Photon::Pun::PhotonView*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OwnershipGuardHandler.RegisterViews
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::Photon::Pun::PhotonView*>)>(&::GlobalNamespace::OwnershipGuardHandler::RegisterViews)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5ab1798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OwnershipGuardHandler*>(),
                        {"RegisterViews", {}, {::i2c::type_of<::ArrayW<::Photon::Pun::PhotonView*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OwnershipGuardHandler.RemoveView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Photon::Pun::PhotonView*)>(&::GlobalNamespace::OwnershipGuardHandler::RemoveView)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5ab1838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OwnershipGuardHandler*>(),
                        {"RemoveView", {}, {::i2c::type_of<::Photon::Pun::PhotonView*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OwnershipGuardHandler.RemoveViews
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::Photon::Pun::PhotonView*>)>(&::GlobalNamespace::OwnershipGuardHandler::RemoveViews)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5ab18fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OwnershipGuardHandler*>(),
                        {"RemoveViews", {}, {::i2c::type_of<::ArrayW<::Photon::Pun::PhotonView*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OwnershipGuardHandler.Photon_Pun_IPunOwnershipCallbacks_OnOwnershipTransfered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OwnershipGuardHandler::*)(::Photon::Pun::PhotonView*, ::Photon::Realtime::Player*)>(&::GlobalNamespace::OwnershipGuardHandler::Photon_Pun_IPunOwnershipCallbacks_OnOwnershipTransfered)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5ab199c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OwnershipGuardHandler*>(),
                        {"Photon.Pun.IPunOwnershipCallbacks.OnOwnershipTransfered", {}, {::i2c::type_of<::Photon::Pun::PhotonView*>(), ::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OwnershipGuardHandler.Photon_Pun_IPunOwnershipCallbacks_OnOwnershipRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OwnershipGuardHandler::*)(::Photon::Pun::PhotonView*, ::Photon::Realtime::Player*)>(&::GlobalNamespace::OwnershipGuardHandler::Photon_Pun_IPunOwnershipCallbacks_OnOwnershipRequest)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ab1ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OwnershipGuardHandler*>(),
                        {"Photon.Pun.IPunOwnershipCallbacks.OnOwnershipRequest", {}, {::i2c::type_of<::Photon::Pun::PhotonView*>(), ::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OwnershipGuardHandler.Photon_Pun_IPunOwnershipCallbacks_OnOwnershipTransferFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OwnershipGuardHandler::*)(::Photon::Pun::PhotonView*, ::Photon::Realtime::Player*)>(&::GlobalNamespace::OwnershipGuardHandler::Photon_Pun_IPunOwnershipCallbacks_OnOwnershipTransferFailed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ab1acc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OwnershipGuardHandler*>(),
                        {"Photon.Pun.IPunOwnershipCallbacks.OnOwnershipTransferFailed", {}, {::i2c::type_of<::Photon::Pun::PhotonView*>(), ::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OwnershipGuardHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OwnershipGuardHandler::*)()>(&::GlobalNamespace::OwnershipGuardHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ab1688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OwnershipGuardHandler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OwnershipGuardHandler::setStaticF_guardedViews(::System::Collections::Generic::HashSet_1<::UnityW<::Photon::Pun::PhotonView>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::UnityW<::Photon::Pun::PhotonView>>*, "guardedViews", ::GlobalNamespace::OwnershipGuardHandler*>(std::forward<::System::Collections::Generic::HashSet_1<::UnityW<::Photon::Pun::PhotonView>>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::UnityW<::Photon::Pun::PhotonView>>* GlobalNamespace::OwnershipGuardHandler::getStaticF_guardedViews()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::UnityW<::Photon::Pun::PhotonView>>*, "guardedViews", ::GlobalNamespace::OwnershipGuardHandler*>();
}
inline void GlobalNamespace::OwnershipGuardHandler::setStaticF_callbackInstance(::GlobalNamespace::OwnershipGuardHandler*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::OwnershipGuardHandler*, "callbackInstance", ::GlobalNamespace::OwnershipGuardHandler*>(std::forward<::GlobalNamespace::OwnershipGuardHandler*>(value));
}
inline ::GlobalNamespace::OwnershipGuardHandler* GlobalNamespace::OwnershipGuardHandler::getStaticF_callbackInstance()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::OwnershipGuardHandler*, "callbackInstance", ::GlobalNamespace::OwnershipGuardHandler*>();
}
inline void GlobalNamespace::OwnershipGuardHandler::RegisterView(::Photon::Pun::PhotonView*  view)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OwnershipGuardHandler*>(),
                        {"RegisterView", {}, {::i2c::type_of<::Photon::Pun::PhotonView*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, view);
}
inline void GlobalNamespace::OwnershipGuardHandler::RegisterViews(::ArrayW<::Photon::Pun::PhotonView*>  photonViews)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OwnershipGuardHandler*>(),
                        {"RegisterViews", {}, {::i2c::type_of<::ArrayW<::Photon::Pun::PhotonView*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, photonViews);
}
inline void GlobalNamespace::OwnershipGuardHandler::RemoveView(::Photon::Pun::PhotonView*  view)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OwnershipGuardHandler*>(),
                        {"RemoveView", {}, {::i2c::type_of<::Photon::Pun::PhotonView*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, view);
}
inline void GlobalNamespace::OwnershipGuardHandler::RemoveViews(::ArrayW<::Photon::Pun::PhotonView*>  photonViews)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OwnershipGuardHandler*>(),
                        {"RemoveViews", {}, {::i2c::type_of<::ArrayW<::Photon::Pun::PhotonView*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, photonViews);
}
inline void GlobalNamespace::OwnershipGuardHandler::Photon_Pun_IPunOwnershipCallbacks_OnOwnershipTransfered(::Photon::Pun::PhotonView*  targetView, ::Photon::Realtime::Player*  previousOwner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OwnershipGuardHandler*>(),
                        {"Photon.Pun.IPunOwnershipCallbacks.OnOwnershipTransfered", {}, {::i2c::type_of<::Photon::Pun::PhotonView*>(), ::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetView, previousOwner);
}
inline void GlobalNamespace::OwnershipGuardHandler::Photon_Pun_IPunOwnershipCallbacks_OnOwnershipRequest(::Photon::Pun::PhotonView*  targetView, ::Photon::Realtime::Player*  requestingPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OwnershipGuardHandler*>(),
                        {"Photon.Pun.IPunOwnershipCallbacks.OnOwnershipRequest", {}, {::i2c::type_of<::Photon::Pun::PhotonView*>(), ::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetView, requestingPlayer);
}
inline void GlobalNamespace::OwnershipGuardHandler::Photon_Pun_IPunOwnershipCallbacks_OnOwnershipTransferFailed(::Photon::Pun::PhotonView*  targetView, ::Photon::Realtime::Player*  senderOfFailedRequest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OwnershipGuardHandler*>(),
                        {"Photon.Pun.IPunOwnershipCallbacks.OnOwnershipTransferFailed", {}, {::i2c::type_of<::Photon::Pun::PhotonView*>(), ::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetView, senderOfFailedRequest);
}
inline void GlobalNamespace::OwnershipGuardHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OwnershipGuardHandler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OwnershipGuardHandler* GlobalNamespace::OwnershipGuardHandler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OwnershipGuardHandler*>());
}
/// @brief Convert operator to "::Photon::Pun::IPunOwnershipCallbacks"
constexpr  GlobalNamespace::OwnershipGuardHandler::operator ::Photon::Pun::IPunOwnershipCallbacks*() noexcept {
return static_cast<::Photon::Pun::IPunOwnershipCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Pun::IPunOwnershipCallbacks"
constexpr ::Photon::Pun::IPunOwnershipCallbacks* GlobalNamespace::OwnershipGuardHandler::i___Photon__Pun__IPunOwnershipCallbacks() noexcept {
return static_cast<::Photon::Pun::IPunOwnershipCallbacks*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OwnershipGuardHandler::OwnershipGuardHandler()   {
}
