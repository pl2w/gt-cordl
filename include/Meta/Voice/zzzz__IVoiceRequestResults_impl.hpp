#pragma once
// IWYU pragma private; include "Meta/Voice/IVoiceRequestResults.hpp"
#include "Meta/Voice/zzzz__IVoiceRequestResults_def.hpp"
//  Writing Method size for method: ::Meta::Voice::IVoiceRequestResults.SetCancel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::IVoiceRequestResults::*)(::StringW)>(&::Meta::Voice::IVoiceRequestResults::SetCancel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::IVoiceRequestResults*>(),
                    {::i2c::class_of<::Meta::Voice::IVoiceRequestResults*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::IVoiceRequestResults.SetError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::IVoiceRequestResults::*)(int32_t, ::StringW)>(&::Meta::Voice::IVoiceRequestResults::SetError)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::IVoiceRequestResults*>(),
                    {::i2c::class_of<::Meta::Voice::IVoiceRequestResults*>(), 1}
                ));
    return ___internal_method;
  }
};
inline void Meta::Voice::IVoiceRequestResults::SetCancel(::StringW  reason)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::IVoiceRequestResults*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reason);
}
inline void Meta::Voice::IVoiceRequestResults::SetError(int32_t  errorStatusCode, ::StringW  error)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::IVoiceRequestResults*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, errorStatusCode, error);
}
