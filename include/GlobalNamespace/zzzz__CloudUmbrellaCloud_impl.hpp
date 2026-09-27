#pragma once
// IWYU pragma private; include "GlobalNamespace/CloudUmbrellaCloud.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CloudUmbrellaCloud_def.hpp"
#include "GlobalNamespace/zzzz__UmbrellaItem_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CloudUmbrellaCloud.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CloudUmbrellaCloud::*)()>(&::GlobalNamespace::CloudUmbrellaCloud::Awake)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e05570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CloudUmbrellaCloud*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CloudUmbrellaCloud.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CloudUmbrellaCloud::*)()>(&::GlobalNamespace::CloudUmbrellaCloud::LateUpdate)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5e055cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CloudUmbrellaCloud*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CloudUmbrellaCloud._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CloudUmbrellaCloud::*)()>(&::GlobalNamespace::CloudUmbrellaCloud::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e05730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CloudUmbrellaCloud*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::UmbrellaItem>& GlobalNamespace::CloudUmbrellaCloud::__cordl_internal_get_umbrella()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___umbrella;
}
constexpr ::UnityW<::GlobalNamespace::UmbrellaItem> const& GlobalNamespace::CloudUmbrellaCloud::__cordl_internal_get_umbrella() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___umbrella;
}
constexpr void GlobalNamespace::CloudUmbrellaCloud::__cordl_internal_set_umbrella(::UnityW<::GlobalNamespace::UmbrellaItem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___umbrella = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::CloudUmbrellaCloud::__cordl_internal_get_cloudRotateXform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudRotateXform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::CloudUmbrellaCloud::__cordl_internal_get_cloudRotateXform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudRotateXform;
}
constexpr void GlobalNamespace::CloudUmbrellaCloud::__cordl_internal_set_cloudRotateXform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cloudRotateXform = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& GlobalNamespace::CloudUmbrellaCloud::__cordl_internal_get_cloudRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudRenderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& GlobalNamespace::CloudUmbrellaCloud::__cordl_internal_get_cloudRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudRenderer;
}
constexpr void GlobalNamespace::CloudUmbrellaCloud::__cordl_internal_set_cloudRenderer(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cloudRenderer = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::CloudUmbrellaCloud::__cordl_internal_get_scaleCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::CloudUmbrellaCloud::__cordl_internal_get_scaleCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleCurve;
}
constexpr void GlobalNamespace::CloudUmbrellaCloud::__cordl_internal_set_scaleCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scaleCurve = value;
}
constexpr bool& GlobalNamespace::CloudUmbrellaCloud::__cordl_internal_get_rendererOn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rendererOn;
}
constexpr bool const& GlobalNamespace::CloudUmbrellaCloud::__cordl_internal_get_rendererOn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rendererOn;
}
constexpr void GlobalNamespace::CloudUmbrellaCloud::__cordl_internal_set_rendererOn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rendererOn = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::CloudUmbrellaCloud::__cordl_internal_get_umbrellaXform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___umbrellaXform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::CloudUmbrellaCloud::__cordl_internal_get_umbrellaXform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___umbrellaXform;
}
constexpr void GlobalNamespace::CloudUmbrellaCloud::__cordl_internal_set_umbrellaXform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___umbrellaXform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::CloudUmbrellaCloud::__cordl_internal_get_cloudScaleXform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudScaleXform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::CloudUmbrellaCloud::__cordl_internal_get_cloudScaleXform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudScaleXform;
}
constexpr void GlobalNamespace::CloudUmbrellaCloud::__cordl_internal_set_cloudScaleXform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cloudScaleXform = value;
}
inline void GlobalNamespace::CloudUmbrellaCloud::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CloudUmbrellaCloud*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CloudUmbrellaCloud::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CloudUmbrellaCloud*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CloudUmbrellaCloud::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CloudUmbrellaCloud*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CloudUmbrellaCloud* GlobalNamespace::CloudUmbrellaCloud::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CloudUmbrellaCloud*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CloudUmbrellaCloud::CloudUmbrellaCloud()   {
}
