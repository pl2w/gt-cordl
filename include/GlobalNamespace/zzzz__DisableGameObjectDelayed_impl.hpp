#pragma once
// IWYU pragma private; include "GlobalNamespace/DisableGameObjectDelayed.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DisableGameObjectDelayed_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DisableGameObjectDelayed.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DisableGameObjectDelayed::*)()>(&::GlobalNamespace::DisableGameObjectDelayed::OnEnable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b07bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DisableGameObjectDelayed*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DisableGameObjectDelayed.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DisableGameObjectDelayed::*)()>(&::GlobalNamespace::DisableGameObjectDelayed::Update)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5b07bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DisableGameObjectDelayed*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DisableGameObjectDelayed.EnableAndResetTimer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DisableGameObjectDelayed::*)()>(&::GlobalNamespace::DisableGameObjectDelayed::EnableAndResetTimer)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b07c1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DisableGameObjectDelayed*>(),
                        {"EnableAndResetTimer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DisableGameObjectDelayed._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DisableGameObjectDelayed::*)()>(&::GlobalNamespace::DisableGameObjectDelayed::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b07c54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DisableGameObjectDelayed*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::DisableGameObjectDelayed::__cordl_internal_get_delayTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delayTime;
}
constexpr float_t const& GlobalNamespace::DisableGameObjectDelayed::__cordl_internal_get_delayTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delayTime;
}
constexpr void GlobalNamespace::DisableGameObjectDelayed::__cordl_internal_set_delayTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___delayTime = value;
}
constexpr float_t& GlobalNamespace::DisableGameObjectDelayed::__cordl_internal_get_enabledTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enabledTime;
}
constexpr float_t const& GlobalNamespace::DisableGameObjectDelayed::__cordl_internal_get_enabledTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enabledTime;
}
constexpr void GlobalNamespace::DisableGameObjectDelayed::__cordl_internal_set_enabledTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enabledTime = value;
}
inline void GlobalNamespace::DisableGameObjectDelayed::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DisableGameObjectDelayed*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DisableGameObjectDelayed::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DisableGameObjectDelayed*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DisableGameObjectDelayed::EnableAndResetTimer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DisableGameObjectDelayed*>(),
                        {"EnableAndResetTimer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DisableGameObjectDelayed::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DisableGameObjectDelayed*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DisableGameObjectDelayed* GlobalNamespace::DisableGameObjectDelayed::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DisableGameObjectDelayed*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DisableGameObjectDelayed::DisableGameObjectDelayed()   {
}
