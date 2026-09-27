#pragma once
// IWYU pragma private; include "BoingKit/BoingReactorField_FieldParams.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BoingReactorField_FieldParams)
// Forward declare root types
namespace GlobalNamespace {
struct BoingReactorField_FieldParams;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BoingReactorField_FieldParams);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BoingReactorField_FieldParams, "BoingKit", "BoingReactorField/FieldParams");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: BoingKit.BoingReactorField/FieldParams
struct CORDL_TYPE BoingReactorField_FieldParams {
public:
// Declarations
/// @brief Field Stride, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Stride, put=setStaticF_Stride)) int32_t  Stride;

/// @brief Method SuppressWarnings, addr 0x5e20c5c, size 0x20, virtual false, abstract: false, final false
inline void SuppressWarnings() ;

static inline int32_t getStaticF_Stride() ;

static inline void setStaticF_Stride(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr BoingReactorField_FieldParams() ;

// Ctor Parameters [CppParam { name: "CellsX", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "CellsY", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "CellsZ", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "NumEffectors", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "iCellBaseX", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "iCellBaseY", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "iCellBaseZ", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_padding0", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "FalloffMode", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "FalloffDimensions", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "PropagationDepth", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_padding1", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "GridCenter", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_padding3", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "UpWs", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_padding2", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "FieldPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_padding4", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "FalloffRatio", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "CellSize", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "DeltaTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_padding5", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr BoingReactorField_FieldParams(int32_t  CellsX, int32_t  CellsY, int32_t  CellsZ, int32_t  NumEffectors, int32_t  iCellBaseX, int32_t  iCellBaseY, int32_t  iCellBaseZ, int32_t  m_padding0, int32_t  FalloffMode, int32_t  FalloffDimensions, int32_t  PropagationDepth, int32_t  m_padding1, ::UnityEngine::Vector3  GridCenter, float_t  m_padding3, ::UnityEngine::Vector3  UpWs, float_t  m_padding2, ::UnityEngine::Vector3  FieldPosition, float_t  m_padding4, float_t  FalloffRatio, float_t  CellSize, float_t  DeltaTime, float_t  m_padding5) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5200};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x70};

/// @brief Field CellsX, offset: 0x0, size: 0x4, def value: None
 int32_t  CellsX;

/// @brief Field CellsY, offset: 0x4, size: 0x4, def value: None
 int32_t  CellsY;

/// @brief Field CellsZ, offset: 0x8, size: 0x4, def value: None
 int32_t  CellsZ;

/// @brief Field NumEffectors, offset: 0xc, size: 0x4, def value: None
 int32_t  NumEffectors;

/// @brief Field iCellBaseX, offset: 0x10, size: 0x4, def value: None
 int32_t  iCellBaseX;

/// @brief Field iCellBaseY, offset: 0x14, size: 0x4, def value: None
 int32_t  iCellBaseY;

/// @brief Field iCellBaseZ, offset: 0x18, size: 0x4, def value: None
 int32_t  iCellBaseZ;

/// @brief Field m_padding0, offset: 0x1c, size: 0x4, def value: None
 int32_t  m_padding0;

/// @brief Field FalloffMode, offset: 0x20, size: 0x4, def value: None
 int32_t  FalloffMode;

/// @brief Field FalloffDimensions, offset: 0x24, size: 0x4, def value: None
 int32_t  FalloffDimensions;

/// @brief Field PropagationDepth, offset: 0x28, size: 0x4, def value: None
 int32_t  PropagationDepth;

/// @brief Field m_padding1, offset: 0x2c, size: 0x4, def value: None
 int32_t  m_padding1;

/// @brief Field GridCenter, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  GridCenter;

/// @brief Field m_padding3, offset: 0x3c, size: 0x4, def value: None
 float_t  m_padding3;

/// @brief Field UpWs, offset: 0x40, size: 0xc, def value: None
 ::UnityEngine::Vector3  UpWs;

/// @brief Field m_padding2, offset: 0x4c, size: 0x4, def value: None
 float_t  m_padding2;

/// @brief Field FieldPosition, offset: 0x50, size: 0xc, def value: None
 ::UnityEngine::Vector3  FieldPosition;

/// @brief Field m_padding4, offset: 0x5c, size: 0x4, def value: None
 float_t  m_padding4;

/// @brief Field FalloffRatio, offset: 0x60, size: 0x4, def value: None
 float_t  FalloffRatio;

/// @brief Field CellSize, offset: 0x64, size: 0x4, def value: None
 float_t  CellSize;

/// @brief Field DeltaTime, offset: 0x68, size: 0x4, def value: None
 float_t  DeltaTime;

/// @brief Field m_padding5, offset: 0x6c, size: 0x4, def value: None
 float_t  m_padding5;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BoingReactorField_FieldParams, CellsX) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingReactorField_FieldParams, CellsY) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingReactorField_FieldParams, CellsZ) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingReactorField_FieldParams, NumEffectors) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingReactorField_FieldParams, iCellBaseX) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingReactorField_FieldParams, iCellBaseY) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingReactorField_FieldParams, iCellBaseZ) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingReactorField_FieldParams, m_padding0) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingReactorField_FieldParams, FalloffMode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingReactorField_FieldParams, FalloffDimensions) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingReactorField_FieldParams, PropagationDepth) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingReactorField_FieldParams, m_padding1) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingReactorField_FieldParams, GridCenter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingReactorField_FieldParams, m_padding3) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingReactorField_FieldParams, UpWs) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingReactorField_FieldParams, m_padding2) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingReactorField_FieldParams, FieldPosition) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingReactorField_FieldParams, m_padding4) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingReactorField_FieldParams, FalloffRatio) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingReactorField_FieldParams, CellSize) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingReactorField_FieldParams, DeltaTime) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingReactorField_FieldParams, m_padding5) == 0x6c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BoingReactorField_FieldParams) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
