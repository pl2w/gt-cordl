#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUResidentDrawerBurst.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUResidentDrawerBurst_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray`1_ReadOnly_def.hpp"
#include "Unity/Collections/zzzz__NativeHashSet_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap`2_ReadOnly_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchMaterialID_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenPackedMaterialData_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUResidentDrawerBurst_def.hpp"
#include "UnityEngine/Rendering/zzzz__SmallIntegerArray_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerBurst.ClassifyMaterials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Collections::NativeArray_1<int32_t>>, ::by_ref<::GlobalNamespace::NativeParallelHashMap_2_ReadOnly<int32_t,::UnityEngine::Rendering::BatchMaterialID>>, ::by_ref<::Unity::Collections::NativeList_1<int32_t>>, ::by_ref<::Unity::Collections::NativeList_1<int32_t>>, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>)>(&::UnityEngine::Rendering::GPUResidentDrawerBurst::ClassifyMaterials)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb1ede3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst*>(),
                        {"ClassifyMaterials", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t>>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NativeParallelHashMap_2_ReadOnly<int32_t,::UnityEngine::Rendering::BatchMaterialID>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<int32_t>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<int32_t>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerBurst.FindUnsupportedRenderers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Collections::NativeArray_1<int32_t>>, ::by_ref<::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallIntegerArray>>, ::by_ref<::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>>, ::by_ref<::Unity::Collections::NativeList_1<int32_t>>)>(&::UnityEngine::Rendering::GPUResidentDrawerBurst::FindUnsupportedRenderers)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb1ede40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst*>(),
                        {"FindUnsupportedRenderers", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t>>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallIntegerArray>>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<int32_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerBurst.GetMaterialsWithChangedPackedMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Collections::NativeArray_1<int32_t>>, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>, ::by_ref<::GlobalNamespace::NativeParallelHashMap_2_ReadOnly<int32_t,::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>, ::by_ref<::Unity::Collections::NativeHashSet_1<int32_t>>)>(&::UnityEngine::Rendering::GPUResidentDrawerBurst::GetMaterialsWithChangedPackedMaterial)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb1ede44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst*>(),
                        {"GetMaterialsWithChangedPackedMaterial", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NativeParallelHashMap_2_ReadOnly<int32_t,::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeHashSet_1<int32_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerBurst.ClassifyMaterials$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Collections::NativeArray_1<int32_t>>, ::by_ref<::GlobalNamespace::NativeParallelHashMap_2_ReadOnly<int32_t,::UnityEngine::Rendering::BatchMaterialID>>, ::by_ref<::Unity::Collections::NativeList_1<int32_t>>, ::by_ref<::Unity::Collections::NativeList_1<int32_t>>, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>)>(&::UnityEngine::Rendering::GPUResidentDrawerBurst::ClassifyMaterials$BurstManaged)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0xb1ee7dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst*>(),
                        {"ClassifyMaterials$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t>>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NativeParallelHashMap_2_ReadOnly<int32_t,::UnityEngine::Rendering::BatchMaterialID>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<int32_t>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<int32_t>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerBurst.FindUnsupportedRenderers$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Collections::NativeArray_1<int32_t>>, ::by_ref<::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallIntegerArray>>, ::by_ref<::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>>, ::by_ref<::Unity::Collections::NativeList_1<int32_t>>)>(&::UnityEngine::Rendering::GPUResidentDrawerBurst::FindUnsupportedRenderers$BurstManaged)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xb1eeca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst*>(),
                        {"FindUnsupportedRenderers$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t>>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallIntegerArray>>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<int32_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerBurst.GetMaterialsWithChangedPackedMaterial$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Collections::NativeArray_1<int32_t>>, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>, ::by_ref<::GlobalNamespace::NativeParallelHashMap_2_ReadOnly<int32_t,::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>, ::by_ref<::Unity::Collections::NativeHashSet_1<int32_t>>)>(&::UnityEngine::Rendering::GPUResidentDrawerBurst::GetMaterialsWithChangedPackedMaterial$BurstManaged)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb1eee58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst*>(),
                        {"GetMaterialsWithChangedPackedMaterial$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NativeParallelHashMap_2_ReadOnly<int32_t,::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeHashSet_1<int32_t>>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::GPUResidentDrawerBurst::ClassifyMaterials(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  materialIDs, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NativeParallelHashMap_2_ReadOnly<int32_t,::UnityEngine::Rendering::BatchMaterialID>>  batchMaterialHash, ::by_ref<::Unity::Collections::NativeList_1<int32_t>>  supportedMaterialIDs, ::by_ref<::Unity::Collections::NativeList_1<int32_t>>  unsupportedMaterialIDs, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>  supportedPackedMaterialDatas)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst*>(),
                        {"ClassifyMaterials", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t>>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NativeParallelHashMap_2_ReadOnly<int32_t,::UnityEngine::Rendering::BatchMaterialID>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<int32_t>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<int32_t>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, materialIDs, batchMaterialHash, supportedMaterialIDs, unsupportedMaterialIDs, supportedPackedMaterialDatas);
}
inline void UnityEngine::Rendering::GPUResidentDrawerBurst::FindUnsupportedRenderers(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  unsupportedMaterials, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallIntegerArray>>  materialIDArrays, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>>  rendererGroups, ::by_ref<::Unity::Collections::NativeList_1<int32_t>>  unsupportedRenderers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst*>(),
                        {"FindUnsupportedRenderers", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t>>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallIntegerArray>>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<int32_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, unsupportedMaterials, materialIDArrays, rendererGroups, unsupportedRenderers);
}
inline void UnityEngine::Rendering::GPUResidentDrawerBurst::GetMaterialsWithChangedPackedMaterial(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  materialIDs, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>  packedMaterialDatas, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NativeParallelHashMap_2_ReadOnly<int32_t,::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>  packedMaterialHash, ::by_ref<::Unity::Collections::NativeHashSet_1<int32_t>>  filteredMaterials)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst*>(),
                        {"GetMaterialsWithChangedPackedMaterial", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NativeParallelHashMap_2_ReadOnly<int32_t,::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeHashSet_1<int32_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, materialIDs, packedMaterialDatas, packedMaterialHash, filteredMaterials);
}
inline void UnityEngine::Rendering::GPUResidentDrawerBurst::ClassifyMaterials$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  materialIDs, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NativeParallelHashMap_2_ReadOnly<int32_t,::UnityEngine::Rendering::BatchMaterialID>>  batchMaterialHash, ::by_ref<::Unity::Collections::NativeList_1<int32_t>>  supportedMaterialIDs, ::by_ref<::Unity::Collections::NativeList_1<int32_t>>  unsupportedMaterialIDs, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>  supportedPackedMaterialDatas)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst*>(),
                        {"ClassifyMaterials$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t>>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NativeParallelHashMap_2_ReadOnly<int32_t,::UnityEngine::Rendering::BatchMaterialID>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<int32_t>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<int32_t>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, materialIDs, batchMaterialHash, supportedMaterialIDs, unsupportedMaterialIDs, supportedPackedMaterialDatas);
}
inline void UnityEngine::Rendering::GPUResidentDrawerBurst::FindUnsupportedRenderers$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  unsupportedMaterials, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallIntegerArray>>  materialIDArrays, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>>  rendererGroups, ::by_ref<::Unity::Collections::NativeList_1<int32_t>>  unsupportedRenderers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst*>(),
                        {"FindUnsupportedRenderers$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t>>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallIntegerArray>>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<int32_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, unsupportedMaterials, materialIDArrays, rendererGroups, unsupportedRenderers);
}
inline void UnityEngine::Rendering::GPUResidentDrawerBurst::GetMaterialsWithChangedPackedMaterial$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  materialIDs, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>  packedMaterialDatas, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NativeParallelHashMap_2_ReadOnly<int32_t,::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>  packedMaterialHash, ::by_ref<::Unity::Collections::NativeHashSet_1<int32_t>>  filteredMaterials)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst*>(),
                        {"GetMaterialsWithChangedPackedMaterial$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NativeParallelHashMap_2_ReadOnly<int32_t,::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeHashSet_1<int32_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, materialIDs, packedMaterialDatas, packedMaterialHash, filteredMaterials);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUResidentDrawerBurst::GPUResidentDrawerBurst()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb1ef3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb1ef4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Collections::NativeArray_1<int32_t>>, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>, ::by_ref<::GlobalNamespace::NativeParallelHashMap_2_ReadOnly<int32_t,::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>, ::by_ref<::Unity::Collections::NativeHashSet_1<int32_t>>)>(&::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xb1ee668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NativeParallelHashMap_2_ReadOnly<int32_t,::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeHashSet_1<int32_t>>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall*>();
}
inline void UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall::Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  materialIDs, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>  packedMaterialDatas, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NativeParallelHashMap_2_ReadOnly<int32_t,::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>  packedMaterialHash, ::by_ref<::Unity::Collections::NativeHashSet_1<int32_t>>  filteredMaterials)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NativeParallelHashMap_2_ReadOnly<int32_t,::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeHashSet_1<int32_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, materialIDs, packedMaterialDatas, packedMaterialHash, filteredMaterials);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb1ef2e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate::*)(::by_ref<::Unity::Collections::NativeArray_1<int32_t>>, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>, ::by_ref<::GlobalNamespace::NativeParallelHashMap_2_ReadOnly<int32_t,::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>, ::by_ref<::Unity::Collections::NativeHashSet_1<int32_t>>)>(&::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb1ef39c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate::Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  materialIDs, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>  packedMaterialDatas, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NativeParallelHashMap_2_ReadOnly<int32_t,::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>  packedMaterialHash, ::by_ref<::Unity::Collections::NativeHashSet_1<int32_t>>  filteredMaterials)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, materialIDs, packedMaterialDatas, packedMaterialHash, filteredMaterials);
}
inline ::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate* UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb1ef1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb1ef2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Collections::NativeArray_1<int32_t>>, ::by_ref<::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallIntegerArray>>, ::by_ref<::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>>, ::by_ref<::Unity::Collections::NativeList_1<int32_t>>)>(&::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xb1ee5a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t>>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallIntegerArray>>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<int32_t>>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall*>();
}
inline void UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall::Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  unsupportedMaterials, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallIntegerArray>>  materialIDArrays, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>>  rendererGroups, ::by_ref<::Unity::Collections::NativeList_1<int32_t>>  unsupportedRenderers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t>>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallIntegerArray>>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<int32_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, unsupportedMaterials, materialIDArrays, rendererGroups, unsupportedRenderers);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb1ef118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate::*)(::by_ref<::Unity::Collections::NativeArray_1<int32_t>>, ::by_ref<::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallIntegerArray>>, ::by_ref<::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>>, ::by_ref<::Unity::Collections::NativeList_1<int32_t>>)>(&::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb1ef1cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate::Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  unsupportedMaterials, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallIntegerArray>>  materialIDArrays, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NativeArray_1_ReadOnly<int32_t>>  rendererGroups, ::by_ref<::Unity::Collections::NativeList_1<int32_t>>  unsupportedRenderers)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, unsupportedMaterials, materialIDArrays, rendererGroups, unsupportedRenderers);
}
inline ::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate* UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb1ef010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb1ef100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Collections::NativeArray_1<int32_t>>, ::by_ref<::GlobalNamespace::NativeParallelHashMap_2_ReadOnly<int32_t,::UnityEngine::Rendering::BatchMaterialID>>, ::by_ref<::Unity::Collections::NativeList_1<int32_t>>, ::by_ref<::Unity::Collections::NativeList_1<int32_t>>, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>)>(&::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb1ee4c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t>>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NativeParallelHashMap_2_ReadOnly<int32_t,::UnityEngine::Rendering::BatchMaterialID>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<int32_t>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<int32_t>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall*>();
}
inline void UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall::Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  materialIDs, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NativeParallelHashMap_2_ReadOnly<int32_t,::UnityEngine::Rendering::BatchMaterialID>>  batchMaterialHash, ::by_ref<::Unity::Collections::NativeList_1<int32_t>>  supportedMaterialIDs, ::by_ref<::Unity::Collections::NativeList_1<int32_t>>  unsupportedMaterialIDs, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>  supportedPackedMaterialDatas)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t>>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NativeParallelHashMap_2_ReadOnly<int32_t,::UnityEngine::Rendering::BatchMaterialID>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<int32_t>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<int32_t>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, materialIDs, batchMaterialHash, supportedMaterialIDs, unsupportedMaterialIDs, supportedPackedMaterialDatas);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb1eef48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate::*)(::by_ref<::Unity::Collections::NativeArray_1<int32_t>>, ::by_ref<::GlobalNamespace::NativeParallelHashMap_2_ReadOnly<int32_t,::UnityEngine::Rendering::BatchMaterialID>>, ::by_ref<::Unity::Collections::NativeList_1<int32_t>>, ::by_ref<::Unity::Collections::NativeList_1<int32_t>>, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>)>(&::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb1eeffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate::Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  materialIDs, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NativeParallelHashMap_2_ReadOnly<int32_t,::UnityEngine::Rendering::BatchMaterialID>>  batchMaterialHash, ::by_ref<::Unity::Collections::NativeList_1<int32_t>>  supportedMaterialIDs, ::by_ref<::Unity::Collections::NativeList_1<int32_t>>  unsupportedMaterialIDs, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>  supportedPackedMaterialDatas)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, materialIDs, batchMaterialHash, supportedMaterialIDs, unsupportedMaterialIDs, supportedPackedMaterialDatas);
}
inline ::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate* UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate()   {
}
