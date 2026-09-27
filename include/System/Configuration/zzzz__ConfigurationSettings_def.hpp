#pragma once
// IWYU pragma private; include "System/Configuration/ConfigurationSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ConfigurationSettings)
namespace System::Collections::Specialized {
class NameValueCollection;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Configuration {
class ConfigurationSettings;
}
// Write type traits
MARK_REF_T(::System::Configuration::ConfigurationSettings*);
DEFINE_IL2CPP_CLASS(::System::Configuration::ConfigurationSettings*, "System.Configuration", "ConfigurationSettings");
// Dependencies System.Object
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.ConfigurationSettings
class CORDL_TYPE ConfigurationSettings : public ::System::Object {
public:
// Declarations
/// [Obsolete("This method is obsolete, it has been replaced by System.Configuration!System.Configuration.ConfigurationManager.GetSection")]
/// @brief Method GetConfig, addr 0xacfc8f8, size 0x38, virtual false, abstract: false, final false
static inline ::System::Object* GetConfig(::StringW  sectionName) ;

static inline ::System::Configuration::ConfigurationSettings* New_ctor() ;

/// @brief Method .ctor, addr 0xacfc888, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AppSettings, addr 0xacfc8c0, size 0x38, virtual false, abstract: false, final false
static inline ::System::Collections::Specialized::NameValueCollection* get_AppSettings() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConfigurationSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConfigurationSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ConfigurationSettings(ConfigurationSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConfigurationSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConfigurationSettings(ConfigurationSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11027};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Configuration::ConfigurationSettings) == 0x10, "Size mismatch!");

} // namespace end def System::Configuration
