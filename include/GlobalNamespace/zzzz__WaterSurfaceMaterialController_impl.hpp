#pragma once
// IWYU pragma private; include "GlobalNamespace/WaterSurfaceMaterialController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__WaterSurfaceMaterialController_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::WaterSurfaceMaterialController.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WaterSurfaceMaterialController::*)()>(&::GlobalNamespace::WaterSurfaceMaterialController::OnEnable)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5c01398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterSurfaceMaterialController*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WaterSurfaceMaterialController.ApplyProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WaterSurfaceMaterialController::*)()>(&::GlobalNamespace::WaterSurfaceMaterialController::ApplyProperties)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5c01438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterSurfaceMaterialController*>(),
                        {"ApplyProperties", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WaterSurfaceMaterialController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WaterSurfaceMaterialController::*)()>(&::GlobalNamespace::WaterSurfaceMaterialController::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c0150c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterSurfaceMaterialController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::WaterSurfaceMaterialController::__cordl_internal_get_ScrollX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScrollX;
}
constexpr float_t const& GlobalNamespace::WaterSurfaceMaterialController::__cordl_internal_get_ScrollX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScrollX;
}
constexpr void GlobalNamespace::WaterSurfaceMaterialController::__cordl_internal_set_ScrollX(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ScrollX = value;
}
constexpr float_t& GlobalNamespace::WaterSurfaceMaterialController::__cordl_internal_get_ScrollY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScrollY;
}
constexpr float_t const& GlobalNamespace::WaterSurfaceMaterialController::__cordl_internal_get_ScrollY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScrollY;
}
constexpr void GlobalNamespace::WaterSurfaceMaterialController::__cordl_internal_set_ScrollY(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ScrollY = value;
}
constexpr float_t& GlobalNamespace::WaterSurfaceMaterialController::__cordl_internal_get_Scale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Scale;
}
constexpr float_t const& GlobalNamespace::WaterSurfaceMaterialController::__cordl_internal_get_Scale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Scale;
}
constexpr void GlobalNamespace::WaterSurfaceMaterialController::__cordl_internal_set_Scale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Scale = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& GlobalNamespace::WaterSurfaceMaterialController::__cordl_internal_get_renderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& GlobalNamespace::WaterSurfaceMaterialController::__cordl_internal_get_renderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderer;
}
constexpr void GlobalNamespace::WaterSurfaceMaterialController::__cordl_internal_set_renderer(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderer = value;
}
constexpr ::UnityEngine::MaterialPropertyBlock*& GlobalNamespace::WaterSurfaceMaterialController::__cordl_internal_get_matPropBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matPropBlock;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& GlobalNamespace::WaterSurfaceMaterialController::__cordl_internal_get_matPropBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matPropBlock;
}
constexpr void GlobalNamespace::WaterSurfaceMaterialController::__cordl_internal_set_matPropBlock(::UnityEngine::MaterialPropertyBlock*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___matPropBlock = value;
}
inline void GlobalNamespace::WaterSurfaceMaterialController::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterSurfaceMaterialController*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::WaterSurfaceMaterialController::ApplyProperties()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterSurfaceMaterialController*>(),
                        {"ApplyProperties", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::WaterSurfaceMaterialController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterSurfaceMaterialController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::WaterSurfaceMaterialController* GlobalNamespace::WaterSurfaceMaterialController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::WaterSurfaceMaterialController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WaterSurfaceMaterialController::WaterSurfaceMaterialController()   {
}
