#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/NativeIntegerAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__NativeIntegerAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::NativeIntegerAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::NativeIntegerAttribute::*)()>(&::System::Runtime::CompilerServices::NativeIntegerAttribute::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5254db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::CompilerServices::NativeIntegerAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::NativeIntegerAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::NativeIntegerAttribute::*)(::ArrayW<bool>)>(&::System::Runtime::CompilerServices::NativeIntegerAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5254e34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::CompilerServices::NativeIntegerAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<bool>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<bool>& System::Runtime::CompilerServices::NativeIntegerAttribute::__cordl_internal_get_TransformFlags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TransformFlags;
}
constexpr ::ArrayW<bool> const& System::Runtime::CompilerServices::NativeIntegerAttribute::__cordl_internal_get_TransformFlags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TransformFlags;
}
constexpr void System::Runtime::CompilerServices::NativeIntegerAttribute::__cordl_internal_set_TransformFlags(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TransformFlags = value;
}
inline void System::Runtime::CompilerServices::NativeIntegerAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::CompilerServices::NativeIntegerAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::CompilerServices::NativeIntegerAttribute::_ctor(::ArrayW<bool>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::CompilerServices::NativeIntegerAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::Runtime::CompilerServices::NativeIntegerAttribute* System::Runtime::CompilerServices::NativeIntegerAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::CompilerServices::NativeIntegerAttribute*>());
}
inline ::System::Runtime::CompilerServices::NativeIntegerAttribute* System::Runtime::CompilerServices::NativeIntegerAttribute::New_ctor(::ArrayW<bool>  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::CompilerServices::NativeIntegerAttribute*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::NativeIntegerAttribute::NativeIntegerAttribute()   {
}
