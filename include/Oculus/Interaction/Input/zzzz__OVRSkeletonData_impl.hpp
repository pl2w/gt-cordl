#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/OVRSkeletonData.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Skeleton2_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__OVRSkeletonData_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::OVRSkeletonData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::OVRSkeletonData::*)()>(&::Oculus::Interaction::Input::OVRSkeletonData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa41fecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRSkeletonData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Input::OVRSkeletonData::setStaticF_LeftSkeleton(::GlobalNamespace::OVRPlugin_Skeleton2  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::OVRPlugin_Skeleton2, "LeftSkeleton", ::Oculus::Interaction::Input::OVRSkeletonData*>(std::forward<::GlobalNamespace::OVRPlugin_Skeleton2>(value));
}
inline ::GlobalNamespace::OVRPlugin_Skeleton2 Oculus::Interaction::Input::OVRSkeletonData::getStaticF_LeftSkeleton()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::OVRPlugin_Skeleton2, "LeftSkeleton", ::Oculus::Interaction::Input::OVRSkeletonData*>();
}
inline void Oculus::Interaction::Input::OVRSkeletonData::setStaticF_RightSkeleton(::GlobalNamespace::OVRPlugin_Skeleton2  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::OVRPlugin_Skeleton2, "RightSkeleton", ::Oculus::Interaction::Input::OVRSkeletonData*>(std::forward<::GlobalNamespace::OVRPlugin_Skeleton2>(value));
}
inline ::GlobalNamespace::OVRPlugin_Skeleton2 Oculus::Interaction::Input::OVRSkeletonData::getStaticF_RightSkeleton()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::OVRPlugin_Skeleton2, "RightSkeleton", ::Oculus::Interaction::Input::OVRSkeletonData*>();
}
inline void Oculus::Interaction::Input::OVRSkeletonData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRSkeletonData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::OVRSkeletonData* Oculus::Interaction::Input::OVRSkeletonData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::OVRSkeletonData*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::OVRSkeletonData::OVRSkeletonData()   {
}
