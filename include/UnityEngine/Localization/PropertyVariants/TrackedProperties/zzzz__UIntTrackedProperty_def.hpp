#pragma once
// IWYU pragma private; include "UnityEngine/Localization/PropertyVariants/TrackedProperties/UIntTrackedProperty.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/PropertyVariants/TrackedProperties/zzzz__TrackedProperty_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UIntTrackedProperty)
// Forward declare root types
namespace UnityEngine::Localization::PropertyVariants::TrackedProperties {
class UIntTrackedProperty;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::PropertyVariants::TrackedProperties::UIntTrackedProperty*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::PropertyVariants::TrackedProperties::UIntTrackedProperty*, "UnityEngine.Localization.PropertyVariants.TrackedProperties", "UIntTrackedProperty");
// Dependencies UnityEngine.Localization.PropertyVariants.TrackedProperties.TrackedProperty`1<TPrimitive>
namespace UnityEngine::Localization::PropertyVariants::TrackedProperties {
// Is value type: false
// CS Name: UnityEngine.Localization.PropertyVariants.TrackedProperties.UIntTrackedProperty
class CORDL_TYPE UIntTrackedProperty : public ::UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<uint32_t> {
public:
// Declarations
static inline ::UnityEngine::Localization::PropertyVariants::TrackedProperties::UIntTrackedProperty* New_ctor() ;

/// @brief Method .ctor, addr 0xb052fb0, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIntTrackedProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIntTrackedProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UIntTrackedProperty(UIntTrackedProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIntTrackedProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIntTrackedProperty(UIntTrackedProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25365};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::PropertyVariants::TrackedProperties::UIntTrackedProperty) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Localization::PropertyVariants::TrackedProperties
