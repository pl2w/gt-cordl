#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Layouts/InputControlLayout.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_Cache_impl.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_Collection_impl.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_ControlItem_impl.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_Flags_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_impl.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlAttribute_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_Builder_ControlBuilder_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_CacheRefInstance_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_Cache_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_Collection_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_ControlItem_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_Flags_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_LayoutJsonNameAndDescriptorOnly_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_LayoutJson_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceMatcher_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__NameAndParameters_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__NamedValue_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_DefaultVariant
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::get_DefaultVariant)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xafff308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"get_DefaultVariant", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::get_name)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xafff360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"get_name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_displayName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::get_displayName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xafff36c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"get_displayName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xafff38c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"get_type", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_variants
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::get_variants)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xafff394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"get_variants", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_stateFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::get_stateFormat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xafff3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"get_stateFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_stateSizeInBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::get_stateSizeInBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xafff3a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"get_stateSizeInBytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_baseLayouts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>* (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::get_baseLayouts)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xafff3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"get_baseLayouts", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_appliedOverrides
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>* (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::get_appliedOverrides)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xafff410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"get_appliedOverrides", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_commonUsages
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::get_commonUsages)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xafff470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"get_commonUsages", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_controls
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::GlobalNamespace::InputControlLayout_ControlItem> (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::get_controls)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xafff4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"get_controls", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_updateBeforeRender
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::get_updateBeforeRender)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xafff530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"get_updateBeforeRender", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_isDeviceLayout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::get_isDeviceLayout)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xafff56c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"get_isDeviceLayout", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_isControlLayout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::get_isControlLayout)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xafff5ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"get_isControlLayout", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_isOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::get_isOverride)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xafff604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"get_isOverride", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.set_isOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)(bool)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::set_isOverride)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xafff610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"set_isOverride", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_isGenericTypeOfDevice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::get_isGenericTypeOfDevice)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xafff630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"get_isGenericTypeOfDevice", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.set_isGenericTypeOfDevice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)(bool)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::set_isGenericTypeOfDevice)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xafff63c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"set_isGenericTypeOfDevice", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_hideInUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::get_hideInUI)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xafff64c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"get_hideInUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.set_hideInUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)(bool)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::set_hideInUI)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xafff658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"set_hideInUI", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_isNoisy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::get_isNoisy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xafff678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"get_isNoisy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.set_isNoisy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)(bool)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::set_isNoisy)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xafff684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"set_isNoisy", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_canRunInBackground
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<bool> (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::get_canRunInBackground)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xafff6a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"get_canRunInBackground", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.set_canRunInBackground
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)(::System::Nullable_1<bool>)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::set_canRunInBackground)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xafff708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"set_canRunInBackground", {}, {::i2c::type_of<::System::Nullable_1<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputControlLayout_ControlItem (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)(::StringW)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::get_Item)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xafff7a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"get_Item", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.FindControl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::GlobalNamespace::InputControlLayout_ControlItem> (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)(::UnityEngine::InputSystem::Utilities::InternedString)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::FindControl)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xafff91c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"FindControl", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.FindControlIncludingArrayElements
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::GlobalNamespace::InputControlLayout_ControlItem> (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)(::StringW, ::by_ref<int32_t>)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::FindControlIncludingArrayElements)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0xafffabc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"FindControlIncludingArrayElements", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.GetValueType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::GetValueType)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xafffdc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"GetValueType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.FromType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout* (*)(::StringW, ::System::Type*)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::FromType)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0xafffe44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"FromType", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::ToJson)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb0003d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"ToJson", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.FromJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout* (*)(::StringW)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::FromJson)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xb000820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"FromJson", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)(::StringW, ::System::Type*)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb000370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.AddControlItems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*, ::System::Collections::Generic::List_1<::GlobalNamespace::InputControlLayout_ControlItem>*, ::StringW)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::AddControlItems)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb0002f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"AddControlItems", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::InputControlLayout_ControlItem>*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.AddControlItemsFromFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*, ::System::Collections::Generic::List_1<::GlobalNamespace::InputControlLayout_ControlItem>*, ::StringW)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::AddControlItemsFromFields)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb0011c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"AddControlItemsFromFields", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::InputControlLayout_ControlItem>*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.AddControlItemsFromProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*, ::System::Collections::Generic::List_1<::GlobalNamespace::InputControlLayout_ControlItem>*, ::StringW)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::AddControlItemsFromProperties)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb00125c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"AddControlItemsFromProperties", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::InputControlLayout_ControlItem>*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.AddControlItemsFromMembers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::System::Reflection::MemberInfo*>, ::System::Collections::Generic::List_1<::GlobalNamespace::InputControlLayout_ControlItem>*, ::StringW)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::AddControlItemsFromMembers)> {
  constexpr static std::size_t size = 0x538;
  constexpr static std::size_t addrs = 0xb0012f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"AddControlItemsFromMembers", {}, {::i2c::type_of<::ArrayW<::System::Reflection::MemberInfo*>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::InputControlLayout_ControlItem>*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.AddControlItemsFromMember
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Reflection::MemberInfo*, ::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlAttribute*>, ::System::Collections::Generic::List_1<::GlobalNamespace::InputControlLayout_ControlItem>*)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::AddControlItemsFromMember)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0xb001828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"AddControlItemsFromMember", {}, {::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlAttribute*>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::InputControlLayout_ControlItem>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.CreateControlItemFromMember
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputControlLayout_ControlItem (*)(::System::Reflection::MemberInfo*, ::UnityEngine::InputSystem::Layouts::InputControlAttribute*)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::CreateControlItemFromMember)> {
  constexpr static std::size_t size = 0x864;
  constexpr static std::size_t addrs = 0xb001a88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"CreateControlItemFromMember", {}, {::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputControlAttribute*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.InferLayoutFromValueType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Type*)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::InferLayoutFromValueType)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xb0022ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"InferLayoutFromValueType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.MergeLayout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)(::UnityEngine::InputSystem::Layouts::InputControlLayout*)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::MergeLayout)> {
  constexpr static std::size_t size = 0x12b8;
  constexpr static std::size_t addrs = 0xb0027ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"MergeLayout", {}, {::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.CreateLookupTableForControls
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::InputControlLayout_ControlItem>* (*)(::ArrayW<::GlobalNamespace::InputControlLayout_ControlItem>, ::System::Collections::Generic::List_1<::StringW>*)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::CreateLookupTableForControls)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0xb003a64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"CreateLookupTableForControls", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::InputControlLayout_ControlItem>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.VariantsMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Utilities::InternedString)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::VariantsMatch)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb004324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"VariantsMatch", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.VariantsMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::VariantsMatch)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xb0041f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"VariantsMatch", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.ParseHeaderFieldsFromJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::by_ref<::UnityEngine::InputSystem::Utilities::InternedString>, ::by_ref<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>>, ::by_ref<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::ParseHeaderFieldsFromJson)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0xb004388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"ParseHeaderFieldsFromJson", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Utilities::InternedString>>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>>>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.get_cache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::GlobalNamespace::InputControlLayout_Cache> (*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::get_cache)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb004534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"get_cache", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout.CacheRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputControlLayout_CacheRefInstance (*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::CacheRef)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb00458c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"CacheRef", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout._MergeLayout_b__77_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Layouts::InputControlLayout::*)(::GlobalNamespace::InputControlLayout_ControlItem)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout::_MergeLayout_b__77_0)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb00467c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"<MergeLayout>b__77_0", {}, {::i2c::type_of<::GlobalNamespace::InputControlLayout_ControlItem>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::Utilities::InternedString& UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_get_m_Name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Name;
}
constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_get_m_Name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Name;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_set_m_Name(::UnityEngine::InputSystem::Utilities::InternedString  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Name = value;
}
constexpr ::System::Type*& UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_get_m_Type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Type;
}
constexpr ::System::Type* const& UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_get_m_Type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Type;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_set_m_Type(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Type = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::InternedString& UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_get_m_Variants()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Variants;
}
constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_get_m_Variants() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Variants;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_set_m_Variants(::UnityEngine::InputSystem::Utilities::InternedString  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Variants = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::FourCC& UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_get_m_StateFormat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StateFormat;
}
constexpr ::UnityEngine::InputSystem::Utilities::FourCC const& UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_get_m_StateFormat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StateFormat;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_set_m_StateFormat(::UnityEngine::InputSystem::Utilities::FourCC  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_StateFormat = value;
}
constexpr int32_t& UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_get_m_StateSizeInBytes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StateSizeInBytes;
}
constexpr int32_t const& UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_get_m_StateSizeInBytes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StateSizeInBytes;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_set_m_StateSizeInBytes(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_StateSizeInBytes = value;
}
constexpr ::System::Nullable_1<bool>& UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_get_m_UpdateBeforeRender()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UpdateBeforeRender;
}
constexpr ::System::Nullable_1<bool> const& UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_get_m_UpdateBeforeRender() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UpdateBeforeRender;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_set_m_UpdateBeforeRender(::System::Nullable_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UpdateBeforeRender = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>& UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_get_m_BaseLayouts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BaseLayouts;
}
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString> const& UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_get_m_BaseLayouts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BaseLayouts;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_set_m_BaseLayouts(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BaseLayouts = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>& UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_get_m_AppliedOverrides()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AppliedOverrides;
}
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString> const& UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_get_m_AppliedOverrides() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AppliedOverrides;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_set_m_AppliedOverrides(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AppliedOverrides = value;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString>& UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_get_m_CommonUsages()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CommonUsages;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString> const& UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_get_m_CommonUsages() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CommonUsages;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_set_m_CommonUsages(::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CommonUsages = value;
}
constexpr ::ArrayW<::GlobalNamespace::InputControlLayout_ControlItem>& UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_get_m_Controls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Controls;
}
constexpr ::ArrayW<::GlobalNamespace::InputControlLayout_ControlItem> const& UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_get_m_Controls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Controls;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_set_m_Controls(::ArrayW<::GlobalNamespace::InputControlLayout_ControlItem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Controls = value;
}
constexpr ::StringW& UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_get_m_DisplayName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DisplayName;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_get_m_DisplayName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DisplayName;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_set_m_DisplayName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DisplayName = value;
}
constexpr ::StringW& UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_get_m_Description()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Description;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_get_m_Description() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Description;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_set_m_Description(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Description = value;
}
constexpr ::GlobalNamespace::InputControlLayout_Flags& UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_get_m_Flags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Flags;
}
constexpr ::GlobalNamespace::InputControlLayout_Flags const& UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_get_m_Flags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Flags;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout::__cordl_internal_set_m_Flags(::GlobalNamespace::InputControlLayout_Flags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Flags = value;
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout::setStaticF_s_DefaultVariant(::UnityEngine::InputSystem::Utilities::InternedString  value)  {
::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::InternedString, "s_DefaultVariant", ::UnityEngine::InputSystem::Layouts::InputControlLayout*>(std::forward<::UnityEngine::InputSystem::Utilities::InternedString>(value));
}
inline ::UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::InputControlLayout::getStaticF_s_DefaultVariant()  {
return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::InternedString, "s_DefaultVariant", ::UnityEngine::InputSystem::Layouts::InputControlLayout*>();
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout::setStaticF_s_Layouts(::GlobalNamespace::InputControlLayout_Collection  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::InputControlLayout_Collection, "s_Layouts", ::UnityEngine::InputSystem::Layouts::InputControlLayout*>(std::forward<::GlobalNamespace::InputControlLayout_Collection>(value));
}
inline ::GlobalNamespace::InputControlLayout_Collection UnityEngine::InputSystem::Layouts::InputControlLayout::getStaticF_s_Layouts()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::InputControlLayout_Collection, "s_Layouts", ::UnityEngine::InputSystem::Layouts::InputControlLayout*>();
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout::setStaticF_s_CacheInstance(::GlobalNamespace::InputControlLayout_Cache  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::InputControlLayout_Cache, "s_CacheInstance", ::UnityEngine::InputSystem::Layouts::InputControlLayout*>(std::forward<::GlobalNamespace::InputControlLayout_Cache>(value));
}
inline ::GlobalNamespace::InputControlLayout_Cache UnityEngine::InputSystem::Layouts::InputControlLayout::getStaticF_s_CacheInstance()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::InputControlLayout_Cache, "s_CacheInstance", ::UnityEngine::InputSystem::Layouts::InputControlLayout*>();
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout::setStaticF_s_CacheInstanceRef(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_CacheInstanceRef", ::UnityEngine::InputSystem::Layouts::InputControlLayout*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::InputSystem::Layouts::InputControlLayout::getStaticF_s_CacheInstanceRef()  {
return ::cordl_internals::getStaticField<int32_t, "s_CacheInstanceRef", ::UnityEngine::InputSystem::Layouts::InputControlLayout*>();
}
inline ::UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::InputControlLayout::get_DefaultVariant()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"get_DefaultVariant", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::InputControlLayout::get_name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"get_name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::Layouts::InputControlLayout::get_displayName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"get_displayName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Type* UnityEngine::InputSystem::Layouts::InputControlLayout::get_type()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"get_type", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::InputControlLayout::get_variants()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"get_variants", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::Layouts::InputControlLayout::get_stateFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"get_stateFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::Layouts::InputControlLayout::get_stateSizeInBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"get_stateSizeInBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>* UnityEngine::InputSystem::Layouts::InputControlLayout::get_baseLayouts()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"get_baseLayouts", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>* UnityEngine::InputSystem::Layouts::InputControlLayout::get_appliedOverrides()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"get_appliedOverrides", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>*>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> UnityEngine::InputSystem::Layouts::InputControlLayout::get_commonUsages()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"get_commonUsages", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::GlobalNamespace::InputControlLayout_ControlItem> UnityEngine::InputSystem::Layouts::InputControlLayout::get_controls()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"get_controls", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::GlobalNamespace::InputControlLayout_ControlItem>>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Layouts::InputControlLayout::get_updateBeforeRender()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"get_updateBeforeRender", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Layouts::InputControlLayout::get_isDeviceLayout()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"get_isDeviceLayout", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Layouts::InputControlLayout::get_isControlLayout()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"get_isControlLayout", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Layouts::InputControlLayout::get_isOverride()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"get_isOverride", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout::set_isOverride(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"set_isOverride", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::Layouts::InputControlLayout::get_isGenericTypeOfDevice()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"get_isGenericTypeOfDevice", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout::set_isGenericTypeOfDevice(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"set_isGenericTypeOfDevice", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::Layouts::InputControlLayout::get_hideInUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"get_hideInUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout::set_hideInUI(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"set_hideInUI", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::Layouts::InputControlLayout::get_isNoisy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"get_isNoisy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout::set_isNoisy(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"set_isNoisy", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<bool> UnityEngine::InputSystem::Layouts::InputControlLayout::get_canRunInBackground()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"get_canRunInBackground", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<bool>>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout::set_canRunInBackground(::System::Nullable_1<bool>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"set_canRunInBackground", {}, {::i2c::type_of<::System::Nullable_1<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::InputControlLayout_ControlItem UnityEngine::InputSystem::Layouts::InputControlLayout::get_Item(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"get_Item", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputControlLayout_ControlItem>(this, ___internal_method, path);
}
inline ::System::Nullable_1<::GlobalNamespace::InputControlLayout_ControlItem> UnityEngine::InputSystem::Layouts::InputControlLayout::FindControl(::UnityEngine::InputSystem::Utilities::InternedString  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"FindControl", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::GlobalNamespace::InputControlLayout_ControlItem>>(this, ___internal_method, path);
}
inline ::System::Nullable_1<::GlobalNamespace::InputControlLayout_ControlItem> UnityEngine::InputSystem::Layouts::InputControlLayout::FindControlIncludingArrayElements(::StringW  path, ::by_ref<int32_t>  arrayIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"FindControlIncludingArrayElements", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::GlobalNamespace::InputControlLayout_ControlItem>>(this, ___internal_method, path, arrayIndex);
}
inline ::System::Type* UnityEngine::InputSystem::Layouts::InputControlLayout::GetValueType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"GetValueType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* UnityEngine::InputSystem::Layouts::InputControlLayout::FromType(::StringW  name, ::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"FromType", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(nullptr, ___internal_method, name, type);
}
inline ::StringW UnityEngine::InputSystem::Layouts::InputControlLayout::ToJson()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"ToJson", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* UnityEngine::InputSystem::Layouts::InputControlLayout::FromJson(::StringW  json)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"FromJson", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(nullptr, ___internal_method, json);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout::_ctor(::StringW  name, ::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, type);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout::AddControlItems(::System::Type*  type, ::System::Collections::Generic::List_1<::GlobalNamespace::InputControlLayout_ControlItem>*  controlLayouts, ::StringW  layoutName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"AddControlItems", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::InputControlLayout_ControlItem>*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type, controlLayouts, layoutName);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout::AddControlItemsFromFields(::System::Type*  type, ::System::Collections::Generic::List_1<::GlobalNamespace::InputControlLayout_ControlItem>*  controlLayouts, ::StringW  layoutName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"AddControlItemsFromFields", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::InputControlLayout_ControlItem>*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type, controlLayouts, layoutName);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout::AddControlItemsFromProperties(::System::Type*  type, ::System::Collections::Generic::List_1<::GlobalNamespace::InputControlLayout_ControlItem>*  controlLayouts, ::StringW  layoutName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"AddControlItemsFromProperties", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::InputControlLayout_ControlItem>*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type, controlLayouts, layoutName);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout::AddControlItemsFromMembers(::ArrayW<::System::Reflection::MemberInfo*>  members, ::System::Collections::Generic::List_1<::GlobalNamespace::InputControlLayout_ControlItem>*  controlItems, ::StringW  layoutName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"AddControlItemsFromMembers", {}, {::i2c::type_of<::ArrayW<::System::Reflection::MemberInfo*>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::InputControlLayout_ControlItem>*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, members, controlItems, layoutName);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout::AddControlItemsFromMember(::System::Reflection::MemberInfo*  member, ::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlAttribute*>  attributes, ::System::Collections::Generic::List_1<::GlobalNamespace::InputControlLayout_ControlItem>*  controlItems)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"AddControlItemsFromMember", {}, {::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlAttribute*>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::InputControlLayout_ControlItem>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, member, attributes, controlItems);
}
inline ::GlobalNamespace::InputControlLayout_ControlItem UnityEngine::InputSystem::Layouts::InputControlLayout::CreateControlItemFromMember(::System::Reflection::MemberInfo*  member, ::UnityEngine::InputSystem::Layouts::InputControlAttribute*  attribute)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"CreateControlItemFromMember", {}, {::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputControlAttribute*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputControlLayout_ControlItem>(nullptr, ___internal_method, member, attribute);
}
inline ::StringW UnityEngine::InputSystem::Layouts::InputControlLayout::InferLayoutFromValueType(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"InferLayoutFromValueType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, type);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout::MergeLayout(::UnityEngine::InputSystem::Layouts::InputControlLayout*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"MergeLayout", {}, {::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::InputControlLayout_ControlItem>* UnityEngine::InputSystem::Layouts::InputControlLayout::CreateLookupTableForControls(::ArrayW<::GlobalNamespace::InputControlLayout_ControlItem>  controlItems, ::System::Collections::Generic::List_1<::StringW>*  variants)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"CreateLookupTableForControls", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::InputControlLayout_ControlItem>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::InputControlLayout_ControlItem>*>(nullptr, ___internal_method, controlItems, variants);
}
inline bool UnityEngine::InputSystem::Layouts::InputControlLayout::VariantsMatch(::UnityEngine::InputSystem::Utilities::InternedString  expected, ::UnityEngine::InputSystem::Utilities::InternedString  actual)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"VariantsMatch", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, expected, actual);
}
inline bool UnityEngine::InputSystem::Layouts::InputControlLayout::VariantsMatch(::StringW  expected, ::StringW  actual)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"VariantsMatch", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, expected, actual);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout::ParseHeaderFieldsFromJson(::StringW  json, ::by_ref<::UnityEngine::InputSystem::Utilities::InternedString>  name, ::by_ref<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>>  baseLayouts, ::by_ref<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>  deviceMatcher)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"ParseHeaderFieldsFromJson", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Utilities::InternedString>>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>>>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, json, name, baseLayouts, deviceMatcher);
}
inline ::by_ref<::GlobalNamespace::InputControlLayout_Cache> UnityEngine::InputSystem::Layouts::InputControlLayout::get_cache()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"get_cache", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::GlobalNamespace::InputControlLayout_Cache>>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::InputControlLayout_CacheRefInstance UnityEngine::InputSystem::Layouts::InputControlLayout::CacheRef()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"CacheRef", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputControlLayout_CacheRefInstance>(nullptr, ___internal_method);
}
inline bool UnityEngine::InputSystem::Layouts::InputControlLayout::_MergeLayout_b__77_0(::GlobalNamespace::InputControlLayout_ControlItem  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(),
                        {"<MergeLayout>b__77_0", {}, {::i2c::type_of<::GlobalNamespace::InputControlLayout_ControlItem>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* UnityEngine::InputSystem::Layouts::InputControlLayout::New_ctor(::StringW  name, ::System::Type*  type)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(name, type));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Layouts::InputControlLayout::InputControlLayout()   {
}
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout___c::*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb008320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout___c._FromType_b__52_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (::UnityEngine::InputSystem::Layouts::InputControlLayout___c::*)(::StringW)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout___c::_FromType_b__52_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb008328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout___c*>(),
                        {"<FromType>b__52_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout___c._CreateControlItemFromMember_b__75_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (::UnityEngine::InputSystem::Layouts::InputControlLayout___c::*)(::StringW)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout___c::_CreateControlItemFromMember_b__75_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb008350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout___c*>(),
                        {"<CreateControlItemFromMember>b__75_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout___c._CreateControlItemFromMember_b__75_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (::UnityEngine::InputSystem::Layouts::InputControlLayout___c::*)(::StringW)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout___c::_CreateControlItemFromMember_b__75_1)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb008378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout___c*>(),
                        {"<CreateControlItemFromMember>b__75_1", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Layouts::InputControlLayout___c::setStaticF___9(::UnityEngine::InputSystem::Layouts::InputControlLayout___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::InputSystem::Layouts::InputControlLayout___c*, "<>9", ::UnityEngine::InputSystem::Layouts::InputControlLayout___c*>(std::forward<::UnityEngine::InputSystem::Layouts::InputControlLayout___c*>(value));
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout___c* UnityEngine::InputSystem::Layouts::InputControlLayout___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Layouts::InputControlLayout___c*, "<>9", ::UnityEngine::InputSystem::Layouts::InputControlLayout___c*>();
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout___c::setStaticF___9__52_0(::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>*, "<>9__52_0", ::UnityEngine::InputSystem::Layouts::InputControlLayout___c*>(std::forward<::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>*>(value));
}
inline ::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>* UnityEngine::InputSystem::Layouts::InputControlLayout___c::getStaticF___9__52_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>*, "<>9__52_0", ::UnityEngine::InputSystem::Layouts::InputControlLayout___c*>();
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout___c::setStaticF___9__75_0(::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>*, "<>9__75_0", ::UnityEngine::InputSystem::Layouts::InputControlLayout___c*>(std::forward<::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>*>(value));
}
inline ::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>* UnityEngine::InputSystem::Layouts::InputControlLayout___c::getStaticF___9__75_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>*, "<>9__75_0", ::UnityEngine::InputSystem::Layouts::InputControlLayout___c*>();
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout___c::setStaticF___9__75_1(::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>*, "<>9__75_1", ::UnityEngine::InputSystem::Layouts::InputControlLayout___c*>(std::forward<::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>*>(value));
}
inline ::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>* UnityEngine::InputSystem::Layouts::InputControlLayout___c::getStaticF___9__75_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>*, "<>9__75_1", ::UnityEngine::InputSystem::Layouts::InputControlLayout___c*>();
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::InputControlLayout___c::_FromType_b__52_0(::StringW  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout___c*>(),
                        {"<FromType>b__52_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString>(this, ___internal_method, x);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::InputControlLayout___c::_CreateControlItemFromMember_b__75_0(::StringW  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout___c*>(),
                        {"<CreateControlItemFromMember>b__75_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString>(this, ___internal_method, x);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::InputControlLayout___c::_CreateControlItemFromMember_b__75_1(::StringW  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout___c*>(),
                        {"<CreateControlItemFromMember>b__75_1", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString>(this, ___internal_method, x);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout___c* UnityEngine::InputSystem::Layouts::InputControlLayout___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Layouts::InputControlLayout___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Layouts::InputControlLayout___c::InputControlLayout___c()   {
}
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException.get_layout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException::*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException::get_layout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb008048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException*>(),
                        {"get_layout", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException::*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb008050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException::*)(::StringW, ::StringW)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb0080a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException::*)(::StringW)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xb0072c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException::*)(::StringW, ::System::Exception*)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xb008124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb008194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException::__cordl_internal_get__layout_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layout_k__BackingField;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException::__cordl_internal_get__layout_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layout_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException::__cordl_internal_set__layout_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____layout_k__BackingField = value;
}
inline ::StringW UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException::get_layout()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException*>(),
                        {"get_layout", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException::_ctor(::StringW  name, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, message);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException::_ctor(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException::_ctor(::StringW  message, ::System::Exception*  innerException)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, innerException);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException::_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException* UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException*>());
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException* UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException::New_ctor(::StringW  name, ::StringW  message)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException*>(name, message));
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException* UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException::New_ctor(::StringW  name)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException*>(name));
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException* UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException::New_ctor(::StringW  message, ::System::Exception*  innerException)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException*>(message, innerException));
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException* UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException::New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException*>(info, context));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException::InputControlLayout_LayoutNotFoundException()   {
}
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::*)(int32_t)>(&::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb007b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::*)()>(&::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb007e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::*)()>(&::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::MoveNext)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xb007e14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24.System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_Utilities_InternedString__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::*)()>(&::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_Utilities_InternedString__get_Current)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb007ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24*>(),
                        {"System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.Utilities.InternedString>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::*)()>(&::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb007ee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::*)()>(&::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb007f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24.System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_Utilities_InternedString__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InternedString>* (::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::*)()>(&::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_Utilities_InternedString__GetEnumerator)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb007f78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24*>(),
                        {"System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.Utilities.InternedString>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::*)()>(&::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb008044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::InternedString& UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::__cordl_internal_set___2__current(::UnityEngine::InputSystem::Utilities::InternedString  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr int32_t const& UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr void UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
constexpr bool& UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::__cordl_internal_get_includeSelf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___includeSelf;
}
constexpr bool const& UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::__cordl_internal_get_includeSelf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___includeSelf;
}
constexpr void UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::__cordl_internal_set_includeSelf(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___includeSelf = value;
}
constexpr bool& UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::__cordl_internal_get___3__includeSelf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__includeSelf;
}
constexpr bool const& UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::__cordl_internal_get___3__includeSelf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__includeSelf;
}
constexpr void UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::__cordl_internal_set___3__includeSelf(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____3__includeSelf = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::InternedString& UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::__cordl_internal_get_layout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layout;
}
constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::__cordl_internal_get_layout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layout;
}
constexpr void UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::__cordl_internal_set_layout(::UnityEngine::InputSystem::Utilities::InternedString  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layout = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::InternedString& UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::__cordl_internal_get___3__layout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__layout;
}
constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::__cordl_internal_get___3__layout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__layout;
}
constexpr void UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::__cordl_internal_set___3__layout(::UnityEngine::InputSystem::Utilities::InternedString  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____3__layout = value;
}
constexpr ::GlobalNamespace::InputControlLayout_Collection& UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::GlobalNamespace::InputControlLayout_Collection const& UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::__cordl_internal_set___4__this(::GlobalNamespace::InputControlLayout_Collection  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::InputControlLayout_Collection& UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::__cordl_internal_get___3____4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3____4__this;
}
constexpr ::GlobalNamespace::InputControlLayout_Collection const& UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::__cordl_internal_get___3____4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3____4__this;
}
constexpr void UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::__cordl_internal_set___3____4__this(::GlobalNamespace::InputControlLayout_Collection  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____3____4__this = value;
}
inline void UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_Utilities_InternedString__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24*>(),
                        {"System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.Utilities.InternedString>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InternedString>* UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_Utilities_InternedString__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24*>(),
                        {"System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.Utilities.InternedString>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InternedString>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24* UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>"
constexpr  UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>* UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::i___System__Collections__Generic__IEnumerable_1___UnityEngine__InputSystem__Utilities__InternedString_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InternedString>"
constexpr  UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InternedString>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InternedString>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InternedString>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InternedString>* UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::i___System__Collections__Generic__IEnumerator_1___UnityEngine__InputSystem__Utilities__InternedString_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InternedString>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24::Collection_InputControlLayout__GetBaseLayouts_d__24()   {
}
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb006764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson.ToLayout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputControlLayout_ControlItem (::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::ToLayout)> {
  constexpr static std::size_t size = 0x6a8;
  constexpr static std::size_t addrs = 0xb00588c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson*>(),
                        {"ToLayout", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson.FromControlItems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson*> (*)(::ArrayW<::GlobalNamespace::InputControlLayout_ControlItem>)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::FromControlItems)> {
  constexpr static std::size_t size = 0x750;
  constexpr static std::size_t addrs = 0xb005f34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson*>(),
                        {"FromControlItems", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::InputControlLayout_ControlItem>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
constexpr ::StringW& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_layout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layout;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_layout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layout;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_set_layout(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layout = value;
}
constexpr ::StringW& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_variants()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___variants;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_variants() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___variants;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_set_variants(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___variants = value;
}
constexpr ::StringW& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_usage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___usage;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_usage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___usage;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_set_usage(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___usage = value;
}
constexpr ::StringW& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_alias()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alias;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_alias() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alias;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_set_alias(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___alias = value;
}
constexpr ::StringW& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_useStateFrom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useStateFrom;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_useStateFrom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useStateFrom;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_set_useStateFrom(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useStateFrom = value;
}
constexpr uint32_t& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr uint32_t const& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_set_offset(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offset = value;
}
constexpr uint32_t& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_bit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bit;
}
constexpr uint32_t const& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_bit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bit;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_set_bit(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bit = value;
}
constexpr uint32_t& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_sizeInBits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sizeInBits;
}
constexpr uint32_t const& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_sizeInBits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sizeInBits;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_set_sizeInBits(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sizeInBits = value;
}
constexpr ::StringW& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_format()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___format;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_format() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___format;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_set_format(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___format = value;
}
constexpr int32_t& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_arraySize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arraySize;
}
constexpr int32_t const& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_arraySize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arraySize;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_set_arraySize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___arraySize = value;
}
constexpr ::ArrayW<::StringW>& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_usages()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___usages;
}
constexpr ::ArrayW<::StringW> const& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_usages() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___usages;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_set_usages(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___usages = value;
}
constexpr ::ArrayW<::StringW>& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_aliases()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aliases;
}
constexpr ::ArrayW<::StringW> const& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_aliases() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aliases;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_set_aliases(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___aliases = value;
}
constexpr ::StringW& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_parameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parameters;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_parameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parameters;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_set_parameters(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parameters = value;
}
constexpr ::StringW& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_processors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___processors;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_processors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___processors;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_set_processors(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___processors = value;
}
constexpr ::StringW& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_displayName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayName;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_displayName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayName;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_set_displayName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___displayName = value;
}
constexpr ::StringW& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_shortDisplayName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shortDisplayName;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_shortDisplayName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shortDisplayName;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_set_shortDisplayName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shortDisplayName = value;
}
constexpr bool& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_noisy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noisy;
}
constexpr bool const& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_noisy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noisy;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_set_noisy(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noisy = value;
}
constexpr bool& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_dontReset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dontReset;
}
constexpr bool const& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_dontReset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dontReset;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_set_dontReset(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dontReset = value;
}
constexpr bool& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_synthetic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___synthetic;
}
constexpr bool const& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_synthetic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___synthetic;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_set_synthetic(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___synthetic = value;
}
constexpr ::StringW& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_defaultState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultState;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_defaultState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultState;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_set_defaultState(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultState = value;
}
constexpr ::StringW& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_minValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minValue;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_minValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minValue;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_set_minValue(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minValue = value;
}
constexpr ::StringW& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_maxValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxValue;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_get_maxValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxValue;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::__cordl_internal_set_maxValue(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxValue = value;
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::InputControlLayout_ControlItem UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::ToLayout()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson*>(),
                        {"ToLayout", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputControlLayout_ControlItem>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson*> UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::FromControlItems(::ArrayW<::GlobalNamespace::InputControlLayout_ControlItem>  items)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson*>(),
                        {"FromControlItems", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::InputControlLayout_ControlItem>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson*>>(nullptr, ___internal_method, items);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson* UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson::InputControlLayout_ControlItemJson()   {
}
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::*)()>(&::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0067ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c._ToLayout_b__24_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::*)(::StringW)>(&::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::_ToLayout_b__24_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb0067f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>(),
                        {"<ToLayout>b__24_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c._ToLayout_b__24_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::*)(::StringW)>(&::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::_ToLayout_b__24_1)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb00681c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>(),
                        {"<ToLayout>b__24_1", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c._FromControlItems_b__25_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::*)(::UnityEngine::InputSystem::Utilities::NamedValue)>(&::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::_FromControlItems_b__25_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb006844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>(),
                        {"<FromControlItems>b__25_0", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::NamedValue>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c._FromControlItems_b__25_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::*)(::UnityEngine::InputSystem::Utilities::NameAndParameters)>(&::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::_FromControlItems_b__25_1)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb006850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>(),
                        {"<FromControlItems>b__25_1", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::NameAndParameters>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c._FromControlItems_b__25_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::*)(::UnityEngine::InputSystem::Utilities::InternedString)>(&::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::_FromControlItems_b__25_2)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb00685c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>(),
                        {"<FromControlItems>b__25_2", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c._FromControlItems_b__25_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::*)(::UnityEngine::InputSystem::Utilities::InternedString)>(&::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::_FromControlItems_b__25_3)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb006880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>(),
                        {"<FromControlItems>b__25_3", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::setStaticF___9(::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*, "<>9", ::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>(std::forward<::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>(value));
}
inline ::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c* UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*, "<>9", ::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>();
}
inline void UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::setStaticF___9__24_0(::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>*, "<>9__24_0", ::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>(std::forward<::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>*>(value));
}
inline ::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>* UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::getStaticF___9__24_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>*, "<>9__24_0", ::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>();
}
inline void UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::setStaticF___9__24_1(::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>*, "<>9__24_1", ::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>(std::forward<::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>*>(value));
}
inline ::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>* UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::getStaticF___9__24_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>*, "<>9__24_1", ::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>();
}
inline void UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::setStaticF___9__25_0(::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue,::StringW>*, "<>9__25_0", ::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>(std::forward<::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue,::StringW>*>(value));
}
inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue,::StringW>* UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::getStaticF___9__25_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue,::StringW>*, "<>9__25_0", ::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>();
}
inline void UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::setStaticF___9__25_1(::System::Func_2<::UnityEngine::InputSystem::Utilities::NameAndParameters,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::NameAndParameters,::StringW>*, "<>9__25_1", ::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>(std::forward<::System::Func_2<::UnityEngine::InputSystem::Utilities::NameAndParameters,::StringW>*>(value));
}
inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::NameAndParameters,::StringW>* UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::getStaticF___9__25_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::NameAndParameters,::StringW>*, "<>9__25_1", ::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>();
}
inline void UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::setStaticF___9__25_2(::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>*, "<>9__25_2", ::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>(std::forward<::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>*>(value));
}
inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>* UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::getStaticF___9__25_2()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>*, "<>9__25_2", ::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>();
}
inline void UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::setStaticF___9__25_3(::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>*, "<>9__25_3", ::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>(std::forward<::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>*>(value));
}
inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>* UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::getStaticF___9__25_3()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>*, "<>9__25_3", ::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>();
}
inline void UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::_ToLayout_b__24_0(::StringW  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>(),
                        {"<ToLayout>b__24_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString>(this, ___internal_method, x);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::_ToLayout_b__24_1(::StringW  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>(),
                        {"<ToLayout>b__24_1", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString>(this, ___internal_method, x);
}
inline ::StringW UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::_FromControlItems_b__25_0(::UnityEngine::InputSystem::Utilities::NamedValue  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>(),
                        {"<FromControlItems>b__25_0", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::NamedValue>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, x);
}
inline ::StringW UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::_FromControlItems_b__25_1(::UnityEngine::InputSystem::Utilities::NameAndParameters  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>(),
                        {"<FromControlItems>b__25_1", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::NameAndParameters>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, x);
}
inline ::StringW UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::_FromControlItems_b__25_2(::UnityEngine::InputSystem::Utilities::InternedString  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>(),
                        {"<FromControlItems>b__25_2", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, x);
}
inline ::StringW UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::_FromControlItems_b__25_3(::UnityEngine::InputSystem::Utilities::InternedString  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>(),
                        {"<FromControlItems>b__25_3", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, x);
}
inline ::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c* UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c::ControlItemJson_InputControlLayout___c()   {
}
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c::*)()>(&::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0066ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c._ToLayout_b__14_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c::*)(::StringW)>(&::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c::_ToLayout_b__14_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb0066f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c*>(),
                        {"<ToLayout>b__14_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c._FromLayout_b__15_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c::*)(::UnityEngine::InputSystem::Utilities::InternedString)>(&::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c::_FromLayout_b__15_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb00671c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c*>(),
                        {"<FromLayout>b__15_0", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c._FromLayout_b__15_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c::*)(::UnityEngine::InputSystem::Utilities::InternedString)>(&::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c::_FromLayout_b__15_1)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb006740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c*>(),
                        {"<FromLayout>b__15_1", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c::setStaticF___9(::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c*, "<>9", ::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c*>(std::forward<::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c*>(value));
}
inline ::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c* UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c*, "<>9", ::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c*>();
}
inline void UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c::setStaticF___9__14_0(::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>*, "<>9__14_0", ::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c*>(std::forward<::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>*>(value));
}
inline ::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>* UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c::getStaticF___9__14_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>*, "<>9__14_0", ::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c*>();
}
inline void UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c::setStaticF___9__15_0(::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>*, "<>9__15_0", ::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c*>(std::forward<::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>*>(value));
}
inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>* UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c::getStaticF___9__15_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>*, "<>9__15_0", ::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c*>();
}
inline void UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c::setStaticF___9__15_1(::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>*, "<>9__15_1", ::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c*>(std::forward<::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>*>(value));
}
inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>* UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c::getStaticF___9__15_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>*, "<>9__15_1", ::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c*>();
}
inline void UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c::_ToLayout_b__14_0(::StringW  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c*>(),
                        {"<ToLayout>b__14_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString>(this, ___internal_method, x);
}
inline ::StringW UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c::_FromLayout_b__15_0(::UnityEngine::InputSystem::Utilities::InternedString  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c*>(),
                        {"<FromLayout>b__15_0", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, x);
}
inline ::StringW UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c::_FromLayout_b__15_1(::UnityEngine::InputSystem::Utilities::InternedString  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c*>(),
                        {"<FromLayout>b__15_1", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, x);
}
inline ::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c* UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c::LayoutJson_InputControlLayout___c()   {
}
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder.get_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0048a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(),
                        {"get_name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder.set_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::*)(::StringW)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::set_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0048ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(),
                        {"set_name", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder.get_displayName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::get_displayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0048b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(),
                        {"get_displayName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder.set_displayName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::*)(::StringW)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::set_displayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0048bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(),
                        {"set_displayName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder.get_type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0048c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(),
                        {"get_type", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder.set_type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::*)(::System::Type*)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::set_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0048cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(),
                        {"set_type", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder.get_stateFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::get_stateFormat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0048d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(),
                        {"get_stateFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder.set_stateFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::*)(::UnityEngine::InputSystem::Utilities::FourCC)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::set_stateFormat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0048dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(),
                        {"set_stateFormat", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::FourCC>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder.get_stateSizeInBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::get_stateSizeInBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0048e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(),
                        {"get_stateSizeInBytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder.set_stateSizeInBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::*)(int32_t)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::set_stateSizeInBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0048ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(),
                        {"set_stateSizeInBytes", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder.get_extendsLayout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::get_extendsLayout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0048f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(),
                        {"get_extendsLayout", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder.set_extendsLayout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::*)(::StringW)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::set_extendsLayout)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb0048fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(),
                        {"set_extendsLayout", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder.get_updateBeforeRender
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<bool> (::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::get_updateBeforeRender)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb004934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(),
                        {"get_updateBeforeRender", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder.set_updateBeforeRender
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::*)(::System::Nullable_1<bool>)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::set_updateBeforeRender)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb00493c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(),
                        {"set_updateBeforeRender", {}, {::i2c::type_of<::System::Nullable_1<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder.get_controls
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::GlobalNamespace::InputControlLayout_ControlItem> (::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::get_controls)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb004944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(),
                        {"get_controls", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder.AddControl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Builder_InputControlLayout_ControlBuilder (::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::*)(::StringW)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::AddControl)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xb0049ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(),
                        {"AddControl", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder.WithName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder* (::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::*)(::StringW)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::WithName)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb004b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(),
                        {"WithName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder.WithDisplayName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder* (::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::*)(::StringW)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::WithDisplayName)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb004b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(),
                        {"WithDisplayName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder.WithFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder* (::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::*)(::UnityEngine::InputSystem::Utilities::FourCC)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::WithFormat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb004b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(),
                        {"WithFormat", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::FourCC>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder.WithFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder* (::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::*)(::StringW)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::WithFormat)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb004b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(),
                        {"WithFormat", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder.WithSizeInBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder* (::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::*)(int32_t)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::WithSizeInBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb004b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(),
                        {"WithSizeInBytes", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder.Extend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder* (::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::*)(::StringW)>(&::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::Extend)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb004b8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(),
                        {"Extend", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder.Build
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout* (::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::Build)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0xb004bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(),
                        {"Build", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::*)()>(&::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb004e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::__cordl_internal_get__name_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name_k__BackingField;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::__cordl_internal_get__name_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::__cordl_internal_set__name_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____name_k__BackingField = value;
}
constexpr ::StringW& UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::__cordl_internal_get__displayName_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____displayName_k__BackingField;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::__cordl_internal_get__displayName_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____displayName_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::__cordl_internal_set__displayName_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____displayName_k__BackingField = value;
}
constexpr ::System::Type*& UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::__cordl_internal_get__type_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____type_k__BackingField;
}
constexpr ::System::Type* const& UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::__cordl_internal_get__type_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____type_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::__cordl_internal_set__type_k__BackingField(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____type_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::FourCC& UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::__cordl_internal_get__stateFormat_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stateFormat_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Utilities::FourCC const& UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::__cordl_internal_get__stateFormat_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stateFormat_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::__cordl_internal_set__stateFormat_k__BackingField(::UnityEngine::InputSystem::Utilities::FourCC  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stateFormat_k__BackingField = value;
}
constexpr int32_t& UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::__cordl_internal_get__stateSizeInBytes_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stateSizeInBytes_k__BackingField;
}
constexpr int32_t const& UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::__cordl_internal_get__stateSizeInBytes_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stateSizeInBytes_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::__cordl_internal_set__stateSizeInBytes_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stateSizeInBytes_k__BackingField = value;
}
constexpr ::StringW& UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::__cordl_internal_get_m_ExtendsLayout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ExtendsLayout;
}
constexpr ::StringW const& UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::__cordl_internal_get_m_ExtendsLayout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ExtendsLayout;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::__cordl_internal_set_m_ExtendsLayout(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ExtendsLayout = value;
}
constexpr ::System::Nullable_1<bool>& UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::__cordl_internal_get__updateBeforeRender_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updateBeforeRender_k__BackingField;
}
constexpr ::System::Nullable_1<bool> const& UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::__cordl_internal_get__updateBeforeRender_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updateBeforeRender_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::__cordl_internal_set__updateBeforeRender_k__BackingField(::System::Nullable_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____updateBeforeRender_k__BackingField = value;
}
constexpr int32_t& UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::__cordl_internal_get_m_ControlCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ControlCount;
}
constexpr int32_t const& UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::__cordl_internal_get_m_ControlCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ControlCount;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::__cordl_internal_set_m_ControlCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ControlCount = value;
}
constexpr ::ArrayW<::GlobalNamespace::InputControlLayout_ControlItem>& UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::__cordl_internal_get_m_Controls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Controls;
}
constexpr ::ArrayW<::GlobalNamespace::InputControlLayout_ControlItem> const& UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::__cordl_internal_get_m_Controls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Controls;
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::__cordl_internal_set_m_Controls(::ArrayW<::GlobalNamespace::InputControlLayout_ControlItem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Controls = value;
}
inline ::StringW UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::get_name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(),
                        {"get_name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::set_name(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(),
                        {"set_name", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::get_displayName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(),
                        {"get_displayName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::set_displayName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(),
                        {"set_displayName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Type* UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::get_type()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(),
                        {"get_type", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::set_type(::System::Type*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(),
                        {"set_type", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::get_stateFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(),
                        {"get_stateFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::set_stateFormat(::UnityEngine::InputSystem::Utilities::FourCC  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(),
                        {"set_stateFormat", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::FourCC>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::get_stateSizeInBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(),
                        {"get_stateSizeInBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::set_stateSizeInBytes(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(),
                        {"set_stateSizeInBytes", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::get_extendsLayout()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(),
                        {"get_extendsLayout", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::set_extendsLayout(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(),
                        {"set_extendsLayout", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<bool> UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::get_updateBeforeRender()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(),
                        {"get_updateBeforeRender", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<bool>>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::set_updateBeforeRender(::System::Nullable_1<bool>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(),
                        {"set_updateBeforeRender", {}, {::i2c::type_of<::System::Nullable_1<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::GlobalNamespace::InputControlLayout_ControlItem> UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::get_controls()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(),
                        {"get_controls", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::GlobalNamespace::InputControlLayout_ControlItem>>(this, ___internal_method);
}
inline ::GlobalNamespace::Builder_InputControlLayout_ControlBuilder UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::AddControl(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(),
                        {"AddControl", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Builder_InputControlLayout_ControlBuilder>(this, ___internal_method, name);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder* UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::WithName(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(),
                        {"WithName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(this, ___internal_method, name);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder* UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::WithDisplayName(::StringW  displayName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(),
                        {"WithDisplayName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(this, ___internal_method, displayName);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::InputSystem::InputControl*>)
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder* UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::WithType()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(),
                    {"WithType", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder* UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::WithFormat(::UnityEngine::InputSystem::Utilities::FourCC  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(),
                        {"WithFormat", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::FourCC>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(this, ___internal_method, format);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder* UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::WithFormat(::StringW  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(),
                        {"WithFormat", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(this, ___internal_method, format);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder* UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::WithSizeInBytes(int32_t  sizeInBytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(),
                        {"WithSizeInBytes", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(this, ___internal_method, sizeInBytes);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder* UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::Extend(::StringW  baseLayoutName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(),
                        {"Extend", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(this, ___internal_method, baseLayoutName);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::Build()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(),
                        {"Build", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder* UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder::InputControlLayout_Builder()   {
}
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c::*)()>(&::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb00585c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c._WithUsages_b__14_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c::*)(::StringW)>(&::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c::_WithUsages_b__14_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb005864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c*>(),
                        {"<WithUsages>b__14_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c::setStaticF___9(::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c*, "<>9", ::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c*>(std::forward<::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c*>(value));
}
inline ::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c* UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c*, "<>9", ::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c*>();
}
inline void UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c::setStaticF___9__14_0(::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>*, "<>9__14_0", ::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c*>(std::forward<::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>*>(value));
}
inline ::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>* UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c::getStaticF___9__14_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>*, "<>9__14_0", ::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c*>();
}
inline void UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c::_WithUsages_b__14_0(::StringW  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c*>(),
                        {"<WithUsages>b__14_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString>(this, ___internal_method, x);
}
inline ::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c* UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c::ControlBuilder_Builder_InputControlLayout___c()   {
}
