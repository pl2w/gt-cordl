#pragma once
// IWYU pragma private; include "Meta/Voice/IVoiceRequestOptions.hpp"
#include "Meta/Voice/zzzz__IVoiceRequestOptions_def.hpp"
//  Writing Method size for method: ::Meta::Voice::IVoiceRequestOptions.get_RequestId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::Voice::IVoiceRequestOptions::*)()>(&::Meta::Voice::IVoiceRequestOptions::get_RequestId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::IVoiceRequestOptions*>(),
                    {::i2c::class_of<::Meta::Voice::IVoiceRequestOptions*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::IVoiceRequestOptions.get_ClientUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::Voice::IVoiceRequestOptions::*)()>(&::Meta::Voice::IVoiceRequestOptions::get_ClientUserId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::IVoiceRequestOptions*>(),
                    {::i2c::class_of<::Meta::Voice::IVoiceRequestOptions*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::IVoiceRequestOptions.get_OperationId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::Voice::IVoiceRequestOptions::*)()>(&::Meta::Voice::IVoiceRequestOptions::get_OperationId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::IVoiceRequestOptions*>(),
                    {::i2c::class_of<::Meta::Voice::IVoiceRequestOptions*>(), 2}
                ));
    return ___internal_method;
  }
};
inline ::StringW Meta::Voice::IVoiceRequestOptions::get_RequestId()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::IVoiceRequestOptions*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Meta::Voice::IVoiceRequestOptions::get_ClientUserId()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::IVoiceRequestOptions*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Meta::Voice::IVoiceRequestOptions::get_OperationId()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::IVoiceRequestOptions*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
