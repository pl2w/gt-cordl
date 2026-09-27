#pragma once
// IWYU pragma private; include "GlobalNamespace/NamedTriggerZone.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__NamedTriggerZone_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NamedTriggerZone.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NamedTriggerZone::*)()>(&::GlobalNamespace::NamedTriggerZone::Reset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d171f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NamedTriggerZone*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NamedTriggerZone.ConfigureCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NamedTriggerZone::*)()>(&::GlobalNamespace::NamedTriggerZone::ConfigureCollider)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5d171f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NamedTriggerZone*>(),
                        {"ConfigureCollider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NamedTriggerZone._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NamedTriggerZone::*)()>(&::GlobalNamespace::NamedTriggerZone::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d17314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NamedTriggerZone*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::NamedTriggerZone::__cordl_internal_get_TriggerName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TriggerName;
}
constexpr ::StringW const& GlobalNamespace::NamedTriggerZone::__cordl_internal_get_TriggerName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TriggerName;
}
constexpr void GlobalNamespace::NamedTriggerZone::__cordl_internal_set_TriggerName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TriggerName = value;
}
inline void GlobalNamespace::NamedTriggerZone::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NamedTriggerZone*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NamedTriggerZone::ConfigureCollider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NamedTriggerZone*>(),
                        {"ConfigureCollider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NamedTriggerZone::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NamedTriggerZone*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NamedTriggerZone* GlobalNamespace::NamedTriggerZone::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NamedTriggerZone*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NamedTriggerZone::NamedTriggerZone()   {
}
