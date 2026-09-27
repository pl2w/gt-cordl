#pragma once
// IWYU pragma private; include "UnityEngine/Localization/PropertyVariants/TrackedProperties/ITrackedPropertyValue_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ITrackedPropertyValue_1)
namespace UnityEngine::Localization::PropertyVariants::TrackedProperties {
class ITrackedProperty;
}
namespace UnityEngine::Localization {
struct LocaleIdentifier;
}
// Forward declare root types
namespace UnityEngine::Localization::PropertyVariants::TrackedProperties {
template<typename T>
class ITrackedPropertyValue_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedPropertyValue_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedPropertyValue_1, "UnityEngine.Localization.PropertyVariants.TrackedProperties", "ITrackedPropertyValue`1");
// Dependencies 
namespace UnityEngine::Localization::PropertyVariants::TrackedProperties {
// cpp template
template<typename T>
// Is value type: false
// CS Name: UnityEngine.Localization.PropertyVariants.TrackedProperties.ITrackedPropertyValue`1<T>
class CORDL_TYPE ITrackedPropertyValue_1 {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty"
constexpr operator  ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*() noexcept;

/// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool GetValue(::UnityEngine::Localization::LocaleIdentifier  localeIdentifier, ::UnityEngine::Localization::LocaleIdentifier  fallback, ::by_ref<T>  foundValue) ;

/// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool GetValue(::UnityEngine::Localization::LocaleIdentifier  localeIdentifier, ::by_ref<T>  foundValue) ;

/// @brief Method SetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetValue(::UnityEngine::Localization::LocaleIdentifier  localeIdentifier, T  value) ;

/// @brief Convert to "::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty"
constexpr ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty* i___UnityEngine__Localization__PropertyVariants__TrackedProperties__ITrackedProperty() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "ITrackedPropertyValue_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITrackedPropertyValue_1(ITrackedPropertyValue_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25355};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization::PropertyVariants::TrackedProperties
