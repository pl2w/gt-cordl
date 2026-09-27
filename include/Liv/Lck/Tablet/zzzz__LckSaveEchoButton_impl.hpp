#pragma once
// IWYU pragma private; include "Liv/Lck/Tablet/LckSaveEchoButton.hpp"
#include "Liv/Lck/Tablet/zzzz__LckSaveEchoButton_State_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Liv/Lck/Tablet/zzzz__LckSaveEchoButton_def.hpp"
#include "Liv/Lck/Recorder/zzzz__RecordingData_def.hpp"
#include "Liv/Lck/Tablet/zzzz__LckSaveEchoButton_State_def.hpp"
#include "Liv/Lck/Tablet/zzzz__LckSaveEchoButton__ResetAfterError_d__16_def.hpp"
#include "Liv/Lck/UI/zzzz__LckButton_def.hpp"
#include "Liv/Lck/zzzz__EchoDisableReason_def.hpp"
#include "Liv/Lck/zzzz__ILckService_def.hpp"
#include "Liv/Lck/zzzz__LckDiscreetAudioController_def.hpp"
#include "Liv/Lck/zzzz__LckResult_1_def.hpp"
#include "Liv/Lck/zzzz__LckResult_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Tablet::LckSaveEchoButton.OnEchoEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckSaveEchoButton::*)(::Liv::Lck::LckResult*)>(&::Liv::Lck::Tablet::LckSaveEchoButton::OnEchoEnabled)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9d5a8f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckSaveEchoButton*>(),
                        {"OnEchoEnabled", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckSaveEchoButton.StartEchoPolling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckSaveEchoButton::*)()>(&::Liv::Lck::Tablet::LckSaveEchoButton::StartEchoPolling)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x9d5a914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckSaveEchoButton*>(),
                        {"StartEchoPolling", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckSaveEchoButton.OnEchoDisabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckSaveEchoButton::*)(::Liv::Lck::LckResult*, ::Liv::Lck::EchoDisableReason)>(&::Liv::Lck::Tablet::LckSaveEchoButton::OnEchoDisabled)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9d5aba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckSaveEchoButton*>(),
                        {"OnEchoDisabled", {}, {::i2c::type_of<::Liv::Lck::LckResult*>(), ::i2c::type_of<::Liv::Lck::EchoDisableReason>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckSaveEchoButton.OnError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckSaveEchoButton::*)()>(&::Liv::Lck::Tablet::LckSaveEchoButton::OnError)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x9d5ac28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckSaveEchoButton*>(),
                        {"OnError", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckSaveEchoButton.ResetAfterError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Liv::Lck::Tablet::LckSaveEchoButton::*)()>(&::Liv::Lck::Tablet::LckSaveEchoButton::ResetAfterError)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9d5ac4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckSaveEchoButton*>(),
                        {"ResetAfterError", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckSaveEchoButton.UpdateVisualState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckSaveEchoButton::*)()>(&::Liv::Lck::Tablet::LckSaveEchoButton::UpdateVisualState)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x9d5aa64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckSaveEchoButton*>(),
                        {"UpdateVisualState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckSaveEchoButton.UpdateBufferDurationText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckSaveEchoButton::*)()>(&::Liv::Lck::Tablet::LckSaveEchoButton::UpdateBufferDurationText)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x9d5ad28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckSaveEchoButton*>(),
                        {"UpdateBufferDurationText", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckSaveEchoButton.OnEchoSaved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckSaveEchoButton::*)(::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*)>(&::Liv::Lck::Tablet::LckSaveEchoButton::OnEchoSaved)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9d5af44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckSaveEchoButton*>(),
                        {"OnEchoSaved", {}, {::i2c::type_of<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckSaveEchoButton.EnsureLckService
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckSaveEchoButton::*)()>(&::Liv::Lck::Tablet::LckSaveEchoButton::EnsureLckService)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9d5afac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckSaveEchoButton*>(),
                        {"EnsureLckService", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckSaveEchoButton.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckSaveEchoButton::*)()>(&::Liv::Lck::Tablet::LckSaveEchoButton::Start)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x9d5b060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckSaveEchoButton*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckSaveEchoButton.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckSaveEchoButton::*)()>(&::Liv::Lck::Tablet::LckSaveEchoButton::OnEnable)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x9d5b368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckSaveEchoButton*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckSaveEchoButton.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckSaveEchoButton::*)()>(&::Liv::Lck::Tablet::LckSaveEchoButton::OnDisable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d5b540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckSaveEchoButton*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckSaveEchoButton.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckSaveEchoButton::*)()>(&::Liv::Lck::Tablet::LckSaveEchoButton::OnDestroy)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x9d5b548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckSaveEchoButton*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckSaveEchoButton.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckSaveEchoButton::*)()>(&::Liv::Lck::Tablet::LckSaveEchoButton::Update)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9d5b7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckSaveEchoButton*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckSaveEchoButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckSaveEchoButton::*)()>(&::Liv::Lck::Tablet::LckSaveEchoButton::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9d5b7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckSaveEchoButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::Lck::ILckService*& Liv::Lck::Tablet::LckSaveEchoButton::__cordl_internal_get__lckService()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckService;
}
constexpr ::Liv::Lck::ILckService* const& Liv::Lck::Tablet::LckSaveEchoButton::__cordl_internal_get__lckService() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckService;
}
constexpr void Liv::Lck::Tablet::LckSaveEchoButton::__cordl_internal_set__lckService(::Liv::Lck::ILckService*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lckService = value;
}
constexpr ::UnityW<::Liv::Lck::UI::LckButton>& Liv::Lck::Tablet::LckSaveEchoButton::__cordl_internal_get__button()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____button;
}
constexpr ::UnityW<::Liv::Lck::UI::LckButton> const& Liv::Lck::Tablet::LckSaveEchoButton::__cordl_internal_get__button() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____button;
}
constexpr void Liv::Lck::Tablet::LckSaveEchoButton::__cordl_internal_set__button(::UnityW<::Liv::Lck::UI::LckButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____button = value;
}
constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController>& Liv::Lck::Tablet::LckSaveEchoButton::__cordl_internal_get__audioController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioController;
}
constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController> const& Liv::Lck::Tablet::LckSaveEchoButton::__cordl_internal_get__audioController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioController;
}
constexpr void Liv::Lck::Tablet::LckSaveEchoButton::__cordl_internal_set__audioController(::UnityW<::Liv::Lck::LckDiscreetAudioController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioController = value;
}
constexpr int32_t& Liv::Lck::Tablet::LckSaveEchoButton::__cordl_internal_get__lastDisplayedSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastDisplayedSeconds;
}
constexpr int32_t const& Liv::Lck::Tablet::LckSaveEchoButton::__cordl_internal_get__lastDisplayedSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastDisplayedSeconds;
}
constexpr void Liv::Lck::Tablet::LckSaveEchoButton::__cordl_internal_set__lastDisplayedSeconds(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastDisplayedSeconds = value;
}
constexpr int32_t& Liv::Lck::Tablet::LckSaveEchoButton::__cordl_internal_get__maxBufferSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxBufferSeconds;
}
constexpr int32_t const& Liv::Lck::Tablet::LckSaveEchoButton::__cordl_internal_get__maxBufferSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxBufferSeconds;
}
constexpr void Liv::Lck::Tablet::LckSaveEchoButton::__cordl_internal_set__maxBufferSeconds(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxBufferSeconds = value;
}
constexpr bool& Liv::Lck::Tablet::LckSaveEchoButton::__cordl_internal_get__shouldPollEchoDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shouldPollEchoDuration;
}
constexpr bool const& Liv::Lck::Tablet::LckSaveEchoButton::__cordl_internal_get__shouldPollEchoDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shouldPollEchoDuration;
}
constexpr void Liv::Lck::Tablet::LckSaveEchoButton::__cordl_internal_set__shouldPollEchoDuration(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____shouldPollEchoDuration = value;
}
constexpr ::GlobalNamespace::LckSaveEchoButton_State& Liv::Lck::Tablet::LckSaveEchoButton::__cordl_internal_get__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
constexpr ::GlobalNamespace::LckSaveEchoButton_State const& Liv::Lck::Tablet::LckSaveEchoButton::__cordl_internal_get__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
constexpr void Liv::Lck::Tablet::LckSaveEchoButton::__cordl_internal_set__state(::GlobalNamespace::LckSaveEchoButton_State  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____state = value;
}
inline void Liv::Lck::Tablet::LckSaveEchoButton::OnEchoEnabled(::Liv::Lck::LckResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckSaveEchoButton*>(),
                        {"OnEchoEnabled", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void Liv::Lck::Tablet::LckSaveEchoButton::StartEchoPolling()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckSaveEchoButton*>(),
                        {"StartEchoPolling", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LckSaveEchoButton::OnEchoDisabled(::Liv::Lck::LckResult*  result, ::Liv::Lck::EchoDisableReason  reason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckSaveEchoButton*>(),
                        {"OnEchoDisabled", {}, {::i2c::type_of<::Liv::Lck::LckResult*>(), ::i2c::type_of<::Liv::Lck::EchoDisableReason>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, reason);
}
inline void Liv::Lck::Tablet::LckSaveEchoButton::OnError()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckSaveEchoButton*>(),
                        {"OnError", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Liv::Lck::Tablet::LckSaveEchoButton::ResetAfterError()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckSaveEchoButton*>(),
                        {"ResetAfterError", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LckSaveEchoButton::UpdateVisualState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckSaveEchoButton*>(),
                        {"UpdateVisualState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LckSaveEchoButton::UpdateBufferDurationText()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckSaveEchoButton*>(),
                        {"UpdateBufferDurationText", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LckSaveEchoButton::OnEchoSaved(::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckSaveEchoButton*>(),
                        {"OnEchoSaved", {}, {::i2c::type_of<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void Liv::Lck::Tablet::LckSaveEchoButton::EnsureLckService()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckSaveEchoButton*>(),
                        {"EnsureLckService", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LckSaveEchoButton::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckSaveEchoButton*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LckSaveEchoButton::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckSaveEchoButton*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LckSaveEchoButton::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckSaveEchoButton*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LckSaveEchoButton::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckSaveEchoButton*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LckSaveEchoButton::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckSaveEchoButton*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LckSaveEchoButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckSaveEchoButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::Tablet::LckSaveEchoButton* Liv::Lck::Tablet::LckSaveEchoButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Tablet::LckSaveEchoButton*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Tablet::LckSaveEchoButton::LckSaveEchoButton()   {
}
