#pragma once
// IWYU pragma private; include "Meta/Voice/Logging/IErrorMitigator.hpp"
#include "Meta/Voice/Logging/zzzz__IErrorMitigator_def.hpp"
#include "Meta/Voice/Logging/zzzz__ErrorCode_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Logging::IErrorMitigator.GetMitigation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::Voice::Logging::IErrorMitigator::*)(::Meta::Voice::Logging::ErrorCode)>(&::Meta::Voice::Logging::IErrorMitigator::GetMitigation)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Logging::IErrorMitigator*>(),
                    {::i2c::class_of<::Meta::Voice::Logging::IErrorMitigator*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::StringW Meta::Voice::Logging::IErrorMitigator::GetMitigation(::Meta::Voice::Logging::ErrorCode  errorCode)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Logging::IErrorMitigator*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, errorCode);
}
