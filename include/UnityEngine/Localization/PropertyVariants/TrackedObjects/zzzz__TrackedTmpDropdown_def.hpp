#pragma once
// IWYU pragma private; include "UnityEngine/Localization/PropertyVariants/TrackedObjects/TrackedTmpDropdown.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/PropertyVariants/TrackedObjects/zzzz__JsonSerializerTrackedObject_def.hpp"
CORDL_MODULE_EXPORT(TrackedTmpDropdown)
// Forward declare root types
namespace UnityEngine::Localization::PropertyVariants::TrackedObjects {
class TrackedTmpDropdown;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedTmpDropdown*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedTmpDropdown*, "UnityEngine.Localization.PropertyVariants.TrackedObjects", "TrackedTmpDropdown");
// [DisplayName("TMP Dropdown", null)]
// [CustomTrackedObject(typeof(TMPro.TMP_Dropdown), true)]
// Dependencies UnityEngine.Localization.PropertyVariants.TrackedObjects.JsonSerializerTrackedObject
namespace UnityEngine::Localization::PropertyVariants::TrackedObjects {
// Is value type: false
// CS Name: UnityEngine.Localization.PropertyVariants.TrackedObjects.TrackedTmpDropdown
class CORDL_TYPE TrackedTmpDropdown : public ::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject {
public:
// Declarations
static inline ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedTmpDropdown* New_ctor() ;

/// @brief Method PostApplyTrackedProperties, addr 0xb058e34, size 0x80, virtual true, abstract: false, final false
inline void PostApplyTrackedProperties() ;

/// @brief Method .ctor, addr 0xb058eb4, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TrackedTmpDropdown() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TrackedTmpDropdown", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TrackedTmpDropdown(TrackedTmpDropdown && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrackedTmpDropdown", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrackedTmpDropdown(TrackedTmpDropdown const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25389};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedTmpDropdown) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::Localization::PropertyVariants::TrackedObjects
