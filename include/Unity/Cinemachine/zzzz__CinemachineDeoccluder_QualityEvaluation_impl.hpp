#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineDeoccluder_QualityEvaluation.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineDeoccluder_QualityEvaluation_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CinemachineDeoccluder_QualityEvaluation.get_Default
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CinemachineDeoccluder_QualityEvaluation (*)()>(&::GlobalNamespace::CinemachineDeoccluder_QualityEvaluation::get_Default)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xae8d884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineDeoccluder_QualityEvaluation>(),
                        {"get_Default", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::CinemachineDeoccluder_QualityEvaluation GlobalNamespace::CinemachineDeoccluder_QualityEvaluation::get_Default()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineDeoccluder_QualityEvaluation>(),
                        {"get_Default", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CinemachineDeoccluder_QualityEvaluation>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Enabled", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "OptimalDistance", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NearLimit", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "FarLimit", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MaxQualityBoost", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CinemachineDeoccluder_QualityEvaluation::CinemachineDeoccluder_QualityEvaluation(bool  Enabled, float_t  OptimalDistance, float_t  NearLimit, float_t  FarLimit, float_t  MaxQualityBoost) noexcept  {
this->Enabled = Enabled;
this->OptimalDistance = OptimalDistance;
this->NearLimit = NearLimit;
this->FarLimit = FarLimit;
this->MaxQualityBoost = MaxQualityBoost;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CinemachineDeoccluder_QualityEvaluation::CinemachineDeoccluder_QualityEvaluation()   {
}
