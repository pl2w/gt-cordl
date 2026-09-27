#pragma once
// IWYU pragma private; include "UnityEngine/Localization/PropertyVariants/TrackedProperties/ITrackedProperty.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ITrackedProperty)
namespace UnityEngine::Localization {
struct LocaleIdentifier;
}
// Forward declare root types
namespace UnityEngine::Localization::PropertyVariants::TrackedProperties {
class ITrackedProperty;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*, "UnityEngine.Localization.PropertyVariants.TrackedProperties", "ITrackedProperty");
// Dependencies 
namespace UnityEngine::Localization::PropertyVariants::TrackedProperties {
// Is value type: false
// CS Name: UnityEngine.Localization.PropertyVariants.TrackedProperties.ITrackedProperty
class CORDL_TYPE ITrackedProperty {
public:
// Declarations
 __declspec(property(get=get_PropertyPath, put=set_PropertyPath)) ::StringW  PropertyPath;

/// @brief Method HasVariant, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool HasVariant(::UnityEngine::Localization::LocaleIdentifier  localeIdentifier) ;

/// @brief Method get_PropertyPath, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_PropertyPath() ;

/// @brief Method set_PropertyPath, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_PropertyPath(::StringW  value) ;

// Ctor Parameters [CppParam { name: "", ty: "ITrackedProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITrackedProperty(ITrackedProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25352};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization::PropertyVariants::TrackedProperties
