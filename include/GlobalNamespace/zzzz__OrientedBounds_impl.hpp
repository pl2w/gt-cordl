#pragma once
// IWYU pragma private; include "GlobalNamespace/OrientedBounds.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__OrientedBounds_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OrientedBounds.get_Empty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OrientedBounds (*)()>(&::GlobalNamespace::OrientedBounds::get_Empty)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5a1f2ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OrientedBounds>(),
                        {"get_Empty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OrientedBounds.get_Identity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OrientedBounds (*)()>(&::GlobalNamespace::OrientedBounds::get_Identity)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5a1f314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OrientedBounds>(),
                        {"get_Identity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OrientedBounds.TRS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::GlobalNamespace::OrientedBounds::*)()>(&::GlobalNamespace::OrientedBounds::TRS)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5a1f380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OrientedBounds>(),
                        {"TRS", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OrientedBounds::setStaticF__Empty_k__BackingField(::GlobalNamespace::OrientedBounds  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::OrientedBounds, "<Empty>k__BackingField", ::GlobalNamespace::OrientedBounds>(std::forward<::GlobalNamespace::OrientedBounds>(value));
}
inline ::GlobalNamespace::OrientedBounds GlobalNamespace::OrientedBounds::getStaticF__Empty_k__BackingField()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::OrientedBounds, "<Empty>k__BackingField", ::GlobalNamespace::OrientedBounds>();
}
inline void GlobalNamespace::OrientedBounds::setStaticF__Identity_k__BackingField(::GlobalNamespace::OrientedBounds  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::OrientedBounds, "<Identity>k__BackingField", ::GlobalNamespace::OrientedBounds>(std::forward<::GlobalNamespace::OrientedBounds>(value));
}
inline ::GlobalNamespace::OrientedBounds GlobalNamespace::OrientedBounds::getStaticF__Identity_k__BackingField()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::OrientedBounds, "<Identity>k__BackingField", ::GlobalNamespace::OrientedBounds>();
}
inline ::GlobalNamespace::OrientedBounds GlobalNamespace::OrientedBounds::get_Empty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OrientedBounds>(),
                        {"get_Empty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OrientedBounds>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::OrientedBounds GlobalNamespace::OrientedBounds::get_Identity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OrientedBounds>(),
                        {"get_Identity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OrientedBounds>(nullptr, ___internal_method);
}
inline ::UnityEngine::Matrix4x4 GlobalNamespace::OrientedBounds::TRS()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OrientedBounds>(),
                        {"TRS", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "size", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "center", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OrientedBounds::OrientedBounds(::UnityEngine::Vector3  size, ::UnityEngine::Vector3  center, ::UnityEngine::Quaternion  rotation) noexcept  {
this->size = size;
this->center = center;
this->rotation = rotation;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OrientedBounds::OrientedBounds()   {
}
