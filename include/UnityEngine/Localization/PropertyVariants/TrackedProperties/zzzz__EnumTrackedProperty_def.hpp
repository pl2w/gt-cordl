#pragma once
// IWYU pragma private; include "UnityEngine/Localization/PropertyVariants/TrackedProperties/EnumTrackedProperty.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/PropertyVariants/TrackedProperties/zzzz__IntTrackedProperty_def.hpp"
CORDL_MODULE_EXPORT(EnumTrackedProperty)
// Forward declare root types
namespace UnityEngine::Localization::PropertyVariants::TrackedProperties {
class EnumTrackedProperty;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::PropertyVariants::TrackedProperties::EnumTrackedProperty*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::PropertyVariants::TrackedProperties::EnumTrackedProperty*, "UnityEngine.Localization.PropertyVariants.TrackedProperties", "EnumTrackedProperty");
// Dependencies UnityEngine.Localization.PropertyVariants.TrackedProperties.IntTrackedProperty
namespace UnityEngine::Localization::PropertyVariants::TrackedProperties {
// Is value type: false
// CS Name: UnityEngine.Localization.PropertyVariants.TrackedProperties.EnumTrackedProperty
class CORDL_TYPE EnumTrackedProperty : public ::UnityEngine::Localization::PropertyVariants::TrackedProperties::IntTrackedProperty {
public:
// Declarations
static inline ::UnityEngine::Localization::PropertyVariants::TrackedProperties::EnumTrackedProperty* New_ctor() ;

/// @brief Method .ctor, addr 0xb05311c, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnumTrackedProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnumTrackedProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumTrackedProperty(EnumTrackedProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumTrackedProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumTrackedProperty(EnumTrackedProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25371};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::PropertyVariants::TrackedProperties::EnumTrackedProperty) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Localization::PropertyVariants::TrackedProperties
