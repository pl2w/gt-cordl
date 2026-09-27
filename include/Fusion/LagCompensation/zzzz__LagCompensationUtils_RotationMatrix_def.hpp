#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/LagCompensationUtils_RotationMatrix.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(LagCompensationUtils_RotationMatrix)
// Forward declare root types
namespace GlobalNamespace {
struct LagCompensationUtils_RotationMatrix;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LagCompensationUtils_RotationMatrix);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LagCompensationUtils_RotationMatrix, "Fusion.LagCompensation", "LagCompensationUtils/RotationMatrix");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.LagCompensation.LagCompensationUtils/RotationMatrix
struct CORDL_TYPE LagCompensationUtils_RotationMatrix {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr LagCompensationUtils_RotationMatrix() ;

// Ctor Parameters [CppParam { name: "M00", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "M01", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "M02", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "M10", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "M11", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "M12", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "M20", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "M21", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "M22", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr LagCompensationUtils_RotationMatrix(float_t  M00, float_t  M01, float_t  M02, float_t  M10, float_t  M11, float_t  M12, float_t  M20, float_t  M21, float_t  M22) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19396};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x24};

/// @brief Field M00, offset: 0x0, size: 0x4, def value: None
 float_t  M00;

/// @brief Field M01, offset: 0x4, size: 0x4, def value: None
 float_t  M01;

/// @brief Field M02, offset: 0x8, size: 0x4, def value: None
 float_t  M02;

/// @brief Field M10, offset: 0xc, size: 0x4, def value: None
 float_t  M10;

/// @brief Field M11, offset: 0x10, size: 0x4, def value: None
 float_t  M11;

/// @brief Field M12, offset: 0x14, size: 0x4, def value: None
 float_t  M12;

/// @brief Field M20, offset: 0x18, size: 0x4, def value: None
 float_t  M20;

/// @brief Field M21, offset: 0x1c, size: 0x4, def value: None
 float_t  M21;

/// @brief Field M22, offset: 0x20, size: 0x4, def value: None
 float_t  M22;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LagCompensationUtils_RotationMatrix, M00) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LagCompensationUtils_RotationMatrix, M01) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LagCompensationUtils_RotationMatrix, M02) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LagCompensationUtils_RotationMatrix, M10) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LagCompensationUtils_RotationMatrix, M11) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LagCompensationUtils_RotationMatrix, M12) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LagCompensationUtils_RotationMatrix, M20) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LagCompensationUtils_RotationMatrix, M21) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LagCompensationUtils_RotationMatrix, M22) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LagCompensationUtils_RotationMatrix) == 0x24, "Size mismatch!");

} // namespace end def GlobalNamespace
