#pragma once
// IWYU pragma private; include "System/SRDescriptionAttribute.hpp"
#include "System/ComponentModel/zzzz__DescriptionAttribute_impl.hpp"
#include "System/zzzz__SRDescriptionAttribute_def.hpp"
//  Writing Method size for method: ::System::SRDescriptionAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::SRDescriptionAttribute::*)(::StringW)>(&::System::SRDescriptionAttribute::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xad07744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::SRDescriptionAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::SRDescriptionAttribute.get_Description
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::SRDescriptionAttribute::*)()>(&::System::SRDescriptionAttribute::get_Description)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xad077ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::SRDescriptionAttribute*>(),
                    {::i2c::class_of<::System::SRDescriptionAttribute*>(), 7}
                ));
    return ___internal_method;
  }
};
constexpr bool& System::SRDescriptionAttribute::__cordl_internal_get_isReplaced()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isReplaced;
}
constexpr bool const& System::SRDescriptionAttribute::__cordl_internal_get_isReplaced() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isReplaced;
}
constexpr void System::SRDescriptionAttribute::__cordl_internal_set_isReplaced(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isReplaced = value;
}
inline void System::SRDescriptionAttribute::_ctor(::StringW  description)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::SRDescriptionAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, description);
}
inline ::StringW System::SRDescriptionAttribute::get_Description()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::SRDescriptionAttribute*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::SRDescriptionAttribute* System::SRDescriptionAttribute::New_ctor(::StringW  description)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::SRDescriptionAttribute*>(description));
}
// Ctor Parameters []
constexpr ::System::SRDescriptionAttribute::SRDescriptionAttribute()   {
}
