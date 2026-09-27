#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Layouts/InputControlLayout_ControlItem.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_ControlItem_Flags_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__NameAndParameters_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__NamedValue_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__PrimitiveValue_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_impl.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_ControlItem_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_ControlItem_Flags_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__NameAndParameters_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__NamedValue_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__PrimitiveValue_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_ControlItem.get_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (::GlobalNamespace::InputControlLayout_ControlItem::*)()>(&::GlobalNamespace::InputControlLayout_ControlItem::get_name)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb0046f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"get_name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_ControlItem.set_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputControlLayout_ControlItem::*)(::UnityEngine::InputSystem::Utilities::InternedString)>(&::GlobalNamespace::InputControlLayout_ControlItem::set_name)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb0046fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"set_name", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_ControlItem.get_layout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (::GlobalNamespace::InputControlLayout_ControlItem::*)()>(&::GlobalNamespace::InputControlLayout_ControlItem::get_layout)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb00470c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"get_layout", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_ControlItem.set_layout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputControlLayout_ControlItem::*)(::UnityEngine::InputSystem::Utilities::InternedString)>(&::GlobalNamespace::InputControlLayout_ControlItem::set_layout)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb004718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"set_layout", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_ControlItem.get_variants
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::InternedString (::GlobalNamespace::InputControlLayout_ControlItem::*)()>(&::GlobalNamespace::InputControlLayout_ControlItem::get_variants)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb004724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"get_variants", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_ControlItem.set_variants
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputControlLayout_ControlItem::*)(::UnityEngine::InputSystem::Utilities::InternedString)>(&::GlobalNamespace::InputControlLayout_ControlItem::set_variants)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb004730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"set_variants", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_ControlItem.get_useStateFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::InputControlLayout_ControlItem::*)()>(&::GlobalNamespace::InputControlLayout_ControlItem::get_useStateFrom)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb00473c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"get_useStateFrom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_ControlItem.set_useStateFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputControlLayout_ControlItem::*)(::StringW)>(&::GlobalNamespace::InputControlLayout_ControlItem::set_useStateFrom)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb004744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"set_useStateFrom", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_ControlItem.get_displayName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::InputControlLayout_ControlItem::*)()>(&::GlobalNamespace::InputControlLayout_ControlItem::get_displayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb00474c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"get_displayName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_ControlItem.set_displayName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputControlLayout_ControlItem::*)(::StringW)>(&::GlobalNamespace::InputControlLayout_ControlItem::set_displayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb004754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"set_displayName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_ControlItem.get_shortDisplayName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::InputControlLayout_ControlItem::*)()>(&::GlobalNamespace::InputControlLayout_ControlItem::get_shortDisplayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb00475c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"get_shortDisplayName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_ControlItem.set_shortDisplayName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputControlLayout_ControlItem::*)(::StringW)>(&::GlobalNamespace::InputControlLayout_ControlItem::set_shortDisplayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb004764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"set_shortDisplayName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_ControlItem.get_usages
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> (::GlobalNamespace::InputControlLayout_ControlItem::*)()>(&::GlobalNamespace::InputControlLayout_ControlItem::get_usages)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb00476c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"get_usages", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_ControlItem.set_usages
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputControlLayout_ControlItem::*)(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>)>(&::GlobalNamespace::InputControlLayout_ControlItem::set_usages)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb004778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"set_usages", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_ControlItem.get_aliases
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> (::GlobalNamespace::InputControlLayout_ControlItem::*)()>(&::GlobalNamespace::InputControlLayout_ControlItem::get_aliases)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb004784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"get_aliases", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_ControlItem.set_aliases
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputControlLayout_ControlItem::*)(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>)>(&::GlobalNamespace::InputControlLayout_ControlItem::set_aliases)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb004790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"set_aliases", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_ControlItem.get_parameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue> (::GlobalNamespace::InputControlLayout_ControlItem::*)()>(&::GlobalNamespace::InputControlLayout_ControlItem::get_parameters)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb00479c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"get_parameters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_ControlItem.set_parameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputControlLayout_ControlItem::*)(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue>)>(&::GlobalNamespace::InputControlLayout_ControlItem::set_parameters)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb0047a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"set_parameters", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_ControlItem.get_processors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters> (::GlobalNamespace::InputControlLayout_ControlItem::*)()>(&::GlobalNamespace::InputControlLayout_ControlItem::get_processors)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb0047b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"get_processors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_ControlItem.set_processors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputControlLayout_ControlItem::*)(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>)>(&::GlobalNamespace::InputControlLayout_ControlItem::set_processors)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb0047c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"set_processors", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_ControlItem.get_offset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::GlobalNamespace::InputControlLayout_ControlItem::*)()>(&::GlobalNamespace::InputControlLayout_ControlItem::get_offset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0047cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"get_offset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_ControlItem.set_offset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputControlLayout_ControlItem::*)(uint32_t)>(&::GlobalNamespace::InputControlLayout_ControlItem::set_offset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0047d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"set_offset", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_ControlItem.get_bit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::GlobalNamespace::InputControlLayout_ControlItem::*)()>(&::GlobalNamespace::InputControlLayout_ControlItem::get_bit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0047dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"get_bit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_ControlItem.set_bit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputControlLayout_ControlItem::*)(uint32_t)>(&::GlobalNamespace::InputControlLayout_ControlItem::set_bit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0047e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"set_bit", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_ControlItem.get_sizeInBits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::GlobalNamespace::InputControlLayout_ControlItem::*)()>(&::GlobalNamespace::InputControlLayout_ControlItem::get_sizeInBits)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0047ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"get_sizeInBits", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_ControlItem.set_sizeInBits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputControlLayout_ControlItem::*)(uint32_t)>(&::GlobalNamespace::InputControlLayout_ControlItem::set_sizeInBits)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0047f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"set_sizeInBits", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_ControlItem.get_format
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::GlobalNamespace::InputControlLayout_ControlItem::*)()>(&::GlobalNamespace::InputControlLayout_ControlItem::get_format)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0047fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"get_format", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_ControlItem.set_format
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputControlLayout_ControlItem::*)(::UnityEngine::InputSystem::Utilities::FourCC)>(&::GlobalNamespace::InputControlLayout_ControlItem::set_format)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb004804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"set_format", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::FourCC>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_ControlItem.get_flags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ControlItem_InputControlLayout_Flags (::GlobalNamespace::InputControlLayout_ControlItem::*)()>(&::GlobalNamespace::InputControlLayout_ControlItem::get_flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb00480c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"get_flags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_ControlItem.set_flags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputControlLayout_ControlItem::*)(::GlobalNamespace::ControlItem_InputControlLayout_Flags)>(&::GlobalNamespace::InputControlLayout_ControlItem::set_flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb004814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"set_flags", {}, {::i2c::type_of<::GlobalNamespace::ControlItem_InputControlLayout_Flags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_ControlItem.get_arraySize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::InputControlLayout_ControlItem::*)()>(&::GlobalNamespace::InputControlLayout_ControlItem::get_arraySize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb00481c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"get_arraySize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_ControlItem.set_arraySize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputControlLayout_ControlItem::*)(int32_t)>(&::GlobalNamespace::InputControlLayout_ControlItem::set_arraySize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb004824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"set_arraySize", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_ControlItem.get_defaultState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::PrimitiveValue (::GlobalNamespace::InputControlLayout_ControlItem::*)()>(&::GlobalNamespace::InputControlLayout_ControlItem::get_defaultState)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb00482c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"get_defaultState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_ControlItem.set_defaultState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputControlLayout_ControlItem::*)(::UnityEngine::InputSystem::Utilities::PrimitiveValue)>(&::GlobalNamespace::InputControlLayout_ControlItem::set_defaultState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb004838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"set_defaultState", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::PrimitiveValue>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_ControlItem.get_minValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::PrimitiveValue (::GlobalNamespace::InputControlLayout_ControlItem::*)()>(&::GlobalNamespace::InputControlLayout_ControlItem::get_minValue)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb004840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"get_minValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_ControlItem.set_minValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputControlLayout_ControlItem::*)(::UnityEngine::InputSystem::Utilities::PrimitiveValue)>(&::GlobalNamespace::InputControlLayout_ControlItem::set_minValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb00484c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"set_minValue", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::PrimitiveValue>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_ControlItem.get_maxValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::PrimitiveValue (::GlobalNamespace::InputControlLayout_ControlItem::*)()>(&::GlobalNamespace::InputControlLayout_ControlItem::get_maxValue)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb004854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"get_maxValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_ControlItem.set_maxValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputControlLayout_ControlItem::*)(::UnityEngine::InputSystem::Utilities::PrimitiveValue)>(&::GlobalNamespace::InputControlLayout_ControlItem::set_maxValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb004860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"set_maxValue", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::PrimitiveValue>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_ControlItem.get_isModifyingExistingControl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::InputControlLayout_ControlItem::*)()>(&::GlobalNamespace::InputControlLayout_ControlItem::get_isModifyingExistingControl)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb004868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"get_isModifyingExistingControl", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_ControlItem.set_isModifyingExistingControl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputControlLayout_ControlItem::*)(bool)>(&::GlobalNamespace::InputControlLayout_ControlItem::set_isModifyingExistingControl)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb0024a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"set_isModifyingExistingControl", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_ControlItem.get_isNoisy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::InputControlLayout_ControlItem::*)()>(&::GlobalNamespace::InputControlLayout_ControlItem::get_isNoisy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb004874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"get_isNoisy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_ControlItem.set_isNoisy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputControlLayout_ControlItem::*)(bool)>(&::GlobalNamespace::InputControlLayout_ControlItem::set_isNoisy)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb0024d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"set_isNoisy", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_ControlItem.get_isSynthetic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::InputControlLayout_ControlItem::*)()>(&::GlobalNamespace::InputControlLayout_ControlItem::get_isSynthetic)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb004880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"get_isSynthetic", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_ControlItem.set_isSynthetic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputControlLayout_ControlItem::*)(bool)>(&::GlobalNamespace::InputControlLayout_ControlItem::set_isSynthetic)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb002514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"set_isSynthetic", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_ControlItem.get_dontReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::InputControlLayout_ControlItem::*)()>(&::GlobalNamespace::InputControlLayout_ControlItem::get_dontReset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb00488c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"get_dontReset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_ControlItem.set_dontReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputControlLayout_ControlItem::*)(bool)>(&::GlobalNamespace::InputControlLayout_ControlItem::set_dontReset)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb0024f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"set_dontReset", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_ControlItem.get_isFirstDefinedInThisLayout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::InputControlLayout_ControlItem::*)()>(&::GlobalNamespace::InputControlLayout_ControlItem::get_isFirstDefinedInThisLayout)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb004898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"get_isFirstDefinedInThisLayout", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_ControlItem.set_isFirstDefinedInThisLayout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputControlLayout_ControlItem::*)(bool)>(&::GlobalNamespace::InputControlLayout_ControlItem::set_isFirstDefinedInThisLayout)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb0024b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"set_isFirstDefinedInThisLayout", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_ControlItem.get_isArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::InputControlLayout_ControlItem::*)()>(&::GlobalNamespace::InputControlLayout_ControlItem::get_isArray)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xafffdb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"get_isArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputControlLayout_ControlItem.Merge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputControlLayout_ControlItem (::GlobalNamespace::InputControlLayout_ControlItem::*)(::GlobalNamespace::InputControlLayout_ControlItem)>(&::GlobalNamespace::InputControlLayout_ControlItem::Merge)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0xb003e68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"Merge", {}, {::i2c::type_of<::GlobalNamespace::InputControlLayout_ControlItem>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::Utilities::InternedString GlobalNamespace::InputControlLayout_ControlItem::get_name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"get_name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString>(*this, ___internal_method);
}
inline void GlobalNamespace::InputControlLayout_ControlItem::set_name(::UnityEngine::InputSystem::Utilities::InternedString  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"set_name", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString GlobalNamespace::InputControlLayout_ControlItem::get_layout()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"get_layout", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString>(*this, ___internal_method);
}
inline void GlobalNamespace::InputControlLayout_ControlItem::set_layout(::UnityEngine::InputSystem::Utilities::InternedString  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"set_layout", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::InternedString GlobalNamespace::InputControlLayout_ControlItem::get_variants()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"get_variants", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::InternedString>(*this, ___internal_method);
}
inline void GlobalNamespace::InputControlLayout_ControlItem::set_variants(::UnityEngine::InputSystem::Utilities::InternedString  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"set_variants", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::InputControlLayout_ControlItem::get_useStateFrom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"get_useStateFrom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void GlobalNamespace::InputControlLayout_ControlItem::set_useStateFrom(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"set_useStateFrom", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::InputControlLayout_ControlItem::get_displayName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"get_displayName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void GlobalNamespace::InputControlLayout_ControlItem::set_displayName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"set_displayName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::InputControlLayout_ControlItem::get_shortDisplayName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"get_shortDisplayName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void GlobalNamespace::InputControlLayout_ControlItem::set_shortDisplayName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"set_shortDisplayName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> GlobalNamespace::InputControlLayout_ControlItem::get_usages()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"get_usages", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>>(*this, ___internal_method);
}
inline void GlobalNamespace::InputControlLayout_ControlItem::set_usages(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"set_usages", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> GlobalNamespace::InputControlLayout_ControlItem::get_aliases()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"get_aliases", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>>(*this, ___internal_method);
}
inline void GlobalNamespace::InputControlLayout_ControlItem::set_aliases(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"set_aliases", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue> GlobalNamespace::InputControlLayout_ControlItem::get_parameters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"get_parameters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue>>(*this, ___internal_method);
}
inline void GlobalNamespace::InputControlLayout_ControlItem::set_parameters(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"set_parameters", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters> GlobalNamespace::InputControlLayout_ControlItem::get_processors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"get_processors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>>(*this, ___internal_method);
}
inline void GlobalNamespace::InputControlLayout_ControlItem::set_processors(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"set_processors", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint32_t GlobalNamespace::InputControlLayout_ControlItem::get_offset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"get_offset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::InputControlLayout_ControlItem::set_offset(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"set_offset", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint32_t GlobalNamespace::InputControlLayout_ControlItem::get_bit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"get_bit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::InputControlLayout_ControlItem::set_bit(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"set_bit", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint32_t GlobalNamespace::InputControlLayout_ControlItem::get_sizeInBits()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"get_sizeInBits", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::InputControlLayout_ControlItem::set_sizeInBits(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"set_sizeInBits", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC GlobalNamespace::InputControlLayout_ControlItem::get_format()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"get_format", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC>(*this, ___internal_method);
}
inline void GlobalNamespace::InputControlLayout_ControlItem::set_format(::UnityEngine::InputSystem::Utilities::FourCC  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"set_format", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::FourCC>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::ControlItem_InputControlLayout_Flags GlobalNamespace::InputControlLayout_ControlItem::get_flags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"get_flags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ControlItem_InputControlLayout_Flags>(*this, ___internal_method);
}
inline void GlobalNamespace::InputControlLayout_ControlItem::set_flags(::GlobalNamespace::ControlItem_InputControlLayout_Flags  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"set_flags", {}, {::i2c::type_of<::GlobalNamespace::ControlItem_InputControlLayout_Flags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t GlobalNamespace::InputControlLayout_ControlItem::get_arraySize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"get_arraySize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::InputControlLayout_ControlItem::set_arraySize(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"set_arraySize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue GlobalNamespace::InputControlLayout_ControlItem::get_defaultState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"get_defaultState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::PrimitiveValue>(*this, ___internal_method);
}
inline void GlobalNamespace::InputControlLayout_ControlItem::set_defaultState(::UnityEngine::InputSystem::Utilities::PrimitiveValue  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"set_defaultState", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::PrimitiveValue>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue GlobalNamespace::InputControlLayout_ControlItem::get_minValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"get_minValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::PrimitiveValue>(*this, ___internal_method);
}
inline void GlobalNamespace::InputControlLayout_ControlItem::set_minValue(::UnityEngine::InputSystem::Utilities::PrimitiveValue  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"set_minValue", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::PrimitiveValue>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue GlobalNamespace::InputControlLayout_ControlItem::get_maxValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"get_maxValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::PrimitiveValue>(*this, ___internal_method);
}
inline void GlobalNamespace::InputControlLayout_ControlItem::set_maxValue(::UnityEngine::InputSystem::Utilities::PrimitiveValue  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"set_maxValue", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::PrimitiveValue>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::InputControlLayout_ControlItem::get_isModifyingExistingControl()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"get_isModifyingExistingControl", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::InputControlLayout_ControlItem::set_isModifyingExistingControl(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"set_isModifyingExistingControl", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::InputControlLayout_ControlItem::get_isNoisy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"get_isNoisy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::InputControlLayout_ControlItem::set_isNoisy(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"set_isNoisy", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::InputControlLayout_ControlItem::get_isSynthetic()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"get_isSynthetic", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::InputControlLayout_ControlItem::set_isSynthetic(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"set_isSynthetic", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::InputControlLayout_ControlItem::get_dontReset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"get_dontReset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::InputControlLayout_ControlItem::set_dontReset(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"set_dontReset", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::InputControlLayout_ControlItem::get_isFirstDefinedInThisLayout()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"get_isFirstDefinedInThisLayout", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::InputControlLayout_ControlItem::set_isFirstDefinedInThisLayout(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"set_isFirstDefinedInThisLayout", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::InputControlLayout_ControlItem::get_isArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"get_isArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::GlobalNamespace::InputControlLayout_ControlItem GlobalNamespace::InputControlLayout_ControlItem::Merge(::GlobalNamespace::InputControlLayout_ControlItem  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputControlLayout_ControlItem>(),
                        {"Merge", {}, {::i2c::type_of<::GlobalNamespace::InputControlLayout_ControlItem>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputControlLayout_ControlItem>(*this, ___internal_method, other);
}
// Ctor Parameters [CppParam { name: "_name_k__BackingField", ty: "::UnityEngine::InputSystem::Utilities::InternedString", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_layout_k__BackingField", ty: "::UnityEngine::InputSystem::Utilities::InternedString", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_variants_k__BackingField", ty: "::UnityEngine::InputSystem::Utilities::InternedString", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_useStateFrom_k__BackingField", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_displayName_k__BackingField", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_shortDisplayName_k__BackingField", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_usages_k__BackingField", ty: "::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_aliases_k__BackingField", ty: "::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_parameters_k__BackingField", ty: "::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_processors_k__BackingField", ty: "::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_offset_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_bit_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_sizeInBits_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_format_k__BackingField", ty: "::UnityEngine::InputSystem::Utilities::FourCC", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_flags_k__BackingField", ty: "::GlobalNamespace::ControlItem_InputControlLayout_Flags", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_arraySize_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_defaultState_k__BackingField", ty: "::UnityEngine::InputSystem::Utilities::PrimitiveValue", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_minValue_k__BackingField", ty: "::UnityEngine::InputSystem::Utilities::PrimitiveValue", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_maxValue_k__BackingField", ty: "::UnityEngine::InputSystem::Utilities::PrimitiveValue", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputControlLayout_ControlItem::InputControlLayout_ControlItem(::UnityEngine::InputSystem::Utilities::InternedString  _name_k__BackingField, ::UnityEngine::InputSystem::Utilities::InternedString  _layout_k__BackingField, ::UnityEngine::InputSystem::Utilities::InternedString  _variants_k__BackingField, ::StringW  _useStateFrom_k__BackingField, ::StringW  _displayName_k__BackingField, ::StringW  _shortDisplayName_k__BackingField, ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>  _usages_k__BackingField, ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>  _aliases_k__BackingField, ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue>  _parameters_k__BackingField, ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>  _processors_k__BackingField, uint32_t  _offset_k__BackingField, uint32_t  _bit_k__BackingField, uint32_t  _sizeInBits_k__BackingField, ::UnityEngine::InputSystem::Utilities::FourCC  _format_k__BackingField, ::GlobalNamespace::ControlItem_InputControlLayout_Flags  _flags_k__BackingField, int32_t  _arraySize_k__BackingField, ::UnityEngine::InputSystem::Utilities::PrimitiveValue  _defaultState_k__BackingField, ::UnityEngine::InputSystem::Utilities::PrimitiveValue  _minValue_k__BackingField, ::UnityEngine::InputSystem::Utilities::PrimitiveValue  _maxValue_k__BackingField) noexcept  {
this->_name_k__BackingField = _name_k__BackingField;
this->_layout_k__BackingField = _layout_k__BackingField;
this->_variants_k__BackingField = _variants_k__BackingField;
this->_useStateFrom_k__BackingField = _useStateFrom_k__BackingField;
this->_displayName_k__BackingField = _displayName_k__BackingField;
this->_shortDisplayName_k__BackingField = _shortDisplayName_k__BackingField;
this->_usages_k__BackingField = _usages_k__BackingField;
this->_aliases_k__BackingField = _aliases_k__BackingField;
this->_parameters_k__BackingField = _parameters_k__BackingField;
this->_processors_k__BackingField = _processors_k__BackingField;
this->_offset_k__BackingField = _offset_k__BackingField;
this->_bit_k__BackingField = _bit_k__BackingField;
this->_sizeInBits_k__BackingField = _sizeInBits_k__BackingField;
this->_format_k__BackingField = _format_k__BackingField;
this->_flags_k__BackingField = _flags_k__BackingField;
this->_arraySize_k__BackingField = _arraySize_k__BackingField;
this->_defaultState_k__BackingField = _defaultState_k__BackingField;
this->_minValue_k__BackingField = _minValue_k__BackingField;
this->_maxValue_k__BackingField = _maxValue_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputControlLayout_ControlItem::InputControlLayout_ControlItem()   {
}
