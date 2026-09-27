#pragma once
// IWYU pragma private; include "Liv/Lck/Rendering/LckHeadsetCaptureRenderFeature.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_impl.hpp"
#include "Liv/Lck/Rendering/zzzz__LckHeadsetCaptureRenderFeature_def.hpp"
#include "Liv/Lck/Rendering/zzzz__LckHeadsetCaptureRenderPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Rendering::LckHeadsetCaptureRenderFeature.get_IsConfigured
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Liv::Lck::Rendering::LckHeadsetCaptureRenderFeature::get_IsConfigured)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9d403d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckHeadsetCaptureRenderFeature*>(),
                        {"get_IsConfigured", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Rendering::LckHeadsetCaptureRenderFeature.set_IsConfigured
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Liv::Lck::Rendering::LckHeadsetCaptureRenderFeature::set_IsConfigured)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x9d40420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckHeadsetCaptureRenderFeature*>(),
                        {"set_IsConfigured", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Rendering::LckHeadsetCaptureRenderFeature.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Rendering::LckHeadsetCaptureRenderFeature::*)()>(&::Liv::Lck::Rendering::LckHeadsetCaptureRenderFeature::Create)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9d40470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Rendering::LckHeadsetCaptureRenderFeature*>(),
                    {::i2c::class_of<::Liv::Lck::Rendering::LckHeadsetCaptureRenderFeature*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Rendering::LckHeadsetCaptureRenderFeature.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Rendering::LckHeadsetCaptureRenderFeature::*)(bool)>(&::Liv::Lck::Rendering::LckHeadsetCaptureRenderFeature::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9d4056c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Rendering::LckHeadsetCaptureRenderFeature*>(),
                    {::i2c::class_of<::Liv::Lck::Rendering::LckHeadsetCaptureRenderFeature*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Rendering::LckHeadsetCaptureRenderFeature.AddRenderPasses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Rendering::LckHeadsetCaptureRenderFeature::*)(::UnityEngine::Rendering::Universal::ScriptableRenderer*, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::Liv::Lck::Rendering::LckHeadsetCaptureRenderFeature::AddRenderPasses)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x9d405c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Rendering::LckHeadsetCaptureRenderFeature*>(),
                    {::i2c::class_of<::Liv::Lck::Rendering::LckHeadsetCaptureRenderFeature*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Rendering::LckHeadsetCaptureRenderFeature._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Rendering::LckHeadsetCaptureRenderFeature::*)()>(&::Liv::Lck::Rendering::LckHeadsetCaptureRenderFeature::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d4082c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckHeadsetCaptureRenderFeature*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass*& Liv::Lck::Rendering::LckHeadsetCaptureRenderFeature::__cordl_internal_get__pass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pass;
}
constexpr ::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass* const& Liv::Lck::Rendering::LckHeadsetCaptureRenderFeature::__cordl_internal_get__pass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pass;
}
constexpr void Liv::Lck::Rendering::LckHeadsetCaptureRenderFeature::__cordl_internal_set__pass(::Liv::Lck::Rendering::LckHeadsetCaptureRenderPass*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pass = value;
}
inline void Liv::Lck::Rendering::LckHeadsetCaptureRenderFeature::setStaticF__IsConfigured_k__BackingField(bool  value)  {
::cordl_internals::setStaticField<bool, "<IsConfigured>k__BackingField", ::Liv::Lck::Rendering::LckHeadsetCaptureRenderFeature*>(std::forward<bool>(value));
}
inline bool Liv::Lck::Rendering::LckHeadsetCaptureRenderFeature::getStaticF__IsConfigured_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<IsConfigured>k__BackingField", ::Liv::Lck::Rendering::LckHeadsetCaptureRenderFeature*>();
}
inline bool Liv::Lck::Rendering::LckHeadsetCaptureRenderFeature::get_IsConfigured()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckHeadsetCaptureRenderFeature*>(),
                        {"get_IsConfigured", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Liv::Lck::Rendering::LckHeadsetCaptureRenderFeature::set_IsConfigured(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckHeadsetCaptureRenderFeature*>(),
                        {"set_IsConfigured", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Liv::Lck::Rendering::LckHeadsetCaptureRenderFeature::Create()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Rendering::LckHeadsetCaptureRenderFeature*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Rendering::LckHeadsetCaptureRenderFeature::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Rendering::LckHeadsetCaptureRenderFeature*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void Liv::Lck::Rendering::LckHeadsetCaptureRenderFeature::AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer*  renderer, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Rendering::LckHeadsetCaptureRenderFeature*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderer, renderingData);
}
inline void Liv::Lck::Rendering::LckHeadsetCaptureRenderFeature::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckHeadsetCaptureRenderFeature*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::Rendering::LckHeadsetCaptureRenderFeature* Liv::Lck::Rendering::LckHeadsetCaptureRenderFeature::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Rendering::LckHeadsetCaptureRenderFeature*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Rendering::LckHeadsetCaptureRenderFeature::LckHeadsetCaptureRenderFeature()   {
}
