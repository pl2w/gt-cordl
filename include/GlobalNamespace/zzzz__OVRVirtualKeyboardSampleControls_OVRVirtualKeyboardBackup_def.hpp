#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRVirtualKeyboardSampleControls_OVRVirtualKeyboardBackup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OVRVirtualKeyboardSampleControls_OVRVirtualKeyboardBackup)
namespace GlobalNamespace {
class OVRHand;
}
namespace GlobalNamespace {
class OVRVirtualKeyboard;
}
namespace UnityEngine::EventSystems {
class OVRPhysicsRaycaster;
}
namespace UnityEngine::UI {
class InputField;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRVirtualKeyboardSampleControls_OVRVirtualKeyboardBackup;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRVirtualKeyboardSampleControls_OVRVirtualKeyboardBackup);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRVirtualKeyboardSampleControls_OVRVirtualKeyboardBackup, "", "OVRVirtualKeyboardSampleControls/OVRVirtualKeyboardBackup");
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRVirtualKeyboardSampleControls/OVRVirtualKeyboardBackup
struct CORDL_TYPE OVRVirtualKeyboardSampleControls_OVRVirtualKeyboardBackup {
public:
// Declarations
/// @brief Method RestoreTo, addr 0xa656358, size 0x200, virtual false, abstract: false, final false
inline void RestoreTo(::GlobalNamespace::OVRVirtualKeyboard*  keyboard) ;

/// @brief Method .ctor, addr 0xa655c14, size 0x1a8, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::OVRVirtualKeyboard*  keyboard) ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRVirtualKeyboardSampleControls_OVRVirtualKeyboardBackup() ;

// Ctor Parameters [CppParam { name: "_position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "_rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "_scale", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "_rightControllerDirectTransform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_rightControllerRootTransform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_leftControllerDirectTransform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_leftControllerRootTransform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_controllerRayInteraction", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_controllerDirectInteraction", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_handLeft", ty: "::UnityW<::GlobalNamespace::OVRHand>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_handRight", ty: "::UnityW<::GlobalNamespace::OVRHand>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_handRayInteraction", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_handDirectInteraction", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_controllerRaycaster", ty: "::UnityW<::UnityEngine::EventSystems::OVRPhysicsRaycaster>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_handRaycaster", ty: "::UnityW<::UnityEngine::EventSystems::OVRPhysicsRaycaster>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_textHandlerField", ty: "::UnityW<::UnityEngine::UI::InputField>", modifiers: "", def_value: None, comment: None }]
constexpr OVRVirtualKeyboardSampleControls_OVRVirtualKeyboardBackup(::UnityEngine::Vector3  _position, ::UnityEngine::Quaternion  _rotation, ::UnityEngine::Vector3  _scale, ::UnityW<::UnityEngine::Transform>  _rightControllerDirectTransform, ::UnityW<::UnityEngine::Transform>  _rightControllerRootTransform, ::UnityW<::UnityEngine::Transform>  _leftControllerDirectTransform, ::UnityW<::UnityEngine::Transform>  _leftControllerRootTransform, bool  _controllerRayInteraction, bool  _controllerDirectInteraction, ::UnityW<::GlobalNamespace::OVRHand>  _handLeft, ::UnityW<::GlobalNamespace::OVRHand>  _handRight, bool  _handRayInteraction, bool  _handDirectInteraction, ::UnityW<::UnityEngine::EventSystems::OVRPhysicsRaycaster>  _controllerRaycaster, ::UnityW<::UnityEngine::EventSystems::OVRPhysicsRaycaster>  _handRaycaster, ::UnityW<::UnityEngine::UI::InputField>  _textHandlerField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12545};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x80};

/// @brief Field _position, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  _position;

/// @brief Field _rotation, offset: 0xc, size: 0x10, def value: None
 ::UnityEngine::Quaternion  _rotation;

/// @brief Field _scale, offset: 0x1c, size: 0xc, def value: None
 ::UnityEngine::Vector3  _scale;

/// @brief Field _rightControllerDirectTransform, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  _rightControllerDirectTransform;

/// @brief Field _rightControllerRootTransform, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  _rightControllerRootTransform;

/// @brief Field _leftControllerDirectTransform, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  _leftControllerDirectTransform;

/// @brief Field _leftControllerRootTransform, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  _leftControllerRootTransform;

/// @brief Field _controllerRayInteraction, offset: 0x48, size: 0x1, def value: None
 bool  _controllerRayInteraction;

/// @brief Field _controllerDirectInteraction, offset: 0x49, size: 0x1, def value: None
 bool  _controllerDirectInteraction;

/// @brief Field _handLeft, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVRHand>  _handLeft;

/// @brief Field _handRight, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVRHand>  _handRight;

/// @brief Field _handRayInteraction, offset: 0x60, size: 0x1, def value: None
 bool  _handRayInteraction;

/// @brief Field _handDirectInteraction, offset: 0x61, size: 0x1, def value: None
 bool  _handDirectInteraction;

/// @brief Field _controllerRaycaster, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::EventSystems::OVRPhysicsRaycaster>  _controllerRaycaster;

/// @brief Field _handRaycaster, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::EventSystems::OVRPhysicsRaycaster>  _handRaycaster;

/// @brief Field _textHandlerField, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::InputField>  _textHandlerField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboardSampleControls_OVRVirtualKeyboardBackup, _position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboardSampleControls_OVRVirtualKeyboardBackup, _rotation) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboardSampleControls_OVRVirtualKeyboardBackup, _scale) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboardSampleControls_OVRVirtualKeyboardBackup, _rightControllerDirectTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboardSampleControls_OVRVirtualKeyboardBackup, _rightControllerRootTransform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboardSampleControls_OVRVirtualKeyboardBackup, _leftControllerDirectTransform) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboardSampleControls_OVRVirtualKeyboardBackup, _leftControllerRootTransform) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboardSampleControls_OVRVirtualKeyboardBackup, _controllerRayInteraction) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboardSampleControls_OVRVirtualKeyboardBackup, _controllerDirectInteraction) == 0x49, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboardSampleControls_OVRVirtualKeyboardBackup, _handLeft) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboardSampleControls_OVRVirtualKeyboardBackup, _handRight) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboardSampleControls_OVRVirtualKeyboardBackup, _handRayInteraction) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboardSampleControls_OVRVirtualKeyboardBackup, _handDirectInteraction) == 0x61, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboardSampleControls_OVRVirtualKeyboardBackup, _controllerRaycaster) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboardSampleControls_OVRVirtualKeyboardBackup, _handRaycaster) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboardSampleControls_OVRVirtualKeyboardBackup, _textHandlerField) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRVirtualKeyboardSampleControls_OVRVirtualKeyboardBackup) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
