#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VisualEffectControlClip_ClipEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/VFX/zzzz__VisualEffectPlayableSerializedEventNoColor_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(VisualEffectControlClip_ClipEvent)
// Forward declare root types
namespace GlobalNamespace {
struct VisualEffectControlClip_ClipEvent;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VisualEffectControlClip_ClipEvent);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VisualEffectControlClip_ClipEvent, "UnityEngine.VFX", "VisualEffectControlClip/ClipEvent");
// Dependencies UnityEngine.Color, UnityEngine.VFX.VisualEffectPlayableSerializedEventNoColor
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.VFX.VisualEffectControlClip/ClipEvent
struct CORDL_TYPE VisualEffectControlClip_ClipEvent {
public:
// Declarations
/// @brief Field defaultEditorColor, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_defaultEditorColor, put=setStaticF_defaultEditorColor)) ::UnityEngine::Color  defaultEditorColor;

static inline ::UnityEngine::Color getStaticF_defaultEditorColor() ;

static inline void setStaticF_defaultEditorColor(::UnityEngine::Color  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr VisualEffectControlClip_ClipEvent() ;

// Ctor Parameters [CppParam { name: "editorColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "enter", ty: "::UnityEngine::VFX::VisualEffectPlayableSerializedEventNoColor", modifiers: "", def_value: None, comment: None }, CppParam { name: "exit", ty: "::UnityEngine::VFX::VisualEffectPlayableSerializedEventNoColor", modifiers: "", def_value: None, comment: None }]
constexpr VisualEffectControlClip_ClipEvent(::UnityEngine::Color  editorColor, ::UnityEngine::VFX::VisualEffectPlayableSerializedEventNoColor  enter, ::UnityEngine::VFX::VisualEffectPlayableSerializedEventNoColor  exit) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30004};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field editorColor, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Color  editorColor;

/// @brief Field enter, offset: 0x10, size: 0x20, def value: None
 ::UnityEngine::VFX::VisualEffectPlayableSerializedEventNoColor  enter;

/// @brief Field exit, offset: 0x30, size: 0x20, def value: None
 ::UnityEngine::VFX::VisualEffectPlayableSerializedEventNoColor  exit;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VisualEffectControlClip_ClipEvent, editorColor) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualEffectControlClip_ClipEvent, enter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualEffectControlClip_ClipEvent, exit) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VisualEffectControlClip_ClipEvent) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
