#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Users/InputUser_GlobalState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Users/zzzz__InputUser_OngoingAccountSelection_def.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUser_UserData_def.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUser_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__CallbackArray_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputUser_GlobalState)
namespace GlobalNamespace {
struct InputUser_UserData;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace System {
class Object;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::Users {
struct InputUserChange;
}
namespace UnityEngine::InputSystem::Users {
struct InputUser;
}
namespace UnityEngine::InputSystem {
struct InputActionChange;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
struct InputDeviceChange;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputUser_GlobalState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputUser_GlobalState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputUser_GlobalState, "UnityEngine.InputSystem.Users", "InputUser/GlobalState");
// Dependencies UnityEngine.InputSystem.InputDevice, UnityEngine.InputSystem.Users.InputUser, UnityEngine.InputSystem.Users.InputUser::OngoingAccountSelection, UnityEngine.InputSystem.Users.InputUser::UserData, UnityEngine.InputSystem.Utilities.CallbackArray`1<TDelegate>, UnityEngine.InputSystem.Utilities.InlinedArray`1<TValue>
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Users.InputUser/GlobalState
struct CORDL_TYPE InputUser_GlobalState {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr InputUser_GlobalState() ;

// Ctor Parameters [CppParam { name: "pairingStateVersion", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "lastUserId", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "allUserCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "allPairedDeviceCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "allLostDeviceCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "allUsers", ty: "::ArrayW<::UnityEngine::InputSystem::Users::InputUser>", modifiers: "", def_value: None, comment: None }, CppParam { name: "allUserData", ty: "::ArrayW<::GlobalNamespace::InputUser_UserData>", modifiers: "", def_value: None, comment: None }, CppParam { name: "allPairedDevices", ty: "::ArrayW<::UnityEngine::InputSystem::InputDevice*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "allLostDevices", ty: "::ArrayW<::UnityEngine::InputSystem::InputDevice*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "ongoingAccountSelections", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<::GlobalNamespace::InputUser_OngoingAccountSelection>", modifiers: "", def_value: None, comment: None }, CppParam { name: "onChange", ty: "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_3<::UnityEngine::InputSystem::Users::InputUser,::UnityEngine::InputSystem::Users::InputUserChange,::UnityEngine::InputSystem::InputDevice*>*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "onUnpairedDeviceUsed", ty: "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputControl*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "onPreFilterUnpairedDeviceUsed", ty: "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Func_3<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "actionChangeDelegate", ty: "::System::Action_2<::System::Object*,::UnityEngine::InputSystem::InputActionChange>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "onDeviceChangeDelegate", ty: "::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::InputDeviceChange>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "onEventDelegate", ty: "::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice*>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "onActionChangeHooked", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "onDeviceChangeHooked", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "onEventHooked", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "listenForUnpairedDeviceActivity", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InputUser_GlobalState(int32_t  pairingStateVersion, uint32_t  lastUserId, int32_t  allUserCount, int32_t  allPairedDeviceCount, int32_t  allLostDeviceCount, ::ArrayW<::UnityEngine::InputSystem::Users::InputUser>  allUsers, ::ArrayW<::GlobalNamespace::InputUser_UserData>  allUserData, ::ArrayW<::UnityEngine::InputSystem::InputDevice*>  allPairedDevices, ::ArrayW<::UnityEngine::InputSystem::InputDevice*>  allLostDevices, ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::GlobalNamespace::InputUser_OngoingAccountSelection>  ongoingAccountSelections, ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_3<::UnityEngine::InputSystem::Users::InputUser,::UnityEngine::InputSystem::Users::InputUserChange,::UnityEngine::InputSystem::InputDevice*>*>  onChange, ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputControl*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>  onUnpairedDeviceUsed, ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Func_3<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>*>  onPreFilterUnpairedDeviceUsed, ::System::Action_2<::System::Object*,::UnityEngine::InputSystem::InputActionChange>*  actionChangeDelegate, ::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::InputDeviceChange>*  onDeviceChangeDelegate, ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice*>*  onEventDelegate, bool  onActionChangeHooked, bool  onDeviceChangeHooked, bool  onEventHooked, int32_t  listenForUnpairedDeviceActivity) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13579};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x168};

/// @brief Field pairingStateVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  pairingStateVersion;

/// @brief Field lastUserId, offset: 0x4, size: 0x4, def value: None
 uint32_t  lastUserId;

/// @brief Field allUserCount, offset: 0x8, size: 0x4, def value: None
 int32_t  allUserCount;

/// @brief Field allPairedDeviceCount, offset: 0xc, size: 0x4, def value: None
 int32_t  allPairedDeviceCount;

/// @brief Field allLostDeviceCount, offset: 0x10, size: 0x4, def value: None
 int32_t  allLostDeviceCount;

/// @brief Field allUsers, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::InputSystem::Users::InputUser>  allUsers;

/// @brief Field allUserData, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::InputUser_UserData>  allUserData;

/// @brief Field allPairedDevices, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::InputSystem::InputDevice*>  allPairedDevices;

/// @brief Field allLostDevices, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::InputSystem::InputDevice*>  allLostDevices;

/// @brief Field ongoingAccountSelections, offset: 0x38, size: 0x18, def value: None
 ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::GlobalNamespace::InputUser_OngoingAccountSelection>  ongoingAccountSelections;

/// @brief Field onChange, offset: 0x50, size: 0x50, def value: None
 ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_3<::UnityEngine::InputSystem::Users::InputUser,::UnityEngine::InputSystem::Users::InputUserChange,::UnityEngine::InputSystem::InputDevice*>*>  onChange;

/// @brief Field onUnpairedDeviceUsed, offset: 0xa0, size: 0x50, def value: None
 ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputControl*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>  onUnpairedDeviceUsed;

/// @brief Field onPreFilterUnpairedDeviceUsed, offset: 0xf0, size: 0x50, def value: None
 ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Func_3<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>*>  onPreFilterUnpairedDeviceUsed;

/// @brief Field actionChangeDelegate, offset: 0x140, size: 0x8, def value: None
 ::System::Action_2<::System::Object*,::UnityEngine::InputSystem::InputActionChange>*  actionChangeDelegate;

/// @brief Field onDeviceChangeDelegate, offset: 0x148, size: 0x8, def value: None
 ::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::InputDeviceChange>*  onDeviceChangeDelegate;

/// @brief Field onEventDelegate, offset: 0x150, size: 0x8, def value: None
 ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice*>*  onEventDelegate;

/// @brief Field onActionChangeHooked, offset: 0x158, size: 0x1, def value: None
 bool  onActionChangeHooked;

/// @brief Field onDeviceChangeHooked, offset: 0x159, size: 0x1, def value: None
 bool  onDeviceChangeHooked;

/// @brief Field onEventHooked, offset: 0x15a, size: 0x1, def value: None
 bool  onEventHooked;

/// @brief Field listenForUnpairedDeviceActivity, offset: 0x15c, size: 0x4, def value: None
 int32_t  listenForUnpairedDeviceActivity;

/// @brief Size padding 0x168 - 0x160 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputUser_GlobalState, pairingStateVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputUser_GlobalState, lastUserId) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputUser_GlobalState, allUserCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputUser_GlobalState, allPairedDeviceCount) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputUser_GlobalState, allLostDeviceCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputUser_GlobalState, allUsers) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputUser_GlobalState, allUserData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputUser_GlobalState, allPairedDevices) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputUser_GlobalState, allLostDevices) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputUser_GlobalState, ongoingAccountSelections) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputUser_GlobalState, onChange) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputUser_GlobalState, onUnpairedDeviceUsed) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputUser_GlobalState, onPreFilterUnpairedDeviceUsed) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputUser_GlobalState, actionChangeDelegate) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputUser_GlobalState, onDeviceChangeDelegate) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputUser_GlobalState, onEventDelegate) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputUser_GlobalState, onActionChangeHooked) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputUser_GlobalState, onDeviceChangeHooked) == 0x159, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputUser_GlobalState, onEventHooked) == 0x15a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputUser_GlobalState, listenForUnpairedDeviceActivity) == 0x15c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputUser_GlobalState) == 0x168, "Size mismatch!");

} // namespace end def GlobalNamespace
