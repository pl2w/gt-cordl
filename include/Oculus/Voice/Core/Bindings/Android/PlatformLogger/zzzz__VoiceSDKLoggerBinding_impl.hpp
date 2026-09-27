#pragma once
// IWYU pragma private; include "Oculus/Voice/Core/Bindings/Android/PlatformLogger/VoiceSDKLoggerBinding.hpp"
#include "Oculus/Voice/Core/Bindings/Android/zzzz__BaseServiceBinding_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Voice/Core/Bindings/Android/PlatformLogger/zzzz__VoiceSDKLoggerBinding_def.hpp"
#include "Oculus/Voice/Core/Bindings/Android/PlatformLogger/zzzz__VoiceSDKLoggerBinding_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskScheduler_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AndroidJavaObject_def.hpp"
//  Writing Method size for method: ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding::*)(::UnityEngine::AndroidJavaObject*)>(&::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5e31324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::AndroidJavaObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding.Connect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding::*)()>(&::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding::Connect)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5e313b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding*>(),
                        {"Connect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding.LogInteractionStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding::*)(::StringW, ::StringW)>(&::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding::LogInteractionStart)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5e3147c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding*>(),
                        {"LogInteractionStart", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding.LogInteractionEndSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding::*)(::StringW)>(&::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding::LogInteractionEndSuccess)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5e316a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding*>(),
                        {"LogInteractionEndSuccess", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding.LogInteractionEndFailure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding::*)(::StringW, ::StringW)>(&::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding::LogInteractionEndFailure)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5e31768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding*>(),
                        {"LogInteractionEndFailure", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding.LogInteractionPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding::*)(::StringW, ::StringW)>(&::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding::LogInteractionPoint)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5e31864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding*>(),
                        {"LogInteractionPoint", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding.LogAnnotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding::*)(::StringW, ::StringW)>(&::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding::LogAnnotation)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5e31960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding*>(),
                        {"LogAnnotation", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding.Call
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding::*)(::StringW, ::ArrayW<::System::Object*>)>(&::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding::Call)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5e31578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding*>(),
                        {"Call", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::TaskScheduler*& Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding::__cordl_internal_get__scheduler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scheduler;
}
constexpr ::System::Threading::Tasks::TaskScheduler* const& Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding::__cordl_internal_get__scheduler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scheduler;
}
constexpr void Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding::__cordl_internal_set__scheduler(::System::Threading::Tasks::TaskScheduler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scheduler = value;
}
inline void Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding::_ctor(::UnityEngine::AndroidJavaObject*  loggerInstance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::AndroidJavaObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, loggerInstance);
}
inline void Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding::Connect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding*>(),
                        {"Connect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding::LogInteractionStart(::StringW  requestId, ::StringW  startTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding*>(),
                        {"LogInteractionStart", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, requestId, startTime);
}
inline void Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding::LogInteractionEndSuccess(::StringW  endTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding*>(),
                        {"LogInteractionEndSuccess", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, endTime);
}
inline void Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding::LogInteractionEndFailure(::StringW  endTime, ::StringW  errorMessage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding*>(),
                        {"LogInteractionEndFailure", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, endTime, errorMessage);
}
inline void Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding::LogInteractionPoint(::StringW  interactionPoint, ::StringW  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding*>(),
                        {"LogInteractionPoint", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactionPoint, time);
}
inline void Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding::LogAnnotation(::StringW  annotationKey, ::StringW  annotationValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding*>(),
                        {"LogAnnotation", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, annotationKey, annotationValue);
}
inline ::System::Threading::Tasks::Task* Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding::Call(::StringW  methodName, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding*>(),
                        {"Call", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, methodName, parameters);
}
template<typename TReturnType>
inline ::System::Threading::Tasks::Task_1<TReturnType>* Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding::Call(::StringW  methodName, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding*>(),
                    {"Call", {::i2c::class_of<TReturnType>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TReturnType>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TReturnType>*>(this, ___internal_method, methodName, parameters);
}
/// @brief [Preserve]
inline ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding* Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding::New_ctor(::UnityEngine::AndroidJavaObject*  loggerInstance)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding*>(loggerInstance));
}
// Ctor Parameters []
constexpr ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding::VoiceSDKLoggerBinding()   {
}
template<typename TReturnType>
constexpr ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding*& Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding___c__DisplayClass9_0_1<TReturnType>::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename TReturnType>
constexpr ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding* const& Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding___c__DisplayClass9_0_1<TReturnType>::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename TReturnType>
constexpr void Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding___c__DisplayClass9_0_1<TReturnType>::__cordl_internal_set___4__this(::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
template<typename TReturnType>
constexpr ::StringW& Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding___c__DisplayClass9_0_1<TReturnType>::__cordl_internal_get_methodName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___methodName;
}
template<typename TReturnType>
constexpr ::StringW const& Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding___c__DisplayClass9_0_1<TReturnType>::__cordl_internal_get_methodName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___methodName;
}
template<typename TReturnType>
constexpr void Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding___c__DisplayClass9_0_1<TReturnType>::__cordl_internal_set_methodName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___methodName = value;
}
template<typename TReturnType>
constexpr ::ArrayW<::System::Object*>& Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding___c__DisplayClass9_0_1<TReturnType>::__cordl_internal_get_parameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parameters;
}
template<typename TReturnType>
constexpr ::ArrayW<::System::Object*> const& Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding___c__DisplayClass9_0_1<TReturnType>::__cordl_internal_get_parameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parameters;
}
template<typename TReturnType>
constexpr void Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding___c__DisplayClass9_0_1<TReturnType>::__cordl_internal_set_parameters(::ArrayW<::System::Object*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parameters = value;
}
template<typename TReturnType>
inline void Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding___c__DisplayClass9_0_1<TReturnType>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding___c__DisplayClass9_0_1<TReturnType>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TReturnType>
inline TReturnType Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding___c__DisplayClass9_0_1<TReturnType>::_Call_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding___c__DisplayClass9_0_1<TReturnType>*>(),
                        {"<Call>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TReturnType>(this, ___internal_method);
}
template<typename TReturnType>
inline ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding___c__DisplayClass9_0_1<TReturnType>* Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding___c__DisplayClass9_0_1<TReturnType>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding___c__DisplayClass9_0_1<TReturnType>*>());
}
// Ctor Parameters []
template<typename TReturnType>
constexpr ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding___c__DisplayClass9_0_1<TReturnType>::VoiceSDKLoggerBinding___c__DisplayClass9_0_1()   {
}
//  Writing Method size for method: ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding___c__DisplayClass8_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding___c__DisplayClass8_0::*)()>(&::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding___c__DisplayClass8_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e31a5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding___c__DisplayClass8_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding___c__DisplayClass8_0._Call_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding___c__DisplayClass8_0::*)()>(&::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding___c__DisplayClass8_0::_Call_b__0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5e31a64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding___c__DisplayClass8_0*>(),
                        {"<Call>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding*& Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding___c__DisplayClass8_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding* const& Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding___c__DisplayClass8_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding___c__DisplayClass8_0::__cordl_internal_set___4__this(::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::StringW& Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding___c__DisplayClass8_0::__cordl_internal_get_methodName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___methodName;
}
constexpr ::StringW const& Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding___c__DisplayClass8_0::__cordl_internal_get_methodName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___methodName;
}
constexpr void Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding___c__DisplayClass8_0::__cordl_internal_set_methodName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___methodName = value;
}
constexpr ::ArrayW<::System::Object*>& Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding___c__DisplayClass8_0::__cordl_internal_get_parameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parameters;
}
constexpr ::ArrayW<::System::Object*> const& Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding___c__DisplayClass8_0::__cordl_internal_get_parameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parameters;
}
constexpr void Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding___c__DisplayClass8_0::__cordl_internal_set_parameters(::ArrayW<::System::Object*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parameters = value;
}
inline void Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding___c__DisplayClass8_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding___c__DisplayClass8_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding___c__DisplayClass8_0::_Call_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding___c__DisplayClass8_0*>(),
                        {"<Call>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding___c__DisplayClass8_0* Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding___c__DisplayClass8_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding___c__DisplayClass8_0*>());
}
// Ctor Parameters []
constexpr ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding___c__DisplayClass8_0::VoiceSDKLoggerBinding___c__DisplayClass8_0()   {
}
