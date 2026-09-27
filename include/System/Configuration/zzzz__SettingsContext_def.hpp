#pragma once
// IWYU pragma private; include "System/Configuration/SettingsContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__Hashtable_def.hpp"
CORDL_MODULE_EXPORT(SettingsContext)
// Forward declare root types
namespace System::Configuration {
class SettingsContext;
}
// Write type traits
MARK_REF_T(::System::Configuration::SettingsContext*);
DEFINE_IL2CPP_CLASS(::System::Configuration::SettingsContext*, "System.Configuration", "SettingsContext");
// Dependencies System.Collections.Hashtable
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.SettingsContext
class CORDL_TYPE SettingsContext : public ::System::Collections::Hashtable {
public:
// Declarations
static inline ::System::Configuration::SettingsContext* New_ctor() ;

/// @brief Method .ctor, addr 0xacf683c, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SettingsContext() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SettingsContext", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SettingsContext(SettingsContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SettingsContext", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SettingsContext(SettingsContext const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10964};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Configuration::SettingsContext) == 0x50, "Size mismatch!");

} // namespace end def System::Configuration
