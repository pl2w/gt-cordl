#pragma once
// IWYU pragma private; include "GlobalNamespace/ProximityEffectScoreCurvesSO.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__ProximityEffectScoreCurvesSO_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ProximityEffectScoreCurvesSO._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProximityEffectScoreCurvesSO::*)()>(&::GlobalNamespace::ProximityEffectScoreCurvesSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x565a56c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityEffectScoreCurvesSO*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::ProximityEffectScoreCurvesSO::__cordl_internal_get_distanceModifierCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distanceModifierCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::ProximityEffectScoreCurvesSO::__cordl_internal_get_distanceModifierCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distanceModifierCurve;
}
constexpr void GlobalNamespace::ProximityEffectScoreCurvesSO::__cordl_internal_set_distanceModifierCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___distanceModifierCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::ProximityEffectScoreCurvesSO::__cordl_internal_get_alignmentModifierCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alignmentModifierCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::ProximityEffectScoreCurvesSO::__cordl_internal_get_alignmentModifierCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alignmentModifierCurve;
}
constexpr void GlobalNamespace::ProximityEffectScoreCurvesSO::__cordl_internal_set_alignmentModifierCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___alignmentModifierCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::ProximityEffectScoreCurvesSO::__cordl_internal_get_parallelModifierCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parallelModifierCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::ProximityEffectScoreCurvesSO::__cordl_internal_get_parallelModifierCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parallelModifierCurve;
}
constexpr void GlobalNamespace::ProximityEffectScoreCurvesSO::__cordl_internal_set_parallelModifierCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parallelModifierCurve = value;
}
inline void GlobalNamespace::ProximityEffectScoreCurvesSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProximityEffectScoreCurvesSO*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProximityEffectScoreCurvesSO* GlobalNamespace::ProximityEffectScoreCurvesSO::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProximityEffectScoreCurvesSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProximityEffectScoreCurvesSO::ProximityEffectScoreCurvesSO()   {
}
