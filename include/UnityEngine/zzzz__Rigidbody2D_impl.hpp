#pragma once
// IWYU pragma private; include "UnityEngine/Rigidbody2D.hpp"
#include "UnityEngine/zzzz__Component_impl.hpp"
#include "UnityEngine/zzzz__Rigidbody2D_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__ForceMode2D_def.hpp"
#include "UnityEngine/zzzz__RigidbodyType2D_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rigidbody2D.get_position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Rigidbody2D::*)()>(&::UnityEngine::Rigidbody2D::get_position)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb67c9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"get_position", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rigidbody2D.set_position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rigidbody2D::*)(::UnityEngine::Vector2)>(&::UnityEngine::Rigidbody2D::set_position)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb67caac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"set_position", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rigidbody2D.get_rotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rigidbody2D::*)()>(&::UnityEngine::Rigidbody2D::get_rotation)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb67cb74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"get_rotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rigidbody2D.set_rotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rigidbody2D::*)(float_t)>(&::UnityEngine::Rigidbody2D::set_rotation)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb67cc28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"set_rotation", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rigidbody2D.MovePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rigidbody2D::*)(::UnityEngine::Vector2)>(&::UnityEngine::Rigidbody2D::MovePosition)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb67ccfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"MovePosition", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rigidbody2D.MoveRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rigidbody2D::*)(float_t)>(&::UnityEngine::Rigidbody2D::MoveRotation)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb67cdc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"MoveRotation", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rigidbody2D.MoveRotation_Angle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rigidbody2D::*)(float_t)>(&::UnityEngine::Rigidbody2D::MoveRotation_Angle)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb67cdc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"MoveRotation_Angle", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rigidbody2D.get_linearVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Rigidbody2D::*)()>(&::UnityEngine::Rigidbody2D::get_linearVelocity)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb67ce9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"get_linearVelocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rigidbody2D.set_linearVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rigidbody2D::*)(::UnityEngine::Vector2)>(&::UnityEngine::Rigidbody2D::set_linearVelocity)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb67cf68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"set_linearVelocity", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rigidbody2D.get_angularVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rigidbody2D::*)()>(&::UnityEngine::Rigidbody2D::get_angularVelocity)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb67d030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"get_angularVelocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rigidbody2D.set_angularVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rigidbody2D::*)(float_t)>(&::UnityEngine::Rigidbody2D::set_angularVelocity)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb67d0e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"set_angularVelocity", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rigidbody2D.get_mass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rigidbody2D::*)()>(&::UnityEngine::Rigidbody2D::get_mass)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb67d1b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"get_mass", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rigidbody2D.get_bodyType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RigidbodyType2D (::UnityEngine::Rigidbody2D::*)()>(&::UnityEngine::Rigidbody2D::get_bodyType)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb67d26c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"get_bodyType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rigidbody2D.AddForce
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rigidbody2D::*)(::UnityEngine::Vector2)>(&::UnityEngine::Rigidbody2D::AddForce)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb67d320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"AddForce", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rigidbody2D.AddForce_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rigidbody2D::*)(::UnityEngine::Vector2, ::UnityEngine::ForceMode2D)>(&::UnityEngine::Rigidbody2D::AddForce_Internal)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb67d328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"AddForce_Internal", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::ForceMode2D>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rigidbody2D.get_isKinematic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rigidbody2D::*)()>(&::UnityEngine::Rigidbody2D::get_isKinematic)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb67d410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"get_isKinematic", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rigidbody2D._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rigidbody2D::*)()>(&::UnityEngine::Rigidbody2D::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb67d428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rigidbody2D.get_position_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector2>)>(&::UnityEngine::Rigidbody2D::get_position_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb67ca68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"get_position_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rigidbody2D.set_position_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector2>)>(&::UnityEngine::Rigidbody2D::set_position_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb67cb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"set_position_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rigidbody2D.get_rotation_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::Rigidbody2D::get_rotation_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb67cbec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"get_rotation_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rigidbody2D.set_rotation_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::Rigidbody2D::set_rotation_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb67ccb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"set_rotation_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rigidbody2D.MovePosition_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector2>)>(&::UnityEngine::Rigidbody2D::MovePosition_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb67cd80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"MovePosition_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rigidbody2D.MoveRotation_Angle_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::Rigidbody2D::MoveRotation_Angle_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb67ce50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"MoveRotation_Angle_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rigidbody2D.get_linearVelocity_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector2>)>(&::UnityEngine::Rigidbody2D::get_linearVelocity_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb67cf24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"get_linearVelocity_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rigidbody2D.set_linearVelocity_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector2>)>(&::UnityEngine::Rigidbody2D::set_linearVelocity_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb67cfec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"set_linearVelocity_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rigidbody2D.get_angularVelocity_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::Rigidbody2D::get_angularVelocity_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb67d0a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"get_angularVelocity_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rigidbody2D.set_angularVelocity_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::Rigidbody2D::set_angularVelocity_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb67d16c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"set_angularVelocity_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rigidbody2D.get_mass_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::Rigidbody2D::get_mass_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb67d230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"get_mass_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rigidbody2D.get_bodyType_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RigidbodyType2D (*)(::System::IntPtr)>(&::UnityEngine::Rigidbody2D::get_bodyType_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb67d2e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"get_bodyType_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rigidbody2D.AddForce_Internal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector2>, ::UnityEngine::ForceMode2D)>(&::UnityEngine::Rigidbody2D::AddForce_Internal_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb67d3bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"AddForce_Internal_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::UnityEngine::ForceMode2D>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector2 UnityEngine::Rigidbody2D::get_position()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"get_position", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void UnityEngine::Rigidbody2D::set_position(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"set_position", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rigidbody2D::get_rotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"get_rotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rigidbody2D::set_rotation(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"set_rotation", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rigidbody2D::MovePosition(::UnityEngine::Vector2  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"MovePosition", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position);
}
inline void UnityEngine::Rigidbody2D::MoveRotation(float_t  angle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"MoveRotation", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, angle);
}
inline void UnityEngine::Rigidbody2D::MoveRotation_Angle(float_t  angle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"MoveRotation_Angle", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, angle);
}
inline ::UnityEngine::Vector2 UnityEngine::Rigidbody2D::get_linearVelocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"get_linearVelocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void UnityEngine::Rigidbody2D::set_linearVelocity(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"set_linearVelocity", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rigidbody2D::get_angularVelocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"get_angularVelocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rigidbody2D::set_angularVelocity(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"set_angularVelocity", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rigidbody2D::get_mass()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"get_mass", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::RigidbodyType2D UnityEngine::Rigidbody2D::get_bodyType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"get_bodyType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RigidbodyType2D>(this, ___internal_method);
}
inline void UnityEngine::Rigidbody2D::AddForce(::UnityEngine::Vector2  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"AddForce", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, force);
}
inline void UnityEngine::Rigidbody2D::AddForce_Internal(::UnityEngine::Vector2  force, /* [DefaultValue("ForceMode2D.Force")] */ ::UnityEngine::ForceMode2D  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"AddForce_Internal", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::ForceMode2D>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, force, mode);
}
inline bool UnityEngine::Rigidbody2D::get_isKinematic()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"get_isKinematic", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rigidbody2D::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rigidbody2D::get_position_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"get_position_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Rigidbody2D::set_position_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"set_position_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::Rigidbody2D::get_rotation_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"get_rotation_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Rigidbody2D::set_rotation_Injected(::System::IntPtr  _unity_self, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"set_rotation_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::Rigidbody2D::MovePosition_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"MovePosition_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, position);
}
inline void UnityEngine::Rigidbody2D::MoveRotation_Angle_Injected(::System::IntPtr  _unity_self, float_t  angle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"MoveRotation_Angle_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, angle);
}
inline void UnityEngine::Rigidbody2D::get_linearVelocity_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"get_linearVelocity_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Rigidbody2D::set_linearVelocity_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"set_linearVelocity_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::Rigidbody2D::get_angularVelocity_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"get_angularVelocity_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Rigidbody2D::set_angularVelocity_Injected(::System::IntPtr  _unity_self, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"set_angularVelocity_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::Rigidbody2D::get_mass_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"get_mass_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::RigidbodyType2D UnityEngine::Rigidbody2D::get_bodyType_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"get_bodyType_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RigidbodyType2D>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Rigidbody2D::AddForce_Internal_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  force, /* [DefaultValue("ForceMode2D.Force")] */ ::UnityEngine::ForceMode2D  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rigidbody2D*>(),
                        {"AddForce_Internal_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::UnityEngine::ForceMode2D>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, force, mode);
}
inline ::UnityEngine::Rigidbody2D* UnityEngine::Rigidbody2D::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rigidbody2D*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rigidbody2D::Rigidbody2D()   {
}
