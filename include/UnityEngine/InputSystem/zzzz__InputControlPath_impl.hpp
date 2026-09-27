#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputControlPath.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlPath_ParsedPathComponent_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlPath_PathParser_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlPath_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_ControlItem_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__Substring_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlList_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlPath_HumanReadableStringOptions_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlPath_ParsedPathComponent_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlPath_PathComponentType_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlPath_PathParser_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlPath_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.CleanSlashes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::UnityEngine::InputSystem::InputControlPath::CleanSlashes)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xaf573dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath*>(),
                        {"CleanSlashes", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.Combine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::InputSystem::InputControl*, ::StringW)>(&::UnityEngine::InputSystem::InputControlPath::Combine)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xaf521dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath*>(),
                        {"Combine", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.ToHumanReadableString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::GlobalNamespace::InputControlPath_HumanReadableStringOptions, ::UnityEngine::InputSystem::InputControl*)>(&::UnityEngine::InputSystem::InputControlPath::ToHumanReadableString)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xaf573f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath*>(),
                        {"ToHumanReadableString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::InputControlPath_HumanReadableStringOptions>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.ToHumanReadableString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::by_ref<::StringW>, ::by_ref<::StringW>, ::GlobalNamespace::InputControlPath_HumanReadableStringOptions, ::UnityEngine::InputSystem::InputControl*)>(&::UnityEngine::InputSystem::InputControlPath::ToHumanReadableString)> {
  constexpr static std::size_t size = 0x4b8;
  constexpr static std::size_t addrs = 0xaf57424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath*>(),
                        {"ToHumanReadableString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::GlobalNamespace::InputControlPath_HumanReadableStringOptions>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.TryGetDeviceUsages
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::StringW)>(&::UnityEngine::InputSystem::InputControlPath::TryGetDeviceUsages)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xaf58478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath*>(),
                        {"TryGetDeviceUsages", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.TryGetDeviceLayout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::UnityEngine::InputSystem::InputControlPath::TryGetDeviceLayout)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xaf5860c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath*>(),
                        {"TryGetDeviceLayout", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.TryGetControlLayout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::UnityEngine::InputSystem::InputControlPath::TryGetControlLayout)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0xaf587a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath*>(),
                        {"TryGetControlLayout", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.FindControlLayoutRecursive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::by_ref<::GlobalNamespace::InputControlPath_PathParser>, ::StringW)>(&::UnityEngine::InputSystem::InputControlPath::FindControlLayoutRecursive)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xaf589bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath*>(),
                        {"FindControlLayoutRecursive", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::InputControlPath_PathParser>>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.FindControlLayoutRecursive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::by_ref<::GlobalNamespace::InputControlPath_PathParser>, ::UnityEngine::InputSystem::Layouts::InputControlLayout*)>(&::UnityEngine::InputSystem::InputControlPath::FindControlLayoutRecursive)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xaf58b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath*>(),
                        {"FindControlLayoutRecursive", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::InputControlPath_PathParser>>(), ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.ControlLayoutMatchesPathComponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::GlobalNamespace::InputControlLayout_ControlItem>, ::by_ref<::GlobalNamespace::InputControlPath_PathParser>)>(&::UnityEngine::InputSystem::InputControlPath::ControlLayoutMatchesPathComponent)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xaf58cbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath*>(),
                        {"ControlLayoutMatchesPathComponent", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::InputControlLayout_ControlItem>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::InputControlPath_PathParser>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.StringMatches
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::Utilities::Substring, ::UnityEngine::InputSystem::Utilities::InternedString)>(&::UnityEngine::InputSystem::InputControlPath::StringMatches)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0xaf58e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath*>(),
                        {"StringMatches", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::Substring>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.TryFindControl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControl* (*)(::UnityEngine::InputSystem::InputControl*, ::StringW, int32_t)>(&::UnityEngine::InputSystem::InputControlPath::TryFindControl)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xaf4ad20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath*>(),
                        {"TryFindControl", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.TryFindControls
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::InputSystem::InputControl*> (*)(::UnityEngine::InputSystem::InputControl*, ::StringW, int32_t)>(&::UnityEngine::InputSystem::InputControlPath::TryFindControls)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xaf59028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath*>(),
                        {"TryFindControls", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.TryFindControls
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::InputSystem::InputControl*, ::StringW, ::by_ref<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>>, int32_t)>(&::UnityEngine::InputSystem::InputControlPath::TryFindControls)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xaf59178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath*>(),
                        {"TryFindControls", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.TryFindChild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControl* (*)(::UnityEngine::InputSystem::InputControl*, ::StringW, int32_t)>(&::UnityEngine::InputSystem::InputControlPath::TryFindChild)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xaf525d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath*>(),
                        {"TryFindChild", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.Matches
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::UnityEngine::InputSystem::InputControl*)>(&::UnityEngine::InputSystem::InputControlPath::Matches)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xaf578dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath*>(),
                        {"Matches", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.MatchControlComponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::GlobalNamespace::InputControlPath_ParsedPathComponent>, ::by_ref<::GlobalNamespace::InputControlLayout_ControlItem>, bool)>(&::UnityEngine::InputSystem::InputControlPath::MatchControlComponent)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0xaf59250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath*>(),
                        {"MatchControlComponent", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::InputControlPath_ParsedPathComponent>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::InputControlLayout_ControlItem>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.MatchesPrefix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::UnityEngine::InputSystem::InputControl*)>(&::UnityEngine::InputSystem::InputControlPath::MatchesPrefix)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xaf59610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath*>(),
                        {"MatchesPrefix", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.MatchesRecursive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::GlobalNamespace::InputControlPath_PathParser>, ::UnityEngine::InputSystem::InputControl*, bool)>(&::UnityEngine::InputSystem::InputControlPath::MatchesRecursive)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xaf591e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath*>(),
                        {"MatchesRecursive", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::InputControlPath_PathParser>>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.MatchPathComponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW, ::by_ref<int32_t>, ::GlobalNamespace::InputControlPath_PathComponentType, int32_t)>(&::UnityEngine::InputSystem::InputControlPath::MatchPathComponent)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0xaf599a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath*>(),
                        {"MatchPathComponent", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::GlobalNamespace::InputControlPath_PathComponentType>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.PathComponentCanYieldMultipleMatches
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, int32_t)>(&::UnityEngine::InputSystem::InputControlPath::PathComponentCanYieldMultipleMatches)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xaf59bd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath*>(),
                        {"PathComponentCanYieldMultipleMatches", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.Parse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::InputControlPath_ParsedPathComponent>* (*)(::StringW)>(&::UnityEngine::InputSystem::InputControlPath::Parse)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xaf59c94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath*>(),
                        {"Parse", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::InputSystem::InputControlPath::CleanSlashes(::StringW  pathComponent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath*>(),
                        {"CleanSlashes", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, pathComponent);
}
inline ::StringW UnityEngine::InputSystem::InputControlPath::Combine(::UnityEngine::InputSystem::InputControl*  parent, ::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath*>(),
                        {"Combine", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, parent, path);
}
inline ::StringW UnityEngine::InputSystem::InputControlPath::ToHumanReadableString(::StringW  path, ::GlobalNamespace::InputControlPath_HumanReadableStringOptions  options, ::UnityEngine::InputSystem::InputControl*  control)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath*>(),
                        {"ToHumanReadableString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::InputControlPath_HumanReadableStringOptions>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path, options, control);
}
inline ::StringW UnityEngine::InputSystem::InputControlPath::ToHumanReadableString(::StringW  path, ::by_ref<::StringW>  deviceLayoutName, ::by_ref<::StringW>  controlPath, ::GlobalNamespace::InputControlPath_HumanReadableStringOptions  options, ::UnityEngine::InputSystem::InputControl*  control)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath*>(),
                        {"ToHumanReadableString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::GlobalNamespace::InputControlPath_HumanReadableStringOptions>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path, deviceLayoutName, controlPath, options, control);
}
inline ::ArrayW<::StringW> UnityEngine::InputSystem::InputControlPath::TryGetDeviceUsages(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath*>(),
                        {"TryGetDeviceUsages", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, path);
}
inline ::StringW UnityEngine::InputSystem::InputControlPath::TryGetDeviceLayout(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath*>(),
                        {"TryGetDeviceLayout", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline ::StringW UnityEngine::InputSystem::InputControlPath::TryGetControlLayout(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath*>(),
                        {"TryGetControlLayout", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline ::StringW UnityEngine::InputSystem::InputControlPath::FindControlLayoutRecursive(::by_ref<::GlobalNamespace::InputControlPath_PathParser>  parser, ::StringW  layoutName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath*>(),
                        {"FindControlLayoutRecursive", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::InputControlPath_PathParser>>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, parser, layoutName);
}
inline ::StringW UnityEngine::InputSystem::InputControlPath::FindControlLayoutRecursive(::by_ref<::GlobalNamespace::InputControlPath_PathParser>  parser, ::UnityEngine::InputSystem::Layouts::InputControlLayout*  layout)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath*>(),
                        {"FindControlLayoutRecursive", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::InputControlPath_PathParser>>(), ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, parser, layout);
}
inline bool UnityEngine::InputSystem::InputControlPath::ControlLayoutMatchesPathComponent(::by_ref<::GlobalNamespace::InputControlLayout_ControlItem>  controlItem, ::by_ref<::GlobalNamespace::InputControlPath_PathParser>  parser)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath*>(),
                        {"ControlLayoutMatchesPathComponent", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::InputControlLayout_ControlItem>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::InputControlPath_PathParser>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, controlItem, parser);
}
inline bool UnityEngine::InputSystem::InputControlPath::StringMatches(::UnityEngine::InputSystem::Utilities::Substring  str, ::UnityEngine::InputSystem::Utilities::InternedString  matchTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath*>(),
                        {"StringMatches", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::Substring>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, matchTo);
}
inline ::UnityEngine::InputSystem::InputControl* UnityEngine::InputSystem::InputControlPath::TryFindControl(::UnityEngine::InputSystem::InputControl*  control, ::StringW  path, int32_t  indexInPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath*>(),
                        {"TryFindControl", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*>(nullptr, ___internal_method, control, path, indexInPath);
}
inline ::ArrayW<::UnityEngine::InputSystem::InputControl*> UnityEngine::InputSystem::InputControlPath::TryFindControls(::UnityEngine::InputSystem::InputControl*  control, ::StringW  path, int32_t  indexInPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath*>(),
                        {"TryFindControls", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::InputSystem::InputControl*>>(nullptr, ___internal_method, control, path, indexInPath);
}
inline int32_t UnityEngine::InputSystem::InputControlPath::TryFindControls(::UnityEngine::InputSystem::InputControl*  control, ::StringW  path, ::by_ref<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>>  matches, int32_t  indexInPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath*>(),
                        {"TryFindControls", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, path, matches, indexInPath);
}
template<typename TControl>
requires(::cordl_internals::type_constraint<TControl, ::UnityEngine::InputSystem::InputControl*>)
inline TControl UnityEngine::InputSystem::InputControlPath::TryFindControl(::UnityEngine::InputSystem::InputControl*  control, ::StringW  path, int32_t  indexInPath)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath*>(),
                    {"TryFindControl", {::i2c::class_of<TControl>()}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TControl>()}
                )));
return ::cordl_internals::RunMethodRethrow<TControl>(nullptr, ___internal_method, control, path, indexInPath);
}
template<typename TControl>
requires(::cordl_internals::type_constraint<TControl, ::UnityEngine::InputSystem::InputControl*>)
inline int32_t UnityEngine::InputSystem::InputControlPath::TryFindControls(::UnityEngine::InputSystem::InputControl*  control, ::StringW  path, int32_t  indexInPath, ::by_ref<::UnityEngine::InputSystem::InputControlList_1<TControl>>  matches)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath*>(),
                    {"TryFindControls", {::i2c::class_of<TControl>()}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputControlList_1<TControl>>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TControl>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, path, indexInPath, matches);
}
inline ::UnityEngine::InputSystem::InputControl* UnityEngine::InputSystem::InputControlPath::TryFindChild(::UnityEngine::InputSystem::InputControl*  control, ::StringW  path, int32_t  indexInPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath*>(),
                        {"TryFindChild", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*>(nullptr, ___internal_method, control, path, indexInPath);
}
template<typename TControl>
requires(::cordl_internals::type_constraint<TControl, ::UnityEngine::InputSystem::InputControl*>)
inline TControl UnityEngine::InputSystem::InputControlPath::TryFindChild(::UnityEngine::InputSystem::InputControl*  control, ::StringW  path, int32_t  indexInPath)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath*>(),
                    {"TryFindChild", {::i2c::class_of<TControl>()}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TControl>()}
                )));
return ::cordl_internals::RunMethodRethrow<TControl>(nullptr, ___internal_method, control, path, indexInPath);
}
inline bool UnityEngine::InputSystem::InputControlPath::Matches(::StringW  expected, ::UnityEngine::InputSystem::InputControl*  control)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath*>(),
                        {"Matches", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, expected, control);
}
inline bool UnityEngine::InputSystem::InputControlPath::MatchControlComponent(::by_ref<::GlobalNamespace::InputControlPath_ParsedPathComponent>  expectedControlComponent, ::by_ref<::GlobalNamespace::InputControlLayout_ControlItem>  controlItem, bool  matchAlias)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath*>(),
                        {"MatchControlComponent", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::InputControlPath_ParsedPathComponent>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::InputControlLayout_ControlItem>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, expectedControlComponent, controlItem, matchAlias);
}
inline bool UnityEngine::InputSystem::InputControlPath::MatchesPrefix(::StringW  expected, ::UnityEngine::InputSystem::InputControl*  control)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath*>(),
                        {"MatchesPrefix", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, expected, control);
}
inline bool UnityEngine::InputSystem::InputControlPath::MatchesRecursive(::by_ref<::GlobalNamespace::InputControlPath_PathParser>  parser, ::UnityEngine::InputSystem::InputControl*  currentControl, bool  prefixOnly)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath*>(),
                        {"MatchesRecursive", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::InputControlPath_PathParser>>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, parser, currentControl, prefixOnly);
}
template<typename TControl>
requires(::cordl_internals::type_constraint<TControl, ::UnityEngine::InputSystem::InputControl*>)
inline TControl UnityEngine::InputSystem::InputControlPath::MatchControlsRecursive(::UnityEngine::InputSystem::InputControl*  control, ::StringW  path, int32_t  indexInPath, ::by_ref<::UnityEngine::InputSystem::InputControlList_1<TControl>>  matches, bool  matchMultiple)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath*>(),
                    {"MatchControlsRecursive", {::i2c::class_of<TControl>()}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputControlList_1<TControl>>>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TControl>()}
                )));
return ::cordl_internals::RunMethodRethrow<TControl>(nullptr, ___internal_method, control, path, indexInPath, matches, matchMultiple);
}
template<typename TControl>
requires(::cordl_internals::type_constraint<TControl, ::UnityEngine::InputSystem::InputControl*>)
inline TControl UnityEngine::InputSystem::InputControlPath::MatchByUsageAtDeviceRootRecursive(::UnityEngine::InputSystem::InputDevice*  device, ::StringW  path, int32_t  indexInPath, ::by_ref<::UnityEngine::InputSystem::InputControlList_1<TControl>>  matches, bool  matchMultiple)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath*>(),
                    {"MatchByUsageAtDeviceRootRecursive", {::i2c::class_of<TControl>()}, {::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputControlList_1<TControl>>>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TControl>()}
                )));
return ::cordl_internals::RunMethodRethrow<TControl>(nullptr, ___internal_method, device, path, indexInPath, matches, matchMultiple);
}
template<typename TControl>
requires(::cordl_internals::type_constraint<TControl, ::UnityEngine::InputSystem::InputControl*>)
inline TControl UnityEngine::InputSystem::InputControlPath::MatchChildrenRecursive(::UnityEngine::InputSystem::InputControl*  control, ::StringW  path, int32_t  indexInPath, ::by_ref<::UnityEngine::InputSystem::InputControlList_1<TControl>>  matches, bool  matchMultiple)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath*>(),
                    {"MatchChildrenRecursive", {::i2c::class_of<TControl>()}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputControlList_1<TControl>>>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TControl>()}
                )));
return ::cordl_internals::RunMethodRethrow<TControl>(nullptr, ___internal_method, control, path, indexInPath, matches, matchMultiple);
}
inline bool UnityEngine::InputSystem::InputControlPath::MatchPathComponent(::StringW  component, ::StringW  path, ::by_ref<int32_t>  indexInPath, ::GlobalNamespace::InputControlPath_PathComponentType  componentType, int32_t  startIndexInComponent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath*>(),
                        {"MatchPathComponent", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::GlobalNamespace::InputControlPath_PathComponentType>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, component, path, indexInPath, componentType, startIndexInComponent);
}
inline bool UnityEngine::InputSystem::InputControlPath::PathComponentCanYieldMultipleMatches(::StringW  path, int32_t  indexInPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath*>(),
                        {"PathComponentCanYieldMultipleMatches", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path, indexInPath);
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::InputControlPath_ParsedPathComponent>* UnityEngine::InputSystem::InputControlPath::Parse(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath*>(),
                        {"Parse", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::InputControlPath_ParsedPathComponent>*>(nullptr, ___internal_method, path);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputControlPath::InputControlPath()   {
}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath__Parse_d__34._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputControlPath__Parse_d__34::*)(int32_t)>(&::UnityEngine::InputSystem::InputControlPath__Parse_d__34::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xaf59d14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath__Parse_d__34*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath__Parse_d__34.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputControlPath__Parse_d__34::*)()>(&::UnityEngine::InputSystem::InputControlPath__Parse_d__34::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaf5a2d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath__Parse_d__34*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath__Parse_d__34.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputControlPath__Parse_d__34::*)()>(&::UnityEngine::InputSystem::InputControlPath__Parse_d__34::MoveNext)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xaf5a2d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath__Parse_d__34*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath__Parse_d__34.System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputControlPath_ParsedPathComponent__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputControlPath_ParsedPathComponent (::UnityEngine::InputSystem::InputControlPath__Parse_d__34::*)()>(&::UnityEngine::InputSystem::InputControlPath__Parse_d__34::System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputControlPath_ParsedPathComponent__get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaf5a3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath__Parse_d__34*>(),
                        {"System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputControlPath.ParsedPathComponent>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath__Parse_d__34.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputControlPath__Parse_d__34::*)()>(&::UnityEngine::InputSystem::InputControlPath__Parse_d__34::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xaf5a3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath__Parse_d__34*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath__Parse_d__34.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::InputSystem::InputControlPath__Parse_d__34::*)()>(&::UnityEngine::InputSystem::InputControlPath__Parse_d__34::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xaf5a428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath__Parse_d__34*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath__Parse_d__34.System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputControlPath_ParsedPathComponent__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::InputControlPath_ParsedPathComponent>* (::UnityEngine::InputSystem::InputControlPath__Parse_d__34::*)()>(&::UnityEngine::InputSystem::InputControlPath__Parse_d__34::System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputControlPath_ParsedPathComponent__GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xaf5a48c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath__Parse_d__34*>(),
                        {"System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputControlPath.ParsedPathComponent>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath__Parse_d__34.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::InputSystem::InputControlPath__Parse_d__34::*)()>(&::UnityEngine::InputSystem::InputControlPath__Parse_d__34::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaf5a530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath__Parse_d__34*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::InputSystem::InputControlPath__Parse_d__34::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& UnityEngine::InputSystem::InputControlPath__Parse_d__34::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void UnityEngine::InputSystem::InputControlPath__Parse_d__34::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::GlobalNamespace::InputControlPath_ParsedPathComponent& UnityEngine::InputSystem::InputControlPath__Parse_d__34::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::GlobalNamespace::InputControlPath_ParsedPathComponent const& UnityEngine::InputSystem::InputControlPath__Parse_d__34::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void UnityEngine::InputSystem::InputControlPath__Parse_d__34::__cordl_internal_set___2__current(::GlobalNamespace::InputControlPath_ParsedPathComponent  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& UnityEngine::InputSystem::InputControlPath__Parse_d__34::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr int32_t const& UnityEngine::InputSystem::InputControlPath__Parse_d__34::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr void UnityEngine::InputSystem::InputControlPath__Parse_d__34::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
constexpr ::StringW& UnityEngine::InputSystem::InputControlPath__Parse_d__34::__cordl_internal_get_path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr ::StringW const& UnityEngine::InputSystem::InputControlPath__Parse_d__34::__cordl_internal_get_path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr void UnityEngine::InputSystem::InputControlPath__Parse_d__34::__cordl_internal_set_path(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___path = value;
}
constexpr ::StringW& UnityEngine::InputSystem::InputControlPath__Parse_d__34::__cordl_internal_get___3__path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__path;
}
constexpr ::StringW const& UnityEngine::InputSystem::InputControlPath__Parse_d__34::__cordl_internal_get___3__path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__path;
}
constexpr void UnityEngine::InputSystem::InputControlPath__Parse_d__34::__cordl_internal_set___3__path(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____3__path = value;
}
constexpr ::GlobalNamespace::InputControlPath_PathParser& UnityEngine::InputSystem::InputControlPath__Parse_d__34::__cordl_internal_get__parser_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parser_5__2;
}
constexpr ::GlobalNamespace::InputControlPath_PathParser const& UnityEngine::InputSystem::InputControlPath__Parse_d__34::__cordl_internal_get__parser_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parser_5__2;
}
constexpr void UnityEngine::InputSystem::InputControlPath__Parse_d__34::__cordl_internal_set__parser_5__2(::GlobalNamespace::InputControlPath_PathParser  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____parser_5__2 = value;
}
inline void UnityEngine::InputSystem::InputControlPath__Parse_d__34::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath__Parse_d__34*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void UnityEngine::InputSystem::InputControlPath__Parse_d__34::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath__Parse_d__34*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputControlPath__Parse_d__34::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath__Parse_d__34*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::InputControlPath_ParsedPathComponent UnityEngine::InputSystem::InputControlPath__Parse_d__34::System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputControlPath_ParsedPathComponent__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath__Parse_d__34*>(),
                        {"System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputControlPath.ParsedPathComponent>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputControlPath_ParsedPathComponent>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputControlPath__Parse_d__34::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath__Parse_d__34*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::InputSystem::InputControlPath__Parse_d__34::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath__Parse_d__34*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::InputControlPath_ParsedPathComponent>* UnityEngine::InputSystem::InputControlPath__Parse_d__34::System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputControlPath_ParsedPathComponent__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath__Parse_d__34*>(),
                        {"System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputControlPath.ParsedPathComponent>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::InputControlPath_ParsedPathComponent>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::InputSystem::InputControlPath__Parse_d__34::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath__Parse_d__34*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::UnityEngine::InputSystem::InputControlPath__Parse_d__34* UnityEngine::InputSystem::InputControlPath__Parse_d__34::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::InputControlPath__Parse_d__34*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::InputControlPath_ParsedPathComponent>"
constexpr  UnityEngine::InputSystem::InputControlPath__Parse_d__34::operator ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::InputControlPath_ParsedPathComponent>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::InputControlPath_ParsedPathComponent>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::InputControlPath_ParsedPathComponent>"
constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::InputControlPath_ParsedPathComponent>* UnityEngine::InputSystem::InputControlPath__Parse_d__34::i___System__Collections__Generic__IEnumerable_1___GlobalNamespace__InputControlPath_ParsedPathComponent_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::InputControlPath_ParsedPathComponent>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  UnityEngine::InputSystem::InputControlPath__Parse_d__34::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::InputSystem::InputControlPath__Parse_d__34::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::InputControlPath_ParsedPathComponent>"
constexpr  UnityEngine::InputSystem::InputControlPath__Parse_d__34::operator ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::InputControlPath_ParsedPathComponent>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::InputControlPath_ParsedPathComponent>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::InputControlPath_ParsedPathComponent>"
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::InputControlPath_ParsedPathComponent>* UnityEngine::InputSystem::InputControlPath__Parse_d__34::i___System__Collections__Generic__IEnumerator_1___GlobalNamespace__InputControlPath_ParsedPathComponent_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::InputControlPath_ParsedPathComponent>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  UnityEngine::InputSystem::InputControlPath__Parse_d__34::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::InputSystem::InputControlPath__Parse_d__34::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::InputSystem::InputControlPath__Parse_d__34::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::InputSystem::InputControlPath__Parse_d__34::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputControlPath__Parse_d__34::InputControlPath__Parse_d__34()   {
}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputControlPath___c::*)()>(&::UnityEngine::InputSystem::InputControlPath___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf5a2a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath___c._TryGetDeviceUsages_b__9_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::InputControlPath___c::*)(::UnityEngine::InputSystem::Utilities::Substring)>(&::UnityEngine::InputSystem::InputControlPath___c::_TryGetDeviceUsages_b__9_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xaf5a2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath___c*>(),
                        {"<TryGetDeviceUsages>b__9_0", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::Substring>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::InputControlPath___c::setStaticF___9(::UnityEngine::InputSystem::InputControlPath___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::InputSystem::InputControlPath___c*, "<>9", ::UnityEngine::InputSystem::InputControlPath___c*>(std::forward<::UnityEngine::InputSystem::InputControlPath___c*>(value));
}
inline ::UnityEngine::InputSystem::InputControlPath___c* UnityEngine::InputSystem::InputControlPath___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::InputControlPath___c*, "<>9", ::UnityEngine::InputSystem::InputControlPath___c*>();
}
inline void UnityEngine::InputSystem::InputControlPath___c::setStaticF___9__9_0(::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring,::StringW>*, "<>9__9_0", ::UnityEngine::InputSystem::InputControlPath___c*>(std::forward<::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring,::StringW>*>(value));
}
inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring,::StringW>* UnityEngine::InputSystem::InputControlPath___c::getStaticF___9__9_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring,::StringW>*, "<>9__9_0", ::UnityEngine::InputSystem::InputControlPath___c*>();
}
inline void UnityEngine::InputSystem::InputControlPath___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::InputControlPath___c::_TryGetDeviceUsages_b__9_0(::UnityEngine::InputSystem::Utilities::Substring  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlPath___c*>(),
                        {"<TryGetDeviceUsages>b__9_0", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::Substring>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, x);
}
inline ::UnityEngine::InputSystem::InputControlPath___c* UnityEngine::InputSystem::InputControlPath___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::InputControlPath___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputControlPath___c::InputControlPath___c()   {
}
//  Writing Method size for method: ::UnityEngine::InputSystem::ParsedPathComponent_InputControlPath___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::ParsedPathComponent_InputControlPath___c::*)()>(&::UnityEngine::InputSystem::ParsedPathComponent_InputControlPath___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf5a10c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::ParsedPathComponent_InputControlPath___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::ParsedPathComponent_InputControlPath___c._get_usages_b__7_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::ParsedPathComponent_InputControlPath___c::*)(::UnityEngine::InputSystem::Utilities::Substring)>(&::UnityEngine::InputSystem::ParsedPathComponent_InputControlPath___c::_get_usages_b__7_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xaf5a114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::ParsedPathComponent_InputControlPath___c*>(),
                        {"<get_usages>b__7_0", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::Substring>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::ParsedPathComponent_InputControlPath___c::setStaticF___9(::UnityEngine::InputSystem::ParsedPathComponent_InputControlPath___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::InputSystem::ParsedPathComponent_InputControlPath___c*, "<>9", ::UnityEngine::InputSystem::ParsedPathComponent_InputControlPath___c*>(std::forward<::UnityEngine::InputSystem::ParsedPathComponent_InputControlPath___c*>(value));
}
inline ::UnityEngine::InputSystem::ParsedPathComponent_InputControlPath___c* UnityEngine::InputSystem::ParsedPathComponent_InputControlPath___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::ParsedPathComponent_InputControlPath___c*, "<>9", ::UnityEngine::InputSystem::ParsedPathComponent_InputControlPath___c*>();
}
inline void UnityEngine::InputSystem::ParsedPathComponent_InputControlPath___c::setStaticF___9__7_0(::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring,::StringW>*, "<>9__7_0", ::UnityEngine::InputSystem::ParsedPathComponent_InputControlPath___c*>(std::forward<::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring,::StringW>*>(value));
}
inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring,::StringW>* UnityEngine::InputSystem::ParsedPathComponent_InputControlPath___c::getStaticF___9__7_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring,::StringW>*, "<>9__7_0", ::UnityEngine::InputSystem::ParsedPathComponent_InputControlPath___c*>();
}
inline void UnityEngine::InputSystem::ParsedPathComponent_InputControlPath___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::ParsedPathComponent_InputControlPath___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::ParsedPathComponent_InputControlPath___c::_get_usages_b__7_0(::UnityEngine::InputSystem::Utilities::Substring  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::ParsedPathComponent_InputControlPath___c*>(),
                        {"<get_usages>b__7_0", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::Substring>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, x);
}
inline ::UnityEngine::InputSystem::ParsedPathComponent_InputControlPath___c* UnityEngine::InputSystem::ParsedPathComponent_InputControlPath___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::ParsedPathComponent_InputControlPath___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::ParsedPathComponent_InputControlPath___c::ParsedPathComponent_InputControlPath___c()   {
}
