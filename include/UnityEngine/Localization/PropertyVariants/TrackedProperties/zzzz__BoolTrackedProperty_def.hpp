#pragma once
// IWYU pragma private; include "UnityEngine/Localization/PropertyVariants/TrackedProperties/BoolTrackedProperty.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/PropertyVariants/TrackedProperties/zzzz__TrackedProperty_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(BoolTrackedProperty)
// Forward declare root types
namespace UnityEngine::Localization::PropertyVariants::TrackedProperties {
class BoolTrackedProperty;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::PropertyVariants::TrackedProperties::BoolTrackedProperty*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::PropertyVariants::TrackedProperties::BoolTrackedProperty*, "UnityEngine.Localization.PropertyVariants.TrackedProperties", "BoolTrackedProperty");
// Dependencies UnityEngine.Localization.PropertyVariants.TrackedProperties.TrackedProperty`1<TPrimitive>
namespace UnityEngine::Localization::PropertyVariants::TrackedProperties {
// Is value type: false
// CS Name: UnityEngine.Localization.PropertyVariants.TrackedProperties.BoolTrackedProperty
class CORDL_TYPE BoolTrackedProperty : public ::UnityEngine::Localization::PropertyVariants::TrackedProperties::TrackedProperty_1<bool> {
public:
// Declarations
/// @brief Method ConvertFromString, addr 0xb053120, size 0x130, virtual true, abstract: false, final false
inline bool ConvertFromString(::StringW  value) ;

/// @brief Method ConvertToString, addr 0xb053250, size 0x68, virtual true, abstract: false, final false
inline ::StringW ConvertToString(bool  value) ;

static inline ::UnityEngine::Localization::PropertyVariants::TrackedProperties::BoolTrackedProperty* New_ctor() ;

/// @brief Method .ctor, addr 0xb0532b8, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoolTrackedProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoolTrackedProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BoolTrackedProperty(BoolTrackedProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoolTrackedProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoolTrackedProperty(BoolTrackedProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25372};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::PropertyVariants::TrackedProperties::BoolTrackedProperty) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Localization::PropertyVariants::TrackedProperties
