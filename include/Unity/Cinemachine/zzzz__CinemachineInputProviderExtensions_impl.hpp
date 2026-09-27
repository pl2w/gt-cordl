#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineInputProviderExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineInputProviderExtensions_def.hpp"
#include "Unity/Cinemachine/zzzz__AxisState_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCameraBase_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineInputProviderExtensions.GetInputAxisProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::AxisState_IInputAxisProvider* (*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*)>(&::Unity::Cinemachine::CinemachineInputProviderExtensions::GetInputAxisProvider)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xaed3edc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineInputProviderExtensions*>(),
                        {"GetInputAxisProvider", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Unity::Cinemachine::AxisState_IInputAxisProvider* Unity::Cinemachine::CinemachineInputProviderExtensions::GetInputAxisProvider(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineInputProviderExtensions*>(),
                        {"GetInputAxisProvider", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::AxisState_IInputAxisProvider*>(nullptr, ___internal_method, vcam);
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineInputProviderExtensions::CinemachineInputProviderExtensions()   {
}
