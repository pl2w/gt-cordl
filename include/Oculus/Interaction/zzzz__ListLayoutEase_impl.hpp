#pragma once
// IWYU pragma private; include "Oculus/Interaction/ListLayoutEase.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/zzzz__ListLayoutEase_def.hpp"
#include "Oculus/Interaction/zzzz__ListLayoutEase_def.hpp"
#include "Oculus/Interaction/zzzz__ListLayout_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::ListLayoutEase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ListLayoutEase::*)(::Oculus::Interaction::ListLayout*, float_t, ::UnityEngine::AnimationCurve*)>(&::Oculus::Interaction::ListLayoutEase::_ctor)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0xa460684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListLayoutEase*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::ListLayout*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ListLayoutEase.HandleElementAdded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ListLayoutEase::*)(int32_t)>(&::Oculus::Interaction::ListLayoutEase::HandleElementAdded)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa46097c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListLayoutEase*>(),
                        {"HandleElementAdded", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ListLayoutEase.HandleElementUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ListLayoutEase::*)(int32_t, bool)>(&::Oculus::Interaction::ListLayoutEase::HandleElementUpdated)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa460a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListLayoutEase*>(),
                        {"HandleElementUpdated", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ListLayoutEase.HandleElementRemoved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ListLayoutEase::*)(int32_t)>(&::Oculus::Interaction::ListLayoutEase::HandleElementRemoved)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa460b5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListLayoutEase*>(),
                        {"HandleElementRemoved", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ListLayoutEase.UpdateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ListLayoutEase::*)(float_t)>(&::Oculus::Interaction::ListLayoutEase::UpdateTime)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xa460bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListLayoutEase*>(),
                        {"UpdateTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ListLayoutEase.GetPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::ListLayoutEase::*)(int32_t)>(&::Oculus::Interaction::ListLayoutEase::GetPosition)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa460d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListLayoutEase*>(),
                        {"GetPosition", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Interaction::ListLayout*& Oculus::Interaction::ListLayoutEase::__cordl_internal_get__listLayout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____listLayout;
}
constexpr ::Oculus::Interaction::ListLayout* const& Oculus::Interaction::ListLayoutEase::__cordl_internal_get__listLayout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____listLayout;
}
constexpr void Oculus::Interaction::ListLayoutEase::__cordl_internal_set__listLayout(::Oculus::Interaction::ListLayout*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____listLayout = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Oculus::Interaction::ListLayoutEase_ListElementEase*>*& Oculus::Interaction::ListLayoutEase::__cordl_internal_get__elementDict()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____elementDict;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Oculus::Interaction::ListLayoutEase_ListElementEase*>* const& Oculus::Interaction::ListLayoutEase::__cordl_internal_get__elementDict() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____elementDict;
}
constexpr void Oculus::Interaction::ListLayoutEase::__cordl_internal_set__elementDict(::System::Collections::Generic::Dictionary_2<int32_t,::Oculus::Interaction::ListLayoutEase_ListElementEase*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____elementDict = value;
}
constexpr ::UnityEngine::AnimationCurve*& Oculus::Interaction::ListLayoutEase::__cordl_internal_get__curve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____curve;
}
constexpr ::UnityEngine::AnimationCurve* const& Oculus::Interaction::ListLayoutEase::__cordl_internal_get__curve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____curve;
}
constexpr void Oculus::Interaction::ListLayoutEase::__cordl_internal_set__curve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____curve = value;
}
constexpr float_t& Oculus::Interaction::ListLayoutEase::__cordl_internal_get__curveTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____curveTime;
}
constexpr float_t const& Oculus::Interaction::ListLayoutEase::__cordl_internal_get__curveTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____curveTime;
}
constexpr void Oculus::Interaction::ListLayoutEase::__cordl_internal_set__curveTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____curveTime = value;
}
constexpr float_t& Oculus::Interaction::ListLayoutEase::__cordl_internal_get__time()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____time;
}
constexpr float_t const& Oculus::Interaction::ListLayoutEase::__cordl_internal_get__time() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____time;
}
constexpr void Oculus::Interaction::ListLayoutEase::__cordl_internal_set__time(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____time = value;
}
inline void Oculus::Interaction::ListLayoutEase::_ctor(::Oculus::Interaction::ListLayout*  layout, float_t  curveTime, ::UnityEngine::AnimationCurve*  curve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListLayoutEase*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::ListLayout*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, layout, curveTime, curve);
}
inline void Oculus::Interaction::ListLayoutEase::HandleElementAdded(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListLayoutEase*>(),
                        {"HandleElementAdded", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline void Oculus::Interaction::ListLayoutEase::HandleElementUpdated(int32_t  id, bool  sizeUpdate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListLayoutEase*>(),
                        {"HandleElementUpdated", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, sizeUpdate);
}
inline void Oculus::Interaction::ListLayoutEase::HandleElementRemoved(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListLayoutEase*>(),
                        {"HandleElementRemoved", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline void Oculus::Interaction::ListLayoutEase::UpdateTime(float_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListLayoutEase*>(),
                        {"UpdateTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time);
}
inline float_t Oculus::Interaction::ListLayoutEase::GetPosition(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListLayoutEase*>(),
                        {"GetPosition", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, id);
}
inline ::Oculus::Interaction::ListLayoutEase* Oculus::Interaction::ListLayoutEase::New_ctor(::Oculus::Interaction::ListLayout*  layout, float_t  curveTime, ::UnityEngine::AnimationCurve*  curve)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::ListLayoutEase*>(layout, curveTime, curve));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::ListLayoutEase::ListLayoutEase()   {
}
//  Writing Method size for method: ::Oculus::Interaction::ListLayoutEase_ListElementEase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ListLayoutEase_ListElementEase::*)(::UnityEngine::AnimationCurve*, float_t, float_t)>(&::Oculus::Interaction::ListLayoutEase_ListElementEase::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa460a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListLayoutEase_ListElementEase*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ListLayoutEase_ListElementEase.SetTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ListLayoutEase_ListElementEase::*)(float_t, float_t, bool)>(&::Oculus::Interaction::ListLayoutEase_ListElementEase::SetTarget)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa460b3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListLayoutEase_ListElementEase*>(),
                        {"SetTarget", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ListLayoutEase_ListElementEase.UpdateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ListLayoutEase_ListElementEase::*)(float_t)>(&::Oculus::Interaction::ListLayoutEase_ListElementEase::UpdateTime)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa460d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListLayoutEase_ListElementEase*>(),
                        {"UpdateTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AnimationCurve*& Oculus::Interaction::ListLayoutEase_ListElementEase::__cordl_internal_get__curve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____curve;
}
constexpr ::UnityEngine::AnimationCurve* const& Oculus::Interaction::ListLayoutEase_ListElementEase::__cordl_internal_get__curve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____curve;
}
constexpr void Oculus::Interaction::ListLayoutEase_ListElementEase::__cordl_internal_set__curve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____curve = value;
}
constexpr float_t& Oculus::Interaction::ListLayoutEase_ListElementEase::__cordl_internal_get__curveTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____curveTime;
}
constexpr float_t const& Oculus::Interaction::ListLayoutEase_ListElementEase::__cordl_internal_get__curveTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____curveTime;
}
constexpr void Oculus::Interaction::ListLayoutEase_ListElementEase::__cordl_internal_set__curveTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____curveTime = value;
}
constexpr float_t& Oculus::Interaction::ListLayoutEase_ListElementEase::__cordl_internal_get__startTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startTime;
}
constexpr float_t const& Oculus::Interaction::ListLayoutEase_ListElementEase::__cordl_internal_get__startTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startTime;
}
constexpr void Oculus::Interaction::ListLayoutEase_ListElementEase::__cordl_internal_set__startTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startTime = value;
}
constexpr float_t& Oculus::Interaction::ListLayoutEase_ListElementEase::__cordl_internal_get__start()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____start;
}
constexpr float_t const& Oculus::Interaction::ListLayoutEase_ListElementEase::__cordl_internal_get__start() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____start;
}
constexpr void Oculus::Interaction::ListLayoutEase_ListElementEase::__cordl_internal_set__start(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____start = value;
}
constexpr float_t& Oculus::Interaction::ListLayoutEase_ListElementEase::__cordl_internal_get__target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr float_t const& Oculus::Interaction::ListLayoutEase_ListElementEase::__cordl_internal_get__target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr void Oculus::Interaction::ListLayoutEase_ListElementEase::__cordl_internal_set__target(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____target = value;
}
constexpr float_t& Oculus::Interaction::ListLayoutEase_ListElementEase::__cordl_internal_get_position()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___position;
}
constexpr float_t const& Oculus::Interaction::ListLayoutEase_ListElementEase::__cordl_internal_get_position() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___position;
}
constexpr void Oculus::Interaction::ListLayoutEase_ListElementEase::__cordl_internal_set_position(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___position = value;
}
inline void Oculus::Interaction::ListLayoutEase_ListElementEase::_ctor(::UnityEngine::AnimationCurve*  curve, float_t  easeTime, float_t  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListLayoutEase_ListElementEase*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, curve, easeTime, position);
}
inline void Oculus::Interaction::ListLayoutEase_ListElementEase::SetTarget(float_t  target, float_t  time, bool  skipEase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListLayoutEase_ListElementEase*>(),
                        {"SetTarget", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, time, skipEase);
}
inline void Oculus::Interaction::ListLayoutEase_ListElementEase::UpdateTime(float_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListLayoutEase_ListElementEase*>(),
                        {"UpdateTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time);
}
inline ::Oculus::Interaction::ListLayoutEase_ListElementEase* Oculus::Interaction::ListLayoutEase_ListElementEase::New_ctor(::UnityEngine::AnimationCurve*  curve, float_t  easeTime, float_t  position)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::ListLayoutEase_ListElementEase*>(curve, easeTime, position));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::ListLayoutEase_ListElementEase::ListLayoutEase_ListElementEase()   {
}
