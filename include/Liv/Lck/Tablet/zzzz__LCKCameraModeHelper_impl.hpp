#pragma once
// IWYU pragma private; include "Liv/Lck/Tablet/LCKCameraModeHelper.hpp"
#include "Liv/Lck/Tablet/zzzz__CameraMode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Liv/Lck/Tablet/zzzz__LCKCameraModeHelper_def.hpp"
#include "Liv/Lck/Tablet/zzzz__LCKSettingsButtonsController_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKCameraModeHelper.SetCameraMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LCKCameraModeHelper::*)(bool)>(&::Liv::Lck::Tablet::LCKCameraModeHelper::SetCameraMode)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x9d57360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraModeHelper*>(),
                        {"SetCameraMode", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKCameraModeHelper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LCKCameraModeHelper::*)()>(&::Liv::Lck::Tablet::LCKCameraModeHelper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d5759c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraModeHelper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::Lck::Tablet::CameraMode& Liv::Lck::Tablet::LCKCameraModeHelper::__cordl_internal_get__cameraMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraMode;
}
constexpr ::Liv::Lck::Tablet::CameraMode const& Liv::Lck::Tablet::LCKCameraModeHelper::__cordl_internal_get__cameraMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraMode;
}
constexpr void Liv::Lck::Tablet::LCKCameraModeHelper::__cordl_internal_set__cameraMode(::Liv::Lck::Tablet::CameraMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cameraMode = value;
}
constexpr ::UnityW<::Liv::Lck::Tablet::LCKSettingsButtonsController>& Liv::Lck::Tablet::LCKCameraModeHelper::__cordl_internal_get__settingsButtonsController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settingsButtonsController;
}
constexpr ::UnityW<::Liv::Lck::Tablet::LCKSettingsButtonsController> const& Liv::Lck::Tablet::LCKCameraModeHelper::__cordl_internal_get__settingsButtonsController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settingsButtonsController;
}
constexpr void Liv::Lck::Tablet::LCKCameraModeHelper::__cordl_internal_set__settingsButtonsController(::UnityW<::Liv::Lck::Tablet::LCKSettingsButtonsController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____settingsButtonsController = value;
}
inline void Liv::Lck::Tablet::LCKCameraModeHelper::SetCameraMode(bool  isSelected)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraModeHelper*>(),
                        {"SetCameraMode", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isSelected);
}
inline void Liv::Lck::Tablet::LCKCameraModeHelper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraModeHelper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::Tablet::LCKCameraModeHelper* Liv::Lck::Tablet::LCKCameraModeHelper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Tablet::LCKCameraModeHelper*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Tablet::LCKCameraModeHelper::LCKCameraModeHelper()   {
}
