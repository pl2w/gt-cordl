#pragma once
// IWYU pragma private; include "GlobalNamespace/GameSnappableCollider.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GameSnappableCollider_def.hpp"
#include "GlobalNamespace/zzzz__GameSnappable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameSnappableCollider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameSnappableCollider::*)()>(&::GlobalNamespace::GameSnappableCollider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5841f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSnappableCollider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameSnappable>& GlobalNamespace::GameSnappableCollider::__cordl_internal_get_gameSnappable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameSnappable;
}
constexpr ::UnityW<::GlobalNamespace::GameSnappable> const& GlobalNamespace::GameSnappableCollider::__cordl_internal_get_gameSnappable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameSnappable;
}
constexpr void GlobalNamespace::GameSnappableCollider::__cordl_internal_set_gameSnappable(::UnityW<::GlobalNamespace::GameSnappable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameSnappable = value;
}
inline void GlobalNamespace::GameSnappableCollider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSnappableCollider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameSnappableCollider* GlobalNamespace::GameSnappableCollider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameSnappableCollider*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameSnappableCollider::GameSnappableCollider()   {
}
