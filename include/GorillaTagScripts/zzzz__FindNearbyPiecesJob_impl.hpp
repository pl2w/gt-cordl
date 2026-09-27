#pragma once
// IWYU pragma private; include "GorillaTagScripts/FindNearbyPiecesJob.hpp"
#include "GorillaTagScripts/zzzz__BuilderGridPlaneData_impl.hpp"
#include "GorillaTagScripts/zzzz__BuilderPieceData_impl.hpp"
#include "GorillaTagScripts/zzzz__BuilderPlayerData_impl.hpp"
#include "GorillaTagScripts/zzzz__BuilderPrivatePlotData_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeList`1_ParallelWriter_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTagScripts/zzzz__FindNearbyPiecesJob_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderGridPlaneData_def.hpp"
#include "Unity/Collections/zzzz__NativeList`1_ParallelWriter_def.hpp"
#include "UnityEngine/Jobs/zzzz__IJobParallelForTransform_def.hpp"
#include "UnityEngine/Jobs/zzzz__TransformAccess_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::FindNearbyPiecesJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FindNearbyPiecesJob::*)(int32_t, ::UnityEngine::Jobs::TransformAccess)>(&::GorillaTagScripts::FindNearbyPiecesJob::Execute)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5bab114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FindNearbyPiecesJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Jobs::TransformAccess>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FindNearbyPiecesJob.CheckGridPlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FindNearbyPiecesJob::*)(int32_t, int32_t, ::UnityEngine::Jobs::TransformAccess, ::UnityEngine::Vector3, bool, ::GlobalNamespace::NativeList_1_ParallelWriter<::GorillaTagScripts::BuilderGridPlaneData>)>(&::GorillaTagScripts::FindNearbyPiecesJob::CheckGridPlane)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5bab194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FindNearbyPiecesJob>(),
                        {"CheckGridPlane", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Jobs::TransformAccess>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::NativeList_1_ParallelWriter<::GorillaTagScripts::BuilderGridPlaneData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FindNearbyPiecesJob.CanPiecesPotentiallySnap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::FindNearbyPiecesJob::*)(int32_t, int32_t, int32_t, int32_t, int32_t, bool)>(&::GorillaTagScripts::FindNearbyPiecesJob::CanPiecesPotentiallySnap)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5bab344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FindNearbyPiecesJob>(),
                        {"CanPiecesPotentiallySnap", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FindNearbyPiecesJob.CanPlayerAttachToRootPiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::FindNearbyPiecesJob::*)(int32_t, int32_t, bool)>(&::GorillaTagScripts::FindNearbyPiecesJob::CanPlayerAttachToRootPiece)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5bab3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FindNearbyPiecesJob>(),
                        {"CanPlayerAttachToRootPiece", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FindNearbyPiecesJob.CanPlayerAttachToPlot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::FindNearbyPiecesJob::*)(int32_t, int32_t)>(&::GorillaTagScripts::FindNearbyPiecesJob::CanPlayerAttachToPlot)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5bab52c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FindNearbyPiecesJob>(),
                        {"CanPlayerAttachToPlot", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FindNearbyPiecesJob.GetPlayerIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTagScripts::FindNearbyPiecesJob::*)(int32_t)>(&::GorillaTagScripts::FindNearbyPiecesJob::GetPlayerIndex)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5bab4f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FindNearbyPiecesJob>(),
                        {"GetPlayerIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FindNearbyPiecesJob.GetAttachedBuiltInPiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTagScripts::FindNearbyPiecesJob::*)(int32_t)>(&::GorillaTagScripts::FindNearbyPiecesJob::GetAttachedBuiltInPiece)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5bab498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FindNearbyPiecesJob>(),
                        {"GetAttachedBuiltInPiece", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FindNearbyPiecesJob.GetRootPieceIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTagScripts::FindNearbyPiecesJob::*)(int32_t)>(&::GorillaTagScripts::FindNearbyPiecesJob::GetRootPieceIndex)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5bab304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FindNearbyPiecesJob>(),
                        {"GetRootPieceIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTagScripts::FindNearbyPiecesJob::Execute(int32_t  index, ::UnityEngine::Jobs::TransformAccess  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FindNearbyPiecesJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Jobs::TransformAccess>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, transform);
}
inline void GorillaTagScripts::FindNearbyPiecesJob::CheckGridPlane(int32_t  gridPlaneIndex, int32_t  handPieceIndex, ::UnityEngine::Jobs::TransformAccess  transform, ::UnityEngine::Vector3  handPos, bool  isLeft, ::GlobalNamespace::NativeList_1_ParallelWriter<::GorillaTagScripts::BuilderGridPlaneData>  checkGridPlanes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FindNearbyPiecesJob>(),
                        {"CheckGridPlane", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Jobs::TransformAccess>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::NativeList_1_ParallelWriter<::GorillaTagScripts::BuilderGridPlaneData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, gridPlaneIndex, handPieceIndex, transform, handPos, isLeft, checkGridPlanes);
}
inline bool GorillaTagScripts::FindNearbyPiecesJob::CanPiecesPotentiallySnap(int32_t  localActorNumber, int32_t  pieceInHandIndex, int32_t  attachToPieceIndex, int32_t  attachToPieceRootIndex, int32_t  requestedParentPieceIndex, bool  isLeft)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FindNearbyPiecesJob>(),
                        {"CanPiecesPotentiallySnap", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, localActorNumber, pieceInHandIndex, attachToPieceIndex, attachToPieceRootIndex, requestedParentPieceIndex, isLeft);
}
inline bool GorillaTagScripts::FindNearbyPiecesJob::CanPlayerAttachToRootPiece(int32_t  playerActorNumber, int32_t  attachToPieceRootIndex, bool  isLeft)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FindNearbyPiecesJob>(),
                        {"CanPlayerAttachToRootPiece", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, playerActorNumber, attachToPieceRootIndex, isLeft);
}
inline bool GorillaTagScripts::FindNearbyPiecesJob::CanPlayerAttachToPlot(int32_t  privatePlotIndex, int32_t  actorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FindNearbyPiecesJob>(),
                        {"CanPlayerAttachToPlot", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, privatePlotIndex, actorNumber);
}
inline int32_t GorillaTagScripts::FindNearbyPiecesJob::GetPlayerIndex(int32_t  playerActorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FindNearbyPiecesJob>(),
                        {"GetPlayerIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, playerActorNumber);
}
inline int32_t GorillaTagScripts::FindNearbyPiecesJob::GetAttachedBuiltInPiece(int32_t  pieceIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FindNearbyPiecesJob>(),
                        {"GetAttachedBuiltInPiece", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, pieceIndex);
}
inline int32_t GorillaTagScripts::FindNearbyPiecesJob::GetRootPieceIndex(int32_t  pieceIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FindNearbyPiecesJob>(),
                        {"GetRootPieceIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, pieceIndex);
}
/// @brief Convert operator to "::UnityEngine::Jobs::IJobParallelForTransform"
constexpr  GorillaTagScripts::FindNearbyPiecesJob::operator ::UnityEngine::Jobs::IJobParallelForTransform*()  {
return static_cast<::UnityEngine::Jobs::IJobParallelForTransform*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Jobs::IJobParallelForTransform"
constexpr ::UnityEngine::Jobs::IJobParallelForTransform* GorillaTagScripts::FindNearbyPiecesJob::i___UnityEngine__Jobs__IJobParallelForTransform()  {
return static_cast<::UnityEngine::Jobs::IJobParallelForTransform*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "distanceThreshSq", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "leftHandPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "leftPieceInHandIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rightHandPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rightPieceInHandIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "localPlayerPlotIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "localPlayerActorNumber", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "pieceData", ty: "::Unity::Collections::NativeArray_1<::GorillaTagScripts::BuilderPieceData>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "gridPlaneData", ty: "::Unity::Collections::NativeArray_1<::GorillaTagScripts::BuilderGridPlaneData>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "privatePlotData", ty: "::Unity::Collections::NativeArray_1<::GorillaTagScripts::BuilderPrivatePlotData>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "playerData", ty: "::Unity::Collections::NativeArray_1<::GorillaTagScripts::BuilderPlayerData>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "leftHandGridPlanes", ty: "::GlobalNamespace::NativeList_1_ParallelWriter<::GorillaTagScripts::BuilderGridPlaneData>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rightHandGridPlanes", ty: "::GlobalNamespace::NativeList_1_ParallelWriter<::GorillaTagScripts::BuilderGridPlaneData>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GorillaTagScripts::FindNearbyPiecesJob::FindNearbyPiecesJob(float_t  distanceThreshSq, ::UnityEngine::Vector3  leftHandPos, int32_t  leftPieceInHandIndex, ::UnityEngine::Vector3  rightHandPos, int32_t  rightPieceInHandIndex, int32_t  localPlayerPlotIndex, int32_t  localPlayerActorNumber, ::Unity::Collections::NativeArray_1<::GorillaTagScripts::BuilderPieceData>  pieceData, ::Unity::Collections::NativeArray_1<::GorillaTagScripts::BuilderGridPlaneData>  gridPlaneData, ::Unity::Collections::NativeArray_1<::GorillaTagScripts::BuilderPrivatePlotData>  privatePlotData, ::Unity::Collections::NativeArray_1<::GorillaTagScripts::BuilderPlayerData>  playerData, ::GlobalNamespace::NativeList_1_ParallelWriter<::GorillaTagScripts::BuilderGridPlaneData>  leftHandGridPlanes, ::GlobalNamespace::NativeList_1_ParallelWriter<::GorillaTagScripts::BuilderGridPlaneData>  rightHandGridPlanes) noexcept  {
this->distanceThreshSq = distanceThreshSq;
this->leftHandPos = leftHandPos;
this->leftPieceInHandIndex = leftPieceInHandIndex;
this->rightHandPos = rightHandPos;
this->rightPieceInHandIndex = rightPieceInHandIndex;
this->localPlayerPlotIndex = localPlayerPlotIndex;
this->localPlayerActorNumber = localPlayerActorNumber;
this->pieceData = pieceData;
this->gridPlaneData = gridPlaneData;
this->privatePlotData = privatePlotData;
this->playerData = playerData;
this->leftHandGridPlanes = leftHandGridPlanes;
this->rightHandGridPlanes = rightHandGridPlanes;
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::FindNearbyPiecesJob::FindNearbyPiecesJob()   {
}
