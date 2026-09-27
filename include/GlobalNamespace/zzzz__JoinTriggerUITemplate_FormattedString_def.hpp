#pragma once
// IWYU pragma private; include "GlobalNamespace/JoinTriggerUITemplate_FormattedString.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(JoinTriggerUITemplate_FormattedString)
namespace GlobalNamespace {
class StringFormatter;
}
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct JoinTriggerUITemplate_FormattedString;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::JoinTriggerUITemplate_FormattedString);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::JoinTriggerUITemplate_FormattedString, "", "JoinTriggerUITemplate/FormattedString");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: JoinTriggerUITemplate/FormattedString
struct CORDL_TYPE JoinTriggerUITemplate_FormattedString {
public:
// Declarations
/// @brief Method GetText, addr 0x567b9d8, size 0x160, virtual false, abstract: false, final false
inline ::StringW GetText(::StringW  oldZone, ::StringW  newZone, ::StringW  oldGameType, ::StringW  newGameType) ;

/// @brief Method GetText, addr 0x567b90c, size 0xbc, virtual false, abstract: false, final false
inline ::StringW GetText(::System::Func_1<::StringW>*  oldZone, ::System::Func_1<::StringW>*  newZone, ::System::Func_1<::StringW>*  oldGameType, ::System::Func_1<::StringW>*  newGameType) ;

// Ctor Parameters []
// @brief default ctor
constexpr JoinTriggerUITemplate_FormattedString() ;

// Ctor Parameters [CppParam { name: "formatText", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "formatter", ty: "::GlobalNamespace::StringFormatter*", modifiers: "", def_value: None, comment: None }]
constexpr JoinTriggerUITemplate_FormattedString(::StringW  formatText, ::GlobalNamespace::StringFormatter*  formatter) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{859};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [TextArea]
/// [SerializeField]
/// @brief Field formatText, offset: 0x0, size: 0x8, def value: None
 ::StringW  formatText;

/// @brief Field formatter, offset: 0x8, size: 0x8, def value: None
 ::GlobalNamespace::StringFormatter*  formatter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::JoinTriggerUITemplate_FormattedString, formatText) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinTriggerUITemplate_FormattedString, formatter) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::JoinTriggerUITemplate_FormattedString) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
