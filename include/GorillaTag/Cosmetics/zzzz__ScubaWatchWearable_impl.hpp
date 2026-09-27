#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/ScubaWatchWearable.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__ScubaWatchWearable_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::ScubaWatchWearable.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ScubaWatchWearable::*)()>(&::GorillaTag::Cosmetics::ScubaWatchWearable::Update)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x5d5fde4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ScubaWatchWearable*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ScubaWatchWearable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ScubaWatchWearable::*)()>(&::GorillaTag::Cosmetics::ScubaWatchWearable::_ctor)> {
  constexpr static std::size_t size = 0xb40;
  constexpr static std::size_t addrs = 0x5d6008c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ScubaWatchWearable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GorillaTag::Cosmetics::ScubaWatchWearable::__cordl_internal_get_onLeftHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onLeftHand;
}
constexpr bool const& GorillaTag::Cosmetics::ScubaWatchWearable::__cordl_internal_get_onLeftHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onLeftHand;
}
constexpr void GorillaTag::Cosmetics::ScubaWatchWearable::__cordl_internal_set_onLeftHand(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onLeftHand = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTag::Cosmetics::ScubaWatchWearable::__cordl_internal_get_dialNeedle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dialNeedle;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTag::Cosmetics::ScubaWatchWearable::__cordl_internal_get_dialNeedle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dialNeedle;
}
constexpr void GorillaTag::Cosmetics::ScubaWatchWearable::__cordl_internal_set_dialNeedle(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dialNeedle = value;
}
constexpr ::UnityEngine::Quaternion& GorillaTag::Cosmetics::ScubaWatchWearable::__cordl_internal_get_initialDialRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialDialRotation;
}
constexpr ::UnityEngine::Quaternion const& GorillaTag::Cosmetics::ScubaWatchWearable::__cordl_internal_get_initialDialRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialDialRotation;
}
constexpr void GorillaTag::Cosmetics::ScubaWatchWearable::__cordl_internal_set_initialDialRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialDialRotation = value;
}
constexpr ::UnityEngine::Vector2& GorillaTag::Cosmetics::ScubaWatchWearable::__cordl_internal_get_depthRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthRange;
}
constexpr ::UnityEngine::Vector2 const& GorillaTag::Cosmetics::ScubaWatchWearable::__cordl_internal_get_depthRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthRange;
}
constexpr void GorillaTag::Cosmetics::ScubaWatchWearable::__cordl_internal_set_depthRange(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depthRange = value;
}
constexpr ::UnityEngine::Vector2& GorillaTag::Cosmetics::ScubaWatchWearable::__cordl_internal_get_dialRotationRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dialRotationRange;
}
constexpr ::UnityEngine::Vector2 const& GorillaTag::Cosmetics::ScubaWatchWearable::__cordl_internal_get_dialRotationRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dialRotationRange;
}
constexpr void GorillaTag::Cosmetics::ScubaWatchWearable::__cordl_internal_set_dialRotationRange(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dialRotationRange = value;
}
constexpr ::UnityEngine::Vector3& GorillaTag::Cosmetics::ScubaWatchWearable::__cordl_internal_get_dialRotationAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dialRotationAxis;
}
constexpr ::UnityEngine::Vector3 const& GorillaTag::Cosmetics::ScubaWatchWearable::__cordl_internal_get_dialRotationAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dialRotationAxis;
}
constexpr void GorillaTag::Cosmetics::ScubaWatchWearable::__cordl_internal_set_dialRotationAxis(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dialRotationAxis = value;
}
constexpr float_t& GorillaTag::Cosmetics::ScubaWatchWearable::__cordl_internal_get_currentDepth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentDepth;
}
constexpr float_t const& GorillaTag::Cosmetics::ScubaWatchWearable::__cordl_internal_get_currentDepth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentDepth;
}
constexpr void GorillaTag::Cosmetics::ScubaWatchWearable::__cordl_internal_set_currentDepth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentDepth = value;
}
inline void GorillaTag::Cosmetics::ScubaWatchWearable::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ScubaWatchWearable*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ScubaWatchWearable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ScubaWatchWearable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::ScubaWatchWearable* GorillaTag::Cosmetics::ScubaWatchWearable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::ScubaWatchWearable*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::ScubaWatchWearable::ScubaWatchWearable()   {
}
