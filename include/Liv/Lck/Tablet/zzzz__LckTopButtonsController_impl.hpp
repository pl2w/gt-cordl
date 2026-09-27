#pragma once
// IWYU pragma private; include "Liv/Lck/Tablet/LckTopButtonsController.hpp"
#include "Liv/Lck/Tablet/zzzz__LckTopButtonsController_TopButtonPage_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Liv/Lck/Tablet/zzzz__LckTopButtonsController_def.hpp"
#include "Liv/Lck/Tablet/zzzz__ILckTopButtons_def.hpp"
#include "Liv/Lck/Tablet/zzzz__LckNotificationController_def.hpp"
#include "Liv/Lck/Tablet/zzzz__LckTopButtonsController_TopButtonPage_def.hpp"
#include "Liv/Lck/Tablet/zzzz__LckTopButtonsController_def.hpp"
#include "Liv/Lck/UI/zzzz__LckPhotoModeController_def.hpp"
#include "Liv/Lck/zzzz__ILckService_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Tablet::LckTopButtonsController.get_CurrentPage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LckTopButtonsController_TopButtonPage (::Liv::Lck::Tablet::LckTopButtonsController::*)()>(&::Liv::Lck::Tablet::LckTopButtonsController::get_CurrentPage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d5dbbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckTopButtonsController*>(),
                        {"get_CurrentPage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckTopButtonsController.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckTopButtonsController::*)()>(&::Liv::Lck::Tablet::LckTopButtonsController::Start)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x9d5dbc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckTopButtonsController*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckTopButtonsController.OnApplicationFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckTopButtonsController::*)(bool)>(&::Liv::Lck::Tablet::LckTopButtonsController::OnApplicationFocus)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9d5e06c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckTopButtonsController*>(),
                        {"OnApplicationFocus", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckTopButtonsController.ResetAfterApplicationFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Liv::Lck::Tablet::LckTopButtonsController::*)()>(&::Liv::Lck::Tablet::LckTopButtonsController::ResetAfterApplicationFocus)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9d5e094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckTopButtonsController*>(),
                        {"ResetAfterApplicationFocus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckTopButtonsController.SetTopButtonsIsDisabledState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckTopButtonsController::*)(bool)>(&::Liv::Lck::Tablet::LckTopButtonsController::SetTopButtonsIsDisabledState)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x9d55cb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckTopButtonsController*>(),
                        {"SetTopButtonsIsDisabledState", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckTopButtonsController.ToggleCameraPage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckTopButtonsController::*)(bool)>(&::Liv::Lck::Tablet::LckTopButtonsController::ToggleCameraPage)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x9d5dcc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckTopButtonsController*>(),
                        {"ToggleCameraPage", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckTopButtonsController.ToggleStreamPage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckTopButtonsController::*)(bool)>(&::Liv::Lck::Tablet::LckTopButtonsController::ToggleStreamPage)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x9d5e278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckTopButtonsController*>(),
                        {"ToggleStreamPage", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckTopButtonsController.ToggleEchoPage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckTopButtonsController::*)(bool)>(&::Liv::Lck::Tablet::LckTopButtonsController::ToggleEchoPage)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x9d5e610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckTopButtonsController*>(),
                        {"ToggleEchoPage", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckTopButtonsController.DisableEchoIfActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckTopButtonsController::*)()>(&::Liv::Lck::Tablet::LckTopButtonsController::DisableEchoIfActive)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x9d5e128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckTopButtonsController*>(),
                        {"DisableEchoIfActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckTopButtonsController.SetCameraPageVisualsManually
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckTopButtonsController::*)()>(&::Liv::Lck::Tablet::LckTopButtonsController::SetCameraPageVisualsManually)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9d5eac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckTopButtonsController*>(),
                        {"SetCameraPageVisualsManually", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckTopButtonsController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckTopButtonsController::*)()>(&::Liv::Lck::Tablet::LckTopButtonsController::_ctor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x9d5eb64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckTopButtonsController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::Lck::ILckService*& Liv::Lck::Tablet::LckTopButtonsController::__cordl_internal_get__lckService()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckService;
}
constexpr ::Liv::Lck::ILckService* const& Liv::Lck::Tablet::LckTopButtonsController::__cordl_internal_get__lckService() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckService;
}
constexpr void Liv::Lck::Tablet::LckTopButtonsController::__cordl_internal_set__lckService(::Liv::Lck::ILckService*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lckService = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Liv::Lck::Tablet::LckTopButtonsController::__cordl_internal_get__topButtonsControllerGameObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____topButtonsControllerGameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Liv::Lck::Tablet::LckTopButtonsController::__cordl_internal_get__topButtonsControllerGameObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____topButtonsControllerGameObject;
}
constexpr void Liv::Lck::Tablet::LckTopButtonsController::__cordl_internal_set__topButtonsControllerGameObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____topButtonsControllerGameObject = value;
}
constexpr ::UnityW<::Liv::Lck::Tablet::LckNotificationController>& Liv::Lck::Tablet::LckTopButtonsController::__cordl_internal_get__notificationController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____notificationController;
}
constexpr ::UnityW<::Liv::Lck::Tablet::LckNotificationController> const& Liv::Lck::Tablet::LckTopButtonsController::__cordl_internal_get__notificationController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____notificationController;
}
constexpr void Liv::Lck::Tablet::LckTopButtonsController::__cordl_internal_set__notificationController(::UnityW<::Liv::Lck::Tablet::LckNotificationController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____notificationController = value;
}
constexpr ::UnityW<::Liv::Lck::UI::LckPhotoModeController>& Liv::Lck::Tablet::LckTopButtonsController::__cordl_internal_get__photoModeController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____photoModeController;
}
constexpr ::UnityW<::Liv::Lck::UI::LckPhotoModeController> const& Liv::Lck::Tablet::LckTopButtonsController::__cordl_internal_get__photoModeController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____photoModeController;
}
constexpr void Liv::Lck::Tablet::LckTopButtonsController::__cordl_internal_set__photoModeController(::UnityW<::Liv::Lck::UI::LckPhotoModeController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____photoModeController = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& Liv::Lck::Tablet::LckTopButtonsController::__cordl_internal_get__cameraPageButtons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraPageButtons;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& Liv::Lck::Tablet::LckTopButtonsController::__cordl_internal_get__cameraPageButtons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraPageButtons;
}
constexpr void Liv::Lck::Tablet::LckTopButtonsController::__cordl_internal_set__cameraPageButtons(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cameraPageButtons = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& Liv::Lck::Tablet::LckTopButtonsController::__cordl_internal_get__streamPageButtons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____streamPageButtons;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& Liv::Lck::Tablet::LckTopButtonsController::__cordl_internal_get__streamPageButtons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____streamPageButtons;
}
constexpr void Liv::Lck::Tablet::LckTopButtonsController::__cordl_internal_set__streamPageButtons(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____streamPageButtons = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& Liv::Lck::Tablet::LckTopButtonsController::__cordl_internal_get__echoPageButtons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____echoPageButtons;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& Liv::Lck::Tablet::LckTopButtonsController::__cordl_internal_get__echoPageButtons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____echoPageButtons;
}
constexpr void Liv::Lck::Tablet::LckTopButtonsController::__cordl_internal_set__echoPageButtons(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____echoPageButtons = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Liv::Lck::Tablet::LckTopButtonsController::__cordl_internal_get__onCameraPageOpened()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onCameraPageOpened;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Liv::Lck::Tablet::LckTopButtonsController::__cordl_internal_get__onCameraPageOpened() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onCameraPageOpened;
}
constexpr void Liv::Lck::Tablet::LckTopButtonsController::__cordl_internal_set__onCameraPageOpened(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onCameraPageOpened = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Liv::Lck::Tablet::LckTopButtonsController::__cordl_internal_get__onStreamPageOpened()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onStreamPageOpened;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Liv::Lck::Tablet::LckTopButtonsController::__cordl_internal_get__onStreamPageOpened() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onStreamPageOpened;
}
constexpr void Liv::Lck::Tablet::LckTopButtonsController::__cordl_internal_set__onStreamPageOpened(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onStreamPageOpened = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Liv::Lck::Tablet::LckTopButtonsController::__cordl_internal_get__onEchoPageOpened()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onEchoPageOpened;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Liv::Lck::Tablet::LckTopButtonsController::__cordl_internal_get__onEchoPageOpened() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onEchoPageOpened;
}
constexpr void Liv::Lck::Tablet::LckTopButtonsController::__cordl_internal_set__onEchoPageOpened(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onEchoPageOpened = value;
}
constexpr ::Liv::Lck::Tablet::ILckTopButtons*& Liv::Lck::Tablet::LckTopButtonsController::__cordl_internal_get__topButtonsHelper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____topButtonsHelper;
}
constexpr ::Liv::Lck::Tablet::ILckTopButtons* const& Liv::Lck::Tablet::LckTopButtonsController::__cordl_internal_get__topButtonsHelper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____topButtonsHelper;
}
constexpr void Liv::Lck::Tablet::LckTopButtonsController::__cordl_internal_set__topButtonsHelper(::Liv::Lck::Tablet::ILckTopButtons*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____topButtonsHelper = value;
}
constexpr ::GlobalNamespace::LckTopButtonsController_TopButtonPage& Liv::Lck::Tablet::LckTopButtonsController::__cordl_internal_get__currentPage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentPage;
}
constexpr ::GlobalNamespace::LckTopButtonsController_TopButtonPage const& Liv::Lck::Tablet::LckTopButtonsController::__cordl_internal_get__currentPage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentPage;
}
constexpr void Liv::Lck::Tablet::LckTopButtonsController::__cordl_internal_set__currentPage(::GlobalNamespace::LckTopButtonsController_TopButtonPage  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentPage = value;
}
constexpr bool& Liv::Lck::Tablet::LckTopButtonsController::__cordl_internal_get__buttonsDisabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonsDisabled;
}
constexpr bool const& Liv::Lck::Tablet::LckTopButtonsController::__cordl_internal_get__buttonsDisabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonsDisabled;
}
constexpr void Liv::Lck::Tablet::LckTopButtonsController::__cordl_internal_set__buttonsDisabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buttonsDisabled = value;
}
inline ::GlobalNamespace::LckTopButtonsController_TopButtonPage Liv::Lck::Tablet::LckTopButtonsController::get_CurrentPage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckTopButtonsController*>(),
                        {"get_CurrentPage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LckTopButtonsController_TopButtonPage>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LckTopButtonsController::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckTopButtonsController*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LckTopButtonsController::OnApplicationFocus(bool  focus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckTopButtonsController*>(),
                        {"OnApplicationFocus", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, focus);
}
inline ::System::Collections::IEnumerator* Liv::Lck::Tablet::LckTopButtonsController::ResetAfterApplicationFocus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckTopButtonsController*>(),
                        {"ResetAfterApplicationFocus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LckTopButtonsController::SetTopButtonsIsDisabledState(bool  isDisabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckTopButtonsController*>(),
                        {"SetTopButtonsIsDisabledState", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isDisabled);
}
inline void Liv::Lck::Tablet::LckTopButtonsController::ToggleCameraPage(bool  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckTopButtonsController*>(),
                        {"ToggleCameraPage", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void Liv::Lck::Tablet::LckTopButtonsController::ToggleStreamPage(bool  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckTopButtonsController*>(),
                        {"ToggleStreamPage", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void Liv::Lck::Tablet::LckTopButtonsController::ToggleEchoPage(bool  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckTopButtonsController*>(),
                        {"ToggleEchoPage", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void Liv::Lck::Tablet::LckTopButtonsController::DisableEchoIfActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckTopButtonsController*>(),
                        {"DisableEchoIfActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LckTopButtonsController::SetCameraPageVisualsManually()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckTopButtonsController*>(),
                        {"SetCameraPageVisualsManually", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LckTopButtonsController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckTopButtonsController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::Tablet::LckTopButtonsController* Liv::Lck::Tablet::LckTopButtonsController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Tablet::LckTopButtonsController*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Tablet::LckTopButtonsController::LckTopButtonsController()   {
}
//  Writing Method size for method: ::Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18::*)(int32_t)>(&::Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9d5e100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18::*)()>(&::Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9d5ecb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18::*)()>(&::Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18::MoveNext)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9d5ecb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18::*)()>(&::Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d5ed48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18::*)()>(&::Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9d5ed50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18::*)()>(&::Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d5ed88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Liv::Lck::Tablet::LckTopButtonsController>& Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Liv::Lck::Tablet::LckTopButtonsController> const& Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18::__cordl_internal_set___4__this(::UnityW<::Liv::Lck::Tablet::LckTopButtonsController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18* Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18::LckTopButtonsController__ResetAfterApplicationFocus_d__18()   {
}
