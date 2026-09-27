#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/IJointDeltaProvider.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__IJointDeltaProvider_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandJointId_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__JointDeltaConfig_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::IJointDeltaProvider.GetPositionDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::PoseDetection::IJointDeltaProvider::*)(::Oculus::Interaction::Input::HandJointId, ::by_ref<::UnityEngine::Vector3>)>(&::Oculus::Interaction::PoseDetection::IJointDeltaProvider::GetPositionDelta)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::IJointDeltaProvider*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::IJointDeltaProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::IJointDeltaProvider.GetRotationDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::PoseDetection::IJointDeltaProvider::*)(::Oculus::Interaction::Input::HandJointId, ::by_ref<::UnityEngine::Quaternion>)>(&::Oculus::Interaction::PoseDetection::IJointDeltaProvider::GetRotationDelta)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::IJointDeltaProvider*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::IJointDeltaProvider*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::IJointDeltaProvider.RegisterConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::IJointDeltaProvider::*)(::Oculus::Interaction::PoseDetection::JointDeltaConfig*)>(&::Oculus::Interaction::PoseDetection::IJointDeltaProvider::RegisterConfig)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::IJointDeltaProvider*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::IJointDeltaProvider*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::IJointDeltaProvider.UnRegisterConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::IJointDeltaProvider::*)(::Oculus::Interaction::PoseDetection::JointDeltaConfig*)>(&::Oculus::Interaction::PoseDetection::IJointDeltaProvider::UnRegisterConfig)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::IJointDeltaProvider*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::IJointDeltaProvider*>(), 3}
                ));
    return ___internal_method;
  }
};
inline bool Oculus::Interaction::PoseDetection::IJointDeltaProvider::GetPositionDelta(::Oculus::Interaction::Input::HandJointId  joint, ::by_ref<::UnityEngine::Vector3>  delta)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::IJointDeltaProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, joint, delta);
}
inline bool Oculus::Interaction::PoseDetection::IJointDeltaProvider::GetRotationDelta(::Oculus::Interaction::Input::HandJointId  joint, ::by_ref<::UnityEngine::Quaternion>  delta)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::IJointDeltaProvider*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, joint, delta);
}
inline void Oculus::Interaction::PoseDetection::IJointDeltaProvider::RegisterConfig(::Oculus::Interaction::PoseDetection::JointDeltaConfig*  config)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::IJointDeltaProvider*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, config);
}
inline void Oculus::Interaction::PoseDetection::IJointDeltaProvider::UnRegisterConfig(::Oculus::Interaction::PoseDetection::JointDeltaConfig*  config)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::IJointDeltaProvider*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, config);
}
