#pragma once
// IWYU pragma private; include "Photon/Realtime/ConnectionCallbacksContainer.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "Photon/Realtime/zzzz__ConnectionCallbacksContainer_def.hpp"
#include "Photon/Realtime/zzzz__DisconnectCause_def.hpp"
#include "Photon/Realtime/zzzz__IConnectionCallbacks_def.hpp"
#include "Photon/Realtime/zzzz__LoadBalancingClient_def.hpp"
#include "Photon/Realtime/zzzz__RegionHandler_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Photon::Realtime::ConnectionCallbacksContainer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::ConnectionCallbacksContainer::*)(::Photon::Realtime::LoadBalancingClient*)>(&::Photon::Realtime::ConnectionCallbacksContainer::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa6fa55c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::ConnectionCallbacksContainer*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Realtime::LoadBalancingClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::ConnectionCallbacksContainer.OnConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::ConnectionCallbacksContainer::*)()>(&::Photon::Realtime::ConnectionCallbacksContainer::OnConnected)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xa703bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::ConnectionCallbacksContainer*>(),
                        {"OnConnected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::ConnectionCallbacksContainer.OnConnectedToMaster
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::ConnectionCallbacksContainer::*)()>(&::Photon::Realtime::ConnectionCallbacksContainer::OnConnectedToMaster)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0xa701ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::ConnectionCallbacksContainer*>(),
                        {"OnConnectedToMaster", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::ConnectionCallbacksContainer.OnRegionListReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::ConnectionCallbacksContainer::*)(::Photon::Realtime::RegionHandler*)>(&::Photon::Realtime::ConnectionCallbacksContainer::OnRegionListReceived)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xa7025d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::ConnectionCallbacksContainer*>(),
                        {"OnRegionListReceived", {}, {::i2c::type_of<::Photon::Realtime::RegionHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::ConnectionCallbacksContainer.OnDisconnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::ConnectionCallbacksContainer::*)(::Photon::Realtime::DisconnectCause)>(&::Photon::Realtime::ConnectionCallbacksContainer::OnDisconnected)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xa703fdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::ConnectionCallbacksContainer*>(),
                        {"OnDisconnected", {}, {::i2c::type_of<::Photon::Realtime::DisconnectCause>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::ConnectionCallbacksContainer.OnCustomAuthenticationResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::ConnectionCallbacksContainer::*)(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*)>(&::Photon::Realtime::ConnectionCallbacksContainer::OnCustomAuthenticationResponse)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xa702068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::ConnectionCallbacksContainer*>(),
                        {"OnCustomAuthenticationResponse", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::ConnectionCallbacksContainer.OnCustomAuthenticationFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::ConnectionCallbacksContainer::*)(::StringW)>(&::Photon::Realtime::ConnectionCallbacksContainer::OnCustomAuthenticationFailed)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xa701958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::ConnectionCallbacksContainer*>(),
                        {"OnCustomAuthenticationFailed", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Photon::Realtime::LoadBalancingClient*& Photon::Realtime::ConnectionCallbacksContainer::__cordl_internal_get_client()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___client;
}
constexpr ::Photon::Realtime::LoadBalancingClient* const& Photon::Realtime::ConnectionCallbacksContainer::__cordl_internal_get_client() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___client;
}
constexpr void Photon::Realtime::ConnectionCallbacksContainer::__cordl_internal_set_client(::Photon::Realtime::LoadBalancingClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___client = value;
}
inline void Photon::Realtime::ConnectionCallbacksContainer::_ctor(::Photon::Realtime::LoadBalancingClient*  client)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::ConnectionCallbacksContainer*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Realtime::LoadBalancingClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, client);
}
inline void Photon::Realtime::ConnectionCallbacksContainer::OnConnected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::ConnectionCallbacksContainer*>(),
                        {"OnConnected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Realtime::ConnectionCallbacksContainer::OnConnectedToMaster()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::ConnectionCallbacksContainer*>(),
                        {"OnConnectedToMaster", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Realtime::ConnectionCallbacksContainer::OnRegionListReceived(::Photon::Realtime::RegionHandler*  regionHandler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::ConnectionCallbacksContainer*>(),
                        {"OnRegionListReceived", {}, {::i2c::type_of<::Photon::Realtime::RegionHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, regionHandler);
}
inline void Photon::Realtime::ConnectionCallbacksContainer::OnDisconnected(::Photon::Realtime::DisconnectCause  cause)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::ConnectionCallbacksContainer*>(),
                        {"OnDisconnected", {}, {::i2c::type_of<::Photon::Realtime::DisconnectCause>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cause);
}
inline void Photon::Realtime::ConnectionCallbacksContainer::OnCustomAuthenticationResponse(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::ConnectionCallbacksContainer*>(),
                        {"OnCustomAuthenticationResponse", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void Photon::Realtime::ConnectionCallbacksContainer::OnCustomAuthenticationFailed(::StringW  debugMessage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::ConnectionCallbacksContainer*>(),
                        {"OnCustomAuthenticationFailed", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, debugMessage);
}
inline ::Photon::Realtime::ConnectionCallbacksContainer* Photon::Realtime::ConnectionCallbacksContainer::New_ctor(::Photon::Realtime::LoadBalancingClient*  client)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Realtime::ConnectionCallbacksContainer*>(client));
}
/// @brief Convert operator to "::Photon::Realtime::IConnectionCallbacks"
constexpr  Photon::Realtime::ConnectionCallbacksContainer::operator ::Photon::Realtime::IConnectionCallbacks*() noexcept {
return static_cast<::Photon::Realtime::IConnectionCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Realtime::IConnectionCallbacks"
constexpr ::Photon::Realtime::IConnectionCallbacks* Photon::Realtime::ConnectionCallbacksContainer::i___Photon__Realtime__IConnectionCallbacks() noexcept {
return static_cast<::Photon::Realtime::IConnectionCallbacks*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Photon::Realtime::ConnectionCallbacksContainer::ConnectionCallbacksContainer()   {
}
