#pragma once
// IWYU pragma private; include "Liv/Lck/Tablet/LCKSettingsButtonsController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Liv/Lck/Tablet/zzzz__LCKSettingsButtonsController_def.hpp"
#include "Liv/Lck/Tablet/zzzz__CameraMode_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/UI/zzzz__ToggleGroup_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKSettingsButtonsController.get_OnCameraModeChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::Liv::Lck::Tablet::CameraMode>* (::Liv::Lck::Tablet::LCKSettingsButtonsController::*)()>(&::Liv::Lck::Tablet::LCKSettingsButtonsController::get_OnCameraModeChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d5bc74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKSettingsButtonsController*>(),
                        {"get_OnCameraModeChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKSettingsButtonsController.set_OnCameraModeChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LCKSettingsButtonsController::*)(::System::Action_1<::Liv::Lck::Tablet::CameraMode>*)>(&::Liv::Lck::Tablet::LCKSettingsButtonsController::set_OnCameraModeChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d5bc7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKSettingsButtonsController*>(),
                        {"set_OnCameraModeChanged", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::Tablet::CameraMode>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKSettingsButtonsController.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LCKSettingsButtonsController::*)()>(&::Liv::Lck::Tablet::LCKSettingsButtonsController::Awake)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x9d5bc84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKSettingsButtonsController*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKSettingsButtonsController.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LCKSettingsButtonsController::*)()>(&::Liv::Lck::Tablet::LCKSettingsButtonsController::OnEnable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9d5bd6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKSettingsButtonsController*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKSettingsButtonsController.SwitchCameraModes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LCKSettingsButtonsController::*)(::Liv::Lck::Tablet::CameraMode)>(&::Liv::Lck::Tablet::LCKSettingsButtonsController::SwitchCameraModes)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x9d57384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKSettingsButtonsController*>(),
                        {"SwitchCameraModes", {}, {::i2c::type_of<::Liv::Lck::Tablet::CameraMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKSettingsButtonsController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LCKSettingsButtonsController::*)()>(&::Liv::Lck::Tablet::LCKSettingsButtonsController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d5bdcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKSettingsButtonsController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::Liv::Lck::Tablet::CameraMode>*& Liv::Lck::Tablet::LCKSettingsButtonsController::__cordl_internal_get__OnCameraModeChanged_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnCameraModeChanged_k__BackingField;
}
constexpr ::System::Action_1<::Liv::Lck::Tablet::CameraMode>* const& Liv::Lck::Tablet::LCKSettingsButtonsController::__cordl_internal_get__OnCameraModeChanged_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnCameraModeChanged_k__BackingField;
}
constexpr void Liv::Lck::Tablet::LCKSettingsButtonsController::__cordl_internal_set__OnCameraModeChanged_k__BackingField(::System::Action_1<::Liv::Lck::Tablet::CameraMode>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OnCameraModeChanged_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Liv::Lck::Tablet::LCKSettingsButtonsController::__cordl_internal_get__selfieSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selfieSettings;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Liv::Lck::Tablet::LCKSettingsButtonsController::__cordl_internal_get__selfieSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selfieSettings;
}
constexpr void Liv::Lck::Tablet::LCKSettingsButtonsController::__cordl_internal_set__selfieSettings(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selfieSettings = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Liv::Lck::Tablet::LCKSettingsButtonsController::__cordl_internal_get__firstPersonSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstPersonSettings;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Liv::Lck::Tablet::LCKSettingsButtonsController::__cordl_internal_get__firstPersonSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstPersonSettings;
}
constexpr void Liv::Lck::Tablet::LCKSettingsButtonsController::__cordl_internal_set__firstPersonSettings(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____firstPersonSettings = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Liv::Lck::Tablet::LCKSettingsButtonsController::__cordl_internal_get__thirdPersonSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thirdPersonSettings;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Liv::Lck::Tablet::LCKSettingsButtonsController::__cordl_internal_get__thirdPersonSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thirdPersonSettings;
}
constexpr void Liv::Lck::Tablet::LCKSettingsButtonsController::__cordl_internal_set__thirdPersonSettings(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____thirdPersonSettings = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Liv::Lck::Tablet::LCKSettingsButtonsController::__cordl_internal_get__headsetViewSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headsetViewSettings;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Liv::Lck::Tablet::LCKSettingsButtonsController::__cordl_internal_get__headsetViewSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headsetViewSettings;
}
constexpr void Liv::Lck::Tablet::LCKSettingsButtonsController::__cordl_internal_set__headsetViewSettings(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____headsetViewSettings = value;
}
constexpr ::UnityW<::UnityEngine::UI::ToggleGroup>& Liv::Lck::Tablet::LCKSettingsButtonsController::__cordl_internal_get__toggleGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toggleGroup;
}
constexpr ::UnityW<::UnityEngine::UI::ToggleGroup> const& Liv::Lck::Tablet::LCKSettingsButtonsController::__cordl_internal_get__toggleGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toggleGroup;
}
constexpr void Liv::Lck::Tablet::LCKSettingsButtonsController::__cordl_internal_set__toggleGroup(::UnityW<::UnityEngine::UI::ToggleGroup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____toggleGroup = value;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle>& Liv::Lck::Tablet::LCKSettingsButtonsController::__cordl_internal_get__selfieToggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selfieToggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& Liv::Lck::Tablet::LCKSettingsButtonsController::__cordl_internal_get__selfieToggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selfieToggle;
}
constexpr void Liv::Lck::Tablet::LCKSettingsButtonsController::__cordl_internal_set__selfieToggle(::UnityW<::UnityEngine::UI::Toggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selfieToggle = value;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle>& Liv::Lck::Tablet::LCKSettingsButtonsController::__cordl_internal_get__firstPersonToggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstPersonToggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& Liv::Lck::Tablet::LCKSettingsButtonsController::__cordl_internal_get__firstPersonToggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstPersonToggle;
}
constexpr void Liv::Lck::Tablet::LCKSettingsButtonsController::__cordl_internal_set__firstPersonToggle(::UnityW<::UnityEngine::UI::Toggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____firstPersonToggle = value;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle>& Liv::Lck::Tablet::LCKSettingsButtonsController::__cordl_internal_get__thirdPersonToggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thirdPersonToggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& Liv::Lck::Tablet::LCKSettingsButtonsController::__cordl_internal_get__thirdPersonToggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thirdPersonToggle;
}
constexpr void Liv::Lck::Tablet::LCKSettingsButtonsController::__cordl_internal_set__thirdPersonToggle(::UnityW<::UnityEngine::UI::Toggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____thirdPersonToggle = value;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle>& Liv::Lck::Tablet::LCKSettingsButtonsController::__cordl_internal_get__headsetViewToggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headsetViewToggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& Liv::Lck::Tablet::LCKSettingsButtonsController::__cordl_internal_get__headsetViewToggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headsetViewToggle;
}
constexpr void Liv::Lck::Tablet::LCKSettingsButtonsController::__cordl_internal_set__headsetViewToggle(::UnityW<::UnityEngine::UI::Toggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____headsetViewToggle = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Liv::Lck::Tablet::CameraMode,::UnityW<::UnityEngine::GameObject>>*& Liv::Lck::Tablet::LCKSettingsButtonsController::__cordl_internal_get__settingsDictionary()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settingsDictionary;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Liv::Lck::Tablet::CameraMode,::UnityW<::UnityEngine::GameObject>>* const& Liv::Lck::Tablet::LCKSettingsButtonsController::__cordl_internal_get__settingsDictionary() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settingsDictionary;
}
constexpr void Liv::Lck::Tablet::LCKSettingsButtonsController::__cordl_internal_set__settingsDictionary(::System::Collections::Generic::Dictionary_2<::Liv::Lck::Tablet::CameraMode,::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____settingsDictionary = value;
}
inline ::System::Action_1<::Liv::Lck::Tablet::CameraMode>* Liv::Lck::Tablet::LCKSettingsButtonsController::get_OnCameraModeChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKSettingsButtonsController*>(),
                        {"get_OnCameraModeChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::Liv::Lck::Tablet::CameraMode>*>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LCKSettingsButtonsController::set_OnCameraModeChanged(::System::Action_1<::Liv::Lck::Tablet::CameraMode>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKSettingsButtonsController*>(),
                        {"set_OnCameraModeChanged", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::Tablet::CameraMode>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::Tablet::LCKSettingsButtonsController::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKSettingsButtonsController*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LCKSettingsButtonsController::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKSettingsButtonsController*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LCKSettingsButtonsController::SwitchCameraModes(::Liv::Lck::Tablet::CameraMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKSettingsButtonsController*>(),
                        {"SwitchCameraModes", {}, {::i2c::type_of<::Liv::Lck::Tablet::CameraMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mode);
}
inline void Liv::Lck::Tablet::LCKSettingsButtonsController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKSettingsButtonsController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::Tablet::LCKSettingsButtonsController* Liv::Lck::Tablet::LCKSettingsButtonsController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Tablet::LCKSettingsButtonsController*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Tablet::LCKSettingsButtonsController::LCKSettingsButtonsController()   {
}
