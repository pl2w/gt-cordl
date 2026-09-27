#pragma once
// IWYU pragma private; include "Liv/Lck/Core/LckCore.hpp"
#include "Liv/Lck/Core/FFI/zzzz__ReturnCode_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/Core/zzzz__LckCore_def.hpp"
#include "Liv/Lck/Core/FFI/zzzz__ReturnCode_def.hpp"
#include "Liv/Lck/Core/zzzz__CoreError_def.hpp"
#include "Liv/Lck/Core/zzzz__GameInfo_def.hpp"
#include "Liv/Lck/Core/zzzz__LckCore__CheckLoginCompletedAsync_d__10_def.hpp"
#include "Liv/Lck/Core/zzzz__LckCore__GetRemainingBackoffTimeSeconds_d__11_def.hpp"
#include "Liv/Lck/Core/zzzz__LckCore__HasUserConfiguredStreaming_d__6_def.hpp"
#include "Liv/Lck/Core/zzzz__LckCore__IsUserSubscribed_d__8_def.hpp"
#include "Liv/Lck/Core/zzzz__LckCore__StartLoginAttemptAsync_d__9_def.hpp"
#include "Liv/Lck/Core/zzzz__LckCore_def.hpp"
#include "Liv/Lck/Core/zzzz__LckInfo_def.hpp"
#include "Liv/Lck/Core/zzzz__LevelFilter_def.hpp"
#include "Liv/Lck/Core/zzzz__LogType_def.hpp"
#include "Liv/Lck/Core/zzzz__Result_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Core::LckCore.StartLoginAttemptCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Liv::Lck::Core::FFI::ReturnCode, ::System::IntPtr)>(&::Liv::Lck::Core::LckCore::StartLoginAttemptCallback)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x9cfdc9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCore*>(),
                        {"StartLoginAttemptCallback", {}, {::i2c::type_of<::Liv::Lck::Core::FFI::ReturnCode>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::LckCore.SetMaxLogLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Liv::Lck::Core::LevelFilter)>(&::Liv::Lck::Core::LckCore::SetMaxLogLevel)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9cfddfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCore*>(),
                        {"SetMaxLogLevel", {}, {::i2c::type_of<::Liv::Lck::Core::LevelFilter>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::LckCore.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::Core::Result_1<bool>* (*)(::StringW, ::Liv::Lck::Core::GameInfo, ::Liv::Lck::Core::LckInfo)>(&::Liv::Lck::Core::LckCore::Initialize)> {
  constexpr static std::size_t size = 0x5bc;
  constexpr static std::size_t addrs = 0x9cfde80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCore*>(),
                        {"Initialize", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Liv::Lck::Core::GameInfo>(), ::i2c::type_of<::Liv::Lck::Core::LckInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::LckCore.HasUserConfiguredStreaming
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>* (*)()>(&::Liv::Lck::Core::LckCore::HasUserConfiguredStreaming)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x9cfe5cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCore*>(),
                        {"HasUserConfiguredStreaming", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::LckCore.MapReturnCodeToCoreError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::Liv::Lck::Core::CoreError,::StringW> (*)(::Liv::Lck::Core::FFI::ReturnCode)>(&::Liv::Lck::Core::LckCore::MapReturnCodeToCoreError)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x9cfe6bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCore*>(),
                        {"MapReturnCodeToCoreError", {}, {::i2c::type_of<::Liv::Lck::Core::FFI::ReturnCode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::LckCore.IsUserSubscribed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>* (*)()>(&::Liv::Lck::Core::LckCore::IsUserSubscribed)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x9cfe810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCore*>(),
                        {"IsUserSubscribed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::LckCore.StartLoginAttemptAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<::StringW>*>* (*)()>(&::Liv::Lck::Core::LckCore::StartLoginAttemptAsync)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9cfe900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCore*>(),
                        {"StartLoginAttemptAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::LckCore.CheckLoginCompletedAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>* (*)()>(&::Liv::Lck::Core::LckCore::CheckLoginCompletedAsync)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9cfe9ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCore*>(),
                        {"CheckLoginCompletedAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::LckCore.GetRemainingBackoffTimeSeconds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<float_t>*>* (*)()>(&::Liv::Lck::Core::LckCore::GetRemainingBackoffTimeSeconds)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9cfead8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCore*>(),
                        {"GetRemainingBackoffTimeSeconds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::LckCore.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Liv::Lck::Core::LogType, ::StringW, ::StringW, ::StringW, int32_t)>(&::Liv::Lck::Core::LckCore::Log)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9cfebc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCore*>(),
                        {"Log", {}, {::i2c::type_of<::Liv::Lck::Core::LogType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::LckCore.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Liv::Lck::Core::LckCore::Dispose)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9cfed7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCore*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Liv::Lck::Core::LckCore::setStaticF__loginLock(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "_loginLock", ::Liv::Lck::Core::LckCore*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* Liv::Lck::Core::LckCore::getStaticF__loginLock()  {
return ::cordl_internals::getStaticField<::System::Object*, "_loginLock", ::Liv::Lck::Core::LckCore*>();
}
inline void Liv::Lck::Core::LckCore::setStaticF__lastReturnCode(::Liv::Lck::Core::FFI::ReturnCode  value)  {
::cordl_internals::setStaticField<::Liv::Lck::Core::FFI::ReturnCode, "_lastReturnCode", ::Liv::Lck::Core::LckCore*>(std::forward<::Liv::Lck::Core::FFI::ReturnCode>(value));
}
inline ::Liv::Lck::Core::FFI::ReturnCode Liv::Lck::Core::LckCore::getStaticF__lastReturnCode()  {
return ::cordl_internals::getStaticField<::Liv::Lck::Core::FFI::ReturnCode, "_lastReturnCode", ::Liv::Lck::Core::LckCore*>();
}
inline void Liv::Lck::Core::LckCore::setStaticF__loginCode(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "_loginCode", ::Liv::Lck::Core::LckCore*>(std::forward<::StringW>(value));
}
inline ::StringW Liv::Lck::Core::LckCore::getStaticF__loginCode()  {
return ::cordl_internals::getStaticField<::StringW, "_loginCode", ::Liv::Lck::Core::LckCore*>();
}
inline void Liv::Lck::Core::LckCore::StartLoginAttemptCallback(::Liv::Lck::Core::FFI::ReturnCode  returnCode, ::System::IntPtr  loginCodePtr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCore*>(),
                        {"StartLoginAttemptCallback", {}, {::i2c::type_of<::Liv::Lck::Core::FFI::ReturnCode>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, returnCode, loginCodePtr);
}
inline void Liv::Lck::Core::LckCore::SetMaxLogLevel(::Liv::Lck::Core::LevelFilter  levelFilter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCore*>(),
                        {"SetMaxLogLevel", {}, {::i2c::type_of<::Liv::Lck::Core::LevelFilter>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, levelFilter);
}
inline ::Liv::Lck::Core::Result_1<bool>* Liv::Lck::Core::LckCore::Initialize(::StringW  trackingId, ::Liv::Lck::Core::GameInfo  gameInfo, ::Liv::Lck::Core::LckInfo  lckInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCore*>(),
                        {"Initialize", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Liv::Lck::Core::GameInfo>(), ::i2c::type_of<::Liv::Lck::Core::LckInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::Core::Result_1<bool>*>(nullptr, ___internal_method, trackingId, gameInfo, lckInfo);
}
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>* Liv::Lck::Core::LckCore::HasUserConfiguredStreaming()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCore*>(),
                        {"HasUserConfiguredStreaming", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>*>(nullptr, ___internal_method);
}
inline ::System::ValueTuple_2<::Liv::Lck::Core::CoreError,::StringW> Liv::Lck::Core::LckCore::MapReturnCodeToCoreError(::Liv::Lck::Core::FFI::ReturnCode  returnCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCore*>(),
                        {"MapReturnCodeToCoreError", {}, {::i2c::type_of<::Liv::Lck::Core::FFI::ReturnCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::Liv::Lck::Core::CoreError,::StringW>>(nullptr, ___internal_method, returnCode);
}
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>* Liv::Lck::Core::LckCore::IsUserSubscribed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCore*>(),
                        {"IsUserSubscribed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>*>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<::StringW>*>* Liv::Lck::Core::LckCore::StartLoginAttemptAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCore*>(),
                        {"StartLoginAttemptAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<::StringW>*>*>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>* Liv::Lck::Core::LckCore::CheckLoginCompletedAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCore*>(),
                        {"CheckLoginCompletedAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>*>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<float_t>*>* Liv::Lck::Core::LckCore::GetRemainingBackoffTimeSeconds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCore*>(),
                        {"GetRemainingBackoffTimeSeconds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<float_t>*>*>(nullptr, ___internal_method);
}
inline void Liv::Lck::Core::LckCore::Log(::Liv::Lck::Core::LogType  level, ::StringW  message, ::StringW  memberName, ::StringW  filePath, int32_t  lineNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCore*>(),
                        {"Log", {}, {::i2c::type_of<::Liv::Lck::Core::LogType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, level, message, memberName, filePath, lineNumber);
}
inline void Liv::Lck::Core::LckCore::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCore*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Liv::Lck::Core::LckCore::LckCore()   {
}
//  Writing Method size for method: ::Liv::Lck::Core::LckCore___c__DisplayClass8_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Core::LckCore___c__DisplayClass8_0::*)()>(&::Liv::Lck::Core::LckCore___c__DisplayClass8_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cff580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCore___c__DisplayClass8_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::LckCore___c__DisplayClass8_0._IsUserSubscribed_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Core::LckCore___c__DisplayClass8_0::*)()>(&::Liv::Lck::Core::LckCore___c__DisplayClass8_0::_IsUserSubscribed_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9cff588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCore___c__DisplayClass8_0*>(),
                        {"<IsUserSubscribed>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::Lck::Core::FFI::ReturnCode& Liv::Lck::Core::LckCore___c__DisplayClass8_0::__cordl_internal_get_returnCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___returnCode;
}
constexpr ::Liv::Lck::Core::FFI::ReturnCode const& Liv::Lck::Core::LckCore___c__DisplayClass8_0::__cordl_internal_get_returnCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___returnCode;
}
constexpr void Liv::Lck::Core::LckCore___c__DisplayClass8_0::__cordl_internal_set_returnCode(::Liv::Lck::Core::FFI::ReturnCode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___returnCode = value;
}
constexpr ::System::IntPtr& Liv::Lck::Core::LckCore___c__DisplayClass8_0::__cordl_internal_get_isSubscribedPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSubscribedPtr;
}
constexpr ::System::IntPtr const& Liv::Lck::Core::LckCore___c__DisplayClass8_0::__cordl_internal_get_isSubscribedPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSubscribedPtr;
}
constexpr void Liv::Lck::Core::LckCore___c__DisplayClass8_0::__cordl_internal_set_isSubscribedPtr(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isSubscribedPtr = value;
}
inline void Liv::Lck::Core::LckCore___c__DisplayClass8_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCore___c__DisplayClass8_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Core::LckCore___c__DisplayClass8_0::_IsUserSubscribed_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCore___c__DisplayClass8_0*>(),
                        {"<IsUserSubscribed>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::Core::LckCore___c__DisplayClass8_0* Liv::Lck::Core::LckCore___c__DisplayClass8_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Core::LckCore___c__DisplayClass8_0*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Core::LckCore___c__DisplayClass8_0::LckCore___c__DisplayClass8_0()   {
}
//  Writing Method size for method: ::Liv::Lck::Core::LckCore___c__DisplayClass6_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Core::LckCore___c__DisplayClass6_0::*)()>(&::Liv::Lck::Core::LckCore___c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cff4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCore___c__DisplayClass6_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::LckCore___c__DisplayClass6_0._HasUserConfiguredStreaming_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Core::LckCore___c__DisplayClass6_0::*)()>(&::Liv::Lck::Core::LckCore___c__DisplayClass6_0::_HasUserConfiguredStreaming_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9cff4e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCore___c__DisplayClass6_0*>(),
                        {"<HasUserConfiguredStreaming>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::Lck::Core::FFI::ReturnCode& Liv::Lck::Core::LckCore___c__DisplayClass6_0::__cordl_internal_get_returnCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___returnCode;
}
constexpr ::Liv::Lck::Core::FFI::ReturnCode const& Liv::Lck::Core::LckCore___c__DisplayClass6_0::__cordl_internal_get_returnCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___returnCode;
}
constexpr void Liv::Lck::Core::LckCore___c__DisplayClass6_0::__cordl_internal_set_returnCode(::Liv::Lck::Core::FFI::ReturnCode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___returnCode = value;
}
constexpr ::System::IntPtr& Liv::Lck::Core::LckCore___c__DisplayClass6_0::__cordl_internal_get_hasConfiguredPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasConfiguredPtr;
}
constexpr ::System::IntPtr const& Liv::Lck::Core::LckCore___c__DisplayClass6_0::__cordl_internal_get_hasConfiguredPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasConfiguredPtr;
}
constexpr void Liv::Lck::Core::LckCore___c__DisplayClass6_0::__cordl_internal_set_hasConfiguredPtr(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasConfiguredPtr = value;
}
inline void Liv::Lck::Core::LckCore___c__DisplayClass6_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCore___c__DisplayClass6_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Core::LckCore___c__DisplayClass6_0::_HasUserConfiguredStreaming_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCore___c__DisplayClass6_0*>(),
                        {"<HasUserConfiguredStreaming>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::Core::LckCore___c__DisplayClass6_0* Liv::Lck::Core::LckCore___c__DisplayClass6_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Core::LckCore___c__DisplayClass6_0*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Core::LckCore___c__DisplayClass6_0::LckCore___c__DisplayClass6_0()   {
}
//  Writing Method size for method: ::Liv::Lck::Core::LckCore___c__DisplayClass11_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Core::LckCore___c__DisplayClass11_0::*)()>(&::Liv::Lck::Core::LckCore___c__DisplayClass11_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cff368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCore___c__DisplayClass11_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::LckCore___c__DisplayClass11_0._GetRemainingBackoffTimeSeconds_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Core::LckCore___c__DisplayClass11_0::*)()>(&::Liv::Lck::Core::LckCore___c__DisplayClass11_0::_GetRemainingBackoffTimeSeconds_b__0)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x9cff370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCore___c__DisplayClass11_0*>(),
                        {"<GetRemainingBackoffTimeSeconds>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::Lck::Core::FFI::ReturnCode& Liv::Lck::Core::LckCore___c__DisplayClass11_0::__cordl_internal_get_returnCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___returnCode;
}
constexpr ::Liv::Lck::Core::FFI::ReturnCode const& Liv::Lck::Core::LckCore___c__DisplayClass11_0::__cordl_internal_get_returnCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___returnCode;
}
constexpr void Liv::Lck::Core::LckCore___c__DisplayClass11_0::__cordl_internal_set_returnCode(::Liv::Lck::Core::FFI::ReturnCode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___returnCode = value;
}
constexpr float_t& Liv::Lck::Core::LckCore___c__DisplayClass11_0::__cordl_internal_get_remainingTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remainingTime;
}
constexpr float_t const& Liv::Lck::Core::LckCore___c__DisplayClass11_0::__cordl_internal_get_remainingTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remainingTime;
}
constexpr void Liv::Lck::Core::LckCore___c__DisplayClass11_0::__cordl_internal_set_remainingTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___remainingTime = value;
}
inline void Liv::Lck::Core::LckCore___c__DisplayClass11_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCore___c__DisplayClass11_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Core::LckCore___c__DisplayClass11_0::_GetRemainingBackoffTimeSeconds_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCore___c__DisplayClass11_0*>(),
                        {"<GetRemainingBackoffTimeSeconds>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::Core::LckCore___c__DisplayClass11_0* Liv::Lck::Core::LckCore___c__DisplayClass11_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Core::LckCore___c__DisplayClass11_0*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Core::LckCore___c__DisplayClass11_0::LckCore___c__DisplayClass11_0()   {
}
//  Writing Method size for method: ::Liv::Lck::Core::LckCore___c__DisplayClass10_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Core::LckCore___c__DisplayClass10_0::*)()>(&::Liv::Lck::Core::LckCore___c__DisplayClass10_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cff1ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCore___c__DisplayClass10_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::LckCore___c__DisplayClass10_0._CheckLoginCompletedAsync_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Core::LckCore___c__DisplayClass10_0::*)()>(&::Liv::Lck::Core::LckCore___c__DisplayClass10_0::_CheckLoginCompletedAsync_b__0)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x9cff1f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCore___c__DisplayClass10_0*>(),
                        {"<CheckLoginCompletedAsync>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::Lck::Core::FFI::ReturnCode& Liv::Lck::Core::LckCore___c__DisplayClass10_0::__cordl_internal_get_returnCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___returnCode;
}
constexpr ::Liv::Lck::Core::FFI::ReturnCode const& Liv::Lck::Core::LckCore___c__DisplayClass10_0::__cordl_internal_get_returnCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___returnCode;
}
constexpr void Liv::Lck::Core::LckCore___c__DisplayClass10_0::__cordl_internal_set_returnCode(::Liv::Lck::Core::FFI::ReturnCode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___returnCode = value;
}
constexpr bool& Liv::Lck::Core::LckCore___c__DisplayClass10_0::__cordl_internal_get_isComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isComplete;
}
constexpr bool const& Liv::Lck::Core::LckCore___c__DisplayClass10_0::__cordl_internal_get_isComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isComplete;
}
constexpr void Liv::Lck::Core::LckCore___c__DisplayClass10_0::__cordl_internal_set_isComplete(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isComplete = value;
}
inline void Liv::Lck::Core::LckCore___c__DisplayClass10_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCore___c__DisplayClass10_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Core::LckCore___c__DisplayClass10_0::_CheckLoginCompletedAsync_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCore___c__DisplayClass10_0*>(),
                        {"<CheckLoginCompletedAsync>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::Core::LckCore___c__DisplayClass10_0* Liv::Lck::Core::LckCore___c__DisplayClass10_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Core::LckCore___c__DisplayClass10_0*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Core::LckCore___c__DisplayClass10_0::LckCore___c__DisplayClass10_0()   {
}
//  Writing Method size for method: ::Liv::Lck::Core::LckCore___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Core::LckCore___c::*)()>(&::Liv::Lck::Core::LckCore___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cfef54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCore___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::LckCore___c._StartLoginAttemptAsync_b__9_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Core::LckCore___c::*)()>(&::Liv::Lck::Core::LckCore___c::_StartLoginAttemptAsync_b__9_0)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x9cfef5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCore___c*>(),
                        {"<StartLoginAttemptAsync>b__9_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Liv::Lck::Core::LckCore___c::setStaticF___9(::Liv::Lck::Core::LckCore___c*  value)  {
::cordl_internals::setStaticField<::Liv::Lck::Core::LckCore___c*, "<>9", ::Liv::Lck::Core::LckCore___c*>(std::forward<::Liv::Lck::Core::LckCore___c*>(value));
}
inline ::Liv::Lck::Core::LckCore___c* Liv::Lck::Core::LckCore___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Liv::Lck::Core::LckCore___c*, "<>9", ::Liv::Lck::Core::LckCore___c*>();
}
inline void Liv::Lck::Core::LckCore___c::setStaticF___9__9_0(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__9_0", ::Liv::Lck::Core::LckCore___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* Liv::Lck::Core::LckCore___c::getStaticF___9__9_0()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__9_0", ::Liv::Lck::Core::LckCore___c*>();
}
inline void Liv::Lck::Core::LckCore___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCore___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Core::LckCore___c::_StartLoginAttemptAsync_b__9_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCore___c*>(),
                        {"<StartLoginAttemptAsync>b__9_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::Core::LckCore___c* Liv::Lck::Core::LckCore___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Core::LckCore___c*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Core::LckCore___c::LckCore___c()   {
}
