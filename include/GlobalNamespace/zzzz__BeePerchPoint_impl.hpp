#pragma once
// IWYU pragma private; include "GlobalNamespace/BeePerchPoint.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__BeePerchPoint_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeePerchPoint.GetPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::BeePerchPoint::*)()>(&::GlobalNamespace::BeePerchPoint::GetPoint)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x56119d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeePerchPoint*>(),
                        {"GetPoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeePerchPoint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeePerchPoint::*)()>(&::GlobalNamespace::BeePerchPoint::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5613d14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeePerchPoint*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::BeePerchPoint::__cordl_internal_get_localPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::BeePerchPoint::__cordl_internal_get_localPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPosition;
}
constexpr void GlobalNamespace::BeePerchPoint::__cordl_internal_set_localPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localPosition = value;
}
inline ::UnityEngine::Vector3 GlobalNamespace::BeePerchPoint::GetPoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeePerchPoint*>(),
                        {"GetPoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void GlobalNamespace::BeePerchPoint::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeePerchPoint*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeePerchPoint* GlobalNamespace::BeePerchPoint::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeePerchPoint*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeePerchPoint::BeePerchPoint()   {
}
