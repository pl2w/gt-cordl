#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/BacktraceResult.hpp"
#include "Backtrace/Unity/Types/zzzz__BacktraceResultStatus_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceResult_def.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceResult_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceResult.get_Message
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::BacktraceResult::*)()>(&::Backtrace::Unity::Model::BacktraceResult::get_Message)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f12558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceResult*>(),
                        {"get_Message", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceResult.set_Message
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::BacktraceResult::*)(::StringW)>(&::Backtrace::Unity::Model::BacktraceResult::set_Message)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f12560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceResult*>(),
                        {"set_Message", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceResult.get_Object
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::BacktraceResult::*)()>(&::Backtrace::Unity::Model::BacktraceResult::get_Object)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f12568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceResult*>(),
                        {"get_Object", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceResult.set_Object
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::BacktraceResult::*)(::StringW)>(&::Backtrace::Unity::Model::BacktraceResult::set_Object)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f12570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceResult*>(),
                        {"set_Object", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceResult.get_RxId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::BacktraceResult::*)()>(&::Backtrace::Unity::Model::BacktraceResult::get_RxId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f12594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceResult*>(),
                        {"get_RxId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceResult.set_RxId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::BacktraceResult::*)(::StringW)>(&::Backtrace::Unity::Model::BacktraceResult::set_RxId)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f1259c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceResult*>(),
                        {"set_RxId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceResult.OnLimitReached
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Model::BacktraceResult* (*)()>(&::Backtrace::Unity::Model::BacktraceResult::OnLimitReached)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5f125c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceResult*>(),
                        {"OnLimitReached", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceResult.OnNetworkError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Model::BacktraceResult* (*)(::System::Exception*)>(&::Backtrace::Unity::Model::BacktraceResult::OnNetworkError)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5f076f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceResult*>(),
                        {"OnNetworkError", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceResult.AddInnerResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::BacktraceResult::*)(::Backtrace::Unity::Model::BacktraceResult*)>(&::Backtrace::Unity::Model::BacktraceResult::AddInnerResult)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f12644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceResult*>(),
                        {"AddInnerResult", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceResult.FromJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Model::BacktraceResult* (*)(::StringW)>(&::Backtrace::Unity::Model::BacktraceResult::FromJson)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5f07548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceResult*>(),
                        {"FromJson", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::BacktraceResult::*)()>(&::Backtrace::Unity::Model::BacktraceResult::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f07538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Backtrace::Unity::Model::BacktraceResult*& Backtrace::Unity::Model::BacktraceResult::__cordl_internal_get_InnerExceptionResult()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InnerExceptionResult;
}
constexpr ::Backtrace::Unity::Model::BacktraceResult* const& Backtrace::Unity::Model::BacktraceResult::__cordl_internal_get_InnerExceptionResult() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InnerExceptionResult;
}
constexpr void Backtrace::Unity::Model::BacktraceResult::__cordl_internal_set_InnerExceptionResult(::Backtrace::Unity::Model::BacktraceResult*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InnerExceptionResult = value;
}
constexpr ::StringW& Backtrace::Unity::Model::BacktraceResult::__cordl_internal_get_message()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___message;
}
constexpr ::StringW const& Backtrace::Unity::Model::BacktraceResult::__cordl_internal_get_message() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___message;
}
constexpr void Backtrace::Unity::Model::BacktraceResult::__cordl_internal_set_message(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___message = value;
}
constexpr ::StringW& Backtrace::Unity::Model::BacktraceResult::__cordl_internal_get_response()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___response;
}
constexpr ::StringW const& Backtrace::Unity::Model::BacktraceResult::__cordl_internal_get_response() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___response;
}
constexpr void Backtrace::Unity::Model::BacktraceResult::__cordl_internal_set_response(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___response = value;
}
constexpr ::Backtrace::Unity::Types::BacktraceResultStatus& Backtrace::Unity::Model::BacktraceResult::__cordl_internal_get_Status()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Status;
}
constexpr ::Backtrace::Unity::Types::BacktraceResultStatus const& Backtrace::Unity::Model::BacktraceResult::__cordl_internal_get_Status() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Status;
}
constexpr void Backtrace::Unity::Model::BacktraceResult::__cordl_internal_set_Status(::Backtrace::Unity::Types::BacktraceResultStatus  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Status = value;
}
constexpr ::StringW& Backtrace::Unity::Model::BacktraceResult::__cordl_internal_get_object()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___object;
}
constexpr ::StringW const& Backtrace::Unity::Model::BacktraceResult::__cordl_internal_get_object() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___object;
}
constexpr void Backtrace::Unity::Model::BacktraceResult::__cordl_internal_set_object(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___object = value;
}
constexpr ::StringW& Backtrace::Unity::Model::BacktraceResult::__cordl_internal_get__rxId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rxId;
}
constexpr ::StringW const& Backtrace::Unity::Model::BacktraceResult::__cordl_internal_get__rxId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rxId;
}
constexpr void Backtrace::Unity::Model::BacktraceResult::__cordl_internal_set__rxId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rxId = value;
}
inline ::StringW Backtrace::Unity::Model::BacktraceResult::get_Message()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceResult*>(),
                        {"get_Message", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::BacktraceResult::set_Message(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceResult*>(),
                        {"set_Message", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Backtrace::Unity::Model::BacktraceResult::get_Object()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceResult*>(),
                        {"get_Object", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::BacktraceResult::set_Object(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceResult*>(),
                        {"set_Object", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Backtrace::Unity::Model::BacktraceResult::get_RxId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceResult*>(),
                        {"get_RxId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::BacktraceResult::set_RxId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceResult*>(),
                        {"set_RxId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Backtrace::Unity::Model::BacktraceResult* Backtrace::Unity::Model::BacktraceResult::OnLimitReached()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceResult*>(),
                        {"OnLimitReached", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Model::BacktraceResult*>(nullptr, ___internal_method);
}
inline ::Backtrace::Unity::Model::BacktraceResult* Backtrace::Unity::Model::BacktraceResult::OnNetworkError(::System::Exception*  exception)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceResult*>(),
                        {"OnNetworkError", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Model::BacktraceResult*>(nullptr, ___internal_method, exception);
}
inline void Backtrace::Unity::Model::BacktraceResult::AddInnerResult(::Backtrace::Unity::Model::BacktraceResult*  innerResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceResult*>(),
                        {"AddInnerResult", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerResult);
}
inline ::Backtrace::Unity::Model::BacktraceResult* Backtrace::Unity::Model::BacktraceResult::FromJson(::StringW  json)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceResult*>(),
                        {"FromJson", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Model::BacktraceResult*>(nullptr, ___internal_method, json);
}
inline void Backtrace::Unity::Model::BacktraceResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Backtrace::Unity::Model::BacktraceResult* Backtrace::Unity::Model::BacktraceResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::BacktraceResult*>());
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Model::BacktraceResult::BacktraceResult()   {
}
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceResult_BacktraceRawResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::BacktraceResult_BacktraceRawResult::*)()>(&::Backtrace::Unity::Model::BacktraceResult_BacktraceRawResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1265c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceResult_BacktraceRawResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Backtrace::Unity::Model::BacktraceResult_BacktraceRawResult::__cordl_internal_get_response()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___response;
}
constexpr ::StringW const& Backtrace::Unity::Model::BacktraceResult_BacktraceRawResult::__cordl_internal_get_response() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___response;
}
constexpr void Backtrace::Unity::Model::BacktraceResult_BacktraceRawResult::__cordl_internal_set_response(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___response = value;
}
constexpr ::StringW& Backtrace::Unity::Model::BacktraceResult_BacktraceRawResult::__cordl_internal_get__rxid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rxid;
}
constexpr ::StringW const& Backtrace::Unity::Model::BacktraceResult_BacktraceRawResult::__cordl_internal_get__rxid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rxid;
}
constexpr void Backtrace::Unity::Model::BacktraceResult_BacktraceRawResult::__cordl_internal_set__rxid(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rxid = value;
}
inline void Backtrace::Unity::Model::BacktraceResult_BacktraceRawResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceResult_BacktraceRawResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Backtrace::Unity::Model::BacktraceResult_BacktraceRawResult* Backtrace::Unity::Model::BacktraceResult_BacktraceRawResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::BacktraceResult_BacktraceRawResult*>());
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Model::BacktraceResult_BacktraceRawResult::BacktraceResult_BacktraceRawResult()   {
}
