#pragma once
// IWYU pragma private; include "BoingKit/BoingWorkAsynchronous_BehaviorJob.hpp"
#include "BoingKit/zzzz__BoingWork_Output_impl.hpp"
#include "BoingKit/zzzz__BoingWork_Params_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "BoingKit/zzzz__BoingWorkAsynchronous_BehaviorJob_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BoingWorkAsynchronous_BehaviorJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BoingWorkAsynchronous_BehaviorJob::*)(int32_t)>(&::GlobalNamespace::BoingWorkAsynchronous_BehaviorJob::Execute)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5e2854c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoingWorkAsynchronous_BehaviorJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BoingWorkAsynchronous_BehaviorJob::Execute(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoingWorkAsynchronous_BehaviorJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr  GlobalNamespace::BoingWorkAsynchronous_BehaviorJob::operator ::Unity::Jobs::IJobParallelFor*()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* GlobalNamespace::BoingWorkAsynchronous_BehaviorJob::i___Unity__Jobs__IJobParallelFor()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Params", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingWork_Params>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Output", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingWork_Output>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DeltaTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "FixedDeltaTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BoingWorkAsynchronous_BehaviorJob::BoingWorkAsynchronous_BehaviorJob(::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingWork_Params>  Params, ::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingWork_Output>  Output, float_t  DeltaTime, float_t  FixedDeltaTime) noexcept  {
this->Params = Params;
this->Output = Output;
this->DeltaTime = DeltaTime;
this->FixedDeltaTime = FixedDeltaTime;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BoingWorkAsynchronous_BehaviorJob::BoingWorkAsynchronous_BehaviorJob()   {
}
