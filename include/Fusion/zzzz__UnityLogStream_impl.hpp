#pragma once
// IWYU pragma private; include "Fusion/UnityLogStream.hpp"
#include "Fusion/zzzz__LogFlags_impl.hpp"
#include "Fusion/zzzz__LogLevel_impl.hpp"
#include "Fusion/zzzz__LogStream_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__UnityLogStream_def.hpp"
#include "Fusion/zzzz__FusionUnityLoggerBase_def.hpp"
#include "Fusion/zzzz__ILogSource_def.hpp"
#include "Fusion/zzzz__LogFlags_def.hpp"
#include "Fusion/zzzz__LogLevel_def.hpp"
#include "Fusion/zzzz__TraceChannels_def.hpp"
#include "Fusion/zzzz__UnityLogStream_def.hpp"
#include "System/Runtime/ExceptionServices/zzzz__ExceptionDispatchInfo_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Fusion::UnityLogStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::UnityLogStream::*)(::Fusion::FusionUnityLoggerBase*, ::Fusion::LogLevel, ::Fusion::TraceChannels, ::Fusion::LogFlags)>(&::Fusion::UnityLogStream::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5f45734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UnityLogStream*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::FusionUnityLoggerBase*>(), ::i2c::type_of<::Fusion::LogLevel>(), ::i2c::type_of<::Fusion::TraceChannels>(), ::i2c::type_of<::Fusion::LogFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::UnityLogStream.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::UnityLogStream::*)(::Fusion::ILogSource*, ::StringW)>(&::Fusion::UnityLogStream::Log)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5f463e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::UnityLogStream*>(),
                    {::i2c::class_of<::Fusion::UnityLogStream*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::UnityLogStream.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::UnityLogStream::*)(::StringW)>(&::Fusion::UnityLogStream::Log)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5f464fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::UnityLogStream*>(),
                    {::i2c::class_of<::Fusion::UnityLogStream*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::UnityLogStream.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::UnityLogStream::*)(::Fusion::ILogSource*, ::System::Exception*)>(&::Fusion::UnityLogStream::Log)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x5f4660c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::UnityLogStream*>(),
                    {::i2c::class_of<::Fusion::UnityLogStream*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::UnityLogStream.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::UnityLogStream::*)(::System::Exception*)>(&::Fusion::UnityLogStream::Log)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x5f468a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::UnityLogStream*>(),
                    {::i2c::class_of<::Fusion::UnityLogStream*>(), 8}
                ));
    return ___internal_method;
  }
};
constexpr ::Fusion::FusionUnityLoggerBase*& Fusion::UnityLogStream::__cordl_internal_get__logger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____logger;
}
constexpr ::Fusion::FusionUnityLoggerBase* const& Fusion::UnityLogStream::__cordl_internal_get__logger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____logger;
}
constexpr void Fusion::UnityLogStream::__cordl_internal_set__logger(::Fusion::FusionUnityLoggerBase*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____logger = value;
}
constexpr ::Fusion::LogLevel& Fusion::UnityLogStream::__cordl_internal_get__logLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____logLevel;
}
constexpr ::Fusion::LogLevel const& Fusion::UnityLogStream::__cordl_internal_get__logLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____logLevel;
}
constexpr void Fusion::UnityLogStream::__cordl_internal_set__logLevel(::Fusion::LogLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____logLevel = value;
}
constexpr ::StringW& Fusion::UnityLogStream::__cordl_internal_get__prefix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prefix;
}
constexpr ::StringW const& Fusion::UnityLogStream::__cordl_internal_get__prefix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prefix;
}
constexpr void Fusion::UnityLogStream::__cordl_internal_set__prefix(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____prefix = value;
}
constexpr ::Fusion::LogFlags& Fusion::UnityLogStream::__cordl_internal_get__flags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____flags;
}
constexpr ::Fusion::LogFlags const& Fusion::UnityLogStream::__cordl_internal_get__flags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____flags;
}
constexpr void Fusion::UnityLogStream::__cordl_internal_set__flags(::Fusion::LogFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____flags = value;
}
inline void Fusion::UnityLogStream::_ctor(::Fusion::FusionUnityLoggerBase*  logger, ::Fusion::LogLevel  logLevel, ::Fusion::TraceChannels  channel, ::Fusion::LogFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UnityLogStream*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::FusionUnityLoggerBase*>(), ::i2c::type_of<::Fusion::LogLevel>(), ::i2c::type_of<::Fusion::TraceChannels>(), ::i2c::type_of<::Fusion::LogFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logger, logLevel, channel, flags);
}
inline void Fusion::UnityLogStream::Log(::Fusion::ILogSource*  source, ::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::UnityLogStream*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, message);
}
inline void Fusion::UnityLogStream::Log(::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::UnityLogStream*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void Fusion::UnityLogStream::Log(::Fusion::ILogSource*  source, ::System::Exception*  error)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::UnityLogStream*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, error);
}
inline void Fusion::UnityLogStream::Log(::System::Exception*  error)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::UnityLogStream*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline ::Fusion::UnityLogStream* Fusion::UnityLogStream::New_ctor(::Fusion::FusionUnityLoggerBase*  logger, ::Fusion::LogLevel  logLevel, ::Fusion::TraceChannels  channel, ::Fusion::LogFlags  flags)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::UnityLogStream*>(logger, logLevel, channel, flags));
}
// Ctor Parameters []
constexpr ::Fusion::UnityLogStream::UnityLogStream()   {
}
//  Writing Method size for method: ::Fusion::UnityLogStream___c__DisplayClass9_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::UnityLogStream___c__DisplayClass9_0::*)()>(&::Fusion::UnityLogStream___c__DisplayClass9_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4689c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UnityLogStream___c__DisplayClass9_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::UnityLogStream___c__DisplayClass9_0._Log_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::UnityLogStream___c__DisplayClass9_0::*)()>(&::Fusion::UnityLogStream___c__DisplayClass9_0::_Log_b__0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f46b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UnityLogStream___c__DisplayClass9_0*>(),
                        {"<Log>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*& Fusion::UnityLogStream___c__DisplayClass9_0::__cordl_internal_get_edi()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___edi;
}
constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* const& Fusion::UnityLogStream___c__DisplayClass9_0::__cordl_internal_get_edi() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___edi;
}
constexpr void Fusion::UnityLogStream___c__DisplayClass9_0::__cordl_internal_set_edi(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___edi = value;
}
inline void Fusion::UnityLogStream___c__DisplayClass9_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UnityLogStream___c__DisplayClass9_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::UnityLogStream___c__DisplayClass9_0::_Log_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UnityLogStream___c__DisplayClass9_0*>(),
                        {"<Log>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::UnityLogStream___c__DisplayClass9_0* Fusion::UnityLogStream___c__DisplayClass9_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::UnityLogStream___c__DisplayClass9_0*>());
}
// Ctor Parameters []
constexpr ::Fusion::UnityLogStream___c__DisplayClass9_0::UnityLogStream___c__DisplayClass9_0()   {
}
//  Writing Method size for method: ::Fusion::UnityLogStream___c__DisplayClass10_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::UnityLogStream___c__DisplayClass10_0::*)()>(&::Fusion::UnityLogStream___c__DisplayClass10_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f46b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UnityLogStream___c__DisplayClass10_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::UnityLogStream___c__DisplayClass10_0._Log_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::UnityLogStream___c__DisplayClass10_0::*)()>(&::Fusion::UnityLogStream___c__DisplayClass10_0::_Log_b__0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f46b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UnityLogStream___c__DisplayClass10_0*>(),
                        {"<Log>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*& Fusion::UnityLogStream___c__DisplayClass10_0::__cordl_internal_get_edi()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___edi;
}
constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* const& Fusion::UnityLogStream___c__DisplayClass10_0::__cordl_internal_get_edi() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___edi;
}
constexpr void Fusion::UnityLogStream___c__DisplayClass10_0::__cordl_internal_set_edi(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___edi = value;
}
inline void Fusion::UnityLogStream___c__DisplayClass10_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UnityLogStream___c__DisplayClass10_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::UnityLogStream___c__DisplayClass10_0::_Log_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UnityLogStream___c__DisplayClass10_0*>(),
                        {"<Log>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::UnityLogStream___c__DisplayClass10_0* Fusion::UnityLogStream___c__DisplayClass10_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::UnityLogStream___c__DisplayClass10_0*>());
}
// Ctor Parameters []
constexpr ::Fusion::UnityLogStream___c__DisplayClass10_0::UnityLogStream___c__DisplayClass10_0()   {
}
