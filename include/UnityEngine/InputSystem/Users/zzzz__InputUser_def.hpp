#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Users/InputUser.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUser_GlobalState_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputUser)
namespace GlobalNamespace {
struct InputControlScheme_MatchResult;
}
namespace GlobalNamespace {
struct InputUser_CompareDevicesByUserAccount;
}
namespace GlobalNamespace {
struct InputUser_ControlSchemeChangeSyntax;
}
namespace GlobalNamespace {
struct InputUser_GlobalState;
}
namespace GlobalNamespace {
struct InputUser_OngoingAccountSelection;
}
namespace GlobalNamespace {
struct InputUser_UserData;
}
namespace GlobalNamespace {
struct InputUser_UserFlags;
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
class Action;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::Users {
struct InputUserAccountHandle;
}
namespace UnityEngine::InputSystem::Users {
struct InputUserChange;
}
namespace UnityEngine::InputSystem::Users {
struct InputUserPairingOptions;
}
namespace UnityEngine::InputSystem::Users {
class InputUser___c;
}
namespace UnityEngine::InputSystem::Utilities {
class ISavedState;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct ReadOnlyArray_1;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename T>
class SavedStructState_1_TypedRestore;
}
namespace UnityEngine::InputSystem {
class IInputActionCollection;
}
namespace UnityEngine::InputSystem {
struct InputActionChange;
}
namespace UnityEngine::InputSystem {
template<typename TControl>
struct InputControlList_1;
}
namespace UnityEngine::InputSystem {
struct InputControlScheme;
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
namespace UnityEngine::InputSystem::Users {
class InputUser___c;
}
namespace UnityEngine::InputSystem::Users {
struct InputUser;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::Users::InputUser___c*);
MARK_VAL_T(::UnityEngine::InputSystem::Users::InputUser);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::Users::InputUser___c*, "UnityEngine.InputSystem.Users", "InputUser/<>c");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::Users::InputUser, "UnityEngine.InputSystem.Users", "InputUser");
// Dependencies Unity.Profiling.ProfilerMarker, UnityEngine.InputSystem.Users.InputUser::GlobalState
namespace UnityEngine::InputSystem::Users {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Users.InputUser
struct CORDL_TYPE InputUser {
public:
// Declarations
using CompareDevicesByUserAccount = ::GlobalNamespace::InputUser_CompareDevicesByUserAccount;

using ControlSchemeChangeSyntax = ::GlobalNamespace::InputUser_ControlSchemeChangeSyntax;

using GlobalState = ::GlobalNamespace::InputUser_GlobalState;

using OngoingAccountSelection = ::GlobalNamespace::InputUser_OngoingAccountSelection;

using UserData = ::GlobalNamespace::InputUser_UserData;

using UserFlags = ::GlobalNamespace::InputUser_UserFlags;

using __c = ::UnityEngine::InputSystem::Users::InputUser___c;

 __declspec(property(get=get_actions)) ::UnityEngine::InputSystem::IInputActionCollection*  actions;

 __declspec(property(get=get_controlScheme)) ::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme>  controlScheme;

 __declspec(property(get=get_controlSchemeMatch)) ::GlobalNamespace::InputControlScheme_MatchResult  controlSchemeMatch;

 __declspec(property(get=get_hasMissingRequiredDevices)) bool  hasMissingRequiredDevices;

 __declspec(property(get=get_id)) uint32_t  id;

 __declspec(property(get=get_index)) int32_t  index;

/// @brief Field k_InputCheckForUnpairMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_InputCheckForUnpairMarker, put=setStaticF_k_InputCheckForUnpairMarker)) ::Unity::Profiling::ProfilerMarker  k_InputCheckForUnpairMarker;

/// @brief Field k_InputUserOnChangeMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_InputUserOnChangeMarker, put=setStaticF_k_InputUserOnChangeMarker)) ::Unity::Profiling::ProfilerMarker  k_InputUserOnChangeMarker;

 __declspec(property(get=get_lostDevices)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>  lostDevices;

 __declspec(property(get=get_pairedDevices)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>  pairedDevices;

 __declspec(property(get=get_platformUserAccountHandle)) ::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>  platformUserAccountHandle;

 __declspec(property(get=get_platformUserAccountId)) ::StringW  platformUserAccountId;

 __declspec(property(get=get_platformUserAccountName)) ::StringW  platformUserAccountName;

/// @brief Field s_GlobalState, offset 0xffffffff, size 0x160 
 __declspec(property(get=getStaticF_s_GlobalState, put=setStaticF_s_GlobalState)) ::GlobalNamespace::InputUser_GlobalState  s_GlobalState;

 __declspec(property(get=get_valid)) bool  valid;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::Users::InputUser>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::InputSystem::Users::InputUser>*() ;

/// @brief Method ActivateControlScheme, addr 0xafc1270, size 0x210, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputUser_ControlSchemeChangeSyntax ActivateControlScheme(::UnityEngine::InputSystem::InputControlScheme  scheme) ;

/// @brief Method ActivateControlScheme, addr 0xafc1480, size 0xc4, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputUser_ControlSchemeChangeSyntax ActivateControlScheme(::StringW  schemeName) ;

/// @brief Method ActivateControlSchemeInternal, addr 0xafcc610, size 0x490, virtual false, abstract: false, final false
inline void ActivateControlSchemeInternal(int32_t  userIndex, ::UnityEngine::InputSystem::InputControlScheme  scheme) ;

/// @brief Method AddDeviceToUser, addr 0xafcedf0, size 0x638, virtual false, abstract: false, final false
static inline void AddDeviceToUser(int32_t  userIndex, ::UnityEngine::InputSystem::InputDevice*  device, bool  asLostDevice, bool  dontUpdateControlScheme) ;

/// @brief Method AddUser, addr 0xafceb84, size 0xf0, virtual false, abstract: false, final false
static inline int32_t AddUser() ;

/// @brief Method AssociateActionsWithUser, addr 0xafc0cfc, size 0x3b8, virtual false, abstract: false, final false
inline void AssociateActionsWithUser(::UnityEngine::InputSystem::IInputActionCollection*  actions) ;

/// @brief Method CreateUserWithoutPairedDevices, addr 0xafc11f4, size 0x7c, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::Users::InputUser CreateUserWithoutPairedDevices() ;

/// @brief Method DisposeAndResetGlobalState, addr 0xafd0ec4, size 0xf0, virtual false, abstract: false, final false
static inline void DisposeAndResetGlobalState() ;

/// @brief Method Equals, addr 0xafcfb14, size 0xa8, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0xafcfb04, size 0x10, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::InputSystem::Users::InputUser  other) ;

/// @brief Method FindControlScheme, addr 0xafbf580, size 0x114, virtual false, abstract: false, final false
inline void FindControlScheme(::StringW  schemeName, ::by_ref<::UnityEngine::InputSystem::InputControlScheme>  scheme) ;

/// @brief Method FindLostDevice, addr 0xafd0670, size 0xd8, virtual false, abstract: false, final false
static inline int32_t FindLostDevice(::UnityEngine::InputSystem::InputDevice*  device, int32_t  startIndex) ;

/// @brief Method FindUserByAccount, addr 0xafce92c, size 0x15c, virtual false, abstract: false, final false
static inline ::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUser> FindUserByAccount(::UnityEngine::InputSystem::Users::InputUserAccountHandle  platformUserAccountHandle) ;

/// @brief Method FindUserPairedToDevice, addr 0xafce6bc, size 0x120, virtual false, abstract: false, final false
static inline ::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUser> FindUserPairedToDevice(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method GetHashCode, addr 0xafcfbbc, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetUnpairedInputDevices, addr 0xafc0b54, size 0xa0, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*> GetUnpairedInputDevices() ;

/// @brief Method GetUnpairedInputDevices, addr 0xafce4a4, size 0x218, virtual false, abstract: false, final false
static inline int32_t GetUnpairedInputDevices(::by_ref<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*>>  list) ;

/// @brief Method HookIntoActionChange, addr 0xafcc4b4, size 0x15c, virtual false, abstract: false, final false
static inline void HookIntoActionChange() ;

/// @brief Method HookIntoDeviceChange, addr 0xafcf9c4, size 0x140, virtual false, abstract: false, final false
static inline void HookIntoDeviceChange() ;

/// @brief Method HookIntoEvents, addr 0xafcbfdc, size 0x158, virtual false, abstract: false, final false
static inline void HookIntoEvents() ;

/// @brief Method InitiateUserAccountSelection, addr 0xafcec80, size 0x170, virtual false, abstract: false, final false
static inline bool InitiateUserAccountSelection(int32_t  userIndex, ::UnityEngine::InputSystem::InputDevice*  device, ::UnityEngine::InputSystem::Users::InputUserPairingOptions  options) ;

/// @brief Method InitiateUserAccountSelectionAtPlatformLevel, addr 0xafcf904, size 0xc0, virtual false, abstract: false, final false
static inline bool InitiateUserAccountSelectionAtPlatformLevel(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method Notify, addr 0xafccd50, size 0x344, virtual false, abstract: false, final false
static inline void Notify(int32_t  userIndex, ::UnityEngine::InputSystem::Users::InputUserChange  change, ::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method OnActionChange, addr 0xafcff2c, size 0xec, virtual false, abstract: false, final false
static inline void OnActionChange(::System::Object*  obj, ::UnityEngine::InputSystem::InputActionChange  change) ;

/// @brief Method OnDeviceChange, addr 0xafd0018, size 0x658, virtual false, abstract: false, final false
static inline void OnDeviceChange(::UnityEngine::InputSystem::InputDevice*  device, ::UnityEngine::InputSystem::InputDeviceChange  change) ;

/// @brief Method OnEvent, addr 0xafd0748, size 0x568, virtual false, abstract: false, final false
static inline void OnEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr, ::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method PerformPairingWithDevice, addr 0xafc0694, size 0x270, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::Users::InputUser PerformPairingWithDevice(::UnityEngine::InputSystem::InputDevice*  device, ::UnityEngine::InputSystem::Users::InputUser  user, ::UnityEngine::InputSystem::Users::InputUserPairingOptions  options) ;

/// @brief Method QueryPairedPlatformUserAccount, addr 0xafcfd60, size 0x1cc, virtual false, abstract: false, final false
static inline int64_t QueryPairedPlatformUserAccount(::UnityEngine::InputSystem::InputDevice*  device, ::by_ref<::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>>  platformAccountHandle, ::by_ref<::StringW>  platformAccountName, ::by_ref<::StringW>  platformAccountId) ;

/// @brief Method RemoveDeviceFromUser, addr 0xafcdb54, size 0x5e0, virtual false, abstract: false, final false
static inline void RemoveDeviceFromUser(int32_t  userIndex, ::UnityEngine::InputSystem::InputDevice*  device, bool  asLostDevice) ;

/// @brief Method RemoveLostDevicesForUser, addr 0xafcd99c, size 0x1b8, virtual false, abstract: false, final false
static inline void RemoveLostDevicesForUser(int32_t  userIndex) ;

/// @brief Method RemoveUser, addr 0xafce134, size 0x370, virtual false, abstract: false, final false
static inline void RemoveUser(int32_t  userIndex) ;

/// @brief Method ResetGlobals, addr 0xafd0fb4, size 0x58, virtual false, abstract: false, final false
static inline void ResetGlobals() ;

/// @brief Method SaveAndResetState, addr 0xafd0cb0, size 0x214, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::Utilities::ISavedState* SaveAndResetState() ;

/// @brief Method ToString, addr 0xafcc204, size 0x2b0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method TryFindControlScheme, addr 0xafccaa0, size 0x2b0, virtual false, abstract: false, final false
inline bool TryFindControlScheme(::StringW  schemeName, ::by_ref<::UnityEngine::InputSystem::InputControlScheme>  scheme) ;

/// @brief Method TryFindUserIndex, addr 0xafce7dc, size 0x150, virtual false, abstract: false, final false
static inline int32_t TryFindUserIndex(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method TryFindUserIndex, addr 0xafcea88, size 0xfc, virtual false, abstract: false, final false
static inline int32_t TryFindUserIndex(::UnityEngine::InputSystem::Users::InputUserAccountHandle  platformHandle) ;

/// @brief Method TryFindUserIndex, addr 0xafcbafc, size 0xb8, virtual false, abstract: false, final false
static inline int32_t TryFindUserIndex(uint32_t  userId) ;

/// @brief Method UnhookFromActionChange, addr 0xafcfc74, size 0xec, virtual false, abstract: false, final false
static inline void UnhookFromActionChange() ;

/// @brief Method UnhookFromDeviceChange, addr 0xafcfbc4, size 0xb0, virtual false, abstract: false, final false
static inline void UnhookFromDeviceChange() ;

/// @brief Method UnhookFromDeviceStateChange, addr 0xafcc134, size 0xd0, virtual false, abstract: false, final false
static inline void UnhookFromDeviceStateChange() ;

/// @brief Method UnpairDevice, addr 0xafc3750, size 0x10c, virtual false, abstract: false, final false
inline void UnpairDevice(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method UnpairDevices, addr 0xafc0404, size 0x290, virtual false, abstract: false, final false
inline void UnpairDevices() ;

/// @brief Method UnpairDevicesAndRemoveUser, addr 0xafc118c, size 0x68, virtual false, abstract: false, final false
inline void UnpairDevicesAndRemoveUser() ;

/// @brief Method UpdateControlSchemeMatch, addr 0xafcd094, size 0x908, virtual false, abstract: false, final false
static inline void UpdateControlSchemeMatch(int32_t  userIndex, bool  autoPairMissing) ;

/// @brief Method UpdatePlatformUserAccount, addr 0xafcf428, size 0x4dc, virtual false, abstract: false, final false
static inline int64_t UpdatePlatformUserAccount(int32_t  userIndex, ::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method add_onChange, addr 0xafc1bdc, size 0xc4, virtual false, abstract: false, final false
static inline void add_onChange(::System::Action_3<::UnityEngine::InputSystem::Users::InputUser,::UnityEngine::InputSystem::Users::InputUserChange,::UnityEngine::InputSystem::InputDevice*>*  value) ;

/// @brief Method add_onPrefilterUnpairedDeviceActivity, addr 0xafc20bc, size 0xc4, virtual false, abstract: false, final false
static inline void add_onPrefilterUnpairedDeviceActivity(::System::Func_3<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>*  value) ;

/// @brief Method add_onUnpairedDeviceUsed, addr 0xafc1fc8, size 0xf4, virtual false, abstract: false, final false
static inline void add_onUnpairedDeviceUsed(::System::Action_2<::UnityEngine::InputSystem::InputControl*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*  value) ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_InputCheckForUnpairMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_InputUserOnChangeMarker() ;

static inline ::GlobalNamespace::InputUser_GlobalState getStaticF_s_GlobalState() ;

/// @brief Method get_actions, addr 0xafcbe28, size 0x88, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::IInputActionCollection* get_actions() ;

/// @brief Method get_all, addr 0xafcbf4c, size 0x90, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Users::InputUser> get_all() ;

/// @brief Method get_controlScheme, addr 0xafbd43c, size 0x9c, virtual false, abstract: false, final false
inline ::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme> get_controlScheme() ;

/// @brief Method get_controlSchemeMatch, addr 0xafcbeb0, size 0x9c, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputControlScheme_MatchResult get_controlSchemeMatch() ;

/// @brief Method get_hasMissingRequiredDevices, addr 0xafbe2fc, size 0x8c, virtual false, abstract: false, final false
inline bool get_hasMissingRequiredDevices() ;

/// @brief Method get_id, addr 0xafcbbb4, size 0x8, virtual false, abstract: false, final false
inline uint32_t get_id() ;

/// @brief Method get_index, addr 0xafcb9d8, size 0x124, virtual false, abstract: false, final false
inline int32_t get_index() ;

/// @brief Method get_listenForUnpairedDeviceActivity, addr 0xafc2180, size 0x58, virtual false, abstract: false, final false
static inline int32_t get_listenForUnpairedDeviceActivity() ;

/// @brief Method get_lostDevices, addr 0xafcbd6c, size 0xbc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> get_lostDevices() ;

/// @brief Method get_pairedDevices, addr 0xafbe1a8, size 0xbc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> get_pairedDevices() ;

/// @brief Method get_platformUserAccountHandle, addr 0xafcbbbc, size 0xa0, virtual false, abstract: false, final false
inline ::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle> get_platformUserAccountHandle() ;

/// @brief Method get_platformUserAccountId, addr 0xafcbce4, size 0x88, virtual false, abstract: false, final false
inline ::StringW get_platformUserAccountId() ;

/// @brief Method get_platformUserAccountName, addr 0xafcbc5c, size 0x88, virtual false, abstract: false, final false
inline ::StringW get_platformUserAccountName() ;

/// @brief Method get_valid, addr 0xafbd36c, size 0xd0, virtual false, abstract: false, final false
inline bool get_valid() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::InputSystem::Users::InputUser>"
constexpr ::System::IEquatable_1<::UnityEngine::InputSystem::Users::InputUser>* i___System__IEquatable_1___UnityEngine__InputSystem__Users__InputUser_() ;

/// @brief Method op_Equality, addr 0xafc2e88, size 0xc, virtual false, abstract: false, final false
static inline bool op_Equality(::UnityEngine::InputSystem::Users::InputUser  left, ::UnityEngine::InputSystem::Users::InputUser  right) ;

/// @brief Method op_Inequality, addr 0xafcec74, size 0xc, virtual false, abstract: false, final false
static inline bool op_Inequality(::UnityEngine::InputSystem::Users::InputUser  left, ::UnityEngine::InputSystem::Users::InputUser  right) ;

/// @brief Method remove_onChange, addr 0xafc2818, size 0xc4, virtual false, abstract: false, final false
static inline void remove_onChange(::System::Action_3<::UnityEngine::InputSystem::Users::InputUser,::UnityEngine::InputSystem::Users::InputUserChange,::UnityEngine::InputSystem::InputDevice*>*  value) ;

/// @brief Method remove_onPrefilterUnpairedDeviceActivity, addr 0xafc2418, size 0xc4, virtual false, abstract: false, final false
static inline void remove_onPrefilterUnpairedDeviceActivity(::System::Func_3<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>*  value) ;

/// @brief Method remove_onUnpairedDeviceUsed, addr 0xafc22fc, size 0x11c, virtual false, abstract: false, final false
static inline void remove_onUnpairedDeviceUsed(::System::Action_2<::UnityEngine::InputSystem::InputControl*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*  value) ;

static inline void setStaticF_k_InputCheckForUnpairMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_k_InputUserOnChangeMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_s_GlobalState(::GlobalNamespace::InputUser_GlobalState  value) ;

/// @brief Method set_listenForUnpairedDeviceActivity, addr 0xafc21d8, size 0x124, virtual false, abstract: false, final false
static inline void set_listenForUnpairedDeviceActivity(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr InputUser() ;

// Ctor Parameters [CppParam { name: "m_Id", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr InputUser(uint32_t  m_Id) noexcept;

/// @brief Field InvalidId offset 0xffffffff size 0x4
static constexpr uint32_t  InvalidId{static_cast<uint32_t>(0x0u)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13581};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field m_Id, offset: 0x0, size: 0x4, def value: None
 uint32_t  m_Id;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Users::InputUser, m_Id) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::Users::InputUser) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Users
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::InputSystem::Users {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Users.InputUser/<>c
class CORDL_TYPE InputUser___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::InputSystem::Users::InputUser___c*  __9;

/// @brief Field <>9__88_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__88_0, put=setStaticF___9__88_0)) ::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<::GlobalNamespace::InputUser_GlobalState>*  __9__88_0;

/// @brief Field <>9__88_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__88_1, put=setStaticF___9__88_1)) ::System::Action*  __9__88_1;

static inline ::UnityEngine::InputSystem::Users::InputUser___c* New_ctor() ;

/// @brief Method <SaveAndResetState>b__88_0, addr 0xafd1210, size 0x98, virtual false, abstract: false, final false
inline void _SaveAndResetState_b__88_0(::by_ref<::GlobalNamespace::InputUser_GlobalState>  state) ;

/// @brief Method <SaveAndResetState>b__88_1, addr 0xafd12a8, size 0x50, virtual false, abstract: false, final false
inline void _SaveAndResetState_b__88_1() ;

/// @brief Method .ctor, addr 0xafd1208, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::InputSystem::Users::InputUser___c* getStaticF___9() ;

static inline ::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<::GlobalNamespace::InputUser_GlobalState>* getStaticF___9__88_0() ;

static inline ::System::Action* getStaticF___9__88_1() ;

static inline void setStaticF___9(::UnityEngine::InputSystem::Users::InputUser___c*  value) ;

static inline void setStaticF___9__88_0(::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<::GlobalNamespace::InputUser_GlobalState>*  value) ;

static inline void setStaticF___9__88_1(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputUser___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputUser___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputUser___c(InputUser___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputUser___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputUser___c(InputUser___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13580};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::Users::InputUser___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Users
