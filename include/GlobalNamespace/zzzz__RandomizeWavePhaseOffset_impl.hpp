#pragma once
// IWYU pragma private; include "GlobalNamespace/RandomizeWavePhaseOffset.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RandomizeWavePhaseOffset_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RandomizeWavePhaseOffset.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomizeWavePhaseOffset::*)()>(&::GlobalNamespace::RandomizeWavePhaseOffset::Start)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5615d98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomizeWavePhaseOffset*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomizeWavePhaseOffset._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomizeWavePhaseOffset::*)()>(&::GlobalNamespace::RandomizeWavePhaseOffset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5615e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomizeWavePhaseOffset*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::RandomizeWavePhaseOffset::__cordl_internal_get_minPhaseOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minPhaseOffset;
}
constexpr float_t const& GlobalNamespace::RandomizeWavePhaseOffset::__cordl_internal_get_minPhaseOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minPhaseOffset;
}
constexpr void GlobalNamespace::RandomizeWavePhaseOffset::__cordl_internal_set_minPhaseOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minPhaseOffset = value;
}
constexpr float_t& GlobalNamespace::RandomizeWavePhaseOffset::__cordl_internal_get_maxPhaseOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxPhaseOffset;
}
constexpr float_t const& GlobalNamespace::RandomizeWavePhaseOffset::__cordl_internal_get_maxPhaseOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxPhaseOffset;
}
constexpr void GlobalNamespace::RandomizeWavePhaseOffset::__cordl_internal_set_maxPhaseOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxPhaseOffset = value;
}
inline void GlobalNamespace::RandomizeWavePhaseOffset::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomizeWavePhaseOffset*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RandomizeWavePhaseOffset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomizeWavePhaseOffset*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RandomizeWavePhaseOffset* GlobalNamespace::RandomizeWavePhaseOffset::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RandomizeWavePhaseOffset*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RandomizeWavePhaseOffset::RandomizeWavePhaseOffset()   {
}
