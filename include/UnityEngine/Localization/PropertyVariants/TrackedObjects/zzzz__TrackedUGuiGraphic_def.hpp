#pragma once
// IWYU pragma private; include "UnityEngine/Localization/PropertyVariants/TrackedObjects/TrackedUGuiGraphic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/PropertyVariants/TrackedObjects/zzzz__JsonSerializerTrackedObject_def.hpp"
CORDL_MODULE_EXPORT(TrackedUGuiGraphic)
// Forward declare root types
namespace UnityEngine::Localization::PropertyVariants::TrackedObjects {
class TrackedUGuiGraphic;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedUGuiGraphic*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedUGuiGraphic*, "UnityEngine.Localization.PropertyVariants.TrackedObjects", "TrackedUGuiGraphic");
// [DisplayName("UI Graphic", null)]
// [CustomTrackedObject(typeof(UnityEngine.UI.Graphic), true)]
// Dependencies UnityEngine.Localization.PropertyVariants.TrackedObjects.JsonSerializerTrackedObject
namespace UnityEngine::Localization::PropertyVariants::TrackedObjects {
// Is value type: false
// CS Name: UnityEngine.Localization.PropertyVariants.TrackedObjects.TrackedUGuiGraphic
class CORDL_TYPE TrackedUGuiGraphic : public ::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject {
public:
// Declarations
static inline ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedUGuiGraphic* New_ctor() ;

/// @brief Method PostApplyTrackedProperties, addr 0xb058f98, size 0x84, virtual true, abstract: false, final false
inline void PostApplyTrackedProperties() ;

/// @brief Method .ctor, addr 0xb05901c, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TrackedUGuiGraphic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TrackedUGuiGraphic", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TrackedUGuiGraphic(TrackedUGuiGraphic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrackedUGuiGraphic", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrackedUGuiGraphic(TrackedUGuiGraphic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25391};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedUGuiGraphic) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::Localization::PropertyVariants::TrackedObjects
