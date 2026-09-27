#pragma once
// IWYU pragma private; include "UnityEngine/LightProbesQuery_LightProbesQueryDisposeJob.hpp"
#include "UnityEngine/zzzz__LightProbesQuery_LightProbesQueryDispose_impl.hpp"
#include "UnityEngine/zzzz__LightProbesQuery_LightProbesQueryDisposeJob_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightProbesQuery_LightProbesQueryDisposeJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightProbesQuery_LightProbesQueryDisposeJob::*)()>(&::GlobalNamespace::LightProbesQuery_LightProbesQueryDisposeJob::Execute)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb57ba14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightProbesQuery_LightProbesQueryDisposeJob>(),
                        {"Execute", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LightProbesQuery_LightProbesQueryDisposeJob::Execute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightProbesQuery_LightProbesQueryDisposeJob>(),
                        {"Execute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr  GlobalNamespace::LightProbesQuery_LightProbesQueryDisposeJob::operator ::Unity::Jobs::IJob*()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* GlobalNamespace::LightProbesQuery_LightProbesQueryDisposeJob::i___Unity__Jobs__IJob()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Data", ty: "::GlobalNamespace::LightProbesQuery_LightProbesQueryDispose", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LightProbesQuery_LightProbesQueryDisposeJob::LightProbesQuery_LightProbesQueryDisposeJob(::GlobalNamespace::LightProbesQuery_LightProbesQueryDispose  Data) noexcept  {
this->Data = Data;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightProbesQuery_LightProbesQueryDisposeJob::LightProbesQuery_LightProbesQueryDisposeJob()   {
}
