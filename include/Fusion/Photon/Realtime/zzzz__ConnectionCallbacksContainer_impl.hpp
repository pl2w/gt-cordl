#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/ConnectionCallbacksContainer.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "Fusion/Photon/Realtime/zzzz__ConnectionCallbacksContainer_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__DisconnectCause_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__IConnectionCallbacks_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__LoadBalancingClient_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__RegionHandler_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::Photon::Realtime::ConnectionCallbacksContainer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::ConnectionCallbacksContainer::*)(::Fusion::Photon::Realtime::LoadBalancingClient*)>(&::Fusion::Photon::Realtime::ConnectionCallbacksContainer::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5f4f71c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::ConnectionCallbacksContainer*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Photon::Realtime::LoadBalancingClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::ConnectionCallbacksContainer.OnConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::ConnectionCallbacksContainer::*)()>(&::Fusion::Photon::Realtime::ConnectionCallbacksContainer::OnConnected)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5f56c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::ConnectionCallbacksContainer*>(),
                        {"OnConnected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::ConnectionCallbacksContainer.OnConnectedToMaster
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::ConnectionCallbacksContainer::*)()>(&::Fusion::Photon::Realtime::ConnectionCallbacksContainer::OnConnectedToMaster)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5f559e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::ConnectionCallbacksContainer*>(),
                        {"OnConnectedToMaster", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::ConnectionCallbacksContainer.OnRegionListReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::ConnectionCallbacksContainer::*)(::Fusion::Photon::Realtime::RegionHandler*)>(&::Fusion::Photon::Realtime::ConnectionCallbacksContainer::OnRegionListReceived)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5f55d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::ConnectionCallbacksContainer*>(),
                        {"OnRegionListReceived", {}, {::i2c::type_of<::Fusion::Photon::Realtime::RegionHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::ConnectionCallbacksContainer.OnDisconnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::ConnectionCallbacksContainer::*)(::Fusion::Photon::Realtime::DisconnectCause)>(&::Fusion::Photon::Realtime::ConnectionCallbacksContainer::OnDisconnected)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5f56fdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::ConnectionCallbacksContainer*>(),
                        {"OnDisconnected", {}, {::i2c::type_of<::Fusion::Photon::Realtime::DisconnectCause>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::ConnectionCallbacksContainer.OnCustomAuthenticationResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::ConnectionCallbacksContainer::*)(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*)>(&::Fusion::Photon::Realtime::ConnectionCallbacksContainer::OnCustomAuthenticationResponse)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5f55b88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::ConnectionCallbacksContainer*>(),
                        {"OnCustomAuthenticationResponse", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::ConnectionCallbacksContainer.OnCustomAuthenticationFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::ConnectionCallbacksContainer::*)(::StringW)>(&::Fusion::Photon::Realtime::ConnectionCallbacksContainer::OnCustomAuthenticationFailed)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5f55524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::ConnectionCallbacksContainer*>(),
                        {"OnCustomAuthenticationFailed", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::Photon::Realtime::LoadBalancingClient*& Fusion::Photon::Realtime::ConnectionCallbacksContainer::__cordl_internal_get_client()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___client;
}
constexpr ::Fusion::Photon::Realtime::LoadBalancingClient* const& Fusion::Photon::Realtime::ConnectionCallbacksContainer::__cordl_internal_get_client() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___client;
}
constexpr void Fusion::Photon::Realtime::ConnectionCallbacksContainer::__cordl_internal_set_client(::Fusion::Photon::Realtime::LoadBalancingClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___client = value;
}
inline void Fusion::Photon::Realtime::ConnectionCallbacksContainer::_ctor(::Fusion::Photon::Realtime::LoadBalancingClient*  client)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::ConnectionCallbacksContainer*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Photon::Realtime::LoadBalancingClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, client);
}
inline void Fusion::Photon::Realtime::ConnectionCallbacksContainer::OnConnected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::ConnectionCallbacksContainer*>(),
                        {"OnConnected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::ConnectionCallbacksContainer::OnConnectedToMaster()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::ConnectionCallbacksContainer*>(),
                        {"OnConnectedToMaster", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::ConnectionCallbacksContainer::OnRegionListReceived(::Fusion::Photon::Realtime::RegionHandler*  regionHandler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::ConnectionCallbacksContainer*>(),
                        {"OnRegionListReceived", {}, {::i2c::type_of<::Fusion::Photon::Realtime::RegionHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, regionHandler);
}
inline void Fusion::Photon::Realtime::ConnectionCallbacksContainer::OnDisconnected(::Fusion::Photon::Realtime::DisconnectCause  cause)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::ConnectionCallbacksContainer*>(),
                        {"OnDisconnected", {}, {::i2c::type_of<::Fusion::Photon::Realtime::DisconnectCause>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cause);
}
inline void Fusion::Photon::Realtime::ConnectionCallbacksContainer::OnCustomAuthenticationResponse(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::ConnectionCallbacksContainer*>(),
                        {"OnCustomAuthenticationResponse", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void Fusion::Photon::Realtime::ConnectionCallbacksContainer::OnCustomAuthenticationFailed(::StringW  debugMessage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::ConnectionCallbacksContainer*>(),
                        {"OnCustomAuthenticationFailed", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, debugMessage);
}
inline ::Fusion::Photon::Realtime::ConnectionCallbacksContainer* Fusion::Photon::Realtime::ConnectionCallbacksContainer::New_ctor(::Fusion::Photon::Realtime::LoadBalancingClient*  client)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Photon::Realtime::ConnectionCallbacksContainer*>(client));
}
/// @brief Convert operator to "::Fusion::Photon::Realtime::IConnectionCallbacks"
constexpr  Fusion::Photon::Realtime::ConnectionCallbacksContainer::operator ::Fusion::Photon::Realtime::IConnectionCallbacks*() noexcept {
return static_cast<::Fusion::Photon::Realtime::IConnectionCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::Photon::Realtime::IConnectionCallbacks"
constexpr ::Fusion::Photon::Realtime::IConnectionCallbacks* Fusion::Photon::Realtime::ConnectionCallbacksContainer::i___Fusion__Photon__Realtime__IConnectionCallbacks() noexcept {
return static_cast<::Fusion::Photon::Realtime::IConnectionCallbacks*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::ConnectionCallbacksContainer::ConnectionCallbacksContainer()   {
}
