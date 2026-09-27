#pragma once
// IWYU pragma private; include "BoingKit/BoingWork_Params_InstanceData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BoingKit/zzzz__QuaternionSpring_def.hpp"
#include "BoingKit/zzzz__Vector3Spring_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BoingWork_Params_InstanceData)
namespace BoingKit {
class BoingBones;
}
namespace GlobalNamespace {
struct BoingEffector_Params;
}
namespace GlobalNamespace {
struct BoingWork_Params;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct Params_BoingWork_InstanceData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Params_BoingWork_InstanceData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Params_BoingWork_InstanceData, "BoingKit", "BoingWork/Params/InstanceData");
// Dependencies BoingKit.QuaternionSpring, BoingKit.Vector3Spring, UnityEngine.Vector3, UnityEngine.Vector4
namespace GlobalNamespace {
// Is value type: true
// CS Name: BoingKit.BoingWork/Params/InstanceData
struct CORDL_TYPE Params_BoingWork_InstanceData {
public:
// Declarations
/// @brief Field Stride, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Stride, put=setStaticF_Stride)) int32_t  Stride;

/// @brief Method AccumulateTarget, addr 0x5e21abc, size 0xa40, virtual false, abstract: false, final false
inline void AccumulateTarget(::by_ref<::GlobalNamespace::BoingWork_Params>  p, ::by_ref<::GlobalNamespace::BoingEffector_Params>  effector, float_t  dt) ;

/// @brief Method EndAccumulateTargets, addr 0x5e22550, size 0x14c, virtual false, abstract: false, final false
inline void EndAccumulateTargets(::by_ref<::GlobalNamespace::BoingWork_Params>  p) ;

/// @brief Method Execute, addr 0x5e22704, size 0x7fc, virtual false, abstract: false, final false
inline void Execute(::by_ref<::GlobalNamespace::BoingWork_Params>  p, float_t  dt) ;

/// @brief Method PrepareExecute, addr 0x5e25cc8, size 0x204, virtual false, abstract: false, final false
inline void PrepareExecute(::by_ref<::GlobalNamespace::BoingWork_Params>  p, ::UnityEngine::Vector3  gridCenter, ::UnityEngine::Quaternion  gridRotation, ::UnityEngine::Vector3  cellOffset) ;

/// @brief Method PrepareExecute, addr 0x5e25a4c, size 0x254, virtual false, abstract: false, final false
inline void PrepareExecute(::by_ref<::GlobalNamespace::BoingWork_Params>  p, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  scale, bool  accumulateEffectors) ;

/// @brief Method PullResults, addr 0x5e24c84, size 0xa70, virtual false, abstract: false, final false
inline void PullResults(::BoingKit::BoingBones*  bones) ;

/// @brief Method Reset, addr 0x5e21918, size 0x12c, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method Reset, addr 0x5e2588c, size 0x160, virtual false, abstract: false, final false
inline void Reset(::UnityEngine::Vector3  position, bool  instantAccumulation) ;

/// @brief Method SuppressWarnings, addr 0x5e26e7c, size 0x18, virtual false, abstract: false, final false
inline void SuppressWarnings() ;

static inline int32_t getStaticF_Stride() ;

static inline void setStaticF_Stride(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Params_BoingWork_InstanceData() ;

// Ctor Parameters [CppParam { name: "PositionTarget", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_padding0", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "PositionOrigin", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_padding1", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "RotationTarget", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None, comment: None }, CppParam { name: "RotationOrigin", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None, comment: None }, CppParam { name: "ScaleTarget", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_padding2", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_numEffectors", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_instantAccumulation", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_padding3", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_padding4", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_upWs", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_minScale", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "PositionSpring", ty: "::BoingKit::Vector3Spring", modifiers: "", def_value: None, comment: None }, CppParam { name: "RotationSpring", ty: "::BoingKit::QuaternionSpring", modifiers: "", def_value: None, comment: None }, CppParam { name: "ScaleSpring", ty: "::BoingKit::Vector3Spring", modifiers: "", def_value: None, comment: None }, CppParam { name: "PositionPropagationWorkData", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_padding5", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "RotationPropagationWorkData", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None, comment: None }]
constexpr Params_BoingWork_InstanceData(::UnityEngine::Vector3  PositionTarget, float_t  m_padding0, ::UnityEngine::Vector3  PositionOrigin, float_t  m_padding1, ::UnityEngine::Vector4  RotationTarget, ::UnityEngine::Vector4  RotationOrigin, ::UnityEngine::Vector3  ScaleTarget, float_t  m_padding2, int32_t  m_numEffectors, int32_t  m_instantAccumulation, int32_t  m_padding3, int32_t  m_padding4, ::UnityEngine::Vector3  m_upWs, float_t  m_minScale, ::BoingKit::Vector3Spring  PositionSpring, ::BoingKit::QuaternionSpring  RotationSpring, ::BoingKit::Vector3Spring  ScaleSpring, ::UnityEngine::Vector3  PositionPropagationWorkData, float_t  m_padding5, ::UnityEngine::Vector4  RotationPropagationWorkData) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5207};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xf0};

/// @brief Field PositionTarget, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  PositionTarget;

/// @brief Field m_padding0, offset: 0xc, size: 0x4, def value: None
 float_t  m_padding0;

/// @brief Field PositionOrigin, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  PositionOrigin;

/// @brief Field m_padding1, offset: 0x1c, size: 0x4, def value: None
 float_t  m_padding1;

/// @brief Field RotationTarget, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Vector4  RotationTarget;

/// @brief Field RotationOrigin, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Vector4  RotationOrigin;

/// @brief Field ScaleTarget, offset: 0x40, size: 0xc, def value: None
 ::UnityEngine::Vector3  ScaleTarget;

/// @brief Field m_padding2, offset: 0x4c, size: 0x4, def value: None
 float_t  m_padding2;

/// @brief Field m_numEffectors, offset: 0x50, size: 0x4, def value: None
 int32_t  m_numEffectors;

/// @brief Field m_instantAccumulation, offset: 0x54, size: 0x4, def value: None
 int32_t  m_instantAccumulation;

/// @brief Field m_padding3, offset: 0x58, size: 0x4, def value: None
 int32_t  m_padding3;

/// @brief Field m_padding4, offset: 0x5c, size: 0x4, def value: None
 int32_t  m_padding4;

/// @brief Field m_upWs, offset: 0x60, size: 0xc, def value: None
 ::UnityEngine::Vector3  m_upWs;

/// @brief Field m_minScale, offset: 0x6c, size: 0x4, def value: None
 float_t  m_minScale;

/// @brief Field PositionSpring, offset: 0x70, size: 0x20, def value: None
 ::BoingKit::Vector3Spring  PositionSpring;

/// @brief Field RotationSpring, offset: 0x90, size: 0x20, def value: None
 ::BoingKit::QuaternionSpring  RotationSpring;

/// @brief Field ScaleSpring, offset: 0xb0, size: 0x20, def value: None
 ::BoingKit::Vector3Spring  ScaleSpring;

/// @brief Field PositionPropagationWorkData, offset: 0xd0, size: 0xc, def value: None
 ::UnityEngine::Vector3  PositionPropagationWorkData;

/// @brief Field m_padding5, offset: 0xdc, size: 0x4, def value: None
 float_t  m_padding5;

/// @brief Field RotationPropagationWorkData, offset: 0xe0, size: 0x10, def value: None
 ::UnityEngine::Vector4  RotationPropagationWorkData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Params_BoingWork_InstanceData, PositionTarget) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Params_BoingWork_InstanceData, m_padding0) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Params_BoingWork_InstanceData, PositionOrigin) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Params_BoingWork_InstanceData, m_padding1) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Params_BoingWork_InstanceData, RotationTarget) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Params_BoingWork_InstanceData, RotationOrigin) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Params_BoingWork_InstanceData, ScaleTarget) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Params_BoingWork_InstanceData, m_padding2) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Params_BoingWork_InstanceData, m_numEffectors) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Params_BoingWork_InstanceData, m_instantAccumulation) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Params_BoingWork_InstanceData, m_padding3) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Params_BoingWork_InstanceData, m_padding4) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Params_BoingWork_InstanceData, m_upWs) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Params_BoingWork_InstanceData, m_minScale) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Params_BoingWork_InstanceData, PositionSpring) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Params_BoingWork_InstanceData, RotationSpring) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Params_BoingWork_InstanceData, ScaleSpring) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Params_BoingWork_InstanceData, PositionPropagationWorkData) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Params_BoingWork_InstanceData, m_padding5) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Params_BoingWork_InstanceData, RotationPropagationWorkData) == 0xe0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Params_BoingWork_InstanceData) == 0xf0, "Size mismatch!");

} // namespace end def GlobalNamespace
