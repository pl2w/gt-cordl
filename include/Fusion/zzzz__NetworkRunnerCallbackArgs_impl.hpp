#pragma once
// IWYU pragma private; include "Fusion/NetworkRunnerCallbackArgs.hpp"
#include "Fusion/Sockets/zzzz__NetAddress_impl.hpp"
#include "Fusion/Sockets/zzzz__OnConnectionRequestReply_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__NetworkRunnerCallbackArgs_def.hpp"
#include "Fusion/Sockets/zzzz__NetAddress_def.hpp"
#include "Fusion/zzzz__NetworkRunnerCallbackArgs_def.hpp"
// Ctor Parameters []
constexpr ::Fusion::NetworkRunnerCallbackArgs::NetworkRunnerCallbackArgs()   {
}
//  Writing Method size for method: ::Fusion::NetworkRunnerCallbackArgs_ConnectRequest.get_RemoteAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetAddress (::Fusion::NetworkRunnerCallbackArgs_ConnectRequest::*)()>(&::Fusion::NetworkRunnerCallbackArgs_ConnectRequest::get_RemoteAddress)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5fda790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*>(),
                        {"get_RemoteAddress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunnerCallbackArgs_ConnectRequest.set_RemoteAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunnerCallbackArgs_ConnectRequest::*)(::Fusion::Sockets::NetAddress)>(&::Fusion::NetworkRunnerCallbackArgs_ConnectRequest::set_RemoteAddress)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5fda7a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*>(),
                        {"set_RemoteAddress", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunnerCallbackArgs_ConnectRequest.Accept
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunnerCallbackArgs_ConnectRequest::*)()>(&::Fusion::NetworkRunnerCallbackArgs_ConnectRequest::Accept)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5fda7b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*>(),
                        {"Accept", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunnerCallbackArgs_ConnectRequest.Refuse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunnerCallbackArgs_ConnectRequest::*)()>(&::Fusion::NetworkRunnerCallbackArgs_ConnectRequest::Refuse)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5fda81c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*>(),
                        {"Refuse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunnerCallbackArgs_ConnectRequest.Waiting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunnerCallbackArgs_ConnectRequest::*)()>(&::Fusion::NetworkRunnerCallbackArgs_ConnectRequest::Waiting)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5fda880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*>(),
                        {"Waiting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunnerCallbackArgs_ConnectRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunnerCallbackArgs_ConnectRequest::*)()>(&::Fusion::NetworkRunnerCallbackArgs_ConnectRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fda8e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::Sockets::NetAddress& Fusion::NetworkRunnerCallbackArgs_ConnectRequest::__cordl_internal_get__RemoteAddress_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RemoteAddress_k__BackingField;
}
constexpr ::Fusion::Sockets::NetAddress const& Fusion::NetworkRunnerCallbackArgs_ConnectRequest::__cordl_internal_get__RemoteAddress_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RemoteAddress_k__BackingField;
}
constexpr void Fusion::NetworkRunnerCallbackArgs_ConnectRequest::__cordl_internal_set__RemoteAddress_k__BackingField(::Fusion::Sockets::NetAddress  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RemoteAddress_k__BackingField = value;
}
constexpr ::System::Nullable_1<::Fusion::Sockets::OnConnectionRequestReply>& Fusion::NetworkRunnerCallbackArgs_ConnectRequest::__cordl_internal_get_Result()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Result;
}
constexpr ::System::Nullable_1<::Fusion::Sockets::OnConnectionRequestReply> const& Fusion::NetworkRunnerCallbackArgs_ConnectRequest::__cordl_internal_get_Result() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Result;
}
constexpr void Fusion::NetworkRunnerCallbackArgs_ConnectRequest::__cordl_internal_set_Result(::System::Nullable_1<::Fusion::Sockets::OnConnectionRequestReply>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Result = value;
}
inline ::Fusion::Sockets::NetAddress Fusion::NetworkRunnerCallbackArgs_ConnectRequest::get_RemoteAddress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*>(),
                        {"get_RemoteAddress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetAddress>(this, ___internal_method);
}
inline void Fusion::NetworkRunnerCallbackArgs_ConnectRequest::set_RemoteAddress(::Fusion::Sockets::NetAddress  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*>(),
                        {"set_RemoteAddress", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::NetworkRunnerCallbackArgs_ConnectRequest::Accept()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*>(),
                        {"Accept", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkRunnerCallbackArgs_ConnectRequest::Refuse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*>(),
                        {"Refuse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkRunnerCallbackArgs_ConnectRequest::Waiting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*>(),
                        {"Waiting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkRunnerCallbackArgs_ConnectRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkRunnerCallbackArgs_ConnectRequest* Fusion::NetworkRunnerCallbackArgs_ConnectRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*>());
}
// Ctor Parameters []
constexpr ::Fusion::NetworkRunnerCallbackArgs_ConnectRequest::NetworkRunnerCallbackArgs_ConnectRequest()   {
}
