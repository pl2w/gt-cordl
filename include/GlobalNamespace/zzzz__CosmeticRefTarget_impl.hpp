#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticRefTarget.hpp"
#include "GlobalNamespace/zzzz__CosmeticRefID_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CosmeticRefTarget_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CosmeticRefTarget._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticRefTarget::*)()>(&::GlobalNamespace::CosmeticRefTarget::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5648988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticRefTarget*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::CosmeticRefID& GlobalNamespace::CosmeticRefTarget::__cordl_internal_get_id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr ::GlobalNamespace::CosmeticRefID const& GlobalNamespace::CosmeticRefTarget::__cordl_internal_get_id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr void GlobalNamespace::CosmeticRefTarget::__cordl_internal_set_id(::GlobalNamespace::CosmeticRefID  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___id = value;
}
inline void GlobalNamespace::CosmeticRefTarget::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticRefTarget*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CosmeticRefTarget* GlobalNamespace::CosmeticRefTarget::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CosmeticRefTarget*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CosmeticRefTarget::CosmeticRefTarget()   {
}
