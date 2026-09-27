#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/DefaultInputActions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__DefaultInputActions_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__DefaultInputActions_PlayerActions_def.hpp"
#include "UnityEngine/InputSystem/zzzz__DefaultInputActions_UIActions_def.hpp"
#include "UnityEngine/InputSystem/zzzz__DefaultInputActions_def.hpp"
#include "UnityEngine/InputSystem/zzzz__IInputActionCollection2_def.hpp"
#include "UnityEngine/InputSystem/zzzz__IInputActionCollection_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionAsset_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_CallbackContext_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBinding_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::DefaultInputActions.get_asset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionAsset> (::UnityEngine::InputSystem::DefaultInputActions::*)()>(&::UnityEngine::InputSystem::DefaultInputActions::get_asset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xafb85c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions*>(),
                        {"get_asset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DefaultInputActions._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::DefaultInputActions::*)()>(&::UnityEngine::InputSystem::DefaultInputActions::_ctor)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0xafb85d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DefaultInputActions.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::DefaultInputActions::*)()>(&::UnityEngine::InputSystem::DefaultInputActions::Dispose)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xafb8a04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DefaultInputActions.get_bindingMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> (::UnityEngine::InputSystem::DefaultInputActions::*)()>(&::UnityEngine::InputSystem::DefaultInputActions::get_bindingMask)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xafb8a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions*>(),
                        {"get_bindingMask", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DefaultInputActions.set_bindingMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::DefaultInputActions::*)(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>)>(&::UnityEngine::InputSystem::DefaultInputActions::set_bindingMask)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xafb8a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions*>(),
                        {"set_bindingMask", {}, {::i2c::type_of<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DefaultInputActions.get_devices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> (::UnityEngine::InputSystem::DefaultInputActions::*)()>(&::UnityEngine::InputSystem::DefaultInputActions::get_devices)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xafb8abc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions*>(),
                        {"get_devices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DefaultInputActions.set_devices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::DefaultInputActions::*)(::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>)>(&::UnityEngine::InputSystem::DefaultInputActions::set_devices)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xafb8afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions*>(),
                        {"set_devices", {}, {::i2c::type_of<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DefaultInputActions.get_controlSchemes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme> (::UnityEngine::InputSystem::DefaultInputActions::*)()>(&::UnityEngine::InputSystem::DefaultInputActions::get_controlSchemes)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xafb8b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions*>(),
                        {"get_controlSchemes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DefaultInputActions.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::DefaultInputActions::*)(::UnityEngine::InputSystem::InputAction*)>(&::UnityEngine::InputSystem::DefaultInputActions::Contains)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xafb8b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions*>(),
                        {"Contains", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DefaultInputActions.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>* (::UnityEngine::InputSystem::DefaultInputActions::*)()>(&::UnityEngine::InputSystem::DefaultInputActions::GetEnumerator)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xafb8b68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions*>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DefaultInputActions.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::InputSystem::DefaultInputActions::*)()>(&::UnityEngine::InputSystem::DefaultInputActions::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xafb8b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DefaultInputActions.Enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::DefaultInputActions::*)()>(&::UnityEngine::InputSystem::DefaultInputActions::Enable)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xafb8b98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions*>(),
                        {"Enable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DefaultInputActions.Disable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::DefaultInputActions::*)()>(&::UnityEngine::InputSystem::DefaultInputActions::Disable)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xafb8bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions*>(),
                        {"Disable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DefaultInputActions.get_bindings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>* (::UnityEngine::InputSystem::DefaultInputActions::*)()>(&::UnityEngine::InputSystem::DefaultInputActions::get_bindings)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xafb8bc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions*>(),
                        {"get_bindings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DefaultInputActions.FindAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputAction* (::UnityEngine::InputSystem::DefaultInputActions::*)(::StringW, bool)>(&::UnityEngine::InputSystem::DefaultInputActions::FindAction)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xafb8be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions*>(),
                        {"FindAction", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DefaultInputActions.FindBinding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::DefaultInputActions::*)(::UnityEngine::InputSystem::InputBinding, ::by_ref<::UnityEngine::InputSystem::InputAction*>)>(&::UnityEngine::InputSystem::DefaultInputActions::FindBinding)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xafb8bfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions*>(),
                        {"FindBinding", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputBinding>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputAction*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DefaultInputActions.get_Player
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::DefaultInputActions_PlayerActions (::UnityEngine::InputSystem::DefaultInputActions::*)()>(&::UnityEngine::InputSystem::DefaultInputActions::get_Player)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xafb8c48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions*>(),
                        {"get_Player", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DefaultInputActions.get_UI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::DefaultInputActions_UIActions (::UnityEngine::InputSystem::DefaultInputActions::*)()>(&::UnityEngine::InputSystem::DefaultInputActions::get_UI)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xafb8c64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions*>(),
                        {"get_UI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DefaultInputActions.get_KeyboardMouseScheme
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControlScheme (::UnityEngine::InputSystem::DefaultInputActions::*)()>(&::UnityEngine::InputSystem::DefaultInputActions::get_KeyboardMouseScheme)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xafb8c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions*>(),
                        {"get_KeyboardMouseScheme", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DefaultInputActions.get_GamepadScheme
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControlScheme (::UnityEngine::InputSystem::DefaultInputActions::*)()>(&::UnityEngine::InputSystem::DefaultInputActions::get_GamepadScheme)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xafb8d48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions*>(),
                        {"get_GamepadScheme", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DefaultInputActions.get_TouchScheme
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControlScheme (::UnityEngine::InputSystem::DefaultInputActions::*)()>(&::UnityEngine::InputSystem::DefaultInputActions::get_TouchScheme)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xafb8e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions*>(),
                        {"get_TouchScheme", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DefaultInputActions.get_JoystickScheme
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControlScheme (::UnityEngine::InputSystem::DefaultInputActions::*)()>(&::UnityEngine::InputSystem::DefaultInputActions::get_JoystickScheme)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xafb8ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions*>(),
                        {"get_JoystickScheme", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DefaultInputActions.get_XRScheme
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControlScheme (::UnityEngine::InputSystem::DefaultInputActions::*)()>(&::UnityEngine::InputSystem::DefaultInputActions::get_XRScheme)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xafb8fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions*>(),
                        {"get_XRScheme", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset>& UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_get__asset_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asset_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset> const& UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_get__asset_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asset_k__BackingField;
}
constexpr void UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_set__asset_k__BackingField(::UnityW<::UnityEngine::InputSystem::InputActionAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____asset_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::InputActionMap*& UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_get_m_Player()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Player;
}
constexpr ::UnityEngine::InputSystem::InputActionMap* const& UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_get_m_Player() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Player;
}
constexpr void UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_set_m_Player(::UnityEngine::InputSystem::InputActionMap*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Player = value;
}
constexpr ::UnityEngine::InputSystem::DefaultInputActions_IPlayerActions*& UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_get_m_PlayerActionsCallbackInterface()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayerActionsCallbackInterface;
}
constexpr ::UnityEngine::InputSystem::DefaultInputActions_IPlayerActions* const& UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_get_m_PlayerActionsCallbackInterface() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayerActionsCallbackInterface;
}
constexpr void UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_set_m_PlayerActionsCallbackInterface(::UnityEngine::InputSystem::DefaultInputActions_IPlayerActions*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PlayerActionsCallbackInterface = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_get_m_Player_Move()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Player_Move;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_get_m_Player_Move() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Player_Move;
}
constexpr void UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_set_m_Player_Move(::UnityEngine::InputSystem::InputAction*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Player_Move = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_get_m_Player_Look()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Player_Look;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_get_m_Player_Look() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Player_Look;
}
constexpr void UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_set_m_Player_Look(::UnityEngine::InputSystem::InputAction*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Player_Look = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_get_m_Player_Fire()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Player_Fire;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_get_m_Player_Fire() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Player_Fire;
}
constexpr void UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_set_m_Player_Fire(::UnityEngine::InputSystem::InputAction*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Player_Fire = value;
}
constexpr ::UnityEngine::InputSystem::InputActionMap*& UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_get_m_UI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UI;
}
constexpr ::UnityEngine::InputSystem::InputActionMap* const& UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_get_m_UI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UI;
}
constexpr void UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_set_m_UI(::UnityEngine::InputSystem::InputActionMap*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UI = value;
}
constexpr ::UnityEngine::InputSystem::DefaultInputActions_IUIActions*& UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_get_m_UIActionsCallbackInterface()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIActionsCallbackInterface;
}
constexpr ::UnityEngine::InputSystem::DefaultInputActions_IUIActions* const& UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_get_m_UIActionsCallbackInterface() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIActionsCallbackInterface;
}
constexpr void UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_set_m_UIActionsCallbackInterface(::UnityEngine::InputSystem::DefaultInputActions_IUIActions*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UIActionsCallbackInterface = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_get_m_UI_Navigate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UI_Navigate;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_get_m_UI_Navigate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UI_Navigate;
}
constexpr void UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_set_m_UI_Navigate(::UnityEngine::InputSystem::InputAction*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UI_Navigate = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_get_m_UI_Submit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UI_Submit;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_get_m_UI_Submit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UI_Submit;
}
constexpr void UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_set_m_UI_Submit(::UnityEngine::InputSystem::InputAction*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UI_Submit = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_get_m_UI_Cancel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UI_Cancel;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_get_m_UI_Cancel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UI_Cancel;
}
constexpr void UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_set_m_UI_Cancel(::UnityEngine::InputSystem::InputAction*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UI_Cancel = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_get_m_UI_Point()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UI_Point;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_get_m_UI_Point() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UI_Point;
}
constexpr void UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_set_m_UI_Point(::UnityEngine::InputSystem::InputAction*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UI_Point = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_get_m_UI_Click()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UI_Click;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_get_m_UI_Click() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UI_Click;
}
constexpr void UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_set_m_UI_Click(::UnityEngine::InputSystem::InputAction*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UI_Click = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_get_m_UI_ScrollWheel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UI_ScrollWheel;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_get_m_UI_ScrollWheel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UI_ScrollWheel;
}
constexpr void UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_set_m_UI_ScrollWheel(::UnityEngine::InputSystem::InputAction*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UI_ScrollWheel = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_get_m_UI_MiddleClick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UI_MiddleClick;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_get_m_UI_MiddleClick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UI_MiddleClick;
}
constexpr void UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_set_m_UI_MiddleClick(::UnityEngine::InputSystem::InputAction*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UI_MiddleClick = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_get_m_UI_RightClick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UI_RightClick;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_get_m_UI_RightClick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UI_RightClick;
}
constexpr void UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_set_m_UI_RightClick(::UnityEngine::InputSystem::InputAction*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UI_RightClick = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_get_m_UI_TrackedDevicePosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UI_TrackedDevicePosition;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_get_m_UI_TrackedDevicePosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UI_TrackedDevicePosition;
}
constexpr void UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_set_m_UI_TrackedDevicePosition(::UnityEngine::InputSystem::InputAction*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UI_TrackedDevicePosition = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_get_m_UI_TrackedDeviceOrientation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UI_TrackedDeviceOrientation;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_get_m_UI_TrackedDeviceOrientation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UI_TrackedDeviceOrientation;
}
constexpr void UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_set_m_UI_TrackedDeviceOrientation(::UnityEngine::InputSystem::InputAction*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UI_TrackedDeviceOrientation = value;
}
constexpr int32_t& UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_get_m_KeyboardMouseSchemeIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_KeyboardMouseSchemeIndex;
}
constexpr int32_t const& UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_get_m_KeyboardMouseSchemeIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_KeyboardMouseSchemeIndex;
}
constexpr void UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_set_m_KeyboardMouseSchemeIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_KeyboardMouseSchemeIndex = value;
}
constexpr int32_t& UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_get_m_GamepadSchemeIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GamepadSchemeIndex;
}
constexpr int32_t const& UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_get_m_GamepadSchemeIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GamepadSchemeIndex;
}
constexpr void UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_set_m_GamepadSchemeIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GamepadSchemeIndex = value;
}
constexpr int32_t& UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_get_m_TouchSchemeIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TouchSchemeIndex;
}
constexpr int32_t const& UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_get_m_TouchSchemeIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TouchSchemeIndex;
}
constexpr void UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_set_m_TouchSchemeIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TouchSchemeIndex = value;
}
constexpr int32_t& UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_get_m_JoystickSchemeIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_JoystickSchemeIndex;
}
constexpr int32_t const& UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_get_m_JoystickSchemeIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_JoystickSchemeIndex;
}
constexpr void UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_set_m_JoystickSchemeIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_JoystickSchemeIndex = value;
}
constexpr int32_t& UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_get_m_XRSchemeIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_XRSchemeIndex;
}
constexpr int32_t const& UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_get_m_XRSchemeIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_XRSchemeIndex;
}
constexpr void UnityEngine::InputSystem::DefaultInputActions::__cordl_internal_set_m_XRSchemeIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_XRSchemeIndex = value;
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionAsset> UnityEngine::InputSystem::DefaultInputActions::get_asset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions*>(),
                        {"get_asset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionAsset>>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::DefaultInputActions::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::DefaultInputActions::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> UnityEngine::InputSystem::DefaultInputActions::get_bindingMask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions*>(),
                        {"get_bindingMask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::DefaultInputActions::set_bindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions*>(),
                        {"set_bindingMask", {}, {::i2c::type_of<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> UnityEngine::InputSystem::DefaultInputActions::get_devices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions*>(),
                        {"get_devices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::DefaultInputActions::set_devices(::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions*>(),
                        {"set_devices", {}, {::i2c::type_of<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme> UnityEngine::InputSystem::DefaultInputActions::get_controlSchemes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions*>(),
                        {"get_controlSchemes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme>>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::DefaultInputActions::Contains(::UnityEngine::InputSystem::InputAction*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions*>(),
                        {"Contains", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, action);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>* UnityEngine::InputSystem::DefaultInputActions::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::InputSystem::DefaultInputActions::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::DefaultInputActions::Enable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions*>(),
                        {"Enable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::DefaultInputActions::Disable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions*>(),
                        {"Disable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>* UnityEngine::InputSystem::DefaultInputActions::get_bindings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions*>(),
                        {"get_bindings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>*>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::DefaultInputActions::FindAction(::StringW  actionNameOrId, bool  throwIfNotFound)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions*>(),
                        {"FindAction", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*>(this, ___internal_method, actionNameOrId, throwIfNotFound);
}
inline int32_t UnityEngine::InputSystem::DefaultInputActions::FindBinding(::UnityEngine::InputSystem::InputBinding  bindingMask, ::by_ref<::UnityEngine::InputSystem::InputAction*>  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions*>(),
                        {"FindBinding", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputBinding>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputAction*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bindingMask, action);
}
inline ::GlobalNamespace::DefaultInputActions_PlayerActions UnityEngine::InputSystem::DefaultInputActions::get_Player()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions*>(),
                        {"get_Player", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DefaultInputActions_PlayerActions>(this, ___internal_method);
}
inline ::GlobalNamespace::DefaultInputActions_UIActions UnityEngine::InputSystem::DefaultInputActions::get_UI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions*>(),
                        {"get_UI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DefaultInputActions_UIActions>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputControlScheme UnityEngine::InputSystem::DefaultInputActions::get_KeyboardMouseScheme()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions*>(),
                        {"get_KeyboardMouseScheme", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlScheme>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputControlScheme UnityEngine::InputSystem::DefaultInputActions::get_GamepadScheme()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions*>(),
                        {"get_GamepadScheme", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlScheme>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputControlScheme UnityEngine::InputSystem::DefaultInputActions::get_TouchScheme()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions*>(),
                        {"get_TouchScheme", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlScheme>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputControlScheme UnityEngine::InputSystem::DefaultInputActions::get_JoystickScheme()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions*>(),
                        {"get_JoystickScheme", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlScheme>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputControlScheme UnityEngine::InputSystem::DefaultInputActions::get_XRScheme()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions*>(),
                        {"get_XRScheme", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlScheme>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::DefaultInputActions* UnityEngine::InputSystem::DefaultInputActions::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::DefaultInputActions*>());
}
/// @brief Convert operator to "::UnityEngine::InputSystem::IInputActionCollection2"
constexpr  UnityEngine::InputSystem::DefaultInputActions::operator ::UnityEngine::InputSystem::IInputActionCollection2*() noexcept {
return static_cast<::UnityEngine::InputSystem::IInputActionCollection2*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::InputSystem::IInputActionCollection2"
constexpr ::UnityEngine::InputSystem::IInputActionCollection2* UnityEngine::InputSystem::DefaultInputActions::i___UnityEngine__InputSystem__IInputActionCollection2() noexcept {
return static_cast<::UnityEngine::InputSystem::IInputActionCollection2*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::InputSystem::IInputActionCollection"
constexpr  UnityEngine::InputSystem::DefaultInputActions::operator ::UnityEngine::InputSystem::IInputActionCollection*() noexcept {
return static_cast<::UnityEngine::InputSystem::IInputActionCollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::InputSystem::IInputActionCollection"
constexpr ::UnityEngine::InputSystem::IInputActionCollection* UnityEngine::InputSystem::DefaultInputActions::i___UnityEngine__InputSystem__IInputActionCollection() noexcept {
return static_cast<::UnityEngine::InputSystem::IInputActionCollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>"
constexpr  UnityEngine::InputSystem::DefaultInputActions::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>* UnityEngine::InputSystem::DefaultInputActions::i___System__Collections__Generic__IEnumerable_1___UnityEngine__InputSystem__InputAction__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  UnityEngine::InputSystem::DefaultInputActions::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::InputSystem::DefaultInputActions::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::InputSystem::DefaultInputActions::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::InputSystem::DefaultInputActions::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::DefaultInputActions::DefaultInputActions()   {
}
//  Writing Method size for method: ::UnityEngine::InputSystem::DefaultInputActions_IUIActions.OnNavigate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::DefaultInputActions_IUIActions::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::InputSystem::DefaultInputActions_IUIActions::OnNavigate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions_IUIActions*>(),
                    {::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions_IUIActions*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DefaultInputActions_IUIActions.OnSubmit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::DefaultInputActions_IUIActions::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::InputSystem::DefaultInputActions_IUIActions::OnSubmit)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions_IUIActions*>(),
                    {::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions_IUIActions*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DefaultInputActions_IUIActions.OnCancel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::DefaultInputActions_IUIActions::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::InputSystem::DefaultInputActions_IUIActions::OnCancel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions_IUIActions*>(),
                    {::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions_IUIActions*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DefaultInputActions_IUIActions.OnPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::DefaultInputActions_IUIActions::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::InputSystem::DefaultInputActions_IUIActions::OnPoint)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions_IUIActions*>(),
                    {::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions_IUIActions*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DefaultInputActions_IUIActions.OnClick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::DefaultInputActions_IUIActions::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::InputSystem::DefaultInputActions_IUIActions::OnClick)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions_IUIActions*>(),
                    {::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions_IUIActions*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DefaultInputActions_IUIActions.OnScrollWheel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::DefaultInputActions_IUIActions::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::InputSystem::DefaultInputActions_IUIActions::OnScrollWheel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions_IUIActions*>(),
                    {::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions_IUIActions*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DefaultInputActions_IUIActions.OnMiddleClick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::DefaultInputActions_IUIActions::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::InputSystem::DefaultInputActions_IUIActions::OnMiddleClick)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions_IUIActions*>(),
                    {::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions_IUIActions*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DefaultInputActions_IUIActions.OnRightClick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::DefaultInputActions_IUIActions::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::InputSystem::DefaultInputActions_IUIActions::OnRightClick)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions_IUIActions*>(),
                    {::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions_IUIActions*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DefaultInputActions_IUIActions.OnTrackedDevicePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::DefaultInputActions_IUIActions::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::InputSystem::DefaultInputActions_IUIActions::OnTrackedDevicePosition)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions_IUIActions*>(),
                    {::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions_IUIActions*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DefaultInputActions_IUIActions.OnTrackedDeviceOrientation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::DefaultInputActions_IUIActions::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::InputSystem::DefaultInputActions_IUIActions::OnTrackedDeviceOrientation)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions_IUIActions*>(),
                    {::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions_IUIActions*>(), 9}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::DefaultInputActions_IUIActions::OnNavigate(::GlobalNamespace::InputAction_CallbackContext  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions_IUIActions*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::DefaultInputActions_IUIActions::OnSubmit(::GlobalNamespace::InputAction_CallbackContext  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions_IUIActions*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::DefaultInputActions_IUIActions::OnCancel(::GlobalNamespace::InputAction_CallbackContext  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions_IUIActions*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::DefaultInputActions_IUIActions::OnPoint(::GlobalNamespace::InputAction_CallbackContext  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions_IUIActions*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::DefaultInputActions_IUIActions::OnClick(::GlobalNamespace::InputAction_CallbackContext  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions_IUIActions*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::DefaultInputActions_IUIActions::OnScrollWheel(::GlobalNamespace::InputAction_CallbackContext  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions_IUIActions*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::DefaultInputActions_IUIActions::OnMiddleClick(::GlobalNamespace::InputAction_CallbackContext  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions_IUIActions*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::DefaultInputActions_IUIActions::OnRightClick(::GlobalNamespace::InputAction_CallbackContext  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions_IUIActions*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::DefaultInputActions_IUIActions::OnTrackedDevicePosition(::GlobalNamespace::InputAction_CallbackContext  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions_IUIActions*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::DefaultInputActions_IUIActions::OnTrackedDeviceOrientation(::GlobalNamespace::InputAction_CallbackContext  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions_IUIActions*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
//  Writing Method size for method: ::UnityEngine::InputSystem::DefaultInputActions_IPlayerActions.OnMove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::DefaultInputActions_IPlayerActions::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::InputSystem::DefaultInputActions_IPlayerActions::OnMove)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions_IPlayerActions*>(),
                    {::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions_IPlayerActions*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DefaultInputActions_IPlayerActions.OnLook
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::DefaultInputActions_IPlayerActions::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::InputSystem::DefaultInputActions_IPlayerActions::OnLook)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions_IPlayerActions*>(),
                    {::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions_IPlayerActions*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::DefaultInputActions_IPlayerActions.OnFire
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::DefaultInputActions_IPlayerActions::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::InputSystem::DefaultInputActions_IPlayerActions::OnFire)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions_IPlayerActions*>(),
                    {::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions_IPlayerActions*>(), 2}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::DefaultInputActions_IPlayerActions::OnMove(::GlobalNamespace::InputAction_CallbackContext  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions_IPlayerActions*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::DefaultInputActions_IPlayerActions::OnLook(::GlobalNamespace::InputAction_CallbackContext  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions_IPlayerActions*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::DefaultInputActions_IPlayerActions::OnFire(::GlobalNamespace::InputAction_CallbackContext  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::InputSystem::DefaultInputActions_IPlayerActions*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
