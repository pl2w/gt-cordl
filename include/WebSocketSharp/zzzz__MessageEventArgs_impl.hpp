#pragma once
// IWYU pragma private; include "WebSocketSharp/MessageEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "WebSocketSharp/zzzz__Opcode_impl.hpp"
#include "WebSocketSharp/zzzz__MessageEventArgs_def.hpp"
#include "WebSocketSharp/zzzz__Opcode_def.hpp"
#include "WebSocketSharp/zzzz__WebSocketFrame_def.hpp"
//  Writing Method size for method: ::WebSocketSharp::MessageEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::MessageEventArgs::*)(::WebSocketSharp::WebSocketFrame*)>(&::WebSocketSharp::MessageEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb977a1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::MessageEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::WebSocketSharp::WebSocketFrame*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::MessageEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::MessageEventArgs::*)(::WebSocketSharp::Opcode, ::ArrayW<uint8_t>)>(&::WebSocketSharp::MessageEventArgs::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xb977b5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::MessageEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::WebSocketSharp::Opcode>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::MessageEventArgs.get_RawData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::WebSocketSharp::MessageEventArgs::*)()>(&::WebSocketSharp::MessageEventArgs::get_RawData)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb977c5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::MessageEventArgs*>(),
                        {"get_RawData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::MessageEventArgs.setData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::MessageEventArgs::*)()>(&::WebSocketSharp::MessageEventArgs::setData)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb977c74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::MessageEventArgs*>(),
                        {"setData", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& WebSocketSharp::MessageEventArgs::__cordl_internal_get__data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data;
}
constexpr ::StringW const& WebSocketSharp::MessageEventArgs::__cordl_internal_get__data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data;
}
constexpr void WebSocketSharp::MessageEventArgs::__cordl_internal_set__data(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____data = value;
}
constexpr bool& WebSocketSharp::MessageEventArgs::__cordl_internal_get__dataSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataSet;
}
constexpr bool const& WebSocketSharp::MessageEventArgs::__cordl_internal_get__dataSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataSet;
}
constexpr void WebSocketSharp::MessageEventArgs::__cordl_internal_set__dataSet(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dataSet = value;
}
constexpr ::WebSocketSharp::Opcode& WebSocketSharp::MessageEventArgs::__cordl_internal_get__opcode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____opcode;
}
constexpr ::WebSocketSharp::Opcode const& WebSocketSharp::MessageEventArgs::__cordl_internal_get__opcode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____opcode;
}
constexpr void WebSocketSharp::MessageEventArgs::__cordl_internal_set__opcode(::WebSocketSharp::Opcode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____opcode = value;
}
constexpr ::ArrayW<uint8_t>& WebSocketSharp::MessageEventArgs::__cordl_internal_get__rawData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rawData;
}
constexpr ::ArrayW<uint8_t> const& WebSocketSharp::MessageEventArgs::__cordl_internal_get__rawData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rawData;
}
constexpr void WebSocketSharp::MessageEventArgs::__cordl_internal_set__rawData(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rawData = value;
}
inline void WebSocketSharp::MessageEventArgs::_ctor(::WebSocketSharp::WebSocketFrame*  frame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::MessageEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::WebSocketSharp::WebSocketFrame*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frame);
}
inline void WebSocketSharp::MessageEventArgs::_ctor(::WebSocketSharp::Opcode  opcode, ::ArrayW<uint8_t>  rawData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::MessageEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::WebSocketSharp::Opcode>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, opcode, rawData);
}
inline ::ArrayW<uint8_t> WebSocketSharp::MessageEventArgs::get_RawData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::MessageEventArgs*>(),
                        {"get_RawData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void WebSocketSharp::MessageEventArgs::setData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::MessageEventArgs*>(),
                        {"setData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WebSocketSharp::MessageEventArgs* WebSocketSharp::MessageEventArgs::New_ctor(::WebSocketSharp::WebSocketFrame*  frame)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::MessageEventArgs*>(frame));
}
inline ::WebSocketSharp::MessageEventArgs* WebSocketSharp::MessageEventArgs::New_ctor(::WebSocketSharp::Opcode  opcode, ::ArrayW<uint8_t>  rawData)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::MessageEventArgs*>(opcode, rawData));
}
// Ctor Parameters []
constexpr ::WebSocketSharp::MessageEventArgs::MessageEventArgs()   {
}
