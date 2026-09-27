#pragma once
// IWYU pragma private; include "System/Timers/TimersDescriptionAttribute.hpp"
#include "System/ComponentModel/zzzz__DescriptionAttribute_impl.hpp"
#include "System/Timers/zzzz__TimersDescriptionAttribute_def.hpp"
//  Writing Method size for method: ::System::Timers::TimersDescriptionAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Timers::TimersDescriptionAttribute::*)(::StringW)>(&::System::Timers::TimersDescriptionAttribute::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xad09390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Timers::TimersDescriptionAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Timers::TimersDescriptionAttribute.get_Description
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Timers::TimersDescriptionAttribute::*)()>(&::System::Timers::TimersDescriptionAttribute::get_Description)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xad093f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Timers::TimersDescriptionAttribute*>(),
                    {::i2c::class_of<::System::Timers::TimersDescriptionAttribute*>(), 7}
                ));
    return ___internal_method;
  }
};
constexpr bool& System::Timers::TimersDescriptionAttribute::__cordl_internal_get_replaced()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___replaced;
}
constexpr bool const& System::Timers::TimersDescriptionAttribute::__cordl_internal_get_replaced() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___replaced;
}
constexpr void System::Timers::TimersDescriptionAttribute::__cordl_internal_set_replaced(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___replaced = value;
}
inline void System::Timers::TimersDescriptionAttribute::_ctor(::StringW  description)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Timers::TimersDescriptionAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, description);
}
inline ::StringW System::Timers::TimersDescriptionAttribute::get_Description()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Timers::TimersDescriptionAttribute*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Timers::TimersDescriptionAttribute* System::Timers::TimersDescriptionAttribute::New_ctor(::StringW  description)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Timers::TimersDescriptionAttribute*>(description));
}
// Ctor Parameters []
constexpr ::System::Timers::TimersDescriptionAttribute::TimersDescriptionAttribute()   {
}
