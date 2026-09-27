#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/IControllerDataModifier.hpp"
#include "Oculus/Interaction/Input/zzzz__IControllerDataModifier_def.hpp"
#include "Oculus/Interaction/Input/zzzz__ControllerDataAsset_def.hpp"
#include "Oculus/Interaction/Input/zzzz__Handedness_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::IControllerDataModifier.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::IControllerDataModifier::*)(::Oculus::Interaction::Input::ControllerDataAsset*, ::Oculus::Interaction::Input::Handedness)>(&::Oculus::Interaction::Input::IControllerDataModifier::Apply)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::IControllerDataModifier*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::IControllerDataModifier*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Input::IControllerDataModifier::Apply(::Oculus::Interaction::Input::ControllerDataAsset*  controllerDataAsset, ::Oculus::Interaction::Input::Handedness  handedness)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::IControllerDataModifier*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controllerDataAsset, handedness);
}
