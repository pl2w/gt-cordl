#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/IHandSkeletonProvider.hpp"
#include "Oculus/Interaction/Input/zzzz__IHandSkeletonProvider_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandSkeleton_def.hpp"
#include "Oculus/Interaction/Input/zzzz__Handedness_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::IHandSkeletonProvider.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::HandSkeleton* (::Oculus::Interaction::Input::IHandSkeletonProvider::*)(::Oculus::Interaction::Input::Handedness)>(&::Oculus::Interaction::Input::IHandSkeletonProvider::get_Item)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::IHandSkeletonProvider*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::IHandSkeletonProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::Oculus::Interaction::Input::HandSkeleton* Oculus::Interaction::Input::IHandSkeletonProvider::get_Item(::Oculus::Interaction::Input::Handedness  handedness)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::IHandSkeletonProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::HandSkeleton*>(this, ___internal_method, handedness);
}
