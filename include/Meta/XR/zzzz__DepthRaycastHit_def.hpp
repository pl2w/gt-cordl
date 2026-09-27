#pragma once
// IWYU pragma private; include "Meta/XR/DepthRaycastHit.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/zzzz__DepthRaycastResult_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(DepthRaycastHit)
// Forward declare root types
namespace Meta::XR {
struct DepthRaycastHit;
}
// Write type traits
MARK_VAL_T(::Meta::XR::DepthRaycastHit);
DEFINE_IL2CPP_CLASS(::Meta::XR::DepthRaycastHit, "Meta.XR", "DepthRaycastHit");
// Dependencies Meta.XR.DepthRaycastResult, UnityEngine.Vector3
namespace Meta::XR {
// Is value type: true
// CS Name: Meta.XR.DepthRaycastHit
struct CORDL_TYPE DepthRaycastHit {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr DepthRaycastHit() ;

// Ctor Parameters [CppParam { name: "result", ty: "::Meta::XR::DepthRaycastResult", modifiers: "", def_value: None, comment: None }, CppParam { name: "point", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "normal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "normalConfidence", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr DepthRaycastHit(::Meta::XR::DepthRaycastResult  result, ::UnityEngine::Vector3  point, ::UnityEngine::Vector3  normal, float_t  normalConfidence) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25753};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field result, offset: 0x0, size: 0x4, def value: None
 ::Meta::XR::DepthRaycastResult  result;

/// @brief Field point, offset: 0x4, size: 0xc, def value: None
 ::UnityEngine::Vector3  point;

/// @brief Field normal, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  normal;

/// @brief Field normalConfidence, offset: 0x1c, size: 0x4, def value: None
 float_t  normalConfidence;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::DepthRaycastHit, result) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::DepthRaycastHit, point) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::DepthRaycastHit, normal) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::DepthRaycastHit, normalConfidence) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::DepthRaycastHit) == 0x20, "Size mismatch!");

} // namespace end def Meta::XR
