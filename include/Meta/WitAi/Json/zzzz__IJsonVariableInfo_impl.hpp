#pragma once
// IWYU pragma private; include "Meta/WitAi/Json/IJsonVariableInfo.hpp"
#include "Meta/WitAi/Json/zzzz__IJsonVariableInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Json::IJsonVariableInfo.GetSerializeNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::Meta::WitAi::Json::IJsonVariableInfo::*)()>(&::Meta::WitAi::Json::IJsonVariableInfo::GetSerializeNames)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Json::IJsonVariableInfo*>(),
                    {::i2c::class_of<::Meta::WitAi::Json::IJsonVariableInfo*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::IJsonVariableInfo.GetShouldSerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Json::IJsonVariableInfo::*)()>(&::Meta::WitAi::Json::IJsonVariableInfo::GetShouldSerialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Json::IJsonVariableInfo*>(),
                    {::i2c::class_of<::Meta::WitAi::Json::IJsonVariableInfo*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::IJsonVariableInfo.GetShouldDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Json::IJsonVariableInfo::*)()>(&::Meta::WitAi::Json::IJsonVariableInfo::GetShouldDeserialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Json::IJsonVariableInfo*>(),
                    {::i2c::class_of<::Meta::WitAi::Json::IJsonVariableInfo*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::IJsonVariableInfo.GetVariableType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Meta::WitAi::Json::IJsonVariableInfo::*)()>(&::Meta::WitAi::Json::IJsonVariableInfo::GetVariableType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Json::IJsonVariableInfo*>(),
                    {::i2c::class_of<::Meta::WitAi::Json::IJsonVariableInfo*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::IJsonVariableInfo.GetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::Json::IJsonVariableInfo::*)(::System::Object*)>(&::Meta::WitAi::Json::IJsonVariableInfo::GetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Json::IJsonVariableInfo*>(),
                    {::i2c::class_of<::Meta::WitAi::Json::IJsonVariableInfo*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::IJsonVariableInfo.SetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Json::IJsonVariableInfo::*)(::System::Object*, ::System::Object*)>(&::Meta::WitAi::Json::IJsonVariableInfo::SetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Json::IJsonVariableInfo*>(),
                    {::i2c::class_of<::Meta::WitAi::Json::IJsonVariableInfo*>(), 5}
                ));
    return ___internal_method;
  }
};
inline ::ArrayW<::StringW> Meta::WitAi::Json::IJsonVariableInfo::GetSerializeNames()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Json::IJsonVariableInfo*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline bool Meta::WitAi::Json::IJsonVariableInfo::GetShouldSerialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Json::IJsonVariableInfo*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Meta::WitAi::Json::IJsonVariableInfo::GetShouldDeserialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Json::IJsonVariableInfo*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Type* Meta::WitAi::Json::IJsonVariableInfo::GetVariableType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Json::IJsonVariableInfo*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Object* Meta::WitAi::Json::IJsonVariableInfo::GetValue(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Json::IJsonVariableInfo*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, obj);
}
inline void Meta::WitAi::Json::IJsonVariableInfo::SetValue(::System::Object*  obj, ::System::Object*  newValue)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Json::IJsonVariableInfo*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, newValue);
}
