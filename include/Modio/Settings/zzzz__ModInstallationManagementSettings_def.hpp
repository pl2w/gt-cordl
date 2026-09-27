#pragma once
// IWYU pragma private; include "Modio/Settings/ModInstallationManagementSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ModInstallationManagementSettings)
namespace Modio {
class IModioServiceSettings;
}
// Forward declare root types
namespace Modio::Settings {
class ModInstallationManagementSettings;
}
// Write type traits
MARK_REF_T(::Modio::Settings::ModInstallationManagementSettings*);
DEFINE_IL2CPP_CLASS(::Modio::Settings::ModInstallationManagementSettings*, "Modio.Settings", "ModInstallationManagementSettings");
// Dependencies System.Object
namespace Modio::Settings {
// Is value type: false
// CS Name: Modio.Settings.ModInstallationManagementSettings
class CORDL_TYPE ModInstallationManagementSettings : public ::System::Object {
public:
// Declarations
/// @brief Field AutoActivate, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_AutoActivate, put=__cordl_internal_set_AutoActivate)) bool  AutoActivate;

/// @brief Field UninstallIfNoSubscriptions, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_UninstallIfNoSubscriptions, put=__cordl_internal_set_UninstallIfNoSubscriptions)) bool  UninstallIfNoSubscriptions;

/// @brief Convert operator to "::Modio::IModioServiceSettings"
constexpr operator  ::Modio::IModioServiceSettings*() noexcept;

static inline ::Modio::Settings::ModInstallationManagementSettings* New_ctor() ;

constexpr bool const& __cordl_internal_get_AutoActivate() const;

constexpr bool& __cordl_internal_get_AutoActivate() ;

constexpr bool const& __cordl_internal_get_UninstallIfNoSubscriptions() const;

constexpr bool& __cordl_internal_get_UninstallIfNoSubscriptions() ;

constexpr void __cordl_internal_set_AutoActivate(bool  value) ;

constexpr void __cordl_internal_set_UninstallIfNoSubscriptions(bool  value) ;

/// @brief Method .ctor, addr 0xa026884, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Modio::IModioServiceSettings"
constexpr ::Modio::IModioServiceSettings* i___Modio__IModioServiceSettings() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModInstallationManagementSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModInstallationManagementSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModInstallationManagementSettings(ModInstallationManagementSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModInstallationManagementSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModInstallationManagementSettings(ModInstallationManagementSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17552};

/// @brief Field AutoActivate, offset: 0x10, size: 0x1, def value: None
 bool  ___AutoActivate;

/// @brief Field UninstallIfNoSubscriptions, offset: 0x11, size: 0x1, def value: None
 bool  ___UninstallIfNoSubscriptions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Settings::ModInstallationManagementSettings, ___AutoActivate) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Settings::ModInstallationManagementSettings, ___UninstallIfNoSubscriptions) == 0x11, "Offset mismatch!");

static_assert(sizeof(::Modio::Settings::ModInstallationManagementSettings) == 0x18, "Size mismatch!");

} // namespace end def Modio::Settings
