#pragma once
// IWYU pragma private; include "GlobalNamespace/VoiceLoudnessReactorBlendShapeTarget.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__VoiceLoudnessReactorBlendShapeTarget_def.hpp"
#include "UnityEngine/zzzz__SkinnedMeshRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VoiceLoudnessReactorBlendShapeTarget._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoiceLoudnessReactorBlendShapeTarget::*)()>(&::GlobalNamespace::VoiceLoudnessReactorBlendShapeTarget::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b40f64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceLoudnessReactorBlendShapeTarget*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& GlobalNamespace::VoiceLoudnessReactorBlendShapeTarget::__cordl_internal_get_SkinnedMeshRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SkinnedMeshRenderer;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& GlobalNamespace::VoiceLoudnessReactorBlendShapeTarget::__cordl_internal_get_SkinnedMeshRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SkinnedMeshRenderer;
}
constexpr void GlobalNamespace::VoiceLoudnessReactorBlendShapeTarget::__cordl_internal_set_SkinnedMeshRenderer(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SkinnedMeshRenderer = value;
}
constexpr int32_t& GlobalNamespace::VoiceLoudnessReactorBlendShapeTarget::__cordl_internal_get_BlendShapeIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BlendShapeIndex;
}
constexpr int32_t const& GlobalNamespace::VoiceLoudnessReactorBlendShapeTarget::__cordl_internal_get_BlendShapeIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BlendShapeIndex;
}
constexpr void GlobalNamespace::VoiceLoudnessReactorBlendShapeTarget::__cordl_internal_set_BlendShapeIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BlendShapeIndex = value;
}
constexpr float_t& GlobalNamespace::VoiceLoudnessReactorBlendShapeTarget::__cordl_internal_get_minValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minValue;
}
constexpr float_t const& GlobalNamespace::VoiceLoudnessReactorBlendShapeTarget::__cordl_internal_get_minValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minValue;
}
constexpr void GlobalNamespace::VoiceLoudnessReactorBlendShapeTarget::__cordl_internal_set_minValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minValue = value;
}
constexpr float_t& GlobalNamespace::VoiceLoudnessReactorBlendShapeTarget::__cordl_internal_get_maxValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxValue;
}
constexpr float_t const& GlobalNamespace::VoiceLoudnessReactorBlendShapeTarget::__cordl_internal_get_maxValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxValue;
}
constexpr void GlobalNamespace::VoiceLoudnessReactorBlendShapeTarget::__cordl_internal_set_maxValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxValue = value;
}
constexpr bool& GlobalNamespace::VoiceLoudnessReactorBlendShapeTarget::__cordl_internal_get_UseSmoothedLoudness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseSmoothedLoudness;
}
constexpr bool const& GlobalNamespace::VoiceLoudnessReactorBlendShapeTarget::__cordl_internal_get_UseSmoothedLoudness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseSmoothedLoudness;
}
constexpr void GlobalNamespace::VoiceLoudnessReactorBlendShapeTarget::__cordl_internal_set_UseSmoothedLoudness(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UseSmoothedLoudness = value;
}
inline void GlobalNamespace::VoiceLoudnessReactorBlendShapeTarget::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceLoudnessReactorBlendShapeTarget*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VoiceLoudnessReactorBlendShapeTarget* GlobalNamespace::VoiceLoudnessReactorBlendShapeTarget::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VoiceLoudnessReactorBlendShapeTarget*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VoiceLoudnessReactorBlendShapeTarget::VoiceLoudnessReactorBlendShapeTarget()   {
}
