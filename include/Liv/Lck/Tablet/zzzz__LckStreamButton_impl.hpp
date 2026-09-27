#pragma once
// IWYU pragma private; include "Liv/Lck/Tablet/LckStreamButton.hpp"
#include "Liv/Lck/Tablet/zzzz__LckStreamButton_State_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Liv/Lck/Tablet/zzzz__LckStreamButton_def.hpp"
#include "Liv/Lck/Streaming/zzzz__LckStreamingController_def.hpp"
#include "Liv/Lck/Tablet/zzzz__LckStreamButton_State_def.hpp"
#include "Liv/Lck/Tablet/zzzz__LckStreamButton__ResetAfterError_d__17_def.hpp"
#include "Liv/Lck/Tablet/zzzz__LckStreamButton__WaitForTriggerExitOrDelay_d__20_def.hpp"
#include "Liv/Lck/Tablet/zzzz__LckStreamButton_def.hpp"
#include "Liv/Lck/UI/zzzz__LckButtonColors_def.hpp"
#include "Liv/Lck/zzzz__ILckService_def.hpp"
#include "Liv/Lck/zzzz__LckDiscreetAudioController_def.hpp"
#include "Liv/Lck/zzzz__LckResult_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerDownHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerEnterHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerExitHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerUpHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Tablet::LckStreamButton.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckStreamButton::*)()>(&::Liv::Lck::Tablet::LckStreamButton::Start)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x9d5bdd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckStreamButton.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckStreamButton::*)()>(&::Liv::Lck::Tablet::LckStreamButton::Update)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9d5c0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckStreamButton.UpdateStreamDurationText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckStreamButton::*)()>(&::Liv::Lck::Tablet::LckStreamButton::UpdateStreamDurationText)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x9d5c0dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton*>(),
                        {"UpdateStreamDurationText", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckStreamButton.OnError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckStreamButton::*)()>(&::Liv::Lck::Tablet::LckStreamButton::OnError)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9d5c3f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton*>(),
                        {"OnError", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckStreamButton.ResetAfterError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Liv::Lck::Tablet::LckStreamButton::*)()>(&::Liv::Lck::Tablet::LckStreamButton::ResetAfterError)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9d5c470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton*>(),
                        {"ResetAfterError", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckStreamButton.OnStreamingStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckStreamButton::*)(::Liv::Lck::LckResult*)>(&::Liv::Lck::Tablet::LckStreamButton::OnStreamingStarted)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9d5c548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton*>(),
                        {"OnStreamingStarted", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckStreamButton.OnStreamingStopped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckStreamButton::*)(::Liv::Lck::LckResult*)>(&::Liv::Lck::Tablet::LckStreamButton::OnStreamingStopped)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x9d5c6ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton*>(),
                        {"OnStreamingStopped", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckStreamButton.WaitForTriggerExitOrDelay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Liv::Lck::Tablet::LckStreamButton::*)()>(&::Liv::Lck::Tablet::LckStreamButton::WaitForTriggerExitOrDelay)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9d5c78c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton*>(),
                        {"WaitForTriggerExitOrDelay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckStreamButton.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckStreamButton::*)()>(&::Liv::Lck::Tablet::LckStreamButton::OnDestroy)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x9d5c864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckStreamButton.OnPointerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckStreamButton::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Liv::Lck::Tablet::LckStreamButton::OnPointerEnter)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x9d5ca0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton*>(),
                        {"OnPointerEnter", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckStreamButton.OnPointerDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckStreamButton::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Liv::Lck::Tablet::LckStreamButton::OnPointerDown)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x9d5ca50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton*>(),
                        {"OnPointerDown", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckStreamButton.OnPointerUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckStreamButton::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Liv::Lck::Tablet::LckStreamButton::OnPointerUp)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x9d5cb78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton*>(),
                        {"OnPointerUp", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckStreamButton.OnPointerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckStreamButton::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Liv::Lck::Tablet::LckStreamButton::OnPointerExit)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9d5cd1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton*>(),
                        {"OnPointerExit", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckStreamButton.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckStreamButton::*)(::UnityEngine::Collider*)>(&::Liv::Lck::Tablet::LckStreamButton::OnTriggerEnter)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x9d5cddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckStreamButton.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckStreamButton::*)(::UnityEngine::Collider*)>(&::Liv::Lck::Tablet::LckStreamButton::OnTriggerExit)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9d5d038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckStreamButton.IsValidTap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::Tablet::LckStreamButton::*)(::UnityEngine::Vector3)>(&::Liv::Lck::Tablet::LckStreamButton::IsValidTap)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x9d5cebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton*>(),
                        {"IsValidTap", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckStreamButton.OnApplicationFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckStreamButton::*)(bool)>(&::Liv::Lck::Tablet::LckStreamButton::OnApplicationFocus)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9d5d0a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton*>(),
                        {"OnApplicationFocus", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckStreamButton.ValidateMeshColors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckStreamButton::*)(bool, bool)>(&::Liv::Lck::Tablet::LckStreamButton::ValidateMeshColors)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x9d5bf78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton*>(),
                        {"ValidateMeshColors", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckStreamButton.SetStoppingAnimationValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckStreamButton::*)(float_t)>(&::Liv::Lck::Tablet::LckStreamButton::SetStoppingAnimationValue)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x9d5c59c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton*>(),
                        {"SetStoppingAnimationValue", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckStreamButton.SetDefaultColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckStreamButton::*)(::UnityEngine::Color)>(&::Liv::Lck::Tablet::LckStreamButton::SetDefaultColor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9d5d0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton*>(),
                        {"SetDefaultColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckStreamButton.SetStreamingColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckStreamButton::*)(::UnityEngine::Color)>(&::Liv::Lck::Tablet::LckStreamButton::SetStreamingColor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9d5d180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton*>(),
                        {"SetStreamingColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckStreamButton.StoppingAnimationVisual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Liv::Lck::Tablet::LckStreamButton::*)()>(&::Liv::Lck::Tablet::LckStreamButton::StoppingAnimationVisual)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9d5cb0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton*>(),
                        {"StoppingAnimationVisual", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckStreamButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckStreamButton::*)()>(&::Liv::Lck::Tablet::LckStreamButton::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9d5d238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::Lck::ILckService*& Liv::Lck::Tablet::LckStreamButton::__cordl_internal_get__lckService()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckService;
}
constexpr ::Liv::Lck::ILckService* const& Liv::Lck::Tablet::LckStreamButton::__cordl_internal_get__lckService() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckService;
}
constexpr void Liv::Lck::Tablet::LckStreamButton::__cordl_internal_set__lckService(::Liv::Lck::ILckService*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lckService = value;
}
constexpr ::UnityW<::Liv::Lck::Streaming::LckStreamingController>& Liv::Lck::Tablet::LckStreamButton::__cordl_internal_get__streamingController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____streamingController;
}
constexpr ::UnityW<::Liv::Lck::Streaming::LckStreamingController> const& Liv::Lck::Tablet::LckStreamButton::__cordl_internal_get__streamingController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____streamingController;
}
constexpr void Liv::Lck::Tablet::LckStreamButton::__cordl_internal_set__streamingController(::UnityW<::Liv::Lck::Streaming::LckStreamingController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____streamingController = value;
}
constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController>& Liv::Lck::Tablet::LckStreamButton::__cordl_internal_get__audioController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioController;
}
constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController> const& Liv::Lck::Tablet::LckStreamButton::__cordl_internal_get__audioController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioController;
}
constexpr void Liv::Lck::Tablet::LckStreamButton::__cordl_internal_set__audioController(::UnityW<::Liv::Lck::LckDiscreetAudioController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioController = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& Liv::Lck::Tablet::LckStreamButton::__cordl_internal_get__streamButtonText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____streamButtonText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& Liv::Lck::Tablet::LckStreamButton::__cordl_internal_get__streamButtonText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____streamButtonText;
}
constexpr void Liv::Lck::Tablet::LckStreamButton::__cordl_internal_set__streamButtonText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____streamButtonText = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& Liv::Lck::Tablet::LckStreamButton::__cordl_internal_get__renderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& Liv::Lck::Tablet::LckStreamButton::__cordl_internal_get__renderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderer;
}
constexpr void Liv::Lck::Tablet::LckStreamButton::__cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____renderer = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& Liv::Lck::Tablet::LckStreamButton::__cordl_internal_get__visuals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visuals;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& Liv::Lck::Tablet::LckStreamButton::__cordl_internal_get__visuals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visuals;
}
constexpr void Liv::Lck::Tablet::LckStreamButton::__cordl_internal_set__visuals(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____visuals = value;
}
constexpr ::UnityW<::Liv::Lck::UI::LckButtonColors>& Liv::Lck::Tablet::LckStreamButton::__cordl_internal_get__defaultColors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultColors;
}
constexpr ::UnityW<::Liv::Lck::UI::LckButtonColors> const& Liv::Lck::Tablet::LckStreamButton::__cordl_internal_get__defaultColors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultColors;
}
constexpr void Liv::Lck::Tablet::LckStreamButton::__cordl_internal_set__defaultColors(::UnityW<::Liv::Lck::UI::LckButtonColors>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____defaultColors = value;
}
constexpr ::UnityW<::Liv::Lck::UI::LckButtonColors>& Liv::Lck::Tablet::LckStreamButton::__cordl_internal_get__streamingColors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____streamingColors;
}
constexpr ::UnityW<::Liv::Lck::UI::LckButtonColors> const& Liv::Lck::Tablet::LckStreamButton::__cordl_internal_get__streamingColors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____streamingColors;
}
constexpr void Liv::Lck::Tablet::LckStreamButton::__cordl_internal_set__streamingColors(::UnityW<::Liv::Lck::UI::LckButtonColors>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____streamingColors = value;
}
constexpr ::UnityEngine::Vector3& Liv::Lck::Tablet::LckStreamButton::__cordl_internal_get__buttonPressedPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonPressedPosition;
}
constexpr ::UnityEngine::Vector3 const& Liv::Lck::Tablet::LckStreamButton::__cordl_internal_get__buttonPressedPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonPressedPosition;
}
constexpr void Liv::Lck::Tablet::LckStreamButton::__cordl_internal_set__buttonPressedPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buttonPressedPosition = value;
}
constexpr bool& Liv::Lck::Tablet::LckStreamButton::__cordl_internal_get__collided()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collided;
}
constexpr bool const& Liv::Lck::Tablet::LckStreamButton::__cordl_internal_get__collided() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collided;
}
constexpr void Liv::Lck::Tablet::LckStreamButton::__cordl_internal_set__collided(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____collided = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Liv::Lck::Tablet::LckStreamButton::__cordl_internal_get__clickedObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clickedObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Liv::Lck::Tablet::LckStreamButton::__cordl_internal_get__clickedObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clickedObject;
}
constexpr void Liv::Lck::Tablet::LckStreamButton::__cordl_internal_set__clickedObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clickedObject = value;
}
constexpr ::GlobalNamespace::LckStreamButton_State& Liv::Lck::Tablet::LckStreamButton::__cordl_internal_get__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
constexpr ::GlobalNamespace::LckStreamButton_State const& Liv::Lck::Tablet::LckStreamButton::__cordl_internal_get__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
constexpr void Liv::Lck::Tablet::LckStreamButton::__cordl_internal_set__state(::GlobalNamespace::LckStreamButton_State  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____state = value;
}
inline void Liv::Lck::Tablet::LckStreamButton::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LckStreamButton::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LckStreamButton::UpdateStreamDurationText()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton*>(),
                        {"UpdateStreamDurationText", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LckStreamButton::OnError()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton*>(),
                        {"OnError", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Liv::Lck::Tablet::LckStreamButton::ResetAfterError()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton*>(),
                        {"ResetAfterError", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LckStreamButton::OnStreamingStarted(::Liv::Lck::LckResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton*>(),
                        {"OnStreamingStarted", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void Liv::Lck::Tablet::LckStreamButton::OnStreamingStopped(::Liv::Lck::LckResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton*>(),
                        {"OnStreamingStopped", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::System::Threading::Tasks::Task* Liv::Lck::Tablet::LckStreamButton::WaitForTriggerExitOrDelay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton*>(),
                        {"WaitForTriggerExitOrDelay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LckStreamButton::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LckStreamButton::OnPointerEnter(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton*>(),
                        {"OnPointerEnter", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Liv::Lck::Tablet::LckStreamButton::OnPointerDown(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton*>(),
                        {"OnPointerDown", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Liv::Lck::Tablet::LckStreamButton::OnPointerUp(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton*>(),
                        {"OnPointerUp", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Liv::Lck::Tablet::LckStreamButton::OnPointerExit(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton*>(),
                        {"OnPointerExit", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Liv::Lck::Tablet::LckStreamButton::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void Liv::Lck::Tablet::LckStreamButton::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline bool Liv::Lck::Tablet::LckStreamButton::IsValidTap(::UnityEngine::Vector3  tapPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton*>(),
                        {"IsValidTap", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, tapPosition);
}
inline void Liv::Lck::Tablet::LckStreamButton::OnApplicationFocus(bool  focus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton*>(),
                        {"OnApplicationFocus", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, focus);
}
inline void Liv::Lck::Tablet::LckStreamButton::ValidateMeshColors(bool  isPressed, bool  isHovering)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton*>(),
                        {"ValidateMeshColors", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isPressed, isHovering);
}
inline void Liv::Lck::Tablet::LckStreamButton::SetStoppingAnimationValue(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton*>(),
                        {"SetStoppingAnimationValue", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::Tablet::LckStreamButton::SetDefaultColor(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton*>(),
                        {"SetDefaultColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline void Liv::Lck::Tablet::LckStreamButton::SetStreamingColor(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton*>(),
                        {"SetStreamingColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline ::System::Collections::IEnumerator* Liv::Lck::Tablet::LckStreamButton::StoppingAnimationVisual()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton*>(),
                        {"StoppingAnimationVisual", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LckStreamButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::Tablet::LckStreamButton* Liv::Lck::Tablet::LckStreamButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Tablet::LckStreamButton*>());
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr  Liv::Lck::Tablet::LckStreamButton::operator ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerEnterHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr ::UnityEngine::EventSystems::IPointerEnterHandler* Liv::Lck::Tablet::LckStreamButton::i___UnityEngine__EventSystems__IPointerEnterHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerEnterHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr  Liv::Lck::Tablet::LckStreamButton::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* Liv::Lck::Tablet::LckStreamButton::i___UnityEngine__EventSystems__IEventSystemHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerDownHandler"
constexpr  Liv::Lck::Tablet::LckStreamButton::operator ::UnityEngine::EventSystems::IPointerDownHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerDownHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerDownHandler"
constexpr ::UnityEngine::EventSystems::IPointerDownHandler* Liv::Lck::Tablet::LckStreamButton::i___UnityEngine__EventSystems__IPointerDownHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerDownHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr  Liv::Lck::Tablet::LckStreamButton::operator ::UnityEngine::EventSystems::IPointerUpHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerUpHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr ::UnityEngine::EventSystems::IPointerUpHandler* Liv::Lck::Tablet::LckStreamButton::i___UnityEngine__EventSystems__IPointerUpHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerUpHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr  Liv::Lck::Tablet::LckStreamButton::operator ::UnityEngine::EventSystems::IPointerExitHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerExitHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr ::UnityEngine::EventSystems::IPointerExitHandler* Liv::Lck::Tablet::LckStreamButton::i___UnityEngine__EventSystems__IPointerExitHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerExitHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::Tablet::LckStreamButton::LckStreamButton()   {
}
//  Writing Method size for method: ::Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34::*)(int32_t)>(&::Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9d5d210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34::*)()>(&::Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9d5d630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34::*)()>(&::Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34::MoveNext)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x9d5d634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34::*)()>(&::Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d5d88c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34::*)()>(&::Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9d5d894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34::*)()>(&::Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d5d8cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Liv::Lck::Tablet::LckStreamButton>& Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Liv::Lck::Tablet::LckStreamButton> const& Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34::__cordl_internal_set___4__this(::UnityW<::Liv::Lck::Tablet::LckStreamButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr float_t& Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34::__cordl_internal_get__startTime_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startTime_5__2;
}
constexpr float_t const& Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34::__cordl_internal_get__startTime_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startTime_5__2;
}
constexpr void Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34::__cordl_internal_set__startTime_5__2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startTime_5__2 = value;
}
constexpr float_t& Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34::__cordl_internal_get__currentProgress_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentProgress_5__3;
}
constexpr float_t const& Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34::__cordl_internal_get__currentProgress_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentProgress_5__3;
}
constexpr void Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34::__cordl_internal_set__currentProgress_5__3(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentProgress_5__3 = value;
}
constexpr float_t& Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34::__cordl_internal_get__stoppingDuration_5__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stoppingDuration_5__4;
}
constexpr float_t const& Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34::__cordl_internal_get__stoppingDuration_5__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stoppingDuration_5__4;
}
constexpr void Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34::__cordl_internal_set__stoppingDuration_5__4(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stoppingDuration_5__4 = value;
}
inline void Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34* Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::Tablet::LckStreamButton__StoppingAnimationVisual_d__34::LckStreamButton__StoppingAnimationVisual_d__34()   {
}
