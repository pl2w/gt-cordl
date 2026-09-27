#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/IUsage.hpp"
#include "Oculus/Interaction/Input/zzzz__IUsage_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_Controller_def.hpp"
#include "Oculus/Interaction/Input/zzzz__ControllerDataAsset_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::IUsage.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::IUsage::*)(::Oculus::Interaction::Input::ControllerDataAsset*, ::GlobalNamespace::OVRInput_Controller)>(&::Oculus::Interaction::Input::IUsage::Apply)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::IUsage*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::IUsage*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Input::IUsage::Apply(::Oculus::Interaction::Input::ControllerDataAsset*  controllerDataAsset, ::GlobalNamespace::OVRInput_Controller  controllerMask)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::IUsage*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controllerDataAsset, controllerMask);
}
