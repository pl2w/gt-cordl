#pragma once
// IWYU pragma private; include "GlobalNamespace/CyclicalActivator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__CyclicalActivator_def.hpp"
#include "GlobalNamespace/zzzz__CyclicalActivator_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CyclicalActivator.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CyclicalActivator::*)()>(&::GlobalNamespace::CyclicalActivator::OnEnable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x56fd814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CyclicalActivator*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CyclicalActivator.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CyclicalActivator::*)()>(&::GlobalNamespace::CyclicalActivator::OnDisable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x56fd820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CyclicalActivator*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CyclicalActivator.IGorillaSliceableSimple_SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CyclicalActivator::*)()>(&::GlobalNamespace::CyclicalActivator::IGorillaSliceableSimple_SliceUpdate)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x56fd82c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CyclicalActivator*>(),
                        {"IGorillaSliceableSimple.SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CyclicalActivator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CyclicalActivator::*)()>(&::GlobalNamespace::CyclicalActivator::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x56fdaec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CyclicalActivator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::CyclicalActivator_CyclicalActivatorObject*>& GlobalNamespace::CyclicalActivator::__cordl_internal_get_objects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objects;
}
constexpr ::ArrayW<::GlobalNamespace::CyclicalActivator_CyclicalActivatorObject*> const& GlobalNamespace::CyclicalActivator::__cordl_internal_get_objects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objects;
}
constexpr void GlobalNamespace::CyclicalActivator::__cordl_internal_set_objects(::ArrayW<::GlobalNamespace::CyclicalActivator_CyclicalActivatorObject*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objects = value;
}
constexpr float_t& GlobalNamespace::CyclicalActivator::__cordl_internal_get_previousS()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousS;
}
constexpr float_t const& GlobalNamespace::CyclicalActivator::__cordl_internal_get_previousS() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousS;
}
constexpr void GlobalNamespace::CyclicalActivator::__cordl_internal_set_previousS(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___previousS = value;
}
inline void GlobalNamespace::CyclicalActivator::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CyclicalActivator*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CyclicalActivator::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CyclicalActivator*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CyclicalActivator::IGorillaSliceableSimple_SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CyclicalActivator*>(),
                        {"IGorillaSliceableSimple.SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CyclicalActivator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CyclicalActivator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CyclicalActivator* GlobalNamespace::CyclicalActivator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CyclicalActivator*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GlobalNamespace::CyclicalActivator::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GlobalNamespace::CyclicalActivator::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CyclicalActivator::CyclicalActivator()   {
}
//  Writing Method size for method: ::GlobalNamespace::CyclicalActivator_CyclicalActivatorObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CyclicalActivator_CyclicalActivatorObject::*)()>(&::GlobalNamespace::CyclicalActivator_CyclicalActivatorObject::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56fdb14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CyclicalActivator_CyclicalActivatorObject*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CyclicalActivator_CyclicalActivatorObject::__cordl_internal_get_gameObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CyclicalActivator_CyclicalActivatorObject::__cordl_internal_get_gameObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObject;
}
constexpr void GlobalNamespace::CyclicalActivator_CyclicalActivatorObject::__cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameObject = value;
}
constexpr ::GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectSchedule*& GlobalNamespace::CyclicalActivator_CyclicalActivatorObject::__cordl_internal_get_schedule()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___schedule;
}
constexpr ::GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectSchedule* const& GlobalNamespace::CyclicalActivator_CyclicalActivatorObject::__cordl_internal_get_schedule() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___schedule;
}
constexpr void GlobalNamespace::CyclicalActivator_CyclicalActivatorObject::__cordl_internal_set_schedule(::GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectSchedule*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___schedule = value;
}
inline void GlobalNamespace::CyclicalActivator_CyclicalActivatorObject::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CyclicalActivator_CyclicalActivatorObject*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CyclicalActivator_CyclicalActivatorObject* GlobalNamespace::CyclicalActivator_CyclicalActivatorObject::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CyclicalActivator_CyclicalActivatorObject*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CyclicalActivator_CyclicalActivatorObject::CyclicalActivator_CyclicalActivatorObject()   {
}
//  Writing Method size for method: ::GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectSchedule.CheckTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectSchedule::*)(float_t)>(&::GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectSchedule::CheckTime)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x56fda64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectSchedule*>(),
                        {"CheckTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectSchedule._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectSchedule::*)()>(&::GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectSchedule::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x56fdb04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectSchedule*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectSchedule::__cordl_internal_get_totalSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalSeconds;
}
constexpr int32_t const& GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectSchedule::__cordl_internal_get_totalSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalSeconds;
}
constexpr void GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectSchedule::__cordl_internal_set_totalSeconds(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalSeconds = value;
}
constexpr ::ArrayW<::GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectScheduleNode*>& GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectSchedule::__cordl_internal_get_schedule()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___schedule;
}
constexpr ::ArrayW<::GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectScheduleNode*> const& GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectSchedule::__cordl_internal_get_schedule() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___schedule;
}
constexpr void GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectSchedule::__cordl_internal_set_schedule(::ArrayW<::GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectScheduleNode*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___schedule = value;
}
inline bool GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectSchedule::CheckTime(float_t  nowSeconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectSchedule*>(),
                        {"CheckTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, nowSeconds);
}
inline void GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectSchedule::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectSchedule*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectSchedule* GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectSchedule::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectSchedule*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectSchedule::CyclicalActivator_CyclicalActivatorObjectSchedule()   {
}
//  Writing Method size for method: ::GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectScheduleNode._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectScheduleNode::*)()>(&::GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectScheduleNode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56fdafc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectScheduleNode*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector2& GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectScheduleNode::__cordl_internal_get_secondsActiveRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___secondsActiveRange;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectScheduleNode::__cordl_internal_get_secondsActiveRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___secondsActiveRange;
}
constexpr void GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectScheduleNode::__cordl_internal_set_secondsActiveRange(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___secondsActiveRange = value;
}
inline void GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectScheduleNode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectScheduleNode*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectScheduleNode* GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectScheduleNode::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectScheduleNode*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CyclicalActivator_CyclicalActivatorObjectScheduleNode::CyclicalActivator_CyclicalActivatorObjectScheduleNode()   {
}
