#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IMGUIContainer_UITKScope.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(IMGUIContainer_UITKScope)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
struct IMGUIContainer_UITKScope;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::IMGUIContainer_UITKScope);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IMGUIContainer_UITKScope, "UnityEngine.UIElements", "IMGUIContainer/UITKScope");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.IMGUIContainer/UITKScope
struct CORDL_TYPE IMGUIContainer_UITKScope {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0xb8ba390, size 0x90, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method .ctor, addr 0xb8ba2c4, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr IMGUIContainer_UITKScope() ;

// Ctor Parameters [CppParam { name: "wasUITK", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr IMGUIContainer_UITKScope(bool  wasUITK) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7800};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field wasUITK, offset: 0x0, size: 0x1, def value: None
 bool  wasUITK;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::IMGUIContainer_UITKScope, wasUITK) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::IMGUIContainer_UITKScope) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
