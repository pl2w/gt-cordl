#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderFindPotentialSnaps.hpp"
#include "GorillaTagScripts/zzzz__BuilderGridPlaneData_impl.hpp"
#include "GorillaTagScripts/zzzz__BuilderPotentialPlacementData_impl.hpp"
#include "GorillaTagScripts/zzzz__BuilderTable_SnapParams_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeQueue`1_ParallelWriter_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTagScripts/zzzz__BuilderFindPotentialSnaps_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderGridPlaneData_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderPotentialPlacementData_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::BuilderFindPotentialSnaps.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderFindPotentialSnaps::*)(int32_t)>(&::GorillaTagScripts::BuilderFindPotentialSnaps::Execute)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5baa1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderFindPotentialSnaps>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderFindPotentialSnaps.TryPlaceGridPlaneOnGridPlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderFindPotentialSnaps::*)(::by_ref<::GorillaTagScripts::BuilderGridPlaneData>, ::by_ref<::GorillaTagScripts::BuilderGridPlaneData>, ::by_ref<::GorillaTagScripts::BuilderPotentialPlacementData>)>(&::GorillaTagScripts::BuilderFindPotentialSnaps::TryPlaceGridPlaneOnGridPlane)> {
  constexpr static std::size_t size = 0x9e8;
  constexpr static std::size_t addrs = 0x5baa360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderFindPotentialSnaps>(),
                        {"TryPlaceGridPlaneOnGridPlane", {}, {::i2c::type_of<::by_ref<::GorillaTagScripts::BuilderGridPlaneData>>(), ::i2c::type_of<::by_ref<::GorillaTagScripts::BuilderGridPlaneData>>(), ::i2c::type_of<::by_ref<::GorillaTagScripts::BuilderPotentialPlacementData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderFindPotentialSnaps.Rotate90
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (::GorillaTagScripts::BuilderFindPotentialSnaps::*)(::UnityEngine::Vector2Int, int32_t, int32_t)>(&::GorillaTagScripts::BuilderFindPotentialSnaps::Rotate90)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5baad68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderFindPotentialSnaps>(),
                        {"Rotate90", {}, {::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderFindPotentialSnaps.Rotate270
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (::GorillaTagScripts::BuilderFindPotentialSnaps::*)(::UnityEngine::Vector2Int, int32_t, int32_t)>(&::GorillaTagScripts::BuilderFindPotentialSnaps::Rotate270)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5baad5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderFindPotentialSnaps>(),
                        {"Rotate270", {}, {::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderFindPotentialSnaps.Rotate180
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (::GorillaTagScripts::BuilderFindPotentialSnaps::*)(::UnityEngine::Vector2Int, int32_t, int32_t)>(&::GorillaTagScripts::BuilderFindPotentialSnaps::Rotate180)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5baad48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderFindPotentialSnaps>(),
                        {"Rotate180", {}, {::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTagScripts::BuilderFindPotentialSnaps::Execute(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderFindPotentialSnaps>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
inline bool GorillaTagScripts::BuilderFindPotentialSnaps::TryPlaceGridPlaneOnGridPlane(::by_ref<::GorillaTagScripts::BuilderGridPlaneData>  gridPlane, ::by_ref<::GorillaTagScripts::BuilderGridPlaneData>  checkGridPlane, ::by_ref<::GorillaTagScripts::BuilderPotentialPlacementData>  potentialPlacement)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderFindPotentialSnaps>(),
                        {"TryPlaceGridPlaneOnGridPlane", {}, {::i2c::type_of<::by_ref<::GorillaTagScripts::BuilderGridPlaneData>>(), ::i2c::type_of<::by_ref<::GorillaTagScripts::BuilderGridPlaneData>>(), ::i2c::type_of<::by_ref<::GorillaTagScripts::BuilderPotentialPlacementData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, gridPlane, checkGridPlane, potentialPlacement);
}
inline ::UnityEngine::Vector2Int GorillaTagScripts::BuilderFindPotentialSnaps::Rotate90(::UnityEngine::Vector2Int  v, int32_t  offsetX, int32_t  offsetY)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderFindPotentialSnaps>(),
                        {"Rotate90", {}, {::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(*this, ___internal_method, v, offsetX, offsetY);
}
inline ::UnityEngine::Vector2Int GorillaTagScripts::BuilderFindPotentialSnaps::Rotate270(::UnityEngine::Vector2Int  v, int32_t  offsetX, int32_t  offsetY)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderFindPotentialSnaps>(),
                        {"Rotate270", {}, {::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(*this, ___internal_method, v, offsetX, offsetY);
}
inline ::UnityEngine::Vector2Int GorillaTagScripts::BuilderFindPotentialSnaps::Rotate180(::UnityEngine::Vector2Int  v, int32_t  offsetX, int32_t  offsetY)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderFindPotentialSnaps>(),
                        {"Rotate180", {}, {::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(*this, ___internal_method, v, offsetX, offsetY);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr  GorillaTagScripts::BuilderFindPotentialSnaps::operator ::Unity::Jobs::IJobParallelFor*()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* GorillaTagScripts::BuilderFindPotentialSnaps::i___Unity__Jobs__IJobParallelFor()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "gridSize", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "currSnapParams", ty: "::GlobalNamespace::BuilderTable_SnapParams", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "gridPlanes", ty: "::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "checkGridPlanes", ty: "::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "worldToLocalPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "worldToLocalRot", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "localToWorldPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "localToWorldRot", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "potentialPlacements", ty: "::GlobalNamespace::NativeQueue_1_ParallelWriter<::GorillaTagScripts::BuilderPotentialPlacementData>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GorillaTagScripts::BuilderFindPotentialSnaps::BuilderFindPotentialSnaps(float_t  gridSize, ::GlobalNamespace::BuilderTable_SnapParams  currSnapParams, ::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>  gridPlanes, ::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>  checkGridPlanes, ::UnityEngine::Vector3  worldToLocalPos, ::UnityEngine::Quaternion  worldToLocalRot, ::UnityEngine::Vector3  localToWorldPos, ::UnityEngine::Quaternion  localToWorldRot, ::GlobalNamespace::NativeQueue_1_ParallelWriter<::GorillaTagScripts::BuilderPotentialPlacementData>  potentialPlacements) noexcept  {
this->gridSize = gridSize;
this->currSnapParams = currSnapParams;
this->gridPlanes = gridPlanes;
this->checkGridPlanes = checkGridPlanes;
this->worldToLocalPos = worldToLocalPos;
this->worldToLocalRot = worldToLocalRot;
this->localToWorldPos = localToWorldPos;
this->localToWorldRot = localToWorldRot;
this->potentialPlacements = potentialPlacements;
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::BuilderFindPotentialSnaps::BuilderFindPotentialSnaps()   {
}
