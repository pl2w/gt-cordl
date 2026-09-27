#pragma once
// IWYU pragma private; include "UnityEngine/Localization/PropertyVariants/TrackedProperties/ITrackedPropertyRemoveVariant.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ITrackedPropertyRemoveVariant)
namespace UnityEngine::Localization {
struct LocaleIdentifier;
}
// Forward declare root types
namespace UnityEngine::Localization::PropertyVariants::TrackedProperties {
class ITrackedPropertyRemoveVariant;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedPropertyRemoveVariant*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedPropertyRemoveVariant*, "UnityEngine.Localization.PropertyVariants.TrackedProperties", "ITrackedPropertyRemoveVariant");
// Dependencies 
namespace UnityEngine::Localization::PropertyVariants::TrackedProperties {
// Is value type: false
// CS Name: UnityEngine.Localization.PropertyVariants.TrackedProperties.ITrackedPropertyRemoveVariant
class CORDL_TYPE ITrackedPropertyRemoveVariant {
public:
// Declarations
/// @brief Method RemoveVariant, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void RemoveVariant(::UnityEngine::Localization::LocaleIdentifier  localeIdentifier) ;

// Ctor Parameters [CppParam { name: "", ty: "ITrackedPropertyRemoveVariant", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITrackedPropertyRemoveVariant(ITrackedPropertyRemoveVariant const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25356};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization::PropertyVariants::TrackedProperties
