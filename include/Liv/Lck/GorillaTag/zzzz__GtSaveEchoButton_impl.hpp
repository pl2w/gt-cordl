#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GtSaveEchoButton.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtSaveEchoButton_State_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtSaveEchoButton_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtSaveEchoButton_State_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtSaveEchoButton__ResetAfterError_d__30_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtUiSettings_def.hpp"
#include "Liv/Lck/Recorder/zzzz__RecordingData_def.hpp"
#include "Liv/Lck/zzzz__EchoDisableReason_def.hpp"
#include "Liv/Lck/zzzz__ILckService_def.hpp"
#include "Liv/Lck/zzzz__LckDiscreetAudioController_def.hpp"
#include "Liv/Lck/zzzz__LckResult_1_def.hpp"
#include "Liv/Lck/zzzz__LckResult_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtSaveEchoButton.add_onPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtSaveEchoButton::*)(::System::Action*)>(&::Liv::Lck::GorillaTag::GtSaveEchoButton::add_onPressed)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9d2a650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtSaveEchoButton*>(),
                        {"add_onPressed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtSaveEchoButton.remove_onPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtSaveEchoButton::*)(::System::Action*)>(&::Liv::Lck::GorillaTag::GtSaveEchoButton::remove_onPressed)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9d2a6ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtSaveEchoButton*>(),
                        {"remove_onPressed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtSaveEchoButton.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtSaveEchoButton::*)()>(&::Liv::Lck::GorillaTag::GtSaveEchoButton::Start)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x9d2a788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtSaveEchoButton*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtSaveEchoButton.UpdateVisualState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtSaveEchoButton::*)()>(&::Liv::Lck::GorillaTag::GtSaveEchoButton::UpdateVisualState)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x9d2abfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtSaveEchoButton*>(),
                        {"UpdateVisualState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtSaveEchoButton.SetDisabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtSaveEchoButton::*)(bool)>(&::Liv::Lck::GorillaTag::GtSaveEchoButton::SetDisabled)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9d2ad28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtSaveEchoButton*>(),
                        {"SetDisabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtSaveEchoButton.TapStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtSaveEchoButton::*)()>(&::Liv::Lck::GorillaTag::GtSaveEchoButton::TapStarted)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9d2ad50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtSaveEchoButton*>(),
                        {"TapStarted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtSaveEchoButton.TapEnded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtSaveEchoButton::*)()>(&::Liv::Lck::GorillaTag::GtSaveEchoButton::TapEnded)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9d2ae28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtSaveEchoButton*>(),
                        {"TapEnded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtSaveEchoButton.OnEchoEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtSaveEchoButton::*)(::Liv::Lck::LckResult*)>(&::Liv::Lck::GorillaTag::GtSaveEchoButton::OnEchoEnabled)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9d2ae74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtSaveEchoButton*>(),
                        {"OnEchoEnabled", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtSaveEchoButton.StartEchoPolling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtSaveEchoButton::*)()>(&::Liv::Lck::GorillaTag::GtSaveEchoButton::StartEchoPolling)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x9d2aaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtSaveEchoButton*>(),
                        {"StartEchoPolling", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtSaveEchoButton.OnEchoDisabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtSaveEchoButton::*)(::Liv::Lck::LckResult*, ::Liv::Lck::EchoDisableReason)>(&::Liv::Lck::GorillaTag::GtSaveEchoButton::OnEchoDisabled)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9d2ae90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtSaveEchoButton*>(),
                        {"OnEchoDisabled", {}, {::i2c::type_of<::Liv::Lck::LckResult*>(), ::i2c::type_of<::Liv::Lck::EchoDisableReason>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtSaveEchoButton.OnError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtSaveEchoButton::*)()>(&::Liv::Lck::GorillaTag::GtSaveEchoButton::OnError)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9d2af04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtSaveEchoButton*>(),
                        {"OnError", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtSaveEchoButton.ResetAfterError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Liv::Lck::GorillaTag::GtSaveEchoButton::*)()>(&::Liv::Lck::GorillaTag::GtSaveEchoButton::ResetAfterError)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9d2af34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtSaveEchoButton*>(),
                        {"ResetAfterError", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtSaveEchoButton.UpdateBufferDurationText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtSaveEchoButton::*)()>(&::Liv::Lck::GorillaTag::GtSaveEchoButton::UpdateBufferDurationText)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x9d2b010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtSaveEchoButton*>(),
                        {"UpdateBufferDurationText", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtSaveEchoButton.OnEchoSaved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtSaveEchoButton::*)(::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*)>(&::Liv::Lck::GorillaTag::GtSaveEchoButton::OnEchoSaved)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9d2b23c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtSaveEchoButton*>(),
                        {"OnEchoSaved", {}, {::i2c::type_of<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtSaveEchoButton.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtSaveEchoButton::*)()>(&::Liv::Lck::GorillaTag::GtSaveEchoButton::OnEnable)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x9d2b2a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtSaveEchoButton*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtSaveEchoButton.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtSaveEchoButton::*)()>(&::Liv::Lck::GorillaTag::GtSaveEchoButton::OnDisable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d2b490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtSaveEchoButton*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtSaveEchoButton.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtSaveEchoButton::*)()>(&::Liv::Lck::GorillaTag::GtSaveEchoButton::OnDestroy)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x9d2b498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtSaveEchoButton*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtSaveEchoButton.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtSaveEchoButton::*)()>(&::Liv::Lck::GorillaTag::GtSaveEchoButton::Update)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9d2b700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtSaveEchoButton*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtSaveEchoButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtSaveEchoButton::*)()>(&::Liv::Lck::GorillaTag::GtSaveEchoButton::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9d2b718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtSaveEchoButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::Lck::ILckService*& Liv::Lck::GorillaTag::GtSaveEchoButton::__cordl_internal_get__lckService()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckService;
}
constexpr ::Liv::Lck::ILckService* const& Liv::Lck::GorillaTag::GtSaveEchoButton::__cordl_internal_get__lckService() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckService;
}
constexpr void Liv::Lck::GorillaTag::GtSaveEchoButton::__cordl_internal_set__lckService(::Liv::Lck::ILckService*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lckService = value;
}
constexpr ::System::Action*& Liv::Lck::GorillaTag::GtSaveEchoButton::__cordl_internal_get_onPressed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPressed;
}
constexpr ::System::Action* const& Liv::Lck::GorillaTag::GtSaveEchoButton::__cordl_internal_get_onPressed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPressed;
}
constexpr void Liv::Lck::GorillaTag::GtSaveEchoButton::__cordl_internal_set_onPressed(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onPressed = value;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtUiSettings>& Liv::Lck::GorillaTag::GtSaveEchoButton::__cordl_internal_get__settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settings;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtUiSettings> const& Liv::Lck::GorillaTag::GtSaveEchoButton::__cordl_internal_get__settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settings;
}
constexpr void Liv::Lck::GorillaTag::GtSaveEchoButton::__cordl_internal_set__settings(::UnityW<::Liv::Lck::GorillaTag::GtUiSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____settings = value;
}
constexpr ::StringW& Liv::Lck::GorillaTag::GtSaveEchoButton::__cordl_internal_get__name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
constexpr ::StringW const& Liv::Lck::GorillaTag::GtSaveEchoButton::__cordl_internal_get__name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
constexpr void Liv::Lck::GorillaTag::GtSaveEchoButton::__cordl_internal_set__name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____name = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& Liv::Lck::GorillaTag::GtSaveEchoButton::__cordl_internal_get__label()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____label;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& Liv::Lck::GorillaTag::GtSaveEchoButton::__cordl_internal_get__label() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____label;
}
constexpr void Liv::Lck::GorillaTag::GtSaveEchoButton::__cordl_internal_set__label(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____label = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& Liv::Lck::GorillaTag::GtSaveEchoButton::__cordl_internal_get__bodyRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bodyRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& Liv::Lck::GorillaTag::GtSaveEchoButton::__cordl_internal_get__bodyRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bodyRenderer;
}
constexpr void Liv::Lck::GorillaTag::GtSaveEchoButton::__cordl_internal_set__bodyRenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bodyRenderer = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Liv::Lck::GorillaTag::GtSaveEchoButton::__cordl_internal_get__visualsTrans()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visualsTrans;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Liv::Lck::GorillaTag::GtSaveEchoButton::__cordl_internal_get__visualsTrans() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visualsTrans;
}
constexpr void Liv::Lck::GorillaTag::GtSaveEchoButton::__cordl_internal_set__visualsTrans(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____visualsTrans = value;
}
constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController>& Liv::Lck::GorillaTag::GtSaveEchoButton::__cordl_internal_get__audioController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioController;
}
constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController> const& Liv::Lck::GorillaTag::GtSaveEchoButton::__cordl_internal_get__audioController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioController;
}
constexpr void Liv::Lck::GorillaTag::GtSaveEchoButton::__cordl_internal_set__audioController(::UnityW<::Liv::Lck::LckDiscreetAudioController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioController = value;
}
constexpr int32_t& Liv::Lck::GorillaTag::GtSaveEchoButton::__cordl_internal_get__lastDisplayedSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastDisplayedSeconds;
}
constexpr int32_t const& Liv::Lck::GorillaTag::GtSaveEchoButton::__cordl_internal_get__lastDisplayedSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastDisplayedSeconds;
}
constexpr void Liv::Lck::GorillaTag::GtSaveEchoButton::__cordl_internal_set__lastDisplayedSeconds(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastDisplayedSeconds = value;
}
constexpr int32_t& Liv::Lck::GorillaTag::GtSaveEchoButton::__cordl_internal_get__maxBufferSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxBufferSeconds;
}
constexpr int32_t const& Liv::Lck::GorillaTag::GtSaveEchoButton::__cordl_internal_get__maxBufferSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxBufferSeconds;
}
constexpr void Liv::Lck::GorillaTag::GtSaveEchoButton::__cordl_internal_set__maxBufferSeconds(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxBufferSeconds = value;
}
constexpr bool& Liv::Lck::GorillaTag::GtSaveEchoButton::__cordl_internal_get__shouldPollEchoDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shouldPollEchoDuration;
}
constexpr bool const& Liv::Lck::GorillaTag::GtSaveEchoButton::__cordl_internal_get__shouldPollEchoDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shouldPollEchoDuration;
}
constexpr void Liv::Lck::GorillaTag::GtSaveEchoButton::__cordl_internal_set__shouldPollEchoDuration(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____shouldPollEchoDuration = value;
}
constexpr bool& Liv::Lck::GorillaTag::GtSaveEchoButton::__cordl_internal_get__isDisabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDisabled;
}
constexpr bool const& Liv::Lck::GorillaTag::GtSaveEchoButton::__cordl_internal_get__isDisabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDisabled;
}
constexpr void Liv::Lck::GorillaTag::GtSaveEchoButton::__cordl_internal_set__isDisabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isDisabled = value;
}
constexpr ::UnityEngine::Vector3& Liv::Lck::GorillaTag::GtSaveEchoButton::__cordl_internal_get__defaultLocalPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultLocalPosition;
}
constexpr ::UnityEngine::Vector3 const& Liv::Lck::GorillaTag::GtSaveEchoButton::__cordl_internal_get__defaultLocalPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultLocalPosition;
}
constexpr void Liv::Lck::GorillaTag::GtSaveEchoButton::__cordl_internal_set__defaultLocalPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____defaultLocalPosition = value;
}
constexpr ::GlobalNamespace::GtSaveEchoButton_State& Liv::Lck::GorillaTag::GtSaveEchoButton::__cordl_internal_get__currentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentState;
}
constexpr ::GlobalNamespace::GtSaveEchoButton_State const& Liv::Lck::GorillaTag::GtSaveEchoButton::__cordl_internal_get__currentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentState;
}
constexpr void Liv::Lck::GorillaTag::GtSaveEchoButton::__cordl_internal_set__currentState(::GlobalNamespace::GtSaveEchoButton_State  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentState = value;
}
inline void Liv::Lck::GorillaTag::GtSaveEchoButton::add_onPressed(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtSaveEchoButton*>(),
                        {"add_onPressed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::GorillaTag::GtSaveEchoButton::remove_onPressed(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtSaveEchoButton*>(),
                        {"remove_onPressed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::GorillaTag::GtSaveEchoButton::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtSaveEchoButton*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtSaveEchoButton::UpdateVisualState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtSaveEchoButton*>(),
                        {"UpdateVisualState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtSaveEchoButton::SetDisabled(bool  isDisabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtSaveEchoButton*>(),
                        {"SetDisabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isDisabled);
}
inline void Liv::Lck::GorillaTag::GtSaveEchoButton::TapStarted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtSaveEchoButton*>(),
                        {"TapStarted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtSaveEchoButton::TapEnded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtSaveEchoButton*>(),
                        {"TapEnded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtSaveEchoButton::OnEchoEnabled(::Liv::Lck::LckResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtSaveEchoButton*>(),
                        {"OnEchoEnabled", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void Liv::Lck::GorillaTag::GtSaveEchoButton::StartEchoPolling()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtSaveEchoButton*>(),
                        {"StartEchoPolling", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtSaveEchoButton::OnEchoDisabled(::Liv::Lck::LckResult*  result, ::Liv::Lck::EchoDisableReason  reason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtSaveEchoButton*>(),
                        {"OnEchoDisabled", {}, {::i2c::type_of<::Liv::Lck::LckResult*>(), ::i2c::type_of<::Liv::Lck::EchoDisableReason>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, reason);
}
inline void Liv::Lck::GorillaTag::GtSaveEchoButton::OnError()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtSaveEchoButton*>(),
                        {"OnError", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Liv::Lck::GorillaTag::GtSaveEchoButton::ResetAfterError()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtSaveEchoButton*>(),
                        {"ResetAfterError", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtSaveEchoButton::UpdateBufferDurationText()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtSaveEchoButton*>(),
                        {"UpdateBufferDurationText", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtSaveEchoButton::OnEchoSaved(::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtSaveEchoButton*>(),
                        {"OnEchoSaved", {}, {::i2c::type_of<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void Liv::Lck::GorillaTag::GtSaveEchoButton::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtSaveEchoButton*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtSaveEchoButton::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtSaveEchoButton*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtSaveEchoButton::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtSaveEchoButton*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtSaveEchoButton::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtSaveEchoButton*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtSaveEchoButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtSaveEchoButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::GorillaTag::GtSaveEchoButton* Liv::Lck::GorillaTag::GtSaveEchoButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::GorillaTag::GtSaveEchoButton*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::GorillaTag::GtSaveEchoButton::GtSaveEchoButton()   {
}
