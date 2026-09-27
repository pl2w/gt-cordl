#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Extensions/CustomPluralRuleProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CustomPluralRuleProvider)
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::Localization::SmartFormat::Utilities {
class PluralRules_PluralRuleDelegate;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::Extensions {
class CustomPluralRuleProvider;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Extensions::CustomPluralRuleProvider*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Extensions::CustomPluralRuleProvider*, "UnityEngine.Localization.SmartFormat.Extensions", "CustomPluralRuleProvider");
// Dependencies System.Object
namespace UnityEngine::Localization::SmartFormat::Extensions {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Extensions.CustomPluralRuleProvider
class CORDL_TYPE CustomPluralRuleProvider : public ::System::Object {
public:
// Declarations
/// @brief Field _pluralRule, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__pluralRule, put=__cordl_internal_set__pluralRule)) ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  _pluralRule;

/// @brief Convert operator to "::System::IFormatProvider"
constexpr operator  ::System::IFormatProvider*() noexcept;

/// @brief Method GetFormat, addr 0xb041624, size 0x8c, virtual true, abstract: false, final true
inline ::System::Object* GetFormat(::System::Type*  formatType) ;

/// @brief Method GetPluralRule, addr 0xb0416b0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* GetPluralRule() ;

static inline ::UnityEngine::Localization::SmartFormat::Extensions::CustomPluralRuleProvider* New_ctor(::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  pluralRule) ;

constexpr ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* const& __cordl_internal_get__pluralRule() const;

constexpr ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*& __cordl_internal_get__pluralRule() ;

constexpr void __cordl_internal_set__pluralRule(::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  value) ;

/// @brief Method .ctor, addr 0xb0415f4, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  pluralRule) ;

/// @brief Convert to "::System::IFormatProvider"
constexpr ::System::IFormatProvider* i___System__IFormatProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomPluralRuleProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomPluralRuleProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomPluralRuleProvider(CustomPluralRuleProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomPluralRuleProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomPluralRuleProvider(CustomPluralRuleProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25198};

/// @brief Field _pluralRule, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  ____pluralRule;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Extensions::CustomPluralRuleProvider, ____pluralRule) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Extensions::CustomPluralRuleProvider) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Extensions
