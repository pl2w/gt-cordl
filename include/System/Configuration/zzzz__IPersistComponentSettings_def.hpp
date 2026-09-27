#pragma once
// IWYU pragma private; include "System/Configuration/IPersistComponentSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IPersistComponentSettings)
// Forward declare root types
namespace System::Configuration {
class IPersistComponentSettings;
}
// Write type traits
MARK_REF_T(::System::Configuration::IPersistComponentSettings*);
DEFINE_IL2CPP_CLASS(::System::Configuration::IPersistComponentSettings*, "System.Configuration", "IPersistComponentSettings");
// Dependencies 
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.IPersistComponentSettings
class CORDL_TYPE IPersistComponentSettings {
public:
// Declarations
 __declspec(property(get=get_SaveSettings, put=set_SaveSettings)) bool  SaveSettings;

 __declspec(property(get=get_SettingsKey, put=set_SettingsKey)) ::StringW  SettingsKey;

/// @brief Method LoadComponentSettings, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void LoadComponentSettings() ;

/// @brief Method ResetComponentSettings, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ResetComponentSettings() ;

/// @brief Method SaveComponentSettings, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SaveComponentSettings() ;

/// @brief Method get_SaveSettings, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_SaveSettings() ;

/// @brief Method get_SettingsKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_SettingsKey() ;

/// @brief Method set_SaveSettings, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_SaveSettings(bool  value) ;

/// @brief Method set_SettingsKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_SettingsKey(::StringW  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IPersistComponentSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPersistComponentSettings(IPersistComponentSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11034};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Configuration
