#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Settings/SpecificLocaleSelector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/zzzz__LocaleIdentifier_def.hpp"
CORDL_MODULE_EXPORT(SpecificLocaleSelector)
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
// Forward declare root types
namespace UnityEngine::Localization::Settings {
class SpecificLocaleSelector;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Settings::SpecificLocaleSelector*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Settings::SpecificLocaleSelector*, "UnityEngine.Localization.Settings", "SpecificLocaleSelector");
// Dependencies System.Object, UnityEngine.Localization.LocaleIdentifier
namespace UnityEngine::Localization::Settings {
// Is value type: false
// CS Name: UnityEngine.Localization.Settings.SpecificLocaleSelector
class CORDL_TYPE SpecificLocaleSelector : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_LocaleId, put=set_LocaleId)) ::UnityEngine::Localization::LocaleIdentifier  LocaleId;

/// @brief Field m_LocaleId, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_LocaleId, put=__cordl_internal_set_m_LocaleId)) ::UnityEngine::Localization::LocaleIdentifier  m_LocaleId;

/// @brief Convert operator to "::UnityEngine::Localization::Settings::IStartupLocaleSelector"
constexpr operator  ::UnityEngine::Localization::Settings::IStartupLocaleSelector*() noexcept;

/// @brief Method GetStartupLocale, addr 0xb021400, size 0xb0, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Localization::Locale> GetStartupLocale(::UnityEngine::Localization::Settings::ILocalesProvider*  availableLocales) ;

static inline ::UnityEngine::Localization::Settings::SpecificLocaleSelector* New_ctor() ;

constexpr ::UnityEngine::Localization::LocaleIdentifier const& __cordl_internal_get_m_LocaleId() const;

constexpr ::UnityEngine::Localization::LocaleIdentifier& __cordl_internal_get_m_LocaleId() ;

constexpr void __cordl_internal_set_m_LocaleId(::UnityEngine::Localization::LocaleIdentifier  value) ;

/// @brief Method .ctor, addr 0xb020cdc, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_LocaleId, addr 0xb0213e8, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::LocaleIdentifier get_LocaleId() ;

/// @brief Convert to "::UnityEngine::Localization::Settings::IStartupLocaleSelector"
constexpr ::UnityEngine::Localization::Settings::IStartupLocaleSelector* i___UnityEngine__Localization__Settings__IStartupLocaleSelector() noexcept;

/// @brief Method set_LocaleId, addr 0xb0213f4, size 0xc, virtual false, abstract: false, final false
inline void set_LocaleId(::UnityEngine::Localization::LocaleIdentifier  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpecificLocaleSelector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpecificLocaleSelector", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SpecificLocaleSelector(SpecificLocaleSelector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpecificLocaleSelector", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpecificLocaleSelector(SpecificLocaleSelector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25111};

/// [SerializeField]
/// @brief Field m_LocaleId, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Localization::LocaleIdentifier  ___m_LocaleId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::Settings::SpecificLocaleSelector, ___m_LocaleId) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::Settings::SpecificLocaleSelector) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Settings
