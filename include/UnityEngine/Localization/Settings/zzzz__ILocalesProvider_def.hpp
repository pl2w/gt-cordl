#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Settings/ILocalesProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ILocalesProvider)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Localization {
struct LocaleIdentifier;
}
namespace UnityEngine::Localization {
class Locale;
}
// Forward declare root types
namespace UnityEngine::Localization::Settings {
class ILocalesProvider;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Settings::ILocalesProvider*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Settings::ILocalesProvider*, "UnityEngine.Localization.Settings", "ILocalesProvider");
// Dependencies 
namespace UnityEngine::Localization::Settings {
// Is value type: false
// CS Name: UnityEngine.Localization.Settings.ILocalesProvider
class CORDL_TYPE ILocalesProvider {
public:
// Declarations
 __declspec(property(get=get_Locales)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Localization::Locale>>*  Locales;

/// @brief Method AddLocale, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void AddLocale(::UnityEngine::Localization::Locale*  locale) ;

/// @brief Method GetLocale, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::Localization::Locale> GetLocale(::UnityEngine::Localization::LocaleIdentifier  id) ;

/// @brief Method RemoveLocale, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool RemoveLocale(::UnityEngine::Localization::Locale*  locale) ;

/// @brief Method get_Locales, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Localization::Locale>>* get_Locales() ;

// Ctor Parameters [CppParam { name: "", ty: "ILocalesProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILocalesProvider(ILocalesProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25102};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization::Settings
