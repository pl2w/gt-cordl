#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceDataSystemBurst.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceDataSystemBurst_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray`1_ReadOnly_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelMultiHashMap_2_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUInstanceData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUPerCameraInstanceData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUSharedInstanceData_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenPackedRendererData_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceAllocators_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceDataSystemBurst_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystemBurst.ReallocateInstances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedRendererData>>, ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>, ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>, ::by_ref<::UnityEngine::Rendering::InstanceAllocators>, ::by_ref<::UnityEngine::Rendering::CPUInstanceData>, ::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData>, ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData>, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>, ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>>)>(&::UnityEngine::Rendering::InstanceDataSystemBurst::ReallocateInstances)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb207640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::InstanceDataSystemBurst*>(),
                        {"ReallocateInstances", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedRendererData>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t>>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::InstanceAllocators>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CPUInstanceData>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystemBurst.FreeRendererGroupInstances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>>, ::by_ref<::UnityEngine::Rendering::InstanceAllocators>, ::by_ref<::UnityEngine::Rendering::CPUInstanceData>, ::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData>, ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData>, ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>>)>(&::UnityEngine::Rendering::InstanceDataSystemBurst::FreeRendererGroupInstances)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb207654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::InstanceDataSystemBurst*>(),
                        {"FreeRendererGroupInstances", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::InstanceAllocators>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CPUInstanceData>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystemBurst.ReallocateInstances$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedRendererData>>, ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>, ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>, ::by_ref<::UnityEngine::Rendering::InstanceAllocators>, ::by_ref<::UnityEngine::Rendering::CPUInstanceData>, ::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData>, ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData>, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>, ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>>)>(&::UnityEngine::Rendering::InstanceDataSystemBurst::ReallocateInstances$BurstManaged)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0xb207860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::InstanceDataSystemBurst*>(),
                        {"ReallocateInstances$BurstManaged", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedRendererData>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t>>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::InstanceAllocators>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CPUInstanceData>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystemBurst.FreeRendererGroupInstances$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>>, ::by_ref<::UnityEngine::Rendering::InstanceAllocators>, ::by_ref<::UnityEngine::Rendering::CPUInstanceData>, ::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData>, ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData>, ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>>)>(&::UnityEngine::Rendering::InstanceDataSystemBurst::FreeRendererGroupInstances$BurstManaged)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0xb207ca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::InstanceDataSystemBurst*>(),
                        {"FreeRendererGroupInstances$BurstManaged", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::InstanceAllocators>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CPUInstanceData>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::InstanceDataSystemBurst::ReallocateInstances(bool  implicitInstanceIndices, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  rendererGroupIDs, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedRendererData>>  packedRendererData, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  instanceOffsets, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  instanceCounts, ::by_ref<::UnityEngine::Rendering::InstanceAllocators>  instanceAllocators, ::by_ref<::UnityEngine::Rendering::CPUInstanceData>  instanceData, ::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData>  perCameraInstanceData, ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData>  sharedInstanceData, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>  instances, ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>>  rendererGroupInstanceMultiHash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::InstanceDataSystemBurst*>(),
                        {"ReallocateInstances", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedRendererData>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t>>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::InstanceAllocators>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CPUInstanceData>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, implicitInstanceIndices, rendererGroupIDs, packedRendererData, instanceOffsets, instanceCounts, instanceAllocators, instanceData, perCameraInstanceData, sharedInstanceData, instances, rendererGroupInstanceMultiHash);
}
inline void UnityEngine::Rendering::InstanceDataSystemBurst::FreeRendererGroupInstances(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>>  rendererGroupsID, ::by_ref<::UnityEngine::Rendering::InstanceAllocators>  instanceAllocators, ::by_ref<::UnityEngine::Rendering::CPUInstanceData>  instanceData, ::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData>  perCameraInstanceData, ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData>  sharedInstanceData, ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>>  rendererGroupInstanceMultiHash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::InstanceDataSystemBurst*>(),
                        {"FreeRendererGroupInstances", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::InstanceAllocators>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CPUInstanceData>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rendererGroupsID, instanceAllocators, instanceData, perCameraInstanceData, sharedInstanceData, rendererGroupInstanceMultiHash);
}
inline void UnityEngine::Rendering::InstanceDataSystemBurst::ReallocateInstances$BurstManaged(bool  implicitInstanceIndices, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  rendererGroupIDs, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedRendererData>>  packedRendererData, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  instanceOffsets, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  instanceCounts, ::by_ref<::UnityEngine::Rendering::InstanceAllocators>  instanceAllocators, ::by_ref<::UnityEngine::Rendering::CPUInstanceData>  instanceData, ::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData>  perCameraInstanceData, ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData>  sharedInstanceData, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>  instances, ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>>  rendererGroupInstanceMultiHash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::InstanceDataSystemBurst*>(),
                        {"ReallocateInstances$BurstManaged", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedRendererData>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t>>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::InstanceAllocators>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CPUInstanceData>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, implicitInstanceIndices, rendererGroupIDs, packedRendererData, instanceOffsets, instanceCounts, instanceAllocators, instanceData, perCameraInstanceData, sharedInstanceData, instances, rendererGroupInstanceMultiHash);
}
inline void UnityEngine::Rendering::InstanceDataSystemBurst::FreeRendererGroupInstances$BurstManaged(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>>  rendererGroupsID, ::by_ref<::UnityEngine::Rendering::InstanceAllocators>  instanceAllocators, ::by_ref<::UnityEngine::Rendering::CPUInstanceData>  instanceData, ::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData>  perCameraInstanceData, ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData>  sharedInstanceData, ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>>  rendererGroupInstanceMultiHash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::InstanceDataSystemBurst*>(),
                        {"FreeRendererGroupInstances$BurstManaged", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::InstanceAllocators>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CPUInstanceData>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rendererGroupsID, instanceAllocators, instanceData, perCameraInstanceData, sharedInstanceData, rendererGroupInstanceMultiHash);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceDataSystemBurst::InstanceDataSystemBurst()   {
}
inline void UnityEngine::Rendering::InstanceDataSystemBurst_FreeInstances_000002A2$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::UnityEngine::Rendering::InstanceDataSystemBurst_FreeInstances_000002A2$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::Rendering::InstanceDataSystemBurst_FreeInstances_000002A2$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::UnityEngine::Rendering::InstanceDataSystemBurst_FreeInstances_000002A2$BurstDirectCall*>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceDataSystemBurst_FreeInstances_000002A2$BurstDirectCall::InstanceDataSystemBurst_FreeInstances_000002A2$BurstDirectCall()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb208224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb208314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>>, ::by_ref<::UnityEngine::Rendering::InstanceAllocators>, ::by_ref<::UnityEngine::Rendering::CPUInstanceData>, ::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData>, ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData>, ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>>)>(&::UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb207778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::InstanceAllocators>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CPUInstanceData>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall*>();
}
inline void UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall::Invoke(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>>  rendererGroupsID, ::by_ref<::UnityEngine::Rendering::InstanceAllocators>  instanceAllocators, ::by_ref<::UnityEngine::Rendering::CPUInstanceData>  instanceData, ::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData>  perCameraInstanceData, ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData>  sharedInstanceData, ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>>  rendererGroupInstanceMultiHash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::InstanceAllocators>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CPUInstanceData>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rendererGroupsID, instanceAllocators, instanceData, perCameraInstanceData, sharedInstanceData, rendererGroupInstanceMultiHash);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$BurstDirectCall()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb20815c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate::*)(::by_ref<::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>>, ::by_ref<::UnityEngine::Rendering::InstanceAllocators>, ::by_ref<::UnityEngine::Rendering::CPUInstanceData>, ::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData>, ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData>, ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>>)>(&::UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb208210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate::Invoke(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>>  rendererGroupsID, ::by_ref<::UnityEngine::Rendering::InstanceAllocators>  instanceAllocators, ::by_ref<::UnityEngine::Rendering::CPUInstanceData>  instanceData, ::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData>  perCameraInstanceData, ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData>  sharedInstanceData, ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>>  rendererGroupInstanceMultiHash)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rendererGroupsID, instanceAllocators, instanceData, perCameraInstanceData, sharedInstanceData, rendererGroupInstanceMultiHash);
}
inline ::UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate* UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate::InstanceDataSystemBurst_FreeRendererGroupInstances_000002A1$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb208054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb208144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedRendererData>>, ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>, ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>, ::by_ref<::UnityEngine::Rendering::InstanceAllocators>, ::by_ref<::UnityEngine::Rendering::CPUInstanceData>, ::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData>, ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData>, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>, ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>>)>(&::UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xb207658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedRendererData>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t>>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::InstanceAllocators>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CPUInstanceData>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall*>();
}
inline void UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall::Invoke(bool  implicitInstanceIndices, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  rendererGroupIDs, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedRendererData>>  packedRendererData, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  instanceOffsets, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  instanceCounts, ::by_ref<::UnityEngine::Rendering::InstanceAllocators>  instanceAllocators, ::by_ref<::UnityEngine::Rendering::CPUInstanceData>  instanceData, ::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData>  perCameraInstanceData, ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData>  sharedInstanceData, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>  instances, ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>>  rendererGroupInstanceMultiHash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedRendererData>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t>>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::InstanceAllocators>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CPUInstanceData>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, implicitInstanceIndices, rendererGroupIDs, packedRendererData, instanceOffsets, instanceCounts, instanceAllocators, instanceData, perCameraInstanceData, sharedInstanceData, instances, rendererGroupInstanceMultiHash);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall::InstanceDataSystemBurst_ReallocateInstances_000002A0$BurstDirectCall()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb207f8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate::*)(bool, ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedRendererData>>, ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>, ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>, ::by_ref<::UnityEngine::Rendering::InstanceAllocators>, ::by_ref<::UnityEngine::Rendering::CPUInstanceData>, ::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData>, ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData>, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>, ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>>)>(&::UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb20802c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate::Invoke(bool  implicitInstanceIndices, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  rendererGroupIDs, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedRendererData>>  packedRendererData, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  instanceOffsets, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  instanceCounts, ::by_ref<::UnityEngine::Rendering::InstanceAllocators>  instanceAllocators, ::by_ref<::UnityEngine::Rendering::CPUInstanceData>  instanceData, ::by_ref<::UnityEngine::Rendering::CPUPerCameraInstanceData>  perCameraInstanceData, ::by_ref<::UnityEngine::Rendering::CPUSharedInstanceData>  sharedInstanceData, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>  instances, ::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>>  rendererGroupInstanceMultiHash)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, implicitInstanceIndices, rendererGroupIDs, packedRendererData, instanceOffsets, instanceCounts, instanceAllocators, instanceData, perCameraInstanceData, sharedInstanceData, instances, rendererGroupInstanceMultiHash);
}
inline ::UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate* UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate::InstanceDataSystemBurst_ReallocateInstances_000002A0$PostfixBurstDelegate()   {
}
