#pragma once
// IWYU pragma private; include "UnityEngine/Localization/PropertyVariants/TrackedProperties/ByteTrackedProperty.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/PropertyVariants/TrackedProperties/zzzz__TrackedProperty_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ByteTrackedProperty)
// Forward declare root types
namespace UnityEngine::Localization::PropertyVariants::TrackedProperties {
class ByteTrackedProperty;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::PropertyVariants::TrackedProperties::ByteTrackedProperty*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::PropertyVariants::TrackedProperties::ByteTrackedProperty*, "UnityEngine.Localization.PropertyVariants.TrackedProperties", "ByteTrackedProperty");
// Dependencies UnityEngine.Localization.PropertyVariants.TrackedProperties.TrackedProperty`1<TPrimitive>
namespace UnityEngine::Localization::PropertyVariants::TrackedProperties {
// Is value type: false
// CS Name: UnityEngine.Localization.PropertyVariants.TrackedProperties.ByteTrackedProperty
class CORDL_TYPE ByteTrackedProperty : public ::UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<uint8_t> {
public:
// Declarations
static inline ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ByteTrackedProperty* New_ctor() ;

/// @brief Method .ctor, addr 0xb052e00, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ByteTrackedProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ByteTrackedProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ByteTrackedProperty(ByteTrackedProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ByteTrackedProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ByteTrackedProperty(ByteTrackedProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25359};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::PropertyVariants::TrackedProperties::ByteTrackedProperty) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Localization::PropertyVariants::TrackedProperties
