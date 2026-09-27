#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/PersistentVariables/VariableNameValuePair.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/SmartFormat/PersistentVariables/zzzz__VariableNameValuePair_def.hpp"
#include "UnityEngine/Localization/SmartFormat/PersistentVariables/zzzz__IVariable_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair::*)()>(&::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair::ToString)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb04a160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>(),
                    {::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair::*)()>(&::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb04a1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*& UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair::__cordl_internal_get_variable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___variable;
}
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable* const& UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair::__cordl_internal_get_variable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___variable;
}
constexpr void UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair::__cordl_internal_set_variable(::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___variable = value;
}
inline ::StringW UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair* UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair::VariableNameValuePair()   {
}
