#pragma once
// IWYU pragma private; include "GlobalNamespace/SerializableVector2.hpp"
#include "GlobalNamespace/zzzz__SerializableVector2_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SerializableVector2._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SerializableVector2::*)(float_t, float_t)>(&::GlobalNamespace::SerializableVector2::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56d5184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SerializableVector2>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SerializableVector2.op_Implicit___GlobalNamespace__SerializableVector2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SerializableVector2 (*)(::UnityEngine::Vector2)>(&::GlobalNamespace::SerializableVector2::op_Implicit___GlobalNamespace__SerializableVector2)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56d518c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SerializableVector2>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SerializableVector2.op_Implicit___UnityEngine__Vector2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::GlobalNamespace::SerializableVector2)>(&::GlobalNamespace::SerializableVector2::op_Implicit___UnityEngine__Vector2)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56d5190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SerializableVector2>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::SerializableVector2>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SerializableVector2::_ctor(float_t  x, float_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SerializableVector2>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, x, y);
}
inline ::GlobalNamespace::SerializableVector2 GlobalNamespace::SerializableVector2::op_Implicit___GlobalNamespace__SerializableVector2(::UnityEngine::Vector2  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SerializableVector2>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SerializableVector2>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector2 GlobalNamespace::SerializableVector2::op_Implicit___UnityEngine__Vector2(::GlobalNamespace::SerializableVector2  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SerializableVector2>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::SerializableVector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, v);
}
// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SerializableVector2::SerializableVector2(float_t  x, float_t  y) noexcept  {
this->x = x;
this->y = y;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SerializableVector2::SerializableVector2()   {
}
