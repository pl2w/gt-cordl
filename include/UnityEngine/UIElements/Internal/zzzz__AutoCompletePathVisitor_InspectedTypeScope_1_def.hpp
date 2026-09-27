#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Internal/AutoCompletePathVisitor_InspectedTypeScope_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(AutoCompletePathVisitor_InspectedTypeScope_1)
namespace System {
class IDisposable;
}
namespace UnityEngine::UIElements::Internal {
class AutoCompletePathVisitor_VisitContext;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TContainer>
struct AutoCompletePathVisitor_InspectedTypeScope_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::AutoCompletePathVisitor_InspectedTypeScope_1);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::AutoCompletePathVisitor_InspectedTypeScope_1, "UnityEngine.UIElements.Internal", "AutoCompletePathVisitor/InspectedTypeScope`1");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename TContainer>
// Is value type: true
// CS Name: UnityEngine.UIElements.Internal.AutoCompletePathVisitor/InspectedTypeScope`1<TContainer>
struct CORDL_TYPE AutoCompletePathVisitor_InspectedTypeScope_1 {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext*  context) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr AutoCompletePathVisitor_InspectedTypeScope_1() ;

// Ctor Parameters [CppParam { name: "m_VisitContext", ty: "::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext*", modifiers: "", def_value: None, comment: None }]
constexpr AutoCompletePathVisitor_InspectedTypeScope_1(::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext*  m_VisitContext) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8742};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_VisitContext, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext*  m_VisitContext;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
