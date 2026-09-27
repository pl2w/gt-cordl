#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/WitValue.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Meta/WitAi/Data/zzzz__WitValue_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
#include "Meta/WitAi/zzzz__WitResponseReference_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Data::WitValue.get_Reference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::WitResponseReference* (::Meta::WitAi::Data::WitValue::*)()>(&::Meta::WitAi::Data::WitValue::get_Reference)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x9e9a9a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::WitValue*>(),
                        {"get_Reference", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::WitValue.GetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::Data::WitValue::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::Data::WitValue::GetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Data::WitValue*>(),
                    {::i2c::class_of<::Meta::WitAi::Data::WitValue*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::WitValue.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Data::WitValue::*)(::Meta::WitAi::Json::WitResponseNode*, ::System::Object*)>(&::Meta::WitAi::Data::WitValue::Equals)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Data::WitValue*>(),
                    {::i2c::class_of<::Meta::WitAi::Data::WitValue*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::WitValue.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::Data::WitValue::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::Data::WitValue::ToString)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9e9ac18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::WitValue*>(),
                        {"ToString", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::WitValue._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::WitValue::*)()>(&::Meta::WitAi::Data::WitValue::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9aa00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::WitValue*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::WitAi::Data::WitValue::__cordl_internal_get_path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr ::StringW const& Meta::WitAi::Data::WitValue::__cordl_internal_get_path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr void Meta::WitAi::Data::WitValue::__cordl_internal_set_path(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___path = value;
}
constexpr ::Meta::WitAi::WitResponseReference*& Meta::WitAi::Data::WitValue::__cordl_internal_get_reference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reference;
}
constexpr ::Meta::WitAi::WitResponseReference* const& Meta::WitAi::Data::WitValue::__cordl_internal_get_reference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reference;
}
constexpr void Meta::WitAi::Data::WitValue::__cordl_internal_set_reference(::Meta::WitAi::WitResponseReference*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reference = value;
}
inline ::Meta::WitAi::WitResponseReference* Meta::WitAi::Data::WitValue::get_Reference()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::WitValue*>(),
                        {"get_Reference", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::WitResponseReference*>(this, ___internal_method);
}
inline ::System::Object* Meta::WitAi::Data::WitValue::GetValue(::Meta::WitAi::Json::WitResponseNode*  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Data::WitValue*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, response);
}
inline bool Meta::WitAi::Data::WitValue::Equals(::Meta::WitAi::Json::WitResponseNode*  response, ::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Data::WitValue*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, response, value);
}
inline ::StringW Meta::WitAi::Data::WitValue::ToString(::Meta::WitAi::Json::WitResponseNode*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::WitValue*>(),
                        {"ToString", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, response);
}
inline void Meta::WitAi::Data::WitValue::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::WitValue*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Data::WitValue* Meta::WitAi::Data::WitValue::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Data::WitValue*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Data::WitValue::WitValue()   {
}
