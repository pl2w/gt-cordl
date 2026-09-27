#pragma once
// IWYU pragma private; include "GlobalNamespace/PeriodicFoodTopUpper.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PeriodicFoodTopUpper_def.hpp"
#include "GlobalNamespace/zzzz__CrittersFood_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PeriodicFoodTopUpper.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeriodicFoodTopUpper::*)()>(&::GlobalNamespace::PeriodicFoodTopUpper::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x56fcb4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeriodicFoodTopUpper*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeriodicFoodTopUpper.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeriodicFoodTopUpper::*)()>(&::GlobalNamespace::PeriodicFoodTopUpper::Update)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x56fcba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeriodicFoodTopUpper*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeriodicFoodTopUpper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeriodicFoodTopUpper::*)()>(&::GlobalNamespace::PeriodicFoodTopUpper::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x56fcc80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeriodicFoodTopUpper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::CrittersFood>& GlobalNamespace::PeriodicFoodTopUpper::__cordl_internal_get_food()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___food;
}
constexpr ::UnityW<::GlobalNamespace::CrittersFood> const& GlobalNamespace::PeriodicFoodTopUpper::__cordl_internal_get_food() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___food;
}
constexpr void GlobalNamespace::PeriodicFoodTopUpper::__cordl_internal_set_food(::UnityW<::GlobalNamespace::CrittersFood>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___food = value;
}
constexpr float_t& GlobalNamespace::PeriodicFoodTopUpper::__cordl_internal_get_timeFoodEmpty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeFoodEmpty;
}
constexpr float_t const& GlobalNamespace::PeriodicFoodTopUpper::__cordl_internal_get_timeFoodEmpty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeFoodEmpty;
}
constexpr void GlobalNamespace::PeriodicFoodTopUpper::__cordl_internal_set_timeFoodEmpty(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeFoodEmpty = value;
}
constexpr bool& GlobalNamespace::PeriodicFoodTopUpper::__cordl_internal_get_waitingToRefill()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitingToRefill;
}
constexpr bool const& GlobalNamespace::PeriodicFoodTopUpper::__cordl_internal_get_waitingToRefill() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitingToRefill;
}
constexpr void GlobalNamespace::PeriodicFoodTopUpper::__cordl_internal_set_waitingToRefill(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waitingToRefill = value;
}
constexpr float_t& GlobalNamespace::PeriodicFoodTopUpper::__cordl_internal_get_waitToRefill()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitToRefill;
}
constexpr float_t const& GlobalNamespace::PeriodicFoodTopUpper::__cordl_internal_get_waitToRefill() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitToRefill;
}
constexpr void GlobalNamespace::PeriodicFoodTopUpper::__cordl_internal_set_waitToRefill(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waitToRefill = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::PeriodicFoodTopUpper::__cordl_internal_get_foodObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___foodObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::PeriodicFoodTopUpper::__cordl_internal_get_foodObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___foodObject;
}
constexpr void GlobalNamespace::PeriodicFoodTopUpper::__cordl_internal_set_foodObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___foodObject = value;
}
inline void GlobalNamespace::PeriodicFoodTopUpper::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeriodicFoodTopUpper*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeriodicFoodTopUpper::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeriodicFoodTopUpper*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeriodicFoodTopUpper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeriodicFoodTopUpper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PeriodicFoodTopUpper* GlobalNamespace::PeriodicFoodTopUpper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PeriodicFoodTopUpper*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeriodicFoodTopUpper::PeriodicFoodTopUpper()   {
}
