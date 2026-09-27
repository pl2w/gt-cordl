#pragma once
// IWYU pragma private; include "Oculus/Interaction/IHandSphereMap.hpp"
#include "Oculus/Interaction/zzzz__IHandSphereMap_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandJointId_def.hpp"
#include "Oculus/Interaction/Input/zzzz__Handedness_def.hpp"
#include "Oculus/Interaction/zzzz__HandSphere_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::IHandSphereMap.GetSpheres
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::IHandSphereMap::*)(::Oculus::Interaction::Input::Handedness, ::Oculus::Interaction::Input::HandJointId, ::UnityEngine::Pose, float_t, ::System::Collections::Generic::List_1<::Oculus::Interaction::HandSphere>*)>(&::Oculus::Interaction::IHandSphereMap::GetSpheres)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::IHandSphereMap*>(),
                    {::i2c::class_of<::Oculus::Interaction::IHandSphereMap*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::IHandSphereMap::GetSpheres(::Oculus::Interaction::Input::Handedness  handedness, ::Oculus::Interaction::Input::HandJointId  joint, ::UnityEngine::Pose  pose, float_t  scale, ::System::Collections::Generic::List_1<::Oculus::Interaction::HandSphere>*  spheres)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::IHandSphereMap*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handedness, joint, pose, scale, spheres);
}
