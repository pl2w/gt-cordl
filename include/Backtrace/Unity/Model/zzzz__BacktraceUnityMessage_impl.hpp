#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/BacktraceUnityMessage.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__LogType_impl.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceUnityMessage_def.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceReport_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceUnityMessage._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::BacktraceUnityMessage::*)(::Backtrace::Unity::Model::BacktraceReport*)>(&::Backtrace::Unity::Model::BacktraceUnityMessage::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5f00418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceUnityMessage*>(),
                        {".ctor", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceReport*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceUnityMessage._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::BacktraceUnityMessage::*)(::StringW, ::StringW, ::UnityEngine::LogType)>(&::Backtrace::Unity::Model::BacktraceUnityMessage::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5f01730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceUnityMessage*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceUnityMessage.GetFormattedMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::BacktraceUnityMessage::*)(bool)>(&::Backtrace::Unity::Model::BacktraceUnityMessage::GetFormattedMessage)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x5f14cac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceUnityMessage*>(),
                        {"GetFormattedMessage", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceUnityMessage.GetFormattedStackTrace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::BacktraceUnityMessage::*)(::StringW)>(&::Backtrace::Unity::Model::BacktraceUnityMessage::GetFormattedStackTrace)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5f14c14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceUnityMessage*>(),
                        {"GetFormattedStackTrace", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceUnityMessage.IsUnhandledException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Model::BacktraceUnityMessage::*)()>(&::Backtrace::Unity::Model::BacktraceUnityMessage::IsUnhandledException)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5f1501c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceUnityMessage*>(),
                        {"IsUnhandledException", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceUnityMessage.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::BacktraceUnityMessage::*)()>(&::Backtrace::Unity::Model::BacktraceUnityMessage::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f15054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Model::BacktraceUnityMessage*>(),
                    {::i2c::class_of<::Backtrace::Unity::Model::BacktraceUnityMessage*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr ::StringW& Backtrace::Unity::Model::BacktraceUnityMessage::__cordl_internal_get__formattedMessage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____formattedMessage;
}
constexpr ::StringW const& Backtrace::Unity::Model::BacktraceUnityMessage::__cordl_internal_get__formattedMessage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____formattedMessage;
}
constexpr void Backtrace::Unity::Model::BacktraceUnityMessage::__cordl_internal_set__formattedMessage(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____formattedMessage = value;
}
constexpr ::StringW& Backtrace::Unity::Model::BacktraceUnityMessage::__cordl_internal_get_Message()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Message;
}
constexpr ::StringW const& Backtrace::Unity::Model::BacktraceUnityMessage::__cordl_internal_get_Message() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Message;
}
constexpr void Backtrace::Unity::Model::BacktraceUnityMessage::__cordl_internal_set_Message(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Message = value;
}
constexpr ::StringW& Backtrace::Unity::Model::BacktraceUnityMessage::__cordl_internal_get_StackTrace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StackTrace;
}
constexpr ::StringW const& Backtrace::Unity::Model::BacktraceUnityMessage::__cordl_internal_get_StackTrace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StackTrace;
}
constexpr void Backtrace::Unity::Model::BacktraceUnityMessage::__cordl_internal_set_StackTrace(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StackTrace = value;
}
constexpr ::UnityEngine::LogType& Backtrace::Unity::Model::BacktraceUnityMessage::__cordl_internal_get_Type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr ::UnityEngine::LogType const& Backtrace::Unity::Model::BacktraceUnityMessage::__cordl_internal_get_Type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr void Backtrace::Unity::Model::BacktraceUnityMessage::__cordl_internal_set_Type(::UnityEngine::LogType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Type = value;
}
inline void Backtrace::Unity::Model::BacktraceUnityMessage::_ctor(::Backtrace::Unity::Model::BacktraceReport*  report)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceUnityMessage*>(),
                        {".ctor", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceReport*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, report);
}
inline void Backtrace::Unity::Model::BacktraceUnityMessage::_ctor(::StringW  message, ::StringW  stacktrace, ::UnityEngine::LogType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceUnityMessage*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, stacktrace, type);
}
inline ::StringW Backtrace::Unity::Model::BacktraceUnityMessage::GetFormattedMessage(bool  backtraceFrame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceUnityMessage*>(),
                        {"GetFormattedMessage", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, backtraceFrame);
}
inline ::StringW Backtrace::Unity::Model::BacktraceUnityMessage::GetFormattedStackTrace(::StringW  stacktrace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceUnityMessage*>(),
                        {"GetFormattedStackTrace", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, stacktrace);
}
inline bool Backtrace::Unity::Model::BacktraceUnityMessage::IsUnhandledException()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceUnityMessage*>(),
                        {"IsUnhandledException", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW Backtrace::Unity::Model::BacktraceUnityMessage::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Model::BacktraceUnityMessage*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Backtrace::Unity::Model::BacktraceUnityMessage* Backtrace::Unity::Model::BacktraceUnityMessage::New_ctor(::Backtrace::Unity::Model::BacktraceReport*  report)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::BacktraceUnityMessage*>(report));
}
inline ::Backtrace::Unity::Model::BacktraceUnityMessage* Backtrace::Unity::Model::BacktraceUnityMessage::New_ctor(::StringW  message, ::StringW  stacktrace, ::UnityEngine::LogType  type)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::BacktraceUnityMessage*>(message, stacktrace, type));
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Model::BacktraceUnityMessage::BacktraceUnityMessage()   {
}
