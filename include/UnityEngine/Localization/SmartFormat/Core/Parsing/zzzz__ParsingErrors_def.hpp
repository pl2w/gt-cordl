#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Core/Parsing/ParsingErrors.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ParsingErrors)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class Format;
}
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class ParsingErrors_ParsingIssue;
}
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class ParsingErrors___c;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class ParsingErrors;
}
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class ParsingErrors_ParsingIssue;
}
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class ParsingErrors___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*);
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*);
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*, "UnityEngine.Localization.SmartFormat.Core.Parsing", "ParsingErrors");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*, "UnityEngine.Localization.SmartFormat.Core.Parsing", "ParsingErrors/ParsingIssue");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors___c*, "UnityEngine.Localization.SmartFormat.Core.Parsing", "ParsingErrors/<>c");
// Dependencies System.Exception
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Core.Parsing.ParsingErrors
class CORDL_TYPE ParsingErrors : public ::System::Exception {
public:
// Declarations
using ParsingIssue = ::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue;

using __c = ::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors___c;

 __declspec(property(get=get_HasIssues)) bool  HasIssues;

 __declspec(property(get=get_Issues)) ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*>*  Issues;

 __declspec(property(get=get_Message)) ::StringW  Message;

 __declspec(property(get=get_MessageShort)) ::StringW  MessageShort;

/// @brief Field <Issues>k__BackingField, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__Issues_k__BackingField, put=__cordl_internal_set__Issues_k__BackingField)) ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*>*  _Issues_k__BackingField;

/// @brief Field result, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_result, put=__cordl_internal_set_result)) ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  result;

/// @brief Method AddIssue, addr 0xb047784, size 0x10c, virtual false, abstract: false, final false
inline void AddIssue(::StringW  issue, int32_t  startIndex, int32_t  endIndex) ;

/// @brief Method Clear, addr 0xb046f4c, size 0x70, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Init, addr 0xb046f44, size 0x8, virtual false, abstract: false, final false
inline void Init(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  result) ;

static inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*>* const& __cordl_internal_get__Issues_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*>*& __cordl_internal_get__Issues_k__BackingField() ;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format* const& __cordl_internal_get_result() const;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*& __cordl_internal_get_result() ;

constexpr void __cordl_internal_set__Issues_k__BackingField(::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*>*  value) ;

constexpr void __cordl_internal_set_result(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  value) ;

/// @brief Method .ctor, addr 0xb0478d8, size 0xac, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_HasIssues, addr 0xb046fc4, size 0x50, virtual false, abstract: false, final false
inline bool get_HasIssues() ;

/// [CompilerGenerated]
/// @brief Method get_Issues, addr 0xb046fbc, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*>* get_Issues() ;

/// @brief Method get_Message, addr 0xb047230, size 0x554, virtual true, abstract: false, final false
inline ::StringW get_Message() ;

/// @brief Method get_MessageShort, addr 0xb047014, size 0x21c, virtual false, abstract: false, final false
inline ::StringW get_MessageShort() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ParsingErrors() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ParsingErrors", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ParsingErrors(ParsingErrors && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParsingErrors", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParsingErrors(ParsingErrors const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25228};

/// @brief Field result, offset: 0x90, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  ___result;

/// [CompilerGenerated]
/// @brief Field <Issues>k__BackingField, offset: 0x98, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*>*  ____Issues_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors, ___result) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors, ____Issues_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors) == 0xa0, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Core::Parsing
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Core.Parsing.ParsingErrors/<>c
class CORDL_TYPE ParsingErrors___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors___c*  __9;

/// @brief Field <>9__11_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__11_0, put=setStaticF___9__11_0)) ::System::Func_2<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*,::StringW>*  __9__11_0;

/// @brief Field <>9__9_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__9_0, put=setStaticF___9__9_0)) ::System::Func_2<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*,::StringW>*  __9__9_0;

static inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors___c* New_ctor() ;

/// @brief Method .ctor, addr 0xb047a04, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method <get_MessageShort>b__9_0, addr 0xb047a0c, size 0x14, virtual false, abstract: false, final false
inline ::StringW _get_MessageShort_b__9_0(::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*  i) ;

/// @brief Method <get_Message>b__11_0, addr 0xb047a20, size 0x14, virtual false, abstract: false, final false
inline ::StringW _get_Message_b__11_0(::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*  i) ;

static inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors___c* getStaticF___9() ;

static inline ::System::Func_2<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*,::StringW>* getStaticF___9__11_0() ;

static inline ::System::Func_2<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*,::StringW>* getStaticF___9__9_0() ;

static inline void setStaticF___9(::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors___c*  value) ;

static inline void setStaticF___9__11_0(::System::Func_2<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*,::StringW>*  value) ;

static inline void setStaticF___9__9_0(::System::Func_2<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ParsingErrors___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ParsingErrors___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ParsingErrors___c(ParsingErrors___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParsingErrors___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParsingErrors___c(ParsingErrors___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25227};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Core::Parsing
// Dependencies System.Object
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Core.Parsing.ParsingErrors/ParsingIssue
class CORDL_TYPE ParsingErrors_ParsingIssue : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Index)) int32_t  Index;

 __declspec(property(get=get_Issue)) ::StringW  Issue;

 __declspec(property(get=get_Length)) int32_t  Length;

/// @brief Field <Index>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__Index_k__BackingField, put=__cordl_internal_set__Index_k__BackingField)) int32_t  _Index_k__BackingField;

/// @brief Field <Issue>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Issue_k__BackingField, put=__cordl_internal_set__Issue_k__BackingField)) ::StringW  _Issue_k__BackingField;

/// @brief Field <Length>k__BackingField, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__Length_k__BackingField, put=__cordl_internal_set__Length_k__BackingField)) int32_t  _Length_k__BackingField;

static inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue* New_ctor(::StringW  issue, int32_t  index, int32_t  length) ;

constexpr int32_t const& __cordl_internal_get__Index_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Index_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Issue_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Issue_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__Length_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Length_k__BackingField() ;

constexpr void __cordl_internal_set__Index_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__Issue_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Length_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0xb047890, size 0x48, virtual false, abstract: false, final false
inline void _ctor(::StringW  issue, int32_t  index, int32_t  length) ;

/// [CompilerGenerated]
/// @brief Method get_Index, addr 0xb047984, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Index() ;

/// [CompilerGenerated]
/// @brief Method get_Issue, addr 0xb047994, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Issue() ;

/// [CompilerGenerated]
/// @brief Method get_Length, addr 0xb04798c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Length() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ParsingErrors_ParsingIssue() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ParsingErrors_ParsingIssue", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ParsingErrors_ParsingIssue(ParsingErrors_ParsingIssue && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParsingErrors_ParsingIssue", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParsingErrors_ParsingIssue(ParsingErrors_ParsingIssue const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25226};

/// [CompilerGenerated]
/// @brief Field <Index>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____Index_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Length>k__BackingField, offset: 0x14, size: 0x4, def value: None
 int32_t  ____Length_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Issue>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____Issue_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue, ____Index_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue, ____Length_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue, ____Issue_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Core::Parsing
