#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/XRSimulatedHMD.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRHMD_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__XRSimulatedHMD_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMD.ExecuteCommand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMD::*)(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMD::ExecuteCommand)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb4c8070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMD*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMD*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMD._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMD::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMD::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c8100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMD*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int64_t UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMD::ExecuteCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand*  commandPtr)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMD*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, commandPtr);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMD::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMD*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMD* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMD::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMD*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMD::XRSimulatedHMD()   {
}
