#pragma once
// IWYU pragma private; include "GlobalNamespace/VoiceLoudnessReactorRendererColorTarget.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__VoiceLoudnessReactorRendererColorTarget_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Gradient_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VoiceLoudnessReactorRendererColorTarget.Inititialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoiceLoudnessReactorRendererColorTarget::*)()>(&::GlobalNamespace::VoiceLoudnessReactorRendererColorTarget::Inititialize)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5b4028c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceLoudnessReactorRendererColorTarget*>(),
                        {"Inititialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoiceLoudnessReactorRendererColorTarget.UpdateMaterialColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoiceLoudnessReactorRendererColorTarget::*)(float_t)>(&::GlobalNamespace::VoiceLoudnessReactorRendererColorTarget::UpdateMaterialColor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5b40c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceLoudnessReactorRendererColorTarget*>(),
                        {"UpdateMaterialColor", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoiceLoudnessReactorRendererColorTarget._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoiceLoudnessReactorRendererColorTarget::*)()>(&::GlobalNamespace::VoiceLoudnessReactorRendererColorTarget::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b40efc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceLoudnessReactorRendererColorTarget*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::VoiceLoudnessReactorRendererColorTarget::__cordl_internal_get_colorProperty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorProperty;
}
constexpr ::StringW const& GlobalNamespace::VoiceLoudnessReactorRendererColorTarget::__cordl_internal_get_colorProperty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorProperty;
}
constexpr void GlobalNamespace::VoiceLoudnessReactorRendererColorTarget::__cordl_internal_set_colorProperty(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colorProperty = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& GlobalNamespace::VoiceLoudnessReactorRendererColorTarget::__cordl_internal_get_renderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& GlobalNamespace::VoiceLoudnessReactorRendererColorTarget::__cordl_internal_get_renderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderer;
}
constexpr void GlobalNamespace::VoiceLoudnessReactorRendererColorTarget::__cordl_internal_set_renderer(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderer = value;
}
constexpr int32_t& GlobalNamespace::VoiceLoudnessReactorRendererColorTarget::__cordl_internal_get_materialIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialIndex;
}
constexpr int32_t const& GlobalNamespace::VoiceLoudnessReactorRendererColorTarget::__cordl_internal_get_materialIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialIndex;
}
constexpr void GlobalNamespace::VoiceLoudnessReactorRendererColorTarget::__cordl_internal_set_materialIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___materialIndex = value;
}
constexpr ::UnityEngine::Gradient*& GlobalNamespace::VoiceLoudnessReactorRendererColorTarget::__cordl_internal_get_gradient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gradient;
}
constexpr ::UnityEngine::Gradient* const& GlobalNamespace::VoiceLoudnessReactorRendererColorTarget::__cordl_internal_get_gradient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gradient;
}
constexpr void GlobalNamespace::VoiceLoudnessReactorRendererColorTarget::__cordl_internal_set_gradient(::UnityEngine::Gradient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gradient = value;
}
constexpr bool& GlobalNamespace::VoiceLoudnessReactorRendererColorTarget::__cordl_internal_get_useSmoothedLoudness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useSmoothedLoudness;
}
constexpr bool const& GlobalNamespace::VoiceLoudnessReactorRendererColorTarget::__cordl_internal_get_useSmoothedLoudness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useSmoothedLoudness;
}
constexpr void GlobalNamespace::VoiceLoudnessReactorRendererColorTarget::__cordl_internal_set_useSmoothedLoudness(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useSmoothedLoudness = value;
}
constexpr float_t& GlobalNamespace::VoiceLoudnessReactorRendererColorTarget::__cordl_internal_get_scale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scale;
}
constexpr float_t const& GlobalNamespace::VoiceLoudnessReactorRendererColorTarget::__cordl_internal_get_scale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scale;
}
constexpr void GlobalNamespace::VoiceLoudnessReactorRendererColorTarget::__cordl_internal_set_scale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scale = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*& GlobalNamespace::VoiceLoudnessReactorRendererColorTarget::__cordl_internal_get__materials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materials;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* const& GlobalNamespace::VoiceLoudnessReactorRendererColorTarget::__cordl_internal_get__materials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materials;
}
constexpr void GlobalNamespace::VoiceLoudnessReactorRendererColorTarget::__cordl_internal_set__materials(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____materials = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::VoiceLoudnessReactorRendererColorTarget::__cordl_internal_get__lastColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::VoiceLoudnessReactorRendererColorTarget::__cordl_internal_get__lastColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastColor;
}
constexpr void GlobalNamespace::VoiceLoudnessReactorRendererColorTarget::__cordl_internal_set__lastColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastColor = value;
}
inline void GlobalNamespace::VoiceLoudnessReactorRendererColorTarget::Inititialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceLoudnessReactorRendererColorTarget*>(),
                        {"Inititialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VoiceLoudnessReactorRendererColorTarget::UpdateMaterialColor(float_t  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceLoudnessReactorRendererColorTarget*>(),
                        {"UpdateMaterialColor", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, level);
}
inline void GlobalNamespace::VoiceLoudnessReactorRendererColorTarget::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceLoudnessReactorRendererColorTarget*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VoiceLoudnessReactorRendererColorTarget* GlobalNamespace::VoiceLoudnessReactorRendererColorTarget::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VoiceLoudnessReactorRendererColorTarget*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VoiceLoudnessReactorRendererColorTarget::VoiceLoudnessReactorRendererColorTarget()   {
}
