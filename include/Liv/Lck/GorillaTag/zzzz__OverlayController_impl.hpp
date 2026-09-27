#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/OverlayController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Liv/Lck/GorillaTag/zzzz__OverlayController_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GTLckController_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtScreenButton_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__OverlayController__LoadTexture_d__12_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__ScheduledDuration_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::Liv::Lck::GorillaTag::OverlayController.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::OverlayController::*)()>(&::Liv::Lck::GorillaTag::OverlayController::OnEnable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9d311a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::OverlayController*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::OverlayController.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::OverlayController::*)()>(&::Liv::Lck::GorillaTag::OverlayController::OnDisable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9d31230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::OverlayController*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::OverlayController.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::OverlayController::*)()>(&::Liv::Lck::GorillaTag::OverlayController::Start)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x9d312c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::OverlayController*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::OverlayController.OnHorizontalModeChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::OverlayController::*)(bool)>(&::Liv::Lck::GorillaTag::OverlayController::OnHorizontalModeChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9d314b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::OverlayController*>(),
                        {"OnHorizontalModeChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::OverlayController.SetOverlayEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::OverlayController::*)(bool)>(&::Liv::Lck::GorillaTag::OverlayController::SetOverlayEnabled)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9d314b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::OverlayController*>(),
                        {"SetOverlayEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::OverlayController.ToggleOverlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::OverlayController::*)()>(&::Liv::Lck::GorillaTag::OverlayController::ToggleOverlay)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9d314b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::OverlayController*>(),
                        {"ToggleOverlay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::OverlayController.LoadTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Texture>>* (::Liv::Lck::GorillaTag::OverlayController::*)(::StringW)>(&::Liv::Lck::GorillaTag::OverlayController::LoadTexture)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9d314c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::OverlayController*>(),
                        {"LoadTexture", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::OverlayController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::OverlayController::*)()>(&::Liv::Lck::GorillaTag::OverlayController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d315d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::OverlayController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Liv::Lck::GorillaTag::GTLckController>& Liv::Lck::GorillaTag::OverlayController::__cordl_internal_get__qckController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____qckController;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GTLckController> const& Liv::Lck::GorillaTag::OverlayController::__cordl_internal_get__qckController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____qckController;
}
constexpr void Liv::Lck::GorillaTag::OverlayController::__cordl_internal_set__qckController(::UnityW<::Liv::Lck::GorillaTag::GTLckController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____qckController = value;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtScreenButton>& Liv::Lck::GorillaTag::OverlayController::__cordl_internal_get__overlayButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overlayButton;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtScreenButton> const& Liv::Lck::GorillaTag::OverlayController::__cordl_internal_get__overlayButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overlayButton;
}
constexpr void Liv::Lck::GorillaTag::OverlayController::__cordl_internal_set__overlayButton(::UnityW<::Liv::Lck::GorillaTag::GtScreenButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____overlayButton = value;
}
constexpr ::System::Collections::Generic::List_1<::Liv::Lck::GorillaTag::ScheduledDuration>*& Liv::Lck::GorillaTag::OverlayController::__cordl_internal_get__defaultOnScheduls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultOnScheduls;
}
constexpr ::System::Collections::Generic::List_1<::Liv::Lck::GorillaTag::ScheduledDuration>* const& Liv::Lck::GorillaTag::OverlayController::__cordl_internal_get__defaultOnScheduls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultOnScheduls;
}
constexpr void Liv::Lck::GorillaTag::OverlayController::__cordl_internal_set__defaultOnScheduls(::System::Collections::Generic::List_1<::Liv::Lck::GorillaTag::ScheduledDuration>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____defaultOnScheduls = value;
}
constexpr ::UnityW<::UnityEngine::Texture>& Liv::Lck::GorillaTag::OverlayController::__cordl_internal_get__horizontalOverlayTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____horizontalOverlayTexture;
}
constexpr ::UnityW<::UnityEngine::Texture> const& Liv::Lck::GorillaTag::OverlayController::__cordl_internal_get__horizontalOverlayTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____horizontalOverlayTexture;
}
constexpr void Liv::Lck::GorillaTag::OverlayController::__cordl_internal_set__horizontalOverlayTexture(::UnityW<::UnityEngine::Texture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____horizontalOverlayTexture = value;
}
constexpr ::UnityW<::UnityEngine::Texture>& Liv::Lck::GorillaTag::OverlayController::__cordl_internal_get__verticalOverlayTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____verticalOverlayTexture;
}
constexpr ::UnityW<::UnityEngine::Texture> const& Liv::Lck::GorillaTag::OverlayController::__cordl_internal_get__verticalOverlayTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____verticalOverlayTexture;
}
constexpr void Liv::Lck::GorillaTag::OverlayController::__cordl_internal_set__verticalOverlayTexture(::UnityW<::UnityEngine::Texture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____verticalOverlayTexture = value;
}
constexpr bool& Liv::Lck::GorillaTag::OverlayController::__cordl_internal_get__isOverlayEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isOverlayEnabled;
}
constexpr bool const& Liv::Lck::GorillaTag::OverlayController::__cordl_internal_get__isOverlayEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isOverlayEnabled;
}
constexpr void Liv::Lck::GorillaTag::OverlayController::__cordl_internal_set__isOverlayEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isOverlayEnabled = value;
}
inline void Liv::Lck::GorillaTag::OverlayController::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::OverlayController*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::OverlayController::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::OverlayController*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::OverlayController::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::OverlayController*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::OverlayController::OnHorizontalModeChanged(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::OverlayController*>(),
                        {"OnHorizontalModeChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::GorillaTag::OverlayController::SetOverlayEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::OverlayController*>(),
                        {"SetOverlayEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::GorillaTag::OverlayController::ToggleOverlay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::OverlayController*>(),
                        {"ToggleOverlay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Texture>>* Liv::Lck::GorillaTag::OverlayController::LoadTexture(::StringW  url)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::OverlayController*>(),
                        {"LoadTexture", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Texture>>*>(this, ___internal_method, url);
}
inline void Liv::Lck::GorillaTag::OverlayController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::OverlayController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::GorillaTag::OverlayController* Liv::Lck::GorillaTag::OverlayController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::GorillaTag::OverlayController*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::GorillaTag::OverlayController::OverlayController()   {
}
