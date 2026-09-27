#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineMesh_VertexData.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/Splines/zzzz__SplineMesh_VertexData_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineMesh_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SplineMesh_VertexData.get_position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::SplineMesh_VertexData::*)()>(&::GlobalNamespace::SplineMesh_VertexData::get_position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb3268d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplineMesh_VertexData>(),
                        {"get_position", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SplineMesh_VertexData.set_position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SplineMesh_VertexData::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::SplineMesh_VertexData::set_position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb3268e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplineMesh_VertexData>(),
                        {"set_position", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SplineMesh_VertexData.get_normal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::SplineMesh_VertexData::*)()>(&::GlobalNamespace::SplineMesh_VertexData::get_normal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb3268f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplineMesh_VertexData>(),
                        {"get_normal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SplineMesh_VertexData.set_normal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SplineMesh_VertexData::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::SplineMesh_VertexData::set_normal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb3268fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplineMesh_VertexData>(),
                        {"set_normal", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SplineMesh_VertexData.get_texture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::SplineMesh_VertexData::*)()>(&::GlobalNamespace::SplineMesh_VertexData::get_texture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb326908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplineMesh_VertexData>(),
                        {"get_texture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SplineMesh_VertexData.set_texture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SplineMesh_VertexData::*)(::UnityEngine::Vector2)>(&::GlobalNamespace::SplineMesh_VertexData::set_texture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb326910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplineMesh_VertexData>(),
                        {"set_texture", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 GlobalNamespace::SplineMesh_VertexData::get_position()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplineMesh_VertexData>(),
                        {"get_position", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline void GlobalNamespace::SplineMesh_VertexData::set_position(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplineMesh_VertexData>(),
                        {"set_position", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 GlobalNamespace::SplineMesh_VertexData::get_normal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplineMesh_VertexData>(),
                        {"get_normal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline void GlobalNamespace::SplineMesh_VertexData::set_normal(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplineMesh_VertexData>(),
                        {"set_normal", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 GlobalNamespace::SplineMesh_VertexData::get_texture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplineMesh_VertexData>(),
                        {"get_texture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method);
}
inline void GlobalNamespace::SplineMesh_VertexData::set_texture(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplineMesh_VertexData>(),
                        {"set_texture", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
/// @brief Convert operator to "::UnityEngine::Splines::SplineMesh_ISplineVertexData"
constexpr  GlobalNamespace::SplineMesh_VertexData::operator ::UnityEngine::Splines::SplineMesh_ISplineVertexData*()  {
return static_cast<::UnityEngine::Splines::SplineMesh_ISplineVertexData*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Splines::SplineMesh_ISplineVertexData"
constexpr ::UnityEngine::Splines::SplineMesh_ISplineVertexData* GlobalNamespace::SplineMesh_VertexData::i___UnityEngine__Splines__SplineMesh_ISplineVertexData()  {
return static_cast<::UnityEngine::Splines::SplineMesh_ISplineVertexData*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_position_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_normal_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_texture_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SplineMesh_VertexData::SplineMesh_VertexData(::UnityEngine::Vector3  _position_k__BackingField, ::UnityEngine::Vector3  _normal_k__BackingField, ::UnityEngine::Vector2  _texture_k__BackingField) noexcept  {
this->_position_k__BackingField = _position_k__BackingField;
this->_normal_k__BackingField = _normal_k__BackingField;
this->_texture_k__BackingField = _texture_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SplineMesh_VertexData::SplineMesh_VertexData()   {
}
