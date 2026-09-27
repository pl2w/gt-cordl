#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/ErrorInfoCallbacksContainer.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "Fusion/Photon/Realtime/zzzz__ErrorInfoCallbacksContainer_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__ErrorInfo_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__IErrorInfoCallback_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__LoadBalancingClient_def.hpp"
//  Writing Method size for method: ::Fusion::Photon::Realtime::ErrorInfoCallbacksContainer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::ErrorInfoCallbacksContainer::*)(::Fusion::Photon::Realtime::LoadBalancingClient*)>(&::Fusion::Photon::Realtime::ErrorInfoCallbacksContainer::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5f59b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::ErrorInfoCallbacksContainer*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Photon::Realtime::LoadBalancingClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::ErrorInfoCallbacksContainer.OnErrorInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::ErrorInfoCallbacksContainer::*)(::Fusion::Photon::Realtime::ErrorInfo*)>(&::Fusion::Photon::Realtime::ErrorInfoCallbacksContainer::OnErrorInfo)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5f59bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::ErrorInfoCallbacksContainer*>(),
                        {"OnErrorInfo", {}, {::i2c::type_of<::Fusion::Photon::Realtime::ErrorInfo*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::Photon::Realtime::LoadBalancingClient*& Fusion::Photon::Realtime::ErrorInfoCallbacksContainer::__cordl_internal_get_client()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___client;
}
constexpr ::Fusion::Photon::Realtime::LoadBalancingClient* const& Fusion::Photon::Realtime::ErrorInfoCallbacksContainer::__cordl_internal_get_client() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___client;
}
constexpr void Fusion::Photon::Realtime::ErrorInfoCallbacksContainer::__cordl_internal_set_client(::Fusion::Photon::Realtime::LoadBalancingClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___client = value;
}
inline void Fusion::Photon::Realtime::ErrorInfoCallbacksContainer::_ctor(::Fusion::Photon::Realtime::LoadBalancingClient*  client)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::ErrorInfoCallbacksContainer*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Photon::Realtime::LoadBalancingClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, client);
}
inline void Fusion::Photon::Realtime::ErrorInfoCallbacksContainer::OnErrorInfo(::Fusion::Photon::Realtime::ErrorInfo*  errorInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::ErrorInfoCallbacksContainer*>(),
                        {"OnErrorInfo", {}, {::i2c::type_of<::Fusion::Photon::Realtime::ErrorInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, errorInfo);
}
inline ::Fusion::Photon::Realtime::ErrorInfoCallbacksContainer* Fusion::Photon::Realtime::ErrorInfoCallbacksContainer::New_ctor(::Fusion::Photon::Realtime::LoadBalancingClient*  client)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Photon::Realtime::ErrorInfoCallbacksContainer*>(client));
}
/// @brief Convert operator to "::Fusion::Photon::Realtime::IErrorInfoCallback"
constexpr  Fusion::Photon::Realtime::ErrorInfoCallbacksContainer::operator ::Fusion::Photon::Realtime::IErrorInfoCallback*() noexcept {
return static_cast<::Fusion::Photon::Realtime::IErrorInfoCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::Photon::Realtime::IErrorInfoCallback"
constexpr ::Fusion::Photon::Realtime::IErrorInfoCallback* Fusion::Photon::Realtime::ErrorInfoCallbacksContainer::i___Fusion__Photon__Realtime__IErrorInfoCallback() noexcept {
return static_cast<::Fusion::Photon::Realtime::IErrorInfoCallback*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::ErrorInfoCallbacksContainer::ErrorInfoCallbacksContainer()   {
}
