#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/Compatibility/OVR/IReadOnlyHandSkeleton.hpp"
#include "Oculus/Interaction/Input/Compatibility/OVR/zzzz__IReadOnlyHandSkeleton_def.hpp"
#include "Oculus/Interaction/Input/Compatibility/OVR/zzzz__IReadOnlyHandSkeletonJointList_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::Compatibility::OVR::IReadOnlyHandSkeleton.get_Joints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::Compatibility::OVR::IReadOnlyHandSkeletonJointList* (::Oculus::Interaction::Input::Compatibility::OVR::IReadOnlyHandSkeleton::*)()>(&::Oculus::Interaction::Input::Compatibility::OVR::IReadOnlyHandSkeleton::get_Joints)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::Compatibility::OVR::IReadOnlyHandSkeleton*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::Compatibility::OVR::IReadOnlyHandSkeleton*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::Oculus::Interaction::Input::Compatibility::OVR::IReadOnlyHandSkeletonJointList* Oculus::Interaction::Input::Compatibility::OVR::IReadOnlyHandSkeleton::get_Joints()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::Compatibility::OVR::IReadOnlyHandSkeleton*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::Compatibility::OVR::IReadOnlyHandSkeletonJointList*>(this, ___internal_method);
}
