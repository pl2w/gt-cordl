#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Settings/PlayerPrefLocaleSelector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PlayerPrefLocaleSelector)
namespace UnityEngine::Localization::Settings {
class IInitialize;
}
namespace UnityEngine::Localization::Settings {
class ILocalesProvider;
}
namespace UnityEngine::Localization::Settings {
class IStartupLocaleSelector;
}
namespace UnityEngine::Localization::Settings {
class LocalizationSettings;
}
namespace UnityEngine::Localization {
class Locale;
}
// Forward declare root types
namespace UnityEngine::Localization::Settings {
class PlayerPrefLocaleSelector;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Settings::PlayerPrefLocaleSelector*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Settings::PlayerPrefLocaleSelector*, "UnityEngine.Localization.Settings", "PlayerPrefLocaleSelector");
// Dependencies System.Object
namespace UnityEngine::Localization::Settings {
// Is value type: false
// CS Name: UnityEngine.Localization.Settings.PlayerPrefLocaleSelector
class CORDL_TYPE PlayerPrefLocaleSelector : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_PlayerPreferenceKey, put=set_PlayerPreferenceKey)) ::StringW  PlayerPreferenceKey;

/// @brief Field m_PlayerPreferenceKey, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PlayerPreferenceKey, put=__cordl_internal_set_m_PlayerPreferenceKey)) ::StringW  m_PlayerPreferenceKey;

/// @brief Convert operator to "::UnityEngine::Localization::Settings::IInitialize"
constexpr operator  ::UnityEngine::Localization::Settings::IInitialize*() noexcept;

/// @brief Convert operator to "::UnityEngine::Localization::Settings::IStartupLocaleSelector"
constexpr operator  ::UnityEngine::Localization::Settings::IStartupLocaleSelector*() noexcept;

/// @brief Method GetStartupLocale, addr 0xb021298, size 0xf8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Localization::Locale> GetStartupLocale(::UnityEngine::Localization::Settings::ILocalesProvider*  availableLocales) ;

static inline ::UnityEngine::Localization::Settings::PlayerPrefLocaleSelector* New_ctor() ;

/// @brief Method PostInitialization, addr 0xb0211e8, size 0xb0, virtual true, abstract: false, final true
inline void PostInitialization(::UnityEngine::Localization::Settings::LocalizationSettings*  settings) ;

constexpr ::StringW const& __cordl_internal_get_m_PlayerPreferenceKey() const;

constexpr ::StringW& __cordl_internal_get_m_PlayerPreferenceKey() ;

constexpr void __cordl_internal_set_m_PlayerPreferenceKey(::StringW  value) ;

/// @brief Method .ctor, addr 0xb021390, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_PlayerPreferenceKey, addr 0xb0211d8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_PlayerPreferenceKey() ;

/// @brief Convert to "::UnityEngine::Localization::Settings::IInitialize"
constexpr ::UnityEngine::Localization::Settings::IInitialize* i___UnityEngine__Localization__Settings__IInitialize() noexcept;

/// @brief Convert to "::UnityEngine::Localization::Settings::IStartupLocaleSelector"
constexpr ::UnityEngine::Localization::Settings::IStartupLocaleSelector* i___UnityEngine__Localization__Settings__IStartupLocaleSelector() noexcept;

/// @brief Method set_PlayerPreferenceKey, addr 0xb0211e0, size 0x8, virtual false, abstract: false, final false
inline void set_PlayerPreferenceKey(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerPrefLocaleSelector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerPrefLocaleSelector", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerPrefLocaleSelector(PlayerPrefLocaleSelector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerPrefLocaleSelector", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerPrefLocaleSelector(PlayerPrefLocaleSelector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25110};

/// [SerializeField]
/// @brief Field m_PlayerPreferenceKey, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___m_PlayerPreferenceKey;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::Settings::PlayerPrefLocaleSelector, ___m_PlayerPreferenceKey) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::Settings::PlayerPrefLocaleSelector) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Settings
