#pragma once
// IWYU pragma private; include "Liv/Lck/Tablet/LckRecordButton.hpp"
#include "Liv/Lck/Tablet/zzzz__LckRecordButton_State_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Liv/Lck/Tablet/zzzz__LckRecordButton_def.hpp"
#include "Liv/Lck/Recorder/zzzz__RecordingData_def.hpp"
#include "Liv/Lck/Tablet/zzzz__LckRecordButton_State_def.hpp"
#include "Liv/Lck/Tablet/zzzz__LckRecordButton__ResetAfterError_d__12_def.hpp"
#include "Liv/Lck/UI/zzzz__LckToggle_def.hpp"
#include "Liv/Lck/zzzz__ILckService_def.hpp"
#include "Liv/Lck/zzzz__LckDiscreetAudioController_def.hpp"
#include "Liv/Lck/zzzz__LckResult_1_def.hpp"
#include "Liv/Lck/zzzz__LckResult_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
#include "UnityEngine/zzzz__BoxCollider_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Tablet::LckRecordButton.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckRecordButton::*)()>(&::Liv::Lck::Tablet::LckRecordButton::Start)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x9d5955c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckRecordButton*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckRecordButton.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckRecordButton::*)()>(&::Liv::Lck::Tablet::LckRecordButton::Update)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9d59998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckRecordButton*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckRecordButton.UpdateRecordDurationText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckRecordButton::*)()>(&::Liv::Lck::Tablet::LckRecordButton::UpdateRecordDurationText)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x9d599cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckRecordButton*>(),
                        {"UpdateRecordDurationText", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckRecordButton.OnError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckRecordButton::*)()>(&::Liv::Lck::Tablet::LckRecordButton::OnError)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x9d59cb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckRecordButton*>(),
                        {"OnError", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckRecordButton.ResetAfterError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Liv::Lck::Tablet::LckRecordButton::*)()>(&::Liv::Lck::Tablet::LckRecordButton::ResetAfterError)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9d59d94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckRecordButton*>(),
                        {"ResetAfterError", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckRecordButton.OnRecordingStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckRecordButton::*)(::Liv::Lck::LckResult*)>(&::Liv::Lck::Tablet::LckRecordButton::OnRecordingStarted)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9d59e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckRecordButton*>(),
                        {"OnRecordingStarted", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckRecordButton.OnRecordingPaused
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckRecordButton::*)(::Liv::Lck::LckResult*)>(&::Liv::Lck::Tablet::LckRecordButton::OnRecordingPaused)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x9d59eb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckRecordButton*>(),
                        {"OnRecordingPaused", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckRecordButton.OnRecordingResumed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckRecordButton::*)(::Liv::Lck::LckResult*)>(&::Liv::Lck::Tablet::LckRecordButton::OnRecordingResumed)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x9d59fa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckRecordButton*>(),
                        {"OnRecordingResumed", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckRecordButton.OnRecordingStopped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckRecordButton::*)(::Liv::Lck::LckResult*)>(&::Liv::Lck::Tablet::LckRecordButton::OnRecordingStopped)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x9d59fcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckRecordButton*>(),
                        {"OnRecordingStopped", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckRecordButton.OnRecordingSaved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckRecordButton::*)(::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*)>(&::Liv::Lck::Tablet::LckRecordButton::OnRecordingSaved)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x9d5a0f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckRecordButton*>(),
                        {"OnRecordingSaved", {}, {::i2c::type_of<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckRecordButton.ResetButtonVisuals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckRecordButton::*)()>(&::Liv::Lck::Tablet::LckRecordButton::ResetButtonVisuals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9d5a1dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckRecordButton*>(),
                        {"ResetButtonVisuals", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckRecordButton.EnsureLckService
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckRecordButton::*)()>(&::Liv::Lck::Tablet::LckRecordButton::EnsureLckService)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9d598e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckRecordButton*>(),
                        {"EnsureLckService", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckRecordButton.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckRecordButton::*)()>(&::Liv::Lck::Tablet::LckRecordButton::OnDestroy)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x9d5a26c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckRecordButton*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckRecordButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckRecordButton::*)()>(&::Liv::Lck::Tablet::LckRecordButton::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d5a5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckRecordButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::Lck::ILckService*& Liv::Lck::Tablet::LckRecordButton::__cordl_internal_get__lckService()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckService;
}
constexpr ::Liv::Lck::ILckService* const& Liv::Lck::Tablet::LckRecordButton::__cordl_internal_get__lckService() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckService;
}
constexpr void Liv::Lck::Tablet::LckRecordButton::__cordl_internal_set__lckService(::Liv::Lck::ILckService*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lckService = value;
}
constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController>& Liv::Lck::Tablet::LckRecordButton::__cordl_internal_get__audioController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioController;
}
constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController> const& Liv::Lck::Tablet::LckRecordButton::__cordl_internal_get__audioController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioController;
}
constexpr void Liv::Lck::Tablet::LckRecordButton::__cordl_internal_set__audioController(::UnityW<::Liv::Lck::LckDiscreetAudioController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioController = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& Liv::Lck::Tablet::LckRecordButton::__cordl_internal_get__recordButtonText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordButtonText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& Liv::Lck::Tablet::LckRecordButton::__cordl_internal_get__recordButtonText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordButtonText;
}
constexpr void Liv::Lck::Tablet::LckRecordButton::__cordl_internal_set__recordButtonText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____recordButtonText = value;
}
constexpr ::UnityW<::Liv::Lck::UI::LckToggle>& Liv::Lck::Tablet::LckRecordButton::__cordl_internal_get__recordLckToggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordLckToggle;
}
constexpr ::UnityW<::Liv::Lck::UI::LckToggle> const& Liv::Lck::Tablet::LckRecordButton::__cordl_internal_get__recordLckToggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordLckToggle;
}
constexpr void Liv::Lck::Tablet::LckRecordButton::__cordl_internal_set__recordLckToggle(::UnityW<::Liv::Lck::UI::LckToggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____recordLckToggle = value;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle>& Liv::Lck::Tablet::LckRecordButton::__cordl_internal_get__recordToggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordToggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& Liv::Lck::Tablet::LckRecordButton::__cordl_internal_get__recordToggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordToggle;
}
constexpr void Liv::Lck::Tablet::LckRecordButton::__cordl_internal_set__recordToggle(::UnityW<::UnityEngine::UI::Toggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____recordToggle = value;
}
constexpr ::UnityW<::UnityEngine::BoxCollider>& Liv::Lck::Tablet::LckRecordButton::__cordl_internal_get__collider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collider;
}
constexpr ::UnityW<::UnityEngine::BoxCollider> const& Liv::Lck::Tablet::LckRecordButton::__cordl_internal_get__collider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collider;
}
constexpr void Liv::Lck::Tablet::LckRecordButton::__cordl_internal_set__collider(::UnityW<::UnityEngine::BoxCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____collider = value;
}
constexpr ::GlobalNamespace::LckRecordButton_State& Liv::Lck::Tablet::LckRecordButton::__cordl_internal_get__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
constexpr ::GlobalNamespace::LckRecordButton_State const& Liv::Lck::Tablet::LckRecordButton::__cordl_internal_get__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
constexpr void Liv::Lck::Tablet::LckRecordButton::__cordl_internal_set__state(::GlobalNamespace::LckRecordButton_State  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____state = value;
}
inline void Liv::Lck::Tablet::LckRecordButton::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckRecordButton*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LckRecordButton::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckRecordButton*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LckRecordButton::UpdateRecordDurationText()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckRecordButton*>(),
                        {"UpdateRecordDurationText", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LckRecordButton::OnError()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckRecordButton*>(),
                        {"OnError", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Liv::Lck::Tablet::LckRecordButton::ResetAfterError()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckRecordButton*>(),
                        {"ResetAfterError", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LckRecordButton::OnRecordingStarted(::Liv::Lck::LckResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckRecordButton*>(),
                        {"OnRecordingStarted", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void Liv::Lck::Tablet::LckRecordButton::OnRecordingPaused(::Liv::Lck::LckResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckRecordButton*>(),
                        {"OnRecordingPaused", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void Liv::Lck::Tablet::LckRecordButton::OnRecordingResumed(::Liv::Lck::LckResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckRecordButton*>(),
                        {"OnRecordingResumed", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void Liv::Lck::Tablet::LckRecordButton::OnRecordingStopped(::Liv::Lck::LckResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckRecordButton*>(),
                        {"OnRecordingStopped", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void Liv::Lck::Tablet::LckRecordButton::OnRecordingSaved(::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckRecordButton*>(),
                        {"OnRecordingSaved", {}, {::i2c::type_of<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void Liv::Lck::Tablet::LckRecordButton::ResetButtonVisuals()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckRecordButton*>(),
                        {"ResetButtonVisuals", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LckRecordButton::EnsureLckService()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckRecordButton*>(),
                        {"EnsureLckService", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LckRecordButton::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckRecordButton*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LckRecordButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckRecordButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::Tablet::LckRecordButton* Liv::Lck::Tablet::LckRecordButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Tablet::LckRecordButton*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Tablet::LckRecordButton::LckRecordButton()   {
}
