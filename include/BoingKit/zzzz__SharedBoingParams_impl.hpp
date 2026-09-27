#pragma once
// IWYU pragma private; include "BoingKit/SharedBoingParams.hpp"
#include "BoingKit/zzzz__BoingWork_Params_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "BoingKit/zzzz__SharedBoingParams_def.hpp"
//  Writing Method size for method: ::BoingKit::SharedBoingParams._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::SharedBoingParams::*)()>(&::BoingKit::SharedBoingParams::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e2a7f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::SharedBoingParams*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BoingWork_Params& BoingKit::SharedBoingParams::__cordl_internal_get_Params()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Params;
}
constexpr ::GlobalNamespace::BoingWork_Params const& BoingKit::SharedBoingParams::__cordl_internal_get_Params() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Params;
}
constexpr void BoingKit::SharedBoingParams::__cordl_internal_set_Params(::GlobalNamespace::BoingWork_Params  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Params = value;
}
inline void BoingKit::SharedBoingParams::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::SharedBoingParams*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BoingKit::SharedBoingParams* BoingKit::SharedBoingParams::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BoingKit::SharedBoingParams*>());
}
// Ctor Parameters []
constexpr ::BoingKit::SharedBoingParams::SharedBoingParams()   {
}
