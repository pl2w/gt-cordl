#pragma once
// IWYU pragma private; include "GlobalNamespace/IVariable.hpp"
#include "GlobalNamespace/zzzz__IVariable_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IVariable.get_ValueType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::GlobalNamespace::IVariable::*)()>(&::GlobalNamespace::IVariable::get_ValueType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IVariable*>(),
                    {::i2c::class_of<::GlobalNamespace::IVariable*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::System::Type* GlobalNamespace::IVariable::get_ValueType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IVariable*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
