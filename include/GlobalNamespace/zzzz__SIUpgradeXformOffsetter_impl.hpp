#pragma once
// IWYU pragma private; include "GlobalNamespace/SIUpgradeXformOffsetter.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeXformOffsetter_SIUpgradeXformOffsetOp_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeXformOffsetter_def.hpp"
#include "GlobalNamespace/zzzz__SIGadget_def.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeSet_def.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeXformOffsetter_SIUpgradeXformOffsetOp_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIUpgradeXformOffsetter.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIUpgradeXformOffsetter::*)()>(&::GlobalNamespace::SIUpgradeXformOffsetter::Awake)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x59d6da8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIUpgradeXformOffsetter*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIUpgradeXformOffsetter.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIUpgradeXformOffsetter::*)()>(&::GlobalNamespace::SIUpgradeXformOffsetter::OnEnable)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x59d6fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIUpgradeXformOffsetter*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIUpgradeXformOffsetter.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIUpgradeXformOffsetter::*)()>(&::GlobalNamespace::SIUpgradeXformOffsetter::OnDisable)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x59d70ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIUpgradeXformOffsetter*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIUpgradeXformOffsetter._HandleGadgetOnPostRefreshVisuals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIUpgradeXformOffsetter::*)(::GlobalNamespace::SIUpgradeSet)>(&::GlobalNamespace::SIUpgradeXformOffsetter::_HandleGadgetOnPostRefreshVisuals)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x59d7190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIUpgradeXformOffsetter*>(),
                        {"_HandleGadgetOnPostRefreshVisuals", {}, {::i2c::type_of<::GlobalNamespace::SIUpgradeSet>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIUpgradeXformOffsetter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIUpgradeXformOffsetter::*)()>(&::GlobalNamespace::SIUpgradeXformOffsetter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59d72c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIUpgradeXformOffsetter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SIGadget>& GlobalNamespace::SIUpgradeXformOffsetter::__cordl_internal_get_m_superInfectionGadget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_superInfectionGadget;
}
constexpr ::UnityW<::GlobalNamespace::SIGadget> const& GlobalNamespace::SIUpgradeXformOffsetter::__cordl_internal_get_m_superInfectionGadget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_superInfectionGadget;
}
constexpr void GlobalNamespace::SIUpgradeXformOffsetter::__cordl_internal_set_m_superInfectionGadget(::UnityW<::GlobalNamespace::SIGadget>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_superInfectionGadget = value;
}
constexpr ::ArrayW<::GlobalNamespace::SIUpgradeXformOffsetter_SIUpgradeXformOffsetOp>& GlobalNamespace::SIUpgradeXformOffsetter::__cordl_internal_get_m_upgradeXformOffsetOps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_upgradeXformOffsetOps;
}
constexpr ::ArrayW<::GlobalNamespace::SIUpgradeXformOffsetter_SIUpgradeXformOffsetOp> const& GlobalNamespace::SIUpgradeXformOffsetter::__cordl_internal_get_m_upgradeXformOffsetOps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_upgradeXformOffsetOps;
}
constexpr void GlobalNamespace::SIUpgradeXformOffsetter::__cordl_internal_set_m_upgradeXformOffsetOps(::ArrayW<::GlobalNamespace::SIUpgradeXformOffsetter_SIUpgradeXformOffsetOp>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_upgradeXformOffsetOps = value;
}
inline void GlobalNamespace::SIUpgradeXformOffsetter::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIUpgradeXformOffsetter*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIUpgradeXformOffsetter::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIUpgradeXformOffsetter*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIUpgradeXformOffsetter::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIUpgradeXformOffsetter*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIUpgradeXformOffsetter::_HandleGadgetOnPostRefreshVisuals(::GlobalNamespace::SIUpgradeSet  upgradeSet)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIUpgradeXformOffsetter*>(),
                        {"_HandleGadgetOnPostRefreshVisuals", {}, {::i2c::type_of<::GlobalNamespace::SIUpgradeSet>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, upgradeSet);
}
inline void GlobalNamespace::SIUpgradeXformOffsetter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIUpgradeXformOffsetter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SIUpgradeXformOffsetter* GlobalNamespace::SIUpgradeXformOffsetter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIUpgradeXformOffsetter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIUpgradeXformOffsetter::SIUpgradeXformOffsetter()   {
}
