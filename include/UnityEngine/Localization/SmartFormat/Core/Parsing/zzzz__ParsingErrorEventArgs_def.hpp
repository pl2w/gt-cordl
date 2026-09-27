#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Core/Parsing/ParsingErrorEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
CORDL_MODULE_EXPORT(ParsingErrorEventArgs)
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class ParsingErrors;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class ParsingErrorEventArgs;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs*, "UnityEngine.Localization.SmartFormat.Core.Parsing", "ParsingErrorEventArgs");
// Dependencies System.EventArgs
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Core.Parsing.ParsingErrorEventArgs
class CORDL_TYPE ParsingErrorEventArgs : public ::System::EventArgs {
public:
// Declarations
 __declspec(property(get=get_Errors, put=set_Errors)) ::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*  Errors;

 __declspec(property(get=get_ThrowsException, put=set_ThrowsException)) bool  ThrowsException;

/// @brief Field <Errors>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Errors_k__BackingField, put=__cordl_internal_set__Errors_k__BackingField)) ::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*  _Errors_k__BackingField;

/// @brief Field <ThrowsException>k__BackingField, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__ThrowsException_k__BackingField, put=__cordl_internal_set__ThrowsException_k__BackingField)) bool  _ThrowsException_k__BackingField;

static inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs* New_ctor(::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*  errors, bool  throwsException) ;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors* const& __cordl_internal_get__Errors_k__BackingField() const;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*& __cordl_internal_get__Errors_k__BackingField() ;

constexpr bool const& __cordl_internal_get__ThrowsException_k__BackingField() const;

constexpr bool& __cordl_internal_get__ThrowsException_k__BackingField() ;

constexpr void __cordl_internal_set__Errors_k__BackingField(::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*  value) ;

constexpr void __cordl_internal_set__ThrowsException_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0xb046ea0, size 0x84, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*  errors, bool  throwsException) ;

/// [CompilerGenerated]
/// @brief Method get_Errors, addr 0xb046f24, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors* get_Errors() ;

/// [CompilerGenerated]
/// @brief Method get_ThrowsException, addr 0xb046f34, size 0x8, virtual false, abstract: false, final false
inline bool get_ThrowsException() ;

/// [CompilerGenerated]
/// @brief Method set_Errors, addr 0xb046f2c, size 0x8, virtual false, abstract: false, final false
inline void set_Errors(::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*  value) ;

/// [CompilerGenerated]
/// @brief Method set_ThrowsException, addr 0xb046f3c, size 0x8, virtual false, abstract: false, final false
inline void set_ThrowsException(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ParsingErrorEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ParsingErrorEventArgs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ParsingErrorEventArgs(ParsingErrorEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParsingErrorEventArgs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParsingErrorEventArgs(ParsingErrorEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25225};

/// [CompilerGenerated]
/// @brief Field <Errors>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*  ____Errors_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ThrowsException>k__BackingField, offset: 0x18, size: 0x1, def value: None
 bool  ____ThrowsException_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs, ____Errors_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs, ____ThrowsException_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Core::Parsing
