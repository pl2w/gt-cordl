#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerGameEventLocationTrigger.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerGameEventLocationTrigger_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerGameEventLocationTrigger.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerGameEventLocationTrigger::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::PlayerGameEventLocationTrigger::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5627fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGameEventLocationTrigger*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGameEventLocationTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerGameEventLocationTrigger::*)()>(&::GlobalNamespace::PlayerGameEventLocationTrigger::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5628168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGameEventLocationTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::PlayerGameEventLocationTrigger::__cordl_internal_get_locationName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___locationName;
}
constexpr ::StringW const& GlobalNamespace::PlayerGameEventLocationTrigger::__cordl_internal_get_locationName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___locationName;
}
constexpr void GlobalNamespace::PlayerGameEventLocationTrigger::__cordl_internal_set_locationName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___locationName = value;
}
inline void GlobalNamespace::PlayerGameEventLocationTrigger::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGameEventLocationTrigger*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::PlayerGameEventLocationTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGameEventLocationTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerGameEventLocationTrigger* GlobalNamespace::PlayerGameEventLocationTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerGameEventLocationTrigger*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerGameEventLocationTrigger::PlayerGameEventLocationTrigger()   {
}
