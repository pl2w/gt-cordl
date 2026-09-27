#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolUpgradeStationDepositBox.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GRToolUpgradeStationDepositBox_def.hpp"
#include "GlobalNamespace/zzzz__GRToolUpgradeStation_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradeStationDepositBox.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradeStationDepositBox::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::GRToolUpgradeStationDepositBox::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x58d12b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradeStationDepositBox*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradeStationDepositBox._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradeStationDepositBox::*)()>(&::GlobalNamespace::GRToolUpgradeStationDepositBox::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58d1430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradeStationDepositBox*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GRToolUpgradeStation>& GlobalNamespace::GRToolUpgradeStationDepositBox::__cordl_internal_get_upgradeStation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgradeStation;
}
constexpr ::UnityW<::GlobalNamespace::GRToolUpgradeStation> const& GlobalNamespace::GRToolUpgradeStationDepositBox::__cordl_internal_get_upgradeStation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgradeStation;
}
constexpr void GlobalNamespace::GRToolUpgradeStationDepositBox::__cordl_internal_set_upgradeStation(::UnityW<::GlobalNamespace::GRToolUpgradeStation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upgradeStation = value;
}
inline void GlobalNamespace::GRToolUpgradeStationDepositBox::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradeStationDepositBox*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::GRToolUpgradeStationDepositBox::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradeStationDepositBox*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRToolUpgradeStationDepositBox* GlobalNamespace::GRToolUpgradeStationDepositBox::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRToolUpgradeStationDepositBox*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRToolUpgradeStationDepositBox::GRToolUpgradeStationDepositBox()   {
}
