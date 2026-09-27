#pragma once
// IWYU pragma private; include "Liv/Lck/Rendering/LckCompositionRenderFeature.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_impl.hpp"
#include "Liv/Lck/Rendering/zzzz__LckCompositionRenderFeature_def.hpp"
#include "Liv/Lck/Rendering/zzzz__LckCompositionProfile_def.hpp"
#include "Liv/Lck/Rendering/zzzz__LckCompositionRenderPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Rendering::LckCompositionRenderFeature.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Rendering::LckCompositionRenderFeature::*)()>(&::Liv::Lck::Rendering::LckCompositionRenderFeature::Create)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9d3f804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Rendering::LckCompositionRenderFeature*>(),
                    {::i2c::class_of<::Liv::Lck::Rendering::LckCompositionRenderFeature*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Rendering::LckCompositionRenderFeature.AddRenderPasses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Rendering::LckCompositionRenderFeature::*)(::UnityEngine::Rendering::Universal::ScriptableRenderer*, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::Liv::Lck::Rendering::LckCompositionRenderFeature::AddRenderPasses)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x9d3f8d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Rendering::LckCompositionRenderFeature*>(),
                    {::i2c::class_of<::Liv::Lck::Rendering::LckCompositionRenderFeature*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Rendering::LckCompositionRenderFeature._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Rendering::LckCompositionRenderFeature::*)()>(&::Liv::Lck::Rendering::LckCompositionRenderFeature::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9d3fb44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckCompositionRenderFeature*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Liv::Lck::Rendering::LckCompositionProfile>& Liv::Lck::Rendering::LckCompositionRenderFeature::__cordl_internal_get__compositionProfile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____compositionProfile;
}
constexpr ::UnityW<::Liv::Lck::Rendering::LckCompositionProfile> const& Liv::Lck::Rendering::LckCompositionRenderFeature::__cordl_internal_get__compositionProfile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____compositionProfile;
}
constexpr void Liv::Lck::Rendering::LckCompositionRenderFeature::__cordl_internal_set__compositionProfile(::UnityW<::Liv::Lck::Rendering::LckCompositionProfile>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____compositionProfile = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Liv::Lck::Rendering::LckCompositionRenderFeature::__cordl_internal_get__material()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____material;
}
constexpr ::UnityW<::UnityEngine::Material> const& Liv::Lck::Rendering::LckCompositionRenderFeature::__cordl_internal_get__material() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____material;
}
constexpr void Liv::Lck::Rendering::LckCompositionRenderFeature::__cordl_internal_set__material(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____material = value;
}
constexpr ::UnityEngine::Rendering::Universal::RenderPassEvent& Liv::Lck::Rendering::LckCompositionRenderFeature::__cordl_internal_get__renderPassEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderPassEvent;
}
constexpr ::UnityEngine::Rendering::Universal::RenderPassEvent const& Liv::Lck::Rendering::LckCompositionRenderFeature::__cordl_internal_get__renderPassEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderPassEvent;
}
constexpr void Liv::Lck::Rendering::LckCompositionRenderFeature::__cordl_internal_set__renderPassEvent(::UnityEngine::Rendering::Universal::RenderPassEvent  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____renderPassEvent = value;
}
constexpr bool& Liv::Lck::Rendering::LckCompositionRenderFeature::__cordl_internal_get__previewInGameWindow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previewInGameWindow;
}
constexpr bool const& Liv::Lck::Rendering::LckCompositionRenderFeature::__cordl_internal_get__previewInGameWindow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previewInGameWindow;
}
constexpr void Liv::Lck::Rendering::LckCompositionRenderFeature::__cordl_internal_set__previewInGameWindow(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____previewInGameWindow = value;
}
constexpr ::Liv::Lck::Rendering::LckCompositionRenderPass*& Liv::Lck::Rendering::LckCompositionRenderFeature::__cordl_internal_get_m_Pass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Pass;
}
constexpr ::Liv::Lck::Rendering::LckCompositionRenderPass* const& Liv::Lck::Rendering::LckCompositionRenderFeature::__cordl_internal_get_m_Pass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Pass;
}
constexpr void Liv::Lck::Rendering::LckCompositionRenderFeature::__cordl_internal_set_m_Pass(::Liv::Lck::Rendering::LckCompositionRenderPass*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Pass = value;
}
inline void Liv::Lck::Rendering::LckCompositionRenderFeature::setStaticF_OverlayTexID(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "OverlayTexID", ::Liv::Lck::Rendering::LckCompositionRenderFeature*>(std::forward<int32_t>(value));
}
inline int32_t Liv::Lck::Rendering::LckCompositionRenderFeature::getStaticF_OverlayTexID()  {
return ::cordl_internals::getStaticField<int32_t, "OverlayTexID", ::Liv::Lck::Rendering::LckCompositionRenderFeature*>();
}
inline void Liv::Lck::Rendering::LckCompositionRenderFeature::Create()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Rendering::LckCompositionRenderFeature*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Rendering::LckCompositionRenderFeature::AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer*  renderer, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Rendering::LckCompositionRenderFeature*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderer, renderingData);
}
inline void Liv::Lck::Rendering::LckCompositionRenderFeature::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckCompositionRenderFeature*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::Rendering::LckCompositionRenderFeature* Liv::Lck::Rendering::LckCompositionRenderFeature::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Rendering::LckCompositionRenderFeature*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Rendering::LckCompositionRenderFeature::LckCompositionRenderFeature()   {
}
