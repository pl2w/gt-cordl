#pragma once
// IWYU pragma private; include "GlobalNamespace/DevInspectorScanner.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DevInspectorScanner_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DevInspectorScanner._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DevInspectorScanner::*)()>(&::GlobalNamespace::DevInspectorScanner::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x566fa4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevInspectorScanner*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Text>& GlobalNamespace::DevInspectorScanner::__cordl_internal_get_hintTextOutput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hintTextOutput;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& GlobalNamespace::DevInspectorScanner::__cordl_internal_get_hintTextOutput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hintTextOutput;
}
constexpr void GlobalNamespace::DevInspectorScanner::__cordl_internal_set_hintTextOutput(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hintTextOutput = value;
}
constexpr float_t& GlobalNamespace::DevInspectorScanner::__cordl_internal_get_scanDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scanDistance;
}
constexpr float_t const& GlobalNamespace::DevInspectorScanner::__cordl_internal_get_scanDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scanDistance;
}
constexpr void GlobalNamespace::DevInspectorScanner::__cordl_internal_set_scanDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scanDistance = value;
}
constexpr float_t& GlobalNamespace::DevInspectorScanner::__cordl_internal_get_scanAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scanAngle;
}
constexpr float_t const& GlobalNamespace::DevInspectorScanner::__cordl_internal_get_scanAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scanAngle;
}
constexpr void GlobalNamespace::DevInspectorScanner::__cordl_internal_set_scanAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scanAngle = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::DevInspectorScanner::__cordl_internal_get_scanLayerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scanLayerMask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::DevInspectorScanner::__cordl_internal_get_scanLayerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scanLayerMask;
}
constexpr void GlobalNamespace::DevInspectorScanner::__cordl_internal_set_scanLayerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scanLayerMask = value;
}
constexpr ::StringW& GlobalNamespace::DevInspectorScanner::__cordl_internal_get_targetComponentName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetComponentName;
}
constexpr ::StringW const& GlobalNamespace::DevInspectorScanner::__cordl_internal_get_targetComponentName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetComponentName;
}
constexpr void GlobalNamespace::DevInspectorScanner::__cordl_internal_set_targetComponentName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetComponentName = value;
}
constexpr float_t& GlobalNamespace::DevInspectorScanner::__cordl_internal_get_rayPerDegree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rayPerDegree;
}
constexpr float_t const& GlobalNamespace::DevInspectorScanner::__cordl_internal_get_rayPerDegree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rayPerDegree;
}
constexpr void GlobalNamespace::DevInspectorScanner::__cordl_internal_set_rayPerDegree(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rayPerDegree = value;
}
inline void GlobalNamespace::DevInspectorScanner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevInspectorScanner*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DevInspectorScanner* GlobalNamespace::DevInspectorScanner::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DevInspectorScanner*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DevInspectorScanner::DevInspectorScanner()   {
}
