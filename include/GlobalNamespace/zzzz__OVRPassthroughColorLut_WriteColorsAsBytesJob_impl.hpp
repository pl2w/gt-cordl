#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPassthroughColorLut_WriteColorsAsBytesJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPassthroughColorLut_WriteColorsAsBytesJob_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughColorLut_WriteColorsAsBytesJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughColorLut_WriteColorsAsBytesJob::*)(int32_t)>(&::GlobalNamespace::OVRPassthroughColorLut_WriteColorsAsBytesJob::Execute)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa67e5d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut_WriteColorsAsBytesJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRPassthroughColorLut_WriteColorsAsBytesJob::Execute(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPassthroughColorLut_WriteColorsAsBytesJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr  GlobalNamespace::OVRPassthroughColorLut_WriteColorsAsBytesJob::operator ::Unity::Jobs::IJobParallelFor*()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* GlobalNamespace::OVRPassthroughColorLut_WriteColorsAsBytesJob::i___Unity__Jobs__IJobParallelFor()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "target", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "source", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Color>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "channelCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPassthroughColorLut_WriteColorsAsBytesJob::OVRPassthroughColorLut_WriteColorsAsBytesJob(::Unity::Collections::NativeArray_1<uint8_t>  target, ::Unity::Collections::NativeArray_1<::UnityEngine::Color>  source, int32_t  channelCount) noexcept  {
this->target = target;
this->source = source;
this->channelCount = channelCount;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPassthroughColorLut_WriteColorsAsBytesJob::OVRPassthroughColorLut_WriteColorsAsBytesJob()   {
}
