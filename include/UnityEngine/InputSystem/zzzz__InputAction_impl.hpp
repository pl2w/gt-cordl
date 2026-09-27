#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputAction.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__CallbackArray_1_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionType_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_ActionFlags_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBinding_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionPhase_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_TriggerState_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionType_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_ActionFlags_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_CallbackContext_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBinding_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf0b85c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"get_name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionType (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf0b864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"get_type", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::get_id)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xaf0b86c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"get_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_idDontGenerate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::get_idDontGenerate)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xaf0b8cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"get_idDontGenerate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_expectedControlType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::get_expectedControlType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf0b914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"get_expectedControlType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.set_expectedControlType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputAction::*)(::StringW)>(&::UnityEngine::InputSystem::InputAction::set_expectedControlType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf0b91c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"set_expectedControlType", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_processors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::get_processors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf0b924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"get_processors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_interactions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::get_interactions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf0b92c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"get_interactions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_actionMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionMap* (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::get_actionMap)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xaf0b934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"get_actionMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_bindingMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::get_bindingMask)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaf0b974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"get_bindingMask", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.set_bindingMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputAction::*)(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>)>(&::UnityEngine::InputSystem::InputAction::set_bindingMask)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0xaf0b984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"set_bindingMask", {}, {::i2c::type_of<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_bindings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding> (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::get_bindings)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xaf0bc98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"get_bindings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_controls
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*> (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::get_controls)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xaf0bd48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"get_controls", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_phase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionPhase (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::get_phase)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xaf0be40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"get_phase", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_inProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::get_inProgress)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xaf0bee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"get_inProgress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::get_enabled)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xaf0bf24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"get_enabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.add_started
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputAction::*)(::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*)>(&::UnityEngine::InputSystem::InputAction::add_started)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaf0bf6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"add_started", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.remove_started
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputAction::*)(::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*)>(&::UnityEngine::InputSystem::InputAction::remove_started)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaf0bfc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"remove_started", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.add_canceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputAction::*)(::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*)>(&::UnityEngine::InputSystem::InputAction::add_canceled)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaf0c01c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"add_canceled", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.remove_canceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputAction::*)(::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*)>(&::UnityEngine::InputSystem::InputAction::remove_canceled)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaf0c074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"remove_canceled", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.add_performed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputAction::*)(::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*)>(&::UnityEngine::InputSystem::InputAction::add_performed)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaf0c0cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"add_performed", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.remove_performed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputAction::*)(::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*)>(&::UnityEngine::InputSystem::InputAction::remove_performed)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaf0c124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"remove_performed", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_triggered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::get_triggered)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaf0c17c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"get_triggered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_activeControl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControl* (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::get_activeControl)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xaf0c218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"get_activeControl", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_activeValueType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::get_activeValueType)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xaf0c2a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"get_activeValueType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_wantsInitialStateCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::get_wantsInitialStateCheck)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xaf0c32c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"get_wantsInitialStateCheck", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.set_wantsInitialStateCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputAction::*)(bool)>(&::UnityEngine::InputSystem::InputAction::set_wantsInitialStateCheck)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaf0c348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"set_wantsInitialStateCheck", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xaf0c358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputAction::*)(::StringW, ::UnityEngine::InputSystem::InputActionType, ::StringW, ::StringW, ::StringW, ::StringW)>(&::UnityEngine::InputSystem::InputAction::_ctor)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0xaf0c3ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xaf0c5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::ToString)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0xaf0c5cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                    {::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.Enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::Enable)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xaf0c89c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"Enable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.Disable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::Disable)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xaf0ca4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"Disable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputAction* (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::Clone)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xaf0cbdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"Clone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.System_ICloneable_Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::System_ICloneable_Clone)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaf0ccec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"System.ICloneable.Clone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.ReadValueAsObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::ReadValueAsObject)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xaf0ccf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"ReadValueAsObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.GetControlMagnitude
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::GetControlMagnitude)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xaf0cd8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"GetControlMagnitude", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::Reset)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xaf0cdf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.IsPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::IsPressed)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xaf0cec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"IsPressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.IsInProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::IsInProgress)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaf0cf18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"IsInProgress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.ExpectedFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::ExpectedFrame)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xaf0cf70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"ExpectedFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.WasPressedThisFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::WasPressedThisFrame)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xaf0cfe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"WasPressedThisFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.WasPressedThisDynamicUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::WasPressedThisDynamicUpdate)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaf0d07c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"WasPressedThisDynamicUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.WasReleasedThisFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::WasReleasedThisFrame)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xaf0d0d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"WasReleasedThisFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.WasReleasedThisDynamicUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::WasReleasedThisDynamicUpdate)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaf0d16c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"WasReleasedThisDynamicUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.WasPerformedThisFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::WasPerformedThisFrame)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xaf0c180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"WasPerformedThisFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.WasPerformedThisDynamicUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::WasPerformedThisDynamicUpdate)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaf0d1c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"WasPerformedThisDynamicUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.WasCompletedThisFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::WasCompletedThisFrame)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xaf0d21c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"WasCompletedThisFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.WasCompletedThisDynamicUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::WasCompletedThisDynamicUpdate)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaf0d2b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"WasCompletedThisDynamicUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.GetTimeoutCompletionPercentage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::GetTimeoutCompletionPercentage)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xaf0d30c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"GetTimeoutCompletionPercentage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_isSingletonAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::get_isSingletonAction)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xaf0b954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"get_isSingletonAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_currentState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputActionState_TriggerState (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::get_currentState)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xaf0be80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"get_currentState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.MakeSureIdIsInPlace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::MakeSureIdIsInPlace)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xaf0b8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"MakeSureIdIsInPlace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.GenerateId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::GenerateId)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xaf0d42c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"GenerateId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.GetOrCreateActionMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionMap* (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::GetOrCreateActionMap)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xaf0bb84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"GetOrCreateActionMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.CreateInternalActionMapForSingletonAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::CreateInternalActionMapForSingletonAction)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xaf0d470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"CreateInternalActionMapForSingletonAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.RequestInitialStateCheckOnEnabledAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::RequestInitialStateCheckOnEnabledAction)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xaf0d5c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"RequestInitialStateCheckOnEnabledAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.ActiveControlIsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputAction::*)(::UnityEngine::InputSystem::InputControl*)>(&::UnityEngine::InputSystem::InputAction::ActiveControlIsValid)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xaf0d604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"ActiveControlIsValid", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.FindEffectiveBindingMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::FindEffectiveBindingMask)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xaf0d7cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"FindEffectiveBindingMask", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.BindingIndexOnActionToBindingIndexOnMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputAction::*)(int32_t)>(&::UnityEngine::InputSystem::InputAction::BindingIndexOnActionToBindingIndexOnMap)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xaf0d85c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"BindingIndexOnActionToBindingIndexOnMap", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.BindingIndexOnMapToBindingIndexOnAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputAction::*)(int32_t)>(&::UnityEngine::InputSystem::InputAction::BindingIndexOnMapToBindingIndexOnAction)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xaf0d9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"BindingIndexOnMapToBindingIndexOnAction", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_Name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Name;
}
constexpr ::StringW const& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_Name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Name;
}
constexpr void UnityEngine::InputSystem::InputAction::__cordl_internal_set_m_Name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Name = value;
}
constexpr ::UnityEngine::InputSystem::InputActionType& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_Type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Type;
}
constexpr ::UnityEngine::InputSystem::InputActionType const& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_Type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Type;
}
constexpr void UnityEngine::InputSystem::InputAction::__cordl_internal_set_m_Type(::UnityEngine::InputSystem::InputActionType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Type = value;
}
constexpr ::StringW& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_ExpectedControlType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ExpectedControlType;
}
constexpr ::StringW const& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_ExpectedControlType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ExpectedControlType;
}
constexpr void UnityEngine::InputSystem::InputAction::__cordl_internal_set_m_ExpectedControlType(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ExpectedControlType = value;
}
constexpr ::StringW& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_Id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Id;
}
constexpr ::StringW const& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_Id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Id;
}
constexpr void UnityEngine::InputSystem::InputAction::__cordl_internal_set_m_Id(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Id = value;
}
constexpr ::StringW& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_Processors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Processors;
}
constexpr ::StringW const& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_Processors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Processors;
}
constexpr void UnityEngine::InputSystem::InputAction::__cordl_internal_set_m_Processors(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Processors = value;
}
constexpr ::StringW& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_Interactions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Interactions;
}
constexpr ::StringW const& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_Interactions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Interactions;
}
constexpr void UnityEngine::InputSystem::InputAction::__cordl_internal_set_m_Interactions(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Interactions = value;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputBinding>& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_SingletonActionBindings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SingletonActionBindings;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputBinding> const& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_SingletonActionBindings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SingletonActionBindings;
}
constexpr void UnityEngine::InputSystem::InputAction::__cordl_internal_set_m_SingletonActionBindings(::ArrayW<::UnityEngine::InputSystem::InputBinding>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SingletonActionBindings = value;
}
constexpr ::GlobalNamespace::InputAction_ActionFlags& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_Flags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Flags;
}
constexpr ::GlobalNamespace::InputAction_ActionFlags const& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_Flags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Flags;
}
constexpr void UnityEngine::InputSystem::InputAction::__cordl_internal_set_m_Flags(::GlobalNamespace::InputAction_ActionFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Flags = value;
}
constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_BindingMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BindingMask;
}
constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> const& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_BindingMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BindingMask;
}
constexpr void UnityEngine::InputSystem::InputAction::__cordl_internal_set_m_BindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BindingMask = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_BindingsStartIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BindingsStartIndex;
}
constexpr int32_t const& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_BindingsStartIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BindingsStartIndex;
}
constexpr void UnityEngine::InputSystem::InputAction::__cordl_internal_set_m_BindingsStartIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BindingsStartIndex = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_BindingsCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BindingsCount;
}
constexpr int32_t const& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_BindingsCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BindingsCount;
}
constexpr void UnityEngine::InputSystem::InputAction::__cordl_internal_set_m_BindingsCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BindingsCount = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_ControlStartIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ControlStartIndex;
}
constexpr int32_t const& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_ControlStartIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ControlStartIndex;
}
constexpr void UnityEngine::InputSystem::InputAction::__cordl_internal_set_m_ControlStartIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ControlStartIndex = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_ControlCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ControlCount;
}
constexpr int32_t const& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_ControlCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ControlCount;
}
constexpr void UnityEngine::InputSystem::InputAction::__cordl_internal_set_m_ControlCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ControlCount = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_ActionIndexInState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActionIndexInState;
}
constexpr int32_t const& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_ActionIndexInState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActionIndexInState;
}
constexpr void UnityEngine::InputSystem::InputAction::__cordl_internal_set_m_ActionIndexInState(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ActionIndexInState = value;
}
constexpr ::UnityEngine::InputSystem::InputActionMap*& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_ActionMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActionMap;
}
constexpr ::UnityEngine::InputSystem::InputActionMap* const& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_ActionMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActionMap;
}
constexpr void UnityEngine::InputSystem::InputAction::__cordl_internal_set_m_ActionMap(::UnityEngine::InputSystem::InputActionMap*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ActionMap = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*>& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_OnStarted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OnStarted;
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*> const& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_OnStarted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OnStarted;
}
constexpr void UnityEngine::InputSystem::InputAction::__cordl_internal_set_m_OnStarted(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OnStarted = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*>& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_OnCanceled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OnCanceled;
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*> const& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_OnCanceled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OnCanceled;
}
constexpr void UnityEngine::InputSystem::InputAction::__cordl_internal_set_m_OnCanceled(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OnCanceled = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*>& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_OnPerformed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OnPerformed;
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*> const& UnityEngine::InputSystem::InputAction::__cordl_internal_get_m_OnPerformed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OnPerformed;
}
constexpr void UnityEngine::InputSystem::InputAction::__cordl_internal_set_m_OnPerformed(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OnPerformed = value;
}
inline void UnityEngine::InputSystem::InputAction::setStaticF_k_InputActionEnableProfilerMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_InputActionEnableProfilerMarker", ::UnityEngine::InputSystem::InputAction*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::InputSystem::InputAction::getStaticF_k_InputActionEnableProfilerMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_InputActionEnableProfilerMarker", ::UnityEngine::InputSystem::InputAction*>();
}
inline void UnityEngine::InputSystem::InputAction::setStaticF_k_InputActionDisableProfilerMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_InputActionDisableProfilerMarker", ::UnityEngine::InputSystem::InputAction*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::InputSystem::InputAction::getStaticF_k_InputActionDisableProfilerMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_InputActionDisableProfilerMarker", ::UnityEngine::InputSystem::InputAction*>();
}
inline ::StringW UnityEngine::InputSystem::InputAction::get_name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"get_name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputActionType UnityEngine::InputSystem::InputAction::get_type()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"get_type", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionType>(this, ___internal_method);
}
inline ::System::Guid UnityEngine::InputSystem::InputAction::get_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"get_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline ::System::Guid UnityEngine::InputSystem::InputAction::get_idDontGenerate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"get_idDontGenerate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::InputAction::get_expectedControlType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"get_expectedControlType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputAction::set_expectedControlType(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"set_expectedControlType", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::InputSystem::InputAction::get_processors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"get_processors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::InputAction::get_interactions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"get_interactions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputActionMap* UnityEngine::InputSystem::InputAction::get_actionMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"get_actionMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionMap*>(this, ___internal_method);
}
inline ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> UnityEngine::InputSystem::InputAction::get_bindingMask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"get_bindingMask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputAction::set_bindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"set_bindingMask", {}, {::i2c::type_of<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding> UnityEngine::InputSystem::InputAction::get_bindings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"get_bindings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding>>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*> UnityEngine::InputSystem::InputAction::get_controls()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"get_controls", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*>>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputActionPhase UnityEngine::InputSystem::InputAction::get_phase()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"get_phase", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionPhase>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputAction::get_inProgress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"get_inProgress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputAction::get_enabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"get_enabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputAction::add_started(::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"add_started", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputAction::remove_started(::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"remove_started", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputAction::add_canceled(::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"add_canceled", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputAction::remove_canceled(::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"remove_canceled", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputAction::add_performed(::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"add_performed", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputAction::remove_performed(::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"remove_performed", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputAction::get_triggered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"get_triggered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputControl* UnityEngine::InputSystem::InputAction::get_activeControl()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"get_activeControl", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*>(this, ___internal_method);
}
inline ::System::Type* UnityEngine::InputSystem::InputAction::get_activeValueType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"get_activeValueType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputAction::get_wantsInitialStateCheck()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"get_wantsInitialStateCheck", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputAction::set_wantsInitialStateCheck(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"set_wantsInitialStateCheck", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputAction::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputAction::_ctor(::StringW  name, ::UnityEngine::InputSystem::InputActionType  type, ::StringW  binding, ::StringW  interactions, ::StringW  processors, ::StringW  expectedControlType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, type, binding, interactions, processors, expectedControlType);
}
inline void UnityEngine::InputSystem::InputAction::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::InputAction::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputAction::Enable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"Enable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputAction::Disable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"Disable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::InputAction::Clone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"Clone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::InputSystem::InputAction::System_ICloneable_Clone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"System.ICloneable.Clone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template<typename TValue>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue>)
inline TValue UnityEngine::InputSystem::InputAction::ReadValue()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                    {"ReadValue", {::i2c::class_of<TValue>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TValue>()}
                )));
return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::InputSystem::InputAction::ReadValueAsObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"ReadValueAsObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline float_t UnityEngine::InputSystem::InputAction::GetControlMagnitude()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"GetControlMagnitude", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputAction::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputAction::IsPressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"IsPressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputAction::IsInProgress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"IsInProgress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::InputAction::ExpectedFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"ExpectedFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputAction::WasPressedThisFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"WasPressedThisFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputAction::WasPressedThisDynamicUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"WasPressedThisDynamicUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputAction::WasReleasedThisFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"WasReleasedThisFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputAction::WasReleasedThisDynamicUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"WasReleasedThisDynamicUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputAction::WasPerformedThisFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"WasPerformedThisFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputAction::WasPerformedThisDynamicUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"WasPerformedThisDynamicUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputAction::WasCompletedThisFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"WasCompletedThisFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputAction::WasCompletedThisDynamicUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"WasCompletedThisDynamicUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t UnityEngine::InputSystem::InputAction::GetTimeoutCompletionPercentage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"GetTimeoutCompletionPercentage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputAction::get_isSingletonAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"get_isSingletonAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::InputActionState_TriggerState UnityEngine::InputSystem::InputAction::get_currentState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"get_currentState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputActionState_TriggerState>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::InputAction::MakeSureIdIsInPlace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"MakeSureIdIsInPlace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputAction::GenerateId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"GenerateId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputActionMap* UnityEngine::InputSystem::InputAction::GetOrCreateActionMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"GetOrCreateActionMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionMap*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputAction::CreateInternalActionMapForSingletonAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"CreateInternalActionMapForSingletonAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputAction::RequestInitialStateCheckOnEnabledAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"RequestInitialStateCheckOnEnabledAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputAction::ActiveControlIsValid(::UnityEngine::InputSystem::InputControl*  control)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"ActiveControlIsValid", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, control);
}
inline ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> UnityEngine::InputSystem::InputAction::FindEffectiveBindingMask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"FindEffectiveBindingMask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::InputAction::BindingIndexOnActionToBindingIndexOnMap(int32_t  indexOfBindingOnAction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"BindingIndexOnActionToBindingIndexOnMap", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, indexOfBindingOnAction);
}
inline int32_t UnityEngine::InputSystem::InputAction::BindingIndexOnMapToBindingIndexOnAction(int32_t  indexOfBindingOnMap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputAction*>(),
                        {"BindingIndexOnMapToBindingIndexOnAction", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, indexOfBindingOnMap);
}
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::InputAction::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::InputAction*>());
}
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::InputAction::New_ctor(::StringW  name, ::UnityEngine::InputSystem::InputActionType  type, ::StringW  binding, ::StringW  interactions, ::StringW  processors, ::StringW  expectedControlType)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::InputAction*>(name, type, binding, interactions, processors, expectedControlType));
}
/// @brief Convert operator to "::System::ICloneable"
constexpr  UnityEngine::InputSystem::InputAction::operator ::System::ICloneable*() noexcept {
return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* UnityEngine::InputSystem::InputAction::i___System__ICloneable() noexcept {
return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::InputSystem::InputAction::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::InputSystem::InputAction::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputAction::InputAction()   {
}
