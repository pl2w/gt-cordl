#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/HableCurve_DirectParams.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(HableCurve_DirectParams)
// Forward declare root types
namespace GlobalNamespace {
struct HableCurve_DirectParams;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HableCurve_DirectParams);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HableCurve_DirectParams, "UnityEngine.Rendering", "HableCurve/DirectParams");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.HableCurve/DirectParams
struct CORDL_TYPE HableCurve_DirectParams {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr HableCurve_DirectParams() ;

// Ctor Parameters [CppParam { name: "x0", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "y0", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "x1", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "y1", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "W", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "overshootX", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "overshootY", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "gamma", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr HableCurve_DirectParams(float_t  x0, float_t  y0, float_t  x1, float_t  y1, float_t  W, float_t  overshootX, float_t  overshootY, float_t  gamma) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17024};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field x0, offset: 0x0, size: 0x4, def value: None
 float_t  x0;

/// @brief Field y0, offset: 0x4, size: 0x4, def value: None
 float_t  y0;

/// @brief Field x1, offset: 0x8, size: 0x4, def value: None
 float_t  x1;

/// @brief Field y1, offset: 0xc, size: 0x4, def value: None
 float_t  y1;

/// @brief Field W, offset: 0x10, size: 0x4, def value: None
 float_t  W;

/// @brief Field overshootX, offset: 0x14, size: 0x4, def value: None
 float_t  overshootX;

/// @brief Field overshootY, offset: 0x18, size: 0x4, def value: None
 float_t  overshootY;

/// @brief Field gamma, offset: 0x1c, size: 0x4, def value: None
 float_t  gamma;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HableCurve_DirectParams, x0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HableCurve_DirectParams, y0) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HableCurve_DirectParams, x1) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HableCurve_DirectParams, y1) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HableCurve_DirectParams, W) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HableCurve_DirectParams, overshootX) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HableCurve_DirectParams, overshootY) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HableCurve_DirectParams, gamma) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HableCurve_DirectParams) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
