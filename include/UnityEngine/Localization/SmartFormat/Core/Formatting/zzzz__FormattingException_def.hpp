#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Core/Formatting/FormattingException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FormattingException)
namespace System {
class Exception;
}
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class FormatItem;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::Core::Formatting {
class FormattingException;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingException*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingException*, "UnityEngine.Localization.SmartFormat.Core.Formatting", "FormattingException");
// Dependencies System.Exception
namespace UnityEngine::Localization::SmartFormat::Core::Formatting {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Core.Formatting.FormattingException
class CORDL_TYPE FormattingException : public ::System::Exception {
public:
// Declarations
 __declspec(property(get=get_ErrorItem)) ::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*  ErrorItem;

 __declspec(property(get=get_Format)) ::StringW  Format;

 __declspec(property(get=get_Index)) int32_t  Index;

 __declspec(property(get=get_Issue)) ::StringW  Issue;

 __declspec(property(get=get_Message)) ::StringW  Message;

/// @brief Field <ErrorItem>k__BackingField, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__ErrorItem_k__BackingField, put=__cordl_internal_set__ErrorItem_k__BackingField)) ::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*  _ErrorItem_k__BackingField;

/// @brief Field <Format>k__BackingField, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__Format_k__BackingField, put=__cordl_internal_set__Format_k__BackingField)) ::StringW  _Format_k__BackingField;

/// @brief Field <Index>k__BackingField, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get__Index_k__BackingField, put=__cordl_internal_set__Index_k__BackingField)) int32_t  _Index_k__BackingField;

/// @brief Field <Issue>k__BackingField, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__Issue_k__BackingField, put=__cordl_internal_set__Issue_k__BackingField)) ::StringW  _Issue_k__BackingField;

static inline ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingException* New_ctor(::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*  errorItem, ::System::Exception*  formatException, int32_t  index) ;

static inline ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingException* New_ctor(::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*  errorItem, ::StringW  issue, int32_t  index) ;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem* const& __cordl_internal_get__ErrorItem_k__BackingField() const;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*& __cordl_internal_get__ErrorItem_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Format_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Format_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__Index_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Index_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Issue_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Issue_k__BackingField() ;

constexpr void __cordl_internal_set__ErrorItem_k__BackingField(::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*  value) ;

constexpr void __cordl_internal_set__Format_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Index_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__Issue_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0xb0487dc, size 0xc8, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*  errorItem, ::System::Exception*  formatException, int32_t  index) ;

/// @brief Method .ctor, addr 0xb0488a4, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*  errorItem, ::StringW  issue, int32_t  index) ;

/// [CompilerGenerated]
/// @brief Method get_ErrorItem, addr 0xb048960, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem* get_ErrorItem() ;

/// [CompilerGenerated]
/// @brief Method get_Format, addr 0xb048958, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Format() ;

/// [CompilerGenerated]
/// @brief Method get_Index, addr 0xb048970, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Index() ;

/// [CompilerGenerated]
/// @brief Method get_Issue, addr 0xb048968, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Issue() ;

/// @brief Method get_Message, addr 0xb048978, size 0x1c0, virtual true, abstract: false, final false
inline ::StringW get_Message() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FormattingException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FormattingException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FormattingException(FormattingException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FormattingException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FormattingException(FormattingException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25237};

/// [CompilerGenerated]
/// @brief Field <Format>k__BackingField, offset: 0x90, size: 0x8, def value: None
 ::StringW  ____Format_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ErrorItem>k__BackingField, offset: 0x98, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*  ____ErrorItem_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Issue>k__BackingField, offset: 0xa0, size: 0x8, def value: None
 ::StringW  ____Issue_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Index>k__BackingField, offset: 0xa8, size: 0x4, def value: None
 int32_t  ____Index_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingException, ____Format_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingException, ____ErrorItem_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingException, ____Issue_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingException, ____Index_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingException) == 0xb0, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Core::Formatting
