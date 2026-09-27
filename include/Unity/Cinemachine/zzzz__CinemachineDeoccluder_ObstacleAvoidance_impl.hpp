#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineDeoccluder_ObstacleAvoidance.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineDeoccluder_ObstacleAvoidance_FollowTargetSettings_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineDeoccluder_ObstacleAvoidance_ResolutionStrategy_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineDeoccluder_ObstacleAvoidance_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineDeoccluder_ObstacleAvoidance_FollowTargetSettings_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineDeoccluder_ObstacleAvoidance_ResolutionStrategy_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CinemachineDeoccluder_ObstacleAvoidance.get_Default
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CinemachineDeoccluder_ObstacleAvoidance (*)()>(&::GlobalNamespace::CinemachineDeoccluder_ObstacleAvoidance::get_Default)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xae8d848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineDeoccluder_ObstacleAvoidance>(),
                        {"get_Default", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::CinemachineDeoccluder_ObstacleAvoidance GlobalNamespace::CinemachineDeoccluder_ObstacleAvoidance::get_Default()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineDeoccluder_ObstacleAvoidance>(),
                        {"get_Default", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CinemachineDeoccluder_ObstacleAvoidance>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Enabled", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DistanceLimit", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MinimumOcclusionTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CameraRadius", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "UseFollowTarget", ty: "::GlobalNamespace::ObstacleAvoidance_CinemachineDeoccluder_FollowTargetSettings", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Strategy", ty: "::GlobalNamespace::ObstacleAvoidance_CinemachineDeoccluder_ResolutionStrategy", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MaximumEffort", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SmoothingTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Damping", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DampingWhenOccluded", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CinemachineDeoccluder_ObstacleAvoidance::CinemachineDeoccluder_ObstacleAvoidance(bool  Enabled, float_t  DistanceLimit, float_t  MinimumOcclusionTime, float_t  CameraRadius, ::GlobalNamespace::ObstacleAvoidance_CinemachineDeoccluder_FollowTargetSettings  UseFollowTarget, ::GlobalNamespace::ObstacleAvoidance_CinemachineDeoccluder_ResolutionStrategy  Strategy, int32_t  MaximumEffort, float_t  SmoothingTime, float_t  Damping, float_t  DampingWhenOccluded) noexcept  {
this->Enabled = Enabled;
this->DistanceLimit = DistanceLimit;
this->MinimumOcclusionTime = MinimumOcclusionTime;
this->CameraRadius = CameraRadius;
this->UseFollowTarget = UseFollowTarget;
this->Strategy = Strategy;
this->MaximumEffort = MaximumEffort;
this->SmoothingTime = SmoothingTime;
this->Damping = Damping;
this->DampingWhenOccluded = DampingWhenOccluded;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CinemachineDeoccluder_ObstacleAvoidance::CinemachineDeoccluder_ObstacleAvoidance()   {
}
