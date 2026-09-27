#pragma once
// IWYU pragma private; include "UnityEngine/Localization/PropertyVariants/TrackedProperties/ULongTrackedProperty.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/PropertyVariants/TrackedProperties/zzzz__TrackedProperty_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ULongTrackedProperty)
// Forward declare root types
namespace UnityEngine::Localization::PropertyVariants::TrackedProperties {
class ULongTrackedProperty;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::PropertyVariants::TrackedProperties::ULongTrackedProperty*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::PropertyVariants::TrackedProperties::ULongTrackedProperty*, "UnityEngine.Localization.PropertyVariants.TrackedProperties", "ULongTrackedProperty");
// Dependencies UnityEngine.Localization.PropertyVariants.TrackedProperties.TrackedProperty`1<TPrimitive>
namespace UnityEngine::Localization::PropertyVariants::TrackedProperties {
// Is value type: false
// CS Name: UnityEngine.Localization.PropertyVariants.TrackedProperties.ULongTrackedProperty
class CORDL_TYPE ULongTrackedProperty : public ::UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<uint64_t> {
public:
// Declarations
static inline ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ULongTrackedProperty* New_ctor() ;

/// @brief Method .ctor, addr 0xb053040, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ULongTrackedProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ULongTrackedProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ULongTrackedProperty(ULongTrackedProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ULongTrackedProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ULongTrackedProperty(ULongTrackedProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25367};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::PropertyVariants::TrackedProperties::ULongTrackedProperty) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Localization::PropertyVariants::TrackedProperties
