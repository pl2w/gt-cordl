#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/XRUIInputModule_RegisteredInteractor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__TrackedDeviceModel_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRUIInputModule_RegisteredInteractor)
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class IUIInteractor;
}
// Forward declare root types
namespace GlobalNamespace {
struct XRUIInputModule_RegisteredInteractor;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XRUIInputModule_RegisteredInteractor);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XRUIInputModule_RegisteredInteractor, "UnityEngine.XR.Interaction.Toolkit.UI", "XRUIInputModule/RegisteredInteractor");
// Dependencies UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.UI.XRUIInputModule/RegisteredInteractor
struct CORDL_TYPE XRUIInputModule_RegisteredInteractor {
public:
// Declarations
/// @brief Method .ctor, addr 0xb43f6cc, size 0xd4, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*  interactor, int32_t  deviceIndex) ;

// Ctor Parameters []
// @brief default ctor
constexpr XRUIInputModule_RegisteredInteractor() ;

// Ctor Parameters [CppParam { name: "interactor", ty: "::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*", modifiers: "", def_value: None, comment: None }, CppParam { name: "model", ty: "::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel", modifiers: "", def_value: None, comment: None }, CppParam { name: "deactivating", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "active", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr XRUIInputModule_RegisteredInteractor(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel  model, bool  deactivating, bool  active) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11309};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1b0};

/// @brief Field interactor, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*  interactor;

/// @brief Field model, offset: 0x8, size: 0x1a0, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel  model;

/// @brief Field deactivating, offset: 0x1a8, size: 0x1, def value: None
 bool  deactivating;

/// @brief Field active, offset: 0x1a9, size: 0x1, def value: None
 bool  active;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XRUIInputModule_RegisteredInteractor, interactor) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XRUIInputModule_RegisteredInteractor, model) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XRUIInputModule_RegisteredInteractor, deactivating) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XRUIInputModule_RegisteredInteractor, active) == 0x1a9, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XRUIInputModule_RegisteredInteractor) == 0x1b0, "Size mismatch!");

} // namespace end def GlobalNamespace
