#pragma once
// IWYU pragma private; include "PerformanceSystems/TimeSliceLodBehaviour.hpp"
#include "PerformanceSystems/zzzz__ATimeSliceBehaviour_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_impl.hpp"
#include "PerformanceSystems/zzzz__TimeSliceLodBehaviour_def.hpp"
#include "PerformanceSystems/zzzz__ILod_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::PerformanceSystems::TimeSliceLodBehaviour.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::PerformanceSystems::TimeSliceLodBehaviour::*)()>(&::PerformanceSystems::TimeSliceLodBehaviour::get_Position)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b71ca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PerformanceSystems::TimeSliceLodBehaviour*>(),
                        {"get_Position", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PerformanceSystems::TimeSliceLodBehaviour.get_LodRanges
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<float_t> (::PerformanceSystems::TimeSliceLodBehaviour::*)()>(&::PerformanceSystems::TimeSliceLodBehaviour::get_LodRanges)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b71cbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PerformanceSystems::TimeSliceLodBehaviour*>(),
                        {"get_LodRanges", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PerformanceSystems::TimeSliceLodBehaviour.get_OnLodRangeEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Events::UnityEvent*> (::PerformanceSystems::TimeSliceLodBehaviour::*)()>(&::PerformanceSystems::TimeSliceLodBehaviour::get_OnLodRangeEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b71cc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PerformanceSystems::TimeSliceLodBehaviour*>(),
                        {"get_OnLodRangeEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PerformanceSystems::TimeSliceLodBehaviour.get_OnCulledEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent* (::PerformanceSystems::TimeSliceLodBehaviour::*)()>(&::PerformanceSystems::TimeSliceLodBehaviour::get_OnCulledEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b71ccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PerformanceSystems::TimeSliceLodBehaviour*>(),
                        {"get_OnCulledEvent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PerformanceSystems::TimeSliceLodBehaviour.get_CurrentLod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::PerformanceSystems::TimeSliceLodBehaviour::*)()>(&::PerformanceSystems::TimeSliceLodBehaviour::get_CurrentLod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b71cd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PerformanceSystems::TimeSliceLodBehaviour*>(),
                        {"get_CurrentLod", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PerformanceSystems::TimeSliceLodBehaviour.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PerformanceSystems::TimeSliceLodBehaviour::*)()>(&::PerformanceSystems::TimeSliceLodBehaviour::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5b71cdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PerformanceSystems::TimeSliceLodBehaviour*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PerformanceSystems::TimeSliceLodBehaviour.SetLod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PerformanceSystems::TimeSliceLodBehaviour::*)(int32_t)>(&::PerformanceSystems::TimeSliceLodBehaviour::SetLod)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5b71d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PerformanceSystems::TimeSliceLodBehaviour*>(),
                        {"SetLod", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PerformanceSystems::TimeSliceLodBehaviour.UpdateLod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PerformanceSystems::TimeSliceLodBehaviour::*)(::UnityEngine::Vector3)>(&::PerformanceSystems::TimeSliceLodBehaviour::UpdateLod)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5b71e1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PerformanceSystems::TimeSliceLodBehaviour*>(),
                        {"UpdateLod", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PerformanceSystems::TimeSliceLodBehaviour.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PerformanceSystems::TimeSliceLodBehaviour::*)(float_t)>(&::PerformanceSystems::TimeSliceLodBehaviour::SliceUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b71f28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PerformanceSystems::TimeSliceLodBehaviour*>(),
                    {::i2c::class_of<::PerformanceSystems::TimeSliceLodBehaviour*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PerformanceSystems::TimeSliceLodBehaviour.SliceUpdateAlways
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PerformanceSystems::TimeSliceLodBehaviour::*)(float_t)>(&::PerformanceSystems::TimeSliceLodBehaviour::SliceUpdateAlways)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5b71f2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PerformanceSystems::TimeSliceLodBehaviour*>(),
                    {::i2c::class_of<::PerformanceSystems::TimeSliceLodBehaviour*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PerformanceSystems::TimeSliceLodBehaviour._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PerformanceSystems::TimeSliceLodBehaviour::*)()>(&::PerformanceSystems::TimeSliceLodBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b71f5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PerformanceSystems::TimeSliceLodBehaviour*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& PerformanceSystems::TimeSliceLodBehaviour::__cordl_internal_get__currentLod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentLod;
}
constexpr int32_t const& PerformanceSystems::TimeSliceLodBehaviour::__cordl_internal_get__currentLod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentLod;
}
constexpr void PerformanceSystems::TimeSliceLodBehaviour::__cordl_internal_set__currentLod(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentLod = value;
}
constexpr ::ArrayW<float_t>& PerformanceSystems::TimeSliceLodBehaviour::__cordl_internal_get__lodRanges()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lodRanges;
}
constexpr ::ArrayW<float_t> const& PerformanceSystems::TimeSliceLodBehaviour::__cordl_internal_get__lodRanges() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lodRanges;
}
constexpr void PerformanceSystems::TimeSliceLodBehaviour::__cordl_internal_set__lodRanges(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lodRanges = value;
}
constexpr ::ArrayW<::UnityEngine::Events::UnityEvent*>& PerformanceSystems::TimeSliceLodBehaviour::__cordl_internal_get__onLodRangeEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onLodRangeEvents;
}
constexpr ::ArrayW<::UnityEngine::Events::UnityEvent*> const& PerformanceSystems::TimeSliceLodBehaviour::__cordl_internal_get__onLodRangeEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onLodRangeEvents;
}
constexpr void PerformanceSystems::TimeSliceLodBehaviour::__cordl_internal_set__onLodRangeEvents(::ArrayW<::UnityEngine::Events::UnityEvent*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onLodRangeEvents = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& PerformanceSystems::TimeSliceLodBehaviour::__cordl_internal_get__onCulledEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onCulledEvent;
}
constexpr ::UnityEngine::Events::UnityEvent* const& PerformanceSystems::TimeSliceLodBehaviour::__cordl_internal_get__onCulledEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onCulledEvent;
}
constexpr void PerformanceSystems::TimeSliceLodBehaviour::__cordl_internal_set__onCulledEvent(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onCulledEvent = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& PerformanceSystems::TimeSliceLodBehaviour::__cordl_internal_get__transform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& PerformanceSystems::TimeSliceLodBehaviour::__cordl_internal_get__transform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transform;
}
constexpr void PerformanceSystems::TimeSliceLodBehaviour::__cordl_internal_set__transform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transform = value;
}
inline ::UnityEngine::Vector3 PerformanceSystems::TimeSliceLodBehaviour::get_Position()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PerformanceSystems::TimeSliceLodBehaviour*>(),
                        {"get_Position", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::ArrayW<float_t> PerformanceSystems::TimeSliceLodBehaviour::get_LodRanges()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PerformanceSystems::TimeSliceLodBehaviour*>(),
                        {"get_LodRanges", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Events::UnityEvent*> PerformanceSystems::TimeSliceLodBehaviour::get_OnLodRangeEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PerformanceSystems::TimeSliceLodBehaviour*>(),
                        {"get_OnLodRangeEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Events::UnityEvent*>>(this, ___internal_method);
}
inline ::UnityEngine::Events::UnityEvent* PerformanceSystems::TimeSliceLodBehaviour::get_OnCulledEvent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PerformanceSystems::TimeSliceLodBehaviour*>(),
                        {"get_OnCulledEvent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent*>(this, ___internal_method);
}
inline int32_t PerformanceSystems::TimeSliceLodBehaviour::get_CurrentLod()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PerformanceSystems::TimeSliceLodBehaviour*>(),
                        {"get_CurrentLod", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void PerformanceSystems::TimeSliceLodBehaviour::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PerformanceSystems::TimeSliceLodBehaviour*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PerformanceSystems::TimeSliceLodBehaviour::SetLod(int32_t  newLod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PerformanceSystems::TimeSliceLodBehaviour*>(),
                        {"SetLod", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newLod);
}
inline void PerformanceSystems::TimeSliceLodBehaviour::UpdateLod(::UnityEngine::Vector3  refPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PerformanceSystems::TimeSliceLodBehaviour*>(),
                        {"UpdateLod", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, refPos);
}
inline void PerformanceSystems::TimeSliceLodBehaviour::SliceUpdate(float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PerformanceSystems::TimeSliceLodBehaviour*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void PerformanceSystems::TimeSliceLodBehaviour::SliceUpdateAlways(float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PerformanceSystems::TimeSliceLodBehaviour*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void PerformanceSystems::TimeSliceLodBehaviour::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PerformanceSystems::TimeSliceLodBehaviour*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PerformanceSystems::TimeSliceLodBehaviour* PerformanceSystems::TimeSliceLodBehaviour::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PerformanceSystems::TimeSliceLodBehaviour*>());
}
/// @brief Convert operator to "::PerformanceSystems::ILod"
constexpr  PerformanceSystems::TimeSliceLodBehaviour::operator ::PerformanceSystems::ILod*() noexcept {
return static_cast<::PerformanceSystems::ILod*>(static_cast<void*>(this));
}
/// @brief Convert to "::PerformanceSystems::ILod"
constexpr ::PerformanceSystems::ILod* PerformanceSystems::TimeSliceLodBehaviour::i___PerformanceSystems__ILod() noexcept {
return static_cast<::PerformanceSystems::ILod*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::PerformanceSystems::TimeSliceLodBehaviour::TimeSliceLodBehaviour()   {
}
