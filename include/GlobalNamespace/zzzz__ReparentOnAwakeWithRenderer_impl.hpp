#pragma once
// IWYU pragma private; include "GlobalNamespace/ReparentOnAwakeWithRenderer.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ReparentOnAwakeWithRenderer_def.hpp"
#include "GlobalNamespace/zzzz__IBuildValidation_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ReparentOnAwakeWithRenderer.BuildValidationCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ReparentOnAwakeWithRenderer::*)()>(&::GlobalNamespace::ReparentOnAwakeWithRenderer::BuildValidationCheck)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x56a7cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReparentOnAwakeWithRenderer*>(),
                        {"BuildValidationCheck", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReparentOnAwakeWithRenderer.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ReparentOnAwakeWithRenderer::*)()>(&::GlobalNamespace::ReparentOnAwakeWithRenderer::OnEnable)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x56a7dfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReparentOnAwakeWithRenderer*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReparentOnAwakeWithRenderer.SetMyRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ReparentOnAwakeWithRenderer::*)()>(&::GlobalNamespace::ReparentOnAwakeWithRenderer::SetMyRenderer)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x56a7f34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReparentOnAwakeWithRenderer*>(),
                        {"SetMyRenderer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReparentOnAwakeWithRenderer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ReparentOnAwakeWithRenderer::*)()>(&::GlobalNamespace::ReparentOnAwakeWithRenderer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56a7f8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReparentOnAwakeWithRenderer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ReparentOnAwakeWithRenderer::__cordl_internal_get_newParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newParent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ReparentOnAwakeWithRenderer::__cordl_internal_get_newParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newParent;
}
constexpr void GlobalNamespace::ReparentOnAwakeWithRenderer::__cordl_internal_set_newParent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___newParent = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::ReparentOnAwakeWithRenderer::__cordl_internal_get_myRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::ReparentOnAwakeWithRenderer::__cordl_internal_get_myRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRenderer;
}
constexpr void GlobalNamespace::ReparentOnAwakeWithRenderer::__cordl_internal_set_myRenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myRenderer = value;
}
constexpr bool& GlobalNamespace::ReparentOnAwakeWithRenderer::__cordl_internal_get_sortLast()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sortLast;
}
constexpr bool const& GlobalNamespace::ReparentOnAwakeWithRenderer::__cordl_internal_get_sortLast() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sortLast;
}
constexpr void GlobalNamespace::ReparentOnAwakeWithRenderer::__cordl_internal_set_sortLast(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sortLast = value;
}
inline bool GlobalNamespace::ReparentOnAwakeWithRenderer::BuildValidationCheck()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReparentOnAwakeWithRenderer*>(),
                        {"BuildValidationCheck", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::ReparentOnAwakeWithRenderer::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReparentOnAwakeWithRenderer*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ReparentOnAwakeWithRenderer::SetMyRenderer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReparentOnAwakeWithRenderer*>(),
                        {"SetMyRenderer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ReparentOnAwakeWithRenderer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReparentOnAwakeWithRenderer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ReparentOnAwakeWithRenderer* GlobalNamespace::ReparentOnAwakeWithRenderer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ReparentOnAwakeWithRenderer*>());
}
/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr  GlobalNamespace::ReparentOnAwakeWithRenderer::operator ::GlobalNamespace::IBuildValidation*() noexcept {
return static_cast<::GlobalNamespace::IBuildValidation*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* GlobalNamespace::ReparentOnAwakeWithRenderer::i___GlobalNamespace__IBuildValidation() noexcept {
return static_cast<::GlobalNamespace::IBuildValidation*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ReparentOnAwakeWithRenderer::ReparentOnAwakeWithRenderer()   {
}
