#pragma once
// IWYU pragma private; include "Meta/WitAi/WitResponseReference.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/zzzz__WitResponseReference_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::WitResponseReference.GetStringValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::WitResponseReference::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::WitResponseReference::GetStringValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9e7f480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::WitResponseReference*>(),
                    {::i2c::class_of<::Meta::WitAi::WitResponseReference*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitResponseReference.GetIntValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::WitAi::WitResponseReference::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::WitResponseReference::GetIntValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9e7f49c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::WitResponseReference*>(),
                    {::i2c::class_of<::Meta::WitAi::WitResponseReference*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitResponseReference.GetFloatValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::WitAi::WitResponseReference::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::WitResponseReference::GetFloatValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9e7f4b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::WitResponseReference*>(),
                    {::i2c::class_of<::Meta::WitAi::WitResponseReference*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitResponseReference._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::WitResponseReference::*)()>(&::Meta::WitAi::WitResponseReference::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e7f3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitResponseReference*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::WitAi::WitResponseReference*& Meta::WitAi::WitResponseReference::__cordl_internal_get_child()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___child;
}
constexpr ::Meta::WitAi::WitResponseReference* const& Meta::WitAi::WitResponseReference::__cordl_internal_get_child() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___child;
}
constexpr void Meta::WitAi::WitResponseReference::__cordl_internal_set_child(::Meta::WitAi::WitResponseReference*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___child = value;
}
constexpr ::StringW& Meta::WitAi::WitResponseReference::__cordl_internal_get_path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr ::StringW const& Meta::WitAi::WitResponseReference::__cordl_internal_get_path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr void Meta::WitAi::WitResponseReference::__cordl_internal_set_path(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___path = value;
}
inline ::StringW Meta::WitAi::WitResponseReference::GetStringValue(::Meta::WitAi::Json::WitResponseNode*  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::WitResponseReference*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, response);
}
inline int32_t Meta::WitAi::WitResponseReference::GetIntValue(::Meta::WitAi::Json::WitResponseNode*  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::WitResponseReference*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, response);
}
inline float_t Meta::WitAi::WitResponseReference::GetFloatValue(::Meta::WitAi::Json::WitResponseNode*  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::WitResponseReference*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, response);
}
inline void Meta::WitAi::WitResponseReference::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitResponseReference*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::WitResponseReference* Meta::WitAi::WitResponseReference::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::WitResponseReference*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::WitResponseReference::WitResponseReference()   {
}
