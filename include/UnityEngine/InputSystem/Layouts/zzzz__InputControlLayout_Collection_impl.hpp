#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Layouts/InputControlLayout_Collection.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_Collection_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_Cache_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_Collection_LayoutMatcher_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_Collection_PrecompiledLayout_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceDescription_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceMatcher_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_Collection.Allocate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputControlLayout_Collection::*)()>(&::GlobalNamespace::InputControlLayout_Collection::Allocate)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0xb0068a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_Collection>(),
                        {"Allocate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_Collection.TryFindLayoutForType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (::GlobalNamespace::InputControlLayout_Collection::*)(::System::Type*)>(&::GlobalNamespace::InputControlLayout_Collection::TryFindLayoutForType)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xb002534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_Collection>(),
                        {"TryFindLayoutForType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_Collection.TryFindMatchingLayout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (::GlobalNamespace::InputControlLayout_Collection::*)(::UnityEngine::InputSystem::Layouts::InputDeviceDescription)>(&::GlobalNamespace::InputControlLayout_Collection::TryFindMatchingLayout)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0xb006b4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_Collection>(),
                        {"TryFindMatchingLayout", {}, {::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_Collection.HasLayout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::InputControlLayout_Collection::*)(::UnityEngine::InputSystem::Utilities::InternedString)>(&::GlobalNamespace::InputControlLayout_Collection::HasLayout)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb0026d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_Collection>(),
                        {"HasLayout", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_Collection.TryLoadLayoutInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout* (::GlobalNamespace::InputControlLayout_Collection::*)(::UnityEngine::InputSystem::Utilities::InternedString)>(&::GlobalNamespace::InputControlLayout_Collection::TryLoadLayoutInternal)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0xb006d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_Collection>(),
                        {"TryLoadLayoutInternal", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_Collection.TryLoadLayout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout* (::GlobalNamespace::InputControlLayout_Collection::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Layouts::InputControlLayout*>*)>(&::GlobalNamespace::InputControlLayout_Collection::TryLoadLayout)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0xb006f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_Collection>(),
                        {"TryLoadLayout", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Layouts::InputControlLayout*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_Collection.GetBaseLayoutName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (::GlobalNamespace::InputControlLayout_Collection::*)(::UnityEngine::InputSystem::Utilities::InternedString)>(&::GlobalNamespace::InputControlLayout_Collection::GetBaseLayoutName)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb007388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_Collection>(),
                        {"GetBaseLayoutName", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_Collection.GetRootLayoutName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (::GlobalNamespace::InputControlLayout_Collection::*)(::UnityEngine::InputSystem::Utilities::InternedString)>(&::GlobalNamespace::InputControlLayout_Collection::GetRootLayoutName)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb007414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_Collection>(),
                        {"GetRootLayoutName", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_Collection.ComputeDistanceInInheritanceHierarchy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::InputControlLayout_Collection::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Utilities::InternedString, ::by_ref<int32_t>)>(&::GlobalNamespace::InputControlLayout_Collection::ComputeDistanceInInheritanceHierarchy)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xb0074a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_Collection>(),
                        {"ComputeDistanceInInheritanceHierarchy", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_Collection.FindLayoutThatIntroducesControl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (::GlobalNamespace::InputControlLayout_Collection::*)(::UnityEngine::InputSystem::InputControl*, ::GlobalNamespace::InputControlLayout_Cache)>(&::GlobalNamespace::InputControlLayout_Collection::FindLayoutThatIntroducesControl)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xb0075dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_Collection>(),
                        {"FindLayoutThatIntroducesControl", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::GlobalNamespace::InputControlLayout_Cache>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_Collection.GetControlTypeForLayout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::GlobalNamespace::InputControlLayout_Collection::*)(::UnityEngine::InputSystem::Utilities::InternedString)>(&::GlobalNamespace::InputControlLayout_Collection::GetControlTypeForLayout)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xb0077fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_Collection>(),
                        {"GetControlTypeForLayout", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_Collection.ValueTypeIsAssignableFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::InputControlLayout_Collection::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::System::Type*)>(&::GlobalNamespace::InputControlLayout_Collection::ValueTypeIsAssignableFrom)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xb007938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_Collection>(),
                        {"ValueTypeIsAssignableFrom", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_Collection.IsGeneratedLayout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::InputControlLayout_Collection::*)(::UnityEngine::InputSystem::Utilities::InternedString)>(&::GlobalNamespace::InputControlLayout_Collection::IsGeneratedLayout)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb007a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_Collection>(),
                        {"IsGeneratedLayout", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_Collection.GetBaseLayouts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>* (::GlobalNamespace::InputControlLayout_Collection::*)(::UnityEngine::InputSystem::Utilities::InternedString, bool)>(&::GlobalNamespace::InputControlLayout_Collection::GetBaseLayouts)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb007ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_Collection>(),
                        {"GetBaseLayouts", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_Collection.IsBasedOn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::InputControlLayout_Collection::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Utilities::InternedString)>(&::GlobalNamespace::InputControlLayout_Collection::IsBasedOn)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb007ba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_Collection>(),
                        {"IsBasedOn", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_Collection.AddMatcher
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputControlLayout_Collection::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher)>(&::GlobalNamespace::InputControlLayout_Collection::AddMatcher)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0xb007c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_Collection>(),
                        {"AddMatcher", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::InputControlLayout_Collection::Allocate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_Collection>(),
                        {"Allocate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString GlobalNamespace::InputControlLayout_Collection::TryFindLayoutForType(::System::Type*  layoutType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_Collection>(),
                        {"TryFindLayoutForType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString>(*this, ___internal_method, layoutType);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString GlobalNamespace::InputControlLayout_Collection::TryFindMatchingLayout(::UnityEngine::InputSystem::Layouts::InputDeviceDescription  deviceDescription)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_Collection>(),
                        {"TryFindMatchingLayout", {}, {::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString>(*this, ___internal_method, deviceDescription);
}
inline bool GlobalNamespace::InputControlLayout_Collection::HasLayout(::UnityEngine::InputSystem::Utilities::InternedString  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_Collection>(),
                        {"HasLayout", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, name);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* GlobalNamespace::InputControlLayout_Collection::TryLoadLayoutInternal(::UnityEngine::InputSystem::Utilities::InternedString  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_Collection>(),
                        {"TryLoadLayoutInternal", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(*this, ___internal_method, name);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* GlobalNamespace::InputControlLayout_Collection::TryLoadLayout(::UnityEngine::InputSystem::Utilities::InternedString  name, ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Layouts::InputControlLayout*>*  table)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_Collection>(),
                        {"TryLoadLayout", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Layouts::InputControlLayout*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(*this, ___internal_method, name, table);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString GlobalNamespace::InputControlLayout_Collection::GetBaseLayoutName(::UnityEngine::InputSystem::Utilities::InternedString  layoutName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_Collection>(),
                        {"GetBaseLayoutName", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString>(*this, ___internal_method, layoutName);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString GlobalNamespace::InputControlLayout_Collection::GetRootLayoutName(::UnityEngine::InputSystem::Utilities::InternedString  layoutName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_Collection>(),
                        {"GetRootLayoutName", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString>(*this, ___internal_method, layoutName);
}
inline bool GlobalNamespace::InputControlLayout_Collection::ComputeDistanceInInheritanceHierarchy(::UnityEngine::InputSystem::Utilities::InternedString  firstLayout, ::UnityEngine::InputSystem::Utilities::InternedString  secondLayout, ::by_ref<int32_t>  distance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_Collection>(),
                        {"ComputeDistanceInInheritanceHierarchy", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, firstLayout, secondLayout, distance);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString GlobalNamespace::InputControlLayout_Collection::FindLayoutThatIntroducesControl(::UnityEngine::InputSystem::InputControl*  control, ::GlobalNamespace::InputControlLayout_Cache  cache)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_Collection>(),
                        {"FindLayoutThatIntroducesControl", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::GlobalNamespace::InputControlLayout_Cache>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString>(*this, ___internal_method, control, cache);
}
inline ::System::Type* GlobalNamespace::InputControlLayout_Collection::GetControlTypeForLayout(::UnityEngine::InputSystem::Utilities::InternedString  layoutName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_Collection>(),
                        {"GetControlTypeForLayout", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(*this, ___internal_method, layoutName);
}
inline bool GlobalNamespace::InputControlLayout_Collection::ValueTypeIsAssignableFrom(::UnityEngine::InputSystem::Utilities::InternedString  layoutName, ::System::Type*  valueType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_Collection>(),
                        {"ValueTypeIsAssignableFrom", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, layoutName, valueType);
}
inline bool GlobalNamespace::InputControlLayout_Collection::IsGeneratedLayout(::UnityEngine::InputSystem::Utilities::InternedString  layout)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_Collection>(),
                        {"IsGeneratedLayout", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, layout);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>* GlobalNamespace::InputControlLayout_Collection::GetBaseLayouts(::UnityEngine::InputSystem::Utilities::InternedString  layout, bool  includeSelf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_Collection>(),
                        {"GetBaseLayouts", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>*>(*this, ___internal_method, layout, includeSelf);
}
inline bool GlobalNamespace::InputControlLayout_Collection::IsBasedOn(::UnityEngine::InputSystem::Utilities::InternedString  parentLayout, ::UnityEngine::InputSystem::Utilities::InternedString  childLayout)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_Collection>(),
                        {"IsBasedOn", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, parentLayout, childLayout);
}
inline void GlobalNamespace::InputControlLayout_Collection::AddMatcher(::UnityEngine::InputSystem::Utilities::InternedString  layout, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher  matcher)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_Collection>(),
                        {"AddMatcher", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, layout, matcher);
}
// Ctor Parameters [CppParam { name: "layoutTypes", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::System::Type*>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "layoutStrings", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "layoutBuilders", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "baseLayoutTable", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Utilities::InternedString>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "layoutOverrides", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString>>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "layoutOverrideNames", ty: "::System::Collections::Generic::HashSet_1<::UnityEngine::InputSystem::Utilities::InternedString>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "precompiledLayouts", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::GlobalNamespace::Collection_InputControlLayout_PrecompiledLayout>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "layoutMatchers", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::Collection_InputControlLayout_LayoutMatcher>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputControlLayout_Collection::InputControlLayout_Collection(::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::System::Type*>*  layoutTypes, ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>*  layoutStrings, ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*>*  layoutBuilders, ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::UnityEngine::InputSystem::Utilities::InternedString>*  baseLayoutTable, ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString>>*  layoutOverrides, ::System::Collections::Generic::HashSet_1<::UnityEngine::InputSystem::Utilities::InternedString>*  layoutOverrideNames, ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString,::GlobalNamespace::Collection_InputControlLayout_PrecompiledLayout>*  precompiledLayouts, ::System::Collections::Generic::List_1<::GlobalNamespace::Collection_InputControlLayout_LayoutMatcher>*  layoutMatchers) noexcept  {
this->layoutTypes = layoutTypes;
this->layoutStrings = layoutStrings;
this->layoutBuilders = layoutBuilders;
this->baseLayoutTable = baseLayoutTable;
this->layoutOverrides = layoutOverrides;
this->layoutOverrideNames = layoutOverrideNames;
this->precompiledLayouts = precompiledLayouts;
this->layoutMatchers = layoutMatchers;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputControlLayout_Collection::InputControlLayout_Collection()   {
}
