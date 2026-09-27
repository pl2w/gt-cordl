#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/LckFrameController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Liv/Lck/GorillaTag/zzzz__LckFrameController_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GTLckController_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtScreenButton_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__LckFrameController__LoadAndApplyTextures_d__13_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__LckFrameController__LoadTexture_d__14_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__LckFrameController__Start_d__8_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__LckOverlayFrameLayer_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__ScheduledDuration_def.hpp"
#include "Liv/Lck/Rendering/zzzz__LckCompositionProfile_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::Liv::Lck::GorillaTag::LckFrameController.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::LckFrameController::*)()>(&::Liv::Lck::GorillaTag::LckFrameController::Start)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9d2fea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::LckFrameController*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::LckFrameController.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::LckFrameController::*)()>(&::Liv::Lck::GorillaTag::LckFrameController::OnDisable)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x9d2ff50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::LckFrameController*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::LckFrameController.OnHorizontalModeChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::LckFrameController::*)(bool)>(&::Liv::Lck::GorillaTag::LckFrameController::OnHorizontalModeChanged)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9d300b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::LckFrameController*>(),
                        {"OnHorizontalModeChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::LckFrameController.SetOverlayEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::LckFrameController::*)(bool)>(&::Liv::Lck::GorillaTag::LckFrameController::SetOverlayEnabled)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9d300d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::LckFrameController*>(),
                        {"SetOverlayEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::LckFrameController.ToggleOverlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::LckFrameController::*)()>(&::Liv::Lck::GorillaTag::LckFrameController::ToggleOverlay)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9d3012c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::LckFrameController*>(),
                        {"ToggleOverlay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::LckFrameController.LoadAndApplyTextures
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Liv::Lck::GorillaTag::LckFrameController::*)()>(&::Liv::Lck::GorillaTag::LckFrameController::LoadAndApplyTextures)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9d3014c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::LckFrameController*>(),
                        {"LoadAndApplyTextures", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::LckFrameController.LoadTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Texture>>* (::Liv::Lck::GorillaTag::LckFrameController::*)(::StringW)>(&::Liv::Lck::GorillaTag::LckFrameController::LoadTexture)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x9d30224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::LckFrameController*>(),
                        {"LoadTexture", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::LckFrameController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::LckFrameController::*)()>(&::Liv::Lck::GorillaTag::LckFrameController::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9d3030c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::LckFrameController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Liv::Lck::Rendering::LckCompositionProfile>& Liv::Lck::GorillaTag::LckFrameController::__cordl_internal_get__compositionProfile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____compositionProfile;
}
constexpr ::UnityW<::Liv::Lck::Rendering::LckCompositionProfile> const& Liv::Lck::GorillaTag::LckFrameController::__cordl_internal_get__compositionProfile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____compositionProfile;
}
constexpr void Liv::Lck::GorillaTag::LckFrameController::__cordl_internal_set__compositionProfile(::UnityW<::Liv::Lck::Rendering::LckCompositionProfile>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____compositionProfile = value;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GTLckController>& Liv::Lck::GorillaTag::LckFrameController::__cordl_internal_get__qckController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____qckController;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GTLckController> const& Liv::Lck::GorillaTag::LckFrameController::__cordl_internal_get__qckController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____qckController;
}
constexpr void Liv::Lck::GorillaTag::LckFrameController::__cordl_internal_set__qckController(::UnityW<::Liv::Lck::GorillaTag::GTLckController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____qckController = value;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtScreenButton>& Liv::Lck::GorillaTag::LckFrameController::__cordl_internal_get__overlayButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overlayButton;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtScreenButton> const& Liv::Lck::GorillaTag::LckFrameController::__cordl_internal_get__overlayButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overlayButton;
}
constexpr void Liv::Lck::GorillaTag::LckFrameController::__cordl_internal_set__overlayButton(::UnityW<::Liv::Lck::GorillaTag::GtScreenButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____overlayButton = value;
}
constexpr ::StringW& Liv::Lck::GorillaTag::LckFrameController::__cordl_internal_get__overlayLayerName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overlayLayerName;
}
constexpr ::StringW const& Liv::Lck::GorillaTag::LckFrameController::__cordl_internal_get__overlayLayerName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overlayLayerName;
}
constexpr void Liv::Lck::GorillaTag::LckFrameController::__cordl_internal_set__overlayLayerName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____overlayLayerName = value;
}
constexpr ::System::Collections::Generic::List_1<::Liv::Lck::GorillaTag::ScheduledDuration>*& Liv::Lck::GorillaTag::LckFrameController::__cordl_internal_get__defaultOnSchedules()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultOnSchedules;
}
constexpr ::System::Collections::Generic::List_1<::Liv::Lck::GorillaTag::ScheduledDuration>* const& Liv::Lck::GorillaTag::LckFrameController::__cordl_internal_get__defaultOnSchedules() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultOnSchedules;
}
constexpr void Liv::Lck::GorillaTag::LckFrameController::__cordl_internal_set__defaultOnSchedules(::System::Collections::Generic::List_1<::Liv::Lck::GorillaTag::ScheduledDuration>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____defaultOnSchedules = value;
}
constexpr ::StringW& Liv::Lck::GorillaTag::LckFrameController::__cordl_internal_get__horizontalOverlayUrl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____horizontalOverlayUrl;
}
constexpr ::StringW const& Liv::Lck::GorillaTag::LckFrameController::__cordl_internal_get__horizontalOverlayUrl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____horizontalOverlayUrl;
}
constexpr void Liv::Lck::GorillaTag::LckFrameController::__cordl_internal_set__horizontalOverlayUrl(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____horizontalOverlayUrl = value;
}
constexpr ::StringW& Liv::Lck::GorillaTag::LckFrameController::__cordl_internal_get__verticalOverlayUrl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____verticalOverlayUrl;
}
constexpr ::StringW const& Liv::Lck::GorillaTag::LckFrameController::__cordl_internal_get__verticalOverlayUrl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____verticalOverlayUrl;
}
constexpr void Liv::Lck::GorillaTag::LckFrameController::__cordl_internal_set__verticalOverlayUrl(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____verticalOverlayUrl = value;
}
constexpr ::Liv::Lck::GorillaTag::LckOverlayFrameLayer*& Liv::Lck::GorillaTag::LckFrameController::__cordl_internal_get__overlayLayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overlayLayer;
}
constexpr ::Liv::Lck::GorillaTag::LckOverlayFrameLayer* const& Liv::Lck::GorillaTag::LckFrameController::__cordl_internal_get__overlayLayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overlayLayer;
}
constexpr void Liv::Lck::GorillaTag::LckFrameController::__cordl_internal_set__overlayLayer(::Liv::Lck::GorillaTag::LckOverlayFrameLayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____overlayLayer = value;
}
inline void Liv::Lck::GorillaTag::LckFrameController::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::LckFrameController*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::LckFrameController::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::LckFrameController*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::LckFrameController::OnHorizontalModeChanged(bool  isHorizontal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::LckFrameController*>(),
                        {"OnHorizontalModeChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isHorizontal);
}
inline void Liv::Lck::GorillaTag::LckFrameController::SetOverlayEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::LckFrameController*>(),
                        {"SetOverlayEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::GorillaTag::LckFrameController::ToggleOverlay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::LckFrameController*>(),
                        {"ToggleOverlay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Liv::Lck::GorillaTag::LckFrameController::LoadAndApplyTextures()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::LckFrameController*>(),
                        {"LoadAndApplyTextures", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Texture>>* Liv::Lck::GorillaTag::LckFrameController::LoadTexture(::StringW  url)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::LckFrameController*>(),
                        {"LoadTexture", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Texture>>*>(this, ___internal_method, url);
}
inline void Liv::Lck::GorillaTag::LckFrameController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::LckFrameController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::GorillaTag::LckFrameController* Liv::Lck::GorillaTag::LckFrameController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::GorillaTag::LckFrameController*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::GorillaTag::LckFrameController::LckFrameController()   {
}
