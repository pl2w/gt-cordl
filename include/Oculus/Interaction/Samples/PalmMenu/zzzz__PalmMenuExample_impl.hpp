#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/PalmMenu/PalmMenuExample.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__RectTransform_impl.hpp"
#include "Oculus/Interaction/Samples/PalmMenu/zzzz__PalmMenuExample_def.hpp"
#include "Oculus/Interaction/zzzz__PokeInteractable_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Samples::PalmMenu::PalmMenuExample.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::*)()>(&::Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::Start)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa44164c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PalmMenu::PalmMenuExample*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::PalmMenu::PalmMenuExample.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::*)()>(&::Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::Update)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa441850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PalmMenu::PalmMenuExample*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::PalmMenu::PalmMenuExample.CalculateNearestButtonIdx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::*)()>(&::Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::CalculateNearestButtonIdx)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0xa4416a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PalmMenu::PalmMenuExample*>(),
                        {"CalculateNearestButtonIdx", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::PalmMenu::PalmMenuExample.LerpToButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::*)()>(&::Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::LerpToButton)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xa441920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PalmMenu::PalmMenuExample*>(),
                        {"LerpToButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::PalmMenu::PalmMenuExample.ToggleMenu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::*)()>(&::Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::ToggleMenu)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa441a38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PalmMenu::PalmMenuExample*>(),
                        {"ToggleMenu", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::PalmMenu::PalmMenuExample._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::*)()>(&::Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa441aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PalmMenu::PalmMenuExample*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Oculus::Interaction::PokeInteractable>& Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::__cordl_internal_get__menuInteractable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____menuInteractable;
}
constexpr ::UnityW<::Oculus::Interaction::PokeInteractable> const& Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::__cordl_internal_get__menuInteractable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____menuInteractable;
}
constexpr void Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::__cordl_internal_set__menuInteractable(::UnityW<::Oculus::Interaction::PokeInteractable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____menuInteractable = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::__cordl_internal_get__menuParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____menuParent;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::__cordl_internal_get__menuParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____menuParent;
}
constexpr void Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::__cordl_internal_set__menuParent(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____menuParent = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::__cordl_internal_get__menuPanel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____menuPanel;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::__cordl_internal_get__menuPanel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____menuPanel;
}
constexpr void Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::__cordl_internal_set__menuPanel(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____menuPanel = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::RectTransform>>& Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::__cordl_internal_get__buttons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttons;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::RectTransform>> const& Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::__cordl_internal_get__buttons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttons;
}
constexpr void Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::__cordl_internal_set__buttons(::ArrayW<::UnityW<::UnityEngine::RectTransform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buttons = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::RectTransform>>& Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::__cordl_internal_get__paginationDots()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____paginationDots;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::RectTransform>> const& Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::__cordl_internal_get__paginationDots() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____paginationDots;
}
constexpr void Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::__cordl_internal_set__paginationDots(::ArrayW<::UnityW<::UnityEngine::RectTransform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____paginationDots = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::__cordl_internal_get__selectionIndicatorDot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectionIndicatorDot;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::__cordl_internal_get__selectionIndicatorDot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectionIndicatorDot;
}
constexpr void Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::__cordl_internal_set__selectionIndicatorDot(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selectionIndicatorDot = value;
}
constexpr ::UnityEngine::AnimationCurve*& Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::__cordl_internal_get__paginationButtonScaleCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____paginationButtonScaleCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::__cordl_internal_get__paginationButtonScaleCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____paginationButtonScaleCurve;
}
constexpr void Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::__cordl_internal_set__paginationButtonScaleCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____paginationButtonScaleCurve = value;
}
constexpr float_t& Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::__cordl_internal_get__defaultButtonDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultButtonDistance;
}
constexpr float_t const& Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::__cordl_internal_get__defaultButtonDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultButtonDistance;
}
constexpr void Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::__cordl_internal_set__defaultButtonDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____defaultButtonDistance = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::__cordl_internal_get__paginationSwipeAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____paginationSwipeAudio;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::__cordl_internal_get__paginationSwipeAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____paginationSwipeAudio;
}
constexpr void Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::__cordl_internal_set__paginationSwipeAudio(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____paginationSwipeAudio = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::__cordl_internal_get__showMenuAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____showMenuAudio;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::__cordl_internal_get__showMenuAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____showMenuAudio;
}
constexpr void Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::__cordl_internal_set__showMenuAudio(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____showMenuAudio = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::__cordl_internal_get__hideMenuAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hideMenuAudio;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::__cordl_internal_get__hideMenuAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hideMenuAudio;
}
constexpr void Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::__cordl_internal_set__hideMenuAudio(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hideMenuAudio = value;
}
constexpr int32_t& Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::__cordl_internal_get__currentSelectedButtonIdx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentSelectedButtonIdx;
}
constexpr int32_t const& Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::__cordl_internal_get__currentSelectedButtonIdx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentSelectedButtonIdx;
}
constexpr void Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::__cordl_internal_set__currentSelectedButtonIdx(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentSelectedButtonIdx = value;
}
inline void Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PalmMenu::PalmMenuExample*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PalmMenu::PalmMenuExample*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::CalculateNearestButtonIdx()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PalmMenu::PalmMenuExample*>(),
                        {"CalculateNearestButtonIdx", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::LerpToButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PalmMenu::PalmMenuExample*>(),
                        {"LerpToButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::ToggleMenu()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PalmMenu::PalmMenuExample*>(),
                        {"ToggleMenu", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PalmMenu::PalmMenuExample*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Samples::PalmMenu::PalmMenuExample* Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Samples::PalmMenu::PalmMenuExample*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::PalmMenuExample()   {
}
