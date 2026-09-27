#pragma once
// IWYU pragma private; include "Liv/Lck/ErrorHandling/MainThreadCaptureErrorDispatcher.hpp"
#include "Liv/Lck/ErrorHandling/zzzz__LckCaptureError_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/ErrorHandling/zzzz__MainThreadCaptureErrorDispatcher_def.hpp"
#include "Liv/Lck/ErrorHandling/zzzz__ILckCaptureErrorDispatcher_def.hpp"
#include "Liv/Lck/ErrorHandling/zzzz__LckCaptureError_def.hpp"
#include "Liv/Lck/ErrorHandling/zzzz__MainThreadCaptureErrorDispatcher_def.hpp"
#include "Liv/Lck/zzzz__ILckEventBus_def.hpp"
#include "Liv/Lck/zzzz__LckEvents_EncoderStartedEvent_def.hpp"
#include "Liv/Lck/zzzz__LckEvents_EncoderStoppedEvent_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentQueue_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher::*)(::Liv::Lck::ILckEventBus*)>(&::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher::_ctor)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x9d41e58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher*>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::ILckEventBus*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher.PushError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher::*)(::Liv::Lck::ErrorHandling::LckCaptureError)>(&::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher::PushError)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x9d420ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher*>(),
                        {"PushError", {}, {::i2c::type_of<::Liv::Lck::ErrorHandling::LckCaptureError>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher.OnEncoderStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher::*)(::GlobalNamespace::LckEvents_EncoderStartedEvent)>(&::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher::OnEncoderStarted)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9d421ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher*>(),
                        {"OnEncoderStarted", {}, {::i2c::type_of<::GlobalNamespace::LckEvents_EncoderStartedEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher.OnEncoderStopped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher::*)(::GlobalNamespace::LckEvents_EncoderStoppedEvent)>(&::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher::OnEncoderStopped)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9d4226c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher*>(),
                        {"OnEncoderStopped", {}, {::i2c::type_of<::GlobalNamespace::LckEvents_EncoderStoppedEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher.StartMonitoringErrors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher::*)()>(&::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher::StartMonitoringErrors)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9d421c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher*>(),
                        {"StartMonitoringErrors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher.StopMonitoringErrors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher::*)()>(&::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher::StopMonitoringErrors)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9d42270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher*>(),
                        {"StopMonitoringErrors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher.DrainErrors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Liv::Lck::ErrorHandling::LckCaptureError>* (::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher::*)()>(&::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher::DrainErrors)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9d4236c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher*>(),
                        {"DrainErrors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher::*)()>(&::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher::Update)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9d42300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher::*)()>(&::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher::Dispose)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x9d42448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::Lck::ILckEventBus*& Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher::__cordl_internal_get__eventBus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventBus;
}
constexpr ::Liv::Lck::ILckEventBus* const& Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher::__cordl_internal_get__eventBus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventBus;
}
constexpr void Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher::__cordl_internal_set__eventBus(::Liv::Lck::ILckEventBus*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____eventBus = value;
}
constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::Liv::Lck::ErrorHandling::LckCaptureError>*& Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher::__cordl_internal_get__errorQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____errorQueue;
}
constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::Liv::Lck::ErrorHandling::LckCaptureError>* const& Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher::__cordl_internal_get__errorQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____errorQueue;
}
constexpr void Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher::__cordl_internal_set__errorQueue(::System::Collections::Concurrent::ConcurrentQueue_1<::Liv::Lck::ErrorHandling::LckCaptureError>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____errorQueue = value;
}
constexpr bool& Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher::__cordl_internal_get__isMonitoringErrors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isMonitoringErrors;
}
constexpr bool const& Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher::__cordl_internal_get__isMonitoringErrors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isMonitoringErrors;
}
constexpr void Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher::__cordl_internal_set__isMonitoringErrors(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isMonitoringErrors = value;
}
inline void Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher::setStaticF__updateCoroutineName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "_updateCoroutineName", ::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher*>(std::forward<::StringW>(value));
}
inline ::StringW Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher::getStaticF__updateCoroutineName()  {
return ::cordl_internals::getStaticField<::StringW, "_updateCoroutineName", ::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher*>();
}
inline void Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher::_ctor(::Liv::Lck::ILckEventBus*  eventBus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher*>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::ILckEventBus*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventBus);
}
inline void Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher::PushError(::Liv::Lck::ErrorHandling::LckCaptureError  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher*>(),
                        {"PushError", {}, {::i2c::type_of<::Liv::Lck::ErrorHandling::LckCaptureError>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline void Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher::OnEncoderStarted(::GlobalNamespace::LckEvents_EncoderStartedEvent  encoderStartedEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher*>(),
                        {"OnEncoderStarted", {}, {::i2c::type_of<::GlobalNamespace::LckEvents_EncoderStartedEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encoderStartedEvent);
}
inline void Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher::OnEncoderStopped(::GlobalNamespace::LckEvents_EncoderStoppedEvent  encoderStoppedEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher*>(),
                        {"OnEncoderStopped", {}, {::i2c::type_of<::GlobalNamespace::LckEvents_EncoderStoppedEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encoderStoppedEvent);
}
inline void Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher::StartMonitoringErrors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher*>(),
                        {"StartMonitoringErrors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher::StopMonitoringErrors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher*>(),
                        {"StopMonitoringErrors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::Liv::Lck::ErrorHandling::LckCaptureError>* Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher::DrainErrors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher*>(),
                        {"DrainErrors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Liv::Lck::ErrorHandling::LckCaptureError>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief [Preserve]
inline ::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher* Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher::New_ctor(::Liv::Lck::ILckEventBus*  eventBus)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher*>(eventBus));
}
/// @brief Convert operator to "::Liv::Lck::ErrorHandling::ILckCaptureErrorDispatcher"
constexpr  Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher::operator ::Liv::Lck::ErrorHandling::ILckCaptureErrorDispatcher*() noexcept {
return static_cast<::Liv::Lck::ErrorHandling::ILckCaptureErrorDispatcher*>(static_cast<void*>(this));
}
/// @brief Convert to "::Liv::Lck::ErrorHandling::ILckCaptureErrorDispatcher"
constexpr ::Liv::Lck::ErrorHandling::ILckCaptureErrorDispatcher* Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher::i___Liv__Lck__ErrorHandling__ILckCaptureErrorDispatcher() noexcept {
return static_cast<::Liv::Lck::ErrorHandling::ILckCaptureErrorDispatcher*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher::MainThreadCaptureErrorDispatcher()   {
}
//  Writing Method size for method: ::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11::*)(int32_t)>(&::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9d42420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11::*)()>(&::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9d42908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11::*)()>(&::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11::MoveNext)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x9d4290c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11::*)()>(&::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d42cbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11::*)()>(&::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9d42cc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11::*)()>(&::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d42cfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher*& Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher* const& Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11::__cordl_internal_set___4__this(::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11* Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__Update_d__11::MainThreadCaptureErrorDispatcher__Update_d__11()   {
}
//  Writing Method size for method: ::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10::*)(int32_t)>(&::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9d423ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10::*)()>(&::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9d42714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10::*)()>(&::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10::MoveNext)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9d42718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10.System_Collections_Generic_IEnumerator_Liv_Lck_ErrorHandling_LckCaptureError__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::ErrorHandling::LckCaptureError (::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10::*)()>(&::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10::System_Collections_Generic_IEnumerator_Liv_Lck_ErrorHandling_LckCaptureError__get_Current)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9d427c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10*>(),
                        {"System.Collections.Generic.IEnumerator<Liv.Lck.ErrorHandling.LckCaptureError>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10::*)()>(&::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9d427cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10::*)()>(&::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9d42804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10.System_Collections_Generic_IEnumerable_Liv_Lck_ErrorHandling_LckCaptureError__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::Liv::Lck::ErrorHandling::LckCaptureError>* (::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10::*)()>(&::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10::System_Collections_Generic_IEnumerable_Liv_Lck_ErrorHandling_LckCaptureError__GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9d42860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10*>(),
                        {"System.Collections.Generic.IEnumerable<Liv.Lck.ErrorHandling.LckCaptureError>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10::*)()>(&::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9d42904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::Liv::Lck::ErrorHandling::LckCaptureError& Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::Liv::Lck::ErrorHandling::LckCaptureError const& Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10::__cordl_internal_set___2__current(::Liv::Lck::ErrorHandling::LckCaptureError  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr int32_t const& Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr void Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
constexpr ::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher*& Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher* const& Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10::__cordl_internal_set___4__this(::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Liv::Lck::ErrorHandling::LckCaptureError Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10::System_Collections_Generic_IEnumerator_Liv_Lck_ErrorHandling_LckCaptureError__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10*>(),
                        {"System.Collections.Generic.IEnumerator<Liv.Lck.ErrorHandling.LckCaptureError>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::ErrorHandling::LckCaptureError>(this, ___internal_method);
}
inline void Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::Liv::Lck::ErrorHandling::LckCaptureError>* Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10::System_Collections_Generic_IEnumerable_Liv_Lck_ErrorHandling_LckCaptureError__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10*>(),
                        {"System.Collections.Generic.IEnumerable<Liv.Lck.ErrorHandling.LckCaptureError>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Liv::Lck::ErrorHandling::LckCaptureError>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10* Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Liv::Lck::ErrorHandling::LckCaptureError>"
constexpr  Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10::operator ::System::Collections::Generic::IEnumerable_1<::Liv::Lck::ErrorHandling::LckCaptureError>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Liv::Lck::ErrorHandling::LckCaptureError>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Liv::Lck::ErrorHandling::LckCaptureError>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Liv::Lck::ErrorHandling::LckCaptureError>* Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10::i___System__Collections__Generic__IEnumerable_1___Liv__Lck__ErrorHandling__LckCaptureError_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Liv::Lck::ErrorHandling::LckCaptureError>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Liv::Lck::ErrorHandling::LckCaptureError>"
constexpr  Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10::operator ::System::Collections::Generic::IEnumerator_1<::Liv::Lck::ErrorHandling::LckCaptureError>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Liv::Lck::ErrorHandling::LckCaptureError>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Liv::Lck::ErrorHandling::LckCaptureError>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Liv::Lck::ErrorHandling::LckCaptureError>* Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10::i___System__Collections__Generic__IEnumerator_1___Liv__Lck__ErrorHandling__LckCaptureError_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Liv::Lck::ErrorHandling::LckCaptureError>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::ErrorHandling::MainThreadCaptureErrorDispatcher__DrainErrors_d__10::MainThreadCaptureErrorDispatcher__DrainErrors_d__10()   {
}
