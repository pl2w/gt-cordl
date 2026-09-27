#pragma once
// IWYU pragma private; include "GlobalNamespace/SIChargeDisplay.hpp"
#include "UnityEngine/zzzz__MeshRenderer_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SIChargeDisplay_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIChargeDisplay.UpdateDisplay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIChargeDisplay::*)(int32_t)>(&::GlobalNamespace::SIChargeDisplay::UpdateDisplay)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x58dc1d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIChargeDisplay*>(),
                        {"UpdateDisplay", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIChargeDisplay._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIChargeDisplay::*)()>(&::GlobalNamespace::SIChargeDisplay::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58dc258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIChargeDisplay*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>& GlobalNamespace::SIChargeDisplay::__cordl_internal_get_chargeDisplay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeDisplay;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>> const& GlobalNamespace::SIChargeDisplay::__cordl_internal_get_chargeDisplay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeDisplay;
}
constexpr void GlobalNamespace::SIChargeDisplay::__cordl_internal_set_chargeDisplay(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chargeDisplay = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::SIChargeDisplay::__cordl_internal_get_chargedMat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargedMat;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::SIChargeDisplay::__cordl_internal_get_chargedMat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargedMat;
}
constexpr void GlobalNamespace::SIChargeDisplay::__cordl_internal_set_chargedMat(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chargedMat = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::SIChargeDisplay::__cordl_internal_get_unchargedMat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unchargedMat;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::SIChargeDisplay::__cordl_internal_get_unchargedMat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unchargedMat;
}
constexpr void GlobalNamespace::SIChargeDisplay::__cordl_internal_set_unchargedMat(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unchargedMat = value;
}
inline void GlobalNamespace::SIChargeDisplay::UpdateDisplay(int32_t  chargeCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIChargeDisplay*>(),
                        {"UpdateDisplay", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chargeCount);
}
inline void GlobalNamespace::SIChargeDisplay::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIChargeDisplay*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SIChargeDisplay* GlobalNamespace::SIChargeDisplay::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIChargeDisplay*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIChargeDisplay::SIChargeDisplay()   {
}
