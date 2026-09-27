#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/Mask2D.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Mask_impl.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Mask2D_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__Float3X3_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::Mask2D.GenerateAffineTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::MRUtilityKit::Float3X3 (*)(::UnityEngine::Vector2, float_t, ::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::Meta::XR::MRUtilityKit::SceneDecorator::Mask2D::GenerateAffineTransform)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x9f51df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::Mask2D*>(),
                        {"GenerateAffineTransform", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::Mask2D.GenerateAffineTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::MRUtilityKit::Float3X3 (*)(float_t, float_t, float_t, float_t, float_t, float_t, float_t)>(&::Meta::XR::MRUtilityKit::SceneDecorator::Mask2D::GenerateAffineTransform)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9f50a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::Mask2D*>(),
                        {"GenerateAffineTransform", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::Mask2D._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::Mask2D::*)()>(&::Meta::XR::MRUtilityKit::SceneDecorator::Mask2D::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9f50a9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::Mask2D*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Meta::XR::MRUtilityKit::SceneDecorator::Mask2D::__cordl_internal_get_offsetX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offsetX;
}
constexpr float_t const& Meta::XR::MRUtilityKit::SceneDecorator::Mask2D::__cordl_internal_get_offsetX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offsetX;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::Mask2D::__cordl_internal_set_offsetX(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offsetX = value;
}
constexpr float_t& Meta::XR::MRUtilityKit::SceneDecorator::Mask2D::__cordl_internal_get_offsetY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offsetY;
}
constexpr float_t const& Meta::XR::MRUtilityKit::SceneDecorator::Mask2D::__cordl_internal_get_offsetY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offsetY;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::Mask2D::__cordl_internal_set_offsetY(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offsetY = value;
}
constexpr float_t& Meta::XR::MRUtilityKit::SceneDecorator::Mask2D::__cordl_internal_get_rotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotation;
}
constexpr float_t const& Meta::XR::MRUtilityKit::SceneDecorator::Mask2D::__cordl_internal_get_rotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotation;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::Mask2D::__cordl_internal_set_rotation(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotation = value;
}
constexpr float_t& Meta::XR::MRUtilityKit::SceneDecorator::Mask2D::__cordl_internal_get_scaleX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleX;
}
constexpr float_t const& Meta::XR::MRUtilityKit::SceneDecorator::Mask2D::__cordl_internal_get_scaleX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleX;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::Mask2D::__cordl_internal_set_scaleX(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scaleX = value;
}
constexpr float_t& Meta::XR::MRUtilityKit::SceneDecorator::Mask2D::__cordl_internal_get_scaleY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleY;
}
constexpr float_t const& Meta::XR::MRUtilityKit::SceneDecorator::Mask2D::__cordl_internal_get_scaleY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleY;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::Mask2D::__cordl_internal_set_scaleY(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scaleY = value;
}
constexpr float_t& Meta::XR::MRUtilityKit::SceneDecorator::Mask2D::__cordl_internal_get_shearX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shearX;
}
constexpr float_t const& Meta::XR::MRUtilityKit::SceneDecorator::Mask2D::__cordl_internal_get_shearX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shearX;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::Mask2D::__cordl_internal_set_shearX(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shearX = value;
}
constexpr float_t& Meta::XR::MRUtilityKit::SceneDecorator::Mask2D::__cordl_internal_get_shearY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shearY;
}
constexpr float_t const& Meta::XR::MRUtilityKit::SceneDecorator::Mask2D::__cordl_internal_get_shearY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shearY;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::Mask2D::__cordl_internal_set_shearY(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shearY = value;
}
inline ::Meta::XR::MRUtilityKit::Float3X3 Meta::XR::MRUtilityKit::SceneDecorator::Mask2D::GenerateAffineTransform(::UnityEngine::Vector2  position, float_t  rotation, ::UnityEngine::Vector2  scale, ::UnityEngine::Vector2  shear)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::Mask2D*>(),
                        {"GenerateAffineTransform", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::XR::MRUtilityKit::Float3X3>(nullptr, ___internal_method, position, rotation, scale, shear);
}
inline ::Meta::XR::MRUtilityKit::Float3X3 Meta::XR::MRUtilityKit::SceneDecorator::Mask2D::GenerateAffineTransform(float_t  positionX, float_t  positionY, float_t  rotation, float_t  scaleX, float_t  scaleY, float_t  shearX, float_t  shearY)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::Mask2D*>(),
                        {"GenerateAffineTransform", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::XR::MRUtilityKit::Float3X3>(nullptr, ___internal_method, positionX, positionY, rotation, scaleX, scaleY, shearX, shearY);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::Mask2D::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::Mask2D*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MRUtilityKit::SceneDecorator::Mask2D* Meta::XR::MRUtilityKit::SceneDecorator::Mask2D::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::SceneDecorator::Mask2D*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::Mask2D::Mask2D()   {
}
