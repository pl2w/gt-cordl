#pragma once
// IWYU pragma private; include "Meta/Conduit/ConduitUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/Conduit/zzzz__ConduitUtilities_def.hpp"
#include "System/Reflection/zzzz__ParameterInfo_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Regex_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Meta::Conduit::ConduitUtilities.DelimitWithUnderscores
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Meta::Conduit::ConduitUtilities::DelimitWithUnderscores)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9e1ea84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ConduitUtilities*>(),
                        {"DelimitWithUnderscores", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ConduitUtilities.IsNullableType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::Meta::Conduit::ConduitUtilities::IsNullableType)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9e1d6ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ConduitUtilities*>(),
                        {"IsNullableType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ConduitUtilities.GetTypedParameterValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Reflection::ParameterInfo*, ::System::Object*)>(&::Meta::Conduit::ConduitUtilities::GetTypedParameterValue)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9e1eb08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ConduitUtilities*>(),
                        {"GetTypedParameterValue", {}, {::i2c::type_of<::System::Reflection::ParameterInfo*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ConduitUtilities.GetTypedParameterValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Type*, ::System::Object*)>(&::Meta::Conduit::ConduitUtilities::GetTypedParameterValue)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x9e1eb84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ConduitUtilities*>(),
                        {"GetTypedParameterValue", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ConduitUtilities.SanitizeString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Meta::Conduit::ConduitUtilities::SanitizeString)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x9e1ef40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ConduitUtilities*>(),
                        {"SanitizeString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::Conduit::ConduitUtilities::setStaticF_UnderscoreSplitter(::System::Text::RegularExpressions::Regex*  value)  {
::cordl_internals::setStaticField<::System::Text::RegularExpressions::Regex*, "UnderscoreSplitter", ::Meta::Conduit::ConduitUtilities*>(std::forward<::System::Text::RegularExpressions::Regex*>(value));
}
inline ::System::Text::RegularExpressions::Regex* Meta::Conduit::ConduitUtilities::getStaticF_UnderscoreSplitter()  {
return ::cordl_internals::getStaticField<::System::Text::RegularExpressions::Regex*, "UnderscoreSplitter", ::Meta::Conduit::ConduitUtilities*>();
}
inline ::StringW Meta::Conduit::ConduitUtilities::DelimitWithUnderscores(::StringW  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ConduitUtilities*>(),
                        {"DelimitWithUnderscores", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, input);
}
inline bool Meta::Conduit::ConduitUtilities::IsNullableType(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ConduitUtilities*>(),
                        {"IsNullableType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline ::System::Object* Meta::Conduit::ConduitUtilities::GetTypedParameterValue(::System::Reflection::ParameterInfo*  formalParameter, ::System::Object*  parameterValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ConduitUtilities*>(),
                        {"GetTypedParameterValue", {}, {::i2c::type_of<::System::Reflection::ParameterInfo*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, formalParameter, parameterValue);
}
inline ::System::Object* Meta::Conduit::ConduitUtilities::GetTypedParameterValue(::System::Type*  parameterType, ::System::Object*  parameterValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ConduitUtilities*>(),
                        {"GetTypedParameterValue", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, parameterType, parameterValue);
}
inline ::StringW Meta::Conduit::ConduitUtilities::SanitizeString(::StringW  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ConduitUtilities*>(),
                        {"SanitizeString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, input);
}
// Ctor Parameters []
constexpr ::Meta::Conduit::ConduitUtilities::ConduitUtilities()   {
}
