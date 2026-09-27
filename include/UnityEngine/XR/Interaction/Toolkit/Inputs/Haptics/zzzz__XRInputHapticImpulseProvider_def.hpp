#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Haptics/XRInputHapticImpulseProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Haptics/zzzz__XRInputHapticImpulseProvider_InputSourceMode_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(XRInputHapticImpulseProvider)
namespace GlobalNamespace {
struct XRInputHapticImpulseProvider_InputSourceMode;
}
namespace UnityEngine::InputSystem {
class InputActionReference;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics {
class HapticControlActionManager;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics {
class IXRHapticImpulseChannelGroup;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics {
class IXRHapticImpulseProvider;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
template<typename TInterface,typename TObject>
class UnityObjectReferenceCache_2;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics {
class XRInputHapticImpulseProvider;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider*, "UnityEngine.XR.Interaction.Toolkit.Inputs.Haptics", "XRInputHapticImpulseProvider");
// Dependencies System.Object, UnityEngine.XR.Interaction.Toolkit.Inputs.Haptics.XRInputHapticImpulseProvider::InputSourceMode
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.Haptics.XRInputHapticImpulseProvider
class CORDL_TYPE XRInputHapticImpulseProvider : public ::System::Object {
public:
// Declarations
using InputSourceMode = ::GlobalNamespace::XRInputHapticImpulseProvider_InputSourceMode;

 __declspec(property(get=get_inputAction, put=set_inputAction)) ::UnityEngine::InputSystem::InputAction*  inputAction;

 __declspec(property(get=get_inputActionReference, put=set_inputActionReference)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  inputActionReference;

 __declspec(property(get=get_inputSourceMode, put=set_inputSourceMode)) ::GlobalNamespace::XRInputHapticImpulseProvider_InputSourceMode  inputSourceMode;

/// @brief Field m_HapticControlActionManager, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HapticControlActionManager, put=__cordl_internal_set_m_HapticControlActionManager)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticControlActionManager*  m_HapticControlActionManager;

/// @brief Field m_InputAction, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InputAction, put=__cordl_internal_set_m_InputAction)) ::UnityEngine::InputSystem::InputAction*  m_InputAction;

/// @brief Field m_InputActionReference, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InputActionReference, put=__cordl_internal_set_m_InputActionReference)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_InputActionReference;

/// @brief Field m_InputSourceMode, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_InputSourceMode, put=__cordl_internal_set_m_InputSourceMode)) ::GlobalNamespace::XRInputHapticImpulseProvider_InputSourceMode  m_InputSourceMode;

/// @brief Field m_ObjectReference, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ObjectReference, put=__cordl_internal_set_m_ObjectReference)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseProvider*,::UnityW<::UnityEngine::Object>>*  m_ObjectReference;

/// @brief Field m_ObjectReferenceObject, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ObjectReferenceObject, put=__cordl_internal_set_m_ObjectReferenceObject)) ::UnityW<::UnityEngine::Object>  m_ObjectReferenceObject;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseProvider"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseProvider*() noexcept;

/// @brief Method DisableDirectActionIfModeUsed, addr 0xb4ca528, size 0x28, virtual false, abstract: false, final false
inline void DisableDirectActionIfModeUsed() ;

/// @brief Method EnableDirectActionIfModeUsed, addr 0xb4ca550, size 0x28, virtual false, abstract: false, final false
inline void EnableDirectActionIfModeUsed() ;

/// @brief Method GetChannelGroup, addr 0xb4cb8a8, size 0x1c0, virtual true, abstract: false, final true
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannelGroup* GetChannelGroup() ;

/// @brief Method GetObjectReference, addr 0xb4ccc34, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseProvider* GetObjectReference() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider* New_ctor() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider* New_ctor(::StringW  name, bool  wantsInitialStateCheck, ::GlobalNamespace::XRInputHapticImpulseProvider_InputSourceMode  inputSourceMode) ;

/// @brief Method SetObjectReference, addr 0xb4cb65c, size 0x5c, virtual false, abstract: false, final false
inline void SetObjectReference(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseProvider*  value) ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticControlActionManager* const& __cordl_internal_get_m_HapticControlActionManager() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticControlActionManager*& __cordl_internal_get_m_HapticControlActionManager() ;

constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get_m_InputAction() const;

constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_m_InputAction() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_InputActionReference() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_InputActionReference() ;

constexpr ::GlobalNamespace::XRInputHapticImpulseProvider_InputSourceMode const& __cordl_internal_get_m_InputSourceMode() const;

constexpr ::GlobalNamespace::XRInputHapticImpulseProvider_InputSourceMode& __cordl_internal_get_m_InputSourceMode() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseProvider*,::UnityW<::UnityEngine::Object>>* const& __cordl_internal_get_m_ObjectReference() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseProvider*,::UnityW<::UnityEngine::Object>>*& __cordl_internal_get_m_ObjectReference() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_m_ObjectReferenceObject() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_m_ObjectReferenceObject() ;

constexpr void __cordl_internal_set_m_HapticControlActionManager(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticControlActionManager*  value) ;

constexpr void __cordl_internal_set_m_InputAction(::UnityEngine::InputSystem::InputAction*  value) ;

constexpr void __cordl_internal_set_m_InputActionReference(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_InputSourceMode(::GlobalNamespace::XRInputHapticImpulseProvider_InputSourceMode  value) ;

constexpr void __cordl_internal_set_m_ObjectReference(::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseProvider*,::UnityW<::UnityEngine::Object>>*  value) ;

constexpr void __cordl_internal_set_m_ObjectReferenceObject(::UnityW<::UnityEngine::Object>  value) ;

/// @brief Method .ctor, addr 0xb4ccba4, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xb4cbc70, size 0xd0, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, bool  wantsInitialStateCheck, ::GlobalNamespace::XRInputHapticImpulseProvider_InputSourceMode  inputSourceMode) ;

/// @brief Method get_inputAction, addr 0xb4ccb84, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputAction* get_inputAction() ;

/// @brief Method get_inputActionReference, addr 0xb4ccb94, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_inputActionReference() ;

/// @brief Method get_inputSourceMode, addr 0xb4ccb74, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::XRInputHapticImpulseProvider_InputSourceMode get_inputSourceMode() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseProvider"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseProvider* i___UnityEngine__XR__Interaction__Toolkit__Inputs__Haptics__IXRHapticImpulseProvider() noexcept;

/// @brief Method set_inputAction, addr 0xb4ccb8c, size 0x8, virtual false, abstract: false, final false
inline void set_inputAction(::UnityEngine::InputSystem::InputAction*  value) ;

/// @brief Method set_inputActionReference, addr 0xb4ccb9c, size 0x8, virtual false, abstract: false, final false
inline void set_inputActionReference(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_inputSourceMode, addr 0xb4ccb7c, size 0x8, virtual false, abstract: false, final false
inline void set_inputSourceMode(::GlobalNamespace::XRInputHapticImpulseProvider_InputSourceMode  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRInputHapticImpulseProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRInputHapticImpulseProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRInputHapticImpulseProvider(XRInputHapticImpulseProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRInputHapticImpulseProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRInputHapticImpulseProvider(XRInputHapticImpulseProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11682};

/// [SerializeField]
/// @brief Field m_InputSourceMode, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::XRInputHapticImpulseProvider_InputSourceMode  ___m_InputSourceMode;

/// [SerializeField]
/// @brief Field m_InputAction, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::InputSystem::InputAction*  ___m_InputAction;

/// [SerializeField]
/// @brief Field m_InputActionReference, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_InputActionReference;

/// [SerializeField]
/// [RequireInterface(typeof(UnityEngine.XR.Interaction.Toolkit.Inputs.Haptics.IXRHapticImpulseProvider))]
/// @brief Field m_ObjectReferenceObject, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ___m_ObjectReferenceObject;

/// @brief Field m_ObjectReference, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseProvider*,::UnityW<::UnityEngine::Object>>*  ___m_ObjectReference;

/// @brief Field m_HapticControlActionManager, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticControlActionManager*  ___m_HapticControlActionManager;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider, ___m_InputSourceMode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider, ___m_InputAction) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider, ___m_InputActionReference) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider, ___m_ObjectReferenceObject) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider, ___m_ObjectReference) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider, ___m_HapticControlActionManager) == 0x38, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider) == 0x40, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics
