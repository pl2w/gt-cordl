#pragma once
// IWYU pragma private; include "WebSocketSharp/LogData.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "WebSocketSharp/zzzz__LogLevel_impl.hpp"
#include "WebSocketSharp/zzzz__LogData_def.hpp"
#include "System/Diagnostics/zzzz__StackFrame_def.hpp"
#include "WebSocketSharp/zzzz__LogLevel_def.hpp"
//  Writing Method size for method: ::WebSocketSharp::LogData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::LogData::*)(::WebSocketSharp::LogLevel, ::System::Diagnostics::StackFrame*, ::StringW)>(&::WebSocketSharp::LogData::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xb97fc4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::LogData*>(),
                        {".ctor", {}, {::i2c::type_of<::WebSocketSharp::LogLevel>(), ::i2c::type_of<::System::Diagnostics::StackFrame*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::LogData.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::WebSocketSharp::LogData::*)()>(&::WebSocketSharp::LogData::ToString)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0xb97fd04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WebSocketSharp::LogData*>(),
                    {::i2c::class_of<::WebSocketSharp::LogData*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Diagnostics::StackFrame*& WebSocketSharp::LogData::__cordl_internal_get__caller()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____caller;
}
constexpr ::System::Diagnostics::StackFrame* const& WebSocketSharp::LogData::__cordl_internal_get__caller() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____caller;
}
constexpr void WebSocketSharp::LogData::__cordl_internal_set__caller(::System::Diagnostics::StackFrame*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____caller = value;
}
constexpr ::System::DateTime& WebSocketSharp::LogData::__cordl_internal_get__date()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____date;
}
constexpr ::System::DateTime const& WebSocketSharp::LogData::__cordl_internal_get__date() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____date;
}
constexpr void WebSocketSharp::LogData::__cordl_internal_set__date(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____date = value;
}
constexpr ::WebSocketSharp::LogLevel& WebSocketSharp::LogData::__cordl_internal_get__level()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____level;
}
constexpr ::WebSocketSharp::LogLevel const& WebSocketSharp::LogData::__cordl_internal_get__level() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____level;
}
constexpr void WebSocketSharp::LogData::__cordl_internal_set__level(::WebSocketSharp::LogLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____level = value;
}
constexpr ::StringW& WebSocketSharp::LogData::__cordl_internal_get__message()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____message;
}
constexpr ::StringW const& WebSocketSharp::LogData::__cordl_internal_get__message() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____message;
}
constexpr void WebSocketSharp::LogData::__cordl_internal_set__message(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____message = value;
}
inline void WebSocketSharp::LogData::_ctor(::WebSocketSharp::LogLevel  level, ::System::Diagnostics::StackFrame*  caller, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::LogData*>(),
                        {".ctor", {}, {::i2c::type_of<::WebSocketSharp::LogLevel>(), ::i2c::type_of<::System::Diagnostics::StackFrame*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, level, caller, message);
}
inline ::StringW WebSocketSharp::LogData::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WebSocketSharp::LogData*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::WebSocketSharp::LogData* WebSocketSharp::LogData::New_ctor(::WebSocketSharp::LogLevel  level, ::System::Diagnostics::StackFrame*  caller, ::StringW  message)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::LogData*>(level, caller, message));
}
// Ctor Parameters []
constexpr ::WebSocketSharp::LogData::LogData()   {
}
