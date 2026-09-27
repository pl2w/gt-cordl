#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/ControllerDataAsset.hpp"
#include "Oculus/Interaction/Input/zzzz__ControllerInput_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__PoseOrigin_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__ControllerDataAsset_def.hpp"
#include "Oculus/Interaction/Input/zzzz__ControllerDataSourceConfig_def.hpp"
#include "Oculus/Interaction/Input/zzzz__ICopyFrom_1_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerDataAsset.CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::ControllerDataAsset::*)(::Oculus::Interaction::Input::ControllerDataAsset*)>(&::Oculus::Interaction::Input::ControllerDataAsset::CopyFrom)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa504d94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerDataAsset*>(),
                        {"CopyFrom", {}, {::i2c::type_of<::Oculus::Interaction::Input::ControllerDataAsset*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerDataAsset.CopyPosesAndStateFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::ControllerDataAsset::*)(::Oculus::Interaction::Input::ControllerDataAsset*)>(&::Oculus::Interaction::Input::ControllerDataAsset::CopyPosesAndStateFrom)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa504e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerDataAsset*>(),
                        {"CopyPosesAndStateFrom", {}, {::i2c::type_of<::Oculus::Interaction::Input::ControllerDataAsset*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ControllerDataAsset._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::ControllerDataAsset::*)()>(&::Oculus::Interaction::Input::ControllerDataAsset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa504ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerDataAsset*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Oculus::Interaction::Input::ControllerDataAsset::__cordl_internal_get_IsDataValid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsDataValid;
}
constexpr bool const& Oculus::Interaction::Input::ControllerDataAsset::__cordl_internal_get_IsDataValid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsDataValid;
}
constexpr void Oculus::Interaction::Input::ControllerDataAsset::__cordl_internal_set_IsDataValid(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsDataValid = value;
}
constexpr bool& Oculus::Interaction::Input::ControllerDataAsset::__cordl_internal_get_IsConnected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsConnected;
}
constexpr bool const& Oculus::Interaction::Input::ControllerDataAsset::__cordl_internal_get_IsConnected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsConnected;
}
constexpr void Oculus::Interaction::Input::ControllerDataAsset::__cordl_internal_set_IsConnected(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsConnected = value;
}
constexpr bool& Oculus::Interaction::Input::ControllerDataAsset::__cordl_internal_get_IsTracked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsTracked;
}
constexpr bool const& Oculus::Interaction::Input::ControllerDataAsset::__cordl_internal_get_IsTracked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsTracked;
}
constexpr void Oculus::Interaction::Input::ControllerDataAsset::__cordl_internal_set_IsTracked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsTracked = value;
}
constexpr ::Oculus::Interaction::Input::ControllerInput& Oculus::Interaction::Input::ControllerDataAsset::__cordl_internal_get_Input()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Input;
}
constexpr ::Oculus::Interaction::Input::ControllerInput const& Oculus::Interaction::Input::ControllerDataAsset::__cordl_internal_get_Input() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Input;
}
constexpr void Oculus::Interaction::Input::ControllerDataAsset::__cordl_internal_set_Input(::Oculus::Interaction::Input::ControllerInput  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Input = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::Input::ControllerDataAsset::__cordl_internal_get_RootPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RootPose;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::Input::ControllerDataAsset::__cordl_internal_get_RootPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RootPose;
}
constexpr void Oculus::Interaction::Input::ControllerDataAsset::__cordl_internal_set_RootPose(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RootPose = value;
}
constexpr ::Oculus::Interaction::Input::PoseOrigin& Oculus::Interaction::Input::ControllerDataAsset::__cordl_internal_get_RootPoseOrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RootPoseOrigin;
}
constexpr ::Oculus::Interaction::Input::PoseOrigin const& Oculus::Interaction::Input::ControllerDataAsset::__cordl_internal_get_RootPoseOrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RootPoseOrigin;
}
constexpr void Oculus::Interaction::Input::ControllerDataAsset::__cordl_internal_set_RootPoseOrigin(::Oculus::Interaction::Input::PoseOrigin  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RootPoseOrigin = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::Input::ControllerDataAsset::__cordl_internal_get_PointerPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PointerPose;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::Input::ControllerDataAsset::__cordl_internal_get_PointerPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PointerPose;
}
constexpr void Oculus::Interaction::Input::ControllerDataAsset::__cordl_internal_set_PointerPose(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PointerPose = value;
}
constexpr ::Oculus::Interaction::Input::PoseOrigin& Oculus::Interaction::Input::ControllerDataAsset::__cordl_internal_get_PointerPoseOrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PointerPoseOrigin;
}
constexpr ::Oculus::Interaction::Input::PoseOrigin const& Oculus::Interaction::Input::ControllerDataAsset::__cordl_internal_get_PointerPoseOrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PointerPoseOrigin;
}
constexpr void Oculus::Interaction::Input::ControllerDataAsset::__cordl_internal_set_PointerPoseOrigin(::Oculus::Interaction::Input::PoseOrigin  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PointerPoseOrigin = value;
}
constexpr bool& Oculus::Interaction::Input::ControllerDataAsset::__cordl_internal_get_IsDominantHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsDominantHand;
}
constexpr bool const& Oculus::Interaction::Input::ControllerDataAsset::__cordl_internal_get_IsDominantHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsDominantHand;
}
constexpr void Oculus::Interaction::Input::ControllerDataAsset::__cordl_internal_set_IsDominantHand(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsDominantHand = value;
}
constexpr ::Oculus::Interaction::Input::ControllerDataSourceConfig*& Oculus::Interaction::Input::ControllerDataAsset::__cordl_internal_get_Config()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Config;
}
constexpr ::Oculus::Interaction::Input::ControllerDataSourceConfig* const& Oculus::Interaction::Input::ControllerDataAsset::__cordl_internal_get_Config() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Config;
}
constexpr void Oculus::Interaction::Input::ControllerDataAsset::__cordl_internal_set_Config(::Oculus::Interaction::Input::ControllerDataSourceConfig*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Config = value;
}
inline void Oculus::Interaction::Input::ControllerDataAsset::CopyFrom(::Oculus::Interaction::Input::ControllerDataAsset*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerDataAsset*>(),
                        {"CopyFrom", {}, {::i2c::type_of<::Oculus::Interaction::Input::ControllerDataAsset*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline void Oculus::Interaction::Input::ControllerDataAsset::CopyPosesAndStateFrom(::Oculus::Interaction::Input::ControllerDataAsset*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerDataAsset*>(),
                        {"CopyPosesAndStateFrom", {}, {::i2c::type_of<::Oculus::Interaction::Input::ControllerDataAsset*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline void Oculus::Interaction::Input::ControllerDataAsset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::ControllerDataAsset*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::ControllerDataAsset* Oculus::Interaction::Input::ControllerDataAsset::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::ControllerDataAsset*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Input::ICopyFrom_1<::Oculus::Interaction::Input::ControllerDataAsset*>"
constexpr  Oculus::Interaction::Input::ControllerDataAsset::operator ::Oculus::Interaction::Input::ICopyFrom_1<::Oculus::Interaction::Input::ControllerDataAsset*>*() noexcept {
return static_cast<::Oculus::Interaction::Input::ICopyFrom_1<::Oculus::Interaction::Input::ControllerDataAsset*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Input::ICopyFrom_1<::Oculus::Interaction::Input::ControllerDataAsset*>"
constexpr ::Oculus::Interaction::Input::ICopyFrom_1<::Oculus::Interaction::Input::ControllerDataAsset*>* Oculus::Interaction::Input::ControllerDataAsset::i___Oculus__Interaction__Input__ICopyFrom_1___Oculus__Interaction__Input__ControllerDataAsset__() noexcept {
return static_cast<::Oculus::Interaction::Input::ICopyFrom_1<::Oculus::Interaction::Input::ControllerDataAsset*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::ControllerDataAsset::ControllerDataAsset()   {
}
