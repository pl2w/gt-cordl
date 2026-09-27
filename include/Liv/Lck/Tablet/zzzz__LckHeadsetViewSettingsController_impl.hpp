#pragma once
// IWYU pragma private; include "Liv/Lck/Tablet/LckHeadsetViewSettingsController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Liv/Lck/Tablet/zzzz__LckHeadsetViewSettingsController_def.hpp"
#include "Liv/Lck/UI/zzzz__LckChoiceButton_def.hpp"
#include "Liv/Lck/zzzz__LckHeadsetCamera_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Tablet::LckHeadsetViewSettingsController.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckHeadsetViewSettingsController::*)()>(&::Liv::Lck::Tablet::LckHeadsetViewSettingsController::OnEnable)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x9d575a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckHeadsetViewSettingsController*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckHeadsetViewSettingsController.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckHeadsetViewSettingsController::*)()>(&::Liv::Lck::Tablet::LckHeadsetViewSettingsController::OnDisable)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x9d5779c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckHeadsetViewSettingsController*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckHeadsetViewSettingsController.OnEyeChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckHeadsetViewSettingsController::*)(int32_t)>(&::Liv::Lck::Tablet::LckHeadsetViewSettingsController::OnEyeChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9d578e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckHeadsetViewSettingsController*>(),
                        {"OnEyeChanged", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckHeadsetViewSettingsController.OnCropModeChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckHeadsetViewSettingsController::*)(int32_t)>(&::Liv::Lck::Tablet::LckHeadsetViewSettingsController::OnCropModeChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9d5797c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckHeadsetViewSettingsController*>(),
                        {"OnCropModeChanged", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckHeadsetViewSettingsController.SyncVisuals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckHeadsetViewSettingsController::*)()>(&::Liv::Lck::Tablet::LckHeadsetViewSettingsController::SyncVisuals)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x9d576e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckHeadsetViewSettingsController*>(),
                        {"SyncVisuals", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LckHeadsetViewSettingsController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LckHeadsetViewSettingsController::*)()>(&::Liv::Lck::Tablet::LckHeadsetViewSettingsController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d57a18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckHeadsetViewSettingsController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Liv::Lck::LckHeadsetCamera>& Liv::Lck::Tablet::LckHeadsetViewSettingsController::__cordl_internal_get__headsetCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headsetCamera;
}
constexpr ::UnityW<::Liv::Lck::LckHeadsetCamera> const& Liv::Lck::Tablet::LckHeadsetViewSettingsController::__cordl_internal_get__headsetCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headsetCamera;
}
constexpr void Liv::Lck::Tablet::LckHeadsetViewSettingsController::__cordl_internal_set__headsetCamera(::UnityW<::Liv::Lck::LckHeadsetCamera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____headsetCamera = value;
}
constexpr ::UnityW<::Liv::Lck::UI::LckChoiceButton>& Liv::Lck::Tablet::LckHeadsetViewSettingsController::__cordl_internal_get__eyeChoice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eyeChoice;
}
constexpr ::UnityW<::Liv::Lck::UI::LckChoiceButton> const& Liv::Lck::Tablet::LckHeadsetViewSettingsController::__cordl_internal_get__eyeChoice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eyeChoice;
}
constexpr void Liv::Lck::Tablet::LckHeadsetViewSettingsController::__cordl_internal_set__eyeChoice(::UnityW<::Liv::Lck::UI::LckChoiceButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____eyeChoice = value;
}
constexpr ::UnityW<::Liv::Lck::UI::LckChoiceButton>& Liv::Lck::Tablet::LckHeadsetViewSettingsController::__cordl_internal_get__cropModeChoice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cropModeChoice;
}
constexpr ::UnityW<::Liv::Lck::UI::LckChoiceButton> const& Liv::Lck::Tablet::LckHeadsetViewSettingsController::__cordl_internal_get__cropModeChoice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cropModeChoice;
}
constexpr void Liv::Lck::Tablet::LckHeadsetViewSettingsController::__cordl_internal_set__cropModeChoice(::UnityW<::Liv::Lck::UI::LckChoiceButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cropModeChoice = value;
}
inline void Liv::Lck::Tablet::LckHeadsetViewSettingsController::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckHeadsetViewSettingsController*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LckHeadsetViewSettingsController::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckHeadsetViewSettingsController*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LckHeadsetViewSettingsController::OnEyeChanged(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckHeadsetViewSettingsController*>(),
                        {"OnEyeChanged", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void Liv::Lck::Tablet::LckHeadsetViewSettingsController::OnCropModeChanged(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckHeadsetViewSettingsController*>(),
                        {"OnCropModeChanged", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void Liv::Lck::Tablet::LckHeadsetViewSettingsController::SyncVisuals()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckHeadsetViewSettingsController*>(),
                        {"SyncVisuals", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LckHeadsetViewSettingsController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LckHeadsetViewSettingsController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::Tablet::LckHeadsetViewSettingsController* Liv::Lck::Tablet::LckHeadsetViewSettingsController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Tablet::LckHeadsetViewSettingsController*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Tablet::LckHeadsetViewSettingsController::LckHeadsetViewSettingsController()   {
}
