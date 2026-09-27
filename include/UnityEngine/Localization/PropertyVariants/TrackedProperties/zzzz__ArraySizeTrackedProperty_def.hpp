#pragma once
// IWYU pragma private; include "UnityEngine/Localization/PropertyVariants/TrackedProperties/ArraySizeTrackedProperty.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/PropertyVariants/TrackedProperties/zzzz__UIntTrackedProperty_def.hpp"
CORDL_MODULE_EXPORT(ArraySizeTrackedProperty)
// Forward declare root types
namespace UnityEngine::Localization::PropertyVariants::TrackedProperties {
class ArraySizeTrackedProperty;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::PropertyVariants::TrackedProperties::ArraySizeTrackedProperty*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::PropertyVariants::TrackedProperties::ArraySizeTrackedProperty*, "UnityEngine.Localization.PropertyVariants.TrackedProperties", "ArraySizeTrackedProperty");
// Dependencies UnityEngine.Localization.PropertyVariants.TrackedProperties.UIntTrackedProperty
namespace UnityEngine::Localization::PropertyVariants::TrackedProperties {
// Is value type: false
// CS Name: UnityEngine.Localization.PropertyVariants.TrackedProperties.ArraySizeTrackedProperty
class CORDL_TYPE ArraySizeTrackedProperty : public ::UnityEngine::Localization::PropertyVariants::TrackedProperties::UIntTrackedProperty {
public:
// Declarations
static inline ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ArraySizeTrackedProperty* New_ctor() ;

/// @brief Method .ctor, addr 0xb053118, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ArraySizeTrackedProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ArraySizeTrackedProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ArraySizeTrackedProperty(ArraySizeTrackedProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArraySizeTrackedProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArraySizeTrackedProperty(ArraySizeTrackedProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25370};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::PropertyVariants::TrackedProperties::ArraySizeTrackedProperty) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Localization::PropertyVariants::TrackedProperties
