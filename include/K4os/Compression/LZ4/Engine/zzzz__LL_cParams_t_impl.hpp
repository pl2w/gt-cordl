#pragma once
// IWYU pragma private; include "K4os/Compression/LZ4/Engine/LL_cParams_t.hpp"
#include "K4os/Compression/LZ4/Engine/zzzz__LL_lz4hc_strat_e_impl.hpp"
#include "K4os/Compression/LZ4/Engine/zzzz__LL_cParams_t_def.hpp"
#include "K4os/Compression/LZ4/Engine/zzzz__LL_lz4hc_strat_e_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LL_cParams_t._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LL_cParams_t::*)(::GlobalNamespace::LL_lz4hc_strat_e, uint32_t, uint32_t)>(&::GlobalNamespace::LL_cParams_t::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9cbc7d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LL_cParams_t>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::LL_lz4hc_strat_e>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LL_cParams_t::_ctor(::GlobalNamespace::LL_lz4hc_strat_e  strat, uint32_t  nbSearches, uint32_t  targetLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LL_cParams_t>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::LL_lz4hc_strat_e>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, strat, nbSearches, targetLength);
}
// Ctor Parameters [CppParam { name: "strat", ty: "::GlobalNamespace::LL_lz4hc_strat_e", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "nbSearches", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "targetLength", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LL_cParams_t::LL_cParams_t(::GlobalNamespace::LL_lz4hc_strat_e  strat, uint32_t  nbSearches, uint32_t  targetLength) noexcept  {
this->strat = strat;
this->nbSearches = nbSearches;
this->targetLength = targetLength;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LL_cParams_t::LL_cParams_t()   {
}
