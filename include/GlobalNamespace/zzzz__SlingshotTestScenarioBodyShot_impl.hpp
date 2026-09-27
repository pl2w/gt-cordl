#pragma once
// IWYU pragma private; include "GlobalNamespace/SlingshotTestScenarioBodyShot.hpp"
#include "GlobalNamespace/zzzz__SlingshotTestScenario_impl.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "GlobalNamespace/zzzz__SlingshotTestScenarioBodyShot_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SlingshotTestScenarioBodyShot._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SlingshotTestScenarioBodyShot::*)()>(&::GlobalNamespace::SlingshotTestScenarioBodyShot::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x573d1f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotTestScenarioBodyShot*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SlingshotTestScenarioBodyShot::__cordl_internal_get_projectilePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectilePrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SlingshotTestScenarioBodyShot::__cordl_internal_get_projectilePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectilePrefab;
}
constexpr void GlobalNamespace::SlingshotTestScenarioBodyShot::__cordl_internal_set_projectilePrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectilePrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::SlingshotTestScenarioBodyShot::__cordl_internal_get_targetRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::SlingshotTestScenarioBodyShot::__cordl_internal_get_targetRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRig;
}
constexpr void GlobalNamespace::SlingshotTestScenarioBodyShot::__cordl_internal_set_targetRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetRig = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& GlobalNamespace::SlingshotTestScenarioBodyShot::__cordl_internal_get_targetColliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetColliders;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& GlobalNamespace::SlingshotTestScenarioBodyShot::__cordl_internal_get_targetColliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetColliders;
}
constexpr void GlobalNamespace::SlingshotTestScenarioBodyShot::__cordl_internal_set_targetColliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetColliders = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SlingshotTestScenarioBodyShot::__cordl_internal_get_anchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchor;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SlingshotTestScenarioBodyShot::__cordl_internal_get_anchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchor;
}
constexpr void GlobalNamespace::SlingshotTestScenarioBodyShot::__cordl_internal_set_anchor(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anchor = value;
}
inline void GlobalNamespace::SlingshotTestScenarioBodyShot::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotTestScenarioBodyShot*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SlingshotTestScenarioBodyShot* GlobalNamespace::SlingshotTestScenarioBodyShot::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SlingshotTestScenarioBodyShot*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SlingshotTestScenarioBodyShot::SlingshotTestScenarioBodyShot()   {
}
