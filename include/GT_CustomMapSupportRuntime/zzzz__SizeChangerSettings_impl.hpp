#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/SizeChangerSettings.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__SizeChangerSettings_ChangerType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__SizeChangerSettings_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__SizeChangerSettings_ChangerType_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::SizeChangerSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GT_CustomMapSupportRuntime::SizeChangerSettings::*)()>(&::GT_CustomMapSupportRuntime::SizeChangerSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cb82c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::SizeChangerSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SizeChangerSettings_ChangerType& GT_CustomMapSupportRuntime::SizeChangerSettings::__cordl_internal_get_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr ::GlobalNamespace::SizeChangerSettings_ChangerType const& GT_CustomMapSupportRuntime::SizeChangerSettings::__cordl_internal_get_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr void GT_CustomMapSupportRuntime::SizeChangerSettings::__cordl_internal_set_type(::GlobalNamespace::SizeChangerSettings_ChangerType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___type = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::SizeChangerSettings::__cordl_internal_get_staticEasing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___staticEasing;
}
constexpr float_t const& GT_CustomMapSupportRuntime::SizeChangerSettings::__cordl_internal_get_staticEasing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___staticEasing;
}
constexpr void GT_CustomMapSupportRuntime::SizeChangerSettings::__cordl_internal_set_staticEasing(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___staticEasing = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::SizeChangerSettings::__cordl_internal_get_maxScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxScale;
}
constexpr float_t const& GT_CustomMapSupportRuntime::SizeChangerSettings::__cordl_internal_get_maxScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxScale;
}
constexpr void GT_CustomMapSupportRuntime::SizeChangerSettings::__cordl_internal_set_maxScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxScale = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::SizeChangerSettings::__cordl_internal_get_minScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minScale;
}
constexpr float_t const& GT_CustomMapSupportRuntime::SizeChangerSettings::__cordl_internal_get_minScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minScale;
}
constexpr void GT_CustomMapSupportRuntime::SizeChangerSettings::__cordl_internal_set_minScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minScale = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GT_CustomMapSupportRuntime::SizeChangerSettings::__cordl_internal_get_startPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startPos;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GT_CustomMapSupportRuntime::SizeChangerSettings::__cordl_internal_get_startPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startPos;
}
constexpr void GT_CustomMapSupportRuntime::SizeChangerSettings::__cordl_internal_set_startPos(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startPos = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GT_CustomMapSupportRuntime::SizeChangerSettings::__cordl_internal_get_endPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endPos;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GT_CustomMapSupportRuntime::SizeChangerSettings::__cordl_internal_get_endPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endPos;
}
constexpr void GT_CustomMapSupportRuntime::SizeChangerSettings::__cordl_internal_set_endPos(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endPos = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GT_CustomMapSupportRuntime::SizeChangerSettings::__cordl_internal_get_scaleAwayFromPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleAwayFromPoint;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GT_CustomMapSupportRuntime::SizeChangerSettings::__cordl_internal_get_scaleAwayFromPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleAwayFromPoint;
}
constexpr void GT_CustomMapSupportRuntime::SizeChangerSettings::__cordl_internal_set_scaleAwayFromPoint(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scaleAwayFromPoint = value;
}
constexpr bool& GT_CustomMapSupportRuntime::SizeChangerSettings::__cordl_internal_get_alwaysControlWhenEntered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alwaysControlWhenEntered;
}
constexpr bool const& GT_CustomMapSupportRuntime::SizeChangerSettings::__cordl_internal_get_alwaysControlWhenEntered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alwaysControlWhenEntered;
}
constexpr void GT_CustomMapSupportRuntime::SizeChangerSettings::__cordl_internal_set_alwaysControlWhenEntered(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___alwaysControlWhenEntered = value;
}
constexpr int32_t& GT_CustomMapSupportRuntime::SizeChangerSettings::__cordl_internal_get_priority()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___priority;
}
constexpr int32_t const& GT_CustomMapSupportRuntime::SizeChangerSettings::__cordl_internal_get_priority() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___priority;
}
constexpr void GT_CustomMapSupportRuntime::SizeChangerSettings::__cordl_internal_set_priority(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___priority = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::SizeChangerSettings::__cordl_internal_get_startRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startRadius;
}
constexpr float_t const& GT_CustomMapSupportRuntime::SizeChangerSettings::__cordl_internal_get_startRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startRadius;
}
constexpr void GT_CustomMapSupportRuntime::SizeChangerSettings::__cordl_internal_set_startRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startRadius = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::SizeChangerSettings::__cordl_internal_get_endRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endRadius;
}
constexpr float_t const& GT_CustomMapSupportRuntime::SizeChangerSettings::__cordl_internal_get_endRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endRadius;
}
constexpr void GT_CustomMapSupportRuntime::SizeChangerSettings::__cordl_internal_set_endRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endRadius = value;
}
inline void GT_CustomMapSupportRuntime::SizeChangerSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::SizeChangerSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GT_CustomMapSupportRuntime::SizeChangerSettings* GT_CustomMapSupportRuntime::SizeChangerSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GT_CustomMapSupportRuntime::SizeChangerSettings*>());
}
// Ctor Parameters []
constexpr ::GT_CustomMapSupportRuntime::SizeChangerSettings::SizeChangerSettings()   {
}
