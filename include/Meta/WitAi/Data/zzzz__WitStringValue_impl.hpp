#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/WitStringValue.hpp"
#include "Meta/WitAi/Data/zzzz__WitValue_impl.hpp"
#include "Meta/WitAi/Data/zzzz__WitStringValue_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Data::WitStringValue.GetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::Data::WitStringValue::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::Data::WitStringValue::GetValue)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e9ab2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Data::WitStringValue*>(),
                    {::i2c::class_of<::Meta::WitAi::Data::WitStringValue*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::WitStringValue.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Data::WitStringValue::*)(::Meta::WitAi::Json::WitResponseNode*, ::System::Object*)>(&::Meta::WitAi::Data::WitStringValue::Equals)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x9e9ab58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Data::WitStringValue*>(),
                    {::i2c::class_of<::Meta::WitAi::Data::WitStringValue*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::WitStringValue.GetStringValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::Data::WitStringValue::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::Data::WitStringValue::GetStringValue)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9e9ab30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::WitStringValue*>(),
                        {"GetStringValue", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::WitStringValue._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::WitStringValue::*)()>(&::Meta::WitAi::Data::WitStringValue::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9ac10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::WitStringValue*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Object* Meta::WitAi::Data::WitStringValue::GetValue(::Meta::WitAi::Json::WitResponseNode*  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Data::WitStringValue*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, response);
}
inline bool Meta::WitAi::Data::WitStringValue::Equals(::Meta::WitAi::Json::WitResponseNode*  response, ::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Data::WitStringValue*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, response, value);
}
inline ::StringW Meta::WitAi::Data::WitStringValue::GetStringValue(::Meta::WitAi::Json::WitResponseNode*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::WitStringValue*>(),
                        {"GetStringValue", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, response);
}
inline void Meta::WitAi::Data::WitStringValue::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::WitStringValue*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Data::WitStringValue* Meta::WitAi::Data::WitStringValue::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Data::WitStringValue*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Data::WitStringValue::WitStringValue()   {
}
