#pragma once
// IWYU pragma private; include "System/Configuration/SettingsAttributeDictionary.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__Hashtable_def.hpp"
CORDL_MODULE_EXPORT(SettingsAttributeDictionary)
// Forward declare root types
namespace System::Configuration {
class SettingsAttributeDictionary;
}
// Write type traits
MARK_REF_T(::System::Configuration::SettingsAttributeDictionary*);
DEFINE_IL2CPP_CLASS(::System::Configuration::SettingsAttributeDictionary*, "System.Configuration", "SettingsAttributeDictionary");
// Dependencies System.Collections.Hashtable
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.SettingsAttributeDictionary
class CORDL_TYPE SettingsAttributeDictionary : public ::System::Collections::Hashtable {
public:
// Declarations
static inline ::System::Configuration::SettingsAttributeDictionary* New_ctor() ;

static inline ::System::Configuration::SettingsAttributeDictionary* New_ctor(::System::Configuration::SettingsAttributeDictionary*  attributes) ;

/// @brief Method .ctor, addr 0xacf763c, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xacf7674, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::System::Configuration::SettingsAttributeDictionary*  attributes) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SettingsAttributeDictionary() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SettingsAttributeDictionary", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SettingsAttributeDictionary(SettingsAttributeDictionary && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SettingsAttributeDictionary", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SettingsAttributeDictionary(SettingsAttributeDictionary const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10971};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Configuration::SettingsAttributeDictionary) == 0x50, "Size mismatch!");

} // namespace end def System::Configuration
