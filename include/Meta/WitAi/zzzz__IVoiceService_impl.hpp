#pragma once
// IWYU pragma private; include "Meta/WitAi/IVoiceService.hpp"
#include "Meta/WitAi/zzzz__IVoiceService_def.hpp"
#include "Meta/WitAi/Events/zzzz__TelemetryEvents_def.hpp"
#include "Meta/WitAi/Events/zzzz__VoiceEvents_def.hpp"
#include "Meta/WitAi/Interfaces/zzzz__ITranscriptionProvider_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceServiceRequest_def.hpp"
#include "Meta/WitAi/zzzz__ITelemetryEventsProvider_def.hpp"
#include "Meta/WitAi/zzzz__IVoiceActivationHandler_def.hpp"
#include "Meta/WitAi/zzzz__IVoiceEventProvider_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::IVoiceService.get_IsRequestActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::IVoiceService::*)()>(&::Meta::WitAi::IVoiceService::get_IsRequestActive)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::IVoiceService*>(),
                    {::i2c::class_of<::Meta::WitAi::IVoiceService*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::IVoiceService.get_Requests
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::HashSet_1<::Meta::WitAi::Requests::VoiceServiceRequest*>* (::Meta::WitAi::IVoiceService::*)()>(&::Meta::WitAi::IVoiceService::get_Requests)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::IVoiceService*>(),
                    {::i2c::class_of<::Meta::WitAi::IVoiceService*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::IVoiceService.get_MicActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::IVoiceService::*)()>(&::Meta::WitAi::IVoiceService::get_MicActive)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::IVoiceService*>(),
                    {::i2c::class_of<::Meta::WitAi::IVoiceService*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::IVoiceService.get_VoiceEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Events::VoiceEvents* (::Meta::WitAi::IVoiceService::*)()>(&::Meta::WitAi::IVoiceService::get_VoiceEvents)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::IVoiceService*>(),
                    {::i2c::class_of<::Meta::WitAi::IVoiceService*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::IVoiceService.set_VoiceEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::IVoiceService::*)(::Meta::WitAi::Events::VoiceEvents*)>(&::Meta::WitAi::IVoiceService::set_VoiceEvents)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::IVoiceService*>(),
                    {::i2c::class_of<::Meta::WitAi::IVoiceService*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::IVoiceService.get_TelemetryEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Events::TelemetryEvents* (::Meta::WitAi::IVoiceService::*)()>(&::Meta::WitAi::IVoiceService::get_TelemetryEvents)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::IVoiceService*>(),
                    {::i2c::class_of<::Meta::WitAi::IVoiceService*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::IVoiceService.set_TelemetryEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::IVoiceService::*)(::Meta::WitAi::Events::TelemetryEvents*)>(&::Meta::WitAi::IVoiceService::set_TelemetryEvents)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::IVoiceService*>(),
                    {::i2c::class_of<::Meta::WitAi::IVoiceService*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::IVoiceService.get_TranscriptionProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Interfaces::ITranscriptionProvider* (::Meta::WitAi::IVoiceService::*)()>(&::Meta::WitAi::IVoiceService::get_TranscriptionProvider)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::IVoiceService*>(),
                    {::i2c::class_of<::Meta::WitAi::IVoiceService*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::IVoiceService.set_TranscriptionProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::IVoiceService::*)(::Meta::WitAi::Interfaces::ITranscriptionProvider*)>(&::Meta::WitAi::IVoiceService::set_TranscriptionProvider)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::IVoiceService*>(),
                    {::i2c::class_of<::Meta::WitAi::IVoiceService*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::IVoiceService.CanActivateAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::IVoiceService::*)()>(&::Meta::WitAi::IVoiceService::CanActivateAudio)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::IVoiceService*>(),
                    {::i2c::class_of<::Meta::WitAi::IVoiceService*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::IVoiceService.CanSend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::IVoiceService::*)()>(&::Meta::WitAi::IVoiceService::CanSend)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::IVoiceService*>(),
                    {::i2c::class_of<::Meta::WitAi::IVoiceService*>(), 10}
                ));
    return ___internal_method;
  }
};
inline bool Meta::WitAi::IVoiceService::get_IsRequestActive()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::IVoiceService*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Collections::Generic::HashSet_1<::Meta::WitAi::Requests::VoiceServiceRequest*>* Meta::WitAi::IVoiceService::get_Requests()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::IVoiceService*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::Meta::WitAi::Requests::VoiceServiceRequest*>*>(this, ___internal_method);
}
inline bool Meta::WitAi::IVoiceService::get_MicActive()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::IVoiceService*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Meta::WitAi::Events::VoiceEvents* Meta::WitAi::IVoiceService::get_VoiceEvents()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::IVoiceService*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Events::VoiceEvents*>(this, ___internal_method);
}
inline void Meta::WitAi::IVoiceService::set_VoiceEvents(::Meta::WitAi::Events::VoiceEvents*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::IVoiceService*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Meta::WitAi::Events::TelemetryEvents* Meta::WitAi::IVoiceService::get_TelemetryEvents()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::IVoiceService*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Events::TelemetryEvents*>(this, ___internal_method);
}
inline void Meta::WitAi::IVoiceService::set_TelemetryEvents(::Meta::WitAi::Events::TelemetryEvents*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::IVoiceService*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Meta::WitAi::Interfaces::ITranscriptionProvider* Meta::WitAi::IVoiceService::get_TranscriptionProvider()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::IVoiceService*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Interfaces::ITranscriptionProvider*>(this, ___internal_method);
}
inline void Meta::WitAi::IVoiceService::set_TranscriptionProvider(::Meta::WitAi::Interfaces::ITranscriptionProvider*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::IVoiceService*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::WitAi::IVoiceService::CanActivateAudio()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::IVoiceService*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Meta::WitAi::IVoiceService::CanSend()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::IVoiceService*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
/// @brief Convert operator to "::Meta::WitAi::IVoiceEventProvider"
constexpr  Meta::WitAi::IVoiceService::operator ::Meta::WitAi::IVoiceEventProvider*() noexcept {
return static_cast<::Meta::WitAi::IVoiceEventProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::IVoiceEventProvider"
constexpr ::Meta::WitAi::IVoiceEventProvider* Meta::WitAi::IVoiceService::i___Meta__WitAi__IVoiceEventProvider() noexcept {
return static_cast<::Meta::WitAi::IVoiceEventProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Meta::WitAi::ITelemetryEventsProvider"
constexpr  Meta::WitAi::IVoiceService::operator ::Meta::WitAi::ITelemetryEventsProvider*() noexcept {
return static_cast<::Meta::WitAi::ITelemetryEventsProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::ITelemetryEventsProvider"
constexpr ::Meta::WitAi::ITelemetryEventsProvider* Meta::WitAi::IVoiceService::i___Meta__WitAi__ITelemetryEventsProvider() noexcept {
return static_cast<::Meta::WitAi::ITelemetryEventsProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Meta::WitAi::IVoiceActivationHandler"
constexpr  Meta::WitAi::IVoiceService::operator ::Meta::WitAi::IVoiceActivationHandler*() noexcept {
return static_cast<::Meta::WitAi::IVoiceActivationHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::IVoiceActivationHandler"
constexpr ::Meta::WitAi::IVoiceActivationHandler* Meta::WitAi::IVoiceService::i___Meta__WitAi__IVoiceActivationHandler() noexcept {
return static_cast<::Meta::WitAi::IVoiceActivationHandler*>(static_cast<void*>(this));
}
