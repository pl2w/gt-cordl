#pragma once
// IWYU pragma private; include "GlobalNamespace/RotateXform.hpp"
#include "GlobalNamespace/zzzz__RotateXform_Mode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__RotateXform_def.hpp"
#include "GlobalNamespace/zzzz__RotateXform_Mode_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RotateXform.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotateXform::*)()>(&::GlobalNamespace::RotateXform::Update)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5d094d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotateXform*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotateXform._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotateXform::*)()>(&::GlobalNamespace::RotateXform::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5d095f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotateXform*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::RotateXform::__cordl_internal_get_xform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::RotateXform::__cordl_internal_get_xform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xform;
}
constexpr void GlobalNamespace::RotateXform::__cordl_internal_set_xform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___xform = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::RotateXform::__cordl_internal_get_speed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speed;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::RotateXform::__cordl_internal_get_speed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speed;
}
constexpr void GlobalNamespace::RotateXform::__cordl_internal_set_speed(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speed = value;
}
constexpr ::GlobalNamespace::RotateXform_Mode& GlobalNamespace::RotateXform::__cordl_internal_get_mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr ::GlobalNamespace::RotateXform_Mode const& GlobalNamespace::RotateXform::__cordl_internal_get_mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr void GlobalNamespace::RotateXform::__cordl_internal_set_mode(::GlobalNamespace::RotateXform_Mode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mode = value;
}
constexpr float_t& GlobalNamespace::RotateXform::__cordl_internal_get_speedFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speedFactor;
}
constexpr float_t const& GlobalNamespace::RotateXform::__cordl_internal_get_speedFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speedFactor;
}
constexpr void GlobalNamespace::RotateXform::__cordl_internal_set_speedFactor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speedFactor = value;
}
inline void GlobalNamespace::RotateXform::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotateXform*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RotateXform::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RotateXform*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RotateXform* GlobalNamespace::RotateXform::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RotateXform*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RotateXform::RotateXform()   {
}
