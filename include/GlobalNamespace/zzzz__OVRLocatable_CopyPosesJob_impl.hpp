#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRLocatable_CopyPosesJob.hpp"
#include "GlobalNamespace/zzzz__OVRLocatable_TrackingSpacePose_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRLocatable_CopyPosesJob_def.hpp"
#include "Unity/Jobs/zzzz__IJobFor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable_CopyPosesJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRLocatable_CopyPosesJob::*)(int32_t)>(&::GlobalNamespace::OVRLocatable_CopyPosesJob::Execute)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa5768d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable_CopyPosesJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRLocatable_CopyPosesJob::Execute(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable_CopyPosesJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr  GlobalNamespace::OVRLocatable_CopyPosesJob::operator ::Unity::Jobs::IJobFor*()  {
return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* GlobalNamespace::OVRLocatable_CopyPosesJob::i___Unity__Jobs__IJobFor()  {
return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "PosesIn", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PosesOut", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRLocatable_CopyPosesJob::OVRLocatable_CopyPosesJob(::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose>  PosesIn, ::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose>  PosesOut) noexcept  {
this->PosesIn = PosesIn;
this->PosesOut = PosesOut;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRLocatable_CopyPosesJob::OVRLocatable_CopyPosesJob()   {
}
