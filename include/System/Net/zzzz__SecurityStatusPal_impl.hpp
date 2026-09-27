#pragma once
// IWYU pragma private; include "System/Net/SecurityStatusPal.hpp"
#include "System/Net/zzzz__SecurityStatusPalErrorCode_impl.hpp"
#include "System/Net/zzzz__SecurityStatusPal_def.hpp"
#include "System/Net/zzzz__SecurityStatusPalErrorCode_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::System::Net::SecurityStatusPal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::SecurityStatusPal::*)(::System::Net::SecurityStatusPalErrorCode, ::System::Exception*)>(&::System::Net::SecurityStatusPal::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xadabed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SecurityStatusPal>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::SecurityStatusPalErrorCode>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::SecurityStatusPal.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::SecurityStatusPal::*)()>(&::System::Net::SecurityStatusPal::ToString)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0xadacf7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::SecurityStatusPal>(),
                    {::i2c::class_of<::System::Net::SecurityStatusPal>(), 3}
                ));
    return ___internal_method;
  }
};
inline void System::Net::SecurityStatusPal::_ctor(::System::Net::SecurityStatusPalErrorCode  errorCode, ::System::Exception*  exception)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SecurityStatusPal>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::SecurityStatusPalErrorCode>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, errorCode, exception);
}
inline ::StringW System::Net::SecurityStatusPal::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::SecurityStatusPal>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "ErrorCode", ty: "::System::Net::SecurityStatusPalErrorCode", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Exception", ty: "::System::Exception*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::System::Net::SecurityStatusPal::SecurityStatusPal(::System::Net::SecurityStatusPalErrorCode  ErrorCode, ::System::Exception*  Exception) noexcept  {
this->ErrorCode = ErrorCode;
this->Exception = Exception;
}
// Ctor Parameters []
constexpr ::System::Net::SecurityStatusPal::SecurityStatusPal()   {
}
