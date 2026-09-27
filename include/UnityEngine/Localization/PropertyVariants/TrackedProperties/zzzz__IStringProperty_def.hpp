#pragma once
// IWYU pragma private; include "UnityEngine/Localization/PropertyVariants/TrackedProperties/IStringProperty.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IStringProperty)
namespace UnityEngine::Localization::PropertyVariants::TrackedProperties {
class ITrackedProperty;
}
namespace UnityEngine::Localization {
struct LocaleIdentifier;
}
// Forward declare root types
namespace UnityEngine::Localization::PropertyVariants::TrackedProperties {
class IStringProperty;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::PropertyVariants::TrackedProperties::IStringProperty*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::PropertyVariants::TrackedProperties::IStringProperty*, "UnityEngine.Localization.PropertyVariants.TrackedProperties", "IStringProperty");
// Dependencies 
namespace UnityEngine::Localization::PropertyVariants::TrackedProperties {
// Is value type: false
// CS Name: UnityEngine.Localization.PropertyVariants.TrackedProperties.IStringProperty
class CORDL_TYPE IStringProperty {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty"
constexpr operator  ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*() noexcept;

/// @brief Method GetValueAsString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW GetValueAsString(::UnityEngine::Localization::LocaleIdentifier  localeIdentifier) ;

/// @brief Method GetValueAsString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW GetValueAsString(::UnityEngine::Localization::LocaleIdentifier  localeIdentifier, ::UnityEngine::Localization::LocaleIdentifier  fallback) ;

/// @brief Method SetValueFromString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetValueFromString(::UnityEngine::Localization::LocaleIdentifier  localeIdentifier, ::StringW  value) ;

/// @brief Convert to "::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty"
constexpr ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty* i___UnityEngine__Localization__PropertyVariants__TrackedProperties__ITrackedProperty() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IStringProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IStringProperty(IStringProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25351};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization::PropertyVariants::TrackedProperties
