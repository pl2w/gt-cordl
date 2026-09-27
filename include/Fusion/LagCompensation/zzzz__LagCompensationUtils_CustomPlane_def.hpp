#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/LagCompensationUtils_CustomPlane.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LagCompensationUtils_CustomPlane)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct LagCompensationUtils_CustomPlane;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LagCompensationUtils_CustomPlane);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LagCompensationUtils_CustomPlane, "Fusion.LagCompensation", "LagCompensationUtils/CustomPlane");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.LagCompensation.LagCompensationUtils/CustomPlane
struct CORDL_TYPE LagCompensationUtils_CustomPlane {
public:
// Declarations
/// @brief Method .ctor, addr 0x6017060, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3  normal, ::UnityEngine::Vector3  pointOnPlane) ;

// Ctor Parameters []
// @brief default ctor
constexpr LagCompensationUtils_CustomPlane() ;

// Ctor Parameters [CppParam { name: "Normal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "PointOnPlane", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }]
constexpr LagCompensationUtils_CustomPlane(::UnityEngine::Vector3  Normal, ::UnityEngine::Vector3  PointOnPlane) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19393};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Normal, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  Normal;

/// @brief Field PointOnPlane, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  PointOnPlane;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LagCompensationUtils_CustomPlane, Normal) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LagCompensationUtils_CustomPlane, PointOnPlane) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LagCompensationUtils_CustomPlane) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
