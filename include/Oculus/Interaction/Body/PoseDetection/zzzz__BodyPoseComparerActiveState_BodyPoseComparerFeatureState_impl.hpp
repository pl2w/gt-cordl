#pragma once
// IWYU pragma private; include "Oculus/Interaction/Body/PoseDetection/BodyPoseComparerActiveState_BodyPoseComparerFeatureState.hpp"
#include "Oculus/Interaction/Body/PoseDetection/zzzz__BodyPoseComparerActiveState_BodyPoseComparerFeatureState_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BodyPoseComparerActiveState_BodyPoseComparerFeatureState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BodyPoseComparerActiveState_BodyPoseComparerFeatureState::*)(float_t, float_t)>(&::GlobalNamespace::BodyPoseComparerActiveState_BodyPoseComparerFeatureState::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f4920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyPoseComparerActiveState_BodyPoseComparerFeatureState>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BodyPoseComparerActiveState_BodyPoseComparerFeatureState::_ctor(float_t  delta, float_t  maxDelta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyPoseComparerActiveState_BodyPoseComparerFeatureState>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, delta, maxDelta);
}
// Ctor Parameters [CppParam { name: "Delta", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MaxDelta", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BodyPoseComparerActiveState_BodyPoseComparerFeatureState::BodyPoseComparerActiveState_BodyPoseComparerFeatureState(float_t  Delta, float_t  MaxDelta) noexcept  {
this->Delta = Delta;
this->MaxDelta = MaxDelta;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BodyPoseComparerActiveState_BodyPoseComparerFeatureState::BodyPoseComparerActiveState_BodyPoseComparerFeatureState()   {
}
