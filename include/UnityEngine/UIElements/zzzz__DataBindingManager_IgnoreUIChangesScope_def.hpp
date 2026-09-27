#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DataBindingManager_IgnoreUIChangesScope.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__DataBindingManager_IgnoreUIChangesData_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(DataBindingManager_IgnoreUIChangesScope)
namespace System {
class IDisposable;
}
namespace UnityEngine::UIElements {
struct BindingId;
}
namespace UnityEngine::UIElements {
class Binding;
}
namespace UnityEngine::UIElements {
class DataBindingManager;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace GlobalNamespace {
struct DataBindingManager_IgnoreUIChangesScope;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DataBindingManager_IgnoreUIChangesScope);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DataBindingManager_IgnoreUIChangesScope, "UnityEngine.UIElements", "DataBindingManager/IgnoreUIChangesScope");
// Dependencies UnityEngine.UIElements.DataBindingManager::IgnoreUIChangesData
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.DataBindingManager/IgnoreUIChangesScope
struct CORDL_TYPE DataBindingManager_IgnoreUIChangesScope {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0xb72abd8, size 0x30, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method .ctor, addr 0xb725f20, size 0x100, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::UIElements::DataBindingManager*  manager, ::UnityEngine::UIElements::VisualElement*  target, ::UnityEngine::UIElements::BindingId  bindingId, ::UnityEngine::UIElements::Binding*  binding) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr DataBindingManager_IgnoreUIChangesScope() ;

// Ctor Parameters [CppParam { name: "m_ScopeData", ty: "::GlobalNamespace::DataBindingManager_IgnoreUIChangesData", modifiers: "", def_value: None, comment: None }, CppParam { name: "manager", ty: "::UnityEngine::UIElements::DataBindingManager*", modifiers: "", def_value: None, comment: None }]
constexpr DataBindingManager_IgnoreUIChangesScope(::GlobalNamespace::DataBindingManager_IgnoreUIChangesData  m_ScopeData, ::UnityEngine::UIElements::DataBindingManager*  manager) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7209};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xb0};

/// @brief Field m_ScopeData, offset: 0x0, size: 0xa8, def value: None
 ::GlobalNamespace::DataBindingManager_IgnoreUIChangesData  m_ScopeData;

/// @brief Field manager, offset: 0xa8, size: 0x8, def value: None
 ::UnityEngine::UIElements::DataBindingManager*  manager;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DataBindingManager_IgnoreUIChangesScope, m_ScopeData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DataBindingManager_IgnoreUIChangesScope, manager) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DataBindingManager_IgnoreUIChangesScope) == 0xb0, "Size mismatch!");

} // namespace end def GlobalNamespace
