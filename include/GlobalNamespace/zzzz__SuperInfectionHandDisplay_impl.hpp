#pragma once
// IWYU pragma private; include "GlobalNamespace/SuperInfectionHandDisplay.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SuperInfectionHandDisplay_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionHandDisplay.EnableHands
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionHandDisplay::*)(bool)>(&::GlobalNamespace::SuperInfectionHandDisplay::EnableHands)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5afcc00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionHandDisplay*>(),
                        {"EnableHands", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionHandDisplay._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionHandDisplay::*)()>(&::GlobalNamespace::SuperInfectionHandDisplay::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5afcc68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionHandDisplay*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::SuperInfectionHandDisplay::__cordl_internal_get_gameObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObjects;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::SuperInfectionHandDisplay::__cordl_internal_get_gameObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObjects;
}
constexpr void GlobalNamespace::SuperInfectionHandDisplay::__cordl_internal_set_gameObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameObjects = value;
}
inline void GlobalNamespace::SuperInfectionHandDisplay::EnableHands(bool  on)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionHandDisplay*>(),
                        {"EnableHands", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, on);
}
inline void GlobalNamespace::SuperInfectionHandDisplay::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionHandDisplay*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SuperInfectionHandDisplay* GlobalNamespace::SuperInfectionHandDisplay::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SuperInfectionHandDisplay*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SuperInfectionHandDisplay::SuperInfectionHandDisplay()   {
}
