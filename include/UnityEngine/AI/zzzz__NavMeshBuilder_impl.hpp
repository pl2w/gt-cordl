#pragma once
// IWYU pragma private; include "UnityEngine/AI/NavMeshBuilder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/AI/zzzz__NavMeshBuilder_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshBuildMarkup_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshBuildSettings_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshBuildSource_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshCollectGeometry_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshData_def.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableArrayWrapper_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::AI::NavMeshBuilder.CollectSources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Bounds, int32_t, ::UnityEngine::AI::NavMeshCollectGeometry, int32_t, bool, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildMarkup>*, bool, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*)>(&::UnityEngine::AI::NavMeshBuilder::CollectSources)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0xb51d75c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuilder*>(),
                        {"CollectSources", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::AI::NavMeshCollectGeometry>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildMarkup>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshBuilder.CollectSources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Bounds, int32_t, ::UnityEngine::AI::NavMeshCollectGeometry, int32_t, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildMarkup>*, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*)>(&::UnityEngine::AI::NavMeshBuilder::CollectSources)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb51db80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuilder*>(),
                        {"CollectSources", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::AI::NavMeshCollectGeometry>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildMarkup>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshBuilder.CollectSources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*, int32_t, ::UnityEngine::AI::NavMeshCollectGeometry, int32_t, bool, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildMarkup>*, bool, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*)>(&::UnityEngine::AI::NavMeshBuilder::CollectSources)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xb51dbbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuilder*>(),
                        {"CollectSources", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::AI::NavMeshCollectGeometry>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildMarkup>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshBuilder.CollectSources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*, int32_t, ::UnityEngine::AI::NavMeshCollectGeometry, int32_t, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildMarkup>*, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*)>(&::UnityEngine::AI::NavMeshBuilder::CollectSources)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb51dd24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuilder*>(),
                        {"CollectSources", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::AI::NavMeshCollectGeometry>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildMarkup>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshBuilder.CollectSourcesInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::AI::NavMeshBuildSource> (*)(int32_t, ::UnityEngine::Bounds, ::UnityEngine::Transform*, bool, ::UnityEngine::AI::NavMeshCollectGeometry, int32_t, bool, ::ArrayW<::UnityEngine::AI::NavMeshBuildMarkup>, bool)>(&::UnityEngine::AI::NavMeshBuilder::CollectSourcesInternal)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0xb51d950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuilder*>(),
                        {"CollectSourcesInternal", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::AI::NavMeshCollectGeometry>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::UnityEngine::AI::NavMeshBuildMarkup>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshBuilder.BuildNavMeshData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AI::NavMeshData> (*)(::UnityEngine::AI::NavMeshBuildSettings, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*, ::UnityEngine::Bounds, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::UnityEngine::AI::NavMeshBuilder::BuildNavMeshData)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xb51ddf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuilder*>(),
                        {"BuildNavMeshData", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshBuildSettings>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*>(), ::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshBuilder.UpdateNavMeshDataListInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::AI::NavMeshData*, ::UnityEngine::AI::NavMeshBuildSettings, ::System::Object*, ::UnityEngine::Bounds)>(&::UnityEngine::AI::NavMeshBuilder::UpdateNavMeshDataListInternal)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb51e110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuilder*>(),
                        {"UpdateNavMeshDataListInternal", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshData*>(), ::i2c::type_of<::UnityEngine::AI::NavMeshBuildSettings>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshBuilder.UpdateNavMeshDataAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AsyncOperation* (*)(::UnityEngine::AI::NavMeshData*, ::UnityEngine::AI::NavMeshBuildSettings, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*, ::UnityEngine::Bounds)>(&::UnityEngine::AI::NavMeshBuilder::UpdateNavMeshDataAsync)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xb51e210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuilder*>(),
                        {"UpdateNavMeshDataAsync", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshData*>(), ::i2c::type_of<::UnityEngine::AI::NavMeshBuildSettings>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*>(), ::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshBuilder.UpdateNavMeshDataAsyncListInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AsyncOperation* (*)(::UnityEngine::AI::NavMeshData*, ::UnityEngine::AI::NavMeshBuildSettings, ::System::Object*, ::UnityEngine::Bounds)>(&::UnityEngine::AI::NavMeshBuilder::UpdateNavMeshDataAsyncListInternal)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xb51e338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuilder*>(),
                        {"UpdateNavMeshDataAsyncListInternal", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshData*>(), ::i2c::type_of<::UnityEngine::AI::NavMeshBuildSettings>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshBuilder.CollectSourcesInternal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::by_ref<::UnityEngine::Bounds>, ::System::IntPtr, bool, ::UnityEngine::AI::NavMeshCollectGeometry, int32_t, bool, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, bool, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(&::UnityEngine::AI::NavMeshBuilder::CollectSourcesInternal_Injected)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb51dd4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuilder*>(),
                        {"CollectSourcesInternal_Injected", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::AI::NavMeshCollectGeometry>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshBuilder.UpdateNavMeshDataListInternal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::by_ref<::UnityEngine::AI::NavMeshBuildSettings>, ::System::Object*, ::by_ref<::UnityEngine::Bounds>)>(&::UnityEngine::AI::NavMeshBuilder::UpdateNavMeshDataListInternal_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb51e1b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuilder*>(),
                        {"UpdateNavMeshDataListInternal_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::AI::NavMeshBuildSettings>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshBuilder.UpdateNavMeshDataAsyncListInternal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::by_ref<::UnityEngine::AI::NavMeshBuildSettings>, ::System::Object*, ::by_ref<::UnityEngine::Bounds>)>(&::UnityEngine::AI::NavMeshBuilder::UpdateNavMeshDataAsyncListInternal_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb51e3fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuilder*>(),
                        {"UpdateNavMeshDataAsyncListInternal_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::AI::NavMeshBuildSettings>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::AI::NavMeshBuilder::CollectSources(::UnityEngine::Bounds  includedWorldBounds, int32_t  includedLayerMask, ::UnityEngine::AI::NavMeshCollectGeometry  geometry, int32_t  defaultArea, bool  generateLinksByDefault, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildMarkup>*  markups, bool  includeOnlyMarkedObjects, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuilder*>(),
                        {"CollectSources", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::AI::NavMeshCollectGeometry>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildMarkup>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, includedWorldBounds, includedLayerMask, geometry, defaultArea, generateLinksByDefault, markups, includeOnlyMarkedObjects, results);
}
inline void UnityEngine::AI::NavMeshBuilder::CollectSources(::UnityEngine::Bounds  includedWorldBounds, int32_t  includedLayerMask, ::UnityEngine::AI::NavMeshCollectGeometry  geometry, int32_t  defaultArea, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildMarkup>*  markups, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuilder*>(),
                        {"CollectSources", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::AI::NavMeshCollectGeometry>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildMarkup>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, includedWorldBounds, includedLayerMask, geometry, defaultArea, markups, results);
}
inline void UnityEngine::AI::NavMeshBuilder::CollectSources(::UnityEngine::Transform*  root, int32_t  includedLayerMask, ::UnityEngine::AI::NavMeshCollectGeometry  geometry, int32_t  defaultArea, bool  generateLinksByDefault, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildMarkup>*  markups, bool  includeOnlyMarkedObjects, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuilder*>(),
                        {"CollectSources", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::AI::NavMeshCollectGeometry>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildMarkup>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, root, includedLayerMask, geometry, defaultArea, generateLinksByDefault, markups, includeOnlyMarkedObjects, results);
}
inline void UnityEngine::AI::NavMeshBuilder::CollectSources(::UnityEngine::Transform*  root, int32_t  includedLayerMask, ::UnityEngine::AI::NavMeshCollectGeometry  geometry, int32_t  defaultArea, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildMarkup>*  markups, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuilder*>(),
                        {"CollectSources", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::AI::NavMeshCollectGeometry>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildMarkup>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, root, includedLayerMask, geometry, defaultArea, markups, results);
}
inline ::ArrayW<::UnityEngine::AI::NavMeshBuildSource> UnityEngine::AI::NavMeshBuilder::CollectSourcesInternal(int32_t  includedLayerMask, ::UnityEngine::Bounds  includedWorldBounds, ::UnityEngine::Transform*  root, bool  useBounds, ::UnityEngine::AI::NavMeshCollectGeometry  geometry, int32_t  defaultArea, bool  generateLinksByDefault, ::ArrayW<::UnityEngine::AI::NavMeshBuildMarkup>  markups, bool  includeOnlyMarkedObjects)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuilder*>(),
                        {"CollectSourcesInternal", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::AI::NavMeshCollectGeometry>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::UnityEngine::AI::NavMeshBuildMarkup>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::AI::NavMeshBuildSource>>(nullptr, ___internal_method, includedLayerMask, includedWorldBounds, root, useBounds, geometry, defaultArea, generateLinksByDefault, markups, includeOnlyMarkedObjects);
}
inline ::UnityW<::UnityEngine::AI::NavMeshData> UnityEngine::AI::NavMeshBuilder::BuildNavMeshData(::UnityEngine::AI::NavMeshBuildSettings  buildSettings, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*  sources, ::UnityEngine::Bounds  localBounds, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuilder*>(),
                        {"BuildNavMeshData", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshBuildSettings>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*>(), ::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AI::NavMeshData>>(nullptr, ___internal_method, buildSettings, sources, localBounds, position, rotation);
}
inline bool UnityEngine::AI::NavMeshBuilder::UpdateNavMeshDataListInternal(::UnityEngine::AI::NavMeshData*  data, ::UnityEngine::AI::NavMeshBuildSettings  buildSettings, ::System::Object*  sources, ::UnityEngine::Bounds  localBounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuilder*>(),
                        {"UpdateNavMeshDataListInternal", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshData*>(), ::i2c::type_of<::UnityEngine::AI::NavMeshBuildSettings>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, data, buildSettings, sources, localBounds);
}
inline ::UnityEngine::AsyncOperation* UnityEngine::AI::NavMeshBuilder::UpdateNavMeshDataAsync(::UnityEngine::AI::NavMeshData*  data, ::UnityEngine::AI::NavMeshBuildSettings  buildSettings, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*  sources, ::UnityEngine::Bounds  localBounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuilder*>(),
                        {"UpdateNavMeshDataAsync", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshData*>(), ::i2c::type_of<::UnityEngine::AI::NavMeshBuildSettings>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*>(), ::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation*>(nullptr, ___internal_method, data, buildSettings, sources, localBounds);
}
inline ::UnityEngine::AsyncOperation* UnityEngine::AI::NavMeshBuilder::UpdateNavMeshDataAsyncListInternal(::UnityEngine::AI::NavMeshData*  data, ::UnityEngine::AI::NavMeshBuildSettings  buildSettings, ::System::Object*  sources, ::UnityEngine::Bounds  localBounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuilder*>(),
                        {"UpdateNavMeshDataAsyncListInternal", {}, {::i2c::type_of<::UnityEngine::AI::NavMeshData*>(), ::i2c::type_of<::UnityEngine::AI::NavMeshBuildSettings>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation*>(nullptr, ___internal_method, data, buildSettings, sources, localBounds);
}
inline void UnityEngine::AI::NavMeshBuilder::CollectSourcesInternal_Injected(int32_t  includedLayerMask, ::by_ref<::UnityEngine::Bounds>  includedWorldBounds, ::System::IntPtr  root, bool  useBounds, ::UnityEngine::AI::NavMeshCollectGeometry  geometry, int32_t  defaultArea, bool  generateLinksByDefault, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  markups, bool  includeOnlyMarkedObjects, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuilder*>(),
                        {"CollectSourcesInternal_Injected", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::AI::NavMeshCollectGeometry>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, includedLayerMask, includedWorldBounds, root, useBounds, geometry, defaultArea, generateLinksByDefault, markups, includeOnlyMarkedObjects, ret);
}
inline bool UnityEngine::AI::NavMeshBuilder::UpdateNavMeshDataListInternal_Injected(::System::IntPtr  data, ::by_ref<::UnityEngine::AI::NavMeshBuildSettings>  buildSettings, ::System::Object*  sources, ::by_ref<::UnityEngine::Bounds>  localBounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuilder*>(),
                        {"UpdateNavMeshDataListInternal_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::AI::NavMeshBuildSettings>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, data, buildSettings, sources, localBounds);
}
inline ::System::IntPtr UnityEngine::AI::NavMeshBuilder::UpdateNavMeshDataAsyncListInternal_Injected(::System::IntPtr  data, ::by_ref<::UnityEngine::AI::NavMeshBuildSettings>  buildSettings, ::System::Object*  sources, ::by_ref<::UnityEngine::Bounds>  localBounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshBuilder*>(),
                        {"UpdateNavMeshDataAsyncListInternal_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::AI::NavMeshBuildSettings>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, data, buildSettings, sources, localBounds);
}
// Ctor Parameters []
constexpr ::UnityEngine::AI::NavMeshBuilder::NavMeshBuilder()   {
}
