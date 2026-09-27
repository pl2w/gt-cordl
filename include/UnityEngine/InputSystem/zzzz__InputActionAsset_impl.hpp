#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionAsset.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_DeviceArray_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionRebindingExtensions_ParameterOverride_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBinding_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionAsset_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__NamedValue_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__IInputActionCollection2_def.hpp"
#include "UnityEngine/InputSystem/zzzz__IInputActionCollection_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionAsset_ReadFileJson_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionAsset_WriteFileJsonNoName_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionAsset_WriteFileJson_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionAsset_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBinding_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.get_enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::get_enabled)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xaf0e490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"get_enabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.get_actionMaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputActionMap*> (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::get_actionMaps)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xaf0e5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"get_actionMaps", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.get_controlSchemes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme> (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::get_controlSchemes)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xaf0e660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"get_controlSchemes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.get_bindings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>* (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::get_bindings)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xaf0e6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"get_bindings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.get_bindingMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::get_bindingMask)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaf0e774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"get_bindingMask", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.set_bindingMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset::*)(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>)>(&::UnityEngine::InputSystem::InputActionAsset::set_bindingMask)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xaf0e784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"set_bindingMask", {}, {::i2c::type_of<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.get_devices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::get_devices)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xaf0e8f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"get_devices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.set_devices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset::*)(::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>)>(&::UnityEngine::InputSystem::InputActionAsset::set_devices)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xaf0e9d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"set_devices", {}, {::i2c::type_of<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputAction* (::UnityEngine::InputSystem::InputActionAsset::*)(::StringW)>(&::UnityEngine::InputSystem::InputActionAsset::get_Item)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xaf0eb94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"get_Item", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::ToJson)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xaf0ef6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"ToJson", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.LoadFromJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset::*)(::StringW)>(&::UnityEngine::InputSystem::InputActionAsset::LoadFromJson)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xaf0f418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"LoadFromJson", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.FromJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionAsset> (*)(::StringW)>(&::UnityEngine::InputSystem::InputActionAsset::FromJson)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xaf103e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"FromJson", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.FindAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputAction* (::UnityEngine::InputSystem::InputActionAsset::*)(::StringW, bool)>(&::UnityEngine::InputSystem::InputActionAsset::FindAction)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0xaf0ec14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"FindAction", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.FindBinding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionAsset::*)(::UnityEngine::InputSystem::InputBinding, ::by_ref<::UnityEngine::InputSystem::InputAction*>)>(&::UnityEngine::InputSystem::InputActionAsset::FindBinding)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xaf105b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"FindBinding", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputBinding>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputAction*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.FindActionMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionMap* (::UnityEngine::InputSystem::InputActionAsset::*)(::StringW, bool)>(&::UnityEngine::InputSystem::InputActionAsset::FindActionMap)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0xaf10790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"FindActionMap", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.FindActionMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionMap* (::UnityEngine::InputSystem::InputActionAsset::*)(::System::Guid)>(&::UnityEngine::InputSystem::InputActionAsset::FindActionMap)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xaf10998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"FindActionMap", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.FindAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputAction* (::UnityEngine::InputSystem::InputActionAsset::*)(::System::Guid)>(&::UnityEngine::InputSystem::InputActionAsset::FindAction)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xaf10a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"FindAction", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.FindControlSchemeIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionAsset::*)(::StringW)>(&::UnityEngine::InputSystem::InputActionAsset::FindControlSchemeIndex)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xaf10ae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"FindControlSchemeIndex", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.FindControlScheme
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme> (::UnityEngine::InputSystem::InputActionAsset::*)(::StringW)>(&::UnityEngine::InputSystem::InputActionAsset::FindControlScheme)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xaf10bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"FindControlScheme", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.IsUsableWithDevice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionAsset::*)(::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::InputActionAsset::IsUsableWithDevice)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xaf10ce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"IsUsableWithDevice", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.Enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::Enable)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xaf10f68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"Enable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.Disable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::Disable)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xaf11108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"Disable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionAsset::*)(::UnityEngine::InputSystem::InputAction*)>(&::UnityEngine::InputSystem::InputActionAsset::Contains)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xaf11288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"Contains", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>* (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::GetEnumerator)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xaf11314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaf113a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.MarkAsDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::MarkAsDirty)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaf113ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"MarkAsDirty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.IsEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::IsEmpty)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xaf113b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"IsEmpty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.OnWantToChangeSetup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::OnWantToChangeSetup)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xaf11420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"OnWantToChangeSetup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.OnSetupChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::OnSetupChanged)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xaf1170c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"OnSetupChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.ReResolveIfNecessary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset::*)(bool)>(&::UnityEngine::InputSystem::InputActionAsset::ReResolveIfNecessary)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xaf0e8b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"ReResolveIfNecessary", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.ResolveBindingsIfNecessary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::ResolveBindingsIfNecessary)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xaf11968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"ResolveBindingsIfNecessary", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::OnDestroy)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xaf11a08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.MigrateJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset::*)(::by_ref<::GlobalNamespace::InputActionAsset_ReadFileJson>)>(&::UnityEngine::InputSystem::InputActionAsset::MigrateJson)> {
  constexpr static std::size_t size = 0xe14;
  constexpr static std::size_t addrs = 0xaf0f4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"MigrateJson", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::InputActionAsset_ReadFileJson>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf11a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::InputSystem::InputActionMap*>& UnityEngine::InputSystem::InputActionAsset::__cordl_internal_get_m_ActionMaps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActionMaps;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputActionMap*> const& UnityEngine::InputSystem::InputActionAsset::__cordl_internal_get_m_ActionMaps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActionMaps;
}
constexpr void UnityEngine::InputSystem::InputActionAsset::__cordl_internal_set_m_ActionMaps(::ArrayW<::UnityEngine::InputSystem::InputActionMap*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ActionMaps = value;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputControlScheme>& UnityEngine::InputSystem::InputActionAsset::__cordl_internal_get_m_ControlSchemes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ControlSchemes;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputControlScheme> const& UnityEngine::InputSystem::InputActionAsset::__cordl_internal_get_m_ControlSchemes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ControlSchemes;
}
constexpr void UnityEngine::InputSystem::InputActionAsset::__cordl_internal_set_m_ControlSchemes(::ArrayW<::UnityEngine::InputSystem::InputControlScheme>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ControlSchemes = value;
}
constexpr bool& UnityEngine::InputSystem::InputActionAsset::__cordl_internal_get_m_IsProjectWide()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsProjectWide;
}
constexpr bool const& UnityEngine::InputSystem::InputActionAsset::__cordl_internal_get_m_IsProjectWide() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsProjectWide;
}
constexpr void UnityEngine::InputSystem::InputActionAsset::__cordl_internal_set_m_IsProjectWide(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IsProjectWide = value;
}
constexpr ::UnityEngine::InputSystem::InputActionState*& UnityEngine::InputSystem::InputActionAsset::__cordl_internal_get_m_SharedStateForAllMaps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SharedStateForAllMaps;
}
constexpr ::UnityEngine::InputSystem::InputActionState* const& UnityEngine::InputSystem::InputActionAsset::__cordl_internal_get_m_SharedStateForAllMaps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SharedStateForAllMaps;
}
constexpr void UnityEngine::InputSystem::InputActionAsset::__cordl_internal_set_m_SharedStateForAllMaps(::UnityEngine::InputSystem::InputActionState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SharedStateForAllMaps = value;
}
constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>& UnityEngine::InputSystem::InputActionAsset::__cordl_internal_get_m_BindingMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BindingMask;
}
constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> const& UnityEngine::InputSystem::InputActionAsset::__cordl_internal_get_m_BindingMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BindingMask;
}
constexpr void UnityEngine::InputSystem::InputActionAsset::__cordl_internal_set_m_BindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BindingMask = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputActionAsset::__cordl_internal_get_m_ParameterOverridesCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ParameterOverridesCount;
}
constexpr int32_t const& UnityEngine::InputSystem::InputActionAsset::__cordl_internal_get_m_ParameterOverridesCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ParameterOverridesCount;
}
constexpr void UnityEngine::InputSystem::InputActionAsset::__cordl_internal_set_m_ParameterOverridesCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ParameterOverridesCount = value;
}
constexpr ::ArrayW<::GlobalNamespace::InputActionRebindingExtensions_ParameterOverride>& UnityEngine::InputSystem::InputActionAsset::__cordl_internal_get_m_ParameterOverrides()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ParameterOverrides;
}
constexpr ::ArrayW<::GlobalNamespace::InputActionRebindingExtensions_ParameterOverride> const& UnityEngine::InputSystem::InputActionAsset::__cordl_internal_get_m_ParameterOverrides() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ParameterOverrides;
}
constexpr void UnityEngine::InputSystem::InputActionAsset::__cordl_internal_set_m_ParameterOverrides(::ArrayW<::GlobalNamespace::InputActionRebindingExtensions_ParameterOverride>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ParameterOverrides = value;
}
constexpr ::GlobalNamespace::InputActionMap_DeviceArray& UnityEngine::InputSystem::InputActionAsset::__cordl_internal_get_m_Devices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Devices;
}
constexpr ::GlobalNamespace::InputActionMap_DeviceArray const& UnityEngine::InputSystem::InputActionAsset::__cordl_internal_get_m_Devices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Devices;
}
constexpr void UnityEngine::InputSystem::InputActionAsset::__cordl_internal_set_m_Devices(::GlobalNamespace::InputActionMap_DeviceArray  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Devices = value;
}
inline bool UnityEngine::InputSystem::InputActionAsset::get_enabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"get_enabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputActionMap*> UnityEngine::InputSystem::InputActionAsset::get_actionMaps()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"get_actionMaps", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputActionMap*>>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme> UnityEngine::InputSystem::InputActionAsset::get_controlSchemes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"get_controlSchemes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme>>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>* UnityEngine::InputSystem::InputActionAsset::get_bindings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"get_bindings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>*>(this, ___internal_method);
}
inline ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> UnityEngine::InputSystem::InputActionAsset::get_bindingMask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"get_bindingMask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionAsset::set_bindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"set_bindingMask", {}, {::i2c::type_of<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> UnityEngine::InputSystem::InputActionAsset::get_devices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"get_devices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionAsset::set_devices(::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"set_devices", {}, {::i2c::type_of<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::InputActionAsset::get_Item(::StringW  actionNameOrId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"get_Item", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*>(this, ___internal_method, actionNameOrId);
}
inline ::StringW UnityEngine::InputSystem::InputActionAsset::ToJson()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"ToJson", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionAsset::LoadFromJson(::StringW  json)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"LoadFromJson", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, json);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionAsset> UnityEngine::InputSystem::InputActionAsset::FromJson(::StringW  json)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"FromJson", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionAsset>>(nullptr, ___internal_method, json);
}
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::InputActionAsset::FindAction(::StringW  actionNameOrId, bool  throwIfNotFound)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"FindAction", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*>(this, ___internal_method, actionNameOrId, throwIfNotFound);
}
inline int32_t UnityEngine::InputSystem::InputActionAsset::FindBinding(::UnityEngine::InputSystem::InputBinding  mask, ::by_ref<::UnityEngine::InputSystem::InputAction*>  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"FindBinding", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputBinding>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputAction*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, mask, action);
}
inline ::UnityEngine::InputSystem::InputActionMap* UnityEngine::InputSystem::InputActionAsset::FindActionMap(::StringW  nameOrId, bool  throwIfNotFound)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"FindActionMap", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionMap*>(this, ___internal_method, nameOrId, throwIfNotFound);
}
inline ::UnityEngine::InputSystem::InputActionMap* UnityEngine::InputSystem::InputActionAsset::FindActionMap(::System::Guid  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"FindActionMap", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionMap*>(this, ___internal_method, id);
}
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::InputActionAsset::FindAction(::System::Guid  guid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"FindAction", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*>(this, ___internal_method, guid);
}
inline int32_t UnityEngine::InputSystem::InputActionAsset::FindControlSchemeIndex(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"FindControlSchemeIndex", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, name);
}
inline ::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme> UnityEngine::InputSystem::InputActionAsset::FindControlScheme(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"FindControlScheme", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme>>(this, ___internal_method, name);
}
inline bool UnityEngine::InputSystem::InputActionAsset::IsUsableWithDevice(::UnityEngine::InputSystem::InputDevice*  device)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"IsUsableWithDevice", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, device);
}
inline void UnityEngine::InputSystem::InputActionAsset::Enable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"Enable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionAsset::Disable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"Disable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputActionAsset::Contains(::UnityEngine::InputSystem::InputAction*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"Contains", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, action);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>* UnityEngine::InputSystem::InputActionAsset::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::InputSystem::InputActionAsset::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionAsset::MarkAsDirty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"MarkAsDirty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputActionAsset::IsEmpty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"IsEmpty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionAsset::OnWantToChangeSetup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"OnWantToChangeSetup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionAsset::OnSetupChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"OnSetupChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionAsset::ReResolveIfNecessary(bool  fullResolve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"ReResolveIfNecessary", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fullResolve);
}
inline void UnityEngine::InputSystem::InputActionAsset::ResolveBindingsIfNecessary()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"ResolveBindingsIfNecessary", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionAsset::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionAsset::MigrateJson(::by_ref<::GlobalNamespace::InputActionAsset_ReadFileJson>  parsedJson)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {"MigrateJson", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::InputActionAsset_ReadFileJson>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parsedJson);
}
inline void UnityEngine::InputSystem::InputActionAsset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputActionAsset* UnityEngine::InputSystem::InputActionAsset::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::InputActionAsset*>());
}
/// @brief Convert operator to "::UnityEngine::InputSystem::IInputActionCollection2"
constexpr  UnityEngine::InputSystem::InputActionAsset::operator ::UnityEngine::InputSystem::IInputActionCollection2*() noexcept {
return static_cast<::UnityEngine::InputSystem::IInputActionCollection2*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::InputSystem::IInputActionCollection2"
constexpr ::UnityEngine::InputSystem::IInputActionCollection2* UnityEngine::InputSystem::InputActionAsset::i___UnityEngine__InputSystem__IInputActionCollection2() noexcept {
return static_cast<::UnityEngine::InputSystem::IInputActionCollection2*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::InputSystem::IInputActionCollection"
constexpr  UnityEngine::InputSystem::InputActionAsset::operator ::UnityEngine::InputSystem::IInputActionCollection*() noexcept {
return static_cast<::UnityEngine::InputSystem::IInputActionCollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::InputSystem::IInputActionCollection"
constexpr ::UnityEngine::InputSystem::IInputActionCollection* UnityEngine::InputSystem::InputActionAsset::i___UnityEngine__InputSystem__IInputActionCollection() noexcept {
return static_cast<::UnityEngine::InputSystem::IInputActionCollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>"
constexpr  UnityEngine::InputSystem::InputActionAsset::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>* UnityEngine::InputSystem::InputActionAsset::i___System__Collections__Generic__IEnumerable_1___UnityEngine__InputSystem__InputAction__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  UnityEngine::InputSystem::InputActionAsset::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::InputSystem::InputActionAsset::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputActionAsset::InputActionAsset()   {
}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::*)(int32_t)>(&::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xaf0e740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::*)()>(&::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaf12d38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::*)()>(&::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::MoveNext)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xaf12d3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9.System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputBinding__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputBinding (::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::*)()>(&::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputBinding__get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaf12eb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9*>(),
                        {"System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputBinding>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::*)()>(&::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xaf12ec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::*)()>(&::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xaf12f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9.System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputBinding__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBinding>* (::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::*)()>(&::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputBinding__GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xaf12f64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9*>(),
                        {"System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputBinding>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::*)()>(&::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaf13008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::UnityEngine::InputSystem::InputBinding& UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::UnityEngine::InputSystem::InputBinding const& UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::__cordl_internal_set___2__current(::UnityEngine::InputSystem::InputBinding  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr int32_t const& UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr void UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset>& UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset> const& UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::__cordl_internal_set___4__this(::UnityW<::UnityEngine::InputSystem::InputActionAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::__cordl_internal_get__numActionMaps_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____numActionMaps_5__2;
}
constexpr int32_t const& UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::__cordl_internal_get__numActionMaps_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____numActionMaps_5__2;
}
constexpr void UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::__cordl_internal_set__numActionMaps_5__2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____numActionMaps_5__2 = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::__cordl_internal_get__i_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__3;
}
constexpr int32_t const& UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::__cordl_internal_get__i_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__3;
}
constexpr void UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::__cordl_internal_set__i_5__3(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____i_5__3 = value;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputBinding>& UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::__cordl_internal_get__bindings_5__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bindings_5__4;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputBinding> const& UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::__cordl_internal_get__bindings_5__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bindings_5__4;
}
constexpr void UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::__cordl_internal_set__bindings_5__4(::ArrayW<::UnityEngine::InputSystem::InputBinding>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bindings_5__4 = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::__cordl_internal_get__numBindings_5__5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____numBindings_5__5;
}
constexpr int32_t const& UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::__cordl_internal_get__numBindings_5__5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____numBindings_5__5;
}
constexpr void UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::__cordl_internal_set__numBindings_5__5(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____numBindings_5__5 = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::__cordl_internal_get__n_5__6()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____n_5__6;
}
constexpr int32_t const& UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::__cordl_internal_get__n_5__6() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____n_5__6;
}
constexpr void UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::__cordl_internal_set__n_5__6(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____n_5__6 = value;
}
inline void UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputBinding UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputBinding__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9*>(),
                        {"System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputBinding>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputBinding>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBinding>* UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputBinding__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9*>(),
                        {"System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputBinding>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBinding>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9* UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>"
constexpr  UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>* UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::i___System__Collections__Generic__IEnumerable_1___UnityEngine__InputSystem__InputBinding_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBinding>"
constexpr  UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBinding>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBinding>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBinding>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBinding>* UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::i___System__Collections__Generic__IEnumerator_1___UnityEngine__InputSystem__InputBinding_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBinding>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9::InputActionAsset__get_bindings_d__9()   {
}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33::*)(int32_t)>(&::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xaf11380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33::*)()>(&::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaf12b5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33::*)()>(&::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33::MoveNext)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xaf12b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33.System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputAction__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputAction* (::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33::*)()>(&::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33::System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputAction__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf12cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33*>(),
                        {"System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputAction>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33::*)()>(&::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xaf12cf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33::*)()>(&::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf12d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33::__cordl_internal_set___2__current(::UnityEngine::InputSystem::InputAction*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset>& UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset> const& UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33::__cordl_internal_set___4__this(::UnityW<::UnityEngine::InputSystem::InputActionAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33::__cordl_internal_get__i_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__2;
}
constexpr int32_t const& UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33::__cordl_internal_get__i_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__2;
}
constexpr void UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33::__cordl_internal_set__i_5__2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____i_5__2 = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction*>& UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33::__cordl_internal_get__actions_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____actions_5__3;
}
constexpr ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction*> const& UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33::__cordl_internal_get__actions_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____actions_5__3;
}
constexpr void UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33::__cordl_internal_set__actions_5__3(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____actions_5__3 = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33::__cordl_internal_get__actionCount_5__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____actionCount_5__4;
}
constexpr int32_t const& UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33::__cordl_internal_get__actionCount_5__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____actionCount_5__4;
}
constexpr void UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33::__cordl_internal_set__actionCount_5__4(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____actionCount_5__4 = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33::__cordl_internal_get__n_5__5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____n_5__5;
}
constexpr int32_t const& UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33::__cordl_internal_get__n_5__5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____n_5__5;
}
constexpr void UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33::__cordl_internal_set__n_5__5(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____n_5__5 = value;
}
inline void UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33::System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputAction__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33*>(),
                        {"System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputAction>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33* UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>"
constexpr  UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33::operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>* UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33::i___System__Collections__Generic__IEnumerator_1___UnityEngine__InputSystem__InputAction__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33::InputActionAsset__GetEnumerator_d__33()   {
}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset___c::*)()>(&::UnityEngine::InputSystem::InputActionAsset___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf12a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset___c._MigrateJson_b__53_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::InputActionAsset___c::*)(::UnityEngine::InputSystem::Utilities::NamedValue)>(&::UnityEngine::InputSystem::InputActionAsset___c::_MigrateJson_b__53_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf12a78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset___c*>(),
                        {"<MigrateJson>b__53_0", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::NamedValue>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset___c._MigrateJson_b__53_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::InputActionAsset___c::*)(::UnityEngine::InputSystem::Utilities::NamedValue)>(&::UnityEngine::InputSystem::InputActionAsset___c::_MigrateJson_b__53_1)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xaf12a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset___c*>(),
                        {"<MigrateJson>b__53_1", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::NamedValue>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset___c._MigrateJson_b__53_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionAsset___c::*)(::System::Reflection::FieldInfo*)>(&::UnityEngine::InputSystem::InputActionAsset___c::_MigrateJson_b__53_2)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xaf12aac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset___c*>(),
                        {"<MigrateJson>b__53_2", {}, {::i2c::type_of<::System::Reflection::FieldInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset___c._MigrateJson_b__53_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::InputActionAsset___c::*)(::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>)>(&::UnityEngine::InputSystem::InputActionAsset___c::_MigrateJson_b__53_3)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xaf12ae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset___c*>(),
                        {"<MigrateJson>b__53_3", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::InputActionAsset___c::setStaticF___9(::UnityEngine::InputSystem::InputActionAsset___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::InputSystem::InputActionAsset___c*, "<>9", ::UnityEngine::InputSystem::InputActionAsset___c*>(std::forward<::UnityEngine::InputSystem::InputActionAsset___c*>(value));
}
inline ::UnityEngine::InputSystem::InputActionAsset___c* UnityEngine::InputSystem::InputActionAsset___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::InputActionAsset___c*, "<>9", ::UnityEngine::InputSystem::InputActionAsset___c*>();
}
inline void UnityEngine::InputSystem::InputActionAsset___c::setStaticF___9__53_0(::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue,::StringW>*, "<>9__53_0", ::UnityEngine::InputSystem::InputActionAsset___c*>(std::forward<::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue,::StringW>*>(value));
}
inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue,::StringW>* UnityEngine::InputSystem::InputActionAsset___c::getStaticF___9__53_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue,::StringW>*, "<>9__53_0", ::UnityEngine::InputSystem::InputActionAsset___c*>();
}
inline void UnityEngine::InputSystem::InputActionAsset___c::setStaticF___9__53_1(::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue,::StringW>*, "<>9__53_1", ::UnityEngine::InputSystem::InputActionAsset___c*>(std::forward<::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue,::StringW>*>(value));
}
inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue,::StringW>* UnityEngine::InputSystem::InputActionAsset___c::getStaticF___9__53_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue,::StringW>*, "<>9__53_1", ::UnityEngine::InputSystem::InputActionAsset___c*>();
}
inline void UnityEngine::InputSystem::InputActionAsset___c::setStaticF___9__53_2(::System::Func_2<::System::Reflection::FieldInfo*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Reflection::FieldInfo*,bool>*, "<>9__53_2", ::UnityEngine::InputSystem::InputActionAsset___c*>(std::forward<::System::Func_2<::System::Reflection::FieldInfo*,bool>*>(value));
}
inline ::System::Func_2<::System::Reflection::FieldInfo*,bool>* UnityEngine::InputSystem::InputActionAsset___c::getStaticF___9__53_2()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Reflection::FieldInfo*,bool>*, "<>9__53_2", ::UnityEngine::InputSystem::InputActionAsset___c*>();
}
inline void UnityEngine::InputSystem::InputActionAsset___c::setStaticF___9__53_3(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>,::StringW>*, "<>9__53_3", ::UnityEngine::InputSystem::InputActionAsset___c*>(std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>,::StringW>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>,::StringW>* UnityEngine::InputSystem::InputActionAsset___c::getStaticF___9__53_3()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>,::StringW>*, "<>9__53_3", ::UnityEngine::InputSystem::InputActionAsset___c*>();
}
inline void UnityEngine::InputSystem::InputActionAsset___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::InputActionAsset___c::_MigrateJson_b__53_0(::UnityEngine::InputSystem::Utilities::NamedValue  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset___c*>(),
                        {"<MigrateJson>b__53_0", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::NamedValue>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, p);
}
inline ::StringW UnityEngine::InputSystem::InputActionAsset___c::_MigrateJson_b__53_1(::UnityEngine::InputSystem::Utilities::NamedValue  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset___c*>(),
                        {"<MigrateJson>b__53_1", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::NamedValue>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, p);
}
inline bool UnityEngine::InputSystem::InputActionAsset___c::_MigrateJson_b__53_2(::System::Reflection::FieldInfo*  f)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset___c*>(),
                        {"<MigrateJson>b__53_2", {}, {::i2c::type_of<::System::Reflection::FieldInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, f);
}
inline ::StringW UnityEngine::InputSystem::InputActionAsset___c::_MigrateJson_b__53_3(::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>  kv)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionAsset___c*>(),
                        {"<MigrateJson>b__53_3", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, kv);
}
inline ::UnityEngine::InputSystem::InputActionAsset___c* UnityEngine::InputSystem::InputActionAsset___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::InputActionAsset___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputActionAsset___c::InputActionAsset___c()   {
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputActionAsset_JsonVersion::InputActionAsset_JsonVersion()   {
}
