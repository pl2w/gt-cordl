#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRMeshJobs.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRMeshJobs_def.hpp"
#include "GlobalNamespace/zzzz__OVRMeshJobs_NativeArrayHelper_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRMeshJobs_TransformToUnitySpaceJob_def.hpp"
#include "GlobalNamespace/zzzz__OVRMeshJobs_TransformTrianglesJob_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRMeshJobs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMeshJobs::*)()>(&::GlobalNamespace::OVRMeshJobs::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa667cf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMeshJobs*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRMeshJobs::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMeshJobs*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRMeshJobs* GlobalNamespace::OVRMeshJobs::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRMeshJobs*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRMeshJobs::OVRMeshJobs()   {
}
