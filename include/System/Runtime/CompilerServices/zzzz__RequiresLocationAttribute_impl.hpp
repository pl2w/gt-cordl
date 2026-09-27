#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/RequiresLocationAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__RequiresLocationAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::RequiresLocationAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::RequiresLocationAttribute::*)()>(&::System::Runtime::CompilerServices::RequiresLocationAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f6b8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::CompilerServices::RequiresLocationAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::Runtime::CompilerServices::RequiresLocationAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::CompilerServices::RequiresLocationAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::CompilerServices::RequiresLocationAttribute* System::Runtime::CompilerServices::RequiresLocationAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::CompilerServices::RequiresLocationAttribute*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::RequiresLocationAttribute::RequiresLocationAttribute()   {
}
