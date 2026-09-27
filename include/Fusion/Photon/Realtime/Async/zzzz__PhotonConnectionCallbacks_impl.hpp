#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/Async/PhotonConnectionCallbacks.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/Photon/Realtime/Async/zzzz__PhotonConnectionCallbacks_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__DisconnectCause_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__RegionHandler_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::PhotonConnectionCallbacks._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Async::PhotonConnectionCallbacks::*)()>(&::Fusion::Photon::Realtime::Async::PhotonConnectionCallbacks::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f6910c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::PhotonConnectionCallbacks*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action*& Fusion::Photon::Realtime::Async::PhotonConnectionCallbacks::__cordl_internal_get_ConnectedToMaster()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConnectedToMaster;
}
constexpr ::System::Action* const& Fusion::Photon::Realtime::Async::PhotonConnectionCallbacks::__cordl_internal_get_ConnectedToMaster() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConnectedToMaster;
}
constexpr void Fusion::Photon::Realtime::Async::PhotonConnectionCallbacks::__cordl_internal_set_ConnectedToMaster(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ConnectedToMaster = value;
}
constexpr ::System::Action*& Fusion::Photon::Realtime::Async::PhotonConnectionCallbacks::__cordl_internal_get_ConnectedToNameServer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConnectedToNameServer;
}
constexpr ::System::Action* const& Fusion::Photon::Realtime::Async::PhotonConnectionCallbacks::__cordl_internal_get_ConnectedToNameServer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConnectedToNameServer;
}
constexpr void Fusion::Photon::Realtime::Async::PhotonConnectionCallbacks::__cordl_internal_set_ConnectedToNameServer(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ConnectedToNameServer = value;
}
constexpr ::System::Action_1<::Fusion::Photon::Realtime::RegionHandler*>*& Fusion::Photon::Realtime::Async::PhotonConnectionCallbacks::__cordl_internal_get_RegionListReceived()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RegionListReceived;
}
constexpr ::System::Action_1<::Fusion::Photon::Realtime::RegionHandler*>* const& Fusion::Photon::Realtime::Async::PhotonConnectionCallbacks::__cordl_internal_get_RegionListReceived() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RegionListReceived;
}
constexpr void Fusion::Photon::Realtime::Async::PhotonConnectionCallbacks::__cordl_internal_set_RegionListReceived(::System::Action_1<::Fusion::Photon::Realtime::RegionHandler*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RegionListReceived = value;
}
constexpr ::System::Action_1<::Fusion::Photon::Realtime::DisconnectCause>*& Fusion::Photon::Realtime::Async::PhotonConnectionCallbacks::__cordl_internal_get_Disconnected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Disconnected;
}
constexpr ::System::Action_1<::Fusion::Photon::Realtime::DisconnectCause>* const& Fusion::Photon::Realtime::Async::PhotonConnectionCallbacks::__cordl_internal_get_Disconnected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Disconnected;
}
constexpr void Fusion::Photon::Realtime::Async::PhotonConnectionCallbacks::__cordl_internal_set_Disconnected(::System::Action_1<::Fusion::Photon::Realtime::DisconnectCause>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Disconnected = value;
}
constexpr ::System::Action_1<::StringW>*& Fusion::Photon::Realtime::Async::PhotonConnectionCallbacks::__cordl_internal_get_CustomAuthenticationFailed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomAuthenticationFailed;
}
constexpr ::System::Action_1<::StringW>* const& Fusion::Photon::Realtime::Async::PhotonConnectionCallbacks::__cordl_internal_get_CustomAuthenticationFailed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomAuthenticationFailed;
}
constexpr void Fusion::Photon::Realtime::Async::PhotonConnectionCallbacks::__cordl_internal_set_CustomAuthenticationFailed(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CustomAuthenticationFailed = value;
}
constexpr ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*& Fusion::Photon::Realtime::Async::PhotonConnectionCallbacks::__cordl_internal_get_CustomAuthenticationResponse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomAuthenticationResponse;
}
constexpr ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>* const& Fusion::Photon::Realtime::Async::PhotonConnectionCallbacks::__cordl_internal_get_CustomAuthenticationResponse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomAuthenticationResponse;
}
constexpr void Fusion::Photon::Realtime::Async::PhotonConnectionCallbacks::__cordl_internal_set_CustomAuthenticationResponse(::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CustomAuthenticationResponse = value;
}
inline void Fusion::Photon::Realtime::Async::PhotonConnectionCallbacks::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::PhotonConnectionCallbacks*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Photon::Realtime::Async::PhotonConnectionCallbacks* Fusion::Photon::Realtime::Async::PhotonConnectionCallbacks::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Photon::Realtime::Async::PhotonConnectionCallbacks*>());
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::Async::PhotonConnectionCallbacks::PhotonConnectionCallbacks()   {
}
