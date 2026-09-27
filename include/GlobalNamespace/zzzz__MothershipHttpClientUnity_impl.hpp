#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipHttpClientUnity.hpp"
#include "GlobalNamespace/zzzz__MothershipSendHTTPRequestDelegateWrapper_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MothershipHttpClientUnity_def.hpp"
#include "GlobalNamespace/zzzz__MothershipClientApiClient_def.hpp"
#include "GlobalNamespace/zzzz__MothershipHTTPRequest_def.hpp"
#include "GlobalNamespace/zzzz__MothershipHTTPResponse_def.hpp"
#include "GlobalNamespace/zzzz__MothershipHttpClientUnity_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MothershipHttpClientUnity._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipHttpClientUnity::*)(::GlobalNamespace::MothershipClientApiClient*, bool)>(&::GlobalNamespace::MothershipHttpClientUnity::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x53bfff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHttpClientUnity*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::MothershipClientApiClient*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipHttpClientUnity.SendRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipHttpClientUnity::*)(::GlobalNamespace::MothershipHTTPRequest*)>(&::GlobalNamespace::MothershipHttpClientUnity::SendRequest)> {
  constexpr static std::size_t size = 0x540;
  constexpr static std::size_t addrs = 0x53c0080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MothershipHttpClientUnity*>(),
                    {::i2c::class_of<::GlobalNamespace::MothershipHttpClientUnity*>(), 6}
                ));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MothershipClientApiClient*& GlobalNamespace::MothershipHttpClientUnity::__cordl_internal_get_client()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___client;
}
constexpr ::GlobalNamespace::MothershipClientApiClient* const& GlobalNamespace::MothershipHttpClientUnity::__cordl_internal_get_client() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___client;
}
constexpr void GlobalNamespace::MothershipHttpClientUnity::__cordl_internal_set_client(::GlobalNamespace::MothershipClientApiClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___client = value;
}
constexpr bool& GlobalNamespace::MothershipHttpClientUnity::__cordl_internal_get_isRequestLoggingEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isRequestLoggingEnabled;
}
constexpr bool const& GlobalNamespace::MothershipHttpClientUnity::__cordl_internal_get_isRequestLoggingEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isRequestLoggingEnabled;
}
constexpr void GlobalNamespace::MothershipHttpClientUnity::__cordl_internal_set_isRequestLoggingEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isRequestLoggingEnabled = value;
}
inline void GlobalNamespace::MothershipHttpClientUnity::_ctor(::GlobalNamespace::MothershipClientApiClient*  client, bool  isRequestLoggingEnabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHttpClientUnity*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::MothershipClientApiClient*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, client, isRequestLoggingEnabled);
}
inline bool GlobalNamespace::MothershipHttpClientUnity::SendRequest(::GlobalNamespace::MothershipHTTPRequest*  request)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MothershipHttpClientUnity*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, request);
}
inline ::GlobalNamespace::MothershipHttpClientUnity* GlobalNamespace::MothershipHttpClientUnity::New_ctor(::GlobalNamespace::MothershipClientApiClient*  client, bool  isRequestLoggingEnabled)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MothershipHttpClientUnity*>(client, isRequestLoggingEnabled));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MothershipHttpClientUnity::MothershipHttpClientUnity()   {
}
//  Writing Method size for method: ::GlobalNamespace::MothershipHttpClientUnity___c__DisplayClass3_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipHttpClientUnity___c__DisplayClass3_0::*)()>(&::GlobalNamespace::MothershipHttpClientUnity___c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x53c05c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHttpClientUnity___c__DisplayClass3_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipHttpClientUnity___c__DisplayClass3_0._SendRequest_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipHttpClientUnity___c__DisplayClass3_0::*)(::GlobalNamespace::MothershipHTTPResponse*)>(&::GlobalNamespace::MothershipHttpClientUnity___c__DisplayClass3_0::_SendRequest_b__0)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x53c0634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHttpClientUnity___c__DisplayClass3_0*>(),
                        {"<SendRequest>b__0", {}, {::i2c::type_of<::GlobalNamespace::MothershipHTTPResponse*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MothershipHttpClientUnity*& GlobalNamespace::MothershipHttpClientUnity___c__DisplayClass3_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::GlobalNamespace::MothershipHttpClientUnity* const& GlobalNamespace::MothershipHttpClientUnity___c__DisplayClass3_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::MothershipHttpClientUnity___c__DisplayClass3_0::__cordl_internal_set___4__this(::GlobalNamespace::MothershipHttpClientUnity*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::MothershipHTTPRequest*& GlobalNamespace::MothershipHttpClientUnity___c__DisplayClass3_0::__cordl_internal_get_request()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr ::GlobalNamespace::MothershipHTTPRequest* const& GlobalNamespace::MothershipHttpClientUnity___c__DisplayClass3_0::__cordl_internal_get_request() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr void GlobalNamespace::MothershipHttpClientUnity___c__DisplayClass3_0::__cordl_internal_set_request(::GlobalNamespace::MothershipHTTPRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___request = value;
}
inline void GlobalNamespace::MothershipHttpClientUnity___c__DisplayClass3_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHttpClientUnity___c__DisplayClass3_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipHttpClientUnity___c__DisplayClass3_0::_SendRequest_b__0(::GlobalNamespace::MothershipHTTPResponse*  Response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHttpClientUnity___c__DisplayClass3_0*>(),
                        {"<SendRequest>b__0", {}, {::i2c::type_of<::GlobalNamespace::MothershipHTTPResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, Response);
}
inline ::GlobalNamespace::MothershipHttpClientUnity___c__DisplayClass3_0* GlobalNamespace::MothershipHttpClientUnity___c__DisplayClass3_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MothershipHttpClientUnity___c__DisplayClass3_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MothershipHttpClientUnity___c__DisplayClass3_0::MothershipHttpClientUnity___c__DisplayClass3_0()   {
}
