#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Settings/CommandLineLocaleSelector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CommandLineLocaleSelector)
namespace UnityEngine::Localization::Settings {
class ILocalesProvider;
}
namespace UnityEngine::Localization::Settings {
class IStartupLocaleSelector;
}
namespace UnityEngine::Localization {
class Locale;
}
// Forward declare root types
namespace UnityEngine::Localization::Settings {
class CommandLineLocaleSelector;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Settings::CommandLineLocaleSelector*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Settings::CommandLineLocaleSelector*, "UnityEngine.Localization.Settings", "CommandLineLocaleSelector");
// Dependencies System.Object
namespace UnityEngine::Localization::Settings {
// Is value type: false
// CS Name: UnityEngine.Localization.Settings.CommandLineLocaleSelector
class CORDL_TYPE CommandLineLocaleSelector : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CommandLineArgument, put=set_CommandLineArgument)) ::StringW  CommandLineArgument;

/// @brief Field m_CommandLineArgument, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CommandLineArgument, put=__cordl_internal_set_m_CommandLineArgument)) ::StringW  m_CommandLineArgument;

/// @brief Convert operator to "::UnityEngine::Localization::Settings::IStartupLocaleSelector"
constexpr operator  ::UnityEngine::Localization::Settings::IStartupLocaleSelector*() noexcept;

/// @brief Method GetStartupLocale, addr 0xb020ecc, size 0x30c, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Localization::Locale> GetStartupLocale(::UnityEngine::Localization::Settings::ILocalesProvider*  availableLocales) ;

static inline ::UnityEngine::Localization::Settings::CommandLineLocaleSelector* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_m_CommandLineArgument() const;

constexpr ::StringW& __cordl_internal_get_m_CommandLineArgument() ;

constexpr void __cordl_internal_set_m_CommandLineArgument(::StringW  value) ;

/// @brief Method .ctor, addr 0xb020c7c, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CommandLineArgument, addr 0xb020ebc, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_CommandLineArgument() ;

/// @brief Convert to "::UnityEngine::Localization::Settings::IStartupLocaleSelector"
constexpr ::UnityEngine::Localization::Settings::IStartupLocaleSelector* i___UnityEngine__Localization__Settings__IStartupLocaleSelector() noexcept;

/// @brief Method set_CommandLineArgument, addr 0xb020ec4, size 0x8, virtual false, abstract: false, final false
inline void set_CommandLineArgument(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CommandLineLocaleSelector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CommandLineLocaleSelector", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CommandLineLocaleSelector(CommandLineLocaleSelector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CommandLineLocaleSelector", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CommandLineLocaleSelector(CommandLineLocaleSelector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25109};

/// [SerializeField]
/// @brief Field m_CommandLineArgument, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___m_CommandLineArgument;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::Settings::CommandLineLocaleSelector, ___m_CommandLineArgument) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::Settings::CommandLineLocaleSelector) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Settings
