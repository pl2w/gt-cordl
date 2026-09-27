#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Gizmo/DebugGizmos_ColorScope.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(DebugGizmos_ColorScope)
namespace System {
class IDisposable;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
struct DebugGizmos_ColorScope;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DebugGizmos_ColorScope);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DebugGizmos_ColorScope, "Meta.XR.ImmersiveDebugger.Gizmo", "DebugGizmos/ColorScope");
// Dependencies UnityEngine.Color
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.ImmersiveDebugger.Gizmo.DebugGizmos/ColorScope
struct CORDL_TYPE DebugGizmos_ColorScope {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x9efc740, size 0x70, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method .ctor, addr 0x9efa178, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Color  color) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr DebugGizmos_ColorScope() ;

// Ctor Parameters [CppParam { name: "_savedColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }]
constexpr DebugGizmos_ColorScope(::UnityEngine::Color  _savedColor) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27537};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _savedColor, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Color  _savedColor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DebugGizmos_ColorScope, _savedColor) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DebugGizmos_ColorScope) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
