#pragma once
// IWYU pragma private; include "GlobalNamespace/AbilityHaptic.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AbilityHaptic_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AbilityHaptic.PlayIfHeldLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AbilityHaptic::*)(::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::AbilityHaptic::PlayIfHeldLocal)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x58667b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AbilityHaptic*>(),
                        {"PlayIfHeldLocal", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AbilityHaptic.PlayIfSnappedLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AbilityHaptic::*)(::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::AbilityHaptic::PlayIfSnappedLocal)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x5866918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AbilityHaptic*>(),
                        {"PlayIfSnappedLocal", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AbilityHaptic._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AbilityHaptic::*)()>(&::GlobalNamespace::AbilityHaptic::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5866bc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AbilityHaptic*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::AbilityHaptic::__cordl_internal_get_strength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___strength;
}
constexpr float_t const& GlobalNamespace::AbilityHaptic::__cordl_internal_get_strength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___strength;
}
constexpr void GlobalNamespace::AbilityHaptic::__cordl_internal_set_strength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___strength = value;
}
constexpr float_t& GlobalNamespace::AbilityHaptic::__cordl_internal_get_duration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr float_t const& GlobalNamespace::AbilityHaptic::__cordl_internal_get_duration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr void GlobalNamespace::AbilityHaptic::__cordl_internal_set_duration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___duration = value;
}
inline void GlobalNamespace::AbilityHaptic::PlayIfHeldLocal(::GlobalNamespace::GameEntity*  gameEntity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AbilityHaptic*>(),
                        {"PlayIfHeldLocal", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameEntity);
}
inline void GlobalNamespace::AbilityHaptic::PlayIfSnappedLocal(::GlobalNamespace::GameEntity*  gameEntity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AbilityHaptic*>(),
                        {"PlayIfSnappedLocal", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameEntity);
}
inline void GlobalNamespace::AbilityHaptic::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AbilityHaptic*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AbilityHaptic* GlobalNamespace::AbilityHaptic::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AbilityHaptic*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AbilityHaptic::AbilityHaptic()   {
}
