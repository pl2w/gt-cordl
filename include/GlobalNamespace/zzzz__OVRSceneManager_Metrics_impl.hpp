#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSceneManager_Metrics.hpp"
#include "GlobalNamespace/zzzz__OVRSceneManager_Metrics_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRSceneManager_Metrics.op_Addition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRSceneManager_Metrics (*)(::GlobalNamespace::OVRSceneManager_Metrics, ::GlobalNamespace::OVRSceneManager_Metrics)>(&::GlobalNamespace::OVRSceneManager_Metrics::op_Addition)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa632f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager_Metrics>(),
                        {"op_Addition", {}, {::i2c::type_of<::GlobalNamespace::OVRSceneManager_Metrics>(), ::i2c::type_of<::GlobalNamespace::OVRSceneManager_Metrics>()}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::OVRSceneManager_Metrics GlobalNamespace::OVRSceneManager_Metrics::op_Addition(::GlobalNamespace::OVRSceneManager_Metrics  lhs, ::GlobalNamespace::OVRSceneManager_Metrics  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneManager_Metrics>(),
                        {"op_Addition", {}, {::i2c::type_of<::GlobalNamespace::OVRSceneManager_Metrics>(), ::i2c::type_of<::GlobalNamespace::OVRSceneManager_Metrics>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSceneManager_Metrics>(nullptr, ___internal_method, lhs, rhs);
}
// Ctor Parameters [CppParam { name: "TotalRoomCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CandidateRoomCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Loaded", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Failed", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SkippedUserNotInRoom", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SkippedAlreadyInstantiated", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRSceneManager_Metrics::OVRSceneManager_Metrics(int32_t  TotalRoomCount, int32_t  CandidateRoomCount, int32_t  Loaded, int32_t  Failed, int32_t  SkippedUserNotInRoom, int32_t  SkippedAlreadyInstantiated) noexcept  {
this->TotalRoomCount = TotalRoomCount;
this->CandidateRoomCount = CandidateRoomCount;
this->Loaded = Loaded;
this->Failed = Failed;
this->SkippedUserNotInRoom = SkippedUserNotInRoom;
this->SkippedAlreadyInstantiated = SkippedAlreadyInstantiated;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSceneManager_Metrics::OVRSceneManager_Metrics()   {
}
