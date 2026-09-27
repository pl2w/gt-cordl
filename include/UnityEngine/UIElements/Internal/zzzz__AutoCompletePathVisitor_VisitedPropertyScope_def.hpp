#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Internal/AutoCompletePathVisitor_VisitedPropertyScope.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AutoCompletePathVisitor_VisitedPropertyScope)
namespace System {
class IDisposable;
}
namespace System {
class Type;
}
namespace Unity::Properties {
class IProperty;
}
namespace UnityEngine::UIElements::Internal {
class AutoCompletePathVisitor_VisitContext;
}
// Forward declare root types
namespace GlobalNamespace {
struct AutoCompletePathVisitor_VisitedPropertyScope;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AutoCompletePathVisitor_VisitedPropertyScope);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AutoCompletePathVisitor_VisitedPropertyScope, "UnityEngine.UIElements.Internal", "AutoCompletePathVisitor/VisitedPropertyScope");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.Internal.AutoCompletePathVisitor/VisitedPropertyScope
struct CORDL_TYPE AutoCompletePathVisitor_VisitedPropertyScope {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0xb837d50, size 0x98, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method .ctor, addr 0xb8377c8, size 0x1fc, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext*  context, int32_t  index, ::System::Type*  type) ;

/// @brief Method .ctor, addr 0xb837b10, size 0x240, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext*  context, ::Unity::Properties::IProperty*  property) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr AutoCompletePathVisitor_VisitedPropertyScope() ;

// Ctor Parameters [CppParam { name: "m_VisitContext", ty: "::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext*", modifiers: "", def_value: None, comment: None }]
constexpr AutoCompletePathVisitor_VisitedPropertyScope(::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext*  m_VisitContext) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8743};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_VisitContext, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext*  m_VisitContext;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AutoCompletePathVisitor_VisitedPropertyScope, m_VisitContext) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AutoCompletePathVisitor_VisitedPropertyScope) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
