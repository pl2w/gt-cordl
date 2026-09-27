#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/IReadOnlyHandSkeletonJointList.hpp"
#include "Oculus/Interaction/Input/zzzz__IReadOnlyHandSkeletonJointList_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandSkeletonJoint_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::IReadOnlyHandSkeletonJointList.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Oculus::Interaction::Input::HandSkeletonJoint> (::Oculus::Interaction::Input::IReadOnlyHandSkeletonJointList::*)(int32_t)>(&::Oculus::Interaction::Input::IReadOnlyHandSkeletonJointList::get_Item)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::IReadOnlyHandSkeletonJointList*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::IReadOnlyHandSkeletonJointList*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::by_ref<::Oculus::Interaction::Input::HandSkeletonJoint> Oculus::Interaction::Input::IReadOnlyHandSkeletonJointList::get_Item(int32_t  jointId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::IReadOnlyHandSkeletonJointList*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Oculus::Interaction::Input::HandSkeletonJoint>>(this, ___internal_method, jointId);
}
