#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/TransformFeatureConfig.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FeatureConfigBase_1_impl.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__TransformFeature_impl.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__TransformFeatureConfig_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureConfig._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::TransformFeatureConfig::*)()>(&::Oculus::Interaction::PoseDetection::TransformFeatureConfig::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa4a9774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureConfig*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::PoseDetection::TransformFeatureConfig::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureConfig*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::PoseDetection::TransformFeatureConfig* Oculus::Interaction::PoseDetection::TransformFeatureConfig::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::TransformFeatureConfig*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::TransformFeatureConfig::TransformFeatureConfig()   {
}
