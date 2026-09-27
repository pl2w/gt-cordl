#pragma once
// IWYU pragma private; include "UnityEngine/Splines/CurveUtility_FrenetFrame.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(CurveUtility_FrenetFrame)
// Forward declare root types
namespace GlobalNamespace {
struct CurveUtility_FrenetFrame;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CurveUtility_FrenetFrame);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CurveUtility_FrenetFrame, "UnityEngine.Splines", "CurveUtility/FrenetFrame");
// Dependencies Unity.Mathematics.float3
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Splines.CurveUtility/FrenetFrame
struct CORDL_TYPE CurveUtility_FrenetFrame {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CurveUtility_FrenetFrame() ;

// Ctor Parameters [CppParam { name: "origin", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None, comment: None }, CppParam { name: "tangent", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None, comment: None }, CppParam { name: "normal", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None, comment: None }, CppParam { name: "binormal", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None, comment: None }]
constexpr CurveUtility_FrenetFrame(::Unity::Mathematics::float3  origin, ::Unity::Mathematics::float3  tangent, ::Unity::Mathematics::float3  normal, ::Unity::Mathematics::float3  binormal) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27920};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field origin, offset: 0x0, size: 0xc, def value: None
 ::Unity::Mathematics::float3  origin;

/// @brief Field tangent, offset: 0xc, size: 0xc, def value: None
 ::Unity::Mathematics::float3  tangent;

/// @brief Field normal, offset: 0x18, size: 0xc, def value: None
 ::Unity::Mathematics::float3  normal;

/// @brief Field binormal, offset: 0x24, size: 0xc, def value: None
 ::Unity::Mathematics::float3  binormal;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CurveUtility_FrenetFrame, origin) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CurveUtility_FrenetFrame, tangent) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CurveUtility_FrenetFrame, normal) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CurveUtility_FrenetFrame, binormal) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CurveUtility_FrenetFrame) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
