#pragma once
// IWYU pragma private; include "Oculus/Voice/Core/Bindings/Android/PlatformLogger/VoiceSDKPlatformLoggerImpl.hpp"
#include "Oculus/Voice/Core/Bindings/Android/zzzz__BaseAndroidConnectionImpl_1_impl.hpp"
#include "Oculus/Voice/Core/Bindings/Android/PlatformLogger/zzzz__VoiceSDKPlatformLoggerImpl_def.hpp"
#include "Oculus/Voice/Core/Bindings/Android/PlatformLogger/zzzz__VoiceSDKConsoleLoggerImpl_def.hpp"
#include "Oculus/Voice/Core/Bindings/Android/PlatformLogger/zzzz__VoiceSDKLoggerBinding_def.hpp"
#include "Oculus/Voice/Core/Bindings/Interfaces/zzzz__IVoiceSDKLogger_def.hpp"
//  Writing Method size for method: ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl.get_IsUsingPlatformIntegration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::*)()>(&::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::get_IsUsingPlatformIntegration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e31a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl*>(),
                        {"get_IsUsingPlatformIntegration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl.set_IsUsingPlatformIntegration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::*)(bool)>(&::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::set_IsUsingPlatformIntegration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e31a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl*>(),
                        {"set_IsUsingPlatformIntegration", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl.get_WitApplication
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::*)()>(&::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::get_WitApplication)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e31aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl*>(),
                        {"get_WitApplication", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl.set_WitApplication
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::*)(::StringW)>(&::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::set_WitApplication)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e31aa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl*>(),
                        {"set_WitApplication", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl.get_PackageName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::*)()>(&::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::get_PackageName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e31ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl*>(),
                        {"get_PackageName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl.set_ShouldLogToConsole
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::*)(bool)>(&::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::set_ShouldLogToConsole)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e31ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl*>(),
                        {"set_ShouldLogToConsole", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::*)()>(&::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5e31ad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl.Connect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::*)(::StringW)>(&::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::Connect)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5e31bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl*>(),
                    {::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl.Disconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::*)()>(&::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::Disconnect)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5e31c6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl*>(),
                    {::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl.LogInteractionStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::*)(::StringW, ::StringW)>(&::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::LogInteractionStart)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5e31cf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl*>(),
                        {"LogInteractionStart", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl.LogInteractionEndSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::*)()>(&::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::LogInteractionEndSuccess)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e31e9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl*>(),
                        {"LogInteractionEndSuccess", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl.LogInteractionEndFailure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::*)(::StringW)>(&::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::LogInteractionEndFailure)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e31ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl*>(),
                        {"LogInteractionEndFailure", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl.LogInteractionPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::*)(::StringW)>(&::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::LogInteractionPoint)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e31f4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl*>(),
                        {"LogInteractionPoint", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl.LogAnnotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::*)(::StringW, ::StringW)>(&::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::LogAnnotation)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5e31e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl*>(),
                        {"LogAnnotation", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl.LogFirstTranscriptionTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::*)()>(&::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::LogFirstTranscriptionTime)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5e31fa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl*>(),
                        {"LogFirstTranscriptionTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::__cordl_internal_get__IsUsingPlatformIntegration_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsUsingPlatformIntegration_k__BackingField;
}
constexpr bool const& Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::__cordl_internal_get__IsUsingPlatformIntegration_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsUsingPlatformIntegration_k__BackingField;
}
constexpr void Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::__cordl_internal_set__IsUsingPlatformIntegration_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsUsingPlatformIntegration_k__BackingField = value;
}
constexpr ::StringW& Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::__cordl_internal_get__WitApplication_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WitApplication_k__BackingField;
}
constexpr ::StringW const& Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::__cordl_internal_get__WitApplication_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WitApplication_k__BackingField;
}
constexpr void Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::__cordl_internal_set__WitApplication_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WitApplication_k__BackingField = value;
}
constexpr ::StringW& Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::__cordl_internal_get__PackageName_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PackageName_k__BackingField;
}
constexpr ::StringW const& Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::__cordl_internal_get__PackageName_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PackageName_k__BackingField;
}
constexpr void Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::__cordl_internal_set__PackageName_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PackageName_k__BackingField = value;
}
constexpr ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKConsoleLoggerImpl*& Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::__cordl_internal_get_consoleLoggerImpl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___consoleLoggerImpl;
}
constexpr ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKConsoleLoggerImpl* const& Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::__cordl_internal_get_consoleLoggerImpl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___consoleLoggerImpl;
}
constexpr void Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::__cordl_internal_set_consoleLoggerImpl(::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKConsoleLoggerImpl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___consoleLoggerImpl = value;
}
constexpr bool& Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::__cordl_internal_get_loggedFirstTranscriptionTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loggedFirstTranscriptionTime;
}
constexpr bool const& Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::__cordl_internal_get_loggedFirstTranscriptionTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loggedFirstTranscriptionTime;
}
constexpr void Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::__cordl_internal_set_loggedFirstTranscriptionTime(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loggedFirstTranscriptionTime = value;
}
inline bool Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::get_IsUsingPlatformIntegration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl*>(),
                        {"get_IsUsingPlatformIntegration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::set_IsUsingPlatformIntegration(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl*>(),
                        {"set_IsUsingPlatformIntegration", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::get_WitApplication()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl*>(),
                        {"get_WitApplication", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::set_WitApplication(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl*>(),
                        {"set_WitApplication", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::get_PackageName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl*>(),
                        {"get_PackageName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::set_ShouldLogToConsole(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl*>(),
                        {"set_ShouldLogToConsole", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::Connect(::StringW  version)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, version);
}
inline void Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::Disconnect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::LogInteractionStart(::StringW  requestId, ::StringW  witApi)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl*>(),
                        {"LogInteractionStart", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, requestId, witApi);
}
inline void Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::LogInteractionEndSuccess()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl*>(),
                        {"LogInteractionEndSuccess", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::LogInteractionEndFailure(::StringW  errorMessage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl*>(),
                        {"LogInteractionEndFailure", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, errorMessage);
}
inline void Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::LogInteractionPoint(::StringW  interactionPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl*>(),
                        {"LogInteractionPoint", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactionPoint);
}
inline void Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::LogAnnotation(::StringW  annotationKey, ::StringW  annotationValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl*>(),
                        {"LogAnnotation", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, annotationKey, annotationValue);
}
inline void Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::LogFirstTranscriptionTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl*>(),
                        {"LogFirstTranscriptionTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl* Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl*>());
}
/// @brief Convert operator to "::Oculus::Voice::Core::Bindings::Interfaces::IVoiceSDKLogger"
constexpr  Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::operator ::Oculus::Voice::Core::Bindings::Interfaces::IVoiceSDKLogger*() noexcept {
return static_cast<::Oculus::Voice::Core::Bindings::Interfaces::IVoiceSDKLogger*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Voice::Core::Bindings::Interfaces::IVoiceSDKLogger"
constexpr ::Oculus::Voice::Core::Bindings::Interfaces::IVoiceSDKLogger* Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::i___Oculus__Voice__Core__Bindings__Interfaces__IVoiceSDKLogger() noexcept {
return static_cast<::Oculus::Voice::Core::Bindings::Interfaces::IVoiceSDKLogger*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKPlatformLoggerImpl::VoiceSDKPlatformLoggerImpl()   {
}
