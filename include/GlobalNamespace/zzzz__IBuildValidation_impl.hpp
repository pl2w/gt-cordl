#pragma once
// IWYU pragma private; include "GlobalNamespace/IBuildValidation.hpp"
#include "GlobalNamespace/zzzz__IBuildValidation_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IBuildValidation.BuildValidationCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::IBuildValidation::*)()>(&::GlobalNamespace::IBuildValidation::BuildValidationCheck)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IBuildValidation*>(),
                    {::i2c::class_of<::GlobalNamespace::IBuildValidation*>(), 0}
                ));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::IBuildValidation::BuildValidationCheck()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IBuildValidation*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
