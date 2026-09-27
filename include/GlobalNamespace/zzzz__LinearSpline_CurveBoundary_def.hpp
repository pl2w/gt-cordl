#pragma once
// IWYU pragma private; include "GlobalNamespace/LinearSpline_CurveBoundary.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LinearSpline_CurveBoundary)
// Forward declare root types
namespace GlobalNamespace {
struct LinearSpline_CurveBoundary;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LinearSpline_CurveBoundary);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LinearSpline_CurveBoundary, "", "LinearSpline/CurveBoundary");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: LinearSpline/CurveBoundary
struct CORDL_TYPE LinearSpline_CurveBoundary {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr LinearSpline_CurveBoundary() ;

// Ctor Parameters [CppParam { name: "start", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "end", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }]
constexpr LinearSpline_CurveBoundary(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3555};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field start, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  start;

/// @brief Field end, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  end;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LinearSpline_CurveBoundary, start) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LinearSpline_CurveBoundary, end) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LinearSpline_CurveBoundary) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
