#pragma once
// IWYU pragma private; include "Oculus/Interaction/UnityCanvas/CanvasMeshRenderer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/UnityCanvas/zzzz__CanvasMeshRenderer_def.hpp"
#include "Oculus/Interaction/UnityCanvas/zzzz__CanvasMeshRenderer_def.hpp"
#include "Oculus/Interaction/UnityCanvas/zzzz__CanvasRenderTexture_def.hpp"
#include "Oculus/Interaction/UnityCanvas/zzzz__RenderingMode_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer.get_RenderingMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::UnityCanvas::RenderingMode (::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::*)()>(&::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::get_RenderingMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4901f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer*>(),
                        {"get_RenderingMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer.GetShaderName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::*)()>(&::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::GetShaderName)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa4901fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer*>(),
                    {::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer.SetAdditionalProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::*)(::UnityEngine::MaterialPropertyBlock*)>(&::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::SetAdditionalProperties)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa4902a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer*>(),
                    {::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer.GetAlphaCutoutThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::*)()>(&::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::GetAlphaCutoutThreshold)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa490308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer*>(),
                    {::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer.HandleUpdateRenderTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::*)(::UnityEngine::Texture*)>(&::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::HandleUpdateRenderTexture)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa49032c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer*>(),
                    {::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::*)()>(&::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa490420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer*>(),
                    {::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::*)()>(&::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::OnEnable)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0xa49044c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer*>(),
                    {::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::*)()>(&::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::OnDisable)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xa49062c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer*>(),
                    {::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer.InjectAllCanvasMeshRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::*)(::Oculus::Interaction::UnityCanvas::CanvasRenderTexture*, ::UnityEngine::MeshRenderer*)>(&::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::InjectAllCanvasMeshRenderer)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa490788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer*>(),
                        {"InjectAllCanvasMeshRenderer", {}, {::i2c::type_of<::Oculus::Interaction::UnityCanvas::CanvasRenderTexture*>(), ::i2c::type_of<::UnityEngine::MeshRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer.InjectCanvasRenderTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::*)(::Oculus::Interaction::UnityCanvas::CanvasRenderTexture*)>(&::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::InjectCanvasRenderTexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4907b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer*>(),
                        {"InjectCanvasRenderTexture", {}, {::i2c::type_of<::Oculus::Interaction::UnityCanvas::CanvasRenderTexture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer.InjectMeshRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::*)(::UnityEngine::MeshRenderer*)>(&::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::InjectMeshRenderer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4907c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer*>(),
                        {"InjectMeshRenderer", {}, {::i2c::type_of<::UnityEngine::MeshRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer.InjectOptionalRenderingMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::*)(::Oculus::Interaction::UnityCanvas::RenderingMode)>(&::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::InjectOptionalRenderingMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4907c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer*>(),
                        {"InjectOptionalRenderingMode", {}, {::i2c::type_of<::Oculus::Interaction::UnityCanvas::RenderingMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer.InjectOptionalAlphaCutoutThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::*)(float_t)>(&::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::InjectOptionalAlphaCutoutThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4907d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer*>(),
                        {"InjectOptionalAlphaCutoutThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer.InjectOptionalUseAlphaToMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::*)(bool)>(&::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::InjectOptionalUseAlphaToMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4907d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer*>(),
                        {"InjectOptionalUseAlphaToMask", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::*)()>(&::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa4907e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Oculus::Interaction::UnityCanvas::CanvasRenderTexture>& Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::__cordl_internal_get__canvasRenderTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canvasRenderTexture;
}
constexpr ::UnityW<::Oculus::Interaction::UnityCanvas::CanvasRenderTexture> const& Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::__cordl_internal_get__canvasRenderTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canvasRenderTexture;
}
constexpr void Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::__cordl_internal_set__canvasRenderTexture(::UnityW<::Oculus::Interaction::UnityCanvas::CanvasRenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____canvasRenderTexture = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::__cordl_internal_get__meshRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::__cordl_internal_get__meshRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshRenderer;
}
constexpr void Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::__cordl_internal_set__meshRenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____meshRenderer = value;
}
constexpr int32_t& Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::__cordl_internal_get__renderingMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderingMode;
}
constexpr int32_t const& Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::__cordl_internal_get__renderingMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderingMode;
}
constexpr void Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::__cordl_internal_set__renderingMode(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____renderingMode = value;
}
constexpr bool& Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::__cordl_internal_get__useAlphaToMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useAlphaToMask;
}
constexpr bool const& Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::__cordl_internal_get__useAlphaToMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useAlphaToMask;
}
constexpr void Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::__cordl_internal_set__useAlphaToMask(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useAlphaToMask = value;
}
constexpr float_t& Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::__cordl_internal_get__alphaCutoutThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alphaCutoutThreshold;
}
constexpr float_t const& Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::__cordl_internal_get__alphaCutoutThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alphaCutoutThreshold;
}
constexpr void Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::__cordl_internal_set__alphaCutoutThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____alphaCutoutThreshold = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::__cordl_internal_get__material()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____material;
}
constexpr ::UnityW<::UnityEngine::Material> const& Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::__cordl_internal_get__material() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____material;
}
constexpr void Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::__cordl_internal_set__material(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____material = value;
}
constexpr bool& Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline void Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::setStaticF_MainTexShaderID(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "MainTexShaderID", ::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer*>(std::forward<int32_t>(value));
}
inline int32_t Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::getStaticF_MainTexShaderID()  {
return ::cordl_internals::getStaticField<int32_t, "MainTexShaderID", ::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer*>();
}
inline ::Oculus::Interaction::UnityCanvas::RenderingMode Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::get_RenderingMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer*>(),
                        {"get_RenderingMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::UnityCanvas::RenderingMode>(this, ___internal_method);
}
inline ::StringW Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::GetShaderName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::SetAdditionalProperties(::UnityEngine::MaterialPropertyBlock*  block)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, block);
}
inline float_t Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::GetAlphaCutoutThreshold()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::HandleUpdateRenderTexture(::UnityEngine::Texture*  texture)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, texture);
}
inline void Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::InjectAllCanvasMeshRenderer(::Oculus::Interaction::UnityCanvas::CanvasRenderTexture*  canvasRenderTexture, ::UnityEngine::MeshRenderer*  meshRenderer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer*>(),
                        {"InjectAllCanvasMeshRenderer", {}, {::i2c::type_of<::Oculus::Interaction::UnityCanvas::CanvasRenderTexture*>(), ::i2c::type_of<::UnityEngine::MeshRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, canvasRenderTexture, meshRenderer);
}
inline void Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::InjectCanvasRenderTexture(::Oculus::Interaction::UnityCanvas::CanvasRenderTexture*  canvasRenderTexture)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer*>(),
                        {"InjectCanvasRenderTexture", {}, {::i2c::type_of<::Oculus::Interaction::UnityCanvas::CanvasRenderTexture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, canvasRenderTexture);
}
inline void Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::InjectMeshRenderer(::UnityEngine::MeshRenderer*  meshRenderer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer*>(),
                        {"InjectMeshRenderer", {}, {::i2c::type_of<::UnityEngine::MeshRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, meshRenderer);
}
inline void Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::InjectOptionalRenderingMode(::Oculus::Interaction::UnityCanvas::RenderingMode  renderingMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer*>(),
                        {"InjectOptionalRenderingMode", {}, {::i2c::type_of<::Oculus::Interaction::UnityCanvas::RenderingMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderingMode);
}
inline void Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::InjectOptionalAlphaCutoutThreshold(float_t  alphaCutoutThreshold)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer*>(),
                        {"InjectOptionalAlphaCutoutThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, alphaCutoutThreshold);
}
inline void Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::InjectOptionalUseAlphaToMask(bool  useAlphaToMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer*>(),
                        {"InjectOptionalUseAlphaToMask", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, useAlphaToMask);
}
inline void Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer* Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::CanvasMeshRenderer()   {
}
inline void Oculus::Interaction::UnityCanvas::CanvasMeshRenderer_Properties::setStaticF_RenderingMode(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "RenderingMode", ::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer_Properties*>(std::forward<::StringW>(value));
}
inline ::StringW Oculus::Interaction::UnityCanvas::CanvasMeshRenderer_Properties::getStaticF_RenderingMode()  {
return ::cordl_internals::getStaticField<::StringW, "RenderingMode", ::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer_Properties*>();
}
inline void Oculus::Interaction::UnityCanvas::CanvasMeshRenderer_Properties::setStaticF_UseAlphaToMask(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "UseAlphaToMask", ::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer_Properties*>(std::forward<::StringW>(value));
}
inline ::StringW Oculus::Interaction::UnityCanvas::CanvasMeshRenderer_Properties::getStaticF_UseAlphaToMask()  {
return ::cordl_internals::getStaticField<::StringW, "UseAlphaToMask", ::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer_Properties*>();
}
inline void Oculus::Interaction::UnityCanvas::CanvasMeshRenderer_Properties::setStaticF_AlphaCutoutThreshold(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "AlphaCutoutThreshold", ::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer_Properties*>(std::forward<::StringW>(value));
}
inline ::StringW Oculus::Interaction::UnityCanvas::CanvasMeshRenderer_Properties::getStaticF_AlphaCutoutThreshold()  {
return ::cordl_internals::getStaticField<::StringW, "AlphaCutoutThreshold", ::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer_Properties*>();
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer_Properties::CanvasMeshRenderer_Properties()   {
}
