#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionSetupExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBinding_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionSetupExtensions_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionAsset_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionSetupExtensions_BindingSyntax_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionSetupExtensions_CompositeSyntax_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionSetupExtensions_ControlSchemeSyntax_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionSetupExtensions_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionType_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBinding_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionSetupExtensions.AddActionMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionMap* (*)(::UnityEngine::InputSystem::InputActionAsset*, ::StringW)>(&::UnityEngine::InputSystem::InputActionSetupExtensions::AddActionMap)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0xaf235a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"AddActionMap", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionAsset*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionSetupExtensions.AddActionMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputActionAsset*, ::UnityEngine::InputSystem::InputActionMap*)>(&::UnityEngine::InputSystem::InputActionSetupExtensions::AddActionMap)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0xaf23768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"AddActionMap", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionAsset*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionSetupExtensions.RemoveActionMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputActionAsset*, ::UnityEngine::InputSystem::InputActionMap*)>(&::UnityEngine::InputSystem::InputActionSetupExtensions::RemoveActionMap)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xaf239d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"RemoveActionMap", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionAsset*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionSetupExtensions.RemoveActionMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputActionAsset*, ::StringW)>(&::UnityEngine::InputSystem::InputActionSetupExtensions::RemoveActionMap)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xaf23b44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"RemoveActionMap", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionAsset*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionSetupExtensions.AddAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputAction* (*)(::UnityEngine::InputSystem::InputActionMap*, ::StringW, ::UnityEngine::InputSystem::InputActionType, ::StringW, ::StringW, ::StringW, ::StringW, ::StringW)>(&::UnityEngine::InputSystem::InputActionSetupExtensions::AddAction)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0xaf23c58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"AddAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionMap*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionSetupExtensions.RemoveAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputAction*)>(&::UnityEngine::InputSystem::InputActionSetupExtensions::RemoveAction)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0xaf2408c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"RemoveAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionSetupExtensions.RemoveAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputActionAsset*, ::StringW)>(&::UnityEngine::InputSystem::InputActionSetupExtensions::RemoveAction)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xaf24420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"RemoveAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionAsset*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionSetupExtensions.AddBinding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputActionSetupExtensions_BindingSyntax (*)(::UnityEngine::InputSystem::InputAction*, ::StringW, ::StringW, ::StringW, ::StringW)>(&::UnityEngine::InputSystem::InputActionSetupExtensions::AddBinding)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xaf23fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"AddBinding", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionSetupExtensions.AddBinding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputActionSetupExtensions_BindingSyntax (*)(::UnityEngine::InputSystem::InputAction*, ::UnityEngine::InputSystem::InputControl*)>(&::UnityEngine::InputSystem::InputActionSetupExtensions::AddBinding)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xaf2461c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"AddBinding", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionSetupExtensions.AddBinding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputActionSetupExtensions_BindingSyntax (*)(::UnityEngine::InputSystem::InputAction*, ::UnityEngine::InputSystem::InputBinding)>(&::UnityEngine::InputSystem::InputActionSetupExtensions::AddBinding)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xaf2452c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"AddBinding", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputBinding>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionSetupExtensions.AddBinding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputActionSetupExtensions_BindingSyntax (*)(::UnityEngine::InputSystem::InputActionMap*, ::StringW, ::StringW, ::StringW, ::StringW, ::StringW)>(&::UnityEngine::InputSystem::InputActionSetupExtensions::AddBinding)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xaf24848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"AddBinding", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionMap*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionSetupExtensions.AddBinding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputActionSetupExtensions_BindingSyntax (*)(::UnityEngine::InputSystem::InputActionMap*, ::StringW, ::UnityEngine::InputSystem::InputAction*, ::StringW, ::StringW)>(&::UnityEngine::InputSystem::InputActionSetupExtensions::AddBinding)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xaf24ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"AddBinding", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionMap*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionSetupExtensions.AddBinding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputActionSetupExtensions_BindingSyntax (*)(::UnityEngine::InputSystem::InputActionMap*, ::StringW, ::System::Guid, ::StringW, ::StringW)>(&::UnityEngine::InputSystem::InputActionSetupExtensions::AddBinding)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xaf24bd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"AddBinding", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionMap*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionSetupExtensions.AddBinding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputActionSetupExtensions_BindingSyntax (*)(::UnityEngine::InputSystem::InputActionMap*, ::UnityEngine::InputSystem::InputBinding)>(&::UnityEngine::InputSystem::InputActionSetupExtensions::AddBinding)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xaf24998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"AddBinding", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionMap*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputBinding>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionSetupExtensions.AddCompositeBinding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputActionSetupExtensions_CompositeSyntax (*)(::UnityEngine::InputSystem::InputAction*, ::StringW, ::StringW, ::StringW)>(&::UnityEngine::InputSystem::InputActionSetupExtensions::AddCompositeBinding)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0xaf24cc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"AddCompositeBinding", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionSetupExtensions.AddBindingInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::InputSystem::InputActionMap*, ::UnityEngine::InputSystem::InputBinding, int32_t)>(&::UnityEngine::InputSystem::InputActionSetupExtensions::AddBindingInternal)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xaf246c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"AddBindingInternal", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionMap*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputBinding>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionSetupExtensions.ChangeBinding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputActionSetupExtensions_BindingSyntax (*)(::UnityEngine::InputSystem::InputAction*, int32_t)>(&::UnityEngine::InputSystem::InputActionSetupExtensions::ChangeBinding)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xaf24f54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"ChangeBinding", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionSetupExtensions.ChangeBinding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputActionSetupExtensions_BindingSyntax (*)(::UnityEngine::InputSystem::InputAction*, ::StringW)>(&::UnityEngine::InputSystem::InputActionSetupExtensions::ChangeBinding)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xaf25008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"ChangeBinding", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionSetupExtensions.ChangeBinding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputActionSetupExtensions_BindingSyntax (*)(::UnityEngine::InputSystem::InputActionMap*, int32_t)>(&::UnityEngine::InputSystem::InputActionSetupExtensions::ChangeBinding)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xaf251f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"ChangeBinding", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionMap*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionSetupExtensions.ChangeBindingWithId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputActionSetupExtensions_BindingSyntax (*)(::UnityEngine::InputSystem::InputAction*, ::StringW)>(&::UnityEngine::InputSystem::InputActionSetupExtensions::ChangeBindingWithId)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xaf2530c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"ChangeBindingWithId", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionSetupExtensions.ChangeBindingWithId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputActionSetupExtensions_BindingSyntax (*)(::UnityEngine::InputSystem::InputAction*, ::System::Guid)>(&::UnityEngine::InputSystem::InputActionSetupExtensions::ChangeBindingWithId)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xaf253e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"ChangeBindingWithId", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionSetupExtensions.ChangeBindingWithGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputActionSetupExtensions_BindingSyntax (*)(::UnityEngine::InputSystem::InputAction*, ::StringW)>(&::UnityEngine::InputSystem::InputActionSetupExtensions::ChangeBindingWithGroup)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xaf25500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"ChangeBindingWithGroup", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionSetupExtensions.ChangeBindingWithPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputActionSetupExtensions_BindingSyntax (*)(::UnityEngine::InputSystem::InputAction*, ::StringW)>(&::UnityEngine::InputSystem::InputActionSetupExtensions::ChangeBindingWithPath)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xaf255d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"ChangeBindingWithPath", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionSetupExtensions.ChangeBinding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputActionSetupExtensions_BindingSyntax (*)(::UnityEngine::InputSystem::InputAction*, ::UnityEngine::InputSystem::InputBinding)>(&::UnityEngine::InputSystem::InputActionSetupExtensions::ChangeBinding)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xaf2507c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"ChangeBinding", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputBinding>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionSetupExtensions.ChangeCompositeBinding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputActionSetupExtensions_BindingSyntax (*)(::UnityEngine::InputSystem::InputAction*, ::StringW)>(&::UnityEngine::InputSystem::InputActionSetupExtensions::ChangeCompositeBinding)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0xaf256a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"ChangeCompositeBinding", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionSetupExtensions.Rename
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputAction*, ::StringW)>(&::UnityEngine::InputSystem::InputActionSetupExtensions::Rename)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0xaf258f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"Rename", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionSetupExtensions.AddControlScheme
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputActionAsset*, ::UnityEngine::InputSystem::InputControlScheme)>(&::UnityEngine::InputSystem::InputActionSetupExtensions::AddControlScheme)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0xaf25b7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"AddControlScheme", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionAsset*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControlScheme>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionSetupExtensions.AddControlScheme
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputActionSetupExtensions_ControlSchemeSyntax (*)(::UnityEngine::InputSystem::InputActionAsset*, ::StringW)>(&::UnityEngine::InputSystem::InputActionSetupExtensions::AddControlScheme)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xaf25e14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"AddControlScheme", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionAsset*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionSetupExtensions.RemoveControlScheme
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputActionAsset*, ::StringW)>(&::UnityEngine::InputSystem::InputActionSetupExtensions::RemoveControlScheme)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xaf25fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"RemoveControlScheme", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionAsset*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionSetupExtensions.WithBindingGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControlScheme (*)(::UnityEngine::InputSystem::InputControlScheme, ::StringW)>(&::UnityEngine::InputSystem::InputActionSetupExtensions::WithBindingGroup)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xaf260f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"WithBindingGroup", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControlScheme>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionSetupExtensions.WithDevice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControlScheme (*)(::UnityEngine::InputSystem::InputControlScheme, ::StringW, bool)>(&::UnityEngine::InputSystem::InputActionSetupExtensions::WithDevice)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xaf263f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"WithDevice", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControlScheme>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionSetupExtensions.WithRequiredDevice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControlScheme (*)(::UnityEngine::InputSystem::InputControlScheme, ::StringW)>(&::UnityEngine::InputSystem::InputActionSetupExtensions::WithRequiredDevice)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xaf26578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"WithRequiredDevice", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControlScheme>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionSetupExtensions.WithOptionalDevice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControlScheme (*)(::UnityEngine::InputSystem::InputControlScheme, ::StringW)>(&::UnityEngine::InputSystem::InputActionSetupExtensions::WithOptionalDevice)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xaf26630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"WithOptionalDevice", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControlScheme>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionSetupExtensions.OrWithRequiredDevice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControlScheme (*)(::UnityEngine::InputSystem::InputControlScheme, ::StringW)>(&::UnityEngine::InputSystem::InputActionSetupExtensions::OrWithRequiredDevice)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xaf266e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"OrWithRequiredDevice", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControlScheme>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionSetupExtensions.OrWithOptionalDevice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControlScheme (*)(::UnityEngine::InputSystem::InputControlScheme, ::StringW)>(&::UnityEngine::InputSystem::InputActionSetupExtensions::OrWithOptionalDevice)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xaf267d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"OrWithOptionalDevice", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControlScheme>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::InputActionMap* UnityEngine::InputSystem::InputActionSetupExtensions::AddActionMap(::UnityEngine::InputSystem::InputActionAsset*  asset, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"AddActionMap", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionAsset*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionMap*>(nullptr, ___internal_method, asset, name);
}
inline void UnityEngine::InputSystem::InputActionSetupExtensions::AddActionMap(::UnityEngine::InputSystem::InputActionAsset*  asset, ::UnityEngine::InputSystem::InputActionMap*  map)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"AddActionMap", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionAsset*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, asset, map);
}
inline void UnityEngine::InputSystem::InputActionSetupExtensions::RemoveActionMap(::UnityEngine::InputSystem::InputActionAsset*  asset, ::UnityEngine::InputSystem::InputActionMap*  map)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"RemoveActionMap", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionAsset*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, asset, map);
}
inline void UnityEngine::InputSystem::InputActionSetupExtensions::RemoveActionMap(::UnityEngine::InputSystem::InputActionAsset*  asset, ::StringW  nameOrId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"RemoveActionMap", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionAsset*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, asset, nameOrId);
}
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::InputActionSetupExtensions::AddAction(::UnityEngine::InputSystem::InputActionMap*  map, ::StringW  name, ::UnityEngine::InputSystem::InputActionType  type, ::StringW  binding, ::StringW  interactions, ::StringW  processors, ::StringW  groups, ::StringW  expectedControlLayout)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"AddAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionMap*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*>(nullptr, ___internal_method, map, name, type, binding, interactions, processors, groups, expectedControlLayout);
}
inline void UnityEngine::InputSystem::InputActionSetupExtensions::RemoveAction(::UnityEngine::InputSystem::InputAction*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"RemoveAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, action);
}
inline void UnityEngine::InputSystem::InputActionSetupExtensions::RemoveAction(::UnityEngine::InputSystem::InputActionAsset*  asset, ::StringW  nameOrId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"RemoveAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionAsset*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, asset, nameOrId);
}
inline ::GlobalNamespace::InputActionSetupExtensions_BindingSyntax UnityEngine::InputSystem::InputActionSetupExtensions::AddBinding(::UnityEngine::InputSystem::InputAction*  action, ::StringW  path, ::StringW  interactions, ::StringW  processors, ::StringW  groups)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"AddBinding", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputActionSetupExtensions_BindingSyntax>(nullptr, ___internal_method, action, path, interactions, processors, groups);
}
inline ::GlobalNamespace::InputActionSetupExtensions_BindingSyntax UnityEngine::InputSystem::InputActionSetupExtensions::AddBinding(::UnityEngine::InputSystem::InputAction*  action, ::UnityEngine::InputSystem::InputControl*  control)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"AddBinding", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputActionSetupExtensions_BindingSyntax>(nullptr, ___internal_method, action, control);
}
inline ::GlobalNamespace::InputActionSetupExtensions_BindingSyntax UnityEngine::InputSystem::InputActionSetupExtensions::AddBinding(::UnityEngine::InputSystem::InputAction*  action, ::UnityEngine::InputSystem::InputBinding  binding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"AddBinding", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputBinding>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputActionSetupExtensions_BindingSyntax>(nullptr, ___internal_method, action, binding);
}
inline ::GlobalNamespace::InputActionSetupExtensions_BindingSyntax UnityEngine::InputSystem::InputActionSetupExtensions::AddBinding(::UnityEngine::InputSystem::InputActionMap*  actionMap, ::StringW  path, ::StringW  interactions, ::StringW  groups, ::StringW  action, ::StringW  processors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"AddBinding", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionMap*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputActionSetupExtensions_BindingSyntax>(nullptr, ___internal_method, actionMap, path, interactions, groups, action, processors);
}
inline ::GlobalNamespace::InputActionSetupExtensions_BindingSyntax UnityEngine::InputSystem::InputActionSetupExtensions::AddBinding(::UnityEngine::InputSystem::InputActionMap*  actionMap, ::StringW  path, ::UnityEngine::InputSystem::InputAction*  action, ::StringW  interactions, ::StringW  groups)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"AddBinding", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionMap*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputActionSetupExtensions_BindingSyntax>(nullptr, ___internal_method, actionMap, path, action, interactions, groups);
}
inline ::GlobalNamespace::InputActionSetupExtensions_BindingSyntax UnityEngine::InputSystem::InputActionSetupExtensions::AddBinding(::UnityEngine::InputSystem::InputActionMap*  actionMap, ::StringW  path, ::System::Guid  action, ::StringW  interactions, ::StringW  groups)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"AddBinding", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionMap*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputActionSetupExtensions_BindingSyntax>(nullptr, ___internal_method, actionMap, path, action, interactions, groups);
}
inline ::GlobalNamespace::InputActionSetupExtensions_BindingSyntax UnityEngine::InputSystem::InputActionSetupExtensions::AddBinding(::UnityEngine::InputSystem::InputActionMap*  actionMap, ::UnityEngine::InputSystem::InputBinding  binding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"AddBinding", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionMap*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputBinding>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputActionSetupExtensions_BindingSyntax>(nullptr, ___internal_method, actionMap, binding);
}
inline ::GlobalNamespace::InputActionSetupExtensions_CompositeSyntax UnityEngine::InputSystem::InputActionSetupExtensions::AddCompositeBinding(::UnityEngine::InputSystem::InputAction*  action, ::StringW  composite, ::StringW  interactions, ::StringW  processors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"AddCompositeBinding", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputActionSetupExtensions_CompositeSyntax>(nullptr, ___internal_method, action, composite, interactions, processors);
}
inline int32_t UnityEngine::InputSystem::InputActionSetupExtensions::AddBindingInternal(::UnityEngine::InputSystem::InputActionMap*  map, ::UnityEngine::InputSystem::InputBinding  binding, int32_t  bindingIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"AddBindingInternal", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionMap*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputBinding>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, map, binding, bindingIndex);
}
inline ::GlobalNamespace::InputActionSetupExtensions_BindingSyntax UnityEngine::InputSystem::InputActionSetupExtensions::ChangeBinding(::UnityEngine::InputSystem::InputAction*  action, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"ChangeBinding", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputActionSetupExtensions_BindingSyntax>(nullptr, ___internal_method, action, index);
}
inline ::GlobalNamespace::InputActionSetupExtensions_BindingSyntax UnityEngine::InputSystem::InputActionSetupExtensions::ChangeBinding(::UnityEngine::InputSystem::InputAction*  action, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"ChangeBinding", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputActionSetupExtensions_BindingSyntax>(nullptr, ___internal_method, action, name);
}
inline ::GlobalNamespace::InputActionSetupExtensions_BindingSyntax UnityEngine::InputSystem::InputActionSetupExtensions::ChangeBinding(::UnityEngine::InputSystem::InputActionMap*  actionMap, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"ChangeBinding", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionMap*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputActionSetupExtensions_BindingSyntax>(nullptr, ___internal_method, actionMap, index);
}
inline ::GlobalNamespace::InputActionSetupExtensions_BindingSyntax UnityEngine::InputSystem::InputActionSetupExtensions::ChangeBindingWithId(::UnityEngine::InputSystem::InputAction*  action, ::StringW  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"ChangeBindingWithId", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputActionSetupExtensions_BindingSyntax>(nullptr, ___internal_method, action, id);
}
inline ::GlobalNamespace::InputActionSetupExtensions_BindingSyntax UnityEngine::InputSystem::InputActionSetupExtensions::ChangeBindingWithId(::UnityEngine::InputSystem::InputAction*  action, ::System::Guid  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"ChangeBindingWithId", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputActionSetupExtensions_BindingSyntax>(nullptr, ___internal_method, action, id);
}
inline ::GlobalNamespace::InputActionSetupExtensions_BindingSyntax UnityEngine::InputSystem::InputActionSetupExtensions::ChangeBindingWithGroup(::UnityEngine::InputSystem::InputAction*  action, ::StringW  group)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"ChangeBindingWithGroup", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputActionSetupExtensions_BindingSyntax>(nullptr, ___internal_method, action, group);
}
inline ::GlobalNamespace::InputActionSetupExtensions_BindingSyntax UnityEngine::InputSystem::InputActionSetupExtensions::ChangeBindingWithPath(::UnityEngine::InputSystem::InputAction*  action, ::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"ChangeBindingWithPath", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputActionSetupExtensions_BindingSyntax>(nullptr, ___internal_method, action, path);
}
inline ::GlobalNamespace::InputActionSetupExtensions_BindingSyntax UnityEngine::InputSystem::InputActionSetupExtensions::ChangeBinding(::UnityEngine::InputSystem::InputAction*  action, ::UnityEngine::InputSystem::InputBinding  match)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"ChangeBinding", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputBinding>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputActionSetupExtensions_BindingSyntax>(nullptr, ___internal_method, action, match);
}
inline ::GlobalNamespace::InputActionSetupExtensions_BindingSyntax UnityEngine::InputSystem::InputActionSetupExtensions::ChangeCompositeBinding(::UnityEngine::InputSystem::InputAction*  action, ::StringW  compositeName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"ChangeCompositeBinding", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputActionSetupExtensions_BindingSyntax>(nullptr, ___internal_method, action, compositeName);
}
inline void UnityEngine::InputSystem::InputActionSetupExtensions::Rename(::UnityEngine::InputSystem::InputAction*  action, ::StringW  newName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"Rename", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, action, newName);
}
inline void UnityEngine::InputSystem::InputActionSetupExtensions::AddControlScheme(::UnityEngine::InputSystem::InputActionAsset*  asset, ::UnityEngine::InputSystem::InputControlScheme  controlScheme)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"AddControlScheme", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionAsset*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControlScheme>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, asset, controlScheme);
}
inline ::GlobalNamespace::InputActionSetupExtensions_ControlSchemeSyntax UnityEngine::InputSystem::InputActionSetupExtensions::AddControlScheme(::UnityEngine::InputSystem::InputActionAsset*  asset, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"AddControlScheme", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionAsset*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputActionSetupExtensions_ControlSchemeSyntax>(nullptr, ___internal_method, asset, name);
}
inline void UnityEngine::InputSystem::InputActionSetupExtensions::RemoveControlScheme(::UnityEngine::InputSystem::InputActionAsset*  asset, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"RemoveControlScheme", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionAsset*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, asset, name);
}
inline ::UnityEngine::InputSystem::InputControlScheme UnityEngine::InputSystem::InputActionSetupExtensions::WithBindingGroup(::UnityEngine::InputSystem::InputControlScheme  scheme, ::StringW  bindingGroup)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"WithBindingGroup", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControlScheme>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlScheme>(nullptr, ___internal_method, scheme, bindingGroup);
}
inline ::UnityEngine::InputSystem::InputControlScheme UnityEngine::InputSystem::InputActionSetupExtensions::WithDevice(::UnityEngine::InputSystem::InputControlScheme  scheme, ::StringW  controlPath, bool  required)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"WithDevice", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControlScheme>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlScheme>(nullptr, ___internal_method, scheme, controlPath, required);
}
inline ::UnityEngine::InputSystem::InputControlScheme UnityEngine::InputSystem::InputActionSetupExtensions::WithRequiredDevice(::UnityEngine::InputSystem::InputControlScheme  scheme, ::StringW  controlPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"WithRequiredDevice", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControlScheme>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlScheme>(nullptr, ___internal_method, scheme, controlPath);
}
inline ::UnityEngine::InputSystem::InputControlScheme UnityEngine::InputSystem::InputActionSetupExtensions::WithOptionalDevice(::UnityEngine::InputSystem::InputControlScheme  scheme, ::StringW  controlPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"WithOptionalDevice", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControlScheme>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlScheme>(nullptr, ___internal_method, scheme, controlPath);
}
inline ::UnityEngine::InputSystem::InputControlScheme UnityEngine::InputSystem::InputActionSetupExtensions::OrWithRequiredDevice(::UnityEngine::InputSystem::InputControlScheme  scheme, ::StringW  controlPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"OrWithRequiredDevice", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControlScheme>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlScheme>(nullptr, ___internal_method, scheme, controlPath);
}
inline ::UnityEngine::InputSystem::InputControlScheme UnityEngine::InputSystem::InputActionSetupExtensions::OrWithOptionalDevice(::UnityEngine::InputSystem::InputControlScheme  scheme, ::StringW  controlPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions*>(),
                        {"OrWithOptionalDevice", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControlScheme>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlScheme>(nullptr, ___internal_method, scheme, controlPath);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputActionSetupExtensions::InputActionSetupExtensions()   {
}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionSetupExtensions___c__DisplayClass5_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputActionSetupExtensions___c__DisplayClass5_0::*)()>(&::UnityEngine::InputSystem::InputActionSetupExtensions___c__DisplayClass5_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf24418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions___c__DisplayClass5_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionSetupExtensions___c__DisplayClass5_0._RemoveAction_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputActionSetupExtensions___c__DisplayClass5_0::*)(::UnityEngine::InputSystem::InputBinding)>(&::UnityEngine::InputSystem::InputActionSetupExtensions___c__DisplayClass5_0::_RemoveAction_b__0)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xaf28580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions___c__DisplayClass5_0*>(),
                        {"<RemoveAction>b__0", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputBinding>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::InputBinding& UnityEngine::InputSystem::InputActionSetupExtensions___c__DisplayClass5_0::__cordl_internal_get_binding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___binding;
}
constexpr ::UnityEngine::InputSystem::InputBinding const& UnityEngine::InputSystem::InputActionSetupExtensions___c__DisplayClass5_0::__cordl_internal_get_binding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___binding;
}
constexpr void UnityEngine::InputSystem::InputActionSetupExtensions___c__DisplayClass5_0::__cordl_internal_set_binding(::UnityEngine::InputSystem::InputBinding  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___binding = value;
}
inline void UnityEngine::InputSystem::InputActionSetupExtensions___c__DisplayClass5_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions___c__DisplayClass5_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputActionSetupExtensions___c__DisplayClass5_0::_RemoveAction_b__0(::UnityEngine::InputSystem::InputBinding  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputActionSetupExtensions___c__DisplayClass5_0*>(),
                        {"<RemoveAction>b__0", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputBinding>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, b);
}
inline ::UnityEngine::InputSystem::InputActionSetupExtensions___c__DisplayClass5_0* UnityEngine::InputSystem::InputActionSetupExtensions___c__DisplayClass5_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::InputActionSetupExtensions___c__DisplayClass5_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputActionSetupExtensions___c__DisplayClass5_0::InputActionSetupExtensions___c__DisplayClass5_0()   {
}
