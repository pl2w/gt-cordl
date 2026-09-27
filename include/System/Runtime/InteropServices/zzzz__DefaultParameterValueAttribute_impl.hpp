#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/DefaultParameterValueAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__DefaultParameterValueAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::InteropServices::DefaultParameterValueAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::InteropServices::DefaultParameterValueAttribute::*)(::System::Object*)>(&::System::Runtime::InteropServices::DefaultParameterValueAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xad07d34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::DefaultParameterValueAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::DefaultParameterValueAttribute.get_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::InteropServices::DefaultParameterValueAttribute::*)()>(&::System::Runtime::InteropServices::DefaultParameterValueAttribute::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad07d64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::DefaultParameterValueAttribute*>(),
                        {"get_Value", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::Runtime::InteropServices::DefaultParameterValueAttribute::__cordl_internal_get_value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr ::System::Object* const& System::Runtime::InteropServices::DefaultParameterValueAttribute::__cordl_internal_get_value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr void System::Runtime::InteropServices::DefaultParameterValueAttribute::__cordl_internal_set_value(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___value = value;
}
inline void System::Runtime::InteropServices::DefaultParameterValueAttribute::_ctor(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::DefaultParameterValueAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Object* System::Runtime::InteropServices::DefaultParameterValueAttribute::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::DefaultParameterValueAttribute*>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Runtime::InteropServices::DefaultParameterValueAttribute* System::Runtime::InteropServices::DefaultParameterValueAttribute::New_ctor(::System::Object*  value)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::InteropServices::DefaultParameterValueAttribute*>(value));
}
// Ctor Parameters []
constexpr ::System::Runtime::InteropServices::DefaultParameterValueAttribute::DefaultParameterValueAttribute()   {
}
