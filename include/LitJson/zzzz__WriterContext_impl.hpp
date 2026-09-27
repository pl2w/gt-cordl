#pragma once
// IWYU pragma private; include "LitJson/WriterContext.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "LitJson/zzzz__WriterContext_def.hpp"
//  Writing Method size for method: ::LitJson::WriterContext._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::WriterContext::*)()>(&::LitJson::WriterContext::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b69274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::WriterContext*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& LitJson::WriterContext::__cordl_internal_get_Count()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Count;
}
constexpr int32_t const& LitJson::WriterContext::__cordl_internal_get_Count() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Count;
}
constexpr void LitJson::WriterContext::__cordl_internal_set_Count(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Count = value;
}
constexpr bool& LitJson::WriterContext::__cordl_internal_get_InArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InArray;
}
constexpr bool const& LitJson::WriterContext::__cordl_internal_get_InArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InArray;
}
constexpr void LitJson::WriterContext::__cordl_internal_set_InArray(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InArray = value;
}
constexpr bool& LitJson::WriterContext::__cordl_internal_get_InObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InObject;
}
constexpr bool const& LitJson::WriterContext::__cordl_internal_get_InObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InObject;
}
constexpr void LitJson::WriterContext::__cordl_internal_set_InObject(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InObject = value;
}
constexpr bool& LitJson::WriterContext::__cordl_internal_get_ExpectingValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExpectingValue;
}
constexpr bool const& LitJson::WriterContext::__cordl_internal_get_ExpectingValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExpectingValue;
}
constexpr void LitJson::WriterContext::__cordl_internal_set_ExpectingValue(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ExpectingValue = value;
}
constexpr int32_t& LitJson::WriterContext::__cordl_internal_get_Padding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Padding;
}
constexpr int32_t const& LitJson::WriterContext::__cordl_internal_get_Padding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Padding;
}
constexpr void LitJson::WriterContext::__cordl_internal_set_Padding(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Padding = value;
}
inline void LitJson::WriterContext::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::WriterContext*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::LitJson::WriterContext* LitJson::WriterContext::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LitJson::WriterContext*>());
}
// Ctor Parameters []
constexpr ::LitJson::WriterContext::WriterContext()   {
}
