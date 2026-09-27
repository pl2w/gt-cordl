#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/MethodImplAttribute.hpp"
#include "System/Runtime/CompilerServices/zzzz__MethodImplOptions_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__MethodImplAttribute_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__MethodImplOptions_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::MethodImplAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::MethodImplAttribute::*)(::System::Runtime::CompilerServices::MethodImplOptions)>(&::System::Runtime::CompilerServices::MethodImplAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa1e84a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::CompilerServices::MethodImplAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::CompilerServices::MethodImplOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::MethodImplAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::MethodImplAttribute::*)()>(&::System::Runtime::CompilerServices::MethodImplAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa1e84d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::CompilerServices::MethodImplAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::CompilerServices::MethodImplOptions& System::Runtime::CompilerServices::MethodImplAttribute::__cordl_internal_get__val()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____val;
}
constexpr ::System::Runtime::CompilerServices::MethodImplOptions const& System::Runtime::CompilerServices::MethodImplAttribute::__cordl_internal_get__val() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____val;
}
constexpr void System::Runtime::CompilerServices::MethodImplAttribute::__cordl_internal_set__val(::System::Runtime::CompilerServices::MethodImplOptions  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____val = value;
}
inline void System::Runtime::CompilerServices::MethodImplAttribute::_ctor(::System::Runtime::CompilerServices::MethodImplOptions  methodImplOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::CompilerServices::MethodImplAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::CompilerServices::MethodImplOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, methodImplOptions);
}
inline void System::Runtime::CompilerServices::MethodImplAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::CompilerServices::MethodImplAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::CompilerServices::MethodImplAttribute* System::Runtime::CompilerServices::MethodImplAttribute::New_ctor(::System::Runtime::CompilerServices::MethodImplOptions  methodImplOptions)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::CompilerServices::MethodImplAttribute*>(methodImplOptions));
}
inline ::System::Runtime::CompilerServices::MethodImplAttribute* System::Runtime::CompilerServices::MethodImplAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::CompilerServices::MethodImplAttribute*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::MethodImplAttribute::MethodImplAttribute()   {
}
