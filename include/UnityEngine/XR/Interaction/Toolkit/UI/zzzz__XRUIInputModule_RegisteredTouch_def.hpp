#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/XRUIInputModule_RegisteredTouch.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__TouchModel_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRUIInputModule_RegisteredTouch)
namespace UnityEngine {
struct Touch;
}
// Forward declare root types
namespace GlobalNamespace {
struct XRUIInputModule_RegisteredTouch;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XRUIInputModule_RegisteredTouch);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XRUIInputModule_RegisteredTouch, "UnityEngine.XR.Interaction.Toolkit.UI", "XRUIInputModule/RegisteredTouch");
// Dependencies UnityEngine.XR.Interaction.Toolkit.UI.TouchModel
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.UI.XRUIInputModule/RegisteredTouch
struct CORDL_TYPE XRUIInputModule_RegisteredTouch {
public:
// Declarations
/// @brief Method .ctor, addr 0xb4411b4, size 0x74, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Touch  touch, int32_t  deviceIndex) ;

// Ctor Parameters []
// @brief default ctor
constexpr XRUIInputModule_RegisteredTouch() ;

// Ctor Parameters [CppParam { name: "isValid", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "touchId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "model", ty: "::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel", modifiers: "", def_value: None, comment: None }]
constexpr XRUIInputModule_RegisteredTouch(bool  isValid, int32_t  touchId, ::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel  model) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11310};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xd0};

/// @brief Field isValid, offset: 0x0, size: 0x1, def value: None
 bool  isValid;

/// @brief Field touchId, offset: 0x4, size: 0x4, def value: None
 int32_t  touchId;

/// @brief Field model, offset: 0x8, size: 0xc8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel  model;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XRUIInputModule_RegisteredTouch, isValid) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XRUIInputModule_RegisteredTouch, touchId) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XRUIInputModule_RegisteredTouch, model) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XRUIInputModule_RegisteredTouch) == 0xd0, "Size mismatch!");

} // namespace end def GlobalNamespace
