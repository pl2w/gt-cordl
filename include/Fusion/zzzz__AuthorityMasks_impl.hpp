#pragma once
// IWYU pragma private; include "Fusion/AuthorityMasks.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__AuthorityMasks_def.hpp"
//  Writing Method size for method: ::Fusion::AuthorityMasks.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(bool, bool)>(&::Fusion::AuthorityMasks::Create)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5fd0898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::AuthorityMasks*>(),
                        {"Create", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Fusion::AuthorityMasks::Create(bool  state, bool  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::AuthorityMasks*>(),
                        {"Create", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, state, input);
}
// Ctor Parameters []
constexpr ::Fusion::AuthorityMasks::AuthorityMasks()   {
}
