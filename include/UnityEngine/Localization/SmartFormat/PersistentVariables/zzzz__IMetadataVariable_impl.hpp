#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/PersistentVariables/IMetadataVariable.hpp"
#include "UnityEngine/Localization/SmartFormat/PersistentVariables/zzzz__IMetadataVariable_def.hpp"
#include "UnityEngine/Localization/SmartFormat/PersistentVariables/zzzz__IVariable_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::PersistentVariables::IMetadataVariable.get_VariableName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::SmartFormat::PersistentVariables::IMetadataVariable::*)()>(&::UnityEngine::Localization::SmartFormat::PersistentVariables::IMetadataVariable::get_VariableName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::IMetadataVariable*>(),
                    {::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::IMetadataVariable*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::Localization::SmartFormat::PersistentVariables::IMetadataVariable::get_VariableName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::IMetadataVariable*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
/// @brief Convert operator to "::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable"
constexpr  UnityEngine::Localization::SmartFormat::PersistentVariables::IMetadataVariable::operator ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*() noexcept {
return static_cast<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable"
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable* UnityEngine::Localization::SmartFormat::PersistentVariables::IMetadataVariable::i___UnityEngine__Localization__SmartFormat__PersistentVariables__IVariable() noexcept {
return static_cast<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>(static_cast<void*>(this));
}
