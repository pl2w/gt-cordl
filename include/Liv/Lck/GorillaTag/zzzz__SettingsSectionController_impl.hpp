#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/SettingsSectionController.hpp"
#include "Liv/Lck/GorillaTag/zzzz__CameraMode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Liv/Lck/GorillaTag/zzzz__SettingsSectionController_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__CameraMode_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Liv::Lck::GorillaTag::SettingsSectionController.EvaluateMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::SettingsSectionController::*)(::Liv::Lck::GorillaTag::CameraMode)>(&::Liv::Lck::GorillaTag::SettingsSectionController::EvaluateMode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9d2c8d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::SettingsSectionController*>(),
                        {"EvaluateMode", {}, {::i2c::type_of<::Liv::Lck::GorillaTag::CameraMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::SettingsSectionController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::SettingsSectionController::*)()>(&::Liv::Lck::GorillaTag::SettingsSectionController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d31bbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::SettingsSectionController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::Lck::GorillaTag::CameraMode& Liv::Lck::GorillaTag::SettingsSectionController::__cordl_internal_get__mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mode;
}
constexpr ::Liv::Lck::GorillaTag::CameraMode const& Liv::Lck::GorillaTag::SettingsSectionController::__cordl_internal_get__mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mode;
}
constexpr void Liv::Lck::GorillaTag::SettingsSectionController::__cordl_internal_set__mode(::Liv::Lck::GorillaTag::CameraMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mode = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Liv::Lck::GorillaTag::SettingsSectionController::__cordl_internal_get__ui()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ui;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Liv::Lck::GorillaTag::SettingsSectionController::__cordl_internal_get__ui() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ui;
}
constexpr void Liv::Lck::GorillaTag::SettingsSectionController::__cordl_internal_set__ui(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ui = value;
}
inline void Liv::Lck::GorillaTag::SettingsSectionController::EvaluateMode(::Liv::Lck::GorillaTag::CameraMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::SettingsSectionController*>(),
                        {"EvaluateMode", {}, {::i2c::type_of<::Liv::Lck::GorillaTag::CameraMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mode);
}
inline void Liv::Lck::GorillaTag::SettingsSectionController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::SettingsSectionController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::GorillaTag::SettingsSectionController* Liv::Lck::GorillaTag::SettingsSectionController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::GorillaTag::SettingsSectionController*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::GorillaTag::SettingsSectionController::SettingsSectionController()   {
}
