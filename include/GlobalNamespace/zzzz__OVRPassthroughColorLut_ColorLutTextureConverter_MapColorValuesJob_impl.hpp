#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPassthroughColorLut_ColorLutTextureConverter_MapColorValuesJob.hpp"
#include "GlobalNamespace/zzzz__OVRPassthroughColorLut_ColorLutTextureConverter_TextureSettings_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPassthroughColorLut_ColorLutTextureConverter_MapColorValuesJob_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_MapColorValuesJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_MapColorValuesJob::*)(int32_t)>(&::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_MapColorValuesJob::Execute)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa67e918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_MapColorValuesJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_MapColorValuesJob::Execute(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_MapColorValuesJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr  GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_MapColorValuesJob::operator ::Unity::Jobs::IJobParallelFor*()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_MapColorValuesJob::i___Unity__Jobs__IJobParallelFor()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "settings", ty: "::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "target", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "source", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_MapColorValuesJob::ColorLutTextureConverter_OVRPassthroughColorLut_MapColorValuesJob(::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings  settings, ::Unity::Collections::NativeArray_1<uint8_t>  target, ::Unity::Collections::NativeArray_1<uint8_t>  source) noexcept  {
this->settings = settings;
this->target = target;
this->source = source;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_MapColorValuesJob::ColorLutTextureConverter_OVRPassthroughColorLut_MapColorValuesJob()   {
}
