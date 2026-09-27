#pragma once
// IWYU pragma private; include "Liv/Lck/Core/FFI/LckCoreNative.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/Core/FFI/zzzz__LckCoreNative_def.hpp"
#include "Liv/Lck/Core/FFI/zzzz__GameInfo_def.hpp"
#include "Liv/Lck/Core/FFI/zzzz__LckCoreNative_def.hpp"
#include "Liv/Lck/Core/FFI/zzzz__LckInfo_def.hpp"
#include "Liv/Lck/Core/FFI/zzzz__ReturnCode_def.hpp"
#include "Liv/Lck/Core/zzzz__LevelFilter_def.hpp"
#include "Liv/Lck/Core/zzzz__LogType_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Core::FFI::LckCoreNative.set_max_log_level
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Liv::Lck::Core::LevelFilter)>(&::Liv::Lck::Core::FFI::LckCoreNative::set_max_log_level)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9cfde00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::FFI::LckCoreNative*>(),
                        {"set_max_log_level", {}, {::i2c::type_of<::Liv::Lck::Core::LevelFilter>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::FFI::LckCoreNative.initialize_android
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::Core::FFI::ReturnCode (*)(::System::IntPtr)>(&::Liv::Lck::Core::FFI::LckCoreNative::initialize_android)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9cfe43c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::FFI::LckCoreNative*>(),
                        {"initialize_android", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::FFI::LckCoreNative.initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::Core::FFI::ReturnCode (*)(::System::IntPtr, ::Liv::Lck::Core::FFI::GameInfo, ::Liv::Lck::Core::FFI::LckInfo)>(&::Liv::Lck::Core::FFI::LckCoreNative::initialize)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x9cfe514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::FFI::LckCoreNative*>(),
                        {"initialize", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Liv::Lck::Core::FFI::GameInfo>(), ::i2c::type_of<::Liv::Lck::Core::FFI::LckInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::FFI::LckCoreNative.check_login_attempt_completed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::Core::FFI::ReturnCode (*)(::System::IntPtr)>(&::Liv::Lck::Core::FFI::LckCoreNative::check_login_attempt_completed)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9cff2ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::FFI::LckCoreNative*>(),
                        {"check_login_attempt_completed", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::FFI::LckCoreNative.get_remaining_backoff_time_seconds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::Core::FFI::ReturnCode (*)(::System::IntPtr)>(&::Liv::Lck::Core::FFI::LckCoreNative::get_remaining_backoff_time_seconds)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9cff464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::FFI::LckCoreNative*>(),
                        {"get_remaining_backoff_time_seconds", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::FFI::LckCoreNative.is_user_subscribed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::Core::FFI::ReturnCode (*)(::System::IntPtr)>(&::Liv::Lck::Core::FFI::LckCoreNative::is_user_subscribed)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9cff5a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::FFI::LckCoreNative*>(),
                        {"is_user_subscribed", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::FFI::LckCoreNative.has_user_configured_streaming
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::Core::FFI::ReturnCode (*)(::System::IntPtr)>(&::Liv::Lck::Core::FFI::LckCoreNative::has_user_configured_streaming)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9cff504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::FFI::LckCoreNative*>(),
                        {"has_user_configured_streaming", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::FFI::LckCoreNative.start_login_attempt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::Core::FFI::ReturnCode (*)(::Liv::Lck::Core::FFI::LckCoreNative_start_login_attempt_callback_delegate*)>(&::Liv::Lck::Core::FFI::LckCoreNative::start_login_attempt)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9cff16c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::FFI::LckCoreNative*>(),
                        {"start_login_attempt", {}, {::i2c::type_of<::Liv::Lck::Core::FFI::LckCoreNative_start_login_attempt_callback_delegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::FFI::LckCoreNative.dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::Core::FFI::ReturnCode (*)()>(&::Liv::Lck::Core::FFI::LckCoreNative::dispose)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9cfee08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::FFI::LckCoreNative*>(),
                        {"dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::FFI::LckCoreNative.log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Liv::Lck::Core::LogType, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, int32_t)>(&::Liv::Lck::Core::FFI::LckCoreNative::log)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9cfeccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::FFI::LckCoreNative*>(),
                        {"log", {}, {::i2c::type_of<::Liv::Lck::Core::LogType>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Liv::Lck::Core::FFI::LckCoreNative::set_max_log_level(::Liv::Lck::Core::LevelFilter  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::FFI::LckCoreNative*>(),
                        {"set_max_log_level", {}, {::i2c::type_of<::Liv::Lck::Core::LevelFilter>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, level);
}
inline ::Liv::Lck::Core::FFI::ReturnCode Liv::Lck::Core::FFI::LckCoreNative::initialize_android(::System::IntPtr  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::FFI::LckCoreNative*>(),
                        {"initialize_android", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::Core::FFI::ReturnCode>(nullptr, ___internal_method, context);
}
inline ::Liv::Lck::Core::FFI::ReturnCode Liv::Lck::Core::FFI::LckCoreNative::initialize(::System::IntPtr  tracking_id, ::Liv::Lck::Core::FFI::GameInfo  game_info, ::Liv::Lck::Core::FFI::LckInfo  lck_info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::FFI::LckCoreNative*>(),
                        {"initialize", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Liv::Lck::Core::FFI::GameInfo>(), ::i2c::type_of<::Liv::Lck::Core::FFI::LckInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::Core::FFI::ReturnCode>(nullptr, ___internal_method, tracking_id, game_info, lck_info);
}
inline ::Liv::Lck::Core::FFI::ReturnCode Liv::Lck::Core::FFI::LckCoreNative::check_login_attempt_completed(::System::IntPtr  complete)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::FFI::LckCoreNative*>(),
                        {"check_login_attempt_completed", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::Core::FFI::ReturnCode>(nullptr, ___internal_method, complete);
}
inline ::Liv::Lck::Core::FFI::ReturnCode Liv::Lck::Core::FFI::LckCoreNative::get_remaining_backoff_time_seconds(::System::IntPtr  remaining)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::FFI::LckCoreNative*>(),
                        {"get_remaining_backoff_time_seconds", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::Core::FFI::ReturnCode>(nullptr, ___internal_method, remaining);
}
inline ::Liv::Lck::Core::FFI::ReturnCode Liv::Lck::Core::FFI::LckCoreNative::is_user_subscribed(::System::IntPtr  subscribed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::FFI::LckCoreNative*>(),
                        {"is_user_subscribed", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::Core::FFI::ReturnCode>(nullptr, ___internal_method, subscribed);
}
inline ::Liv::Lck::Core::FFI::ReturnCode Liv::Lck::Core::FFI::LckCoreNative::has_user_configured_streaming(::System::IntPtr  configured)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::FFI::LckCoreNative*>(),
                        {"has_user_configured_streaming", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::Core::FFI::ReturnCode>(nullptr, ___internal_method, configured);
}
inline ::Liv::Lck::Core::FFI::ReturnCode Liv::Lck::Core::FFI::LckCoreNative::start_login_attempt(::Liv::Lck::Core::FFI::LckCoreNative_start_login_attempt_callback_delegate*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::FFI::LckCoreNative*>(),
                        {"start_login_attempt", {}, {::i2c::type_of<::Liv::Lck::Core::FFI::LckCoreNative_start_login_attempt_callback_delegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::Core::FFI::ReturnCode>(nullptr, ___internal_method, callback);
}
inline ::Liv::Lck::Core::FFI::ReturnCode Liv::Lck::Core::FFI::LckCoreNative::dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::FFI::LckCoreNative*>(),
                        {"dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::Core::FFI::ReturnCode>(nullptr, ___internal_method);
}
inline void Liv::Lck::Core::FFI::LckCoreNative::log(::Liv::Lck::Core::LogType  level, ::System::IntPtr  message, ::System::IntPtr  member_name, ::System::IntPtr  file_path, int32_t  line_number)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::FFI::LckCoreNative*>(),
                        {"log", {}, {::i2c::type_of<::Liv::Lck::Core::LogType>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, level, message, member_name, file_path, line_number);
}
// Ctor Parameters []
constexpr ::Liv::Lck::Core::FFI::LckCoreNative::LckCoreNative()   {
}
//  Writing Method size for method: ::Liv::Lck::Core::FFI::LckCoreNative_start_login_attempt_callback_delegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Core::FFI::LckCoreNative_start_login_attempt_callback_delegate::*)(::System::Object*, ::System::IntPtr)>(&::Liv::Lck::Core::FFI::LckCoreNative_start_login_attempt_callback_delegate::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9cff0cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::FFI::LckCoreNative_start_login_attempt_callback_delegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::FFI::LckCoreNative_start_login_attempt_callback_delegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Core::FFI::LckCoreNative_start_login_attempt_callback_delegate::*)(::Liv::Lck::Core::FFI::ReturnCode, ::System::IntPtr)>(&::Liv::Lck::Core::FFI::LckCoreNative_start_login_attempt_callback_delegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9d020e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Core::FFI::LckCoreNative_start_login_attempt_callback_delegate*>(),
                    {::i2c::class_of<::Liv::Lck::Core::FFI::LckCoreNative_start_login_attempt_callback_delegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::FFI::LckCoreNative_start_login_attempt_callback_delegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Liv::Lck::Core::FFI::LckCoreNative_start_login_attempt_callback_delegate::*)(::Liv::Lck::Core::FFI::ReturnCode, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*)>(&::Liv::Lck::Core::FFI::LckCoreNative_start_login_attempt_callback_delegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9d020f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Core::FFI::LckCoreNative_start_login_attempt_callback_delegate*>(),
                    {::i2c::class_of<::Liv::Lck::Core::FFI::LckCoreNative_start_login_attempt_callback_delegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::FFI::LckCoreNative_start_login_attempt_callback_delegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Core::FFI::LckCoreNative_start_login_attempt_callback_delegate::*)(::System::IAsyncResult*)>(&::Liv::Lck::Core::FFI::LckCoreNative_start_login_attempt_callback_delegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9d021a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Core::FFI::LckCoreNative_start_login_attempt_callback_delegate*>(),
                    {::i2c::class_of<::Liv::Lck::Core::FFI::LckCoreNative_start_login_attempt_callback_delegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Liv::Lck::Core::FFI::LckCoreNative_start_login_attempt_callback_delegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::FFI::LckCoreNative_start_login_attempt_callback_delegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Liv::Lck::Core::FFI::LckCoreNative_start_login_attempt_callback_delegate::Invoke(::Liv::Lck::Core::FFI::ReturnCode  return_code, ::System::IntPtr  login_code)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Core::FFI::LckCoreNative_start_login_attempt_callback_delegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, return_code, login_code);
}
inline ::System::IAsyncResult* Liv::Lck::Core::FFI::LckCoreNative_start_login_attempt_callback_delegate::BeginInvoke(::Liv::Lck::Core::FFI::ReturnCode  return_code, ::System::IntPtr  login_code, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Core::FFI::LckCoreNative_start_login_attempt_callback_delegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, return_code, login_code, callback, object);
}
inline void Liv::Lck::Core::FFI::LckCoreNative_start_login_attempt_callback_delegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Core::FFI::LckCoreNative_start_login_attempt_callback_delegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Liv::Lck::Core::FFI::LckCoreNative_start_login_attempt_callback_delegate* Liv::Lck::Core::FFI::LckCoreNative_start_login_attempt_callback_delegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Core::FFI::LckCoreNative_start_login_attempt_callback_delegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Liv::Lck::Core::FFI::LckCoreNative_start_login_attempt_callback_delegate::LckCoreNative_start_login_attempt_callback_delegate()   {
}
