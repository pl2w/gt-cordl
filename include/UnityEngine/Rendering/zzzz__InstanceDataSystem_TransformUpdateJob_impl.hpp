#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceDataSystem_TransformUpdateJob.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeAtomicCounter32_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Mathematics/zzzz__float4_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CPUInstanceData_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CPUSharedInstanceData_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__TransformUpdatePacket_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceDataSystem_TransformUpdateJob_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelForBatch_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InstanceDataSystem_TransformUpdateJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InstanceDataSystem_TransformUpdateJob::*)(int32_t, int32_t)>(&::GlobalNamespace::InstanceDataSystem_TransformUpdateJob::Execute)> {
  constexpr static std::size_t size = 0x5f4;
  constexpr static std::size_t addrs = 0xb205fcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InstanceDataSystem_TransformUpdateJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::InstanceDataSystem_TransformUpdateJob::Execute(int32_t  startIndex, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InstanceDataSystem_TransformUpdateJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, startIndex, count);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelForBatch"
constexpr  GlobalNamespace::InstanceDataSystem_TransformUpdateJob::operator ::Unity::Jobs::IJobParallelForBatch*()  {
return static_cast<::Unity::Jobs::IJobParallelForBatch*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelForBatch"
constexpr ::Unity::Jobs::IJobParallelForBatch* GlobalNamespace::InstanceDataSystem_TransformUpdateJob::i___Unity__Jobs__IJobParallelForBatch()  {
return static_cast<::Unity::Jobs::IJobParallelForBatch*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "initialize", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "enableBoundingSpheres", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "instances", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "localToWorldMatrices", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "prevLocalToWorldMatrices", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "atomicTransformQueueCount", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sharedInstanceData", ty: "::UnityEngine::Rendering::CPUSharedInstanceData", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "instanceData", ty: "::UnityEngine::Rendering::CPUInstanceData", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "transformUpdateInstanceQueue", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "transformUpdateDataQueue", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::TransformUpdatePacket>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "boundingSpheresDataQueue", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InstanceDataSystem_TransformUpdateJob::InstanceDataSystem_TransformUpdateJob(bool  initialize, bool  enableBoundingSpheres, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>  instances, ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>  localToWorldMatrices, ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>  prevLocalToWorldMatrices, ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32  atomicTransformQueueCount, ::UnityEngine::Rendering::CPUSharedInstanceData  sharedInstanceData, ::UnityEngine::Rendering::CPUInstanceData  instanceData, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>  transformUpdateInstanceQueue, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::TransformUpdatePacket>  transformUpdateDataQueue, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>  boundingSpheresDataQueue) noexcept  {
this->initialize = initialize;
this->enableBoundingSpheres = enableBoundingSpheres;
this->instances = instances;
this->localToWorldMatrices = localToWorldMatrices;
this->prevLocalToWorldMatrices = prevLocalToWorldMatrices;
this->atomicTransformQueueCount = atomicTransformQueueCount;
this->sharedInstanceData = sharedInstanceData;
this->instanceData = instanceData;
this->transformUpdateInstanceQueue = transformUpdateInstanceQueue;
this->transformUpdateDataQueue = transformUpdateDataQueue;
this->boundingSpheresDataQueue = boundingSpheresDataQueue;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InstanceDataSystem_TransformUpdateJob::InstanceDataSystem_TransformUpdateJob()   {
}
