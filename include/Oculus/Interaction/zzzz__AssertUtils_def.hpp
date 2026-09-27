#pragma once
// IWYU pragma private; include "Oculus/Interaction/AssertUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AssertUtils)
namespace Oculus::Interaction {
class AssertUtils___c;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Text::RegularExpressions {
class MatchEvaluator;
}
namespace System::Text::RegularExpressions {
class Match;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction {
class AssertUtils;
}
namespace Oculus::Interaction {
class AssertUtils___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::AssertUtils*);
MARK_REF_T(::Oculus::Interaction::AssertUtils___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::AssertUtils*, "Oculus.Interaction", "AssertUtils");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::AssertUtils___c*, "Oculus.Interaction", "AssertUtils/<>c");
// [Extension]
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.AssertUtils
class CORDL_TYPE AssertUtils : public ::System::Object {
public:
// Declarations
using __c = ::Oculus::Interaction::AssertUtils___c;

/// [Extension]
/// [Conditional("UNITY_ASSERTIONS")]
/// @brief Method AssertAspect, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TValue>
requires(::cordl_internals::reference_type_constraint<TValue>)
static inline void AssertAspect(::UnityEngine::Component*  component, TValue  aspect, ::StringW  aspectLocation, ::StringW  whyItFailed, ::StringW  whereFailed, ::StringW  howToFix) ;

/// [Extension]
/// [Conditional("UNITY_ASSERTIONS")]
/// @brief Method AssertCollectionField, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TValue>
static inline void AssertCollectionField(::UnityEngine::Component*  component, ::System::Collections::Generic::IEnumerable_1<TValue>*  value, ::StringW  variableName, ::StringW  whyItFailed, ::StringW  whereFailed, ::StringW  howToFix) ;

/// [Extension]
/// [Conditional("UNITY_ASSERTIONS")]
/// @brief Method AssertCollectionItems, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TValue>
static inline void AssertCollectionItems(::UnityEngine::Component*  component, ::System::Collections::Generic::IEnumerable_1<TValue>*  value, ::StringW  variableName, ::StringW  whyItFailed, ::StringW  whereItFailed, ::StringW  howToFix) ;

/// [Extension]
/// [Conditional("UNITY_ASSERTIONS")]
/// @brief Method AssertField, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TValue>
requires(::cordl_internals::reference_type_constraint<TValue>)
static inline void AssertField(::UnityEngine::Component*  component, TValue  value, ::StringW  variableName, ::StringW  whyItFailed, ::StringW  whereItFailed, ::StringW  howToFix) ;

/// [Extension]
/// [Conditional("UNITY_ASSERTIONS")]
/// @brief Method AssertIsTrue, addr 0xa48a41c, size 0x38, virtual false, abstract: false, final false
static inline void AssertIsTrue(::UnityEngine::Component*  component, bool  value, ::StringW  whyItFailed, ::StringW  whereItFailed, ::StringW  howToFix) ;

/// [Extension]
/// [Conditional("UNITY_ASSERTIONS")]
/// @brief Method LogWarning, addr 0xa48ac38, size 0x218, virtual false, abstract: false, final false
static inline void LogWarning(::UnityEngine::Component*  component, ::StringW  whyItFailed, ::StringW  whereItFailed, ::StringW  howToFix) ;

/// @brief Method Nicify, addr 0xa48aa3c, size 0x1fc, virtual false, abstract: false, final false
static inline ::StringW Nicify(::StringW  variableName) ;

/// [Extension]
/// [Conditional("UNITY_ASSERTIONS")]
/// @brief Method WarnInspectorCollectionItems, addr 0xa48a454, size 0x5e8, virtual false, abstract: false, final false
static inline void WarnInspectorCollectionItems(::UnityEngine::Component*  component, ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Object>>*  value, ::StringW  variableName, ::StringW  whyItFailed, ::StringW  whereItFailed, ::StringW  howToFix) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AssertUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AssertUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AssertUtils(AssertUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssertUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssertUtils(AssertUtils const& ) = delete;

/// @brief Field HiglightColor offset 0xffffffff size 0x8
static constexpr ::ConstString  HiglightColor{u"#3366ff"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16010};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::AssertUtils) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.AssertUtils/<>c
class CORDL_TYPE AssertUtils___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::AssertUtils___c*  __9;

/// @brief Field <>9__8_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__8_0, put=setStaticF___9__8_0)) ::System::Text::RegularExpressions::MatchEvaluator*  __9__8_0;

static inline ::Oculus::Interaction::AssertUtils___c* New_ctor() ;

/// @brief Method <Nicify>b__8_0, addr 0xa48aec0, size 0x28, virtual false, abstract: false, final false
inline ::StringW _Nicify_b__8_0(::System::Text::RegularExpressions::Match*  match) ;

/// @brief Method .ctor, addr 0xa48aeb8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::AssertUtils___c* getStaticF___9() ;

static inline ::System::Text::RegularExpressions::MatchEvaluator* getStaticF___9__8_0() ;

static inline void setStaticF___9(::Oculus::Interaction::AssertUtils___c*  value) ;

static inline void setStaticF___9__8_0(::System::Text::RegularExpressions::MatchEvaluator*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AssertUtils___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AssertUtils___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AssertUtils___c(AssertUtils___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssertUtils___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssertUtils___c(AssertUtils___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16009};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::AssertUtils___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction
