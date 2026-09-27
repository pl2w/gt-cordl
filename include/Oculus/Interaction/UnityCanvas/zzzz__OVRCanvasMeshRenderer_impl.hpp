#pragma once
// IWYU pragma private; include "Oculus/Interaction/UnityCanvas/OVRCanvasMeshRenderer.hpp"
#include "Oculus/Interaction/UnityCanvas/zzzz__CanvasMeshRenderer_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/UnityCanvas/zzzz__OVRCanvasMeshRenderer_def.hpp"
#include "GlobalNamespace/zzzz__OVROverlay_OverlayShape_def.hpp"
#include "GlobalNamespace/zzzz__OVROverlay_def.hpp"
#include "Oculus/Interaction/UnityCanvas/zzzz__CanvasMesh_def.hpp"
#include "Oculus/Interaction/UnityCanvas/zzzz__CanvasRenderTexture_def.hpp"
#include "Oculus/Interaction/UnityCanvas/zzzz__OVRCanvasMeshRenderer_def.hpp"
#include "Oculus/Interaction/UnityCanvas/zzzz__OVRRenderingMode_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer.get_RenderingMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::UnityCanvas::OVRRenderingMode (::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::*)()>(&::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::get_RenderingMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa41a42c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer*>(),
                        {"get_RenderingMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer.get_ShouldUseOVROverlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::*)()>(&::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::get_ShouldUseOVROverlay)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa41a434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer*>(),
                        {"get_ShouldUseOVROverlay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer.GetShaderName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::*)()>(&::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::GetShaderName)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa41a4d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer*>(),
                    {::i2c::class_of<::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer.GetAlphaCutoutThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::*)()>(&::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::GetAlphaCutoutThreshold)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa41a584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer*>(),
                    {::i2c::class_of<::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer.HandleUpdateRenderTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::*)(::UnityEngine::Texture*)>(&::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::HandleUpdateRenderTexture)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa41a5c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer*>(),
                    {::i2c::class_of<::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer.UseEditorEmulation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::*)()>(&::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::UseEditorEmulation)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa41a464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer*>(),
                        {"UseEditorEmulation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer.GetOverlayParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::*)(::by_ref<::GlobalNamespace::OVROverlay_OverlayShape>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::GetOverlayParameters)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0xa41a968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer*>(),
                        {"GetOverlayParameters", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::OVROverlay_OverlayShape>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::*)()>(&::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::Start)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa41abe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer*>(),
                    {::i2c::class_of<::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer.UpdateOverlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::*)(::UnityEngine::Texture*)>(&::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::UpdateOverlay)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0xa41a5f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer*>(),
                        {"UpdateOverlay", {}, {::i2c::type_of<::UnityEngine::Texture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer.CreateChildObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::*)(::StringW)>(&::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::CreateChildObject)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xa41ac78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer*>(),
                        {"CreateChildObject", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer.InjectAllOVRCanvasMeshRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::*)(::Oculus::Interaction::UnityCanvas::CanvasRenderTexture*, ::UnityEngine::MeshRenderer*, ::Oculus::Interaction::UnityCanvas::CanvasMesh*)>(&::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::InjectAllOVRCanvasMeshRenderer)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa41ae18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer*>(),
                        {"InjectAllOVRCanvasMeshRenderer", {}, {::i2c::type_of<::Oculus::Interaction::UnityCanvas::CanvasRenderTexture*>(), ::i2c::type_of<::UnityEngine::MeshRenderer*>(), ::i2c::type_of<::Oculus::Interaction::UnityCanvas::CanvasMesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer.InjectCanvasMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::*)(::Oculus::Interaction::UnityCanvas::CanvasMesh*)>(&::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::InjectCanvasMesh)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa41ae48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer*>(),
                        {"InjectCanvasMesh", {}, {::i2c::type_of<::Oculus::Interaction::UnityCanvas::CanvasMesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer.InjectOptionalRenderingMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::*)(::Oculus::Interaction::UnityCanvas::OVRRenderingMode)>(&::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::InjectOptionalRenderingMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa41ae50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer*>(),
                        {"InjectOptionalRenderingMode", {}, {::i2c::type_of<::Oculus::Interaction::UnityCanvas::OVRRenderingMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer.InjectOptionalDoUnderlayAntiAliasing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::*)(bool)>(&::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::InjectOptionalDoUnderlayAntiAliasing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa41ae58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer*>(),
                        {"InjectOptionalDoUnderlayAntiAliasing", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer.InjectOptionalEnableSuperSampling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::*)(bool)>(&::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::InjectOptionalEnableSuperSampling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa41ae60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer*>(),
                        {"InjectOptionalEnableSuperSampling", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::*)()>(&::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa41ae68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer._Start_b__15_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::*)()>(&::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::_Start_b__15_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa41aed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer*>(),
                        {"<Start>b__15_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Oculus::Interaction::UnityCanvas::CanvasMesh>& Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::__cordl_internal_get__canvasMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canvasMesh;
}
constexpr ::UnityW<::Oculus::Interaction::UnityCanvas::CanvasMesh> const& Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::__cordl_internal_get__canvasMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canvasMesh;
}
constexpr void Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::__cordl_internal_set__canvasMesh(::UnityW<::Oculus::Interaction::UnityCanvas::CanvasMesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____canvasMesh = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::__cordl_internal_get__runtimeOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____runtimeOffset;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::__cordl_internal_get__runtimeOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____runtimeOffset;
}
constexpr void Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::__cordl_internal_set__runtimeOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____runtimeOffset = value;
}
constexpr bool& Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::__cordl_internal_get__enableSuperSampling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enableSuperSampling;
}
constexpr bool const& Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::__cordl_internal_get__enableSuperSampling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enableSuperSampling;
}
constexpr void Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::__cordl_internal_set__enableSuperSampling(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____enableSuperSampling = value;
}
constexpr bool& Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::__cordl_internal_get__doUnderlayAntiAliasing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doUnderlayAntiAliasing;
}
constexpr bool const& Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::__cordl_internal_get__doUnderlayAntiAliasing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doUnderlayAntiAliasing;
}
constexpr void Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::__cordl_internal_set__doUnderlayAntiAliasing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____doUnderlayAntiAliasing = value;
}
constexpr bool& Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::__cordl_internal_get__emulateWhileInEditor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____emulateWhileInEditor;
}
constexpr bool const& Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::__cordl_internal_get__emulateWhileInEditor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____emulateWhileInEditor;
}
constexpr void Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::__cordl_internal_set__emulateWhileInEditor(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____emulateWhileInEditor = value;
}
constexpr ::UnityW<::GlobalNamespace::OVROverlay>& Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::__cordl_internal_get__overlay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overlay;
}
constexpr ::UnityW<::GlobalNamespace::OVROverlay> const& Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::__cordl_internal_get__overlay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overlay;
}
constexpr void Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::__cordl_internal_set__overlay(::UnityW<::GlobalNamespace::OVROverlay>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____overlay = value;
}
inline ::Oculus::Interaction::UnityCanvas::OVRRenderingMode Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::get_RenderingMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer*>(),
                        {"get_RenderingMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::UnityCanvas::OVRRenderingMode>(this, ___internal_method);
}
inline bool Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::get_ShouldUseOVROverlay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer*>(),
                        {"get_ShouldUseOVROverlay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::GetShaderName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline float_t Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::GetAlphaCutoutThreshold()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::HandleUpdateRenderTexture(::UnityEngine::Texture*  texture)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, texture);
}
inline bool Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::UseEditorEmulation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer*>(),
                        {"UseEditorEmulation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::GetOverlayParameters(::by_ref<::GlobalNamespace::OVROverlay_OverlayShape>  shape, ::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Vector3>  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer*>(),
                        {"GetOverlayParameters", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::OVROverlay_OverlayShape>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, shape, position, scale);
}
inline void Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::UpdateOverlay(::UnityEngine::Texture*  texture)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer*>(),
                        {"UpdateOverlay", {}, {::i2c::type_of<::UnityEngine::Texture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, texture);
}
inline ::UnityW<::UnityEngine::GameObject> Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::CreateChildObject(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer*>(),
                        {"CreateChildObject", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, name);
}
inline void Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::InjectAllOVRCanvasMeshRenderer(::Oculus::Interaction::UnityCanvas::CanvasRenderTexture*  canvasRenderTexture, ::UnityEngine::MeshRenderer*  meshRenderer, ::Oculus::Interaction::UnityCanvas::CanvasMesh*  canvasMesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer*>(),
                        {"InjectAllOVRCanvasMeshRenderer", {}, {::i2c::type_of<::Oculus::Interaction::UnityCanvas::CanvasRenderTexture*>(), ::i2c::type_of<::UnityEngine::MeshRenderer*>(), ::i2c::type_of<::Oculus::Interaction::UnityCanvas::CanvasMesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, canvasRenderTexture, meshRenderer, canvasMesh);
}
inline void Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::InjectCanvasMesh(::Oculus::Interaction::UnityCanvas::CanvasMesh*  canvasMesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer*>(),
                        {"InjectCanvasMesh", {}, {::i2c::type_of<::Oculus::Interaction::UnityCanvas::CanvasMesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, canvasMesh);
}
inline void Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::InjectOptionalRenderingMode(::Oculus::Interaction::UnityCanvas::OVRRenderingMode  ovrRenderingMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer*>(),
                        {"InjectOptionalRenderingMode", {}, {::i2c::type_of<::Oculus::Interaction::UnityCanvas::OVRRenderingMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ovrRenderingMode);
}
inline void Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::InjectOptionalDoUnderlayAntiAliasing(bool  doUnderlayAntiAliasing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer*>(),
                        {"InjectOptionalDoUnderlayAntiAliasing", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, doUnderlayAntiAliasing);
}
inline void Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::InjectOptionalEnableSuperSampling(bool  enableSuperSampling)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer*>(),
                        {"InjectOptionalEnableSuperSampling", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enableSuperSampling);
}
inline void Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::_Start_b__15_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer*>(),
                        {"<Start>b__15_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer* Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::OVRCanvasMeshRenderer()   {
}
inline void Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer_Properties::setStaticF_CanvasRenderTexture(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "CanvasRenderTexture", ::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer_Properties*>(std::forward<::StringW>(value));
}
inline ::StringW Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer_Properties::getStaticF_CanvasRenderTexture()  {
return ::cordl_internals::getStaticField<::StringW, "CanvasRenderTexture", ::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer_Properties*>();
}
inline void Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer_Properties::setStaticF_CanvasMesh(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "CanvasMesh", ::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer_Properties*>(std::forward<::StringW>(value));
}
inline ::StringW Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer_Properties::getStaticF_CanvasMesh()  {
return ::cordl_internals::getStaticField<::StringW, "CanvasMesh", ::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer_Properties*>();
}
inline void Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer_Properties::setStaticF_EnableSuperSampling(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "EnableSuperSampling", ::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer_Properties*>(std::forward<::StringW>(value));
}
inline ::StringW Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer_Properties::getStaticF_EnableSuperSampling()  {
return ::cordl_internals::getStaticField<::StringW, "EnableSuperSampling", ::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer_Properties*>();
}
inline void Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer_Properties::setStaticF_EmulateWhileInEditor(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "EmulateWhileInEditor", ::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer_Properties*>(std::forward<::StringW>(value));
}
inline ::StringW Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer_Properties::getStaticF_EmulateWhileInEditor()  {
return ::cordl_internals::getStaticField<::StringW, "EmulateWhileInEditor", ::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer_Properties*>();
}
inline void Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer_Properties::setStaticF_DoUnderlayAntiAliasing(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "DoUnderlayAntiAliasing", ::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer_Properties*>(std::forward<::StringW>(value));
}
inline ::StringW Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer_Properties::getStaticF_DoUnderlayAntiAliasing()  {
return ::cordl_internals::getStaticField<::StringW, "DoUnderlayAntiAliasing", ::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer_Properties*>();
}
inline void Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer_Properties::setStaticF_RuntimeOffset(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "RuntimeOffset", ::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer_Properties*>(std::forward<::StringW>(value));
}
inline ::StringW Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer_Properties::getStaticF_RuntimeOffset()  {
return ::cordl_internals::getStaticField<::StringW, "RuntimeOffset", ::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer_Properties*>();
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer_Properties::OVRCanvasMeshRenderer_Properties()   {
}
