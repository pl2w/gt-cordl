#pragma once
// IWYU pragma private; include "System/Configuration/SettingsLoadedEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
CORDL_MODULE_EXPORT(SettingsLoadedEventArgs)
namespace System::Configuration {
class SettingsProvider;
}
// Forward declare root types
namespace System::Configuration {
class SettingsLoadedEventArgs;
}
// Write type traits
MARK_REF_T(::System::Configuration::SettingsLoadedEventArgs*);
DEFINE_IL2CPP_CLASS(::System::Configuration::SettingsLoadedEventArgs*, "System.Configuration", "SettingsLoadedEventArgs");
// Dependencies System.EventArgs
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.SettingsLoadedEventArgs
class CORDL_TYPE SettingsLoadedEventArgs : public ::System::EventArgs {
public:
// Declarations
 __declspec(property(get=get_Provider)) ::System::Configuration::SettingsProvider*  Provider;

static inline ::System::Configuration::SettingsLoadedEventArgs* New_ctor(::System::Configuration::SettingsProvider*  provider) ;

/// @brief Method .ctor, addr 0xacfbfc8, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::System::Configuration::SettingsProvider*  provider) ;

/// @brief Method get_Provider, addr 0xacfc000, size 0x38, virtual false, abstract: false, final false
inline ::System::Configuration::SettingsProvider* get_Provider() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SettingsLoadedEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SettingsLoadedEventArgs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SettingsLoadedEventArgs(SettingsLoadedEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SettingsLoadedEventArgs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SettingsLoadedEventArgs(SettingsLoadedEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11019};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Configuration::SettingsLoadedEventArgs) == 0x10, "Size mismatch!");

} // namespace end def System::Configuration
