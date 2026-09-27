#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/HandDataAsset.hpp"
#include "Oculus/Interaction/Input/zzzz__PoseOrigin_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__HandDataAsset_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandDataSourceConfig_def.hpp"
#include "Oculus/Interaction/Input/zzzz__ICopyFrom_1_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::HandDataAsset.get_IsDataValidAndConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::HandDataAsset::*)()>(&::Oculus::Interaction::Input::HandDataAsset::get_IsDataValidAndConnected)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa50d73c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandDataAsset*>(),
                        {"get_IsDataValidAndConnected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandDataAsset.CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HandDataAsset::*)(::Oculus::Interaction::Input::HandDataAsset*)>(&::Oculus::Interaction::Input::HandDataAsset::CopyFrom)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa508714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandDataAsset*>(),
                        {"CopyFrom", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandDataAsset*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandDataAsset.CopyPosesFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HandDataAsset::*)(::Oculus::Interaction::Input::HandDataAsset*)>(&::Oculus::Interaction::Input::HandDataAsset::CopyPosesFrom)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa50876c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandDataAsset*>(),
                        {"CopyPosesFrom", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandDataAsset*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandDataAsset._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HandDataAsset::*)()>(&::Oculus::Interaction::Input::HandDataAsset::_ctor)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xa505720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandDataAsset*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Oculus::Interaction::Input::HandDataAsset::__cordl_internal_get_IsDataValid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsDataValid;
}
constexpr bool const& Oculus::Interaction::Input::HandDataAsset::__cordl_internal_get_IsDataValid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsDataValid;
}
constexpr void Oculus::Interaction::Input::HandDataAsset::__cordl_internal_set_IsDataValid(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsDataValid = value;
}
constexpr bool& Oculus::Interaction::Input::HandDataAsset::__cordl_internal_get_IsConnected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsConnected;
}
constexpr bool const& Oculus::Interaction::Input::HandDataAsset::__cordl_internal_get_IsConnected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsConnected;
}
constexpr void Oculus::Interaction::Input::HandDataAsset::__cordl_internal_set_IsConnected(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsConnected = value;
}
constexpr bool& Oculus::Interaction::Input::HandDataAsset::__cordl_internal_get_IsTracked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsTracked;
}
constexpr bool const& Oculus::Interaction::Input::HandDataAsset::__cordl_internal_get_IsTracked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsTracked;
}
constexpr void Oculus::Interaction::Input::HandDataAsset::__cordl_internal_set_IsTracked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsTracked = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::Input::HandDataAsset::__cordl_internal_get_Root()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Root;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::Input::HandDataAsset::__cordl_internal_get_Root() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Root;
}
constexpr void Oculus::Interaction::Input::HandDataAsset::__cordl_internal_set_Root(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Root = value;
}
constexpr ::Oculus::Interaction::Input::PoseOrigin& Oculus::Interaction::Input::HandDataAsset::__cordl_internal_get_RootPoseOrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RootPoseOrigin;
}
constexpr ::Oculus::Interaction::Input::PoseOrigin const& Oculus::Interaction::Input::HandDataAsset::__cordl_internal_get_RootPoseOrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RootPoseOrigin;
}
constexpr void Oculus::Interaction::Input::HandDataAsset::__cordl_internal_set_RootPoseOrigin(::Oculus::Interaction::Input::PoseOrigin  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RootPoseOrigin = value;
}
constexpr ::ArrayW<::UnityEngine::Pose>& Oculus::Interaction::Input::HandDataAsset::__cordl_internal_get_JointPoses()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JointPoses;
}
constexpr ::ArrayW<::UnityEngine::Pose> const& Oculus::Interaction::Input::HandDataAsset::__cordl_internal_get_JointPoses() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JointPoses;
}
constexpr void Oculus::Interaction::Input::HandDataAsset::__cordl_internal_set_JointPoses(::ArrayW<::UnityEngine::Pose>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___JointPoses = value;
}
constexpr ::ArrayW<float_t>& Oculus::Interaction::Input::HandDataAsset::__cordl_internal_get_JointRadii()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JointRadii;
}
constexpr ::ArrayW<float_t> const& Oculus::Interaction::Input::HandDataAsset::__cordl_internal_get_JointRadii() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JointRadii;
}
constexpr void Oculus::Interaction::Input::HandDataAsset::__cordl_internal_set_JointRadii(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___JointRadii = value;
}
constexpr ::ArrayW<::UnityEngine::Quaternion>& Oculus::Interaction::Input::HandDataAsset::__cordl_internal_get_Joints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Joints;
}
constexpr ::ArrayW<::UnityEngine::Quaternion> const& Oculus::Interaction::Input::HandDataAsset::__cordl_internal_get_Joints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Joints;
}
constexpr void Oculus::Interaction::Input::HandDataAsset::__cordl_internal_set_Joints(::ArrayW<::UnityEngine::Quaternion>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Joints = value;
}
constexpr bool& Oculus::Interaction::Input::HandDataAsset::__cordl_internal_get_IsHighConfidence()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsHighConfidence;
}
constexpr bool const& Oculus::Interaction::Input::HandDataAsset::__cordl_internal_get_IsHighConfidence() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsHighConfidence;
}
constexpr void Oculus::Interaction::Input::HandDataAsset::__cordl_internal_set_IsHighConfidence(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsHighConfidence = value;
}
constexpr ::ArrayW<bool>& Oculus::Interaction::Input::HandDataAsset::__cordl_internal_get_IsFingerPinching()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsFingerPinching;
}
constexpr ::ArrayW<bool> const& Oculus::Interaction::Input::HandDataAsset::__cordl_internal_get_IsFingerPinching() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsFingerPinching;
}
constexpr void Oculus::Interaction::Input::HandDataAsset::__cordl_internal_set_IsFingerPinching(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsFingerPinching = value;
}
constexpr ::ArrayW<bool>& Oculus::Interaction::Input::HandDataAsset::__cordl_internal_get_IsFingerHighConfidence()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsFingerHighConfidence;
}
constexpr ::ArrayW<bool> const& Oculus::Interaction::Input::HandDataAsset::__cordl_internal_get_IsFingerHighConfidence() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsFingerHighConfidence;
}
constexpr void Oculus::Interaction::Input::HandDataAsset::__cordl_internal_set_IsFingerHighConfidence(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsFingerHighConfidence = value;
}
constexpr ::ArrayW<float_t>& Oculus::Interaction::Input::HandDataAsset::__cordl_internal_get_FingerPinchStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FingerPinchStrength;
}
constexpr ::ArrayW<float_t> const& Oculus::Interaction::Input::HandDataAsset::__cordl_internal_get_FingerPinchStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FingerPinchStrength;
}
constexpr void Oculus::Interaction::Input::HandDataAsset::__cordl_internal_set_FingerPinchStrength(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FingerPinchStrength = value;
}
constexpr float_t& Oculus::Interaction::Input::HandDataAsset::__cordl_internal_get_HandScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HandScale;
}
constexpr float_t const& Oculus::Interaction::Input::HandDataAsset::__cordl_internal_get_HandScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HandScale;
}
constexpr void Oculus::Interaction::Input::HandDataAsset::__cordl_internal_set_HandScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HandScale = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::Input::HandDataAsset::__cordl_internal_get_PointerPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PointerPose;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::Input::HandDataAsset::__cordl_internal_get_PointerPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PointerPose;
}
constexpr void Oculus::Interaction::Input::HandDataAsset::__cordl_internal_set_PointerPose(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PointerPose = value;
}
constexpr ::Oculus::Interaction::Input::PoseOrigin& Oculus::Interaction::Input::HandDataAsset::__cordl_internal_get_PointerPoseOrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PointerPoseOrigin;
}
constexpr ::Oculus::Interaction::Input::PoseOrigin const& Oculus::Interaction::Input::HandDataAsset::__cordl_internal_get_PointerPoseOrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PointerPoseOrigin;
}
constexpr void Oculus::Interaction::Input::HandDataAsset::__cordl_internal_set_PointerPoseOrigin(::Oculus::Interaction::Input::PoseOrigin  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PointerPoseOrigin = value;
}
constexpr bool& Oculus::Interaction::Input::HandDataAsset::__cordl_internal_get_IsDominantHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsDominantHand;
}
constexpr bool const& Oculus::Interaction::Input::HandDataAsset::__cordl_internal_get_IsDominantHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsDominantHand;
}
constexpr void Oculus::Interaction::Input::HandDataAsset::__cordl_internal_set_IsDominantHand(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsDominantHand = value;
}
constexpr ::Oculus::Interaction::Input::HandDataSourceConfig*& Oculus::Interaction::Input::HandDataAsset::__cordl_internal_get_Config()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Config;
}
constexpr ::Oculus::Interaction::Input::HandDataSourceConfig* const& Oculus::Interaction::Input::HandDataAsset::__cordl_internal_get_Config() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Config;
}
constexpr void Oculus::Interaction::Input::HandDataAsset::__cordl_internal_set_Config(::Oculus::Interaction::Input::HandDataSourceConfig*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Config = value;
}
inline bool Oculus::Interaction::Input::HandDataAsset::get_IsDataValidAndConnected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandDataAsset*>(),
                        {"get_IsDataValidAndConnected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::HandDataAsset::CopyFrom(::Oculus::Interaction::Input::HandDataAsset*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandDataAsset*>(),
                        {"CopyFrom", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandDataAsset*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline void Oculus::Interaction::Input::HandDataAsset::CopyPosesFrom(::Oculus::Interaction::Input::HandDataAsset*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandDataAsset*>(),
                        {"CopyPosesFrom", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandDataAsset*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline void Oculus::Interaction::Input::HandDataAsset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandDataAsset*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::HandDataAsset* Oculus::Interaction::Input::HandDataAsset::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::HandDataAsset*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Input::ICopyFrom_1<::Oculus::Interaction::Input::HandDataAsset*>"
constexpr  Oculus::Interaction::Input::HandDataAsset::operator ::Oculus::Interaction::Input::ICopyFrom_1<::Oculus::Interaction::Input::HandDataAsset*>*() noexcept {
return static_cast<::Oculus::Interaction::Input::ICopyFrom_1<::Oculus::Interaction::Input::HandDataAsset*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Input::ICopyFrom_1<::Oculus::Interaction::Input::HandDataAsset*>"
constexpr ::Oculus::Interaction::Input::ICopyFrom_1<::Oculus::Interaction::Input::HandDataAsset*>* Oculus::Interaction::Input::HandDataAsset::i___Oculus__Interaction__Input__ICopyFrom_1___Oculus__Interaction__Input__HandDataAsset__() noexcept {
return static_cast<::Oculus::Interaction::Input::ICopyFrom_1<::Oculus::Interaction::Input::HandDataAsset*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::HandDataAsset::HandDataAsset()   {
}
