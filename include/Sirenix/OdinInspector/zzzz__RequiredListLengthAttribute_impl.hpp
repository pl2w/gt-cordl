#pragma once
// IWYU pragma private; include "Sirenix/OdinInspector/RequiredListLengthAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Sirenix/OdinInspector/zzzz__RequiredListLengthAttribute_def.hpp"
//  Writing Method size for method: ::Sirenix::OdinInspector::RequiredListLengthAttribute.set_MinLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Sirenix::OdinInspector::RequiredListLengthAttribute::*)(int32_t)>(&::Sirenix::OdinInspector::RequiredListLengthAttribute::set_MinLength)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa84e73c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Sirenix::OdinInspector::RequiredListLengthAttribute*>(),
                        {"set_MinLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Sirenix::OdinInspector::RequiredListLengthAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Sirenix::OdinInspector::RequiredListLengthAttribute::*)(int32_t, ::StringW)>(&::Sirenix::OdinInspector::RequiredListLengthAttribute::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa84e74c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Sirenix::OdinInspector::RequiredListLengthAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Sirenix::OdinInspector::RequiredListLengthAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Sirenix::OdinInspector::RequiredListLengthAttribute::*)(::StringW)>(&::Sirenix::OdinInspector::RequiredListLengthAttribute::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa84e78c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Sirenix::OdinInspector::RequiredListLengthAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Sirenix::OdinInspector::RequiredListLengthAttribute::__cordl_internal_get_minLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minLength;
}
constexpr int32_t const& Sirenix::OdinInspector::RequiredListLengthAttribute::__cordl_internal_get_minLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minLength;
}
constexpr void Sirenix::OdinInspector::RequiredListLengthAttribute::__cordl_internal_set_minLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minLength = value;
}
constexpr bool& Sirenix::OdinInspector::RequiredListLengthAttribute::__cordl_internal_get_minLengthIsSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minLengthIsSet;
}
constexpr bool const& Sirenix::OdinInspector::RequiredListLengthAttribute::__cordl_internal_get_minLengthIsSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minLengthIsSet;
}
constexpr void Sirenix::OdinInspector::RequiredListLengthAttribute::__cordl_internal_set_minLengthIsSet(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minLengthIsSet = value;
}
constexpr ::StringW& Sirenix::OdinInspector::RequiredListLengthAttribute::__cordl_internal_get_MinLengthGetter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinLengthGetter;
}
constexpr ::StringW const& Sirenix::OdinInspector::RequiredListLengthAttribute::__cordl_internal_get_MinLengthGetter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinLengthGetter;
}
constexpr void Sirenix::OdinInspector::RequiredListLengthAttribute::__cordl_internal_set_MinLengthGetter(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MinLengthGetter = value;
}
constexpr ::StringW& Sirenix::OdinInspector::RequiredListLengthAttribute::__cordl_internal_get_MaxLengthGetter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxLengthGetter;
}
constexpr ::StringW const& Sirenix::OdinInspector::RequiredListLengthAttribute::__cordl_internal_get_MaxLengthGetter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxLengthGetter;
}
constexpr void Sirenix::OdinInspector::RequiredListLengthAttribute::__cordl_internal_set_MaxLengthGetter(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxLengthGetter = value;
}
inline void Sirenix::OdinInspector::RequiredListLengthAttribute::set_MinLength(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Sirenix::OdinInspector::RequiredListLengthAttribute*>(),
                        {"set_MinLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Sirenix::OdinInspector::RequiredListLengthAttribute::_ctor(int32_t  minLength, ::StringW  maxLengthGetter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Sirenix::OdinInspector::RequiredListLengthAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, minLength, maxLengthGetter);
}
inline void Sirenix::OdinInspector::RequiredListLengthAttribute::_ctor(::StringW  fixedLengthGetter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Sirenix::OdinInspector::RequiredListLengthAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fixedLengthGetter);
}
inline ::Sirenix::OdinInspector::RequiredListLengthAttribute* Sirenix::OdinInspector::RequiredListLengthAttribute::New_ctor(int32_t  minLength, ::StringW  maxLengthGetter)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Sirenix::OdinInspector::RequiredListLengthAttribute*>(minLength, maxLengthGetter));
}
inline ::Sirenix::OdinInspector::RequiredListLengthAttribute* Sirenix::OdinInspector::RequiredListLengthAttribute::New_ctor(::StringW  fixedLengthGetter)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Sirenix::OdinInspector::RequiredListLengthAttribute*>(fixedLengthGetter));
}
// Ctor Parameters []
constexpr ::Sirenix::OdinInspector::RequiredListLengthAttribute::RequiredListLengthAttribute()   {
}
