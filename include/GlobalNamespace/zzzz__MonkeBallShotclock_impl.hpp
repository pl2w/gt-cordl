#pragma once
// IWYU pragma private; include "GlobalNamespace/MonkeBallShotclock.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourTick_impl.hpp"
#include "UnityEngine/zzzz__Material_impl.hpp"
#include "GlobalNamespace/zzzz__MonkeBallShotclock_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MonkeBallShotclock.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallShotclock::*)()>(&::GlobalNamespace::MonkeBallShotclock::Tick)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x57b0b7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MonkeBallShotclock*>(),
                    {::i2c::class_of<::GlobalNamespace::MonkeBallShotclock*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallShotclock.SetTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallShotclock::*)(int32_t, float_t)>(&::GlobalNamespace::MonkeBallShotclock::SetTime)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x57afeb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallShotclock*>(),
                        {"SetTime", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallShotclock.SetBackboard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallShotclock::*)(::UnityEngine::Material*)>(&::GlobalNamespace::MonkeBallShotclock::SetBackboard)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x57b0cc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallShotclock*>(),
                        {"SetBackboard", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallShotclock.UpdateTimeText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallShotclock::*)(float_t)>(&::GlobalNamespace::MonkeBallShotclock::UpdateTimeText)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x57b0bd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallShotclock*>(),
                        {"UpdateTimeText", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallShotclock._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallShotclock::*)()>(&::GlobalNamespace::MonkeBallShotclock::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x57b0d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallShotclock*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Renderer>& GlobalNamespace::MonkeBallShotclock::__cordl_internal_get_backboard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backboard;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& GlobalNamespace::MonkeBallShotclock::__cordl_internal_get_backboard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backboard;
}
constexpr void GlobalNamespace::MonkeBallShotclock::__cordl_internal_set_backboard(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___backboard = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& GlobalNamespace::MonkeBallShotclock::__cordl_internal_get_teamMaterials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teamMaterials;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& GlobalNamespace::MonkeBallShotclock::__cordl_internal_get_teamMaterials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teamMaterials;
}
constexpr void GlobalNamespace::MonkeBallShotclock::__cordl_internal_set_teamMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___teamMaterials = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::MonkeBallShotclock::__cordl_internal_get_neutralMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___neutralMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::MonkeBallShotclock::__cordl_internal_get_neutralMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___neutralMaterial;
}
constexpr void GlobalNamespace::MonkeBallShotclock::__cordl_internal_set_neutralMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___neutralMaterial = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GlobalNamespace::MonkeBallShotclock::__cordl_internal_get_timeRemainingLabel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeRemainingLabel;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GlobalNamespace::MonkeBallShotclock::__cordl_internal_get_timeRemainingLabel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeRemainingLabel;
}
constexpr void GlobalNamespace::MonkeBallShotclock::__cordl_internal_set_timeRemainingLabel(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeRemainingLabel = value;
}
constexpr float_t& GlobalNamespace::MonkeBallShotclock::__cordl_internal_get__time()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____time;
}
constexpr float_t const& GlobalNamespace::MonkeBallShotclock::__cordl_internal_get__time() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____time;
}
constexpr void GlobalNamespace::MonkeBallShotclock::__cordl_internal_set__time(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____time = value;
}
constexpr int32_t& GlobalNamespace::MonkeBallShotclock::__cordl_internal_get__timeInt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeInt;
}
constexpr int32_t const& GlobalNamespace::MonkeBallShotclock::__cordl_internal_get__timeInt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeInt;
}
constexpr void GlobalNamespace::MonkeBallShotclock::__cordl_internal_set__timeInt(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeInt = value;
}
inline void GlobalNamespace::MonkeBallShotclock::Tick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MonkeBallShotclock*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBallShotclock::SetTime(int32_t  teamId, float_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallShotclock*>(),
                        {"SetTime", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, teamId, time);
}
inline void GlobalNamespace::MonkeBallShotclock::SetBackboard(::UnityEngine::Material*  teamMaterial)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallShotclock*>(),
                        {"SetBackboard", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, teamMaterial);
}
inline void GlobalNamespace::MonkeBallShotclock::UpdateTimeText(float_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallShotclock*>(),
                        {"UpdateTimeText", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time);
}
inline void GlobalNamespace::MonkeBallShotclock::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallShotclock*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MonkeBallShotclock* GlobalNamespace::MonkeBallShotclock::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MonkeBallShotclock*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MonkeBallShotclock::MonkeBallShotclock()   {
}
