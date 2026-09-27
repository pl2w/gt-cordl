#pragma once
// IWYU pragma private; include "UnityEngine/SpatialTracking/TrackedPoseDriverDataDescription.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/SpatialTracking/zzzz__TrackedPoseDriverDataDescription_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/SpatialTracking/zzzz__TrackedPoseDriverDataDescription_PoseData_def.hpp"
//  Writing Method size for method: ::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription::*)()>(&::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb6aca48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription::setStaticF_DeviceData(::System::Collections::Generic::List_1<::GlobalNamespace::TrackedPoseDriverDataDescription_PoseData>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::TrackedPoseDriverDataDescription_PoseData>*, "DeviceData", ::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription*>(std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::TrackedPoseDriverDataDescription_PoseData>*>(value));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::TrackedPoseDriverDataDescription_PoseData>* UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription::getStaticF_DeviceData()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::TrackedPoseDriverDataDescription_PoseData>*, "DeviceData", ::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription*>();
}
inline void UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription* UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription::TrackedPoseDriverDataDescription()   {
}
