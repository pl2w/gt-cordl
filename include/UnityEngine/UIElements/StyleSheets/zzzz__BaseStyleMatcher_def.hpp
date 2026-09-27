#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/BaseStyleMatcher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__BaseStyleMatcher_MatchContext_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BaseStyleMatcher)
namespace GlobalNamespace {
struct BaseStyleMatcher_MatchContext;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace System::Text::RegularExpressions {
class Regex;
}
namespace UnityEngine::UIElements::StyleSheets::Syntax {
class Expression;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
class BaseStyleMatcher;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*, "UnityEngine.UIElements.StyleSheets", "BaseStyleMatcher");
// Dependencies System.Object, UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::MatchContext
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: false
// CS Name: UnityEngine.UIElements.StyleSheets.BaseStyleMatcher
class CORDL_TYPE BaseStyleMatcher : public ::System::Object {
public:
// Declarations
using MatchContext = ::GlobalNamespace::BaseStyleMatcher_MatchContext;

 __declspec(property(get=get_currentIndex, put=set_currentIndex)) int32_t  currentIndex;

 __declspec(property(get=get_hasCurrent)) bool  hasCurrent;

 __declspec(property(get=get_isCurrentComma)) bool  isCurrentComma;

 __declspec(property(get=get_isCurrentVariable)) bool  isCurrentVariable;

/// @brief Field m_ContextStack, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ContextStack, put=__cordl_internal_set_m_ContextStack)) ::System::Collections::Generic::Stack_1<::GlobalNamespace::BaseStyleMatcher_MatchContext>*  m_ContextStack;

/// @brief Field m_CurrentContext, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CurrentContext, put=__cordl_internal_set_m_CurrentContext)) ::GlobalNamespace::BaseStyleMatcher_MatchContext  m_CurrentContext;

 __declspec(property(get=get_matchedVariableCount, put=set_matchedVariableCount)) int32_t  matchedVariableCount;

/// @brief Field s_CustomIdentRegex, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_CustomIdentRegex, put=setStaticF_s_CustomIdentRegex)) ::System::Text::RegularExpressions::Regex*  s_CustomIdentRegex;

 __declspec(property(get=get_valueCount)) int32_t  valueCount;

/// @brief Method DropContext, addr 0xb8170fc, size 0x50, virtual false, abstract: false, final false
inline void DropContext() ;

/// @brief Method Initialize, addr 0xb816fb8, size 0x54, virtual false, abstract: false, final false
inline void Initialize() ;

/// @brief Method Match, addr 0xb81714c, size 0xb4, virtual false, abstract: false, final false
inline bool Match(::UnityEngine::UIElements::StyleSheets::Syntax::Expression*  exp) ;

/// @brief Method MatchAndAnd, addr 0xb817858, size 0x30, virtual false, abstract: false, final false
inline bool MatchAndAnd(::UnityEngine::UIElements::StyleSheets::Syntax::Expression*  exp) ;

/// @brief Method MatchAngle, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool MatchAngle() ;

/// @brief Method MatchColor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool MatchColor() ;

/// @brief Method MatchCombinator, addr 0xb817468, size 0xd8, virtual false, abstract: false, final false
inline bool MatchCombinator(::UnityEngine::UIElements::StyleSheets::Syntax::Expression*  exp) ;

/// @brief Method MatchCustomIdent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool MatchCustomIdent() ;

/// @brief Method MatchDataType, addr 0xb817540, size 0x180, virtual false, abstract: false, final false
inline bool MatchDataType(::UnityEngine::UIElements::StyleSheets::Syntax::Expression*  exp) ;

/// @brief Method MatchExpression, addr 0xb817208, size 0x114, virtual false, abstract: false, final false
inline bool MatchExpression(::UnityEngine::UIElements::StyleSheets::Syntax::Expression*  exp) ;

/// @brief Method MatchExpressionWithMultiplier, addr 0xb81731c, size 0x14c, virtual false, abstract: false, final false
inline bool MatchExpressionWithMultiplier(::UnityEngine::UIElements::StyleSheets::Syntax::Expression*  exp) ;

/// @brief Method MatchFilterFunction, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool MatchFilterFunction() ;

/// @brief Method MatchGroup, addr 0xb8176c0, size 0xb4, virtual false, abstract: false, final false
inline bool MatchGroup(::UnityEngine::UIElements::StyleSheets::Syntax::Expression*  exp) ;

/// @brief Method MatchInteger, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool MatchInteger() ;

/// @brief Method MatchJuxtaposition, addr 0xb817888, size 0x78, virtual false, abstract: false, final false
inline bool MatchJuxtaposition(::UnityEngine::UIElements::StyleSheets::Syntax::Expression*  exp) ;

/// @brief Method MatchKeyword, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool MatchKeyword(::StringW  keyword) ;

/// @brief Method MatchLength, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool MatchLength() ;

/// @brief Method MatchMany, addr 0xb817900, size 0x194, virtual false, abstract: false, final false
inline int32_t MatchMany(::UnityEngine::UIElements::StyleSheets::Syntax::Expression*  exp) ;

/// @brief Method MatchManyByOrder, addr 0xb817a94, size 0x1ac, virtual false, abstract: false, final false
inline int32_t MatchManyByOrder(::UnityEngine::UIElements::StyleSheets::Syntax::Expression*  exp, int32_t*  matchOrder) ;

/// @brief Method MatchNumber, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool MatchNumber() ;

/// @brief Method MatchOr, addr 0xb817774, size 0xcc, virtual false, abstract: false, final false
inline bool MatchOr(::UnityEngine::UIElements::StyleSheets::Syntax::Expression*  exp) ;

/// @brief Method MatchOrOr, addr 0xb817840, size 0x18, virtual false, abstract: false, final false
inline bool MatchOrOr(::UnityEngine::UIElements::StyleSheets::Syntax::Expression*  exp) ;

/// @brief Method MatchPercentage, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool MatchPercentage() ;

/// @brief Method MatchResource, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool MatchResource() ;

/// @brief Method MatchTime, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool MatchTime() ;

/// @brief Method MatchUrl, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool MatchUrl() ;

/// @brief Method MoveNext, addr 0xb81700c, size 0x44, virtual false, abstract: false, final false
inline void MoveNext() ;

static inline ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher* New_ctor() ;

/// @brief Method RestoreContext, addr 0xb8170a4, size 0x58, virtual false, abstract: false, final false
inline void RestoreContext() ;

/// @brief Method SaveContext, addr 0xb817050, size 0x54, virtual false, abstract: false, final false
inline void SaveContext() ;

constexpr ::System::Collections::Generic::Stack_1<::GlobalNamespace::BaseStyleMatcher_MatchContext>* const& __cordl_internal_get_m_ContextStack() const;

constexpr ::System::Collections::Generic::Stack_1<::GlobalNamespace::BaseStyleMatcher_MatchContext>*& __cordl_internal_get_m_ContextStack() ;

constexpr ::GlobalNamespace::BaseStyleMatcher_MatchContext const& __cordl_internal_get_m_CurrentContext() const;

constexpr ::GlobalNamespace::BaseStyleMatcher_MatchContext& __cordl_internal_get_m_CurrentContext() ;

constexpr void __cordl_internal_set_m_ContextStack(::System::Collections::Generic::Stack_1<::GlobalNamespace::BaseStyleMatcher_MatchContext>*  value) ;

constexpr void __cordl_internal_set_m_CurrentContext(::GlobalNamespace::BaseStyleMatcher_MatchContext  value) ;

/// @brief Method .ctor, addr 0xb817c40, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Text::RegularExpressions::Regex* getStaticF_s_CustomIdentRegex() ;

/// @brief Method get_currentIndex, addr 0xb816f98, size 0x8, virtual false, abstract: false, final false
inline int32_t get_currentIndex() ;

/// @brief Method get_hasCurrent, addr 0xb816f70, size 0x28, virtual false, abstract: false, final false
inline bool get_hasCurrent() ;

/// @brief Method get_isCurrentComma, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_isCurrentComma() ;

/// @brief Method get_isCurrentVariable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_isCurrentVariable() ;

/// @brief Method get_matchedVariableCount, addr 0xb816fa8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_matchedVariableCount() ;

/// @brief Method get_valueCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_valueCount() ;

static inline void setStaticF_s_CustomIdentRegex(::System::Text::RegularExpressions::Regex*  value) ;

/// @brief Method set_currentIndex, addr 0xb816fa0, size 0x8, virtual false, abstract: false, final false
inline void set_currentIndex(int32_t  value) ;

/// @brief Method set_matchedVariableCount, addr 0xb816fb0, size 0x8, virtual false, abstract: false, final false
inline void set_matchedVariableCount(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseStyleMatcher() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseStyleMatcher", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseStyleMatcher(BaseStyleMatcher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseStyleMatcher", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseStyleMatcher(BaseStyleMatcher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8709};

/// @brief Field m_ContextStack, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Stack_1<::GlobalNamespace::BaseStyleMatcher_MatchContext>*  ___m_ContextStack;

/// @brief Field m_CurrentContext, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::BaseStyleMatcher_MatchContext  ___m_CurrentContext;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher, ___m_ContextStack) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher, ___m_CurrentContext) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::StyleSheets
