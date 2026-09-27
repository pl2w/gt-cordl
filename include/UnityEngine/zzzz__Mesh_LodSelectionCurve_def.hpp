#pragma once
// IWYU pragma private; include "UnityEngine/Mesh_LodSelectionCurve.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(Mesh_LodSelectionCurve)
// Forward declare root types
namespace GlobalNamespace {
struct Mesh_LodSelectionCurve;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Mesh_LodSelectionCurve);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Mesh_LodSelectionCurve, "UnityEngine", "Mesh/LodSelectionCurve");
// [UsedByNativeCode]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Mesh/LodSelectionCurve
struct CORDL_TYPE Mesh_LodSelectionCurve {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Mesh_LodSelectionCurve() ;

// Ctor Parameters [CppParam { name: "m_LodSlope", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_LodBias", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr Mesh_LodSelectionCurve(float_t  m_LodSlope, float_t  m_LodBias) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14939};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// [SerializeField]
/// @brief Field m_LodSlope, offset: 0x0, size: 0x4, def value: None
 float_t  m_LodSlope;

/// [SerializeField]
/// @brief Field m_LodBias, offset: 0x4, size: 0x4, def value: None
 float_t  m_LodBias;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Mesh_LodSelectionCurve, m_LodSlope) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Mesh_LodSelectionCurve, m_LodBias) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Mesh_LodSelectionCurve) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
