#pragma once
// IWYU pragma private; include "Meta/XR/EnvironmentRaycastHit.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/zzzz__EnvironmentRaycastHitStatus_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(EnvironmentRaycastHit)
// Forward declare root types
namespace Meta::XR {
struct EnvironmentRaycastHit;
}
// Write type traits
MARK_VAL_T(::Meta::XR::EnvironmentRaycastHit);
DEFINE_IL2CPP_CLASS(::Meta::XR::EnvironmentRaycastHit, "Meta.XR", "EnvironmentRaycastHit");
// Dependencies Meta.XR.EnvironmentRaycastHitStatus, UnityEngine.Vector3
namespace Meta::XR {
// Is value type: true
// CS Name: Meta.XR.EnvironmentRaycastHit
struct CORDL_TYPE EnvironmentRaycastHit {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr EnvironmentRaycastHit() ;

// Ctor Parameters [CppParam { name: "status", ty: "::Meta::XR::EnvironmentRaycastHitStatus", modifiers: "", def_value: None, comment: None }, CppParam { name: "point", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "normal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "normalConfidence", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr EnvironmentRaycastHit(::Meta::XR::EnvironmentRaycastHitStatus  status, ::UnityEngine::Vector3  point, ::UnityEngine::Vector3  normal, float_t  normalConfidence) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25758};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field status, offset: 0x0, size: 0x4, def value: None
 ::Meta::XR::EnvironmentRaycastHitStatus  status;

/// @brief Field point, offset: 0x4, size: 0xc, def value: None
 ::UnityEngine::Vector3  point;

/// @brief Field normal, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  normal;

/// @brief Field normalConfidence, offset: 0x1c, size: 0x4, def value: None
 float_t  normalConfidence;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::EnvironmentRaycastHit, status) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::EnvironmentRaycastHit, point) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::EnvironmentRaycastHit, normal) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::EnvironmentRaycastHit, normalConfidence) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::EnvironmentRaycastHit) == 0x20, "Size mismatch!");

} // namespace end def Meta::XR
