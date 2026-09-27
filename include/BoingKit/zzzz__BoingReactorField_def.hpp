#pragma once
// IWYU pragma private; include "BoingKit/BoingReactorField.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BoingKit/zzzz__Aabb_def.hpp"
#include "BoingKit/zzzz__BoingBase_def.hpp"
#include "BoingKit/zzzz__BoingEffector_def.hpp"
#include "BoingKit/zzzz__BoingReactorField_CellMoveModeEnum_def.hpp"
#include "BoingKit/zzzz__BoingReactorField_FalloffDimensionsEnum_def.hpp"
#include "BoingKit/zzzz__BoingReactorField_FalloffModeEnum_def.hpp"
#include "BoingKit/zzzz__BoingReactorField_FieldParams_def.hpp"
#include "BoingKit/zzzz__BoingReactorField_HardwareModeEnum_def.hpp"
#include "BoingKit/zzzz__BoingWork_Params_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BoingReactorField)
namespace BoingKit {
class BoingReactorField_ComputeKernelId;
}
namespace BoingKit {
class BoingReactorField_ShaderPropertyIdSet;
}
namespace BoingKit {
class SharedBoingParams;
}
namespace GlobalNamespace {
struct BoingReactorField_CellMoveModeEnum;
}
namespace GlobalNamespace {
struct BoingReactorField_FalloffDimensionsEnum;
}
namespace GlobalNamespace {
struct BoingReactorField_FalloffModeEnum;
}
namespace GlobalNamespace {
struct BoingReactorField_FieldParams;
}
namespace GlobalNamespace {
struct BoingReactorField_HardwareModeEnum;
}
namespace GlobalNamespace {
struct Params_BoingWork_InstanceData;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Object;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace BoingKit {
class BoingReactorField;
}
namespace BoingKit {
class BoingReactorField_ComputeKernelId;
}
namespace BoingKit {
class BoingReactorField_ShaderPropertyIdSet;
}
// Write type traits
MARK_REF_T(::BoingKit::BoingReactorField*);
MARK_REF_T(::BoingKit::BoingReactorField_ComputeKernelId*);
MARK_REF_T(::BoingKit::BoingReactorField_ShaderPropertyIdSet*);
DEFINE_IL2CPP_CLASS(::BoingKit::BoingReactorField*, "BoingKit", "BoingReactorField");
DEFINE_IL2CPP_CLASS(::BoingKit::BoingReactorField_ComputeKernelId*, "BoingKit", "BoingReactorField/ComputeKernelId");
DEFINE_IL2CPP_CLASS(::BoingKit::BoingReactorField_ShaderPropertyIdSet*, "BoingKit", "BoingReactorField/ShaderPropertyIdSet");
// Dependencies BoingKit.Aabb, BoingKit.BoingBase, BoingKit.BoingEffector, BoingKit.BoingReactorField::CellMoveModeEnum, BoingKit.BoingReactorField::FalloffDimensionsEnum, BoingKit.BoingReactorField::FalloffModeEnum, BoingKit.BoingReactorField::FieldParams, BoingKit.BoingReactorField::HardwareModeEnum, BoingKit.BoingWork::Params, UnityEngine.Vector3
namespace BoingKit {
// Is value type: false
// CS Name: BoingKit.BoingReactorField
class CORDL_TYPE BoingReactorField : public ::BoingKit::BoingBase {
public:
// Declarations
using ComputeKernelId = ::BoingKit::BoingReactorField_ComputeKernelId;

using ShaderPropertyIdSet = ::BoingKit::BoingReactorField_ShaderPropertyIdSet;

using CellMoveModeEnum = ::GlobalNamespace::BoingReactorField_CellMoveModeEnum;

using FalloffDimensionsEnum = ::GlobalNamespace::BoingReactorField_FalloffDimensionsEnum;

using FalloffModeEnum = ::GlobalNamespace::BoingReactorField_FalloffModeEnum;

using FieldParams = ::GlobalNamespace::BoingReactorField_FieldParams;

using HardwareModeEnum = ::GlobalNamespace::BoingReactorField_HardwareModeEnum;

/// @brief Field AnchorPropagationAtBorder, offset 0x2a0, size 0x1 
 __declspec(property(get=__cordl_internal_get_AnchorPropagationAtBorder, put=__cordl_internal_set_AnchorPropagationAtBorder)) bool  AnchorPropagationAtBorder;

/// @brief Field CellMoveMode, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_CellMoveMode, put=__cordl_internal_set_CellMoveMode)) ::GlobalNamespace::BoingReactorField_CellMoveModeEnum  CellMoveMode;

/// @brief Field CellSize, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get_CellSize, put=__cordl_internal_set_CellSize)) float_t  CellSize;

/// @brief Field CellsX, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_CellsX, put=__cordl_internal_set_CellsX)) int32_t  CellsX;

/// @brief Field CellsY, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get_CellsY, put=__cordl_internal_set_CellsY)) int32_t  CellsY;

/// @brief Field CellsZ, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get_CellsZ, put=__cordl_internal_set_CellsZ)) int32_t  CellsZ;

/// @brief Field Effectors, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_Effectors, put=__cordl_internal_set_Effectors)) ::ArrayW<::UnityW<::BoingKit::BoingEffector>>  Effectors;

/// @brief Field EnablePositionEffect, offset 0x11f, size 0x1 
 __declspec(property(get=__cordl_internal_get_EnablePositionEffect, put=__cordl_internal_set_EnablePositionEffect)) bool  EnablePositionEffect;

/// @brief Field EnablePropagation, offset 0x290, size 0x1 
 __declspec(property(get=__cordl_internal_get_EnablePropagation, put=__cordl_internal_set_EnablePropagation)) bool  EnablePropagation;

/// @brief Field EnableRotationEffect, offset 0x120, size 0x1 
 __declspec(property(get=__cordl_internal_get_EnableRotationEffect, put=__cordl_internal_set_EnableRotationEffect)) bool  EnableRotationEffect;

/// @brief Field FalloffDimensions, offset 0xf4, size 0x4 
 __declspec(property(get=__cordl_internal_get_FalloffDimensions, put=__cordl_internal_set_FalloffDimensions)) ::GlobalNamespace::BoingReactorField_FalloffDimensionsEnum  FalloffDimensions;

/// @brief Field FalloffMode, offset 0xec, size 0x4 
 __declspec(property(get=__cordl_internal_get_FalloffMode, put=__cordl_internal_set_FalloffMode)) ::GlobalNamespace::BoingReactorField_FalloffModeEnum  FalloffMode;

/// @brief Field FalloffRatio, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get_FalloffRatio, put=__cordl_internal_set_FalloffRatio)) float_t  FalloffRatio;

/// @brief Field GlobalReactionUpVector, offset 0x121, size 0x1 
 __declspec(property(get=__cordl_internal_get_GlobalReactionUpVector, put=__cordl_internal_set_GlobalReactionUpVector)) bool  GlobalReactionUpVector;

 __declspec(property(get=get_GpuResourceSetId)) int32_t  GpuResourceSetId;

/// @brief Field HardwareMode, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get_HardwareMode, put=__cordl_internal_set_HardwareMode)) ::GlobalNamespace::BoingReactorField_HardwareModeEnum  HardwareMode;

/// @brief Field Params, offset 0x124, size 0x160 
 __declspec(property(get=__cordl_internal_get_Params, put=__cordl_internal_set_Params)) ::GlobalNamespace::BoingWork_Params  Params;

/// @brief Field PositionPropagation, offset 0x294, size 0x4 
 __declspec(property(get=__cordl_internal_get_PositionPropagation, put=__cordl_internal_set_PositionPropagation)) float_t  PositionPropagation;

/// @brief Field PropagationDepth, offset 0x29c, size 0x4 
 __declspec(property(get=__cordl_internal_get_PropagationDepth, put=__cordl_internal_set_PropagationDepth)) int32_t  PropagationDepth;

/// @brief Field RotationPropagation, offset 0x298, size 0x4 
 __declspec(property(get=__cordl_internal_get_RotationPropagation, put=__cordl_internal_set_RotationPropagation)) float_t  RotationPropagation;

/// @brief Field SharedParams, offset 0x288, size 0x8 
 __declspec(property(get=__cordl_internal_get_SharedParams, put=__cordl_internal_set_SharedParams)) ::UnityW<::BoingKit::SharedBoingParams>  SharedParams;

/// @brief Field TwoDDistanceCheck, offset 0x11c, size 0x1 
 __declspec(property(get=__cordl_internal_get_TwoDDistanceCheck, put=__cordl_internal_set_TwoDDistanceCheck)) bool  TwoDDistanceCheck;

/// @brief Field TwoDPositionInfluence, offset 0x11d, size 0x1 
 __declspec(property(get=__cordl_internal_get_TwoDPositionInfluence, put=__cordl_internal_set_TwoDPositionInfluence)) bool  TwoDPositionInfluence;

/// @brief Field TwoDRotationInfluence, offset 0x11e, size 0x1 
 __declspec(property(get=__cordl_internal_get_TwoDRotationInfluence, put=__cordl_internal_set_TwoDRotationInfluence)) bool  TwoDRotationInfluence;

/// @brief Field kPropagationFactor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_kPropagationFactor, put=setStaticF_kPropagationFactor)) float_t  kPropagationFactor;

/// @brief Field m_aCpuCell, offset 0x2a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_aCpuCell, put=__cordl_internal_set_m_aCpuCell)) ::System::Object*  m_aCpuCell;

/// @brief Field m_bounds, offset 0x104, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_bounds, put=__cordl_internal_set_m_bounds)) ::BoingKit::Aabb  m_bounds;

/// @brief Field m_cellBufferNeedsReset, offset 0x2f8, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_cellBufferNeedsReset, put=__cordl_internal_set_m_cellBufferNeedsReset)) bool  m_cellBufferNeedsReset;

/// @brief Field m_cellMoveMode, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_cellMoveMode, put=__cordl_internal_set_m_cellMoveMode)) ::GlobalNamespace::BoingReactorField_CellMoveModeEnum  m_cellMoveMode;

/// @brief Field m_cellsBuffer, offset 0x2d0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_cellsBuffer, put=__cordl_internal_set_m_cellsBuffer)) ::UnityEngine::ComputeBuffer*  m_cellsBuffer;

/// @brief Field m_cellsX, offset 0xd4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_cellsX, put=__cordl_internal_set_m_cellsX)) int32_t  m_cellsX;

/// @brief Field m_cellsY, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_cellsY, put=__cordl_internal_set_m_cellsY)) int32_t  m_cellsY;

/// @brief Field m_cellsZ, offset 0xdc, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_cellsZ, put=__cordl_internal_set_m_cellsZ)) int32_t  m_cellsZ;

/// @brief Field m_effectorIndexBuffer, offset 0x2b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_effectorIndexBuffer, put=__cordl_internal_set_m_effectorIndexBuffer)) ::UnityEngine::ComputeBuffer*  m_effectorIndexBuffer;

/// @brief Field m_fieldParams, offset 0x44, size 0x70 
 __declspec(property(get=__cordl_internal_get_m_fieldParams, put=__cordl_internal_set_m_fieldParams)) ::GlobalNamespace::BoingReactorField_FieldParams  m_fieldParams;

/// @brief Field m_fieldParamsBuffer, offset 0x2c8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_fieldParamsBuffer, put=__cordl_internal_set_m_fieldParamsBuffer)) ::UnityEngine::ComputeBuffer*  m_fieldParamsBuffer;

/// @brief Field m_gpuResourceSetId, offset 0x2d8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_gpuResourceSetId, put=__cordl_internal_set_m_gpuResourceSetId)) int32_t  m_gpuResourceSetId;

/// @brief Field m_gridCenter, offset 0x2e0, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_gridCenter, put=__cordl_internal_set_m_gridCenter)) ::UnityEngine::Vector3  m_gridCenter;

/// @brief Field m_hardwareMode, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_hardwareMode, put=__cordl_internal_set_m_hardwareMode)) ::GlobalNamespace::BoingReactorField_HardwareModeEnum  m_hardwareMode;

/// @brief Field m_iCellBaseX, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_iCellBaseX, put=__cordl_internal_set_m_iCellBaseX)) int32_t  m_iCellBaseX;

/// @brief Field m_iCellBaseY, offset 0xe4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_iCellBaseY, put=__cordl_internal_set_m_iCellBaseY)) int32_t  m_iCellBaseY;

/// @brief Field m_iCellBaseZ, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_iCellBaseZ, put=__cordl_internal_set_m_iCellBaseZ)) int32_t  m_iCellBaseZ;

/// @brief Field m_init, offset 0x2dc, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_init, put=__cordl_internal_set_m_init)) bool  m_init;

/// @brief Field m_numEffectors, offset 0x100, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_numEffectors, put=__cordl_internal_set_m_numEffectors)) int32_t  m_numEffectors;

/// @brief Field m_qPrevGridCenterNorm, offset 0x2ec, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_qPrevGridCenterNorm, put=__cordl_internal_set_m_qPrevGridCenterNorm)) ::UnityEngine::Vector3  m_qPrevGridCenterNorm;

/// @brief Field m_reactorParamsBuffer, offset 0x2c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_reactorParamsBuffer, put=__cordl_internal_set_m_reactorParamsBuffer)) ::UnityEngine::ComputeBuffer*  m_reactorParamsBuffer;

/// @brief Field m_shader, offset 0x2b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_shader, put=__cordl_internal_set_m_shader)) ::UnityW<::UnityEngine::ComputeShader>  m_shader;

/// @brief Field s_aCellOffset, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_aCellOffset, put=setStaticF_s_aCellOffset)) ::ArrayW<::UnityEngine::Vector3>  s_aCellOffset;

/// @brief Field s_aReactorParams, offset 0x300, size 0x8 
 __declspec(property(get=__cordl_internal_get_s_aReactorParams, put=__cordl_internal_set_s_aReactorParams)) ::ArrayW<::GlobalNamespace::BoingWork_Params>  s_aReactorParams;

/// @brief Field s_aSqrtInv, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_aSqrtInv, put=setStaticF_s_aSqrtInv)) ::ArrayW<float_t>  s_aSqrtInv;

/// @brief Field s_computeKernelId, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_computeKernelId, put=setStaticF_s_computeKernelId)) ::BoingKit::BoingReactorField_ComputeKernelId*  s_computeKernelId;

/// @brief Field s_shaderPropertyId, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_shaderPropertyId, put=setStaticF_s_shaderPropertyId)) ::BoingKit::BoingReactorField_ShaderPropertyIdSet*  s_shaderPropertyId;

/// @brief Method AccumulatePropagationWeightedNeighbor, addr 0x5e1f37c, size 0x5c, virtual false, abstract: false, final false
inline void AccumulatePropagationWeightedNeighbor(::by_ref<::GlobalNamespace::Params_BoingWork_InstanceData>  data, ::by_ref<::GlobalNamespace::Params_BoingWork_InstanceData>  neighbor, float_t  weight) ;

/// @brief Method AnchorPropagationBorder, addr 0x5e1f434, size 0x70, virtual false, abstract: false, final false
inline void AnchorPropagationBorder(::by_ref<::GlobalNamespace::Params_BoingWork_InstanceData>  data) ;

/// @brief Method DisposeCpuResources, addr 0x5e1bfc0, size 0x14, virtual false, abstract: false, final false
inline void DisposeCpuResources() ;

/// @brief Method DisposeGpuResources, addr 0x5e1bfd4, size 0xd0, virtual false, abstract: false, final false
inline void DisposeGpuResources() ;

/// @brief Method DrawGizmos, addr 0x5e1ffd4, size 0x910, virtual false, abstract: false, final false
inline void DrawGizmos(bool  drawEffectors) ;

/// @brief Method ExecuteCpu, addr 0x5e1fc10, size 0x398, virtual false, abstract: false, final false
inline void ExecuteCpu(float_t  dt) ;

/// @brief Method ExecuteGpu, addr 0x5e198b0, size 0x2f8, virtual false, abstract: false, final false
inline void ExecuteGpu(float_t  dt, ::UnityEngine::ComputeBuffer*  effectorParamsBuffer, ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  effectorParamsIndexMap) ;

/// @brief Method ExtendPropagationBorder, addr 0x5e1f314, size 0x68, virtual false, abstract: false, final false
inline void ExtendPropagationBorder(::by_ref<::GlobalNamespace::Params_BoingWork_InstanceData>  data, float_t  weight, int32_t  adjDeltaX, int32_t  adjDeltaY, int32_t  adjDeltaZ) ;

/// @brief Method FinishPrepareExecuteCpu, addr 0x5e1e74c, size 0x1f0, virtual false, abstract: false, final false
inline void FinishPrepareExecuteCpu() ;

/// @brief Method FinishPrepareExecuteGpu, addr 0x5e1e93c, size 0x9c, virtual false, abstract: false, final false
inline void FinishPrepareExecuteGpu() ;

/// @brief Method GatherPropagation, addr 0x5e1f3d8, size 0x5c, virtual false, abstract: false, final false
inline void GatherPropagation(::by_ref<::GlobalNamespace::Params_BoingWork_InstanceData>  data, float_t  weightSum) ;

/// @brief Method GetCellCenterOffset, addr 0x5e1cf48, size 0xc8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetCellCenterOffset(int32_t  x, int32_t  y, int32_t  z) ;

/// @brief Method GetGridCenter, addr 0x5e208e4, size 0x64, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetGridCenter() ;

/// @brief Method HandleCellMove, addr 0x5e1e3a8, size 0x3a4, virtual false, abstract: false, final false
inline void HandleCellMove() ;

/// @brief Method Init, addr 0x5e1d710, size 0x20, virtual false, abstract: false, final false
inline void Init() ;

/// @brief Method InitPropagationCpu, addr 0x5e1f1b8, size 0x70, virtual false, abstract: false, final false
inline void InitPropagationCpu(::by_ref<::GlobalNamespace::Params_BoingWork_InstanceData>  data) ;

static inline ::BoingKit::BoingReactorField* New_ctor() ;

/// @brief Method OnDisable, addr 0x5e1bf54, size 0x6c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDrawGizmosSelected, addr 0x5e1ffa8, size 0x2c, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method OnEnable, addr 0x5e1bedc, size 0x5c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PrepareExecute, addr 0x5e1d5ac, size 0x164, virtual false, abstract: false, final false
inline void PrepareExecute() ;

/// @brief Method PropagateCpu, addr 0x5e1f4a4, size 0x76c, virtual false, abstract: false, final false
inline void PropagateCpu(float_t  dt) ;

/// @brief Method PropagateSpringCpu, addr 0x5e1f228, size 0xec, virtual false, abstract: false, final false
inline void PropagateSpringCpu(::by_ref<::GlobalNamespace::Params_BoingWork_InstanceData>  data, float_t  dt) ;

/// @brief Method QuantizeNorm, addr 0x5e1bd44, size 0x198, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 QuantizeNorm(::UnityEngine::Vector3  p) ;

/// @brief Method Reboot, addr 0x5e1bbe4, size 0x160, virtual false, abstract: false, final false
inline void Reboot() ;

/// @brief Method ResolveCellIndex, addr 0x5e1d010, size 0xd8, virtual false, abstract: false, final false
inline void ResolveCellIndex(int32_t  x, int32_t  y, int32_t  z, int32_t  baseMult, ::by_ref<int32_t>  resX, ::by_ref<int32_t>  resY, ::by_ref<int32_t>  resZ) ;

/// @brief Method SampleCpuGrid, addr 0x5e1c0a4, size 0xea4, virtual false, abstract: false, final false
inline bool SampleCpuGrid(::UnityEngine::Vector3  p, ::by_ref<::UnityEngine::Vector3>  positionOffset, ::by_ref<::UnityEngine::Vector4>  rotationOffset) ;

/// @brief Method Sanitize, addr 0x5e1e9d8, size 0xc8, virtual false, abstract: false, final false
inline void Sanitize() ;

/// @brief Method Start, addr 0x5e1bf38, size 0x1c, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateBounds, addr 0x5e1d4dc, size 0xd0, virtual false, abstract: false, final false
inline void UpdateBounds() ;

/// @brief Method UpdateFieldParamsGpu, addr 0x5e1d0e8, size 0x348, virtual false, abstract: false, final false
inline void UpdateFieldParamsGpu() ;

/// @brief Method UpdateFlags, addr 0x5e1d430, size 0xac, virtual false, abstract: false, final false
inline void UpdateFlags() ;

/// @brief Method UpdateShaderConstants, addr 0x5e1b978, size 0x104, virtual false, abstract: false, final false
inline bool UpdateShaderConstants(::UnityEngine::Material*  material, float_t  positionSampleMultiplier, float_t  rotationSampleMultiplier) ;

/// @brief Method UpdateShaderConstants, addr 0x5e1b874, size 0x104, virtual false, abstract: false, final false
inline bool UpdateShaderConstants(::UnityEngine::MaterialPropertyBlock*  props, float_t  positionSampleMultiplier, float_t  rotationSampleMultiplier) ;

/// @brief Method ValidateCpuResources, addr 0x5e1d730, size 0x24c, virtual false, abstract: false, final false
inline void ValidateCpuResources() ;

/// @brief Method ValidateGpuResources, addr 0x5e1d97c, size 0xa2c, virtual false, abstract: false, final false
inline void ValidateGpuResources() ;

/// @brief Method WrapCpu, addr 0x5e1eaa0, size 0x54c, virtual false, abstract: false, final false
inline void WrapCpu(int32_t  deltaX, int32_t  deltaY, int32_t  deltaZ) ;

/// @brief Method WrapGpu, addr 0x5e1efec, size 0x1cc, virtual false, abstract: false, final false
inline void WrapGpu(int32_t  deltaX, int32_t  deltaY, int32_t  deltaZ) ;

constexpr bool const& __cordl_internal_get_AnchorPropagationAtBorder() const;

constexpr bool& __cordl_internal_get_AnchorPropagationAtBorder() ;

constexpr ::GlobalNamespace::BoingReactorField_CellMoveModeEnum const& __cordl_internal_get_CellMoveMode() const;

constexpr ::GlobalNamespace::BoingReactorField_CellMoveModeEnum& __cordl_internal_get_CellMoveMode() ;

constexpr float_t const& __cordl_internal_get_CellSize() const;

constexpr float_t& __cordl_internal_get_CellSize() ;

constexpr int32_t const& __cordl_internal_get_CellsX() const;

constexpr int32_t& __cordl_internal_get_CellsX() ;

constexpr int32_t const& __cordl_internal_get_CellsY() const;

constexpr int32_t& __cordl_internal_get_CellsY() ;

constexpr int32_t const& __cordl_internal_get_CellsZ() const;

constexpr int32_t& __cordl_internal_get_CellsZ() ;

constexpr ::ArrayW<::UnityW<::BoingKit::BoingEffector>> const& __cordl_internal_get_Effectors() const;

constexpr ::ArrayW<::UnityW<::BoingKit::BoingEffector>>& __cordl_internal_get_Effectors() ;

constexpr bool const& __cordl_internal_get_EnablePositionEffect() const;

constexpr bool& __cordl_internal_get_EnablePositionEffect() ;

constexpr bool const& __cordl_internal_get_EnablePropagation() const;

constexpr bool& __cordl_internal_get_EnablePropagation() ;

constexpr bool const& __cordl_internal_get_EnableRotationEffect() const;

constexpr bool& __cordl_internal_get_EnableRotationEffect() ;

constexpr ::GlobalNamespace::BoingReactorField_FalloffDimensionsEnum const& __cordl_internal_get_FalloffDimensions() const;

constexpr ::GlobalNamespace::BoingReactorField_FalloffDimensionsEnum& __cordl_internal_get_FalloffDimensions() ;

constexpr ::GlobalNamespace::BoingReactorField_FalloffModeEnum const& __cordl_internal_get_FalloffMode() const;

constexpr ::GlobalNamespace::BoingReactorField_FalloffModeEnum& __cordl_internal_get_FalloffMode() ;

constexpr float_t const& __cordl_internal_get_FalloffRatio() const;

constexpr float_t& __cordl_internal_get_FalloffRatio() ;

constexpr bool const& __cordl_internal_get_GlobalReactionUpVector() const;

constexpr bool& __cordl_internal_get_GlobalReactionUpVector() ;

constexpr ::GlobalNamespace::BoingReactorField_HardwareModeEnum const& __cordl_internal_get_HardwareMode() const;

constexpr ::GlobalNamespace::BoingReactorField_HardwareModeEnum& __cordl_internal_get_HardwareMode() ;

constexpr ::GlobalNamespace::BoingWork_Params const& __cordl_internal_get_Params() const;

constexpr ::GlobalNamespace::BoingWork_Params& __cordl_internal_get_Params() ;

constexpr float_t const& __cordl_internal_get_PositionPropagation() const;

constexpr float_t& __cordl_internal_get_PositionPropagation() ;

constexpr int32_t const& __cordl_internal_get_PropagationDepth() const;

constexpr int32_t& __cordl_internal_get_PropagationDepth() ;

constexpr float_t const& __cordl_internal_get_RotationPropagation() const;

constexpr float_t& __cordl_internal_get_RotationPropagation() ;

constexpr ::UnityW<::BoingKit::SharedBoingParams> const& __cordl_internal_get_SharedParams() const;

constexpr ::UnityW<::BoingKit::SharedBoingParams>& __cordl_internal_get_SharedParams() ;

constexpr bool const& __cordl_internal_get_TwoDDistanceCheck() const;

constexpr bool& __cordl_internal_get_TwoDDistanceCheck() ;

constexpr bool const& __cordl_internal_get_TwoDPositionInfluence() const;

constexpr bool& __cordl_internal_get_TwoDPositionInfluence() ;

constexpr bool const& __cordl_internal_get_TwoDRotationInfluence() const;

constexpr bool& __cordl_internal_get_TwoDRotationInfluence() ;

constexpr ::System::Object* const& __cordl_internal_get_m_aCpuCell() const;

constexpr ::System::Object*& __cordl_internal_get_m_aCpuCell() ;

constexpr ::BoingKit::Aabb const& __cordl_internal_get_m_bounds() const;

constexpr ::BoingKit::Aabb& __cordl_internal_get_m_bounds() ;

constexpr bool const& __cordl_internal_get_m_cellBufferNeedsReset() const;

constexpr bool& __cordl_internal_get_m_cellBufferNeedsReset() ;

constexpr ::GlobalNamespace::BoingReactorField_CellMoveModeEnum const& __cordl_internal_get_m_cellMoveMode() const;

constexpr ::GlobalNamespace::BoingReactorField_CellMoveModeEnum& __cordl_internal_get_m_cellMoveMode() ;

constexpr ::UnityEngine::ComputeBuffer* const& __cordl_internal_get_m_cellsBuffer() const;

constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get_m_cellsBuffer() ;

constexpr int32_t const& __cordl_internal_get_m_cellsX() const;

constexpr int32_t& __cordl_internal_get_m_cellsX() ;

constexpr int32_t const& __cordl_internal_get_m_cellsY() const;

constexpr int32_t& __cordl_internal_get_m_cellsY() ;

constexpr int32_t const& __cordl_internal_get_m_cellsZ() const;

constexpr int32_t& __cordl_internal_get_m_cellsZ() ;

constexpr ::UnityEngine::ComputeBuffer* const& __cordl_internal_get_m_effectorIndexBuffer() const;

constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get_m_effectorIndexBuffer() ;

constexpr ::GlobalNamespace::BoingReactorField_FieldParams const& __cordl_internal_get_m_fieldParams() const;

constexpr ::GlobalNamespace::BoingReactorField_FieldParams& __cordl_internal_get_m_fieldParams() ;

constexpr ::UnityEngine::ComputeBuffer* const& __cordl_internal_get_m_fieldParamsBuffer() const;

constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get_m_fieldParamsBuffer() ;

constexpr int32_t const& __cordl_internal_get_m_gpuResourceSetId() const;

constexpr int32_t& __cordl_internal_get_m_gpuResourceSetId() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_gridCenter() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_gridCenter() ;

constexpr ::GlobalNamespace::BoingReactorField_HardwareModeEnum const& __cordl_internal_get_m_hardwareMode() const;

constexpr ::GlobalNamespace::BoingReactorField_HardwareModeEnum& __cordl_internal_get_m_hardwareMode() ;

constexpr int32_t const& __cordl_internal_get_m_iCellBaseX() const;

constexpr int32_t& __cordl_internal_get_m_iCellBaseX() ;

constexpr int32_t const& __cordl_internal_get_m_iCellBaseY() const;

constexpr int32_t& __cordl_internal_get_m_iCellBaseY() ;

constexpr int32_t const& __cordl_internal_get_m_iCellBaseZ() const;

constexpr int32_t& __cordl_internal_get_m_iCellBaseZ() ;

constexpr bool const& __cordl_internal_get_m_init() const;

constexpr bool& __cordl_internal_get_m_init() ;

constexpr int32_t const& __cordl_internal_get_m_numEffectors() const;

constexpr int32_t& __cordl_internal_get_m_numEffectors() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_qPrevGridCenterNorm() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_qPrevGridCenterNorm() ;

constexpr ::UnityEngine::ComputeBuffer* const& __cordl_internal_get_m_reactorParamsBuffer() const;

constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get_m_reactorParamsBuffer() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_m_shader() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_m_shader() ;

constexpr ::ArrayW<::GlobalNamespace::BoingWork_Params> const& __cordl_internal_get_s_aReactorParams() const;

constexpr ::ArrayW<::GlobalNamespace::BoingWork_Params>& __cordl_internal_get_s_aReactorParams() ;

constexpr void __cordl_internal_set_AnchorPropagationAtBorder(bool  value) ;

constexpr void __cordl_internal_set_CellMoveMode(::GlobalNamespace::BoingReactorField_CellMoveModeEnum  value) ;

constexpr void __cordl_internal_set_CellSize(float_t  value) ;

constexpr void __cordl_internal_set_CellsX(int32_t  value) ;

constexpr void __cordl_internal_set_CellsY(int32_t  value) ;

constexpr void __cordl_internal_set_CellsZ(int32_t  value) ;

constexpr void __cordl_internal_set_Effectors(::ArrayW<::UnityW<::BoingKit::BoingEffector>>  value) ;

constexpr void __cordl_internal_set_EnablePositionEffect(bool  value) ;

constexpr void __cordl_internal_set_EnablePropagation(bool  value) ;

constexpr void __cordl_internal_set_EnableRotationEffect(bool  value) ;

constexpr void __cordl_internal_set_FalloffDimensions(::GlobalNamespace::BoingReactorField_FalloffDimensionsEnum  value) ;

constexpr void __cordl_internal_set_FalloffMode(::GlobalNamespace::BoingReactorField_FalloffModeEnum  value) ;

constexpr void __cordl_internal_set_FalloffRatio(float_t  value) ;

constexpr void __cordl_internal_set_GlobalReactionUpVector(bool  value) ;

constexpr void __cordl_internal_set_HardwareMode(::GlobalNamespace::BoingReactorField_HardwareModeEnum  value) ;

constexpr void __cordl_internal_set_Params(::GlobalNamespace::BoingWork_Params  value) ;

constexpr void __cordl_internal_set_PositionPropagation(float_t  value) ;

constexpr void __cordl_internal_set_PropagationDepth(int32_t  value) ;

constexpr void __cordl_internal_set_RotationPropagation(float_t  value) ;

constexpr void __cordl_internal_set_SharedParams(::UnityW<::BoingKit::SharedBoingParams>  value) ;

constexpr void __cordl_internal_set_TwoDDistanceCheck(bool  value) ;

constexpr void __cordl_internal_set_TwoDPositionInfluence(bool  value) ;

constexpr void __cordl_internal_set_TwoDRotationInfluence(bool  value) ;

constexpr void __cordl_internal_set_m_aCpuCell(::System::Object*  value) ;

constexpr void __cordl_internal_set_m_bounds(::BoingKit::Aabb  value) ;

constexpr void __cordl_internal_set_m_cellBufferNeedsReset(bool  value) ;

constexpr void __cordl_internal_set_m_cellMoveMode(::GlobalNamespace::BoingReactorField_CellMoveModeEnum  value) ;

constexpr void __cordl_internal_set_m_cellsBuffer(::UnityEngine::ComputeBuffer*  value) ;

constexpr void __cordl_internal_set_m_cellsX(int32_t  value) ;

constexpr void __cordl_internal_set_m_cellsY(int32_t  value) ;

constexpr void __cordl_internal_set_m_cellsZ(int32_t  value) ;

constexpr void __cordl_internal_set_m_effectorIndexBuffer(::UnityEngine::ComputeBuffer*  value) ;

constexpr void __cordl_internal_set_m_fieldParams(::GlobalNamespace::BoingReactorField_FieldParams  value) ;

constexpr void __cordl_internal_set_m_fieldParamsBuffer(::UnityEngine::ComputeBuffer*  value) ;

constexpr void __cordl_internal_set_m_gpuResourceSetId(int32_t  value) ;

constexpr void __cordl_internal_set_m_gridCenter(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_hardwareMode(::GlobalNamespace::BoingReactorField_HardwareModeEnum  value) ;

constexpr void __cordl_internal_set_m_iCellBaseX(int32_t  value) ;

constexpr void __cordl_internal_set_m_iCellBaseY(int32_t  value) ;

constexpr void __cordl_internal_set_m_iCellBaseZ(int32_t  value) ;

constexpr void __cordl_internal_set_m_init(bool  value) ;

constexpr void __cordl_internal_set_m_numEffectors(int32_t  value) ;

constexpr void __cordl_internal_set_m_qPrevGridCenterNorm(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_reactorParamsBuffer(::UnityEngine::ComputeBuffer*  value) ;

constexpr void __cordl_internal_set_m_shader(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set_s_aReactorParams(::ArrayW<::GlobalNamespace::BoingWork_Params>  value) ;

/// @brief Method .ctor, addr 0x5e1ba84, size 0x160, virtual false, abstract: false, final false
inline void _ctor() ;

static inline float_t getStaticF_kPropagationFactor() ;

static inline ::ArrayW<::UnityEngine::Vector3> getStaticF_s_aCellOffset() ;

static inline ::ArrayW<float_t> getStaticF_s_aSqrtInv() ;

static inline ::BoingKit::BoingReactorField_ComputeKernelId* getStaticF_s_computeKernelId() ;

static inline ::BoingKit::BoingReactorField_ShaderPropertyIdSet* getStaticF_s_shaderPropertyId() ;

/// @brief Method get_GpuResourceSetId, addr 0x5e1ba7c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_GpuResourceSetId() ;

/// @brief Method get_ShaderPropertyId, addr 0x5e1b7a8, size 0xcc, virtual false, abstract: false, final false
static inline ::BoingKit::BoingReactorField_ShaderPropertyIdSet* get_ShaderPropertyId() ;

static inline void setStaticF_kPropagationFactor(float_t  value) ;

static inline void setStaticF_s_aCellOffset(::ArrayW<::UnityEngine::Vector3>  value) ;

static inline void setStaticF_s_aSqrtInv(::ArrayW<float_t>  value) ;

static inline void setStaticF_s_computeKernelId(::BoingKit::BoingReactorField_ComputeKernelId*  value) ;

static inline void setStaticF_s_shaderPropertyId(::BoingKit::BoingReactorField_ShaderPropertyIdSet*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoingReactorField() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoingReactorField", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BoingReactorField(BoingReactorField && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoingReactorField", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoingReactorField(BoingReactorField const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5202};

/// @brief Field m_fieldParams, offset: 0x44, size: 0x70, def value: None
 ::GlobalNamespace::BoingReactorField_FieldParams  ___m_fieldParams;

/// @brief Field HardwareMode, offset: 0xb4, size: 0x4, def value: None
 ::GlobalNamespace::BoingReactorField_HardwareModeEnum  ___HardwareMode;

/// @brief Field m_hardwareMode, offset: 0xb8, size: 0x4, def value: None
 ::GlobalNamespace::BoingReactorField_HardwareModeEnum  ___m_hardwareMode;

/// @brief Field CellMoveMode, offset: 0xbc, size: 0x4, def value: None
 ::GlobalNamespace::BoingReactorField_CellMoveModeEnum  ___CellMoveMode;

/// @brief Field m_cellMoveMode, offset: 0xc0, size: 0x4, def value: None
 ::GlobalNamespace::BoingReactorField_CellMoveModeEnum  ___m_cellMoveMode;

/// [Range(0.1, 10)]
/// @brief Field CellSize, offset: 0xc4, size: 0x4, def value: None
 float_t  ___CellSize;

/// @brief Field CellsX, offset: 0xc8, size: 0x4, def value: None
 int32_t  ___CellsX;

/// @brief Field CellsY, offset: 0xcc, size: 0x4, def value: None
 int32_t  ___CellsY;

/// @brief Field CellsZ, offset: 0xd0, size: 0x4, def value: None
 int32_t  ___CellsZ;

/// @brief Field m_cellsX, offset: 0xd4, size: 0x4, def value: None
 int32_t  ___m_cellsX;

/// @brief Field m_cellsY, offset: 0xd8, size: 0x4, def value: None
 int32_t  ___m_cellsY;

/// @brief Field m_cellsZ, offset: 0xdc, size: 0x4, def value: None
 int32_t  ___m_cellsZ;

/// @brief Field m_iCellBaseX, offset: 0xe0, size: 0x4, def value: None
 int32_t  ___m_iCellBaseX;

/// @brief Field m_iCellBaseY, offset: 0xe4, size: 0x4, def value: None
 int32_t  ___m_iCellBaseY;

/// @brief Field m_iCellBaseZ, offset: 0xe8, size: 0x4, def value: None
 int32_t  ___m_iCellBaseZ;

/// @brief Field FalloffMode, offset: 0xec, size: 0x4, def value: None
 ::GlobalNamespace::BoingReactorField_FalloffModeEnum  ___FalloffMode;

/// [Range(0, 1)]
/// @brief Field FalloffRatio, offset: 0xf0, size: 0x4, def value: None
 float_t  ___FalloffRatio;

/// @brief Field FalloffDimensions, offset: 0xf4, size: 0x4, def value: None
 ::GlobalNamespace::BoingReactorField_FalloffDimensionsEnum  ___FalloffDimensions;

/// @brief Field Effectors, offset: 0xf8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::BoingKit::BoingEffector>>  ___Effectors;

/// @brief Field m_numEffectors, offset: 0x100, size: 0x4, def value: None
 int32_t  ___m_numEffectors;

/// @brief Field m_bounds, offset: 0x104, size: 0x18, def value: None
 ::BoingKit::Aabb  ___m_bounds;

/// @brief Field TwoDDistanceCheck, offset: 0x11c, size: 0x1, def value: None
 bool  ___TwoDDistanceCheck;

/// @brief Field TwoDPositionInfluence, offset: 0x11d, size: 0x1, def value: None
 bool  ___TwoDPositionInfluence;

/// @brief Field TwoDRotationInfluence, offset: 0x11e, size: 0x1, def value: None
 bool  ___TwoDRotationInfluence;

/// @brief Field EnablePositionEffect, offset: 0x11f, size: 0x1, def value: None
 bool  ___EnablePositionEffect;

/// @brief Field EnableRotationEffect, offset: 0x120, size: 0x1, def value: None
 bool  ___EnableRotationEffect;

/// @brief Field GlobalReactionUpVector, offset: 0x121, size: 0x1, def value: None
 bool  ___GlobalReactionUpVector;

/// @brief Field Params, offset: 0x124, size: 0x160, def value: None
 ::GlobalNamespace::BoingWork_Params  ___Params;

/// @brief Field SharedParams, offset: 0x288, size: 0x8, def value: None
 ::UnityW<::BoingKit::SharedBoingParams>  ___SharedParams;

/// @brief Field EnablePropagation, offset: 0x290, size: 0x1, def value: None
 bool  ___EnablePropagation;

/// [Range(0, 1)]
/// @brief Field PositionPropagation, offset: 0x294, size: 0x4, def value: None
 float_t  ___PositionPropagation;

/// [Range(0, 1)]
/// @brief Field RotationPropagation, offset: 0x298, size: 0x4, def value: None
 float_t  ___RotationPropagation;

/// [Range(1, 3)]
/// @brief Field PropagationDepth, offset: 0x29c, size: 0x4, def value: None
 int32_t  ___PropagationDepth;

/// @brief Field AnchorPropagationAtBorder, offset: 0x2a0, size: 0x1, def value: None
 bool  ___AnchorPropagationAtBorder;

/// @brief Field m_aCpuCell, offset: 0x2a8, size: 0x8, def value: None
 ::System::Object*  ___m_aCpuCell;

/// @brief Field m_shader, offset: 0x2b0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ___m_shader;

/// @brief Field m_effectorIndexBuffer, offset: 0x2b8, size: 0x8, def value: None
 ::UnityEngine::ComputeBuffer*  ___m_effectorIndexBuffer;

/// @brief Field m_reactorParamsBuffer, offset: 0x2c0, size: 0x8, def value: None
 ::UnityEngine::ComputeBuffer*  ___m_reactorParamsBuffer;

/// @brief Field m_fieldParamsBuffer, offset: 0x2c8, size: 0x8, def value: None
 ::UnityEngine::ComputeBuffer*  ___m_fieldParamsBuffer;

/// @brief Field m_cellsBuffer, offset: 0x2d0, size: 0x8, def value: None
 ::UnityEngine::ComputeBuffer*  ___m_cellsBuffer;

/// @brief Field m_gpuResourceSetId, offset: 0x2d8, size: 0x4, def value: None
 int32_t  ___m_gpuResourceSetId;

/// @brief Field m_init, offset: 0x2dc, size: 0x1, def value: None
 bool  ___m_init;

/// @brief Field m_gridCenter, offset: 0x2e0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_gridCenter;

/// @brief Field m_qPrevGridCenterNorm, offset: 0x2ec, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_qPrevGridCenterNorm;

/// @brief Field m_cellBufferNeedsReset, offset: 0x2f8, size: 0x1, def value: None
 bool  ___m_cellBufferNeedsReset;

/// @brief Field s_aReactorParams, offset: 0x300, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::BoingWork_Params>  ___s_aReactorParams;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BoingKit::BoingReactorField, ___m_fieldParams) == 0x44, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField, ___HardwareMode) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField, ___m_hardwareMode) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField, ___CellMoveMode) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField, ___m_cellMoveMode) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField, ___CellSize) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField, ___CellsX) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField, ___CellsY) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField, ___CellsZ) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField, ___m_cellsX) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField, ___m_cellsY) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField, ___m_cellsZ) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField, ___m_iCellBaseX) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField, ___m_iCellBaseY) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField, ___m_iCellBaseZ) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField, ___FalloffMode) == 0xec, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField, ___FalloffRatio) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField, ___FalloffDimensions) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField, ___Effectors) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField, ___m_numEffectors) == 0x100, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField, ___m_bounds) == 0x104, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField, ___TwoDDistanceCheck) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField, ___TwoDPositionInfluence) == 0x11d, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField, ___TwoDRotationInfluence) == 0x11e, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField, ___EnablePositionEffect) == 0x11f, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField, ___EnableRotationEffect) == 0x120, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField, ___GlobalReactionUpVector) == 0x121, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField, ___Params) == 0x124, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField, ___SharedParams) == 0x288, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField, ___EnablePropagation) == 0x290, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField, ___PositionPropagation) == 0x294, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField, ___RotationPropagation) == 0x298, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField, ___PropagationDepth) == 0x29c, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField, ___AnchorPropagationAtBorder) == 0x2a0, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField, ___m_aCpuCell) == 0x2a8, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField, ___m_shader) == 0x2b0, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField, ___m_effectorIndexBuffer) == 0x2b8, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField, ___m_reactorParamsBuffer) == 0x2c0, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField, ___m_fieldParamsBuffer) == 0x2c8, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField, ___m_cellsBuffer) == 0x2d0, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField, ___m_gpuResourceSetId) == 0x2d8, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField, ___m_init) == 0x2dc, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField, ___m_gridCenter) == 0x2e0, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField, ___m_qPrevGridCenterNorm) == 0x2ec, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField, ___m_cellBufferNeedsReset) == 0x2f8, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField, ___s_aReactorParams) == 0x300, "Offset mismatch!");

static_assert(sizeof(::BoingKit::BoingReactorField) == 0x308, "Size mismatch!");

} // namespace end def BoingKit
// Dependencies System.Object
namespace BoingKit {
// Is value type: false
// CS Name: BoingKit.BoingReactorField/ComputeKernelId
class CORDL_TYPE BoingReactorField_ComputeKernelId : public ::System::Object {
public:
// Declarations
/// @brief Field ExecuteKernel, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_ExecuteKernel, put=__cordl_internal_set_ExecuteKernel)) int32_t  ExecuteKernel;

/// @brief Field InitKernel, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_InitKernel, put=__cordl_internal_set_InitKernel)) int32_t  InitKernel;

/// @brief Field MoveKernel, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_MoveKernel, put=__cordl_internal_set_MoveKernel)) int32_t  MoveKernel;

/// @brief Field WrapXKernel, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_WrapXKernel, put=__cordl_internal_set_WrapXKernel)) int32_t  WrapXKernel;

/// @brief Field WrapYKernel, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_WrapYKernel, put=__cordl_internal_set_WrapYKernel)) int32_t  WrapYKernel;

/// @brief Field WrapZKernel, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_WrapZKernel, put=__cordl_internal_set_WrapZKernel)) int32_t  WrapZKernel;

static inline ::BoingKit::BoingReactorField_ComputeKernelId* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_ExecuteKernel() const;

constexpr int32_t& __cordl_internal_get_ExecuteKernel() ;

constexpr int32_t const& __cordl_internal_get_InitKernel() const;

constexpr int32_t& __cordl_internal_get_InitKernel() ;

constexpr int32_t const& __cordl_internal_get_MoveKernel() const;

constexpr int32_t& __cordl_internal_get_MoveKernel() ;

constexpr int32_t const& __cordl_internal_get_WrapXKernel() const;

constexpr int32_t& __cordl_internal_get_WrapXKernel() ;

constexpr int32_t const& __cordl_internal_get_WrapYKernel() const;

constexpr int32_t& __cordl_internal_get_WrapYKernel() ;

constexpr int32_t const& __cordl_internal_get_WrapZKernel() const;

constexpr int32_t& __cordl_internal_get_WrapZKernel() ;

constexpr void __cordl_internal_set_ExecuteKernel(int32_t  value) ;

constexpr void __cordl_internal_set_InitKernel(int32_t  value) ;

constexpr void __cordl_internal_set_MoveKernel(int32_t  value) ;

constexpr void __cordl_internal_set_WrapXKernel(int32_t  value) ;

constexpr void __cordl_internal_set_WrapYKernel(int32_t  value) ;

constexpr void __cordl_internal_set_WrapZKernel(int32_t  value) ;

/// @brief Method .ctor, addr 0x5e20cc8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoingReactorField_ComputeKernelId() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoingReactorField_ComputeKernelId", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BoingReactorField_ComputeKernelId(BoingReactorField_ComputeKernelId && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoingReactorField_ComputeKernelId", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoingReactorField_ComputeKernelId(BoingReactorField_ComputeKernelId const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5201};

/// @brief Field InitKernel, offset: 0x10, size: 0x4, def value: None
 int32_t  ___InitKernel;

/// @brief Field MoveKernel, offset: 0x14, size: 0x4, def value: None
 int32_t  ___MoveKernel;

/// @brief Field WrapXKernel, offset: 0x18, size: 0x4, def value: None
 int32_t  ___WrapXKernel;

/// @brief Field WrapYKernel, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___WrapYKernel;

/// @brief Field WrapZKernel, offset: 0x20, size: 0x4, def value: None
 int32_t  ___WrapZKernel;

/// @brief Field ExecuteKernel, offset: 0x24, size: 0x4, def value: None
 int32_t  ___ExecuteKernel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BoingKit::BoingReactorField_ComputeKernelId, ___InitKernel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField_ComputeKernelId, ___MoveKernel) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField_ComputeKernelId, ___WrapXKernel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField_ComputeKernelId, ___WrapYKernel) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField_ComputeKernelId, ___WrapZKernel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField_ComputeKernelId, ___ExecuteKernel) == 0x24, "Offset mismatch!");

static_assert(sizeof(::BoingKit::BoingReactorField_ComputeKernelId) == 0x28, "Size mismatch!");

} // namespace end def BoingKit
// Dependencies System.Object
namespace BoingKit {
// Is value type: false
// CS Name: BoingKit.BoingReactorField/ShaderPropertyIdSet
class CORDL_TYPE BoingReactorField_ShaderPropertyIdSet : public ::System::Object {
public:
// Declarations
/// @brief Field ComputeCells, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_ComputeCells, put=__cordl_internal_set_ComputeCells)) int32_t  ComputeCells;

/// @brief Field ComputeFieldParams, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_ComputeFieldParams, put=__cordl_internal_set_ComputeFieldParams)) int32_t  ComputeFieldParams;

/// @brief Field EffectorIndices, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_EffectorIndices, put=__cordl_internal_set_EffectorIndices)) int32_t  EffectorIndices;

/// @brief Field Effectors, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Effectors, put=__cordl_internal_set_Effectors)) int32_t  Effectors;

/// @brief Field MoveParams, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_MoveParams, put=__cordl_internal_set_MoveParams)) int32_t  MoveParams;

/// @brief Field PositionSampleMultiplier, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_PositionSampleMultiplier, put=__cordl_internal_set_PositionSampleMultiplier)) int32_t  PositionSampleMultiplier;

/// @brief Field PropagationParams, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_PropagationParams, put=__cordl_internal_set_PropagationParams)) int32_t  PropagationParams;

/// @brief Field ReactorParams, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_ReactorParams, put=__cordl_internal_set_ReactorParams)) int32_t  ReactorParams;

/// @brief Field RenderCells, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_RenderCells, put=__cordl_internal_set_RenderCells)) int32_t  RenderCells;

/// @brief Field RenderFieldParams, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_RenderFieldParams, put=__cordl_internal_set_RenderFieldParams)) int32_t  RenderFieldParams;

/// @brief Field RotationSampleMultiplier, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_RotationSampleMultiplier, put=__cordl_internal_set_RotationSampleMultiplier)) int32_t  RotationSampleMultiplier;

/// @brief Field WrapParams, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_WrapParams, put=__cordl_internal_set_WrapParams)) int32_t  WrapParams;

static inline ::BoingKit::BoingReactorField_ShaderPropertyIdSet* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_ComputeCells() const;

constexpr int32_t& __cordl_internal_get_ComputeCells() ;

constexpr int32_t const& __cordl_internal_get_ComputeFieldParams() const;

constexpr int32_t& __cordl_internal_get_ComputeFieldParams() ;

constexpr int32_t const& __cordl_internal_get_EffectorIndices() const;

constexpr int32_t& __cordl_internal_get_EffectorIndices() ;

constexpr int32_t const& __cordl_internal_get_Effectors() const;

constexpr int32_t& __cordl_internal_get_Effectors() ;

constexpr int32_t const& __cordl_internal_get_MoveParams() const;

constexpr int32_t& __cordl_internal_get_MoveParams() ;

constexpr int32_t const& __cordl_internal_get_PositionSampleMultiplier() const;

constexpr int32_t& __cordl_internal_get_PositionSampleMultiplier() ;

constexpr int32_t const& __cordl_internal_get_PropagationParams() const;

constexpr int32_t& __cordl_internal_get_PropagationParams() ;

constexpr int32_t const& __cordl_internal_get_ReactorParams() const;

constexpr int32_t& __cordl_internal_get_ReactorParams() ;

constexpr int32_t const& __cordl_internal_get_RenderCells() const;

constexpr int32_t& __cordl_internal_get_RenderCells() ;

constexpr int32_t const& __cordl_internal_get_RenderFieldParams() const;

constexpr int32_t& __cordl_internal_get_RenderFieldParams() ;

constexpr int32_t const& __cordl_internal_get_RotationSampleMultiplier() const;

constexpr int32_t& __cordl_internal_get_RotationSampleMultiplier() ;

constexpr int32_t const& __cordl_internal_get_WrapParams() const;

constexpr int32_t& __cordl_internal_get_WrapParams() ;

constexpr void __cordl_internal_set_ComputeCells(int32_t  value) ;

constexpr void __cordl_internal_set_ComputeFieldParams(int32_t  value) ;

constexpr void __cordl_internal_set_EffectorIndices(int32_t  value) ;

constexpr void __cordl_internal_set_Effectors(int32_t  value) ;

constexpr void __cordl_internal_set_MoveParams(int32_t  value) ;

constexpr void __cordl_internal_set_PositionSampleMultiplier(int32_t  value) ;

constexpr void __cordl_internal_set_PropagationParams(int32_t  value) ;

constexpr void __cordl_internal_set_ReactorParams(int32_t  value) ;

constexpr void __cordl_internal_set_RenderCells(int32_t  value) ;

constexpr void __cordl_internal_set_RenderFieldParams(int32_t  value) ;

constexpr void __cordl_internal_set_RotationSampleMultiplier(int32_t  value) ;

constexpr void __cordl_internal_set_WrapParams(int32_t  value) ;

/// @brief Method .ctor, addr 0x5e20a28, size 0x234, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoingReactorField_ShaderPropertyIdSet() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoingReactorField_ShaderPropertyIdSet", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BoingReactorField_ShaderPropertyIdSet(BoingReactorField_ShaderPropertyIdSet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoingReactorField_ShaderPropertyIdSet", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoingReactorField_ShaderPropertyIdSet(BoingReactorField_ShaderPropertyIdSet const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5199};

/// @brief Field MoveParams, offset: 0x10, size: 0x4, def value: None
 int32_t  ___MoveParams;

/// @brief Field WrapParams, offset: 0x14, size: 0x4, def value: None
 int32_t  ___WrapParams;

/// @brief Field Effectors, offset: 0x18, size: 0x4, def value: None
 int32_t  ___Effectors;

/// @brief Field EffectorIndices, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___EffectorIndices;

/// @brief Field ReactorParams, offset: 0x20, size: 0x4, def value: None
 int32_t  ___ReactorParams;

/// @brief Field ComputeFieldParams, offset: 0x24, size: 0x4, def value: None
 int32_t  ___ComputeFieldParams;

/// @brief Field ComputeCells, offset: 0x28, size: 0x4, def value: None
 int32_t  ___ComputeCells;

/// @brief Field RenderFieldParams, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___RenderFieldParams;

/// @brief Field RenderCells, offset: 0x30, size: 0x4, def value: None
 int32_t  ___RenderCells;

/// @brief Field PositionSampleMultiplier, offset: 0x34, size: 0x4, def value: None
 int32_t  ___PositionSampleMultiplier;

/// @brief Field RotationSampleMultiplier, offset: 0x38, size: 0x4, def value: None
 int32_t  ___RotationSampleMultiplier;

/// @brief Field PropagationParams, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___PropagationParams;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BoingKit::BoingReactorField_ShaderPropertyIdSet, ___MoveParams) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField_ShaderPropertyIdSet, ___WrapParams) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField_ShaderPropertyIdSet, ___Effectors) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField_ShaderPropertyIdSet, ___EffectorIndices) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField_ShaderPropertyIdSet, ___ReactorParams) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField_ShaderPropertyIdSet, ___ComputeFieldParams) == 0x24, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField_ShaderPropertyIdSet, ___ComputeCells) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField_ShaderPropertyIdSet, ___RenderFieldParams) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField_ShaderPropertyIdSet, ___RenderCells) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField_ShaderPropertyIdSet, ___PositionSampleMultiplier) == 0x34, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField_ShaderPropertyIdSet, ___RotationSampleMultiplier) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorField_ShaderPropertyIdSet, ___PropagationParams) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::BoingKit::BoingReactorField_ShaderPropertyIdSet) == 0x40, "Size mismatch!");

} // namespace end def BoingKit
