#pragma once
// IWYU pragma private; include "GorillaTag/Scripts/Utilities/StringWriterWithEncoding.hpp"
#include "System/IO/zzzz__StringWriter_impl.hpp"
#include "GorillaTag/Scripts/Utilities/zzzz__StringWriterWithEncoding_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
//  Writing Method size for method: ::GorillaTag::Scripts::Utilities::StringWriterWithEncoding.get_Encoding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Encoding* (::GorillaTag::Scripts::Utilities::StringWriterWithEncoding::*)()>(&::GorillaTag::Scripts::Utilities::StringWriterWithEncoding::get_Encoding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d3d708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Scripts::Utilities::StringWriterWithEncoding*>(),
                    {::i2c::class_of<::GorillaTag::Scripts::Utilities::StringWriterWithEncoding*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Scripts::Utilities::StringWriterWithEncoding._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Scripts::Utilities::StringWriterWithEncoding::*)(::System::Text::Encoding*)>(&::GorillaTag::Scripts::Utilities::StringWriterWithEncoding::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5d3d710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Scripts::Utilities::StringWriterWithEncoding*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Text::Encoding*& GorillaTag::Scripts::Utilities::StringWriterWithEncoding::__cordl_internal_get__Encoding_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Encoding_k__BackingField;
}
constexpr ::System::Text::Encoding* const& GorillaTag::Scripts::Utilities::StringWriterWithEncoding::__cordl_internal_get__Encoding_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Encoding_k__BackingField;
}
constexpr void GorillaTag::Scripts::Utilities::StringWriterWithEncoding::__cordl_internal_set__Encoding_k__BackingField(::System::Text::Encoding*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Encoding_k__BackingField = value;
}
inline ::System::Text::Encoding* GorillaTag::Scripts::Utilities::StringWriterWithEncoding::get_Encoding()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Scripts::Utilities::StringWriterWithEncoding*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*>(this, ___internal_method);
}
inline void GorillaTag::Scripts::Utilities::StringWriterWithEncoding::_ctor(::System::Text::Encoding*  encoding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Scripts::Utilities::StringWriterWithEncoding*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encoding);
}
inline ::GorillaTag::Scripts::Utilities::StringWriterWithEncoding* GorillaTag::Scripts::Utilities::StringWriterWithEncoding::New_ctor(::System::Text::Encoding*  encoding)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Scripts::Utilities::StringWriterWithEncoding*>(encoding));
}
// Ctor Parameters []
constexpr ::GorillaTag::Scripts::Utilities::StringWriterWithEncoding::StringWriterWithEncoding()   {
}
