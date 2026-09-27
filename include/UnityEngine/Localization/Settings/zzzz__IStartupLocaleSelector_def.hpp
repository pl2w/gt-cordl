#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Settings/IStartupLocaleSelector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IStartupLocaleSelector)
namespace UnityEngine::Localization::Settings {
class ILocalesProvider;
}
namespace UnityEngine::Localization {
class Locale;
}
// Forward declare root types
namespace UnityEngine::Localization::Settings {
class IStartupLocaleSelector;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Settings::IStartupLocaleSelector*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Settings::IStartupLocaleSelector*, "UnityEngine.Localization.Settings", "IStartupLocaleSelector");
// Dependencies 
namespace UnityEngine::Localization::Settings {
// Is value type: false
// CS Name: UnityEngine.Localization.Settings.IStartupLocaleSelector
class CORDL_TYPE IStartupLocaleSelector {
public:
// Declarations
/// @brief Method GetStartupLocale, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::Localization::Locale> GetStartupLocale(::UnityEngine::Localization::Settings::ILocalesProvider*  availableLocales) ;

// Ctor Parameters [CppParam { name: "", ty: "IStartupLocaleSelector", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IStartupLocaleSelector(IStartupLocaleSelector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25104};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization::Settings
