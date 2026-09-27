#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolUpgradePurchaseStationMagnetPoint.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GRToolUpgradePurchaseStationMagnetPoint_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationMagnetPoint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradePurchaseStationMagnetPoint::*)()>(&::GlobalNamespace::GRToolUpgradePurchaseStationMagnetPoint::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58cf1c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationMagnetPoint*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRToolUpgradePurchaseStationMagnetPoint::__cordl_internal_get_magnetAttachTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___magnetAttachTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRToolUpgradePurchaseStationMagnetPoint::__cordl_internal_get_magnetAttachTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___magnetAttachTransform;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationMagnetPoint::__cordl_internal_set_magnetAttachTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___magnetAttachTransform = value;
}
inline void GlobalNamespace::GRToolUpgradePurchaseStationMagnetPoint::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationMagnetPoint*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRToolUpgradePurchaseStationMagnetPoint* GlobalNamespace::GRToolUpgradePurchaseStationMagnetPoint::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRToolUpgradePurchaseStationMagnetPoint*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRToolUpgradePurchaseStationMagnetPoint::GRToolUpgradePurchaseStationMagnetPoint()   {
}
