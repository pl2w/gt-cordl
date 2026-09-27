#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleVariableResolver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleVariableResolver_ResolveContext_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StyleVariableResolver)
namespace GlobalNamespace {
struct StyleVariableResolver_ResolveContext;
}
namespace GlobalNamespace {
struct StyleVariableResolver_Result;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace UnityEngine::UIElements::StyleSheets::Syntax {
class StyleSyntaxParser;
}
namespace UnityEngine::UIElements::StyleSheets {
class StylePropertyValueMatcher;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyValue;
}
namespace UnityEngine::UIElements {
class StyleProperty;
}
namespace UnityEngine::UIElements {
class StyleSheet;
}
namespace UnityEngine::UIElements {
struct StyleValueHandle;
}
namespace UnityEngine::UIElements {
class StyleVariableContext;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class StyleVariableResolver;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::StyleVariableResolver*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StyleVariableResolver*, "UnityEngine.UIElements", "StyleVariableResolver");
// Dependencies System.Object, UnityEngine.UIElements.StyleVariableResolver::ResolveContext
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.StyleVariableResolver
class CORDL_TYPE StyleVariableResolver : public ::System::Object {
public:
// Declarations
using ResolveContext = ::GlobalNamespace::StyleVariableResolver_ResolveContext;

using Result = ::GlobalNamespace::StyleVariableResolver_Result;

/// @brief Field <variableContext>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__variableContext_k__BackingField, put=__cordl_internal_set__variableContext_k__BackingField)) ::UnityEngine::UIElements::StyleVariableContext*  _variableContext_k__BackingField;

 __declspec(property(get=get_currentHandles)) ::ArrayW<::UnityEngine::UIElements::StyleValueHandle>  currentHandles;

 __declspec(property(get=get_currentSheet)) ::UnityW<::UnityEngine::UIElements::StyleSheet>  currentSheet;

/// @brief Field m_ContextStack, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ContextStack, put=__cordl_internal_set_m_ContextStack)) ::System::Collections::Generic::Stack_1<::GlobalNamespace::StyleVariableResolver_ResolveContext>*  m_ContextStack;

/// @brief Field m_CurrentContext, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_CurrentContext, put=__cordl_internal_set_m_CurrentContext)) ::GlobalNamespace::StyleVariableResolver_ResolveContext  m_CurrentContext;

/// @brief Field m_Matcher, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Matcher, put=__cordl_internal_set_m_Matcher)) ::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*  m_Matcher;

/// @brief Field m_Property, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Property, put=__cordl_internal_set_m_Property)) ::UnityEngine::UIElements::StyleProperty*  m_Property;

/// @brief Field m_ResolvedValues, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ResolvedValues, put=__cordl_internal_set_m_ResolvedValues)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>*  m_ResolvedValues;

/// @brief Field m_ResolvedVarStack, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ResolvedVarStack, put=__cordl_internal_set_m_ResolvedVarStack)) ::System::Collections::Generic::Stack_1<::StringW>*  m_ResolvedVarStack;

 __declspec(property(get=get_resolvedValues)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>*  resolvedValues;

/// @brief Field s_SyntaxParser, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_SyntaxParser, put=setStaticF_s_SyntaxParser)) ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*  s_SyntaxParser;

 __declspec(property(get=get_variableContext, put=set_variableContext)) ::UnityEngine::UIElements::StyleVariableContext*  variableContext;

/// @brief Method AddValue, addr 0xb7930b0, size 0xcc, virtual false, abstract: false, final false
inline void AddValue(::UnityEngine::UIElements::StyleValueHandle  handle) ;

/// @brief Method Init, addr 0xb792ec0, size 0xbc, virtual false, abstract: false, final false
inline void Init(::UnityEngine::UIElements::StyleProperty*  property, ::UnityEngine::UIElements::StyleSheet*  sheet, ::ArrayW<::UnityEngine::UIElements::StyleValueHandle>  handles) ;

static inline ::UnityEngine::UIElements::StyleVariableResolver* New_ctor() ;

/// @brief Method ParseVarFunction, addr 0xb793248, size 0xb8, virtual false, abstract: false, final false
static inline void ParseVarFunction(::UnityEngine::UIElements::StyleSheet*  sheet, ::ArrayW<::UnityEngine::UIElements::StyleValueHandle>  handles, ::by_ref<int32_t>  index, ::by_ref<int32_t>  argCount, ::by_ref<::StringW>  variableName) ;

/// @brief Method PopContext, addr 0xb793024, size 0x8c, virtual false, abstract: false, final false
inline void PopContext() ;

/// @brief Method PushContext, addr 0xb792f7c, size 0xa8, virtual false, abstract: false, final false
inline void PushContext(::UnityEngine::UIElements::StyleSheet*  sheet, ::ArrayW<::UnityEngine::UIElements::StyleValueHandle>  handles) ;

/// @brief Method ResolveFallback, addr 0xb7936dc, size 0x250, virtual false, abstract: false, final false
inline ::GlobalNamespace::StyleVariableResolver_Result ResolveFallback(::by_ref<int32_t>  index, bool  appendValues) ;

/// @brief Method ResolveVarFunction, addr 0xb793300, size 0x160, virtual false, abstract: false, final false
inline ::GlobalNamespace::StyleVariableResolver_Result ResolveVarFunction(::by_ref<int32_t>  index, int32_t  argc, ::StringW  varName) ;

/// @brief Method ResolveVarFunction, addr 0xb79317c, size 0xcc, virtual false, abstract: false, final false
inline bool ResolveVarFunction(::by_ref<int32_t>  index) ;

/// @brief Method ResolveVariable, addr 0xb793460, size 0x27c, virtual false, abstract: false, final false
inline ::GlobalNamespace::StyleVariableResolver_Result ResolveVariable(::StringW  variableName) ;

/// @brief Method ValidateResolvedValues, addr 0xb79392c, size 0x170, virtual false, abstract: false, final false
inline bool ValidateResolvedValues() ;

constexpr ::UnityEngine::UIElements::StyleVariableContext* const& __cordl_internal_get__variableContext_k__BackingField() const;

constexpr ::UnityEngine::UIElements::StyleVariableContext*& __cordl_internal_get__variableContext_k__BackingField() ;

constexpr ::System::Collections::Generic::Stack_1<::GlobalNamespace::StyleVariableResolver_ResolveContext>* const& __cordl_internal_get_m_ContextStack() const;

constexpr ::System::Collections::Generic::Stack_1<::GlobalNamespace::StyleVariableResolver_ResolveContext>*& __cordl_internal_get_m_ContextStack() ;

constexpr ::GlobalNamespace::StyleVariableResolver_ResolveContext const& __cordl_internal_get_m_CurrentContext() const;

constexpr ::GlobalNamespace::StyleVariableResolver_ResolveContext& __cordl_internal_get_m_CurrentContext() ;

constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher* const& __cordl_internal_get_m_Matcher() const;

constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*& __cordl_internal_get_m_Matcher() ;

constexpr ::UnityEngine::UIElements::StyleProperty* const& __cordl_internal_get_m_Property() const;

constexpr ::UnityEngine::UIElements::StyleProperty*& __cordl_internal_get_m_Property() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* const& __cordl_internal_get_m_ResolvedValues() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>*& __cordl_internal_get_m_ResolvedValues() ;

constexpr ::System::Collections::Generic::Stack_1<::StringW>* const& __cordl_internal_get_m_ResolvedVarStack() const;

constexpr ::System::Collections::Generic::Stack_1<::StringW>*& __cordl_internal_get_m_ResolvedVarStack() ;

constexpr void __cordl_internal_set__variableContext_k__BackingField(::UnityEngine::UIElements::StyleVariableContext*  value) ;

constexpr void __cordl_internal_set_m_ContextStack(::System::Collections::Generic::Stack_1<::GlobalNamespace::StyleVariableResolver_ResolveContext>*  value) ;

constexpr void __cordl_internal_set_m_CurrentContext(::GlobalNamespace::StyleVariableResolver_ResolveContext  value) ;

constexpr void __cordl_internal_set_m_Matcher(::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*  value) ;

constexpr void __cordl_internal_set_m_Property(::UnityEngine::UIElements::StyleProperty*  value) ;

constexpr void __cordl_internal_set_m_ResolvedValues(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>*  value) ;

constexpr void __cordl_internal_set_m_ResolvedVarStack(::System::Collections::Generic::Stack_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0xb793a9c, size 0x168, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser* getStaticF_s_SyntaxParser() ;

/// @brief Method get_currentHandles, addr 0xb792ea0, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::UIElements::StyleValueHandle> get_currentHandles() ;

/// @brief Method get_currentSheet, addr 0xb792e98, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::UIElements::StyleSheet> get_currentSheet() ;

/// @brief Method get_resolvedValues, addr 0xb792ea8, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* get_resolvedValues() ;

/// [CompilerGenerated]
/// @brief Method get_variableContext, addr 0xb792eb0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::StyleVariableContext* get_variableContext() ;

static inline void setStaticF_s_SyntaxParser(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*  value) ;

/// [CompilerGenerated]
/// @brief Method set_variableContext, addr 0xb792eb8, size 0x8, virtual false, abstract: false, final false
inline void set_variableContext(::UnityEngine::UIElements::StyleVariableContext*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StyleVariableResolver() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StyleVariableResolver", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StyleVariableResolver(StyleVariableResolver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StyleVariableResolver", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StyleVariableResolver(StyleVariableResolver const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8287};

/// @brief Field kMaxResolves offset 0xffffffff size 0x4
static constexpr int32_t  kMaxResolves{static_cast<int32_t>(0x64)};

/// @brief Field m_Matcher, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*  ___m_Matcher;

/// @brief Field m_ResolvedValues, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>*  ___m_ResolvedValues;

/// @brief Field m_ResolvedVarStack, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Stack_1<::StringW>*  ___m_ResolvedVarStack;

/// @brief Field m_Property, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::UIElements::StyleProperty*  ___m_Property;

/// @brief Field m_ContextStack, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Stack_1<::GlobalNamespace::StyleVariableResolver_ResolveContext>*  ___m_ContextStack;

/// @brief Field m_CurrentContext, offset: 0x38, size: 0x10, def value: None
 ::GlobalNamespace::StyleVariableResolver_ResolveContext  ___m_CurrentContext;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <variableContext>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::UIElements::StyleVariableContext*  ____variableContext_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleVariableResolver, ___m_Matcher) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleVariableResolver, ___m_ResolvedValues) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleVariableResolver, ___m_ResolvedVarStack) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleVariableResolver, ___m_Property) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleVariableResolver, ___m_ContextStack) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleVariableResolver, ___m_CurrentContext) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleVariableResolver, ____variableContext_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::StyleVariableResolver) == 0x50, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
