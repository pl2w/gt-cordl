#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Core/Settings/SmartSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Settings/zzzz__CaseSensitivityType_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Settings/zzzz__ErrorAction_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SmartSettings)
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
namespace System {
struct StringComparison;
}
namespace UnityEngine::Localization::SmartFormat::Core::Settings {
struct CaseSensitivityType;
}
namespace UnityEngine::Localization::SmartFormat::Core::Settings {
struct ErrorAction;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::Core::Settings {
class SmartSettings;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*, "UnityEngine.Localization.SmartFormat.Core.Settings", "SmartSettings");
// Dependencies System.Object, UnityEngine.Localization.SmartFormat.Core.Settings.CaseSensitivityType, UnityEngine.Localization.SmartFormat.Core.Settings.ErrorAction
namespace UnityEngine::Localization::SmartFormat::Core::Settings {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Core.Settings.SmartSettings
class CORDL_TYPE SmartSettings : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CaseSensitivity, put=set_CaseSensitivity)) ::UnityEngine::Localization::SmartFormat::Core::Settings::CaseSensitivityType  CaseSensitivity;

 __declspec(property(get=get_ConvertCharacterStringLiterals, put=set_ConvertCharacterStringLiterals)) bool  ConvertCharacterStringLiterals;

 __declspec(property(get=get_FormatErrorAction, put=set_FormatErrorAction)) ::UnityEngine::Localization::SmartFormat::Core::Settings::ErrorAction  FormatErrorAction;

 __declspec(property(get=get_ParseErrorAction, put=set_ParseErrorAction)) ::UnityEngine::Localization::SmartFormat::Core::Settings::ErrorAction  ParseErrorAction;

/// @brief Field m_CaseSensitivity, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CaseSensitivity, put=__cordl_internal_set_m_CaseSensitivity)) ::UnityEngine::Localization::SmartFormat::Core::Settings::CaseSensitivityType  m_CaseSensitivity;

/// @brief Field m_ConvertCharacterStringLiterals, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ConvertCharacterStringLiterals, put=__cordl_internal_set_m_ConvertCharacterStringLiterals)) bool  m_ConvertCharacterStringLiterals;

/// @brief Field m_FormatErrorAction, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_FormatErrorAction, put=__cordl_internal_set_m_FormatErrorAction)) ::UnityEngine::Localization::SmartFormat::Core::Settings::ErrorAction  m_FormatErrorAction;

/// @brief Field m_ParseErrorAction, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ParseErrorAction, put=__cordl_internal_set_m_ParseErrorAction)) ::UnityEngine::Localization::SmartFormat::Core::Settings::ErrorAction  m_ParseErrorAction;

/// @brief Method GetCaseSensitivityComparer, addr 0xb042b38, size 0x168, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEqualityComparer_1<::StringW>* GetCaseSensitivityComparer() ;

/// @brief Method GetCaseSensitivityComparison, addr 0xb03c45c, size 0x98, virtual false, abstract: false, final false
inline ::System::StringComparison GetCaseSensitivityComparison() ;

static inline ::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings* New_ctor() ;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Settings::CaseSensitivityType const& __cordl_internal_get_m_CaseSensitivity() const;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Settings::CaseSensitivityType& __cordl_internal_get_m_CaseSensitivity() ;

constexpr bool const& __cordl_internal_get_m_ConvertCharacterStringLiterals() const;

constexpr bool& __cordl_internal_get_m_ConvertCharacterStringLiterals() ;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Settings::ErrorAction const& __cordl_internal_get_m_FormatErrorAction() const;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Settings::ErrorAction& __cordl_internal_get_m_FormatErrorAction() ;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Settings::ErrorAction const& __cordl_internal_get_m_ParseErrorAction() const;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Settings::ErrorAction& __cordl_internal_get_m_ParseErrorAction() ;

constexpr void __cordl_internal_set_m_CaseSensitivity(::UnityEngine::Localization::SmartFormat::Core::Settings::CaseSensitivityType  value) ;

constexpr void __cordl_internal_set_m_ConvertCharacterStringLiterals(bool  value) ;

constexpr void __cordl_internal_set_m_FormatErrorAction(::UnityEngine::Localization::SmartFormat::Core::Settings::ErrorAction  value) ;

constexpr void __cordl_internal_set_m_ParseErrorAction(::UnityEngine::Localization::SmartFormat::Core::Settings::ErrorAction  value) ;

/// @brief Method .ctor, addr 0xb028c50, size 0x34, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CaseSensitivity, addr 0xb044b5c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::SmartFormat::Core::Settings::CaseSensitivityType get_CaseSensitivity() ;

/// @brief Method get_ConvertCharacterStringLiterals, addr 0xb044b6c, size 0x8, virtual false, abstract: false, final false
inline bool get_ConvertCharacterStringLiterals() ;

/// @brief Method get_FormatErrorAction, addr 0xb044b3c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::SmartFormat::Core::Settings::ErrorAction get_FormatErrorAction() ;

/// @brief Method get_ParseErrorAction, addr 0xb044b4c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::SmartFormat::Core::Settings::ErrorAction get_ParseErrorAction() ;

/// @brief Method set_CaseSensitivity, addr 0xb044b64, size 0x8, virtual false, abstract: false, final false
inline void set_CaseSensitivity(::UnityEngine::Localization::SmartFormat::Core::Settings::CaseSensitivityType  value) ;

/// @brief Method set_ConvertCharacterStringLiterals, addr 0xb044b74, size 0x8, virtual false, abstract: false, final false
inline void set_ConvertCharacterStringLiterals(bool  value) ;

/// @brief Method set_FormatErrorAction, addr 0xb044b44, size 0x8, virtual false, abstract: false, final false
inline void set_FormatErrorAction(::UnityEngine::Localization::SmartFormat::Core::Settings::ErrorAction  value) ;

/// @brief Method set_ParseErrorAction, addr 0xb044b54, size 0x8, virtual false, abstract: false, final false
inline void set_ParseErrorAction(::UnityEngine::Localization::SmartFormat::Core::Settings::ErrorAction  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SmartSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SmartSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SmartSettings(SmartSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SmartSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SmartSettings(SmartSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25212};

/// [SerializeField]
/// @brief Field m_FormatErrorAction, offset: 0x10, size: 0x4, def value: None
 ::UnityEngine::Localization::SmartFormat::Core::Settings::ErrorAction  ___m_FormatErrorAction;

/// [SerializeField]
/// @brief Field m_ParseErrorAction, offset: 0x14, size: 0x4, def value: None
 ::UnityEngine::Localization::SmartFormat::Core::Settings::ErrorAction  ___m_ParseErrorAction;

/// [Tooltip("Determines whether placeholders are case-sensitive or not.")]
/// [SerializeField]
/// @brief Field m_CaseSensitivity, offset: 0x18, size: 0x4, def value: None
 ::UnityEngine::Localization::SmartFormat::Core::Settings::CaseSensitivityType  ___m_CaseSensitivity;

/// [Tooltip("This setting is relevant for the \'Parsing.LiteralText\', If true (the default), character string literals are treated like in normal string.Format: string.Format(\"\t\") will return a \"TAB\" character If false, character string literals are not converted, just like with this string.Format: string.Format(@\"\t\") will return the 2 characters \"\" and \"t\"")]
/// [SerializeField]
/// @brief Field m_ConvertCharacterStringLiterals, offset: 0x1c, size: 0x1, def value: None
 bool  ___m_ConvertCharacterStringLiterals;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings, ___m_FormatErrorAction) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings, ___m_ParseErrorAction) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings, ___m_CaseSensitivity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings, ___m_ConvertCharacterStringLiterals) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Core::Settings
