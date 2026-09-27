#pragma once
// IWYU pragma private; include "BoingKit/BoingWork_Params.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BoingKit/zzzz__Bits32_def.hpp"
#include "BoingKit/zzzz__BoingWork_Params_InstanceData_def.hpp"
#include "BoingKit/zzzz__ParameterMode_def.hpp"
#include "BoingKit/zzzz__TwoDPlaneEnum_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BoingWork_Params)
namespace BoingKit {
class BoingBones;
}
namespace GlobalNamespace {
struct BoingEffector_Params;
}
namespace GlobalNamespace {
struct Params_BoingWork_InstanceData;
}
// Forward declare root types
namespace GlobalNamespace {
struct BoingWork_Params;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BoingWork_Params);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BoingWork_Params, "BoingKit", "BoingWork/Params");
// Dependencies BoingKit.Bits32, BoingKit.BoingWork::Params::InstanceData, BoingKit.ParameterMode, BoingKit.TwoDPlaneEnum, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: BoingKit.BoingWork/Params
struct CORDL_TYPE BoingWork_Params {
public:
// Declarations
using InstanceData = ::GlobalNamespace::Params_BoingWork_InstanceData;

/// @brief Field Stride, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Stride, put=setStaticF_Stride)) int32_t  Stride;

/// @brief Method AccumulateTarget, addr 0x5e21a44, size 0x78, virtual false, abstract: false, final false
inline void AccumulateTarget(::by_ref<::GlobalNamespace::BoingEffector_Params>  effector, float_t  dt) ;

/// @brief Method Copy, addr 0x5e21854, size 0x2c, virtual false, abstract: false, final false
static inline void Copy(::by_ref<::GlobalNamespace::BoingWork_Params>  from, ::by_ref<::GlobalNamespace::BoingWork_Params>  to) ;

/// @brief Method EndAccumulateTargets, addr 0x5e224fc, size 0x54, virtual false, abstract: false, final false
inline void EndAccumulateTargets() ;

/// @brief Method Execute, addr 0x5e22f00, size 0x1550, virtual false, abstract: false, final false
inline void Execute(::BoingKit::BoingBones*  bones, float_t  dt) ;

/// @brief Method Execute, addr 0x5e2269c, size 0x68, virtual false, abstract: false, final false
inline void Execute(float_t  dt) ;

/// @brief Method Init, addr 0x5e21880, size 0x90, virtual false, abstract: false, final false
inline void Init() ;

/// @brief Method PullResults, addr 0x5e24c30, size 0x54, virtual false, abstract: false, final false
inline void PullResults(::BoingKit::BoingBones*  bones) ;

/// @brief Method SuppressWarnings, addr 0x5e256f4, size 0x10, virtual false, abstract: false, final false
inline void SuppressWarnings() ;

static inline int32_t getStaticF_Stride() ;

static inline void setStaticF_Stride(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr BoingWork_Params() ;

// Ctor Parameters [CppParam { name: "InstanceID", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bits", ty: "::BoingKit::Bits32", modifiers: "", def_value: None, comment: None }, CppParam { name: "TwoDPlane", ty: "::BoingKit::TwoDPlaneEnum", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_padding0", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "PositionParameterMode", ty: "::BoingKit::ParameterMode", modifiers: "", def_value: None, comment: None }, CppParam { name: "RotationParameterMode", ty: "::BoingKit::ParameterMode", modifiers: "", def_value: None, comment: None }, CppParam { name: "ScaleParameterMode", ty: "::BoingKit::ParameterMode", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_padding1", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "PositionExponentialHalfLife", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "PositionOscillationHalfLife", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "PositionOscillationFrequency", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "PositionOscillationDampingRatio", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "MoveReactionMultiplier", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "LinearImpulseMultiplier", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "RotationExponentialHalfLife", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "RotationOscillationHalfLife", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "RotationOscillationFrequency", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "RotationOscillationDampingRatio", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "RotationReactionMultiplier", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "AngularImpulseMultiplier", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ScaleExponentialHalfLife", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ScaleOscillationHalfLife", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ScaleOscillationFrequency", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ScaleOscillationDampingRatio", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "RotationReactionUp", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_padding2", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Instance", ty: "::GlobalNamespace::Params_BoingWork_InstanceData", modifiers: "", def_value: None, comment: None }]
constexpr BoingWork_Params(int32_t  InstanceID, ::BoingKit::Bits32  Bits, ::BoingKit::TwoDPlaneEnum  TwoDPlane, int32_t  m_padding0, ::BoingKit::ParameterMode  PositionParameterMode, ::BoingKit::ParameterMode  RotationParameterMode, ::BoingKit::ParameterMode  ScaleParameterMode, int32_t  m_padding1, float_t  PositionExponentialHalfLife, float_t  PositionOscillationHalfLife, float_t  PositionOscillationFrequency, float_t  PositionOscillationDampingRatio, float_t  MoveReactionMultiplier, float_t  LinearImpulseMultiplier, float_t  RotationExponentialHalfLife, float_t  RotationOscillationHalfLife, float_t  RotationOscillationFrequency, float_t  RotationOscillationDampingRatio, float_t  RotationReactionMultiplier, float_t  AngularImpulseMultiplier, float_t  ScaleExponentialHalfLife, float_t  ScaleOscillationHalfLife, float_t  ScaleOscillationFrequency, float_t  ScaleOscillationDampingRatio, ::UnityEngine::Vector3  RotationReactionUp, float_t  m_padding2, ::GlobalNamespace::Params_BoingWork_InstanceData  Instance) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5208};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x160};

/// @brief Field InstanceID, offset: 0x0, size: 0x4, def value: None
 int32_t  InstanceID;

/// @brief Field Bits, offset: 0x4, size: 0x4, def value: None
 ::BoingKit::Bits32  Bits;

/// @brief Field TwoDPlane, offset: 0x8, size: 0x4, def value: None
 ::BoingKit::TwoDPlaneEnum  TwoDPlane;

/// @brief Field m_padding0, offset: 0xc, size: 0x4, def value: None
 int32_t  m_padding0;

/// @brief Field PositionParameterMode, offset: 0x10, size: 0x4, def value: None
 ::BoingKit::ParameterMode  PositionParameterMode;

/// @brief Field RotationParameterMode, offset: 0x14, size: 0x4, def value: None
 ::BoingKit::ParameterMode  RotationParameterMode;

/// @brief Field ScaleParameterMode, offset: 0x18, size: 0x4, def value: None
 ::BoingKit::ParameterMode  ScaleParameterMode;

/// @brief Field m_padding1, offset: 0x1c, size: 0x4, def value: None
 int32_t  m_padding1;

/// [Range(0, 5)]
/// @brief Field PositionExponentialHalfLife, offset: 0x20, size: 0x4, def value: None
 float_t  PositionExponentialHalfLife;

/// [Range(0, 5)]
/// @brief Field PositionOscillationHalfLife, offset: 0x24, size: 0x4, def value: None
 float_t  PositionOscillationHalfLife;

/// [Range(0, 10)]
/// @brief Field PositionOscillationFrequency, offset: 0x28, size: 0x4, def value: None
 float_t  PositionOscillationFrequency;

/// [Range(0, 1)]
/// @brief Field PositionOscillationDampingRatio, offset: 0x2c, size: 0x4, def value: None
 float_t  PositionOscillationDampingRatio;

/// [Range(0, 10)]
/// @brief Field MoveReactionMultiplier, offset: 0x30, size: 0x4, def value: None
 float_t  MoveReactionMultiplier;

/// [Range(0, 10)]
/// @brief Field LinearImpulseMultiplier, offset: 0x34, size: 0x4, def value: None
 float_t  LinearImpulseMultiplier;

/// [Range(0, 5)]
/// @brief Field RotationExponentialHalfLife, offset: 0x38, size: 0x4, def value: None
 float_t  RotationExponentialHalfLife;

/// [Range(0, 5)]
/// @brief Field RotationOscillationHalfLife, offset: 0x3c, size: 0x4, def value: None
 float_t  RotationOscillationHalfLife;

/// [Range(0, 10)]
/// @brief Field RotationOscillationFrequency, offset: 0x40, size: 0x4, def value: None
 float_t  RotationOscillationFrequency;

/// [Range(0, 1)]
/// @brief Field RotationOscillationDampingRatio, offset: 0x44, size: 0x4, def value: None
 float_t  RotationOscillationDampingRatio;

/// [Range(0, 10)]
/// @brief Field RotationReactionMultiplier, offset: 0x48, size: 0x4, def value: None
 float_t  RotationReactionMultiplier;

/// [Range(0, 10)]
/// @brief Field AngularImpulseMultiplier, offset: 0x4c, size: 0x4, def value: None
 float_t  AngularImpulseMultiplier;

/// [Range(0, 5)]
/// @brief Field ScaleExponentialHalfLife, offset: 0x50, size: 0x4, def value: None
 float_t  ScaleExponentialHalfLife;

/// [Range(0, 5)]
/// @brief Field ScaleOscillationHalfLife, offset: 0x54, size: 0x4, def value: None
 float_t  ScaleOscillationHalfLife;

/// [Range(0, 10)]
/// @brief Field ScaleOscillationFrequency, offset: 0x58, size: 0x4, def value: None
 float_t  ScaleOscillationFrequency;

/// [Range(0, 1)]
/// @brief Field ScaleOscillationDampingRatio, offset: 0x5c, size: 0x4, def value: None
 float_t  ScaleOscillationDampingRatio;

/// @brief Field RotationReactionUp, offset: 0x60, size: 0xc, def value: None
 ::UnityEngine::Vector3  RotationReactionUp;

/// @brief Field m_padding2, offset: 0x6c, size: 0x4, def value: None
 float_t  m_padding2;

/// @brief Field Instance, offset: 0x70, size: 0xf0, def value: None
 ::GlobalNamespace::Params_BoingWork_InstanceData  Instance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BoingWork_Params, InstanceID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingWork_Params, Bits) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingWork_Params, TwoDPlane) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingWork_Params, m_padding0) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingWork_Params, PositionParameterMode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingWork_Params, RotationParameterMode) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingWork_Params, ScaleParameterMode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingWork_Params, m_padding1) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingWork_Params, PositionExponentialHalfLife) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingWork_Params, PositionOscillationHalfLife) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingWork_Params, PositionOscillationFrequency) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingWork_Params, PositionOscillationDampingRatio) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingWork_Params, MoveReactionMultiplier) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingWork_Params, LinearImpulseMultiplier) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingWork_Params, RotationExponentialHalfLife) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingWork_Params, RotationOscillationHalfLife) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingWork_Params, RotationOscillationFrequency) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingWork_Params, RotationOscillationDampingRatio) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingWork_Params, RotationReactionMultiplier) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingWork_Params, AngularImpulseMultiplier) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingWork_Params, ScaleExponentialHalfLife) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingWork_Params, ScaleOscillationHalfLife) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingWork_Params, ScaleOscillationFrequency) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingWork_Params, ScaleOscillationDampingRatio) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingWork_Params, RotationReactionUp) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingWork_Params, m_padding2) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingWork_Params, Instance) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BoingWork_Params) == 0x160, "Size mismatch!");

} // namespace end def GlobalNamespace
