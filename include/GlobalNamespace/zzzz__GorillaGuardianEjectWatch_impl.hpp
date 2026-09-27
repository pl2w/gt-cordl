#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaGuardianEjectWatch.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaGuardianEjectWatch_def.hpp"
#include "GlobalNamespace/zzzz__HeldButton_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianEjectWatch.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGuardianEjectWatch::*)()>(&::GlobalNamespace::GorillaGuardianEjectWatch::Start)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5907fcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianEjectWatch*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianEjectWatch.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGuardianEjectWatch::*)()>(&::GlobalNamespace::GorillaGuardianEjectWatch::OnDestroy)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x59080a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianEjectWatch*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianEjectWatch.OnEjectButtonPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGuardianEjectWatch::*)()>(&::GlobalNamespace::GorillaGuardianEjectWatch::OnEjectButtonPressed)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x590817c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianEjectWatch*>(),
                        {"OnEjectButtonPressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianEjectWatch._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGuardianEjectWatch::*)()>(&::GlobalNamespace::GorillaGuardianEjectWatch::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59083e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianEjectWatch*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::HeldButton>& GlobalNamespace::GorillaGuardianEjectWatch::__cordl_internal_get_ejectButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ejectButton;
}
constexpr ::UnityW<::GlobalNamespace::HeldButton> const& GlobalNamespace::GorillaGuardianEjectWatch::__cordl_internal_get_ejectButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ejectButton;
}
constexpr void GlobalNamespace::GorillaGuardianEjectWatch::__cordl_internal_set_ejectButton(::UnityW<::GlobalNamespace::HeldButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ejectButton = value;
}
inline void GlobalNamespace::GorillaGuardianEjectWatch::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianEjectWatch*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaGuardianEjectWatch::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianEjectWatch*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaGuardianEjectWatch::OnEjectButtonPressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianEjectWatch*>(),
                        {"OnEjectButtonPressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaGuardianEjectWatch::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianEjectWatch*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaGuardianEjectWatch* GlobalNamespace::GorillaGuardianEjectWatch::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaGuardianEjectWatch*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaGuardianEjectWatch::GorillaGuardianEjectWatch()   {
}
