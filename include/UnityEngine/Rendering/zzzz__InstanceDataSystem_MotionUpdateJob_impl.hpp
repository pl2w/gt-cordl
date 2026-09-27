#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceDataSystem_MotionUpdateJob.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeAtomicCounter32_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CPUInstanceData_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceDataSystem_MotionUpdateJob_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InstanceDataSystem_MotionUpdateJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InstanceDataSystem_MotionUpdateJob::*)(int32_t)>(&::GlobalNamespace::InstanceDataSystem_MotionUpdateJob::Execute)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xb206830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InstanceDataSystem_MotionUpdateJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::InstanceDataSystem_MotionUpdateJob::Execute(int32_t  chunk_index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InstanceDataSystem_MotionUpdateJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, chunk_index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr  GlobalNamespace::InstanceDataSystem_MotionUpdateJob::operator ::Unity::Jobs::IJobParallelFor*()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* GlobalNamespace::InstanceDataSystem_MotionUpdateJob::i___Unity__Jobs__IJobParallelFor()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "queueWriteBase", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "instanceData", ty: "::UnityEngine::Rendering::CPUInstanceData", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "atomicUpdateQueueCount", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "transformUpdateInstanceQueue", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InstanceDataSystem_MotionUpdateJob::InstanceDataSystem_MotionUpdateJob(int32_t  queueWriteBase, ::UnityEngine::Rendering::CPUInstanceData  instanceData, ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32  atomicUpdateQueueCount, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>  transformUpdateInstanceQueue) noexcept  {
this->queueWriteBase = queueWriteBase;
this->instanceData = instanceData;
this->atomicUpdateQueueCount = atomicUpdateQueueCount;
this->transformUpdateInstanceQueue = transformUpdateInstanceQueue;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InstanceDataSystem_MotionUpdateJob::InstanceDataSystem_MotionUpdateJob()   {
}
