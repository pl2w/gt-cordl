#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/CanvasTracker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CanvasTracker)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class CanvasTracker;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasTracker*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasTracker*, "UnityEngine.XR.Interaction.Toolkit.UI", "CanvasTracker");
// [AddComponentMenu("")]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.UI.CanvasTracker.html")]
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::XR::Interaction::Toolkit::UI {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.UI.CanvasTracker
class CORDL_TYPE CanvasTracker : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field <transformDirty>k__BackingField, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__transformDirty_k__BackingField, put=__cordl_internal_set__transformDirty_k__BackingField)) bool  _transformDirty_k__BackingField;

 __declspec(property(get=get_transformDirty, put=set_transformDirty)) bool  transformDirty;

static inline ::UnityEngine::XR::Interaction::Toolkit::UI::CanvasTracker* New_ctor() ;

/// @brief Method OnEnable, addr 0xb430afc, size 0xc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnTransformParentChanged, addr 0xb430b08, size 0xc, virtual false, abstract: false, final false
inline void OnTransformParentChanged() ;

constexpr bool const& __cordl_internal_get__transformDirty_k__BackingField() const;

constexpr bool& __cordl_internal_get__transformDirty_k__BackingField() ;

constexpr void __cordl_internal_set__transformDirty_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0xb430b14, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_transformDirty, addr 0xb430aec, size 0x8, virtual false, abstract: false, final false
inline bool get_transformDirty() ;

/// [CompilerGenerated]
/// @brief Method set_transformDirty, addr 0xb430af4, size 0x8, virtual false, abstract: false, final false
inline void set_transformDirty(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CanvasTracker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CanvasTracker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CanvasTracker(CanvasTracker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CanvasTracker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CanvasTracker(CanvasTracker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11277};

/// [CompilerGenerated]
/// @brief Field <transformDirty>k__BackingField, offset: 0x20, size: 0x1, def value: None
 bool  ____transformDirty_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasTracker, ____transformDirty_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::UI::CanvasTracker) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::UI
