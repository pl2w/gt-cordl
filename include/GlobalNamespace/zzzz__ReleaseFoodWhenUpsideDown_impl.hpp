#pragma once
// IWYU pragma private; include "GlobalNamespace/ReleaseFoodWhenUpsideDown.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ReleaseFoodWhenUpsideDown_def.hpp"
#include "Critters/Scripts/zzzz__CrittersFoodDispenser_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ReleaseFoodWhenUpsideDown.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ReleaseFoodWhenUpsideDown::*)()>(&::GlobalNamespace::ReleaseFoodWhenUpsideDown::Awake)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56fd154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReleaseFoodWhenUpsideDown*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReleaseFoodWhenUpsideDown.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ReleaseFoodWhenUpsideDown::*)()>(&::GlobalNamespace::ReleaseFoodWhenUpsideDown::Update)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x56fd15c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReleaseFoodWhenUpsideDown*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReleaseFoodWhenUpsideDown._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ReleaseFoodWhenUpsideDown::*)()>(&::GlobalNamespace::ReleaseFoodWhenUpsideDown::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x56fd568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReleaseFoodWhenUpsideDown*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Critters::Scripts::CrittersFoodDispenser>& GlobalNamespace::ReleaseFoodWhenUpsideDown::__cordl_internal_get_dispenser()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dispenser;
}
constexpr ::UnityW<::Critters::Scripts::CrittersFoodDispenser> const& GlobalNamespace::ReleaseFoodWhenUpsideDown::__cordl_internal_get_dispenser() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dispenser;
}
constexpr void GlobalNamespace::ReleaseFoodWhenUpsideDown::__cordl_internal_set_dispenser(::UnityW<::Critters::Scripts::CrittersFoodDispenser>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dispenser = value;
}
constexpr float_t& GlobalNamespace::ReleaseFoodWhenUpsideDown::__cordl_internal_get_angle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angle;
}
constexpr float_t const& GlobalNamespace::ReleaseFoodWhenUpsideDown::__cordl_internal_get_angle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angle;
}
constexpr void GlobalNamespace::ReleaseFoodWhenUpsideDown::__cordl_internal_set_angle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___angle = value;
}
constexpr bool& GlobalNamespace::ReleaseFoodWhenUpsideDown::__cordl_internal_get_latch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___latch;
}
constexpr bool const& GlobalNamespace::ReleaseFoodWhenUpsideDown::__cordl_internal_get_latch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___latch;
}
constexpr void GlobalNamespace::ReleaseFoodWhenUpsideDown::__cordl_internal_set_latch(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___latch = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ReleaseFoodWhenUpsideDown::__cordl_internal_get_spawnPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnPoint;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ReleaseFoodWhenUpsideDown::__cordl_internal_get_spawnPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnPoint;
}
constexpr void GlobalNamespace::ReleaseFoodWhenUpsideDown::__cordl_internal_set_spawnPoint(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnPoint = value;
}
constexpr float_t& GlobalNamespace::ReleaseFoodWhenUpsideDown::__cordl_internal_get_maxFood()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxFood;
}
constexpr float_t const& GlobalNamespace::ReleaseFoodWhenUpsideDown::__cordl_internal_get_maxFood() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxFood;
}
constexpr void GlobalNamespace::ReleaseFoodWhenUpsideDown::__cordl_internal_set_maxFood(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxFood = value;
}
constexpr float_t& GlobalNamespace::ReleaseFoodWhenUpsideDown::__cordl_internal_get_startingFood()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingFood;
}
constexpr float_t const& GlobalNamespace::ReleaseFoodWhenUpsideDown::__cordl_internal_get_startingFood() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingFood;
}
constexpr void GlobalNamespace::ReleaseFoodWhenUpsideDown::__cordl_internal_set_startingFood(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingFood = value;
}
constexpr float_t& GlobalNamespace::ReleaseFoodWhenUpsideDown::__cordl_internal_get_startingSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingSize;
}
constexpr float_t const& GlobalNamespace::ReleaseFoodWhenUpsideDown::__cordl_internal_get_startingSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingSize;
}
constexpr void GlobalNamespace::ReleaseFoodWhenUpsideDown::__cordl_internal_set_startingSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingSize = value;
}
constexpr int32_t& GlobalNamespace::ReleaseFoodWhenUpsideDown::__cordl_internal_get_foodSubIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___foodSubIndex;
}
constexpr int32_t const& GlobalNamespace::ReleaseFoodWhenUpsideDown::__cordl_internal_get_foodSubIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___foodSubIndex;
}
constexpr void GlobalNamespace::ReleaseFoodWhenUpsideDown::__cordl_internal_set_foodSubIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___foodSubIndex = value;
}
constexpr float_t& GlobalNamespace::ReleaseFoodWhenUpsideDown::__cordl_internal_get_spawnDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnDelay;
}
constexpr float_t const& GlobalNamespace::ReleaseFoodWhenUpsideDown::__cordl_internal_get_spawnDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnDelay;
}
constexpr void GlobalNamespace::ReleaseFoodWhenUpsideDown::__cordl_internal_set_spawnDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnDelay = value;
}
constexpr double_t& GlobalNamespace::ReleaseFoodWhenUpsideDown::__cordl_internal_get_nextSpawnTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextSpawnTime;
}
constexpr double_t const& GlobalNamespace::ReleaseFoodWhenUpsideDown::__cordl_internal_get_nextSpawnTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextSpawnTime;
}
constexpr void GlobalNamespace::ReleaseFoodWhenUpsideDown::__cordl_internal_set_nextSpawnTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextSpawnTime = value;
}
inline void GlobalNamespace::ReleaseFoodWhenUpsideDown::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReleaseFoodWhenUpsideDown*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ReleaseFoodWhenUpsideDown::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReleaseFoodWhenUpsideDown*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ReleaseFoodWhenUpsideDown::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReleaseFoodWhenUpsideDown*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ReleaseFoodWhenUpsideDown* GlobalNamespace::ReleaseFoodWhenUpsideDown::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ReleaseFoodWhenUpsideDown*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ReleaseFoodWhenUpsideDown::ReleaseFoodWhenUpsideDown()   {
}
