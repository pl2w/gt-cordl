#pragma once
// IWYU pragma private; include "GlobalNamespace/SpawnSoundOnEnable.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SpawnSoundOnEnable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SpawnSoundOnEnable.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpawnSoundOnEnable::*)()>(&::GlobalNamespace::SpawnSoundOnEnable::OnEnable)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x56fd584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpawnSoundOnEnable*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpawnSoundOnEnable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpawnSoundOnEnable::*)()>(&::GlobalNamespace::SpawnSoundOnEnable::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x56fd804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpawnSoundOnEnable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::SpawnSoundOnEnable::__cordl_internal_get_soundSubIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundSubIndex;
}
constexpr int32_t const& GlobalNamespace::SpawnSoundOnEnable::__cordl_internal_get_soundSubIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundSubIndex;
}
constexpr void GlobalNamespace::SpawnSoundOnEnable::__cordl_internal_set_soundSubIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundSubIndex = value;
}
constexpr bool& GlobalNamespace::SpawnSoundOnEnable::__cordl_internal_get_triggerOnFirstEnable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerOnFirstEnable;
}
constexpr bool const& GlobalNamespace::SpawnSoundOnEnable::__cordl_internal_get_triggerOnFirstEnable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerOnFirstEnable;
}
constexpr void GlobalNamespace::SpawnSoundOnEnable::__cordl_internal_set_triggerOnFirstEnable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerOnFirstEnable = value;
}
constexpr bool& GlobalNamespace::SpawnSoundOnEnable::__cordl_internal_get_firstEnabledOccured()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firstEnabledOccured;
}
constexpr bool const& GlobalNamespace::SpawnSoundOnEnable::__cordl_internal_get_firstEnabledOccured() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firstEnabledOccured;
}
constexpr void GlobalNamespace::SpawnSoundOnEnable::__cordl_internal_set_firstEnabledOccured(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___firstEnabledOccured = value;
}
inline void GlobalNamespace::SpawnSoundOnEnable::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpawnSoundOnEnable*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SpawnSoundOnEnable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpawnSoundOnEnable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SpawnSoundOnEnable* GlobalNamespace::SpawnSoundOnEnable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SpawnSoundOnEnable*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SpawnSoundOnEnable::SpawnSoundOnEnable()   {
}
