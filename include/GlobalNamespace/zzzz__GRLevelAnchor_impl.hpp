#pragma once
// IWYU pragma private; include "GlobalNamespace/GRLevelAnchor.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GRLevelAnchor_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRLevelAnchor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRLevelAnchor::*)()>(&::GlobalNamespace::GRLevelAnchor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x589e250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRLevelAnchor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRLevelAnchor::__cordl_internal_get_navigablePoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___navigablePoint;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRLevelAnchor::__cordl_internal_get_navigablePoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___navigablePoint;
}
constexpr void GlobalNamespace::GRLevelAnchor::__cordl_internal_set_navigablePoint(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___navigablePoint = value;
}
inline void GlobalNamespace::GRLevelAnchor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRLevelAnchor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRLevelAnchor* GlobalNamespace::GRLevelAnchor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRLevelAnchor*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRLevelAnchor::GRLevelAnchor()   {
}
