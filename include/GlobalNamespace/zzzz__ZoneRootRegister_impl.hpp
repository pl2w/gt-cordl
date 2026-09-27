#pragma once
// IWYU pragma private; include "GlobalNamespace/ZoneRootRegister.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ZoneRootRegister_def.hpp"
#include "GorillaTag/zzzz__WatchableGameObjectSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ZoneRootRegister.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZoneRootRegister::*)()>(&::GlobalNamespace::ZoneRootRegister::Awake)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x56b961c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneRootRegister*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneRootRegister.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZoneRootRegister::*)()>(&::GlobalNamespace::ZoneRootRegister::OnDestroy)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x56b9680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneRootRegister*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneRootRegister._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZoneRootRegister::*)()>(&::GlobalNamespace::ZoneRootRegister::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56b96d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneRootRegister*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GorillaTag::WatchableGameObjectSO>& GlobalNamespace::ZoneRootRegister::__cordl_internal_get_watchableSlot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watchableSlot;
}
constexpr ::UnityW<::GorillaTag::WatchableGameObjectSO> const& GlobalNamespace::ZoneRootRegister::__cordl_internal_get_watchableSlot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watchableSlot;
}
constexpr void GlobalNamespace::ZoneRootRegister::__cordl_internal_set_watchableSlot(::UnityW<::GorillaTag::WatchableGameObjectSO>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___watchableSlot = value;
}
inline void GlobalNamespace::ZoneRootRegister::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneRootRegister*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ZoneRootRegister::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneRootRegister*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ZoneRootRegister::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneRootRegister*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ZoneRootRegister* GlobalNamespace::ZoneRootRegister::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ZoneRootRegister*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ZoneRootRegister::ZoneRootRegister()   {
}
