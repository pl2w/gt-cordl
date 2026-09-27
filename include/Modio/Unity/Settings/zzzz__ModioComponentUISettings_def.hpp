#pragma once
// IWYU pragma private; include "Modio/Unity/Settings/ModioComponentUISettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ModioComponentUISettings)
namespace Modio {
class IModioServiceSettings;
}
// Forward declare root types
namespace Modio::Unity::Settings {
class ModioComponentUISettings;
}
// Write type traits
MARK_REF_T(::Modio::Unity::Settings::ModioComponentUISettings*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::Settings::ModioComponentUISettings*, "Modio.Unity.Settings", "ModioComponentUISettings");
// Dependencies System.Object
namespace Modio::Unity::Settings {
// Is value type: false
// CS Name: Modio.Unity.Settings.ModioComponentUISettings
class CORDL_TYPE ModioComponentUISettings : public ::System::Object {
public:
// Declarations
/// @brief Field FallbackToEmailAuthentication, offset 0x12, size 0x1 
 __declspec(property(get=__cordl_internal_get_FallbackToEmailAuthentication, put=__cordl_internal_set_FallbackToEmailAuthentication)) bool  FallbackToEmailAuthentication;

/// @brief Field ShowEnableModToggle, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_ShowEnableModToggle, put=__cordl_internal_set_ShowEnableModToggle)) bool  ShowEnableModToggle;

/// @brief Field ShowMonetizationUI, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_ShowMonetizationUI, put=__cordl_internal_set_ShowMonetizationUI)) bool  ShowMonetizationUI;

/// @brief Convert operator to "::Modio::IModioServiceSettings"
constexpr operator  ::Modio::IModioServiceSettings*() noexcept;

static inline ::Modio::Unity::Settings::ModioComponentUISettings* New_ctor() ;

constexpr bool const& __cordl_internal_get_FallbackToEmailAuthentication() const;

constexpr bool& __cordl_internal_get_FallbackToEmailAuthentication() ;

constexpr bool const& __cordl_internal_get_ShowEnableModToggle() const;

constexpr bool& __cordl_internal_get_ShowEnableModToggle() ;

constexpr bool const& __cordl_internal_get_ShowMonetizationUI() const;

constexpr bool& __cordl_internal_get_ShowMonetizationUI() ;

constexpr void __cordl_internal_set_FallbackToEmailAuthentication(bool  value) ;

constexpr void __cordl_internal_set_ShowEnableModToggle(bool  value) ;

constexpr void __cordl_internal_set_ShowMonetizationUI(bool  value) ;

/// @brief Method .ctor, addr 0x9f9716c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Modio::IModioServiceSettings"
constexpr ::Modio::IModioServiceSettings* i___Modio__IModioServiceSettings() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioComponentUISettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioComponentUISettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioComponentUISettings(ModioComponentUISettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioComponentUISettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioComponentUISettings(ModioComponentUISettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32077};

/// @brief Field ShowMonetizationUI, offset: 0x10, size: 0x1, def value: None
 bool  ___ShowMonetizationUI;

/// @brief Field ShowEnableModToggle, offset: 0x11, size: 0x1, def value: None
 bool  ___ShowEnableModToggle;

/// @brief Field FallbackToEmailAuthentication, offset: 0x12, size: 0x1, def value: None
 bool  ___FallbackToEmailAuthentication;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::Settings::ModioComponentUISettings, ___ShowMonetizationUI) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::Settings::ModioComponentUISettings, ___ShowEnableModToggle) == 0x11, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::Settings::ModioComponentUISettings, ___FallbackToEmailAuthentication) == 0x12, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::Settings::ModioComponentUISettings) == 0x18, "Size mismatch!");

} // namespace end def Modio::Unity::Settings
