#pragma once
// IWYU pragma private; include "GlobalNamespace/PrimaryButtonWatcher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PrimaryButtonWatcher)
namespace GlobalNamespace {
class PrimaryButtonEvent;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::XR {
struct InputDevice;
}
// Forward declare root types
namespace GlobalNamespace {
class PrimaryButtonWatcher;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PrimaryButtonWatcher*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PrimaryButtonWatcher*, "", "PrimaryButtonWatcher");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PrimaryButtonWatcher
class CORDL_TYPE PrimaryButtonWatcher : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field devicesWithPrimaryButton, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_devicesWithPrimaryButton, put=__cordl_internal_set_devicesWithPrimaryButton)) ::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>*  devicesWithPrimaryButton;

/// @brief Field lastButtonState, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_lastButtonState, put=__cordl_internal_set_lastButtonState)) bool  lastButtonState;

/// @brief Field primaryButtonPress, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_primaryButtonPress, put=__cordl_internal_set_primaryButtonPress)) ::GlobalNamespace::PrimaryButtonEvent*  primaryButtonPress;

/// @brief Method Awake, addr 0x579ec94, size 0xbc, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method InputDevices_deviceConnected, addr 0x579ef58, size 0xf0, virtual false, abstract: false, final false
inline void InputDevices_deviceConnected(::UnityEngine::XR::InputDevice  device) ;

/// @brief Method InputDevices_deviceDisconnected, addr 0x579f12c, size 0xa8, virtual false, abstract: false, final false
inline void InputDevices_deviceDisconnected(::UnityEngine::XR::InputDevice  device) ;

static inline ::GlobalNamespace::PrimaryButtonWatcher* New_ctor() ;

/// @brief Method OnDisable, addr 0x579f048, size 0xe4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x579ed50, size 0x208, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Update, addr 0x579f1d4, size 0x1dc, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>* const& __cordl_internal_get_devicesWithPrimaryButton() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>*& __cordl_internal_get_devicesWithPrimaryButton() ;

constexpr bool const& __cordl_internal_get_lastButtonState() const;

constexpr bool& __cordl_internal_get_lastButtonState() ;

constexpr ::GlobalNamespace::PrimaryButtonEvent* const& __cordl_internal_get_primaryButtonPress() const;

constexpr ::GlobalNamespace::PrimaryButtonEvent*& __cordl_internal_get_primaryButtonPress() ;

constexpr void __cordl_internal_set_devicesWithPrimaryButton(::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>*  value) ;

constexpr void __cordl_internal_set_lastButtonState(bool  value) ;

constexpr void __cordl_internal_set_primaryButtonPress(::GlobalNamespace::PrimaryButtonEvent*  value) ;

/// @brief Method .ctor, addr 0x579f3b0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PrimaryButtonWatcher() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PrimaryButtonWatcher", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PrimaryButtonWatcher(PrimaryButtonWatcher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PrimaryButtonWatcher", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PrimaryButtonWatcher(PrimaryButtonWatcher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1520};

/// @brief Field primaryButtonPress, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::PrimaryButtonEvent*  ___primaryButtonPress;

/// @brief Field lastButtonState, offset: 0x28, size: 0x1, def value: None
 bool  ___lastButtonState;

/// @brief Field devicesWithPrimaryButton, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>*  ___devicesWithPrimaryButton;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PrimaryButtonWatcher, ___primaryButtonPress) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrimaryButtonWatcher, ___lastButtonState) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrimaryButtonWatcher, ___devicesWithPrimaryButton) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PrimaryButtonWatcher) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
