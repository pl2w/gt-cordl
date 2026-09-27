#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/FormattingErrorEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FormattingErrorEventArgs)
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat {
class FormattingErrorEventArgs;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::FormattingErrorEventArgs*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::FormattingErrorEventArgs*, "UnityEngine.Localization.SmartFormat", "FormattingErrorEventArgs");
// Dependencies System.EventArgs
namespace UnityEngine::Localization::SmartFormat {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.FormattingErrorEventArgs
class CORDL_TYPE FormattingErrorEventArgs : public ::System::EventArgs {
public:
// Declarations
 __declspec(property(get=get_ErrorIndex, put=set_ErrorIndex)) int32_t  ErrorIndex;

 __declspec(property(get=get_IgnoreError, put=set_IgnoreError)) bool  IgnoreError;

 __declspec(property(get=get_Placeholder, put=set_Placeholder)) ::StringW  Placeholder;

/// @brief Field <ErrorIndex>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__ErrorIndex_k__BackingField, put=__cordl_internal_set__ErrorIndex_k__BackingField)) int32_t  _ErrorIndex_k__BackingField;

/// @brief Field <IgnoreError>k__BackingField, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get__IgnoreError_k__BackingField, put=__cordl_internal_set__IgnoreError_k__BackingField)) bool  _IgnoreError_k__BackingField;

/// @brief Field <Placeholder>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Placeholder_k__BackingField, put=__cordl_internal_set__Placeholder_k__BackingField)) ::StringW  _Placeholder_k__BackingField;

static inline ::UnityEngine::Localization::SmartFormat::FormattingErrorEventArgs* New_ctor(::StringW  rawText, int32_t  errorIndex, bool  ignoreError) ;

constexpr int32_t const& __cordl_internal_get__ErrorIndex_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__ErrorIndex_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IgnoreError_k__BackingField() const;

constexpr bool& __cordl_internal_get__IgnoreError_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Placeholder_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Placeholder_k__BackingField() ;

constexpr void __cordl_internal_set__ErrorIndex_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__IgnoreError_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__Placeholder_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0xb02702c, size 0x94, virtual false, abstract: false, final false
inline void _ctor(::StringW  rawText, int32_t  errorIndex, bool  ignoreError) ;

/// [CompilerGenerated]
/// @brief Method get_ErrorIndex, addr 0xb0270d0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ErrorIndex() ;

/// [CompilerGenerated]
/// @brief Method get_IgnoreError, addr 0xb0270e0, size 0x8, virtual false, abstract: false, final false
inline bool get_IgnoreError() ;

/// [CompilerGenerated]
/// @brief Method get_Placeholder, addr 0xb0270c0, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Placeholder() ;

/// [CompilerGenerated]
/// @brief Method set_ErrorIndex, addr 0xb0270d8, size 0x8, virtual false, abstract: false, final false
inline void set_ErrorIndex(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_IgnoreError, addr 0xb0270e8, size 0x8, virtual false, abstract: false, final false
inline void set_IgnoreError(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_Placeholder, addr 0xb0270c8, size 0x8, virtual false, abstract: false, final false
inline void set_Placeholder(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FormattingErrorEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FormattingErrorEventArgs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FormattingErrorEventArgs(FormattingErrorEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FormattingErrorEventArgs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FormattingErrorEventArgs(FormattingErrorEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25134};

/// [CompilerGenerated]
/// @brief Field <Placeholder>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____Placeholder_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ErrorIndex>k__BackingField, offset: 0x18, size: 0x4, def value: None
 int32_t  ____ErrorIndex_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IgnoreError>k__BackingField, offset: 0x1c, size: 0x1, def value: None
 bool  ____IgnoreError_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::FormattingErrorEventArgs, ____Placeholder_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::FormattingErrorEventArgs, ____ErrorIndex_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::FormattingErrorEventArgs, ____IgnoreError_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::FormattingErrorEventArgs) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat
