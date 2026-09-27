#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/PersistentVariables/IVariableGroup.hpp"
#include "UnityEngine/Localization/SmartFormat/PersistentVariables/zzzz__IVariableGroup_def.hpp"
#include "UnityEngine/Localization/SmartFormat/PersistentVariables/zzzz__IVariable_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup.TryGetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup::*)(::StringW, ::by_ref<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>)>(&::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup::TryGetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*>(),
                    {::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*>(), 0}
                ));
    return ___internal_method;
  }
};
inline bool UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup::TryGetValue(::StringW  key, ::by_ref<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, value);
}
