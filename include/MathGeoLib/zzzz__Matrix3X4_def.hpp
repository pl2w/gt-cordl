#pragma once
// IWYU pragma private; include "MathGeoLib/Matrix3X4.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(Matrix3X4)
// Forward declare root types
namespace MathGeoLib {
struct Matrix3X4;
}
// Write type traits
MARK_VAL_T(::MathGeoLib::Matrix3X4);
DEFINE_IL2CPP_CLASS(::MathGeoLib::Matrix3X4, "MathGeoLib", "Matrix3X4");
// [PublicAPI]
// Dependencies 
namespace MathGeoLib {
// Is value type: true
// CS Name: MathGeoLib.Matrix3X4
struct CORDL_TYPE Matrix3X4 {
public:
// Declarations
/// @brief Method ToString, addr 0x55e2800, size 0x528, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x55e27cc, size 0x34, virtual false, abstract: false, final false
inline void _ctor(float_t  m00, float_t  m01, float_t  m02, float_t  m03, float_t  m10, float_t  m11, float_t  m12, float_t  m13, float_t  m20, float_t  m21, float_t  m22, float_t  m23) ;

// Ctor Parameters []
// @brief default ctor
constexpr Matrix3X4() ;

// Ctor Parameters [CppParam { name: "M00", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "M01", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "M02", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "M03", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "M10", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "M11", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "M12", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "M13", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "M20", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "M21", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "M22", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "M23", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr Matrix3X4(float_t  M00, float_t  M01, float_t  M02, float_t  M03, float_t  M10, float_t  M11, float_t  M12, float_t  M13, float_t  M20, float_t  M21, float_t  M22, float_t  M23) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32989};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field M00, offset: 0x0, size: 0x4, def value: None
 float_t  M00;

/// @brief Field M01, offset: 0x4, size: 0x4, def value: None
 float_t  M01;

/// @brief Field M02, offset: 0x8, size: 0x4, def value: None
 float_t  M02;

/// @brief Field M03, offset: 0xc, size: 0x4, def value: None
 float_t  M03;

/// @brief Field M10, offset: 0x10, size: 0x4, def value: None
 float_t  M10;

/// @brief Field M11, offset: 0x14, size: 0x4, def value: None
 float_t  M11;

/// @brief Field M12, offset: 0x18, size: 0x4, def value: None
 float_t  M12;

/// @brief Field M13, offset: 0x1c, size: 0x4, def value: None
 float_t  M13;

/// @brief Field M20, offset: 0x20, size: 0x4, def value: None
 float_t  M20;

/// @brief Field M21, offset: 0x24, size: 0x4, def value: None
 float_t  M21;

/// @brief Field M22, offset: 0x28, size: 0x4, def value: None
 float_t  M22;

/// @brief Field M23, offset: 0x2c, size: 0x4, def value: None
 float_t  M23;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MathGeoLib::Matrix3X4, M00) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MathGeoLib::Matrix3X4, M01) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MathGeoLib::Matrix3X4, M02) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MathGeoLib::Matrix3X4, M03) == 0xc, "Offset mismatch!");

static_assert(offsetof(::MathGeoLib::Matrix3X4, M10) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MathGeoLib::Matrix3X4, M11) == 0x14, "Offset mismatch!");

static_assert(offsetof(::MathGeoLib::Matrix3X4, M12) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MathGeoLib::Matrix3X4, M13) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::MathGeoLib::Matrix3X4, M20) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MathGeoLib::Matrix3X4, M21) == 0x24, "Offset mismatch!");

static_assert(offsetof(::MathGeoLib::Matrix3X4, M22) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MathGeoLib::Matrix3X4, M23) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::MathGeoLib::Matrix3X4) == 0x30, "Size mismatch!");

} // namespace end def MathGeoLib
