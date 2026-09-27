#pragma once
// IWYU pragma private; include "UnityEngine/GUIClip_ParentClipScope.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(GUIClip_ParentClipScope)
namespace System {
class IDisposable;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace GlobalNamespace {
struct GUIClip_ParentClipScope;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GUIClip_ParentClipScope);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GUIClip_ParentClipScope, "UnityEngine", "GUIClip/ParentClipScope");
// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule", "UnityEditor.UIBuilderModule" })]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.GUIClip/ParentClipScope
struct CORDL_TYPE GUIClip_ParentClipScope {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0xb643630, size 0x40, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method .ctor, addr 0xb6435ec, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Matrix4x4  objectTransform, ::UnityEngine::Rect  clipRect) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr GUIClip_ParentClipScope() ;

// Ctor Parameters [CppParam { name: "m_Disposed", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr GUIClip_ParentClipScope(bool  m_Disposed) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28812};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field m_Disposed, offset: 0x0, size: 0x1, def value: None
 bool  m_Disposed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GUIClip_ParentClipScope, m_Disposed) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GUIClip_ParentClipScope) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
