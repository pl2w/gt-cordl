#pragma once
// IWYU pragma private; include "WebSocketSharp/HttpBase.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "WebSocketSharp/zzzz__HttpBase_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Specialized/zzzz__NameValueCollection_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Version_def.hpp"
#include "WebSocketSharp/zzzz__HttpBase_def.hpp"
//  Writing Method size for method: ::WebSocketSharp::HttpBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::HttpBase::*)(::System::Version*, ::System::Collections::Specialized::NameValueCollection*)>(&::WebSocketSharp::HttpBase::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb9827ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::HttpBase*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Version*>(), ::i2c::type_of<::System::Collections::Specialized::NameValueCollection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::HttpBase.get_EntityBody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::WebSocketSharp::HttpBase::*)()>(&::WebSocketSharp::HttpBase::get_EntityBody)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb982830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::HttpBase*>(),
                        {"get_EntityBody", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::HttpBase.get_Headers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Specialized::NameValueCollection* (::WebSocketSharp::HttpBase::*)()>(&::WebSocketSharp::HttpBase::get_Headers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb979084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::HttpBase*>(),
                        {"get_Headers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::HttpBase.get_ProtocolVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Version* (::WebSocketSharp::HttpBase::*)()>(&::WebSocketSharp::HttpBase::get_ProtocolVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb982cf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::HttpBase*>(),
                        {"get_ProtocolVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::HttpBase.readEntityBody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::IO::Stream*, ::StringW)>(&::WebSocketSharp::HttpBase::readEntityBody)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xb982cfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::HttpBase*>(),
                        {"readEntityBody", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::HttpBase.readHeaders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::System::IO::Stream*, int32_t)>(&::WebSocketSharp::HttpBase::readHeaders)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0xb982e68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::HttpBase*>(),
                        {"readHeaders", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::HttpBase.ToByteArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::WebSocketSharp::HttpBase::*)()>(&::WebSocketSharp::HttpBase::ToByteArray)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb98324c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::HttpBase*>(),
                        {"ToByteArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Specialized::NameValueCollection*& WebSocketSharp::HttpBase::__cordl_internal_get__headers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headers;
}
constexpr ::System::Collections::Specialized::NameValueCollection* const& WebSocketSharp::HttpBase::__cordl_internal_get__headers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headers;
}
constexpr void WebSocketSharp::HttpBase::__cordl_internal_set__headers(::System::Collections::Specialized::NameValueCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____headers = value;
}
constexpr ::System::Version*& WebSocketSharp::HttpBase::__cordl_internal_get__version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____version;
}
constexpr ::System::Version* const& WebSocketSharp::HttpBase::__cordl_internal_get__version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____version;
}
constexpr void WebSocketSharp::HttpBase::__cordl_internal_set__version(::System::Version*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____version = value;
}
constexpr ::ArrayW<uint8_t>& WebSocketSharp::HttpBase::__cordl_internal_get_EntityBodyData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EntityBodyData;
}
constexpr ::ArrayW<uint8_t> const& WebSocketSharp::HttpBase::__cordl_internal_get_EntityBodyData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EntityBodyData;
}
constexpr void WebSocketSharp::HttpBase::__cordl_internal_set_EntityBodyData(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EntityBodyData = value;
}
inline void WebSocketSharp::HttpBase::_ctor(::System::Version*  version, ::System::Collections::Specialized::NameValueCollection*  headers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::HttpBase*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Version*>(), ::i2c::type_of<::System::Collections::Specialized::NameValueCollection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, version, headers);
}
inline ::StringW WebSocketSharp::HttpBase::get_EntityBody()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::HttpBase*>(),
                        {"get_EntityBody", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Collections::Specialized::NameValueCollection* WebSocketSharp::HttpBase::get_Headers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::HttpBase*>(),
                        {"get_Headers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Specialized::NameValueCollection*>(this, ___internal_method);
}
inline ::System::Version* WebSocketSharp::HttpBase::get_ProtocolVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::HttpBase*>(),
                        {"get_ProtocolVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Version*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> WebSocketSharp::HttpBase::readEntityBody(::System::IO::Stream*  stream, ::StringW  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::HttpBase*>(),
                        {"readEntityBody", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, stream, length);
}
inline ::ArrayW<::StringW> WebSocketSharp::HttpBase::readHeaders(::System::IO::Stream*  stream, int32_t  maxLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::HttpBase*>(),
                        {"readHeaders", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, stream, maxLength);
}
template<typename T>
inline T WebSocketSharp::HttpBase::Read(::System::IO::Stream*  stream, ::System::Func_2<::ArrayW<::StringW>,T>*  parser, int32_t  millisecondsTimeout)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::WebSocketSharp::HttpBase*>(),
                    {"Read", {::i2c::class_of<T>()}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Func_2<::ArrayW<::StringW>,T>*>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, stream, parser, millisecondsTimeout);
}
inline ::ArrayW<uint8_t> WebSocketSharp::HttpBase::ToByteArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::HttpBase*>(),
                        {"ToByteArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::WebSocketSharp::HttpBase* WebSocketSharp::HttpBase::New_ctor(::System::Version*  version, ::System::Collections::Specialized::NameValueCollection*  headers)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::HttpBase*>(version, headers));
}
// Ctor Parameters []
constexpr ::WebSocketSharp::HttpBase::HttpBase()   {
}
template<typename T>
constexpr bool& WebSocketSharp::HttpBase___c__DisplayClass14_0_1<T>::__cordl_internal_get_timeout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeout;
}
template<typename T>
constexpr bool const& WebSocketSharp::HttpBase___c__DisplayClass14_0_1<T>::__cordl_internal_get_timeout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeout;
}
template<typename T>
constexpr void WebSocketSharp::HttpBase___c__DisplayClass14_0_1<T>::__cordl_internal_set_timeout(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeout = value;
}
template<typename T>
constexpr ::System::IO::Stream*& WebSocketSharp::HttpBase___c__DisplayClass14_0_1<T>::__cordl_internal_get_stream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stream;
}
template<typename T>
constexpr ::System::IO::Stream* const& WebSocketSharp::HttpBase___c__DisplayClass14_0_1<T>::__cordl_internal_get_stream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stream;
}
template<typename T>
constexpr void WebSocketSharp::HttpBase___c__DisplayClass14_0_1<T>::__cordl_internal_set_stream(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stream = value;
}
template<typename T>
inline void WebSocketSharp::HttpBase___c__DisplayClass14_0_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::HttpBase___c__DisplayClass14_0_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void WebSocketSharp::HttpBase___c__DisplayClass14_0_1<T>::_Read_b__0(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::HttpBase___c__DisplayClass14_0_1<T>*>(),
                        {"<Read>b__0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
template<typename T>
inline ::WebSocketSharp::HttpBase___c__DisplayClass14_0_1<T>* WebSocketSharp::HttpBase___c__DisplayClass14_0_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::HttpBase___c__DisplayClass14_0_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::WebSocketSharp::HttpBase___c__DisplayClass14_0_1<T>::HttpBase___c__DisplayClass14_0_1()   {
}
//  Writing Method size for method: ::WebSocketSharp::HttpBase___c__DisplayClass13_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::HttpBase___c__DisplayClass13_0::*)()>(&::WebSocketSharp::HttpBase___c__DisplayClass13_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb983244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::HttpBase___c__DisplayClass13_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::HttpBase___c__DisplayClass13_0._readHeaders_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::HttpBase___c__DisplayClass13_0::*)(int32_t)>(&::WebSocketSharp::HttpBase___c__DisplayClass13_0::_readHeaders_b__0)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xb98329c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::HttpBase___c__DisplayClass13_0*>(),
                        {"<readHeaders>b__0", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<uint8_t>*& WebSocketSharp::HttpBase___c__DisplayClass13_0::__cordl_internal_get_buff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buff;
}
constexpr ::System::Collections::Generic::List_1<uint8_t>* const& WebSocketSharp::HttpBase___c__DisplayClass13_0::__cordl_internal_get_buff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buff;
}
constexpr void WebSocketSharp::HttpBase___c__DisplayClass13_0::__cordl_internal_set_buff(::System::Collections::Generic::List_1<uint8_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buff = value;
}
constexpr int32_t& WebSocketSharp::HttpBase___c__DisplayClass13_0::__cordl_internal_get_cnt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cnt;
}
constexpr int32_t const& WebSocketSharp::HttpBase___c__DisplayClass13_0::__cordl_internal_get_cnt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cnt;
}
constexpr void WebSocketSharp::HttpBase___c__DisplayClass13_0::__cordl_internal_set_cnt(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cnt = value;
}
inline void WebSocketSharp::HttpBase___c__DisplayClass13_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::HttpBase___c__DisplayClass13_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WebSocketSharp::HttpBase___c__DisplayClass13_0::_readHeaders_b__0(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::HttpBase___c__DisplayClass13_0*>(),
                        {"<readHeaders>b__0", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i);
}
inline ::WebSocketSharp::HttpBase___c__DisplayClass13_0* WebSocketSharp::HttpBase___c__DisplayClass13_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::HttpBase___c__DisplayClass13_0*>());
}
// Ctor Parameters []
constexpr ::WebSocketSharp::HttpBase___c__DisplayClass13_0::HttpBase___c__DisplayClass13_0()   {
}
