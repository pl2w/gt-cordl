#pragma once
// IWYU pragma private; include "Meta/Conduit/IParameterProvider.hpp"
#include "Meta/Conduit/zzzz__IParameterProvider_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__ParameterInfo_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Meta::Conduit::IParameterProvider.PopulateParametersFromNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Conduit::IParameterProvider::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::Conduit::IParameterProvider::PopulateParametersFromNode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Conduit::IParameterProvider*>(),
                    {::i2c::class_of<::Meta::Conduit::IParameterProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::IParameterProvider.PopulateRoles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Conduit::IParameterProvider::*)(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::Meta::Conduit::IParameterProvider::PopulateRoles)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Conduit::IParameterProvider*>(),
                    {::i2c::class_of<::Meta::Conduit::IParameterProvider*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::IParameterProvider.AddParameter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Conduit::IParameterProvider::*)(::StringW, ::System::Object*)>(&::Meta::Conduit::IParameterProvider::AddParameter)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Conduit::IParameterProvider*>(),
                    {::i2c::class_of<::Meta::Conduit::IParameterProvider*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::IParameterProvider.ContainsParameter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Conduit::IParameterProvider::*)(::System::Reflection::ParameterInfo*, ::System::Text::StringBuilder*)>(&::Meta::Conduit::IParameterProvider::ContainsParameter)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Conduit::IParameterProvider*>(),
                    {::i2c::class_of<::Meta::Conduit::IParameterProvider*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::IParameterProvider.AddCustomType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Conduit::IParameterProvider::*)(::StringW, ::System::Type*)>(&::Meta::Conduit::IParameterProvider::AddCustomType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Conduit::IParameterProvider*>(),
                    {::i2c::class_of<::Meta::Conduit::IParameterProvider*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::IParameterProvider.GetParameterValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::Conduit::IParameterProvider::*)(::System::Reflection::ParameterInfo*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, bool)>(&::Meta::Conduit::IParameterProvider::GetParameterValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Conduit::IParameterProvider*>(),
                    {::i2c::class_of<::Meta::Conduit::IParameterProvider*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::IParameterProvider.GetParameterNamesOfType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::Meta::Conduit::IParameterProvider::*)(::System::Type*)>(&::Meta::Conduit::IParameterProvider::GetParameterNamesOfType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Conduit::IParameterProvider*>(),
                    {::i2c::class_of<::Meta::Conduit::IParameterProvider*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::IParameterProvider.SetSpecializedParameter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Conduit::IParameterProvider::*)(::StringW, ::System::Type*)>(&::Meta::Conduit::IParameterProvider::SetSpecializedParameter)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Conduit::IParameterProvider*>(),
                    {::i2c::class_of<::Meta::Conduit::IParameterProvider*>(), 7}
                ));
    return ___internal_method;
  }
};
inline void Meta::Conduit::IParameterProvider::PopulateParametersFromNode(::Meta::WitAi::Json::WitResponseNode*  responseNode)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Conduit::IParameterProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, responseNode);
}
inline void Meta::Conduit::IParameterProvider::PopulateRoles(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  parameterToRoleMap)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Conduit::IParameterProvider*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameterToRoleMap);
}
inline void Meta::Conduit::IParameterProvider::AddParameter(::StringW  parameterName, ::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Conduit::IParameterProvider*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameterName, value);
}
inline bool Meta::Conduit::IParameterProvider::ContainsParameter(::System::Reflection::ParameterInfo*  parameter, ::System::Text::StringBuilder*  log)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Conduit::IParameterProvider*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, parameter, log);
}
inline void Meta::Conduit::IParameterProvider::AddCustomType(::StringW  name, ::System::Type*  type)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Conduit::IParameterProvider*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, type);
}
inline ::System::Object* Meta::Conduit::IParameterProvider::GetParameterValue(::System::Reflection::ParameterInfo*  formalParameter, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  parameterMap, bool  relaxed)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Conduit::IParameterProvider*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, formalParameter, parameterMap, relaxed);
}
inline ::System::Collections::Generic::List_1<::StringW>* Meta::Conduit::IParameterProvider::GetParameterNamesOfType(::System::Type*  targetType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Conduit::IParameterProvider*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(this, ___internal_method, targetType);
}
inline void Meta::Conduit::IParameterProvider::SetSpecializedParameter(::StringW  reservedParameterName, ::System::Type*  parameterType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Conduit::IParameterProvider*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reservedParameterName, parameterType);
}
