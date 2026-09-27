#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DefaultEventSystem_FocusBasedEventSequenceContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(DefaultEventSystem_FocusBasedEventSequenceContext)
namespace System {
class IDisposable;
}
namespace UnityEngine::UIElements {
class DefaultEventSystem;
}
// Forward declare root types
namespace GlobalNamespace {
struct DefaultEventSystem_FocusBasedEventSequenceContext;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DefaultEventSystem_FocusBasedEventSequenceContext);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DefaultEventSystem_FocusBasedEventSequenceContext, "UnityEngine.UIElements", "DefaultEventSystem/FocusBasedEventSequenceContext");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.DefaultEventSystem/FocusBasedEventSequenceContext
struct CORDL_TYPE DefaultEventSystem_FocusBasedEventSequenceContext {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0xb8a8190, size 0x38, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method .ctor, addr 0xb8a4f1c, size 0x64, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::UIElements::DefaultEventSystem*  es) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr DefaultEventSystem_FocusBasedEventSequenceContext() ;

// Ctor Parameters [CppParam { name: "es", ty: "::UnityEngine::UIElements::DefaultEventSystem*", modifiers: "", def_value: None, comment: None }]
constexpr DefaultEventSystem_FocusBasedEventSequenceContext(::UnityEngine::UIElements::DefaultEventSystem*  es) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7755};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field es, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::UIElements::DefaultEventSystem*  es;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DefaultEventSystem_FocusBasedEventSequenceContext, es) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DefaultEventSystem_FocusBasedEventSequenceContext) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
