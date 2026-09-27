#pragma once
// IWYU pragma private; include "TMPro/TMP_DefaultControls_Resources.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(TMP_DefaultControls_Resources)
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
struct TMP_DefaultControls_Resources;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TMP_DefaultControls_Resources);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TMP_DefaultControls_Resources, "TMPro", "TMP_DefaultControls/Resources");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: TMPro.TMP_DefaultControls/Resources
struct CORDL_TYPE TMP_DefaultControls_Resources {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr TMP_DefaultControls_Resources() ;

// Ctor Parameters [CppParam { name: "standard", ty: "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value: None, comment: None }, CppParam { name: "background", ty: "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value: None, comment: None }, CppParam { name: "inputField", ty: "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value: None, comment: None }, CppParam { name: "knob", ty: "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value: None, comment: None }, CppParam { name: "checkmark", ty: "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value: None, comment: None }, CppParam { name: "dropdown", ty: "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value: None, comment: None }, CppParam { name: "mask", ty: "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value: None, comment: None }]
constexpr TMP_DefaultControls_Resources(::UnityW<::UnityEngine::Sprite>  standard, ::UnityW<::UnityEngine::Sprite>  background, ::UnityW<::UnityEngine::Sprite>  inputField, ::UnityW<::UnityEngine::Sprite>  knob, ::UnityW<::UnityEngine::Sprite>  checkmark, ::UnityW<::UnityEngine::Sprite>  dropdown, ::UnityW<::UnityEngine::Sprite>  mask) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22929};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field standard, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  standard;

/// @brief Field background, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  background;

/// @brief Field inputField, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  inputField;

/// @brief Field knob, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  knob;

/// @brief Field checkmark, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  checkmark;

/// @brief Field dropdown, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  dropdown;

/// @brief Field mask, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  mask;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TMP_DefaultControls_Resources, standard) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TMP_DefaultControls_Resources, background) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TMP_DefaultControls_Resources, inputField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TMP_DefaultControls_Resources, knob) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TMP_DefaultControls_Resources, checkmark) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TMP_DefaultControls_Resources, dropdown) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TMP_DefaultControls_Resources, mask) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TMP_DefaultControls_Resources) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
