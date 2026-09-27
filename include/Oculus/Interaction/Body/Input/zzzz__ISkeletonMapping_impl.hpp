#pragma once
// IWYU pragma private; include "Oculus/Interaction/Body/Input/ISkeletonMapping.hpp"
#include "Oculus/Interaction/Body/Input/zzzz__ISkeletonMapping_def.hpp"
#include "Oculus/Interaction/Body/Input/zzzz__BodyJointId_def.hpp"
#include "Oculus/Interaction/Collections/zzzz__IEnumerableHashSet_1_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::ISkeletonMapping.get_Joints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Collections::IEnumerableHashSet_1<::Oculus::Interaction::Body::Input::BodyJointId>* (::Oculus::Interaction::Body::Input::ISkeletonMapping::*)()>(&::Oculus::Interaction::Body::Input::ISkeletonMapping::get_Joints)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Body::Input::ISkeletonMapping*>(),
                    {::i2c::class_of<::Oculus::Interaction::Body::Input::ISkeletonMapping*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::ISkeletonMapping.TryGetParentJointId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Body::Input::ISkeletonMapping::*)(::Oculus::Interaction::Body::Input::BodyJointId, ::by_ref<::Oculus::Interaction::Body::Input::BodyJointId>)>(&::Oculus::Interaction::Body::Input::ISkeletonMapping::TryGetParentJointId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Body::Input::ISkeletonMapping*>(),
                    {::i2c::class_of<::Oculus::Interaction::Body::Input::ISkeletonMapping*>(), 1}
                ));
    return ___internal_method;
  }
};
inline ::Oculus::Interaction::Collections::IEnumerableHashSet_1<::Oculus::Interaction::Body::Input::BodyJointId>* Oculus::Interaction::Body::Input::ISkeletonMapping::get_Joints()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Body::Input::ISkeletonMapping*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Collections::IEnumerableHashSet_1<::Oculus::Interaction::Body::Input::BodyJointId>*>(this, ___internal_method);
}
inline bool Oculus::Interaction::Body::Input::ISkeletonMapping::TryGetParentJointId(::Oculus::Interaction::Body::Input::BodyJointId  jointId, ::by_ref<::Oculus::Interaction::Body::Input::BodyJointId>  parent)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Body::Input::ISkeletonMapping*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, jointId, parent);
}
