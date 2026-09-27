#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/AnchoredWorldSpaceDistanceScaler.hpp"
#include "Oculus/Interaction/Samples/zzzz__AnchoredWorldSpaceDistanceScaler_ScalingMode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/Samples/zzzz__AnchoredWorldSpaceDistanceScaler_def.hpp"
#include "Oculus/Interaction/Samples/zzzz__AnchoredWorldSpaceDistanceScaler_ScalingMode_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Samples::AnchoredWorldSpaceDistanceScaler.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::AnchoredWorldSpaceDistanceScaler::*)()>(&::Oculus::Interaction::Samples::AnchoredWorldSpaceDistanceScaler::Start)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa43a258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::AnchoredWorldSpaceDistanceScaler*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::AnchoredWorldSpaceDistanceScaler.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::AnchoredWorldSpaceDistanceScaler::*)()>(&::Oculus::Interaction::Samples::AnchoredWorldSpaceDistanceScaler::LateUpdate)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0xa43a308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::AnchoredWorldSpaceDistanceScaler*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::AnchoredWorldSpaceDistanceScaler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::AnchoredWorldSpaceDistanceScaler::*)()>(&::Oculus::Interaction::Samples::AnchoredWorldSpaceDistanceScaler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa43a5f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::AnchoredWorldSpaceDistanceScaler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::Samples::AnchoredWorldSpaceDistanceScaler::__cordl_internal_get__parentAnchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parentAnchor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::Samples::AnchoredWorldSpaceDistanceScaler::__cordl_internal_get__parentAnchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parentAnchor;
}
constexpr void Oculus::Interaction::Samples::AnchoredWorldSpaceDistanceScaler::__cordl_internal_set__parentAnchor(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____parentAnchor = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::Samples::AnchoredWorldSpaceDistanceScaler::__cordl_internal_get__localAnchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localAnchor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::Samples::AnchoredWorldSpaceDistanceScaler::__cordl_internal_get__localAnchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localAnchor;
}
constexpr void Oculus::Interaction::Samples::AnchoredWorldSpaceDistanceScaler::__cordl_internal_set__localAnchor(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localAnchor = value;
}
constexpr ::GlobalNamespace::AnchoredWorldSpaceDistanceScaler_ScalingMode& Oculus::Interaction::Samples::AnchoredWorldSpaceDistanceScaler::__cordl_internal_get__scalingMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scalingMode;
}
constexpr ::GlobalNamespace::AnchoredWorldSpaceDistanceScaler_ScalingMode const& Oculus::Interaction::Samples::AnchoredWorldSpaceDistanceScaler::__cordl_internal_get__scalingMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scalingMode;
}
constexpr void Oculus::Interaction::Samples::AnchoredWorldSpaceDistanceScaler::__cordl_internal_set__scalingMode(::GlobalNamespace::AnchoredWorldSpaceDistanceScaler_ScalingMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scalingMode = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::Samples::AnchoredWorldSpaceDistanceScaler::__cordl_internal_get__parentAnchorOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parentAnchorOffset;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::Samples::AnchoredWorldSpaceDistanceScaler::__cordl_internal_get__parentAnchorOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parentAnchorOffset;
}
constexpr void Oculus::Interaction::Samples::AnchoredWorldSpaceDistanceScaler::__cordl_internal_set__parentAnchorOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____parentAnchorOffset = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::Samples::AnchoredWorldSpaceDistanceScaler::__cordl_internal_get__originalLocalScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____originalLocalScale;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::Samples::AnchoredWorldSpaceDistanceScaler::__cordl_internal_get__originalLocalScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____originalLocalScale;
}
constexpr void Oculus::Interaction::Samples::AnchoredWorldSpaceDistanceScaler::__cordl_internal_set__originalLocalScale(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____originalLocalScale = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::Samples::AnchoredWorldSpaceDistanceScaler::__cordl_internal_get__originalParentLocalScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____originalParentLocalScale;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::Samples::AnchoredWorldSpaceDistanceScaler::__cordl_internal_get__originalParentLocalScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____originalParentLocalScale;
}
constexpr void Oculus::Interaction::Samples::AnchoredWorldSpaceDistanceScaler::__cordl_internal_set__originalParentLocalScale(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____originalParentLocalScale = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::Samples::AnchoredWorldSpaceDistanceScaler::__cordl_internal_get__originalCombinedScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____originalCombinedScale;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::Samples::AnchoredWorldSpaceDistanceScaler::__cordl_internal_get__originalCombinedScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____originalCombinedScale;
}
constexpr void Oculus::Interaction::Samples::AnchoredWorldSpaceDistanceScaler::__cordl_internal_set__originalCombinedScale(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____originalCombinedScale = value;
}
inline void Oculus::Interaction::Samples::AnchoredWorldSpaceDistanceScaler::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::AnchoredWorldSpaceDistanceScaler*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::AnchoredWorldSpaceDistanceScaler::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::AnchoredWorldSpaceDistanceScaler*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::AnchoredWorldSpaceDistanceScaler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::AnchoredWorldSpaceDistanceScaler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Samples::AnchoredWorldSpaceDistanceScaler* Oculus::Interaction::Samples::AnchoredWorldSpaceDistanceScaler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Samples::AnchoredWorldSpaceDistanceScaler*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Samples::AnchoredWorldSpaceDistanceScaler::AnchoredWorldSpaceDistanceScaler()   {
}
