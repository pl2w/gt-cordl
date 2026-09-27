#pragma once
// IWYU pragma private; include "Unity/Cinemachine/ICameraOverrideStack.hpp"
#include "Unity/Cinemachine/zzzz__ICameraOverrideStack_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineCamera_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::ICameraOverrideStack.SetCameraOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Cinemachine::ICameraOverrideStack::*)(int32_t, int32_t, ::Unity::Cinemachine::ICinemachineCamera*, ::Unity::Cinemachine::ICinemachineCamera*, float_t, float_t)>(&::Unity::Cinemachine::ICameraOverrideStack::SetCameraOverride)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::ICameraOverrideStack*>(),
                    {::i2c::class_of<::Unity::Cinemachine::ICameraOverrideStack*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ICameraOverrideStack.ReleaseCameraOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ICameraOverrideStack::*)(int32_t)>(&::Unity::Cinemachine::ICameraOverrideStack::ReleaseCameraOverride)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::ICameraOverrideStack*>(),
                    {::i2c::class_of<::Unity::Cinemachine::ICameraOverrideStack*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ICameraOverrideStack.get_DefaultWorldUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::ICameraOverrideStack::*)()>(&::Unity::Cinemachine::ICameraOverrideStack::get_DefaultWorldUp)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::ICameraOverrideStack*>(),
                    {::i2c::class_of<::Unity::Cinemachine::ICameraOverrideStack*>(), 2}
                ));
    return ___internal_method;
  }
};
inline int32_t Unity::Cinemachine::ICameraOverrideStack::SetCameraOverride(int32_t  overrideId, int32_t  priority, ::Unity::Cinemachine::ICinemachineCamera*  camA, ::Unity::Cinemachine::ICinemachineCamera*  camB, float_t  weightB, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::ICameraOverrideStack*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, overrideId, priority, camA, camB, weightB, deltaTime);
}
inline void Unity::Cinemachine::ICameraOverrideStack::ReleaseCameraOverride(int32_t  overrideId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::ICameraOverrideStack*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, overrideId);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::ICameraOverrideStack::get_DefaultWorldUp()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::ICameraOverrideStack*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
