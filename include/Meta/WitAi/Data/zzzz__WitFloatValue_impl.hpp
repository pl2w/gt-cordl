#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/WitFloatValue.hpp"
#include "Meta/WitAi/Data/zzzz__WitValue_impl.hpp"
#include "Meta/WitAi/Data/zzzz__WitFloatValue_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Data::WitFloatValue.GetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::Data::WitFloatValue::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::Data::WitFloatValue::GetValue)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9e9a858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Data::WitFloatValue*>(),
                    {::i2c::class_of<::Meta::WitAi::Data::WitFloatValue*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::WitFloatValue.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Data::WitFloatValue::*)(::Meta::WitAi::Json::WitResponseNode*, ::System::Object*)>(&::Meta::WitAi::Data::WitFloatValue::Equals)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x9e9a8a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Data::WitFloatValue*>(),
                    {::i2c::class_of<::Meta::WitAi::Data::WitFloatValue*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::WitFloatValue.GetFloatValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::WitAi::Data::WitFloatValue::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::Data::WitFloatValue::GetFloatValue)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9e9a880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::WitFloatValue*>(),
                        {"GetFloatValue", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::WitFloatValue._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::WitFloatValue::*)()>(&::Meta::WitAi::Data::WitFloatValue::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9e9a9ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::WitFloatValue*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Meta::WitAi::Data::WitFloatValue::__cordl_internal_get_equalityTolerance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___equalityTolerance;
}
constexpr float_t const& Meta::WitAi::Data::WitFloatValue::__cordl_internal_get_equalityTolerance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___equalityTolerance;
}
constexpr void Meta::WitAi::Data::WitFloatValue::__cordl_internal_set_equalityTolerance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___equalityTolerance = value;
}
inline ::System::Object* Meta::WitAi::Data::WitFloatValue::GetValue(::Meta::WitAi::Json::WitResponseNode*  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Data::WitFloatValue*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, response);
}
inline bool Meta::WitAi::Data::WitFloatValue::Equals(::Meta::WitAi::Json::WitResponseNode*  response, ::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Data::WitFloatValue*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, response, value);
}
inline float_t Meta::WitAi::Data::WitFloatValue::GetFloatValue(::Meta::WitAi::Json::WitResponseNode*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::WitFloatValue*>(),
                        {"GetFloatValue", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, response);
}
inline void Meta::WitAi::Data::WitFloatValue::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::WitFloatValue*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Data::WitFloatValue* Meta::WitAi::Data::WitFloatValue::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Data::WitFloatValue*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Data::WitFloatValue::WitFloatValue()   {
}
