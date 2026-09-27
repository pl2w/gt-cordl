#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/WitIntValue.hpp"
#include "Meta/WitAi/Data/zzzz__WitValue_impl.hpp"
#include "Meta/WitAi/Data/zzzz__WitIntValue_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Data::WitIntValue.GetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::Data::WitIntValue::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::Data::WitIntValue::GetValue)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9e9aa08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Data::WitIntValue*>(),
                    {::i2c::class_of<::Meta::WitAi::Data::WitIntValue*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::WitIntValue.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Data::WitIntValue::*)(::Meta::WitAi::Json::WitResponseNode*, ::System::Object*)>(&::Meta::WitAi::Data::WitIntValue::Equals)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x9e9aa5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Data::WitIntValue*>(),
                    {::i2c::class_of<::Meta::WitAi::Data::WitIntValue*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::WitIntValue.GetIntValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::WitAi::Data::WitIntValue::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::Data::WitIntValue::GetIntValue)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9e9aa34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::WitIntValue*>(),
                        {"GetIntValue", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::WitIntValue._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::WitIntValue::*)()>(&::Meta::WitAi::Data::WitIntValue::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9ab24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::WitIntValue*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Object* Meta::WitAi::Data::WitIntValue::GetValue(::Meta::WitAi::Json::WitResponseNode*  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Data::WitIntValue*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, response);
}
inline bool Meta::WitAi::Data::WitIntValue::Equals(::Meta::WitAi::Json::WitResponseNode*  response, ::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Data::WitIntValue*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, response, value);
}
inline int32_t Meta::WitAi::Data::WitIntValue::GetIntValue(::Meta::WitAi::Json::WitResponseNode*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::WitIntValue*>(),
                        {"GetIntValue", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, response);
}
inline void Meta::WitAi::Data::WitIntValue::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::WitIntValue*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Data::WitIntValue* Meta::WitAi::Data::WitIntValue::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Data::WitIntValue*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Data::WitIntValue::WitIntValue()   {
}
