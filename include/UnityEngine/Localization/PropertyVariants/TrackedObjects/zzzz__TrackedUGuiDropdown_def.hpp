#pragma once
// IWYU pragma private; include "UnityEngine/Localization/PropertyVariants/TrackedObjects/TrackedUGuiDropdown.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/PropertyVariants/TrackedObjects/zzzz__JsonSerializerTrackedObject_def.hpp"
CORDL_MODULE_EXPORT(TrackedUGuiDropdown)
// Forward declare root types
namespace UnityEngine::Localization::PropertyVariants::TrackedObjects {
class TrackedUGuiDropdown;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedUGuiDropdown*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedUGuiDropdown*, "UnityEngine.Localization.PropertyVariants.TrackedObjects", "TrackedUGuiDropdown");
// [DisplayName("UI Dropdown", null)]
// [CustomTrackedObject(typeof(UnityEngine.UI.Dropdown), true)]
// Dependencies UnityEngine.Localization.PropertyVariants.TrackedObjects.JsonSerializerTrackedObject
namespace UnityEngine::Localization::PropertyVariants::TrackedObjects {
// Is value type: false
// CS Name: UnityEngine.Localization.PropertyVariants.TrackedObjects.TrackedUGuiDropdown
class CORDL_TYPE TrackedUGuiDropdown : public ::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject {
public:
// Declarations
static inline ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedUGuiDropdown* New_ctor() ;

/// @brief Method PostApplyTrackedProperties, addr 0xb059020, size 0x80, virtual true, abstract: false, final false
inline void PostApplyTrackedProperties() ;

/// @brief Method .ctor, addr 0xb0590a0, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TrackedUGuiDropdown() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TrackedUGuiDropdown", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TrackedUGuiDropdown(TrackedUGuiDropdown && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrackedUGuiDropdown", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrackedUGuiDropdown(TrackedUGuiDropdown const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25392};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedUGuiDropdown) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::Localization::PropertyVariants::TrackedObjects
