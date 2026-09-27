#pragma once
// IWYU pragma private; include "GlobalNamespace/DayNightCycle_LerpBakedLightingJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__DayNightCycle_LerpBakedLightingJob_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DayNightCycle_LerpBakedLightingJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DayNightCycle_LerpBakedLightingJob::*)()>(&::GlobalNamespace::DayNightCycle_LerpBakedLightingJob::Execute)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5995f44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DayNightCycle_LerpBakedLightingJob>(),
                        {"Execute", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DayNightCycle_LerpBakedLightingJob::Execute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DayNightCycle_LerpBakedLightingJob>(),
                        {"Execute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr  GlobalNamespace::DayNightCycle_LerpBakedLightingJob::operator ::Unity::Jobs::IJob*()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* GlobalNamespace::DayNightCycle_LerpBakedLightingJob::i___Unity__Jobs__IJob()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "fromPixels", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Color>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "toPixels", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Color>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "mixedPixels", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Color>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lerpValue", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DayNightCycle_LerpBakedLightingJob::DayNightCycle_LerpBakedLightingJob(::Unity::Collections::NativeArray_1<::UnityEngine::Color>  fromPixels, ::Unity::Collections::NativeArray_1<::UnityEngine::Color>  toPixels, ::Unity::Collections::NativeArray_1<::UnityEngine::Color>  mixedPixels, float_t  lerpValue) noexcept  {
this->fromPixels = fromPixels;
this->toPixels = toPixels;
this->mixedPixels = mixedPixels;
this->lerpValue = lerpValue;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DayNightCycle_LerpBakedLightingJob::DayNightCycle_LerpBakedLightingJob()   {
}
