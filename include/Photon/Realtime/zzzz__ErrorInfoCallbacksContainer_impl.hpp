#pragma once
// IWYU pragma private; include "Photon/Realtime/ErrorInfoCallbacksContainer.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "Photon/Realtime/zzzz__ErrorInfoCallbacksContainer_def.hpp"
#include "Photon/Realtime/zzzz__ErrorInfo_def.hpp"
#include "Photon/Realtime/zzzz__IErrorInfoCallback_def.hpp"
#include "Photon/Realtime/zzzz__LoadBalancingClient_def.hpp"
//  Writing Method size for method: ::Photon::Realtime::ErrorInfoCallbacksContainer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::ErrorInfoCallbacksContainer::*)(::Photon::Realtime::LoadBalancingClient*)>(&::Photon::Realtime::ErrorInfoCallbacksContainer::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa6fa804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::ErrorInfoCallbacksContainer*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Realtime::LoadBalancingClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::ErrorInfoCallbacksContainer.OnErrorInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::ErrorInfoCallbacksContainer::*)(::Photon::Realtime::ErrorInfo*)>(&::Photon::Realtime::ErrorInfoCallbacksContainer::OnErrorInfo)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xa705564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::ErrorInfoCallbacksContainer*>(),
                        {"OnErrorInfo", {}, {::i2c::type_of<::Photon::Realtime::ErrorInfo*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Photon::Realtime::LoadBalancingClient*& Photon::Realtime::ErrorInfoCallbacksContainer::__cordl_internal_get_client()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___client;
}
constexpr ::Photon::Realtime::LoadBalancingClient* const& Photon::Realtime::ErrorInfoCallbacksContainer::__cordl_internal_get_client() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___client;
}
constexpr void Photon::Realtime::ErrorInfoCallbacksContainer::__cordl_internal_set_client(::Photon::Realtime::LoadBalancingClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___client = value;
}
inline void Photon::Realtime::ErrorInfoCallbacksContainer::_ctor(::Photon::Realtime::LoadBalancingClient*  client)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::ErrorInfoCallbacksContainer*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Realtime::LoadBalancingClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, client);
}
inline void Photon::Realtime::ErrorInfoCallbacksContainer::OnErrorInfo(::Photon::Realtime::ErrorInfo*  errorInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::ErrorInfoCallbacksContainer*>(),
                        {"OnErrorInfo", {}, {::i2c::type_of<::Photon::Realtime::ErrorInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, errorInfo);
}
inline ::Photon::Realtime::ErrorInfoCallbacksContainer* Photon::Realtime::ErrorInfoCallbacksContainer::New_ctor(::Photon::Realtime::LoadBalancingClient*  client)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Realtime::ErrorInfoCallbacksContainer*>(client));
}
/// @brief Convert operator to "::Photon::Realtime::IErrorInfoCallback"
constexpr  Photon::Realtime::ErrorInfoCallbacksContainer::operator ::Photon::Realtime::IErrorInfoCallback*() noexcept {
return static_cast<::Photon::Realtime::IErrorInfoCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Realtime::IErrorInfoCallback"
constexpr ::Photon::Realtime::IErrorInfoCallback* Photon::Realtime::ErrorInfoCallbacksContainer::i___Photon__Realtime__IErrorInfoCallback() noexcept {
return static_cast<::Photon::Realtime::IErrorInfoCallback*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Photon::Realtime::ErrorInfoCallbacksContainer::ErrorInfoCallbacksContainer()   {
}
