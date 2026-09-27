#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRScenePlane_GetBoundaryLengthJob.hpp"
#include "GlobalNamespace/zzzz__OVRSpace_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRScenePlane_GetBoundaryLengthJob_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRScenePlane_GetBoundaryLengthJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRScenePlane_GetBoundaryLengthJob::*)()>(&::GlobalNamespace::OVRScenePlane_GetBoundaryLengthJob::Execute)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa638f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlane_GetBoundaryLengthJob>(),
                        {"Execute", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRScenePlane_GetBoundaryLengthJob::Execute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlane_GetBoundaryLengthJob>(),
                        {"Execute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr  GlobalNamespace::OVRScenePlane_GetBoundaryLengthJob::operator ::Unity::Jobs::IJob*()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* GlobalNamespace::OVRScenePlane_GetBoundaryLengthJob::i___Unity__Jobs__IJob()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Space", ty: "::GlobalNamespace::OVRSpace", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Length", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRScenePlane_GetBoundaryLengthJob::OVRScenePlane_GetBoundaryLengthJob(::GlobalNamespace::OVRSpace  Space, ::Unity::Collections::NativeArray_1<int32_t>  Length) noexcept  {
this->Space = Space;
this->Length = Length;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRScenePlane_GetBoundaryLengthJob::OVRScenePlane_GetBoundaryLengthJob()   {
}
