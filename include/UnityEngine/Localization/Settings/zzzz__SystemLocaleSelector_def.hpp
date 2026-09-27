#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Settings/SystemLocaleSelector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SystemLocaleSelector)
namespace System::Globalization {
class CultureInfo;
}
namespace UnityEngine::Localization::Settings {
class ILocalesProvider;
}
namespace UnityEngine::Localization::Settings {
class IStartupLocaleSelector;
}
namespace UnityEngine::Localization {
struct LocaleIdentifier;
}
namespace UnityEngine::Localization {
class Locale;
}
namespace UnityEngine {
struct SystemLanguage;
}
// Forward declare root types
namespace UnityEngine::Localization::Settings {
class SystemLocaleSelector;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Settings::SystemLocaleSelector*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Settings::SystemLocaleSelector*, "UnityEngine.Localization.Settings", "SystemLocaleSelector");
// Dependencies System.Object
namespace UnityEngine::Localization::Settings {
// Is value type: false
// CS Name: UnityEngine.Localization.Settings.SystemLocaleSelector
class CORDL_TYPE SystemLocaleSelector : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::Localization::Settings::IStartupLocaleSelector"
constexpr operator  ::UnityEngine::Localization::Settings::IStartupLocaleSelector*() noexcept;

/// @brief Method FindLocaleOrFallback, addr 0xb02194c, size 0x304, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Localization::Locale> FindLocaleOrFallback(::UnityEngine::Localization::LocaleIdentifier  localeIdentifier, ::UnityEngine::Localization::Settings::ILocalesProvider*  availableLocales) ;

/// @brief Method GetAndroidDeviceLanguage, addr 0xb0215d8, size 0x374, virtual false, abstract: false, final false
static inline ::StringW GetAndroidDeviceLanguage() ;

/// @brief Method GetApplicationSystemLanguage, addr 0xb021ca0, size 0x50, virtual true, abstract: false, final false
inline ::UnityEngine::SystemLanguage GetApplicationSystemLanguage() ;

/// @brief Method GetStartupLocale, addr 0xb0214b0, size 0x128, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Localization::Locale> GetStartupLocale(::UnityEngine::Localization::Settings::ILocalesProvider*  availableLocales) ;

/// @brief Method GetSystemCulture, addr 0xb021c50, size 0x50, virtual true, abstract: false, final false
inline ::System::Globalization::CultureInfo* GetSystemCulture() ;

static inline ::UnityEngine::Localization::Settings::SystemLocaleSelector* New_ctor() ;

/// @brief Method .ctor, addr 0xb020cd4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::Localization::Settings::IStartupLocaleSelector"
constexpr ::UnityEngine::Localization::Settings::IStartupLocaleSelector* i___UnityEngine__Localization__Settings__IStartupLocaleSelector() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SystemLocaleSelector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SystemLocaleSelector", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SystemLocaleSelector(SystemLocaleSelector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SystemLocaleSelector", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SystemLocaleSelector(SystemLocaleSelector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25112};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::Settings::SystemLocaleSelector) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Settings
