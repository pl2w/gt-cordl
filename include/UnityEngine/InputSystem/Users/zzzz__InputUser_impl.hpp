#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Users/InputUser.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUser_GlobalState_impl.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUser_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUserAccountHandle_def.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUserChange_def.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUserPairingOptions_def.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUser_CompareDevicesByUserAccount_def.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUser_ControlSchemeChangeSyntax_def.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUser_GlobalState_def.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUser_OngoingAccountSelection_def.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUser_UserData_def.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUser_UserFlags_def.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUser_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ISavedState_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__SavedStructState_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__IInputActionCollection_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionChange_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlList_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_MatchResult_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDeviceChange_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.get_valid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Users::InputUser::*)()>(&::UnityEngine::InputSystem::Users::InputUser::get_valid)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xafbd36c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"get_valid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.get_index
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::Users::InputUser::*)()>(&::UnityEngine::InputSystem::Users::InputUser::get_index)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xafcb9d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"get_index", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.get_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::InputSystem::Users::InputUser::*)()>(&::UnityEngine::InputSystem::Users::InputUser::get_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xafcbbb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"get_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.get_platformUserAccountHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle> (::UnityEngine::InputSystem::Users::InputUser::*)()>(&::UnityEngine::InputSystem::Users::InputUser::get_platformUserAccountHandle)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xafcbbbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"get_platformUserAccountHandle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.get_platformUserAccountName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Users::InputUser::*)()>(&::UnityEngine::InputSystem::Users::InputUser::get_platformUserAccountName)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xafcbc5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"get_platformUserAccountName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.get_platformUserAccountId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Users::InputUser::*)()>(&::UnityEngine::InputSystem::Users::InputUser::get_platformUserAccountId)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xafcbce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"get_platformUserAccountId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.get_pairedDevices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> (::UnityEngine::InputSystem::Users::InputUser::*)()>(&::UnityEngine::InputSystem::Users::InputUser::get_pairedDevices)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xafbe1a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"get_pairedDevices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.get_lostDevices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> (::UnityEngine::InputSystem::Users::InputUser::*)()>(&::UnityEngine::InputSystem::Users::InputUser::get_lostDevices)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xafcbd6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"get_lostDevices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.get_actions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::IInputActionCollection* (::UnityEngine::InputSystem::Users::InputUser::*)()>(&::UnityEngine::InputSystem::Users::InputUser::get_actions)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xafcbe28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"get_actions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.get_controlScheme
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme> (::UnityEngine::InputSystem::Users::InputUser::*)()>(&::UnityEngine::InputSystem::Users::InputUser::get_controlScheme)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xafbd43c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"get_controlScheme", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.get_controlSchemeMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputControlScheme_MatchResult (::UnityEngine::InputSystem::Users::InputUser::*)()>(&::UnityEngine::InputSystem::Users::InputUser::get_controlSchemeMatch)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xafcbeb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"get_controlSchemeMatch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.get_hasMissingRequiredDevices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Users::InputUser::*)()>(&::UnityEngine::InputSystem::Users::InputUser::get_hasMissingRequiredDevices)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xafbe2fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"get_hasMissingRequiredDevices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.get_all
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Users::InputUser> (*)()>(&::UnityEngine::InputSystem::Users::InputUser::get_all)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xafcbf4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"get_all", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.add_onChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_3<::UnityEngine::InputSystem::Users::InputUser,::UnityEngine::InputSystem::Users::InputUserChange,::UnityEngine::InputSystem::InputDevice*>*)>(&::UnityEngine::InputSystem::Users::InputUser::add_onChange)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xafc1bdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"add_onChange", {}, {::i2c::type_of<::System::Action_3<::UnityEngine::InputSystem::Users::InputUser,::UnityEngine::InputSystem::Users::InputUserChange,::UnityEngine::InputSystem::InputDevice*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.remove_onChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_3<::UnityEngine::InputSystem::Users::InputUser,::UnityEngine::InputSystem::Users::InputUserChange,::UnityEngine::InputSystem::InputDevice*>*)>(&::UnityEngine::InputSystem::Users::InputUser::remove_onChange)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xafc2818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"remove_onChange", {}, {::i2c::type_of<::System::Action_3<::UnityEngine::InputSystem::Users::InputUser,::UnityEngine::InputSystem::Users::InputUserChange,::UnityEngine::InputSystem::InputDevice*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.add_onUnpairedDeviceUsed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::UnityEngine::InputSystem::InputControl*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*)>(&::UnityEngine::InputSystem::Users::InputUser::add_onUnpairedDeviceUsed)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xafc1fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"add_onUnpairedDeviceUsed", {}, {::i2c::type_of<::System::Action_2<::UnityEngine::InputSystem::InputControl*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.remove_onUnpairedDeviceUsed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::UnityEngine::InputSystem::InputControl*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*)>(&::UnityEngine::InputSystem::Users::InputUser::remove_onUnpairedDeviceUsed)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xafc22fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"remove_onUnpairedDeviceUsed", {}, {::i2c::type_of<::System::Action_2<::UnityEngine::InputSystem::InputControl*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.add_onPrefilterUnpairedDeviceActivity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Func_3<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>*)>(&::UnityEngine::InputSystem::Users::InputUser::add_onPrefilterUnpairedDeviceActivity)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xafc20bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"add_onPrefilterUnpairedDeviceActivity", {}, {::i2c::type_of<::System::Func_3<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.remove_onPrefilterUnpairedDeviceActivity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Func_3<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>*)>(&::UnityEngine::InputSystem::Users::InputUser::remove_onPrefilterUnpairedDeviceActivity)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xafc2418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"remove_onPrefilterUnpairedDeviceActivity", {}, {::i2c::type_of<::System::Func_3<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.get_listenForUnpairedDeviceActivity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::InputSystem::Users::InputUser::get_listenForUnpairedDeviceActivity)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xafc2180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"get_listenForUnpairedDeviceActivity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.set_listenForUnpairedDeviceActivity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::InputSystem::Users::InputUser::set_listenForUnpairedDeviceActivity)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xafc21d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"set_listenForUnpairedDeviceActivity", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Users::InputUser::*)()>(&::UnityEngine::InputSystem::Users::InputUser::ToString)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0xafcc204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                    {::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.AssociateActionsWithUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Users::InputUser::*)(::UnityEngine::InputSystem::IInputActionCollection*)>(&::UnityEngine::InputSystem::Users::InputUser::AssociateActionsWithUser)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0xafc0cfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"AssociateActionsWithUser", {}, {::i2c::type_of<::UnityEngine::InputSystem::IInputActionCollection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.ActivateControlScheme
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputUser_ControlSchemeChangeSyntax (::UnityEngine::InputSystem::Users::InputUser::*)(::StringW)>(&::UnityEngine::InputSystem::Users::InputUser::ActivateControlScheme)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xafc1480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"ActivateControlScheme", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.TryFindControlScheme
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Users::InputUser::*)(::StringW, ::by_ref<::UnityEngine::InputSystem::InputControlScheme>)>(&::UnityEngine::InputSystem::Users::InputUser::TryFindControlScheme)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0xafccaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"TryFindControlScheme", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputControlScheme>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.FindControlScheme
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Users::InputUser::*)(::StringW, ::by_ref<::UnityEngine::InputSystem::InputControlScheme>)>(&::UnityEngine::InputSystem::Users::InputUser::FindControlScheme)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xafbf580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"FindControlScheme", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputControlScheme>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.ActivateControlScheme
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputUser_ControlSchemeChangeSyntax (::UnityEngine::InputSystem::Users::InputUser::*)(::UnityEngine::InputSystem::InputControlScheme)>(&::UnityEngine::InputSystem::Users::InputUser::ActivateControlScheme)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0xafc1270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"ActivateControlScheme", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControlScheme>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.ActivateControlSchemeInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Users::InputUser::*)(int32_t, ::UnityEngine::InputSystem::InputControlScheme)>(&::UnityEngine::InputSystem::Users::InputUser::ActivateControlSchemeInternal)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0xafcc610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"ActivateControlSchemeInternal", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControlScheme>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.UnpairDevice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Users::InputUser::*)(::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::Users::InputUser::UnpairDevice)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xafc3750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"UnpairDevice", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.UnpairDevices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Users::InputUser::*)()>(&::UnityEngine::InputSystem::Users::InputUser::UnpairDevices)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0xafc0404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"UnpairDevices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.RemoveLostDevicesForUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::InputSystem::Users::InputUser::RemoveLostDevicesForUser)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xafcd99c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"RemoveLostDevicesForUser", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.UnpairDevicesAndRemoveUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Users::InputUser::*)()>(&::UnityEngine::InputSystem::Users::InputUser::UnpairDevicesAndRemoveUser)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xafc118c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"UnpairDevicesAndRemoveUser", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.GetUnpairedInputDevices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*> (*)()>(&::UnityEngine::InputSystem::Users::InputUser::GetUnpairedInputDevices)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xafc0b54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"GetUnpairedInputDevices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.GetUnpairedInputDevices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*>>)>(&::UnityEngine::InputSystem::Users::InputUser::GetUnpairedInputDevices)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0xafce4a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"GetUnpairedInputDevices", {}, {::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.FindUserPairedToDevice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUser> (*)(::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::Users::InputUser::FindUserPairedToDevice)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xafce6bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"FindUserPairedToDevice", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.FindUserByAccount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUser> (*)(::UnityEngine::InputSystem::Users::InputUserAccountHandle)>(&::UnityEngine::InputSystem::Users::InputUser::FindUserByAccount)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xafce92c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"FindUserByAccount", {}, {::i2c::type_of<::UnityEngine::InputSystem::Users::InputUserAccountHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.CreateUserWithoutPairedDevices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Users::InputUser (*)()>(&::UnityEngine::InputSystem::Users::InputUser::CreateUserWithoutPairedDevices)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xafc11f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"CreateUserWithoutPairedDevices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.PerformPairingWithDevice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Users::InputUser (*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::Users::InputUser, ::UnityEngine::InputSystem::Users::InputUserPairingOptions)>(&::UnityEngine::InputSystem::Users::InputUser::PerformPairingWithDevice)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0xafc0694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"PerformPairingWithDevice", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::UnityEngine::InputSystem::Users::InputUser>(), ::i2c::type_of<::UnityEngine::InputSystem::Users::InputUserPairingOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.InitiateUserAccountSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::Users::InputUserPairingOptions)>(&::UnityEngine::InputSystem::Users::InputUser::InitiateUserAccountSelection)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xafcec80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"InitiateUserAccountSelection", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::UnityEngine::InputSystem::Users::InputUserPairingOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Users::InputUser::*)(::UnityEngine::InputSystem::Users::InputUser)>(&::UnityEngine::InputSystem::Users::InputUser::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xafcfb04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::InputSystem::Users::InputUser>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Users::InputUser::*)(::System::Object*)>(&::UnityEngine::InputSystem::Users::InputUser::Equals)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xafcfb14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                    {::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::Users::InputUser::*)()>(&::UnityEngine::InputSystem::Users::InputUser::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xafcfbbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                    {::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::Users::InputUser, ::UnityEngine::InputSystem::Users::InputUser)>(&::UnityEngine::InputSystem::Users::InputUser::op_Equality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xafc2e88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"op_Equality", {}, {::i2c::type_of<::UnityEngine::InputSystem::Users::InputUser>(), ::i2c::type_of<::UnityEngine::InputSystem::Users::InputUser>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::Users::InputUser, ::UnityEngine::InputSystem::Users::InputUser)>(&::UnityEngine::InputSystem::Users::InputUser::op_Inequality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xafcec74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"op_Inequality", {}, {::i2c::type_of<::UnityEngine::InputSystem::Users::InputUser>(), ::i2c::type_of<::UnityEngine::InputSystem::Users::InputUser>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.AddUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::InputSystem::Users::InputUser::AddUser)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xafceb84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"AddUser", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.RemoveUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::InputSystem::Users::InputUser::RemoveUser)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0xafce134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"RemoveUser", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.Notify
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::UnityEngine::InputSystem::Users::InputUserChange, ::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::Users::InputUser::Notify)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0xafccd50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"Notify", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::Users::InputUserChange>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.TryFindUserIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint32_t)>(&::UnityEngine::InputSystem::Users::InputUser::TryFindUserIndex)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xafcbafc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"TryFindUserIndex", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.TryFindUserIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::InputSystem::Users::InputUserAccountHandle)>(&::UnityEngine::InputSystem::Users::InputUser::TryFindUserIndex)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xafcea88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"TryFindUserIndex", {}, {::i2c::type_of<::UnityEngine::InputSystem::Users::InputUserAccountHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.TryFindUserIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::Users::InputUser::TryFindUserIndex)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xafce7dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"TryFindUserIndex", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.AddDeviceToUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::UnityEngine::InputSystem::InputDevice*, bool, bool)>(&::UnityEngine::InputSystem::Users::InputUser::AddDeviceToUser)> {
  constexpr static std::size_t size = 0x638;
  constexpr static std::size_t addrs = 0xafcedf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"AddDeviceToUser", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.RemoveDeviceFromUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::UnityEngine::InputSystem::InputDevice*, bool)>(&::UnityEngine::InputSystem::Users::InputUser::RemoveDeviceFromUser)> {
  constexpr static std::size_t size = 0x5e0;
  constexpr static std::size_t addrs = 0xafcdb54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"RemoveDeviceFromUser", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.UpdateControlSchemeMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, bool)>(&::UnityEngine::InputSystem::Users::InputUser::UpdateControlSchemeMatch)> {
  constexpr static std::size_t size = 0x908;
  constexpr static std::size_t addrs = 0xafcd094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"UpdateControlSchemeMatch", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.UpdatePlatformUserAccount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(int32_t, ::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::Users::InputUser::UpdatePlatformUserAccount)> {
  constexpr static std::size_t size = 0x4dc;
  constexpr static std::size_t addrs = 0xafcf428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"UpdatePlatformUserAccount", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.QueryPairedPlatformUserAccount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::UnityEngine::InputSystem::InputDevice*, ::by_ref<::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>>, ::by_ref<::StringW>, ::by_ref<::StringW>)>(&::UnityEngine::InputSystem::Users::InputUser::QueryPairedPlatformUserAccount)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0xafcfd60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"QueryPairedPlatformUserAccount", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.InitiateUserAccountSelectionAtPlatformLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::Users::InputUser::InitiateUserAccountSelectionAtPlatformLevel)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xafcf904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"InitiateUserAccountSelectionAtPlatformLevel", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.OnActionChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::UnityEngine::InputSystem::InputActionChange)>(&::UnityEngine::InputSystem::Users::InputUser::OnActionChange)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xafcff2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"OnActionChange", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionChange>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.OnDeviceChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange)>(&::UnityEngine::InputSystem::Users::InputUser::OnDeviceChange)> {
  constexpr static std::size_t size = 0x658;
  constexpr static std::size_t addrs = 0xafd0018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"OnDeviceChange", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDeviceChange>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.FindLostDevice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::InputSystem::InputDevice*, int32_t)>(&::UnityEngine::InputSystem::Users::InputUser::FindLostDevice)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xafd0670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"FindLostDevice", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.OnEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::Users::InputUser::OnEvent)> {
  constexpr static std::size_t size = 0x568;
  constexpr static std::size_t addrs = 0xafd0748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"OnEvent", {}, {::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.SaveAndResetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ISavedState* (*)()>(&::UnityEngine::InputSystem::Users::InputUser::SaveAndResetState)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0xafd0cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"SaveAndResetState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.HookIntoActionChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::InputSystem::Users::InputUser::HookIntoActionChange)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xafcc4b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"HookIntoActionChange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.UnhookFromActionChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::InputSystem::Users::InputUser::UnhookFromActionChange)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xafcfc74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"UnhookFromActionChange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.HookIntoDeviceChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::InputSystem::Users::InputUser::HookIntoDeviceChange)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xafcf9c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"HookIntoDeviceChange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.UnhookFromDeviceChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::InputSystem::Users::InputUser::UnhookFromDeviceChange)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xafcfbc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"UnhookFromDeviceChange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.HookIntoEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::InputSystem::Users::InputUser::HookIntoEvents)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xafcbfdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"HookIntoEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.UnhookFromDeviceStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::InputSystem::Users::InputUser::UnhookFromDeviceStateChange)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xafcc134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"UnhookFromDeviceStateChange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.DisposeAndResetGlobalState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::InputSystem::Users::InputUser::DisposeAndResetGlobalState)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xafd0ec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"DisposeAndResetGlobalState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser.ResetGlobals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::InputSystem::Users::InputUser::ResetGlobals)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xafd0fb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"ResetGlobals", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Users::InputUser::setStaticF_k_InputUserOnChangeMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_InputUserOnChangeMarker", ::UnityEngine::InputSystem::Users::InputUser>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::InputSystem::Users::InputUser::getStaticF_k_InputUserOnChangeMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_InputUserOnChangeMarker", ::UnityEngine::InputSystem::Users::InputUser>();
}
inline void UnityEngine::InputSystem::Users::InputUser::setStaticF_k_InputCheckForUnpairMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_InputCheckForUnpairMarker", ::UnityEngine::InputSystem::Users::InputUser>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::InputSystem::Users::InputUser::getStaticF_k_InputCheckForUnpairMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_InputCheckForUnpairMarker", ::UnityEngine::InputSystem::Users::InputUser>();
}
inline void UnityEngine::InputSystem::Users::InputUser::setStaticF_s_GlobalState(::GlobalNamespace::InputUser_GlobalState  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::InputUser_GlobalState, "s_GlobalState", ::UnityEngine::InputSystem::Users::InputUser>(std::forward<::GlobalNamespace::InputUser_GlobalState>(value));
}
inline ::GlobalNamespace::InputUser_GlobalState UnityEngine::InputSystem::Users::InputUser::getStaticF_s_GlobalState()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::InputUser_GlobalState, "s_GlobalState", ::UnityEngine::InputSystem::Users::InputUser>();
}
inline bool UnityEngine::InputSystem::Users::InputUser::get_valid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"get_valid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::Users::InputUser::get_index()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"get_index", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline uint32_t UnityEngine::InputSystem::Users::InputUser::get_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"get_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline ::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle> UnityEngine::InputSystem::Users::InputUser::get_platformUserAccountHandle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"get_platformUserAccountHandle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>>(*this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::Users::InputUser::get_platformUserAccountName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"get_platformUserAccountName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::Users::InputUser::get_platformUserAccountId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"get_platformUserAccountId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> UnityEngine::InputSystem::Users::InputUser::get_pairedDevices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"get_pairedDevices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> UnityEngine::InputSystem::Users::InputUser::get_lostDevices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"get_lostDevices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::IInputActionCollection* UnityEngine::InputSystem::Users::InputUser::get_actions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"get_actions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::IInputActionCollection*>(*this, ___internal_method);
}
inline ::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme> UnityEngine::InputSystem::Users::InputUser::get_controlScheme()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"get_controlScheme", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme>>(*this, ___internal_method);
}
inline ::GlobalNamespace::InputControlScheme_MatchResult UnityEngine::InputSystem::Users::InputUser::get_controlSchemeMatch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"get_controlSchemeMatch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputControlScheme_MatchResult>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Users::InputUser::get_hasMissingRequiredDevices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"get_hasMissingRequiredDevices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Users::InputUser> UnityEngine::InputSystem::Users::InputUser::get_all()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"get_all", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Users::InputUser>>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::Users::InputUser::add_onChange(::System::Action_3<::UnityEngine::InputSystem::Users::InputUser,::UnityEngine::InputSystem::Users::InputUserChange,::UnityEngine::InputSystem::InputDevice*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"add_onChange", {}, {::i2c::type_of<::System::Action_3<::UnityEngine::InputSystem::Users::InputUser,::UnityEngine::InputSystem::Users::InputUserChange,::UnityEngine::InputSystem::InputDevice*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::Users::InputUser::remove_onChange(::System::Action_3<::UnityEngine::InputSystem::Users::InputUser,::UnityEngine::InputSystem::Users::InputUserChange,::UnityEngine::InputSystem::InputDevice*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"remove_onChange", {}, {::i2c::type_of<::System::Action_3<::UnityEngine::InputSystem::Users::InputUser,::UnityEngine::InputSystem::Users::InputUserChange,::UnityEngine::InputSystem::InputDevice*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::Users::InputUser::add_onUnpairedDeviceUsed(::System::Action_2<::UnityEngine::InputSystem::InputControl*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"add_onUnpairedDeviceUsed", {}, {::i2c::type_of<::System::Action_2<::UnityEngine::InputSystem::InputControl*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::Users::InputUser::remove_onUnpairedDeviceUsed(::System::Action_2<::UnityEngine::InputSystem::InputControl*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"remove_onUnpairedDeviceUsed", {}, {::i2c::type_of<::System::Action_2<::UnityEngine::InputSystem::InputControl*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::Users::InputUser::add_onPrefilterUnpairedDeviceActivity(::System::Func_3<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"add_onPrefilterUnpairedDeviceActivity", {}, {::i2c::type_of<::System::Func_3<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::Users::InputUser::remove_onPrefilterUnpairedDeviceActivity(::System::Func_3<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"remove_onPrefilterUnpairedDeviceActivity", {}, {::i2c::type_of<::System::Func_3<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::Users::InputUser::get_listenForUnpairedDeviceActivity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"get_listenForUnpairedDeviceActivity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::Users::InputUser::set_listenForUnpairedDeviceActivity(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"set_listenForUnpairedDeviceActivity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::StringW UnityEngine::InputSystem::Users::InputUser::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Users::InputUser::AssociateActionsWithUser(::UnityEngine::InputSystem::IInputActionCollection*  actions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"AssociateActionsWithUser", {}, {::i2c::type_of<::UnityEngine::InputSystem::IInputActionCollection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, actions);
}
inline ::GlobalNamespace::InputUser_ControlSchemeChangeSyntax UnityEngine::InputSystem::Users::InputUser::ActivateControlScheme(::StringW  schemeName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"ActivateControlScheme", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputUser_ControlSchemeChangeSyntax>(*this, ___internal_method, schemeName);
}
inline bool UnityEngine::InputSystem::Users::InputUser::TryFindControlScheme(::StringW  schemeName, ::by_ref<::UnityEngine::InputSystem::InputControlScheme>  scheme)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"TryFindControlScheme", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputControlScheme>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, schemeName, scheme);
}
inline void UnityEngine::InputSystem::Users::InputUser::FindControlScheme(::StringW  schemeName, ::by_ref<::UnityEngine::InputSystem::InputControlScheme>  scheme)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"FindControlScheme", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputControlScheme>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, schemeName, scheme);
}
inline ::GlobalNamespace::InputUser_ControlSchemeChangeSyntax UnityEngine::InputSystem::Users::InputUser::ActivateControlScheme(::UnityEngine::InputSystem::InputControlScheme  scheme)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"ActivateControlScheme", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControlScheme>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputUser_ControlSchemeChangeSyntax>(*this, ___internal_method, scheme);
}
inline void UnityEngine::InputSystem::Users::InputUser::ActivateControlSchemeInternal(int32_t  userIndex, ::UnityEngine::InputSystem::InputControlScheme  scheme)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"ActivateControlSchemeInternal", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControlScheme>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, userIndex, scheme);
}
inline void UnityEngine::InputSystem::Users::InputUser::UnpairDevice(::UnityEngine::InputSystem::InputDevice*  device)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"UnpairDevice", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, device);
}
inline void UnityEngine::InputSystem::Users::InputUser::UnpairDevices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"UnpairDevices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Users::InputUser::RemoveLostDevicesForUser(int32_t  userIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"RemoveLostDevicesForUser", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, userIndex);
}
inline void UnityEngine::InputSystem::Users::InputUser::UnpairDevicesAndRemoveUser()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"UnpairDevicesAndRemoveUser", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*> UnityEngine::InputSystem::Users::InputUser::GetUnpairedInputDevices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"GetUnpairedInputDevices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*>>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::Users::InputUser::GetUnpairedInputDevices(::by_ref<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*>>  list)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"GetUnpairedInputDevices", {}, {::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, list);
}
inline ::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUser> UnityEngine::InputSystem::Users::InputUser::FindUserPairedToDevice(::UnityEngine::InputSystem::InputDevice*  device)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"FindUserPairedToDevice", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUser>>(nullptr, ___internal_method, device);
}
inline ::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUser> UnityEngine::InputSystem::Users::InputUser::FindUserByAccount(::UnityEngine::InputSystem::Users::InputUserAccountHandle  platformUserAccountHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"FindUserByAccount", {}, {::i2c::type_of<::UnityEngine::InputSystem::Users::InputUserAccountHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUser>>(nullptr, ___internal_method, platformUserAccountHandle);
}
inline ::UnityEngine::InputSystem::Users::InputUser UnityEngine::InputSystem::Users::InputUser::CreateUserWithoutPairedDevices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"CreateUserWithoutPairedDevices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Users::InputUser>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::Users::InputUser UnityEngine::InputSystem::Users::InputUser::PerformPairingWithDevice(::UnityEngine::InputSystem::InputDevice*  device, ::UnityEngine::InputSystem::Users::InputUser  user, ::UnityEngine::InputSystem::Users::InputUserPairingOptions  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"PerformPairingWithDevice", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::UnityEngine::InputSystem::Users::InputUser>(), ::i2c::type_of<::UnityEngine::InputSystem::Users::InputUserPairingOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Users::InputUser>(nullptr, ___internal_method, device, user, options);
}
inline bool UnityEngine::InputSystem::Users::InputUser::InitiateUserAccountSelection(int32_t  userIndex, ::UnityEngine::InputSystem::InputDevice*  device, ::UnityEngine::InputSystem::Users::InputUserPairingOptions  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"InitiateUserAccountSelection", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::UnityEngine::InputSystem::Users::InputUserPairingOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, userIndex, device, options);
}
inline bool UnityEngine::InputSystem::Users::InputUser::Equals(::UnityEngine::InputSystem::Users::InputUser  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::InputSystem::Users::InputUser>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::InputSystem::Users::InputUser::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::InputSystem::Users::InputUser::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Users::InputUser::op_Equality(::UnityEngine::InputSystem::Users::InputUser  left, ::UnityEngine::InputSystem::Users::InputUser  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"op_Equality", {}, {::i2c::type_of<::UnityEngine::InputSystem::Users::InputUser>(), ::i2c::type_of<::UnityEngine::InputSystem::Users::InputUser>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool UnityEngine::InputSystem::Users::InputUser::op_Inequality(::UnityEngine::InputSystem::Users::InputUser  left, ::UnityEngine::InputSystem::Users::InputUser  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"op_Inequality", {}, {::i2c::type_of<::UnityEngine::InputSystem::Users::InputUser>(), ::i2c::type_of<::UnityEngine::InputSystem::Users::InputUser>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline int32_t UnityEngine::InputSystem::Users::InputUser::AddUser()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"AddUser", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::Users::InputUser::RemoveUser(int32_t  userIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"RemoveUser", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, userIndex);
}
inline void UnityEngine::InputSystem::Users::InputUser::Notify(int32_t  userIndex, ::UnityEngine::InputSystem::Users::InputUserChange  change, ::UnityEngine::InputSystem::InputDevice*  device)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"Notify", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::Users::InputUserChange>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, userIndex, change, device);
}
inline int32_t UnityEngine::InputSystem::Users::InputUser::TryFindUserIndex(uint32_t  userId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"TryFindUserIndex", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, userId);
}
inline int32_t UnityEngine::InputSystem::Users::InputUser::TryFindUserIndex(::UnityEngine::InputSystem::Users::InputUserAccountHandle  platformHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"TryFindUserIndex", {}, {::i2c::type_of<::UnityEngine::InputSystem::Users::InputUserAccountHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, platformHandle);
}
inline int32_t UnityEngine::InputSystem::Users::InputUser::TryFindUserIndex(::UnityEngine::InputSystem::InputDevice*  device)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"TryFindUserIndex", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, device);
}
inline void UnityEngine::InputSystem::Users::InputUser::AddDeviceToUser(int32_t  userIndex, ::UnityEngine::InputSystem::InputDevice*  device, bool  asLostDevice, bool  dontUpdateControlScheme)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"AddDeviceToUser", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, userIndex, device, asLostDevice, dontUpdateControlScheme);
}
inline void UnityEngine::InputSystem::Users::InputUser::RemoveDeviceFromUser(int32_t  userIndex, ::UnityEngine::InputSystem::InputDevice*  device, bool  asLostDevice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"RemoveDeviceFromUser", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, userIndex, device, asLostDevice);
}
inline void UnityEngine::InputSystem::Users::InputUser::UpdateControlSchemeMatch(int32_t  userIndex, bool  autoPairMissing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"UpdateControlSchemeMatch", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, userIndex, autoPairMissing);
}
inline int64_t UnityEngine::InputSystem::Users::InputUser::UpdatePlatformUserAccount(int32_t  userIndex, ::UnityEngine::InputSystem::InputDevice*  device)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"UpdatePlatformUserAccount", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, userIndex, device);
}
inline int64_t UnityEngine::InputSystem::Users::InputUser::QueryPairedPlatformUserAccount(::UnityEngine::InputSystem::InputDevice*  device, ::by_ref<::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>>  platformAccountHandle, ::by_ref<::StringW>  platformAccountName, ::by_ref<::StringW>  platformAccountId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"QueryPairedPlatformUserAccount", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, device, platformAccountHandle, platformAccountName, platformAccountId);
}
inline bool UnityEngine::InputSystem::Users::InputUser::InitiateUserAccountSelectionAtPlatformLevel(::UnityEngine::InputSystem::InputDevice*  device)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"InitiateUserAccountSelectionAtPlatformLevel", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, device);
}
inline void UnityEngine::InputSystem::Users::InputUser::OnActionChange(::System::Object*  obj, ::UnityEngine::InputSystem::InputActionChange  change)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"OnActionChange", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionChange>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, change);
}
inline void UnityEngine::InputSystem::Users::InputUser::OnDeviceChange(::UnityEngine::InputSystem::InputDevice*  device, ::UnityEngine::InputSystem::InputDeviceChange  change)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"OnDeviceChange", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDeviceChange>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, device, change);
}
inline int32_t UnityEngine::InputSystem::Users::InputUser::FindLostDevice(::UnityEngine::InputSystem::InputDevice*  device, int32_t  startIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"FindLostDevice", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, device, startIndex);
}
inline void UnityEngine::InputSystem::Users::InputUser::OnEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr, ::UnityEngine::InputSystem::InputDevice*  device)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"OnEvent", {}, {::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, eventPtr, device);
}
inline ::UnityEngine::InputSystem::Utilities::ISavedState* UnityEngine::InputSystem::Users::InputUser::SaveAndResetState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"SaveAndResetState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ISavedState*>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::Users::InputUser::HookIntoActionChange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"HookIntoActionChange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::Users::InputUser::UnhookFromActionChange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"UnhookFromActionChange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::Users::InputUser::HookIntoDeviceChange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"HookIntoDeviceChange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::Users::InputUser::UnhookFromDeviceChange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"UnhookFromDeviceChange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::Users::InputUser::HookIntoEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"HookIntoEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::Users::InputUser::UnhookFromDeviceStateChange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"UnhookFromDeviceStateChange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::Users::InputUser::DisposeAndResetGlobalState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"DisposeAndResetGlobalState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::Users::InputUser::ResetGlobals()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser>(),
                        {"ResetGlobals", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::Users::InputUser>"
constexpr  UnityEngine::InputSystem::Users::InputUser::operator ::System::IEquatable_1<::UnityEngine::InputSystem::Users::InputUser>*()  {
return static_cast<::System::IEquatable_1<::UnityEngine::InputSystem::Users::InputUser>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::InputSystem::Users::InputUser>"
constexpr ::System::IEquatable_1<::UnityEngine::InputSystem::Users::InputUser>* UnityEngine::InputSystem::Users::InputUser::i___System__IEquatable_1___UnityEngine__InputSystem__Users__InputUser_()  {
return static_cast<::System::IEquatable_1<::UnityEngine::InputSystem::Users::InputUser>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Id", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::InputSystem::Users::InputUser::InputUser(uint32_t  m_Id) noexcept  {
this->m_Id = m_Id;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Users::InputUser::InputUser()   {
}
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Users::InputUser___c::*)()>(&::UnityEngine::InputSystem::Users::InputUser___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xafd1208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser___c._SaveAndResetState_b__88_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Users::InputUser___c::*)(::by_ref<::GlobalNamespace::InputUser_GlobalState>)>(&::UnityEngine::InputSystem::Users::InputUser___c::_SaveAndResetState_b__88_0)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xafd1210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser___c*>(),
                        {"<SaveAndResetState>b__88_0", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::InputUser_GlobalState>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Users::InputUser___c._SaveAndResetState_b__88_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Users::InputUser___c::*)()>(&::UnityEngine::InputSystem::Users::InputUser___c::_SaveAndResetState_b__88_1)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xafd12a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser___c*>(),
                        {"<SaveAndResetState>b__88_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Users::InputUser___c::setStaticF___9(::UnityEngine::InputSystem::Users::InputUser___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::InputSystem::Users::InputUser___c*, "<>9", ::UnityEngine::InputSystem::Users::InputUser___c*>(std::forward<::UnityEngine::InputSystem::Users::InputUser___c*>(value));
}
inline ::UnityEngine::InputSystem::Users::InputUser___c* UnityEngine::InputSystem::Users::InputUser___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Users::InputUser___c*, "<>9", ::UnityEngine::InputSystem::Users::InputUser___c*>();
}
inline void UnityEngine::InputSystem::Users::InputUser___c::setStaticF___9__88_0(::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<::GlobalNamespace::InputUser_GlobalState>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<::GlobalNamespace::InputUser_GlobalState>*, "<>9__88_0", ::UnityEngine::InputSystem::Users::InputUser___c*>(std::forward<::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<::GlobalNamespace::InputUser_GlobalState>*>(value));
}
inline ::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<::GlobalNamespace::InputUser_GlobalState>* UnityEngine::InputSystem::Users::InputUser___c::getStaticF___9__88_0()  {
return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<::GlobalNamespace::InputUser_GlobalState>*, "<>9__88_0", ::UnityEngine::InputSystem::Users::InputUser___c*>();
}
inline void UnityEngine::InputSystem::Users::InputUser___c::setStaticF___9__88_1(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__88_1", ::UnityEngine::InputSystem::Users::InputUser___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* UnityEngine::InputSystem::Users::InputUser___c::getStaticF___9__88_1()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__88_1", ::UnityEngine::InputSystem::Users::InputUser___c*>();
}
inline void UnityEngine::InputSystem::Users::InputUser___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Users::InputUser___c::_SaveAndResetState_b__88_0(::by_ref<::GlobalNamespace::InputUser_GlobalState>  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser___c*>(),
                        {"<SaveAndResetState>b__88_0", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::InputUser_GlobalState>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void UnityEngine::InputSystem::Users::InputUser___c::_SaveAndResetState_b__88_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Users::InputUser___c*>(),
                        {"<SaveAndResetState>b__88_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Users::InputUser___c* UnityEngine::InputSystem::Users::InputUser___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Users::InputUser___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Users::InputUser___c::InputUser___c()   {
}
