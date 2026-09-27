#pragma once
// IWYU pragma private; include "Liv/Lck/UI/LckPhotoModeController.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Liv/Lck/UI/zzzz__LckPhotoModeController_def.hpp"
#include "Liv/Lck/Tablet/zzzz__LckNotificationController_def.hpp"
#include "Liv/Lck/UI/zzzz__LckPhotoModeController_def.hpp"
#include "Liv/Lck/zzzz__ILckService_def.hpp"
#include "Liv/Lck/zzzz__LckDiscreetAudioController_def.hpp"
#include "Liv/Lck/zzzz__LckResult_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Liv::Lck::UI::LckPhotoModeController.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckPhotoModeController::*)()>(&::Liv::Lck::UI::LckPhotoModeController::Start)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x9d4bf8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckPhotoModeController.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckPhotoModeController::*)()>(&::Liv::Lck::UI::LckPhotoModeController::OnEnable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x9d4bfd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckPhotoModeController.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckPhotoModeController::*)()>(&::Liv::Lck::UI::LckPhotoModeController::OnDisable)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x9d4c0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckPhotoModeController.OnRecordingStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckPhotoModeController::*)(::Liv::Lck::LckResult*)>(&::Liv::Lck::UI::LckPhotoModeController::OnRecordingStarted)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9d4c1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController*>(),
                        {"OnRecordingStarted", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckPhotoModeController.PlayPhotoSequence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckPhotoModeController::*)()>(&::Liv::Lck::UI::LckPhotoModeController::PlayPhotoSequence)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9d4c1e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController*>(),
                        {"PlayPhotoSequence", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckPhotoModeController.StopAndResetSequence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckPhotoModeController::*)()>(&::Liv::Lck::UI::LckPhotoModeController::StopAndResetSequence)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x9d4c1bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController*>(),
                        {"StopAndResetSequence", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckPhotoModeController.ResetFlashVisuals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckPhotoModeController::*)()>(&::Liv::Lck::UI::LckPhotoModeController::ResetFlashVisuals)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9d4c278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController*>(),
                        {"ResetFlashVisuals", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckPhotoModeController.ResetCountdownVisuals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckPhotoModeController::*)()>(&::Liv::Lck::UI::LckPhotoModeController::ResetCountdownVisuals)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9d4c2dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController*>(),
                        {"ResetCountdownVisuals", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckPhotoModeController.CountdownSequence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Liv::Lck::UI::LckPhotoModeController::*)()>(&::Liv::Lck::UI::LckPhotoModeController::CountdownSequence)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9d4c20c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController*>(),
                        {"CountdownSequence", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckPhotoModeController.FadeSequence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Liv::Lck::UI::LckPhotoModeController::*)()>(&::Liv::Lck::UI::LckPhotoModeController::FadeSequence)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9d4c320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController*>(),
                        {"FadeSequence", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckPhotoModeController.FadeImageAlpha
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Liv::Lck::UI::LckPhotoModeController::*)(float_t, float_t, float_t)>(&::Liv::Lck::UI::LckPhotoModeController::FadeImageAlpha)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9d4c3b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController*>(),
                        {"FadeImageAlpha", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckPhotoModeController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckPhotoModeController::*)()>(&::Liv::Lck::UI::LckPhotoModeController::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9d4c46c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::Lck::ILckService*& Liv::Lck::UI::LckPhotoModeController::__cordl_internal_get__lckService()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckService;
}
constexpr ::Liv::Lck::ILckService* const& Liv::Lck::UI::LckPhotoModeController::__cordl_internal_get__lckService() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckService;
}
constexpr void Liv::Lck::UI::LckPhotoModeController::__cordl_internal_set__lckService(::Liv::Lck::ILckService*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lckService = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& Liv::Lck::UI::LckPhotoModeController::__cordl_internal_get__photoFlash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____photoFlash;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& Liv::Lck::UI::LckPhotoModeController::__cordl_internal_get__photoFlash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____photoFlash;
}
constexpr void Liv::Lck::UI::LckPhotoModeController::__cordl_internal_set__photoFlash(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____photoFlash = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Liv::Lck::UI::LckPhotoModeController::__cordl_internal_get__countdownBG()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____countdownBG;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Liv::Lck::UI::LckPhotoModeController::__cordl_internal_get__countdownBG() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____countdownBG;
}
constexpr void Liv::Lck::UI::LckPhotoModeController::__cordl_internal_set__countdownBG(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____countdownBG = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& Liv::Lck::UI::LckPhotoModeController::__cordl_internal_get__countdownText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____countdownText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& Liv::Lck::UI::LckPhotoModeController::__cordl_internal_get__countdownText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____countdownText;
}
constexpr void Liv::Lck::UI::LckPhotoModeController::__cordl_internal_set__countdownText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____countdownText = value;
}
constexpr float_t& Liv::Lck::UI::LckPhotoModeController::__cordl_internal_get__fadeOutDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadeOutDuration;
}
constexpr float_t const& Liv::Lck::UI::LckPhotoModeController::__cordl_internal_get__fadeOutDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadeOutDuration;
}
constexpr void Liv::Lck::UI::LckPhotoModeController::__cordl_internal_set__fadeOutDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fadeOutDuration = value;
}
constexpr float_t& Liv::Lck::UI::LckPhotoModeController::__cordl_internal_get__delayBeforeFade()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____delayBeforeFade;
}
constexpr float_t const& Liv::Lck::UI::LckPhotoModeController::__cordl_internal_get__delayBeforeFade() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____delayBeforeFade;
}
constexpr void Liv::Lck::UI::LckPhotoModeController::__cordl_internal_set__delayBeforeFade(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____delayBeforeFade = value;
}
constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController>& Liv::Lck::UI::LckPhotoModeController::__cordl_internal_get__audioController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioController;
}
constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController> const& Liv::Lck::UI::LckPhotoModeController::__cordl_internal_get__audioController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioController;
}
constexpr void Liv::Lck::UI::LckPhotoModeController::__cordl_internal_set__audioController(::UnityW<::Liv::Lck::LckDiscreetAudioController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioController = value;
}
constexpr ::UnityW<::Liv::Lck::Tablet::LckNotificationController>& Liv::Lck::UI::LckPhotoModeController::__cordl_internal_get__notificationController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____notificationController;
}
constexpr ::UnityW<::Liv::Lck::Tablet::LckNotificationController> const& Liv::Lck::UI::LckPhotoModeController::__cordl_internal_get__notificationController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____notificationController;
}
constexpr void Liv::Lck::UI::LckPhotoModeController::__cordl_internal_set__notificationController(::UnityW<::Liv::Lck::Tablet::LckNotificationController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____notificationController = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Liv::Lck::UI::LckPhotoModeController::__cordl_internal_get__onPhotoCaptured()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onPhotoCaptured;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Liv::Lck::UI::LckPhotoModeController::__cordl_internal_get__onPhotoCaptured() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onPhotoCaptured;
}
constexpr void Liv::Lck::UI::LckPhotoModeController::__cordl_internal_set__onPhotoCaptured(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onPhotoCaptured = value;
}
constexpr float_t& Liv::Lck::UI::LckPhotoModeController::__cordl_internal_get__flashAlpha()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____flashAlpha;
}
constexpr float_t const& Liv::Lck::UI::LckPhotoModeController::__cordl_internal_get__flashAlpha() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____flashAlpha;
}
constexpr void Liv::Lck::UI::LckPhotoModeController::__cordl_internal_set__flashAlpha(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____flashAlpha = value;
}
inline void Liv::Lck::UI::LckPhotoModeController::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::UI::LckPhotoModeController::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::UI::LckPhotoModeController::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::UI::LckPhotoModeController::OnRecordingStarted(::Liv::Lck::LckResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController*>(),
                        {"OnRecordingStarted", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void Liv::Lck::UI::LckPhotoModeController::PlayPhotoSequence()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController*>(),
                        {"PlayPhotoSequence", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::UI::LckPhotoModeController::StopAndResetSequence()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController*>(),
                        {"StopAndResetSequence", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::UI::LckPhotoModeController::ResetFlashVisuals()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController*>(),
                        {"ResetFlashVisuals", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::UI::LckPhotoModeController::ResetCountdownVisuals()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController*>(),
                        {"ResetCountdownVisuals", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Liv::Lck::UI::LckPhotoModeController::CountdownSequence()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController*>(),
                        {"CountdownSequence", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Liv::Lck::UI::LckPhotoModeController::FadeSequence()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController*>(),
                        {"FadeSequence", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Liv::Lck::UI::LckPhotoModeController::FadeImageAlpha(float_t  startAlpha, float_t  endAlpha, float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController*>(),
                        {"FadeImageAlpha", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, startAlpha, endAlpha, duration);
}
inline void Liv::Lck::UI::LckPhotoModeController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::UI::LckPhotoModeController* Liv::Lck::UI::LckPhotoModeController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::UI::LckPhotoModeController*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::UI::LckPhotoModeController::LckPhotoModeController()   {
}
//  Writing Method size for method: ::Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19::*)(int32_t)>(&::Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9d4c38c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19::*)()>(&::Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9d4c928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19::*)()>(&::Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19::MoveNext)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x9d4c92c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19::*)()>(&::Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d4cccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19::*)()>(&::Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9d4ccd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19::*)()>(&::Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d4cd0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Liv::Lck::UI::LckPhotoModeController>& Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Liv::Lck::UI::LckPhotoModeController> const& Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19::__cordl_internal_set___4__this(::UnityW<::Liv::Lck::UI::LckPhotoModeController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19* Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::UI::LckPhotoModeController__FadeSequence_d__19::LckPhotoModeController__FadeSequence_d__19()   {
}
//  Writing Method size for method: ::Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20::*)(int32_t)>(&::Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9d4c444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20::*)()>(&::Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9d4c79c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20::*)()>(&::Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20::MoveNext)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x9d4c7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20::*)()>(&::Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d4c8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20::*)()>(&::Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9d4c8e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20::*)()>(&::Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d4c920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Liv::Lck::UI::LckPhotoModeController>& Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Liv::Lck::UI::LckPhotoModeController> const& Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20::__cordl_internal_set___4__this(::UnityW<::Liv::Lck::UI::LckPhotoModeController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr float_t& Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20::__cordl_internal_get_duration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr float_t const& Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20::__cordl_internal_get_duration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr void Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20::__cordl_internal_set_duration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___duration = value;
}
constexpr float_t& Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20::__cordl_internal_get_startAlpha()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startAlpha;
}
constexpr float_t const& Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20::__cordl_internal_get_startAlpha() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startAlpha;
}
constexpr void Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20::__cordl_internal_set_startAlpha(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startAlpha = value;
}
constexpr float_t& Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20::__cordl_internal_get_endAlpha()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endAlpha;
}
constexpr float_t const& Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20::__cordl_internal_get_endAlpha() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endAlpha;
}
constexpr void Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20::__cordl_internal_set_endAlpha(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endAlpha = value;
}
constexpr float_t& Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20::__cordl_internal_get__elapsedTime_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____elapsedTime_5__2;
}
constexpr float_t const& Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20::__cordl_internal_get__elapsedTime_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____elapsedTime_5__2;
}
constexpr void Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20::__cordl_internal_set__elapsedTime_5__2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____elapsedTime_5__2 = value;
}
constexpr ::UnityEngine::Color& Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20::__cordl_internal_get__currentColor_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentColor_5__3;
}
constexpr ::UnityEngine::Color const& Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20::__cordl_internal_get__currentColor_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentColor_5__3;
}
constexpr void Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20::__cordl_internal_set__currentColor_5__3(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentColor_5__3 = value;
}
inline void Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20* Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::UI::LckPhotoModeController__FadeImageAlpha_d__20::LckPhotoModeController__FadeImageAlpha_d__20()   {
}
//  Writing Method size for method: ::Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18::*)(int32_t)>(&::Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9d4c2f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18::*)()>(&::Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9d4c48c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18::*)()>(&::Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18::MoveNext)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x9d4c490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18::*)()>(&::Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d4c754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18::*)()>(&::Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9d4c75c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18::*)()>(&::Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d4c794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Liv::Lck::UI::LckPhotoModeController>& Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Liv::Lck::UI::LckPhotoModeController> const& Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18::__cordl_internal_set___4__this(::UnityW<::Liv::Lck::UI::LckPhotoModeController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18* Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::UI::LckPhotoModeController__CountdownSequence_d__18::LckPhotoModeController__CountdownSequence_d__18()   {
}
