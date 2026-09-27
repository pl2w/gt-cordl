#pragma once
// IWYU pragma private; include "Oculus/Interaction/Surfaces/BoundsClipper.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__BoundsClipper_def.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__IBoundsClipper_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::BoundsClipper.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Surfaces::BoundsClipper::*)()>(&::Oculus::Interaction::Surfaces::BoundsClipper::get_Position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4b31e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::BoundsClipper*>(),
                        {"get_Position", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::BoundsClipper.set_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Surfaces::BoundsClipper::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::Surfaces::BoundsClipper::set_Position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4b31ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::BoundsClipper*>(),
                        {"set_Position", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::BoundsClipper.get_Size
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Surfaces::BoundsClipper::*)()>(&::Oculus::Interaction::Surfaces::BoundsClipper::get_Size)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4b31f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::BoundsClipper*>(),
                        {"get_Size", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::BoundsClipper.set_Size
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Surfaces::BoundsClipper::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::Surfaces::BoundsClipper::set_Size)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4b3204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::BoundsClipper*>(),
                        {"set_Size", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::BoundsClipper.GetLocalBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Surfaces::BoundsClipper::*)(::UnityEngine::Transform*, ::by_ref<::UnityEngine::Bounds>)>(&::Oculus::Interaction::Surfaces::BoundsClipper::GetLocalBounds)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa4b3210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::BoundsClipper*>(),
                        {"GetLocalBounds", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::BoundsClipper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Surfaces::BoundsClipper::*)()>(&::Oculus::Interaction::Surfaces::BoundsClipper::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa4b32d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::BoundsClipper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& Oculus::Interaction::Surfaces::BoundsClipper::__cordl_internal_get__position()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____position;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::Surfaces::BoundsClipper::__cordl_internal_get__position() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____position;
}
constexpr void Oculus::Interaction::Surfaces::BoundsClipper::__cordl_internal_set__position(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____position = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::Surfaces::BoundsClipper::__cordl_internal_get__size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____size;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::Surfaces::BoundsClipper::__cordl_internal_get__size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____size;
}
constexpr void Oculus::Interaction::Surfaces::BoundsClipper::__cordl_internal_set__size(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____size = value;
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Surfaces::BoundsClipper::get_Position()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::BoundsClipper*>(),
                        {"get_Position", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Oculus::Interaction::Surfaces::BoundsClipper::set_Position(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::BoundsClipper*>(),
                        {"set_Position", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Surfaces::BoundsClipper::get_Size()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::BoundsClipper*>(),
                        {"get_Size", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Oculus::Interaction::Surfaces::BoundsClipper::set_Size(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::BoundsClipper*>(),
                        {"set_Size", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::Surfaces::BoundsClipper::GetLocalBounds(::UnityEngine::Transform*  localTo, ::by_ref<::UnityEngine::Bounds>  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::BoundsClipper*>(),
                        {"GetLocalBounds", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, localTo, bounds);
}
inline void Oculus::Interaction::Surfaces::BoundsClipper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::BoundsClipper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Surfaces::BoundsClipper* Oculus::Interaction::Surfaces::BoundsClipper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Surfaces::BoundsClipper*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Surfaces::IBoundsClipper"
constexpr  Oculus::Interaction::Surfaces::BoundsClipper::operator ::Oculus::Interaction::Surfaces::IBoundsClipper*() noexcept {
return static_cast<::Oculus::Interaction::Surfaces::IBoundsClipper*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Surfaces::IBoundsClipper"
constexpr ::Oculus::Interaction::Surfaces::IBoundsClipper* Oculus::Interaction::Surfaces::BoundsClipper::i___Oculus__Interaction__Surfaces__IBoundsClipper() noexcept {
return static_cast<::Oculus::Interaction::Surfaces::IBoundsClipper*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Surfaces::BoundsClipper::BoundsClipper()   {
}
