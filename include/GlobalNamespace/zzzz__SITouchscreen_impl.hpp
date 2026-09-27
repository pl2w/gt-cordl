#pragma once
// IWYU pragma private; include "GlobalNamespace/SITouchscreen.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__SITouchscreen_def.hpp"
#include "GlobalNamespace/zzzz__GorillaTriggerColliderHandIndicator_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SITouchscreen.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITouchscreen::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::SITouchscreen::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5af61d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITouchscreen*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITouchscreen.OnTriggerStay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITouchscreen::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::SITouchscreen::OnTriggerStay)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5af61dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITouchscreen*>(),
                        {"OnTriggerStay", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITouchscreen.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITouchscreen::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::SITouchscreen::OnTriggerExit)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5af63f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITouchscreen*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITouchscreen.GetIndicator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::SITouchscreen::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::SITouchscreen::GetIndicator)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5af627c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITouchscreen*>(),
                        {"GetIndicator", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITouchscreen._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITouchscreen::*)()>(&::GlobalNamespace::SITouchscreen::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5af64c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITouchscreen*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SITouchscreen::__cordl_internal_get_controllingTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controllingTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SITouchscreen::__cordl_internal_get_controllingTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controllingTransform;
}
constexpr void GlobalNamespace::SITouchscreen::__cordl_internal_set_controllingTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___controllingTransform = value;
}
constexpr float_t& GlobalNamespace::SITouchscreen::__cordl_internal_get_lastTouched()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTouched;
}
constexpr float_t const& GlobalNamespace::SITouchscreen::__cordl_internal_get_lastTouched() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTouched;
}
constexpr void GlobalNamespace::SITouchscreen::__cordl_internal_set_lastTouched(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastTouched = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SITouchscreen::__cordl_internal_get_lastPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SITouchscreen::__cordl_internal_get_lastPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPosition;
}
constexpr void GlobalNamespace::SITouchscreen::__cordl_internal_set_lastPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastPosition = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>>*& GlobalNamespace::SITouchscreen::__cordl_internal_get_fingerTouchDict()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fingerTouchDict;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>>* const& GlobalNamespace::SITouchscreen::__cordl_internal_get_fingerTouchDict() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fingerTouchDict;
}
constexpr void GlobalNamespace::SITouchscreen::__cordl_internal_set_fingerTouchDict(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fingerTouchDict = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*& GlobalNamespace::SITouchscreen::__cordl_internal_get_notFingerTouchDict()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___notFingerTouchDict;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>* const& GlobalNamespace::SITouchscreen::__cordl_internal_get_notFingerTouchDict() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___notFingerTouchDict;
}
constexpr void GlobalNamespace::SITouchscreen::__cordl_internal_set_notFingerTouchDict(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___notFingerTouchDict = value;
}
inline void GlobalNamespace::SITouchscreen::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITouchscreen*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::SITouchscreen::OnTriggerStay(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITouchscreen*>(),
                        {"OnTriggerStay", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::SITouchscreen::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITouchscreen*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::SITouchscreen::GetIndicator(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITouchscreen*>(),
                        {"GetIndicator", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method, other);
}
inline void GlobalNamespace::SITouchscreen::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITouchscreen*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SITouchscreen* GlobalNamespace::SITouchscreen::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SITouchscreen*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SITouchscreen::SITouchscreen()   {
}
