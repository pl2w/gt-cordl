#pragma once
// IWYU pragma private; include "Meta/WitAi/ObjectNodeReference.hpp"
#include "Meta/WitAi/zzzz__WitResponseReference_impl.hpp"
#include "Meta/WitAi/zzzz__ObjectNodeReference_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::ObjectNodeReference.GetStringValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::ObjectNodeReference::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::ObjectNodeReference::GetStringValue)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x9e7f640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::ObjectNodeReference*>(),
                    {::i2c::class_of<::Meta::WitAi::ObjectNodeReference*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::ObjectNodeReference.GetIntValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::WitAi::ObjectNodeReference::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::ObjectNodeReference::GetIntValue)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9e7f714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::ObjectNodeReference*>(),
                    {::i2c::class_of<::Meta::WitAi::ObjectNodeReference*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::ObjectNodeReference.GetFloatValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::WitAi::ObjectNodeReference::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::ObjectNodeReference::GetFloatValue)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9e7f78c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::ObjectNodeReference*>(),
                    {::i2c::class_of<::Meta::WitAi::ObjectNodeReference*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::ObjectNodeReference._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::ObjectNodeReference::*)()>(&::Meta::WitAi::ObjectNodeReference::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e7f470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ObjectNodeReference*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::WitAi::ObjectNodeReference::__cordl_internal_get_key()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___key;
}
constexpr ::StringW const& Meta::WitAi::ObjectNodeReference::__cordl_internal_get_key() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___key;
}
constexpr void Meta::WitAi::ObjectNodeReference::__cordl_internal_set_key(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___key = value;
}
inline ::StringW Meta::WitAi::ObjectNodeReference::GetStringValue(::Meta::WitAi::Json::WitResponseNode*  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::ObjectNodeReference*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, response);
}
inline int32_t Meta::WitAi::ObjectNodeReference::GetIntValue(::Meta::WitAi::Json::WitResponseNode*  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::ObjectNodeReference*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, response);
}
inline float_t Meta::WitAi::ObjectNodeReference::GetFloatValue(::Meta::WitAi::Json::WitResponseNode*  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::ObjectNodeReference*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, response);
}
inline void Meta::WitAi::ObjectNodeReference::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ObjectNodeReference*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::ObjectNodeReference* Meta::WitAi::ObjectNodeReference::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::ObjectNodeReference*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::ObjectNodeReference::ObjectNodeReference()   {
}
