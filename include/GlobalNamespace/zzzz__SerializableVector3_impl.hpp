#pragma once
// IWYU pragma private; include "GlobalNamespace/SerializableVector3.hpp"
#include "GlobalNamespace/zzzz__SerializableVector3_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SerializableVector3._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SerializableVector3::*)(float_t, float_t, float_t)>(&::GlobalNamespace::SerializableVector3::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x56d5194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SerializableVector3>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SerializableVector3.op_Implicit___GlobalNamespace__SerializableVector3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SerializableVector3 (*)(::UnityEngine::Vector3)>(&::GlobalNamespace::SerializableVector3::op_Implicit___GlobalNamespace__SerializableVector3)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56d51a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SerializableVector3>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SerializableVector3.op_Implicit___UnityEngine__Vector3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::GlobalNamespace::SerializableVector3)>(&::GlobalNamespace::SerializableVector3::op_Implicit___UnityEngine__Vector3)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56d51a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SerializableVector3>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::SerializableVector3>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SerializableVector3::_ctor(float_t  x, float_t  y, float_t  z)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SerializableVector3>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, x, y, z);
}
inline ::GlobalNamespace::SerializableVector3 GlobalNamespace::SerializableVector3::op_Implicit___GlobalNamespace__SerializableVector3(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SerializableVector3>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SerializableVector3>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 GlobalNamespace::SerializableVector3::op_Implicit___UnityEngine__Vector3(::GlobalNamespace::SerializableVector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SerializableVector3>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::SerializableVector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "z", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SerializableVector3::SerializableVector3(float_t  x, float_t  y, float_t  z) noexcept  {
this->x = x;
this->y = y;
this->z = z;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SerializableVector3::SerializableVector3()   {
}
