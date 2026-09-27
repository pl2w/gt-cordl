#pragma once
// IWYU pragma private; include "Meta/WitAi/ArrayNodeReference.hpp"
#include "Meta/WitAi/zzzz__WitResponseReference_impl.hpp"
#include "Meta/WitAi/zzzz__ArrayNodeReference_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::ArrayNodeReference.GetStringValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::ArrayNodeReference::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::ArrayNodeReference::GetStringValue)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9e7f4d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::ArrayNodeReference*>(),
                    {::i2c::class_of<::Meta::WitAi::ArrayNodeReference*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::ArrayNodeReference.GetIntValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::WitAi::ArrayNodeReference::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::ArrayNodeReference::GetIntValue)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9e7f548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::ArrayNodeReference*>(),
                    {::i2c::class_of<::Meta::WitAi::ArrayNodeReference*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::ArrayNodeReference.GetFloatValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::WitAi::ArrayNodeReference::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::ArrayNodeReference::GetFloatValue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9e7f5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::ArrayNodeReference*>(),
                    {::i2c::class_of<::Meta::WitAi::ArrayNodeReference*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::ArrayNodeReference._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::ArrayNodeReference::*)()>(&::Meta::WitAi::ArrayNodeReference::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e7f478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ArrayNodeReference*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Meta::WitAi::ArrayNodeReference::__cordl_internal_get_index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr int32_t const& Meta::WitAi::ArrayNodeReference::__cordl_internal_get_index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr void Meta::WitAi::ArrayNodeReference::__cordl_internal_set_index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___index = value;
}
inline ::StringW Meta::WitAi::ArrayNodeReference::GetStringValue(::Meta::WitAi::Json::WitResponseNode*  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::ArrayNodeReference*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, response);
}
inline int32_t Meta::WitAi::ArrayNodeReference::GetIntValue(::Meta::WitAi::Json::WitResponseNode*  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::ArrayNodeReference*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, response);
}
inline float_t Meta::WitAi::ArrayNodeReference::GetFloatValue(::Meta::WitAi::Json::WitResponseNode*  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::ArrayNodeReference*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, response);
}
inline void Meta::WitAi::ArrayNodeReference::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ArrayNodeReference*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::ArrayNodeReference* Meta::WitAi::ArrayNodeReference::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::ArrayNodeReference*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::ArrayNodeReference::ArrayNodeReference()   {
}
