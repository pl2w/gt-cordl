#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GtStreamButton.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtStreamButton_State_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtStreamButton_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtStreamButton_State_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtStreamButton__ResetAfterError_d__25_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtStreamButton__WaitForTriggerExitOrDelay_d__28_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtStreamButton_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtUiSettings_def.hpp"
#include "Liv/Lck/Streaming/zzzz__LckStreamingController_def.hpp"
#include "Liv/Lck/zzzz__ILckService_def.hpp"
#include "Liv/Lck/zzzz__LckDiscreetAudioController_def.hpp"
#include "Liv/Lck/zzzz__LckResult_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtStreamButton.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtStreamButton::*)()>(&::Liv::Lck::GorillaTag::GtStreamButton::Start)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x9d2c908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtStreamButton*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtStreamButton.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtStreamButton::*)()>(&::Liv::Lck::GorillaTag::GtStreamButton::Update)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9d2cd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtStreamButton*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtStreamButton.UpdateStreamDurationText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtStreamButton::*)()>(&::Liv::Lck::GorillaTag::GtStreamButton::UpdateStreamDurationText)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x9d2cd3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtStreamButton*>(),
                        {"UpdateStreamDurationText", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtStreamButton.UpdateVisualState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtStreamButton::*)()>(&::Liv::Lck::GorillaTag::GtStreamButton::UpdateVisualState)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x9d2cad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtStreamButton*>(),
                        {"UpdateVisualState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtStreamButton.SetDefaultColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtStreamButton::*)(::UnityEngine::Color)>(&::Liv::Lck::GorillaTag::GtStreamButton::SetDefaultColor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9d2d054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtStreamButton*>(),
                        {"SetDefaultColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtStreamButton.SetStreamingColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtStreamButton::*)(::UnityEngine::Color)>(&::Liv::Lck::GorillaTag::GtStreamButton::SetStreamingColor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9d2d0e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtStreamButton*>(),
                        {"SetStreamingColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtStreamButton.StoppingAnimationVisual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Liv::Lck::GorillaTag::GtStreamButton::*)()>(&::Liv::Lck::GorillaTag::GtStreamButton::StoppingAnimationVisual)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9d2d284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtStreamButton*>(),
                        {"StoppingAnimationVisual", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtStreamButton.SetStoppingAnimationValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtStreamButton::*)(float_t)>(&::Liv::Lck::GorillaTag::GtStreamButton::SetStoppingAnimationValue)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x9d2d174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtStreamButton*>(),
                        {"SetStoppingAnimationValue", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtStreamButton.SetDisabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtStreamButton::*)(bool)>(&::Liv::Lck::GorillaTag::GtStreamButton::SetDisabled)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9d2d318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtStreamButton*>(),
                        {"SetDisabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtStreamButton.OnError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtStreamButton::*)()>(&::Liv::Lck::GorillaTag::GtStreamButton::OnError)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9d2d340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtStreamButton*>(),
                        {"OnError", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtStreamButton.ResetAfterError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Liv::Lck::GorillaTag::GtStreamButton::*)()>(&::Liv::Lck::GorillaTag::GtStreamButton::ResetAfterError)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9d2d388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtStreamButton*>(),
                        {"ResetAfterError", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtStreamButton.OnStreamingStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtStreamButton::*)(::Liv::Lck::LckResult*)>(&::Liv::Lck::GorillaTag::GtStreamButton::OnStreamingStarted)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9d2d460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtStreamButton*>(),
                        {"OnStreamingStarted", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtStreamButton.OnStreamingStopped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtStreamButton::*)(::Liv::Lck::LckResult*)>(&::Liv::Lck::GorillaTag::GtStreamButton::OnStreamingStopped)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9d2d4b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtStreamButton*>(),
                        {"OnStreamingStopped", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtStreamButton.WaitForTriggerExitOrDelay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Liv::Lck::GorillaTag::GtStreamButton::*)()>(&::Liv::Lck::GorillaTag::GtStreamButton::WaitForTriggerExitOrDelay)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9d2d530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtStreamButton*>(),
                        {"WaitForTriggerExitOrDelay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtStreamButton.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtStreamButton::*)()>(&::Liv::Lck::GorillaTag::GtStreamButton::OnDestroy)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x9d2d608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtStreamButton*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtStreamButton.TapStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtStreamButton::*)()>(&::Liv::Lck::GorillaTag::GtStreamButton::TapStarted)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x9d2d7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtStreamButton*>(),
                        {"TapStarted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtStreamButton.TapEnded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtStreamButton::*)()>(&::Liv::Lck::GorillaTag::GtStreamButton::TapEnded)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9d2d8dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtStreamButton*>(),
                        {"TapEnded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtStreamButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtStreamButton::*)()>(&::Liv::Lck::GorillaTag::GtStreamButton::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d2d974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtStreamButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::Lck::ILckService*& Liv::Lck::GorillaTag::GtStreamButton::__cordl_internal_get__lckService()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckService;
}
constexpr ::Liv::Lck::ILckService* const& Liv::Lck::GorillaTag::GtStreamButton::__cordl_internal_get__lckService() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckService;
}
constexpr void Liv::Lck::GorillaTag::GtStreamButton::__cordl_internal_set__lckService(::Liv::Lck::ILckService*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lckService = value;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtUiSettings>& Liv::Lck::GorillaTag::GtStreamButton::__cordl_internal_get__settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settings;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtUiSettings> const& Liv::Lck::GorillaTag::GtStreamButton::__cordl_internal_get__settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settings;
}
constexpr void Liv::Lck::GorillaTag::GtStreamButton::__cordl_internal_set__settings(::UnityW<::Liv::Lck::GorillaTag::GtUiSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____settings = value;
}
constexpr ::StringW& Liv::Lck::GorillaTag::GtStreamButton::__cordl_internal_get__name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
constexpr ::StringW const& Liv::Lck::GorillaTag::GtStreamButton::__cordl_internal_get__name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
constexpr void Liv::Lck::GorillaTag::GtStreamButton::__cordl_internal_set__name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____name = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& Liv::Lck::GorillaTag::GtStreamButton::__cordl_internal_get__label()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____label;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& Liv::Lck::GorillaTag::GtStreamButton::__cordl_internal_get__label() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____label;
}
constexpr void Liv::Lck::GorillaTag::GtStreamButton::__cordl_internal_set__label(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____label = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& Liv::Lck::GorillaTag::GtStreamButton::__cordl_internal_get__bodyRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bodyRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& Liv::Lck::GorillaTag::GtStreamButton::__cordl_internal_get__bodyRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bodyRenderer;
}
constexpr void Liv::Lck::GorillaTag::GtStreamButton::__cordl_internal_set__bodyRenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bodyRenderer = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Liv::Lck::GorillaTag::GtStreamButton::__cordl_internal_get__visualsTrans()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visualsTrans;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Liv::Lck::GorillaTag::GtStreamButton::__cordl_internal_get__visualsTrans() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visualsTrans;
}
constexpr void Liv::Lck::GorillaTag::GtStreamButton::__cordl_internal_set__visualsTrans(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____visualsTrans = value;
}
constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController>& Liv::Lck::GorillaTag::GtStreamButton::__cordl_internal_get__audioController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioController;
}
constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController> const& Liv::Lck::GorillaTag::GtStreamButton::__cordl_internal_get__audioController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioController;
}
constexpr void Liv::Lck::GorillaTag::GtStreamButton::__cordl_internal_set__audioController(::UnityW<::Liv::Lck::LckDiscreetAudioController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioController = value;
}
constexpr ::UnityW<::Liv::Lck::Streaming::LckStreamingController>& Liv::Lck::GorillaTag::GtStreamButton::__cordl_internal_get__streamingController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____streamingController;
}
constexpr ::UnityW<::Liv::Lck::Streaming::LckStreamingController> const& Liv::Lck::GorillaTag::GtStreamButton::__cordl_internal_get__streamingController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____streamingController;
}
constexpr void Liv::Lck::GorillaTag::GtStreamButton::__cordl_internal_set__streamingController(::UnityW<::Liv::Lck::Streaming::LckStreamingController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____streamingController = value;
}
constexpr ::UnityEngine::Color& Liv::Lck::GorillaTag::GtStreamButton::__cordl_internal_get__defaultColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultColor;
}
constexpr ::UnityEngine::Color const& Liv::Lck::GorillaTag::GtStreamButton::__cordl_internal_get__defaultColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultColor;
}
constexpr void Liv::Lck::GorillaTag::GtStreamButton::__cordl_internal_set__defaultColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____defaultColor = value;
}
constexpr ::UnityEngine::Color& Liv::Lck::GorillaTag::GtStreamButton::__cordl_internal_get__streamingColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____streamingColor;
}
constexpr ::UnityEngine::Color const& Liv::Lck::GorillaTag::GtStreamButton::__cordl_internal_get__streamingColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____streamingColor;
}
constexpr void Liv::Lck::GorillaTag::GtStreamButton::__cordl_internal_set__streamingColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____streamingColor = value;
}
constexpr ::UnityEngine::Vector3& Liv::Lck::GorillaTag::GtStreamButton::__cordl_internal_get__defaultLocalPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultLocalPosition;
}
constexpr ::UnityEngine::Vector3 const& Liv::Lck::GorillaTag::GtStreamButton::__cordl_internal_get__defaultLocalPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultLocalPosition;
}
constexpr void Liv::Lck::GorillaTag::GtStreamButton::__cordl_internal_set__defaultLocalPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____defaultLocalPosition = value;
}
constexpr bool& Liv::Lck::GorillaTag::GtStreamButton::__cordl_internal_get__isDisabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDisabled;
}
constexpr bool const& Liv::Lck::GorillaTag::GtStreamButton::__cordl_internal_get__isDisabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDisabled;
}
constexpr void Liv::Lck::GorillaTag::GtStreamButton::__cordl_internal_set__isDisabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isDisabled = value;
}
constexpr ::GlobalNamespace::GtStreamButton_State& Liv::Lck::GorillaTag::GtStreamButton::__cordl_internal_get__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
constexpr ::GlobalNamespace::GtStreamButton_State const& Liv::Lck::GorillaTag::GtStreamButton::__cordl_internal_get__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
constexpr void Liv::Lck::GorillaTag::GtStreamButton::__cordl_internal_set__state(::GlobalNamespace::GtStreamButton_State  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____state = value;
}
inline void Liv::Lck::GorillaTag::GtStreamButton::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtStreamButton*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtStreamButton::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtStreamButton*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtStreamButton::UpdateStreamDurationText()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtStreamButton*>(),
                        {"UpdateStreamDurationText", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtStreamButton::UpdateVisualState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtStreamButton*>(),
                        {"UpdateVisualState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtStreamButton::SetDefaultColor(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtStreamButton*>(),
                        {"SetDefaultColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline void Liv::Lck::GorillaTag::GtStreamButton::SetStreamingColor(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtStreamButton*>(),
                        {"SetStreamingColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline ::System::Collections::IEnumerator* Liv::Lck::GorillaTag::GtStreamButton::StoppingAnimationVisual()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtStreamButton*>(),
                        {"StoppingAnimationVisual", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtStreamButton::SetStoppingAnimationValue(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtStreamButton*>(),
                        {"SetStoppingAnimationValue", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::GorillaTag::GtStreamButton::SetDisabled(bool  isDisabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtStreamButton*>(),
                        {"SetDisabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isDisabled);
}
inline void Liv::Lck::GorillaTag::GtStreamButton::OnError()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtStreamButton*>(),
                        {"OnError", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Liv::Lck::GorillaTag::GtStreamButton::ResetAfterError()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtStreamButton*>(),
                        {"ResetAfterError", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtStreamButton::OnStreamingStarted(::Liv::Lck::LckResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtStreamButton*>(),
                        {"OnStreamingStarted", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void Liv::Lck::GorillaTag::GtStreamButton::OnStreamingStopped(::Liv::Lck::LckResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtStreamButton*>(),
                        {"OnStreamingStopped", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::System::Threading::Tasks::Task* Liv::Lck::GorillaTag::GtStreamButton::WaitForTriggerExitOrDelay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtStreamButton*>(),
                        {"WaitForTriggerExitOrDelay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtStreamButton::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtStreamButton*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtStreamButton::TapStarted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtStreamButton*>(),
                        {"TapStarted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtStreamButton::TapEnded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtStreamButton*>(),
                        {"TapEnded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtStreamButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtStreamButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::GorillaTag::GtStreamButton* Liv::Lck::GorillaTag::GtStreamButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::GorillaTag::GtStreamButton*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::GorillaTag::GtStreamButton::GtStreamButton()   {
}
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21::*)(int32_t)>(&::Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9d2d2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21::*)()>(&::Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9d2dcd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21::*)()>(&::Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21::MoveNext)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x9d2dcd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21::*)()>(&::Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d2df14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21::*)()>(&::Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9d2df1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21::*)()>(&::Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d2df54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtStreamButton>& Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtStreamButton> const& Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21::__cordl_internal_set___4__this(::UnityW<::Liv::Lck::GorillaTag::GtStreamButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr float_t& Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21::__cordl_internal_get__startTime_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startTime_5__2;
}
constexpr float_t const& Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21::__cordl_internal_get__startTime_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startTime_5__2;
}
constexpr void Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21::__cordl_internal_set__startTime_5__2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startTime_5__2 = value;
}
constexpr float_t& Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21::__cordl_internal_get__currentProgress_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentProgress_5__3;
}
constexpr float_t const& Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21::__cordl_internal_get__currentProgress_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentProgress_5__3;
}
constexpr void Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21::__cordl_internal_set__currentProgress_5__3(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentProgress_5__3 = value;
}
constexpr float_t& Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21::__cordl_internal_get__stoppingDuration_5__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stoppingDuration_5__4;
}
constexpr float_t const& Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21::__cordl_internal_get__stoppingDuration_5__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stoppingDuration_5__4;
}
constexpr void Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21::__cordl_internal_set__stoppingDuration_5__4(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stoppingDuration_5__4 = value;
}
inline void Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21* Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::GorillaTag::GtStreamButton__StoppingAnimationVisual_d__21::GtStreamButton__StoppingAnimationVisual_d__21()   {
}
