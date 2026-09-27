#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionMap.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__CallbackArray_1_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_DeviceArray_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_Flags_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionRebindingExtensions_ParameterOverride_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBinding_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__IInputActionCollection2_def.hpp"
#include "UnityEngine/InputSystem/zzzz__IInputActionCollection_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionAsset_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_BindingJson_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_BindingOverrideJson_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_BindingOverrideListJson_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_DeviceArray_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_Flags_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_ReadActionJson_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_ReadFileJson_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_ReadMapJson_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_WriteActionJson_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_WriteFileJson_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_WriteMapJson_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_CallbackContext_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBinding_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf1300c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"get_name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_asset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionAsset> (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::get_asset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf13014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"get_asset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::get_id)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xaf1301c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"get_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_idDontGenerate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::get_idDontGenerate)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xaf10950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"get_idDontGenerate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::get_enabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaf0e650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"get_enabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_actions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction*> (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::get_actions)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xaf12c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"get_actions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_bindings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding> (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::get_bindings)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xaf130a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"get_bindings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.UnityEngine_InputSystem_IInputActionCollection2_get_bindings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>* (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::UnityEngine_InputSystem_IInputActionCollection2_get_bindings)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xaf13108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"UnityEngine.InputSystem.IInputActionCollection2.get_bindings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_controlSchemes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme> (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::get_controlSchemes)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xaf1316c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"get_controlSchemes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_bindingMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::get_bindingMask)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaf131f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"get_bindingMask", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.set_bindingMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>)>(&::UnityEngine::InputSystem::InputActionMap::set_bindingMask)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xaf13200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"set_bindingMask", {}, {::i2c::type_of<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_devices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::get_devices)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xaf0d6f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"get_devices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.set_devices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)(::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>)>(&::UnityEngine::InputSystem::InputActionMap::set_devices)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xaf13334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"set_devices", {}, {::i2c::type_of<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputAction* (::UnityEngine::InputSystem::InputActionMap::*)(::StringW)>(&::UnityEngine::InputSystem::InputActionMap::get_Item)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xaf13378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"get_Item", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.add_actionTriggered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)(::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*)>(&::UnityEngine::InputSystem::InputActionMap::add_actionTriggered)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaf13454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"add_actionTriggered", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.remove_actionTriggered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)(::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*)>(&::UnityEngine::InputSystem::InputActionMap::remove_actionTriggered)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaf134ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"remove_actionTriggered", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xaf0d550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)(::StringW)>(&::UnityEngine::InputSystem::InputActionMap::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xaf13504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::Dispose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaf13530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.FindActionIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionMap::*)(::StringW)>(&::UnityEngine::InputSystem::InputActionMap::FindActionIndex)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0xaf13544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"FindActionIndex", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.SetUpActionLookupTable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::SetUpActionLookupTable)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xaf13744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"SetUpActionLookupTable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.ClearActionLookupTable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::ClearActionLookupTable)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaf13870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"ClearActionLookupTable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.FindActionIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionMap::*)(::System::Guid)>(&::UnityEngine::InputSystem::InputActionMap::FindActionIndex)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xaf138c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"FindActionIndex", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.FindAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputAction* (::UnityEngine::InputSystem::InputActionMap::*)(::StringW, bool)>(&::UnityEngine::InputSystem::InputActionMap::FindAction)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xaf1049c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"FindAction", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.FindAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputAction* (::UnityEngine::InputSystem::InputActionMap::*)(::System::Guid)>(&::UnityEngine::InputSystem::InputActionMap::FindAction)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xaf10aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"FindAction", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.IsUsableWithDevice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionMap::*)(::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::InputActionMap::IsUsableWithDevice)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xaf10e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"IsUsableWithDevice", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.Enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::Enable)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xaf110bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"Enable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.Disable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::Disable)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xaf1125c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"Disable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionMap* (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::Clone)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0xaf1395c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"Clone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.System_ICloneable_Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::System_ICloneable_Clone)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaf13bb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"System.ICloneable.Clone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionMap::*)(::UnityEngine::InputSystem::InputAction*)>(&::UnityEngine::InputSystem::InputActionMap::Contains)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xaf13bbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"Contains", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::ToString)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xaf13be8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                    {::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>* (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xaf13cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaf13d54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_needToResolveBindings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::get_needToResolveBindings)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaf13d58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"get_needToResolveBindings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.set_needToResolveBindings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)(bool)>(&::UnityEngine::InputSystem::InputActionMap::set_needToResolveBindings)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaf13d64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"set_needToResolveBindings", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_bindingResolutionNeedsFullReResolve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::get_bindingResolutionNeedsFullReResolve)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaf13d74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"get_bindingResolutionNeedsFullReResolve", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.set_bindingResolutionNeedsFullReResolve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)(bool)>(&::UnityEngine::InputSystem::InputActionMap::set_bindingResolutionNeedsFullReResolve)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xaf13d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"set_bindingResolutionNeedsFullReResolve", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_controlsForEachActionInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::get_controlsForEachActionInitialized)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaf13da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"get_controlsForEachActionInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.set_controlsForEachActionInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)(bool)>(&::UnityEngine::InputSystem::InputActionMap::set_controlsForEachActionInitialized)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xaf13dac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"set_controlsForEachActionInitialized", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_bindingsForEachActionInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::get_bindingsForEachActionInitialized)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaf13dcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"get_bindingsForEachActionInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.set_bindingsForEachActionInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)(bool)>(&::UnityEngine::InputSystem::InputActionMap::set_bindingsForEachActionInitialized)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xaf13dd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"set_bindingsForEachActionInitialized", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.GetBindingsForSingleAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding> (::UnityEngine::InputSystem::InputActionMap::*)(::UnityEngine::InputSystem::InputAction*)>(&::UnityEngine::InputSystem::InputActionMap::GetBindingsForSingleAction)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xaf0bcc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"GetBindingsForSingleAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.GetControlsForSingleAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*> (::UnityEngine::InputSystem::InputActionMap::*)(::UnityEngine::InputSystem::InputAction*)>(&::UnityEngine::InputSystem::InputActionMap::GetControlsForSingleAction)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xaf0bdc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"GetControlsForSingleAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.SetUpPerActionControlAndBindingArrays
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::SetUpPerActionControlAndBindingArrays)> {
  constexpr static std::size_t size = 0x678;
  constexpr static std::size_t addrs = 0xaf13df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"SetUpPerActionControlAndBindingArrays", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.OnWantToChangeSetup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::OnWantToChangeSetup)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0xaf114a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"OnWantToChangeSetup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.OnSetupChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::OnSetupChanged)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0xaf11798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"OnSetupChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.OnBindingModified
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::OnBindingModified)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xaf144d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"OnBindingModified", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.ClearCachedActionData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)(bool)>(&::UnityEngine::InputSystem::InputActionMap::ClearCachedActionData)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xaf14470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"ClearCachedActionData", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.GenerateId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::GenerateId)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xaf13064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"GenerateId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.LazyResolveBindings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionMap::*)(bool)>(&::UnityEngine::InputSystem::InputActionMap::LazyResolveBindings)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xaf0bba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"LazyResolveBindings", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.ResolveBindingsIfNecessary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::ResolveBindingsIfNecessary)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xaf0bd8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"ResolveBindingsIfNecessary", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.ResolveBindings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::ResolveBindings)> {
  constexpr static std::size_t size = 0xba4;
  constexpr static std::size_t addrs = 0xaf144f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"ResolveBindings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.FindBinding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionMap::*)(::UnityEngine::InputSystem::InputBinding, ::by_ref<::UnityEngine::InputSystem::InputAction*>)>(&::UnityEngine::InputSystem::InputActionMap::FindBinding)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xaf10698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"FindBinding", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputBinding>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputAction*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.FindBindingRelativeToMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionMap::*)(::UnityEngine::InputSystem::InputBinding)>(&::UnityEngine::InputSystem::InputActionMap::FindBindingRelativeToMap)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xaf15150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"FindBindingRelativeToMap", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputBinding>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.FromJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::InputSystem::InputActionMap*> (*)(::StringW)>(&::UnityEngine::InputSystem::InputActionMap::FromJson)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xaf15208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"FromJson", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputActionMap*>*)>(&::UnityEngine::InputSystem::InputActionMap::ToJson)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xaf152b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"ToJson", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputActionMap*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::ToJson)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xaf1536c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"ToJson", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.OnBeforeSerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaf15484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.OnAfterDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xaf15488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_Name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Name;
}
constexpr ::StringW const& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_Name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Name;
}
constexpr void UnityEngine::InputSystem::InputActionMap::__cordl_internal_set_m_Name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Name = value;
}
constexpr ::StringW& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_Id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Id;
}
constexpr ::StringW const& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_Id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Id;
}
constexpr void UnityEngine::InputSystem::InputActionMap::__cordl_internal_set_m_Id(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Id = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset>& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_Asset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Asset;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset> const& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_Asset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Asset;
}
constexpr void UnityEngine::InputSystem::InputActionMap::__cordl_internal_set_m_Asset(::UnityW<::UnityEngine::InputSystem::InputActionAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Asset = value;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputAction*>& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_Actions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Actions;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputAction*> const& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_Actions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Actions;
}
constexpr void UnityEngine::InputSystem::InputActionMap::__cordl_internal_set_m_Actions(::ArrayW<::UnityEngine::InputSystem::InputAction*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Actions = value;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputBinding>& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_Bindings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Bindings;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputBinding> const& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_Bindings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Bindings;
}
constexpr void UnityEngine::InputSystem::InputActionMap::__cordl_internal_set_m_Bindings(::ArrayW<::UnityEngine::InputSystem::InputBinding>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Bindings = value;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputBinding>& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_BindingsForEachAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BindingsForEachAction;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputBinding> const& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_BindingsForEachAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BindingsForEachAction;
}
constexpr void UnityEngine::InputSystem::InputActionMap::__cordl_internal_set_m_BindingsForEachAction(::ArrayW<::UnityEngine::InputSystem::InputBinding>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BindingsForEachAction = value;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl*>& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_ControlsForEachAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ControlsForEachAction;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl*> const& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_ControlsForEachAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ControlsForEachAction;
}
constexpr void UnityEngine::InputSystem::InputActionMap::__cordl_internal_set_m_ControlsForEachAction(::ArrayW<::UnityEngine::InputSystem::InputControl*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ControlsForEachAction = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_EnabledActionsCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnabledActionsCount;
}
constexpr int32_t const& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_EnabledActionsCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnabledActionsCount;
}
constexpr void UnityEngine::InputSystem::InputActionMap::__cordl_internal_set_m_EnabledActionsCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EnabledActionsCount = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_SingletonAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SingletonAction;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_SingletonAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SingletonAction;
}
constexpr void UnityEngine::InputSystem::InputActionMap::__cordl_internal_set_m_SingletonAction(::UnityEngine::InputSystem::InputAction*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SingletonAction = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_MapIndexInState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MapIndexInState;
}
constexpr int32_t const& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_MapIndexInState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MapIndexInState;
}
constexpr void UnityEngine::InputSystem::InputActionMap::__cordl_internal_set_m_MapIndexInState(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MapIndexInState = value;
}
constexpr ::UnityEngine::InputSystem::InputActionState*& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_State()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_State;
}
constexpr ::UnityEngine::InputSystem::InputActionState* const& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_State() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_State;
}
constexpr void UnityEngine::InputSystem::InputActionMap::__cordl_internal_set_m_State(::UnityEngine::InputSystem::InputActionState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_State = value;
}
constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_BindingMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BindingMask;
}
constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> const& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_BindingMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BindingMask;
}
constexpr void UnityEngine::InputSystem::InputActionMap::__cordl_internal_set_m_BindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BindingMask = value;
}
constexpr ::GlobalNamespace::InputActionMap_Flags& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_Flags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Flags;
}
constexpr ::GlobalNamespace::InputActionMap_Flags const& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_Flags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Flags;
}
constexpr void UnityEngine::InputSystem::InputActionMap::__cordl_internal_set_m_Flags(::GlobalNamespace::InputActionMap_Flags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Flags = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_ParameterOverridesCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ParameterOverridesCount;
}
constexpr int32_t const& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_ParameterOverridesCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ParameterOverridesCount;
}
constexpr void UnityEngine::InputSystem::InputActionMap::__cordl_internal_set_m_ParameterOverridesCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ParameterOverridesCount = value;
}
constexpr ::ArrayW<::GlobalNamespace::InputActionRebindingExtensions_ParameterOverride>& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_ParameterOverrides()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ParameterOverrides;
}
constexpr ::ArrayW<::GlobalNamespace::InputActionRebindingExtensions_ParameterOverride> const& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_ParameterOverrides() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ParameterOverrides;
}
constexpr void UnityEngine::InputSystem::InputActionMap::__cordl_internal_set_m_ParameterOverrides(::ArrayW<::GlobalNamespace::InputActionRebindingExtensions_ParameterOverride>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ParameterOverrides = value;
}
constexpr ::GlobalNamespace::InputActionMap_DeviceArray& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_Devices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Devices;
}
constexpr ::GlobalNamespace::InputActionMap_DeviceArray const& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_Devices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Devices;
}
constexpr void UnityEngine::InputSystem::InputActionMap::__cordl_internal_set_m_Devices(::GlobalNamespace::InputActionMap_DeviceArray  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Devices = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*>& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_ActionCallbacks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActionCallbacks;
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*> const& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_ActionCallbacks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActionCallbacks;
}
constexpr void UnityEngine::InputSystem::InputActionMap::__cordl_internal_set_m_ActionCallbacks(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ActionCallbacks = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_ActionIndexByNameOrId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActionIndexByNameOrId;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* const& UnityEngine::InputSystem::InputActionMap::__cordl_internal_get_m_ActionIndexByNameOrId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActionIndexByNameOrId;
}
constexpr void UnityEngine::InputSystem::InputActionMap::__cordl_internal_set_m_ActionIndexByNameOrId(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ActionIndexByNameOrId = value;
}
inline void UnityEngine::InputSystem::InputActionMap::setStaticF_k_ResolveBindingsProfilerMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_ResolveBindingsProfilerMarker", ::UnityEngine::InputSystem::InputActionMap*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::InputSystem::InputActionMap::getStaticF_k_ResolveBindingsProfilerMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_ResolveBindingsProfilerMarker", ::UnityEngine::InputSystem::InputActionMap*>();
}
inline void UnityEngine::InputSystem::InputActionMap::setStaticF_s_DeferBindingResolution(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_DeferBindingResolution", ::UnityEngine::InputSystem::InputActionMap*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::InputSystem::InputActionMap::getStaticF_s_DeferBindingResolution()  {
return ::cordl_internals::getStaticField<int32_t, "s_DeferBindingResolution", ::UnityEngine::InputSystem::InputActionMap*>();
}
inline void UnityEngine::InputSystem::InputActionMap::setStaticF_s_NeedToResolveBindings(bool  value)  {
::cordl_internals::setStaticField<bool, "s_NeedToResolveBindings", ::UnityEngine::InputSystem::InputActionMap*>(std::forward<bool>(value));
}
inline bool UnityEngine::InputSystem::InputActionMap::getStaticF_s_NeedToResolveBindings()  {
return ::cordl_internals::getStaticField<bool, "s_NeedToResolveBindings", ::UnityEngine::InputSystem::InputActionMap*>();
}
inline ::StringW UnityEngine::InputSystem::InputActionMap::get_name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"get_name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionAsset> UnityEngine::InputSystem::InputActionMap::get_asset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"get_asset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionAsset>>(this, ___internal_method);
}
inline ::System::Guid UnityEngine::InputSystem::InputActionMap::get_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"get_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline ::System::Guid UnityEngine::InputSystem::InputActionMap::get_idDontGenerate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"get_idDontGenerate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputActionMap::get_enabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"get_enabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction*> UnityEngine::InputSystem::InputActionMap::get_actions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"get_actions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction*>>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding> UnityEngine::InputSystem::InputActionMap::get_bindings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"get_bindings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding>>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>* UnityEngine::InputSystem::InputActionMap::UnityEngine_InputSystem_IInputActionCollection2_get_bindings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"UnityEngine.InputSystem.IInputActionCollection2.get_bindings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>*>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme> UnityEngine::InputSystem::InputActionMap::get_controlSchemes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"get_controlSchemes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme>>(this, ___internal_method);
}
inline ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> UnityEngine::InputSystem::InputActionMap::get_bindingMask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"get_bindingMask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionMap::set_bindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"set_bindingMask", {}, {::i2c::type_of<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> UnityEngine::InputSystem::InputActionMap::get_devices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"get_devices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionMap::set_devices(::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"set_devices", {}, {::i2c::type_of<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::InputActionMap::get_Item(::StringW  actionNameOrId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"get_Item", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*>(this, ___internal_method, actionNameOrId);
}
inline void UnityEngine::InputSystem::InputActionMap::add_actionTriggered(::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"add_actionTriggered", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputActionMap::remove_actionTriggered(::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"remove_actionTriggered", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputActionMap::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionMap::_ctor(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void UnityEngine::InputSystem::InputActionMap::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::InputActionMap::FindActionIndex(::StringW  nameOrId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"FindActionIndex", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, nameOrId);
}
inline void UnityEngine::InputSystem::InputActionMap::SetUpActionLookupTable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"SetUpActionLookupTable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionMap::ClearActionLookupTable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"ClearActionLookupTable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::InputActionMap::FindActionIndex(::System::Guid  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"FindActionIndex", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, id);
}
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::InputActionMap::FindAction(::StringW  actionNameOrId, bool  throwIfNotFound)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"FindAction", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*>(this, ___internal_method, actionNameOrId, throwIfNotFound);
}
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::InputActionMap::FindAction(::System::Guid  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"FindAction", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*>(this, ___internal_method, id);
}
inline bool UnityEngine::InputSystem::InputActionMap::IsUsableWithDevice(::UnityEngine::InputSystem::InputDevice*  device)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"IsUsableWithDevice", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, device);
}
inline void UnityEngine::InputSystem::InputActionMap::Enable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"Enable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionMap::Disable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"Disable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputActionMap* UnityEngine::InputSystem::InputActionMap::Clone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"Clone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionMap*>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::InputSystem::InputActionMap::System_ICloneable_Clone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"System.ICloneable.Clone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputActionMap::Contains(::UnityEngine::InputSystem::InputAction*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"Contains", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, action);
}
inline ::StringW UnityEngine::InputSystem::InputActionMap::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>* UnityEngine::InputSystem::InputActionMap::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::InputSystem::InputActionMap::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputActionMap::get_needToResolveBindings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"get_needToResolveBindings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionMap::set_needToResolveBindings(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"set_needToResolveBindings", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputActionMap::get_bindingResolutionNeedsFullReResolve()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"get_bindingResolutionNeedsFullReResolve", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionMap::set_bindingResolutionNeedsFullReResolve(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"set_bindingResolutionNeedsFullReResolve", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputActionMap::get_controlsForEachActionInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"get_controlsForEachActionInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionMap::set_controlsForEachActionInitialized(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"set_controlsForEachActionInitialized", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputActionMap::get_bindingsForEachActionInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"get_bindingsForEachActionInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionMap::set_bindingsForEachActionInitialized(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"set_bindingsForEachActionInitialized", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding> UnityEngine::InputSystem::InputActionMap::GetBindingsForSingleAction(::UnityEngine::InputSystem::InputAction*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"GetBindingsForSingleAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding>>(this, ___internal_method, action);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*> UnityEngine::InputSystem::InputActionMap::GetControlsForSingleAction(::UnityEngine::InputSystem::InputAction*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"GetControlsForSingleAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*>>(this, ___internal_method, action);
}
inline void UnityEngine::InputSystem::InputActionMap::SetUpPerActionControlAndBindingArrays()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"SetUpPerActionControlAndBindingArrays", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionMap::OnWantToChangeSetup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"OnWantToChangeSetup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionMap::OnSetupChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"OnSetupChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionMap::OnBindingModified()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"OnBindingModified", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionMap::ClearCachedActionData(bool  onlyControls)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"ClearCachedActionData", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onlyControls);
}
inline void UnityEngine::InputSystem::InputActionMap::GenerateId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"GenerateId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputActionMap::LazyResolveBindings(bool  fullResolve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"LazyResolveBindings", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fullResolve);
}
inline bool UnityEngine::InputSystem::InputActionMap::ResolveBindingsIfNecessary()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"ResolveBindingsIfNecessary", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionMap::ResolveBindings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"ResolveBindings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::InputActionMap::FindBinding(::UnityEngine::InputSystem::InputBinding  mask, ::by_ref<::UnityEngine::InputSystem::InputAction*>  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"FindBinding", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputBinding>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputAction*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, mask, action);
}
inline int32_t UnityEngine::InputSystem::InputActionMap::FindBindingRelativeToMap(::UnityEngine::InputSystem::InputBinding  mask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"FindBindingRelativeToMap", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputBinding>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, mask);
}
inline ::ArrayW<::UnityEngine::InputSystem::InputActionMap*> UnityEngine::InputSystem::InputActionMap::FromJson(::StringW  json)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"FromJson", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::InputSystem::InputActionMap*>>(nullptr, ___internal_method, json);
}
inline ::StringW UnityEngine::InputSystem::InputActionMap::ToJson(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputActionMap*>*  maps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"ToJson", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputActionMap*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, maps);
}
inline ::StringW UnityEngine::InputSystem::InputActionMap::ToJson()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"ToJson", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionMap::OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionMap::OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionMap*>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputActionMap* UnityEngine::InputSystem::InputActionMap::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::InputActionMap*>());
}
inline ::UnityEngine::InputSystem::InputActionMap* UnityEngine::InputSystem::InputActionMap::New_ctor(::StringW  name)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::InputActionMap*>(name));
}
/// @brief Convert operator to "::System::ICloneable"
constexpr  UnityEngine::InputSystem::InputActionMap::operator ::System::ICloneable*() noexcept {
return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* UnityEngine::InputSystem::InputActionMap::i___System__ICloneable() noexcept {
return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr  UnityEngine::InputSystem::InputActionMap::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::InputSystem::InputActionMap::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::InputSystem::IInputActionCollection2"
constexpr  UnityEngine::InputSystem::InputActionMap::operator ::UnityEngine::InputSystem::IInputActionCollection2*() noexcept {
return static_cast<::UnityEngine::InputSystem::IInputActionCollection2*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::InputSystem::IInputActionCollection2"
constexpr ::UnityEngine::InputSystem::IInputActionCollection2* UnityEngine::InputSystem::InputActionMap::i___UnityEngine__InputSystem__IInputActionCollection2() noexcept {
return static_cast<::UnityEngine::InputSystem::IInputActionCollection2*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::InputSystem::IInputActionCollection"
constexpr  UnityEngine::InputSystem::InputActionMap::operator ::UnityEngine::InputSystem::IInputActionCollection*() noexcept {
return static_cast<::UnityEngine::InputSystem::IInputActionCollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::InputSystem::IInputActionCollection"
constexpr ::UnityEngine::InputSystem::IInputActionCollection* UnityEngine::InputSystem::InputActionMap::i___UnityEngine__InputSystem__IInputActionCollection() noexcept {
return static_cast<::UnityEngine::InputSystem::IInputActionCollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>"
constexpr  UnityEngine::InputSystem::InputActionMap::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>* UnityEngine::InputSystem::InputActionMap::i___System__Collections__Generic__IEnumerable_1___UnityEngine__InputSystem__InputAction__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  UnityEngine::InputSystem::InputActionMap::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::InputSystem::InputActionMap::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::InputSystem::InputActionMap::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::InputSystem::InputActionMap::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputActionMap::InputActionMap()   {
}
