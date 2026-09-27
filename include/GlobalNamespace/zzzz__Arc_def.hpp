#pragma once
// IWYU pragma private; include "GlobalNamespace/Arc.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Arc)
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct Arc;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Arc);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Arc, "", "Arc");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Arc
struct CORDL_TYPE Arc {
public:
// Declarations
/// @brief Method BezierLerp, addr 0x5a1a10c, size 0x84, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 BezierLerp(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::UnityEngine::Vector3  c, float_t  t) ;

/// @brief Method ComputeArcPoints, addr 0x5a19bf8, size 0x1cc, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Vector3> ComputeArcPoints(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::System::Nullable_1<::UnityEngine::Vector3>  c, int32_t  count) ;

/// @brief Method DeriveArcControlPoint, addr 0x5a19e2c, size 0x2e0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 DeriveArcControlPoint(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::System::Nullable_1<::UnityEngine::Vector3>  dir, ::System::Nullable_1<float_t>  height) ;

/// [Conditional("UNITY_EDITOR")]
/// @brief Method DrawGizmo, addr 0x5a19dc4, size 0x4, virtual false, abstract: false, final false
inline void DrawGizmo() ;

/// @brief Method From, addr 0x5a19dc8, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Arc From(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end) ;

/// @brief Method GetArcPoints, addr 0x5a19b44, size 0xb4, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector3> GetArcPoints(int32_t  count) ;

// Ctor Parameters []
// @brief default ctor
constexpr Arc() ;

// Ctor Parameters [CppParam { name: "start", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "end", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "control", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }]
constexpr Arc(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, ::UnityEngine::Vector3  control) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2793};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x24};

/// @brief Field start, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  start;

/// @brief Field end, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  end;

/// @brief Field control, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  control;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Arc, start) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Arc, end) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Arc, control) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Arc) == 0x24, "Size mismatch!");

} // namespace end def GlobalNamespace
