#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Utilities/XRInteractableUtility_AllowTriggerCollidersScope.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(XRInteractableUtility_AllowTriggerCollidersScope)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
struct XRInteractableUtility_AllowTriggerCollidersScope;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XRInteractableUtility_AllowTriggerCollidersScope);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XRInteractableUtility_AllowTriggerCollidersScope, "UnityEngine.XR.Interaction.Toolkit.Utilities", "XRInteractableUtility/AllowTriggerCollidersScope");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.XRInteractableUtility/AllowTriggerCollidersScope
struct CORDL_TYPE XRInteractableUtility_AllowTriggerCollidersScope {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0xb427718, size 0x5c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method .ctor, addr 0xb42768c, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(bool  newAllowTriggerColliders) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr XRInteractableUtility_AllowTriggerCollidersScope() ;

// Ctor Parameters [CppParam { name: "m_Disposed", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_OldValue", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr XRInteractableUtility_AllowTriggerCollidersScope(bool  m_Disposed, bool  m_OldValue) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11207};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field m_Disposed, offset: 0x0, size: 0x1, def value: None
 bool  m_Disposed;

/// @brief Field m_OldValue, offset: 0x1, size: 0x1, def value: None
 bool  m_OldValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XRInteractableUtility_AllowTriggerCollidersScope, m_Disposed) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XRInteractableUtility_AllowTriggerCollidersScope, m_OldValue) == 0x1, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XRInteractableUtility_AllowTriggerCollidersScope) == 0x2, "Size mismatch!");

} // namespace end def GlobalNamespace
