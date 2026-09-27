#pragma once
// IWYU pragma private; include "Modio/Metrics/MetricsSession.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Metrics/zzzz__MetricsSession_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__MetricsSessionRequest_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
//  Writing Method size for method: ::Modio::Metrics::MetricsSession._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Metrics::MetricsSession::*)(::StringW, ::ArrayW<int64_t>)>(&::Modio::Metrics::MetricsSession::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa0400c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Metrics::MetricsSession*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<int64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Metrics::MetricsSession.GetSessionHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Metrics::MetricsSession::*)(bool, ::StringW, ::StringW, ::StringW)>(&::Modio::Metrics::MetricsSession::GetSessionHash)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0xa040194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Metrics::MetricsSession*>(),
                        {"GetSessionHash", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Metrics::MetricsSession.ToRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::API::SchemaDefinitions::MetricsSessionRequest (::Modio::Metrics::MetricsSession::*)(bool, ::StringW)>(&::Modio::Metrics::MetricsSession::ToRequest)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xa03e4ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Metrics::MetricsSession*>(),
                        {"ToRequest", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int64_t>& Modio::Metrics::MetricsSession::__cordl_internal_get__ids()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ids;
}
constexpr ::ArrayW<int64_t> const& Modio::Metrics::MetricsSession::__cordl_internal_get__ids() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ids;
}
constexpr void Modio::Metrics::MetricsSession::__cordl_internal_set__ids(::ArrayW<int64_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ids = value;
}
constexpr ::StringW& Modio::Metrics::MetricsSession::__cordl_internal_get_SessionId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SessionId;
}
constexpr ::StringW const& Modio::Metrics::MetricsSession::__cordl_internal_get_SessionId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SessionId;
}
constexpr void Modio::Metrics::MetricsSession::__cordl_internal_set_SessionId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SessionId = value;
}
constexpr int64_t& Modio::Metrics::MetricsSession::__cordl_internal_get_SessionOrderId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SessionOrderId;
}
constexpr int64_t const& Modio::Metrics::MetricsSession::__cordl_internal_get_SessionOrderId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SessionOrderId;
}
constexpr void Modio::Metrics::MetricsSession::__cordl_internal_set_SessionOrderId(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SessionOrderId = value;
}
constexpr bool& Modio::Metrics::MetricsSession::__cordl_internal_get_Active()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Active;
}
constexpr bool const& Modio::Metrics::MetricsSession::__cordl_internal_get_Active() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Active;
}
constexpr void Modio::Metrics::MetricsSession::__cordl_internal_set_Active(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Active = value;
}
constexpr ::System::Threading::CancellationTokenSource*& Modio::Metrics::MetricsSession::__cordl_internal_get_HeartbeatCancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HeartbeatCancellationToken;
}
constexpr ::System::Threading::CancellationTokenSource* const& Modio::Metrics::MetricsSession::__cordl_internal_get_HeartbeatCancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HeartbeatCancellationToken;
}
constexpr void Modio::Metrics::MetricsSession::__cordl_internal_set_HeartbeatCancellationToken(::System::Threading::CancellationTokenSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HeartbeatCancellationToken = value;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& Modio::Metrics::MetricsSession::__cordl_internal_get_HeartbeatCompletionSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HeartbeatCompletionSource;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& Modio::Metrics::MetricsSession::__cordl_internal_get_HeartbeatCompletionSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HeartbeatCompletionSource;
}
constexpr void Modio::Metrics::MetricsSession::__cordl_internal_set_HeartbeatCompletionSource(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HeartbeatCompletionSource = value;
}
inline void Modio::Metrics::MetricsSession::_ctor(::StringW  id, ::ArrayW<int64_t>  mods)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Metrics::MetricsSession*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<int64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, mods);
}
inline ::StringW Modio::Metrics::MetricsSession::GetSessionHash(bool  includeIds, ::StringW  sessionTs, ::StringW  nonce, ::StringW  secret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Metrics::MetricsSession*>(),
                        {"GetSessionHash", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, includeIds, sessionTs, nonce, secret);
}
inline ::Modio::API::SchemaDefinitions::MetricsSessionRequest Modio::Metrics::MetricsSession::ToRequest(bool  includeIds, ::StringW  secret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Metrics::MetricsSession*>(),
                        {"ToRequest", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::API::SchemaDefinitions::MetricsSessionRequest>(this, ___internal_method, includeIds, secret);
}
inline ::Modio::Metrics::MetricsSession* Modio::Metrics::MetricsSession::New_ctor(::StringW  id, ::ArrayW<int64_t>  mods)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Metrics::MetricsSession*>(id, mods));
}
// Ctor Parameters []
constexpr ::Modio::Metrics::MetricsSession::MetricsSession()   {
}
