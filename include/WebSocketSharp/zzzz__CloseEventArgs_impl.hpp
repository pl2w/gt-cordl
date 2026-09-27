#pragma once
// IWYU pragma private; include "WebSocketSharp/CloseEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "WebSocketSharp/zzzz__CloseEventArgs_def.hpp"
#include "WebSocketSharp/zzzz__PayloadData_def.hpp"
//  Writing Method size for method: ::WebSocketSharp::CloseEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::CloseEventArgs::*)(::WebSocketSharp::PayloadData*, bool)>(&::WebSocketSharp::CloseEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb977d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::CloseEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::WebSocketSharp::PayloadData*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& WebSocketSharp::CloseEventArgs::__cordl_internal_get__clean()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clean;
}
constexpr bool const& WebSocketSharp::CloseEventArgs::__cordl_internal_get__clean() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clean;
}
constexpr void WebSocketSharp::CloseEventArgs::__cordl_internal_set__clean(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clean = value;
}
constexpr ::WebSocketSharp::PayloadData*& WebSocketSharp::CloseEventArgs::__cordl_internal_get__payloadData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____payloadData;
}
constexpr ::WebSocketSharp::PayloadData* const& WebSocketSharp::CloseEventArgs::__cordl_internal_get__payloadData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____payloadData;
}
constexpr void WebSocketSharp::CloseEventArgs::__cordl_internal_set__payloadData(::WebSocketSharp::PayloadData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____payloadData = value;
}
inline void WebSocketSharp::CloseEventArgs::_ctor(::WebSocketSharp::PayloadData*  payloadData, bool  clean)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::CloseEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::WebSocketSharp::PayloadData*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, payloadData, clean);
}
inline ::WebSocketSharp::CloseEventArgs* WebSocketSharp::CloseEventArgs::New_ctor(::WebSocketSharp::PayloadData*  payloadData, bool  clean)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::CloseEventArgs*>(payloadData, clean));
}
// Ctor Parameters []
constexpr ::WebSocketSharp::CloseEventArgs::CloseEventArgs()   {
}
