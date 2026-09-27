#pragma once
// IWYU pragma private; include "GlobalNamespace/DayNightResetForBaking.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DayNightResetForBaking_def.hpp"
#include "GlobalNamespace/zzzz__BetterDayNightManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DayNightResetForBaking.SetMaterialsForBaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DayNightResetForBaking::*)()>(&::GlobalNamespace::DayNightResetForBaking::SetMaterialsForBaking)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x599652c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DayNightResetForBaking*>(),
                        {"SetMaterialsForBaking", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DayNightResetForBaking.SetMaterialsForGame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DayNightResetForBaking::*)()>(&::GlobalNamespace::DayNightResetForBaking::SetMaterialsForGame)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x5996740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DayNightResetForBaking*>(),
                        {"SetMaterialsForGame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DayNightResetForBaking._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DayNightResetForBaking::*)()>(&::GlobalNamespace::DayNightResetForBaking::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5996954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DayNightResetForBaking*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BetterDayNightManager>& GlobalNamespace::DayNightResetForBaking::__cordl_internal_get_dayNightManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dayNightManager;
}
constexpr ::UnityW<::GlobalNamespace::BetterDayNightManager> const& GlobalNamespace::DayNightResetForBaking::__cordl_internal_get_dayNightManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dayNightManager;
}
constexpr void GlobalNamespace::DayNightResetForBaking::__cordl_internal_set_dayNightManager(::UnityW<::GlobalNamespace::BetterDayNightManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dayNightManager = value;
}
inline void GlobalNamespace::DayNightResetForBaking::SetMaterialsForBaking()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DayNightResetForBaking*>(),
                        {"SetMaterialsForBaking", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DayNightResetForBaking::SetMaterialsForGame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DayNightResetForBaking*>(),
                        {"SetMaterialsForGame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DayNightResetForBaking::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DayNightResetForBaking*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DayNightResetForBaking* GlobalNamespace::DayNightResetForBaking::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DayNightResetForBaking*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DayNightResetForBaking::DayNightResetForBaking()   {
}
