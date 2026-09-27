#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineContainer_SplineToNative.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Splines/zzzz__NativeSpline_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SplineContainer_SplineToNative)
namespace UnityEngine::Splines {
class ISpline;
}
// Forward declare root types
namespace GlobalNamespace {
struct SplineContainer_SplineToNative;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SplineContainer_SplineToNative);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SplineContainer_SplineToNative, "UnityEngine.Splines", "SplineContainer/SplineToNative");
// Dependencies UnityEngine.Splines.NativeSpline
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Splines.SplineContainer/SplineToNative
struct CORDL_TYPE SplineContainer_SplineToNative {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SplineContainer_SplineToNative() ;

// Ctor Parameters [CppParam { name: "spline", ty: "::UnityEngine::Splines::ISpline*", modifiers: "", def_value: None, comment: None }, CppParam { name: "nativeSpline", ty: "::UnityEngine::Splines::NativeSpline", modifiers: "", def_value: None, comment: None }]
constexpr SplineContainer_SplineToNative(::UnityEngine::Splines::ISpline*  spline, ::UnityEngine::Splines::NativeSpline  nativeSpline) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27954};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field spline, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Splines::ISpline*  spline;

/// @brief Field nativeSpline, offset: 0x8, size: 0x48, def value: None
 ::UnityEngine::Splines::NativeSpline  nativeSpline;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SplineContainer_SplineToNative, spline) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplineContainer_SplineToNative, nativeSpline) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SplineContainer_SplineToNative) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
