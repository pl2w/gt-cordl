#pragma once
// IWYU pragma private; include "Oculus/Interaction/Body/Samples/PoseCaptureCountdown.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Body/Samples/zzzz__PoseCaptureCountdown_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Body::Samples::PoseCaptureCountdown.Restart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Samples::PoseCaptureCountdown::*)()>(&::Oculus::Interaction::Body::Samples::PoseCaptureCountdown::Restart)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa435520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::PoseCaptureCountdown*>(),
                        {"Restart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Samples::PoseCaptureCountdown.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Samples::PoseCaptureCountdown::*)()>(&::Oculus::Interaction::Body::Samples::PoseCaptureCountdown::Update)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xa4355d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::PoseCaptureCountdown*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Samples::PoseCaptureCountdown._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Samples::PoseCaptureCountdown::*)()>(&::Oculus::Interaction::Body::Samples::PoseCaptureCountdown::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa4356ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::PoseCaptureCountdown*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Events::UnityEvent*& Oculus::Interaction::Body::Samples::PoseCaptureCountdown::__cordl_internal_get__timerStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timerStart;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Oculus::Interaction::Body::Samples::PoseCaptureCountdown::__cordl_internal_get__timerStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timerStart;
}
constexpr void Oculus::Interaction::Body::Samples::PoseCaptureCountdown::__cordl_internal_set__timerStart(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timerStart = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Oculus::Interaction::Body::Samples::PoseCaptureCountdown::__cordl_internal_get__timerSecondTick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timerSecondTick;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Oculus::Interaction::Body::Samples::PoseCaptureCountdown::__cordl_internal_get__timerSecondTick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timerSecondTick;
}
constexpr void Oculus::Interaction::Body::Samples::PoseCaptureCountdown::__cordl_internal_set__timerSecondTick(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timerSecondTick = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Oculus::Interaction::Body::Samples::PoseCaptureCountdown::__cordl_internal_get__timeUp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeUp;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Oculus::Interaction::Body::Samples::PoseCaptureCountdown::__cordl_internal_get__timeUp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeUp;
}
constexpr void Oculus::Interaction::Body::Samples::PoseCaptureCountdown::__cordl_internal_set__timeUp(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeUp = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& Oculus::Interaction::Body::Samples::PoseCaptureCountdown::__cordl_internal_get__countdownText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____countdownText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& Oculus::Interaction::Body::Samples::PoseCaptureCountdown::__cordl_internal_get__countdownText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____countdownText;
}
constexpr void Oculus::Interaction::Body::Samples::PoseCaptureCountdown::__cordl_internal_set__countdownText(::UnityW<::TMPro::TextMeshProUGUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____countdownText = value;
}
constexpr ::StringW& Oculus::Interaction::Body::Samples::PoseCaptureCountdown::__cordl_internal_get__poseText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____poseText;
}
constexpr ::StringW const& Oculus::Interaction::Body::Samples::PoseCaptureCountdown::__cordl_internal_get__poseText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____poseText;
}
constexpr void Oculus::Interaction::Body::Samples::PoseCaptureCountdown::__cordl_internal_set__poseText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____poseText = value;
}
constexpr float_t& Oculus::Interaction::Body::Samples::PoseCaptureCountdown::__cordl_internal_get_duration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr float_t const& Oculus::Interaction::Body::Samples::PoseCaptureCountdown::__cordl_internal_get_duration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr void Oculus::Interaction::Body::Samples::PoseCaptureCountdown::__cordl_internal_set_duration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___duration = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& Oculus::Interaction::Body::Samples::PoseCaptureCountdown::__cordl_internal_get__renderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& Oculus::Interaction::Body::Samples::PoseCaptureCountdown::__cordl_internal_get__renderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderer;
}
constexpr void Oculus::Interaction::Body::Samples::PoseCaptureCountdown::__cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____renderer = value;
}
constexpr ::UnityEngine::Color& Oculus::Interaction::Body::Samples::PoseCaptureCountdown::__cordl_internal_get__resetColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resetColor;
}
constexpr ::UnityEngine::Color const& Oculus::Interaction::Body::Samples::PoseCaptureCountdown::__cordl_internal_get__resetColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resetColor;
}
constexpr void Oculus::Interaction::Body::Samples::PoseCaptureCountdown::__cordl_internal_set__resetColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resetColor = value;
}
constexpr float_t& Oculus::Interaction::Body::Samples::PoseCaptureCountdown::__cordl_internal_get__timer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timer;
}
constexpr float_t const& Oculus::Interaction::Body::Samples::PoseCaptureCountdown::__cordl_internal_get__timer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timer;
}
constexpr void Oculus::Interaction::Body::Samples::PoseCaptureCountdown::__cordl_internal_set__timer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timer = value;
}
inline void Oculus::Interaction::Body::Samples::PoseCaptureCountdown::Restart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::PoseCaptureCountdown*>(),
                        {"Restart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::Samples::PoseCaptureCountdown::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::PoseCaptureCountdown*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::Samples::PoseCaptureCountdown::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::PoseCaptureCountdown*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Body::Samples::PoseCaptureCountdown* Oculus::Interaction::Body::Samples::PoseCaptureCountdown::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Body::Samples::PoseCaptureCountdown*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Body::Samples::PoseCaptureCountdown::PoseCaptureCountdown()   {
}
