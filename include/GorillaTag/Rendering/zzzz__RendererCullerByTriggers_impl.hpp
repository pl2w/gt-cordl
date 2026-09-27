#pragma once
// IWYU pragma private; include "GorillaTag/Rendering/RendererCullerByTriggers.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Renderer_impl.hpp"
#include "GorillaTag/Rendering/zzzz__RendererCullerByTriggers_def.hpp"
#include "GlobalNamespace/zzzz__IBuildValidation_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GorillaTag::Rendering::RendererCullerByTriggers.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Rendering::RendererCullerByTriggers::*)()>(&::GorillaTag::Rendering::RendererCullerByTriggers::OnEnable)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5d54e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::RendererCullerByTriggers*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Rendering::RendererCullerByTriggers.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Rendering::RendererCullerByTriggers::*)()>(&::GorillaTag::Rendering::RendererCullerByTriggers::LateUpdate)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x5d54f88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::RendererCullerByTriggers*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Rendering::RendererCullerByTriggers.BuildValidationCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Rendering::RendererCullerByTriggers::*)()>(&::GorillaTag::Rendering::RendererCullerByTriggers::BuildValidationCheck)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d5519c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::RendererCullerByTriggers*>(),
                        {"BuildValidationCheck", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Rendering::RendererCullerByTriggers._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Rendering::RendererCullerByTriggers::*)()>(&::GorillaTag::Rendering::RendererCullerByTriggers::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d551a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::RendererCullerByTriggers*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>>& GorillaTag::Rendering::RendererCullerByTriggers::__cordl_internal_get_renderers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderers;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>> const& GorillaTag::Rendering::RendererCullerByTriggers::__cordl_internal_get_renderers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderers;
}
constexpr void GorillaTag::Rendering::RendererCullerByTriggers::__cordl_internal_set_renderers(::ArrayW<::UnityW<::UnityEngine::Renderer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderers = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& GorillaTag::Rendering::RendererCullerByTriggers::__cordl_internal_get_colliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliders;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& GorillaTag::Rendering::RendererCullerByTriggers::__cordl_internal_get_colliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliders;
}
constexpr void GorillaTag::Rendering::RendererCullerByTriggers::__cordl_internal_set_colliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colliders = value;
}
constexpr bool& GorillaTag::Rendering::RendererCullerByTriggers::__cordl_internal_get_camWasTouching()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___camWasTouching;
}
constexpr bool const& GorillaTag::Rendering::RendererCullerByTriggers::__cordl_internal_get_camWasTouching() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___camWasTouching;
}
constexpr void GorillaTag::Rendering::RendererCullerByTriggers::__cordl_internal_set_camWasTouching(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___camWasTouching = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTag::Rendering::RendererCullerByTriggers::__cordl_internal_get_mainCameraTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainCameraTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTag::Rendering::RendererCullerByTriggers::__cordl_internal_get_mainCameraTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainCameraTransform;
}
constexpr void GorillaTag::Rendering::RendererCullerByTriggers::__cordl_internal_set_mainCameraTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mainCameraTransform = value;
}
inline void GorillaTag::Rendering::RendererCullerByTriggers::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::RendererCullerByTriggers*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Rendering::RendererCullerByTriggers::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::RendererCullerByTriggers*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTag::Rendering::RendererCullerByTriggers::BuildValidationCheck()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::RendererCullerByTriggers*>(),
                        {"BuildValidationCheck", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::Rendering::RendererCullerByTriggers::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::RendererCullerByTriggers*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Rendering::RendererCullerByTriggers* GorillaTag::Rendering::RendererCullerByTriggers::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Rendering::RendererCullerByTriggers*>());
}
/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr  GorillaTag::Rendering::RendererCullerByTriggers::operator ::GlobalNamespace::IBuildValidation*() noexcept {
return static_cast<::GlobalNamespace::IBuildValidation*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* GorillaTag::Rendering::RendererCullerByTriggers::i___GlobalNamespace__IBuildValidation() noexcept {
return static_cast<::GlobalNamespace::IBuildValidation*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTag::Rendering::RendererCullerByTriggers::RendererCullerByTriggers()   {
}
