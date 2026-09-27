#pragma once
// IWYU pragma private; include "System/Net/NegotiationInfoClass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__NegotiationInfoClass_def.hpp"
//  Writing Method size for method: ::System::Net::NegotiationInfoClass._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NegotiationInfoClass::*)()>(&::System::Net::NegotiationInfoClass::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadace18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NegotiationInfoClass*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::Net::NegotiationInfoClass::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NegotiationInfoClass*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::NegotiationInfoClass* System::Net::NegotiationInfoClass::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::NegotiationInfoClass*>());
}
// Ctor Parameters []
constexpr ::System::Net::NegotiationInfoClass::NegotiationInfoClass()   {
}
