#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/PersistentVariables/IVariableValueChanged.hpp"
#include "UnityEngine/Localization/SmartFormat/PersistentVariables/zzzz__IVariableValueChanged_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/Localization/SmartFormat/PersistentVariables/zzzz__IVariable_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged.add_ValueChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged::*)(::System::Action_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*)>(&::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged::add_ValueChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged*>(),
                    {::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged.remove_ValueChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged::*)(::System::Action_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*)>(&::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged::remove_ValueChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged*>(),
                    {::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged*>(), 1}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged::add_ValueChanged(::System::Action_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged::remove_ValueChanged(::System::Action_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
/// @brief Convert operator to "::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable"
constexpr  UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged::operator ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*() noexcept {
return static_cast<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable"
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable* UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged::i___UnityEngine__Localization__SmartFormat__PersistentVariables__IVariable() noexcept {
return static_cast<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>(static_cast<void*>(this));
}
