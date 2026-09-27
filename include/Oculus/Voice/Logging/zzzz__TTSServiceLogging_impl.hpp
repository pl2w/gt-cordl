#pragma once
// IWYU pragma private; include "Oculus/Voice/Logging/TTSServiceLogging.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Voice/Logging/zzzz__TTSServiceLogging_def.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSClipData_def.hpp"
#include "Meta/WitAi/TTS/zzzz__TTSService_def.hpp"
#include "Oculus/Voice/Core/Bindings/Interfaces/zzzz__IVoiceSDKLogger_def.hpp"
#include "Oculus/Voice/Logging/zzzz__TTSServiceLogging_TTSServiceRequestLog_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::Oculus::Voice::Logging::TTSServiceLogging.get_Service
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Meta::WitAi::TTS::TTSService> (::Oculus::Voice::Logging::TTSServiceLogging::*)()>(&::Oculus::Voice::Logging::TTSServiceLogging::get_Service)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb949f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Logging::TTSServiceLogging*>(),
                        {"get_Service", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Logging::TTSServiceLogging.set_Service
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Logging::TTSServiceLogging::*)(::Meta::WitAi::TTS::TTSService*)>(&::Oculus::Voice::Logging::TTSServiceLogging::set_Service)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb949f58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Logging::TTSServiceLogging*>(),
                        {"set_Service", {}, {::i2c::type_of<::Meta::WitAi::TTS::TTSService*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Logging::TTSServiceLogging.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Logging::TTSServiceLogging::*)()>(&::Oculus::Voice::Logging::TTSServiceLogging::Awake)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xb949f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Logging::TTSServiceLogging*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Logging::TTSServiceLogging.InitLogger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Logging::TTSServiceLogging::*)()>(&::Oculus::Voice::Logging::TTSServiceLogging::InitLogger)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0xb949fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Logging::TTSServiceLogging*>(),
                        {"InitLogger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Logging::TTSServiceLogging.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Logging::TTSServiceLogging::*)()>(&::Oculus::Voice::Logging::TTSServiceLogging::OnEnable)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0xb94a1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Logging::TTSServiceLogging*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Logging::TTSServiceLogging.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Logging::TTSServiceLogging::*)()>(&::Oculus::Voice::Logging::TTSServiceLogging::OnDisable)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0xb94a580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Logging::TTSServiceLogging*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Logging::TTSServiceLogging.OnRequestBegin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Logging::TTSServiceLogging::*)(::Meta::WitAi::TTS::Data::TTSClipData*)>(&::Oculus::Voice::Logging::TTSServiceLogging::OnRequestBegin)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb94a88c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Logging::TTSServiceLogging*>(),
                        {"OnRequestBegin", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Logging::TTSServiceLogging.OnRequestCancel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Logging::TTSServiceLogging::*)(::Meta::WitAi::TTS::Data::TTSClipData*)>(&::Oculus::Voice::Logging::TTSServiceLogging::OnRequestCancel)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb94aa78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Logging::TTSServiceLogging*>(),
                        {"OnRequestCancel", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Logging::TTSServiceLogging.OnRequestError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Logging::TTSServiceLogging::*)(::Meta::WitAi::TTS::Data::TTSClipData*, ::StringW)>(&::Oculus::Voice::Logging::TTSServiceLogging::OnRequestError)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb94af04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Logging::TTSServiceLogging*>(),
                        {"OnRequestError", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Logging::TTSServiceLogging.OnRequestFirstResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Logging::TTSServiceLogging::*)(::Meta::WitAi::TTS::Data::TTSClipData*)>(&::Oculus::Voice::Logging::TTSServiceLogging::OnRequestFirstResponse)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb94af08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Logging::TTSServiceLogging*>(),
                        {"OnRequestFirstResponse", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Logging::TTSServiceLogging.OnRequestReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Logging::TTSServiceLogging::*)(::Meta::WitAi::TTS::Data::TTSClipData*)>(&::Oculus::Voice::Logging::TTSServiceLogging::OnRequestReady)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb94afb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Logging::TTSServiceLogging*>(),
                        {"OnRequestReady", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Logging::TTSServiceLogging.OnRequestComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Logging::TTSServiceLogging::*)(::Meta::WitAi::TTS::Data::TTSClipData*)>(&::Oculus::Voice::Logging::TTSServiceLogging::OnRequestComplete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb94b028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Logging::TTSServiceLogging*>(),
                        {"OnRequestComplete", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Logging::TTSServiceLogging.LogStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Logging::TTSServiceLogging::*)(::Meta::WitAi::TTS::Data::TTSClipData*)>(&::Oculus::Voice::Logging::TTSServiceLogging::LogStart)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0xb94a890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Logging::TTSServiceLogging*>(),
                        {"LogStart", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Logging::TTSServiceLogging.GetRequestData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TTSServiceLogging_TTSServiceRequestLog (::Oculus::Voice::Logging::TTSServiceLogging::*)(::Meta::WitAi::TTS::Data::TTSClipData*)>(&::Oculus::Voice::Logging::TTSServiceLogging::GetRequestData)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb94b030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Logging::TTSServiceLogging*>(),
                        {"GetRequestData", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Logging::TTSServiceLogging.LogTimestamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Logging::TTSServiceLogging::*)(::Meta::WitAi::TTS::Data::TTSClipData*, ::StringW)>(&::Oculus::Voice::Logging::TTSServiceLogging::LogTimestamp)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb94af7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Logging::TTSServiceLogging*>(),
                        {"LogTimestamp", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Logging::TTSServiceLogging.LogTimestamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Logging::TTSServiceLogging::*)(::GlobalNamespace::TTSServiceLogging_TTSServiceRequestLog, ::StringW)>(&::Oculus::Voice::Logging::TTSServiceLogging::LogTimestamp)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb94b0c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Logging::TTSServiceLogging*>(),
                        {"LogTimestamp", {}, {::i2c::type_of<::GlobalNamespace::TTSServiceLogging_TTSServiceRequestLog>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Logging::TTSServiceLogging.LogAnnotate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Logging::TTSServiceLogging::*)(::GlobalNamespace::TTSServiceLogging_TTSServiceRequestLog, ::StringW, ::StringW)>(&::Oculus::Voice::Logging::TTSServiceLogging::LogAnnotate)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb94b120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Logging::TTSServiceLogging*>(),
                        {"LogAnnotate", {}, {::i2c::type_of<::GlobalNamespace::TTSServiceLogging_TTSServiceRequestLog>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Logging::TTSServiceLogging.LogComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Logging::TTSServiceLogging::*)(::Meta::WitAi::TTS::Data::TTSClipData*, ::StringW)>(&::Oculus::Voice::Logging::TTSServiceLogging::LogComplete)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0xb94aad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Logging::TTSServiceLogging*>(),
                        {"LogComplete", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Logging::TTSServiceLogging.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Oculus::Voice::Logging::TTSServiceLogging::Init)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb94b194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Logging::TTSServiceLogging*>(),
                        {"Init", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Logging::TTSServiceLogging.OnServiceStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Meta::WitAi::TTS::TTSService*)>(&::Oculus::Voice::Logging::TTSServiceLogging::OnServiceStart)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xb94b240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Logging::TTSServiceLogging*>(),
                        {"OnServiceStart", {}, {::i2c::type_of<::Meta::WitAi::TTS::TTSService*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Logging::TTSServiceLogging._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Logging::TTSServiceLogging::*)()>(&::Oculus::Voice::Logging::TTSServiceLogging::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb94b32c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Logging::TTSServiceLogging*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Oculus::Voice::Logging::TTSServiceLogging::__cordl_internal_get_EnableConsoleLogging()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableConsoleLogging;
}
constexpr bool const& Oculus::Voice::Logging::TTSServiceLogging::__cordl_internal_get_EnableConsoleLogging() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableConsoleLogging;
}
constexpr void Oculus::Voice::Logging::TTSServiceLogging::__cordl_internal_set_EnableConsoleLogging(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EnableConsoleLogging = value;
}
constexpr ::UnityW<::Meta::WitAi::TTS::TTSService>& Oculus::Voice::Logging::TTSServiceLogging::__cordl_internal_get__Service_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Service_k__BackingField;
}
constexpr ::UnityW<::Meta::WitAi::TTS::TTSService> const& Oculus::Voice::Logging::TTSServiceLogging::__cordl_internal_get__Service_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Service_k__BackingField;
}
constexpr void Oculus::Voice::Logging::TTSServiceLogging::__cordl_internal_set__Service_k__BackingField(::UnityW<::Meta::WitAi::TTS::TTSService>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Service_k__BackingField = value;
}
constexpr ::Oculus::Voice::Core::Bindings::Interfaces::IVoiceSDKLogger*& Oculus::Voice::Logging::TTSServiceLogging::__cordl_internal_get__voiceSDKLoggerImpl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voiceSDKLoggerImpl;
}
constexpr ::Oculus::Voice::Core::Bindings::Interfaces::IVoiceSDKLogger* const& Oculus::Voice::Logging::TTSServiceLogging::__cordl_internal_get__voiceSDKLoggerImpl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voiceSDKLoggerImpl;
}
constexpr void Oculus::Voice::Logging::TTSServiceLogging::__cordl_internal_set__voiceSDKLoggerImpl(::Oculus::Voice::Core::Bindings::Interfaces::IVoiceSDKLogger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____voiceSDKLoggerImpl = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::TTSServiceLogging_TTSServiceRequestLog>*& Oculus::Voice::Logging::TTSServiceLogging::__cordl_internal_get__requests()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requests;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::TTSServiceLogging_TTSServiceRequestLog>* const& Oculus::Voice::Logging::TTSServiceLogging::__cordl_internal_get__requests() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requests;
}
constexpr void Oculus::Voice::Logging::TTSServiceLogging::__cordl_internal_set__requests(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::TTSServiceLogging_TTSServiceRequestLog>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____requests = value;
}
inline void Oculus::Voice::Logging::TTSServiceLogging::setStaticF__initialized(bool  value)  {
::cordl_internals::setStaticField<bool, "_initialized", ::Oculus::Voice::Logging::TTSServiceLogging*>(std::forward<bool>(value));
}
inline bool Oculus::Voice::Logging::TTSServiceLogging::getStaticF__initialized()  {
return ::cordl_internals::getStaticField<bool, "_initialized", ::Oculus::Voice::Logging::TTSServiceLogging*>();
}
inline ::UnityW<::Meta::WitAi::TTS::TTSService> Oculus::Voice::Logging::TTSServiceLogging::get_Service()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Logging::TTSServiceLogging*>(),
                        {"get_Service", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::WitAi::TTS::TTSService>>(this, ___internal_method);
}
inline void Oculus::Voice::Logging::TTSServiceLogging::set_Service(::Meta::WitAi::TTS::TTSService*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Logging::TTSServiceLogging*>(),
                        {"set_Service", {}, {::i2c::type_of<::Meta::WitAi::TTS::TTSService*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Voice::Logging::TTSServiceLogging::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Logging::TTSServiceLogging*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Voice::Logging::TTSServiceLogging::InitLogger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Logging::TTSServiceLogging*>(),
                        {"InitLogger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Voice::Logging::TTSServiceLogging::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Logging::TTSServiceLogging*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Voice::Logging::TTSServiceLogging::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Logging::TTSServiceLogging*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Voice::Logging::TTSServiceLogging::OnRequestBegin(::Meta::WitAi::TTS::Data::TTSClipData*  clipData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Logging::TTSServiceLogging*>(),
                        {"OnRequestBegin", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipData);
}
inline void Oculus::Voice::Logging::TTSServiceLogging::OnRequestCancel(::Meta::WitAi::TTS::Data::TTSClipData*  clipData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Logging::TTSServiceLogging*>(),
                        {"OnRequestCancel", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipData);
}
inline void Oculus::Voice::Logging::TTSServiceLogging::OnRequestError(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::StringW  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Logging::TTSServiceLogging*>(),
                        {"OnRequestError", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipData, error);
}
inline void Oculus::Voice::Logging::TTSServiceLogging::OnRequestFirstResponse(::Meta::WitAi::TTS::Data::TTSClipData*  clipData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Logging::TTSServiceLogging*>(),
                        {"OnRequestFirstResponse", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipData);
}
inline void Oculus::Voice::Logging::TTSServiceLogging::OnRequestReady(::Meta::WitAi::TTS::Data::TTSClipData*  clipData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Logging::TTSServiceLogging*>(),
                        {"OnRequestReady", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipData);
}
inline void Oculus::Voice::Logging::TTSServiceLogging::OnRequestComplete(::Meta::WitAi::TTS::Data::TTSClipData*  clipData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Logging::TTSServiceLogging*>(),
                        {"OnRequestComplete", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipData);
}
inline void Oculus::Voice::Logging::TTSServiceLogging::LogStart(::Meta::WitAi::TTS::Data::TTSClipData*  clipData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Logging::TTSServiceLogging*>(),
                        {"LogStart", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipData);
}
inline ::GlobalNamespace::TTSServiceLogging_TTSServiceRequestLog Oculus::Voice::Logging::TTSServiceLogging::GetRequestData(::Meta::WitAi::TTS::Data::TTSClipData*  clipData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Logging::TTSServiceLogging*>(),
                        {"GetRequestData", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TTSServiceLogging_TTSServiceRequestLog>(this, ___internal_method, clipData);
}
inline void Oculus::Voice::Logging::TTSServiceLogging::LogTimestamp(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Logging::TTSServiceLogging*>(),
                        {"LogTimestamp", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipData, key);
}
inline void Oculus::Voice::Logging::TTSServiceLogging::LogTimestamp(::GlobalNamespace::TTSServiceLogging_TTSServiceRequestLog  requestData, ::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Logging::TTSServiceLogging*>(),
                        {"LogTimestamp", {}, {::i2c::type_of<::GlobalNamespace::TTSServiceLogging_TTSServiceRequestLog>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, requestData, key);
}
inline void Oculus::Voice::Logging::TTSServiceLogging::LogAnnotate(::GlobalNamespace::TTSServiceLogging_TTSServiceRequestLog  requestData, ::StringW  key, ::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Logging::TTSServiceLogging*>(),
                        {"LogAnnotate", {}, {::i2c::type_of<::GlobalNamespace::TTSServiceLogging_TTSServiceRequestLog>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, requestData, key, value);
}
inline void Oculus::Voice::Logging::TTSServiceLogging::LogComplete(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::StringW  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Logging::TTSServiceLogging*>(),
                        {"LogComplete", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipData, error);
}
inline void Oculus::Voice::Logging::TTSServiceLogging::Init()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Logging::TTSServiceLogging*>(),
                        {"Init", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Oculus::Voice::Logging::TTSServiceLogging::OnServiceStart(::Meta::WitAi::TTS::TTSService*  service)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Logging::TTSServiceLogging*>(),
                        {"OnServiceStart", {}, {::i2c::type_of<::Meta::WitAi::TTS::TTSService*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, service);
}
inline void Oculus::Voice::Logging::TTSServiceLogging::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Logging::TTSServiceLogging*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Voice::Logging::TTSServiceLogging* Oculus::Voice::Logging::TTSServiceLogging::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Voice::Logging::TTSServiceLogging*>());
}
// Ctor Parameters []
constexpr ::Oculus::Voice::Logging::TTSServiceLogging::TTSServiceLogging()   {
}
