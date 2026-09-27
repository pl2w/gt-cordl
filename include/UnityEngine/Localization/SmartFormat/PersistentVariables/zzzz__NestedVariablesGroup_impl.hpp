#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/PersistentVariables/NestedVariablesGroup.hpp"
#include "UnityEngine/Localization/SmartFormat/PersistentVariables/zzzz__Variable_1_impl.hpp"
#include "UnityEngine/Localization/SmartFormat/PersistentVariables/zzzz__NestedVariablesGroup_def.hpp"
#include "UnityEngine/Localization/SmartFormat/PersistentVariables/zzzz__IVariableGroup_def.hpp"
#include "UnityEngine/Localization/SmartFormat/PersistentVariables/zzzz__IVariable_def.hpp"
#include "UnityEngine/Localization/SmartFormat/PersistentVariables/zzzz__VariablesGroupAsset_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::PersistentVariables::NestedVariablesGroup.TryGetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::SmartFormat::PersistentVariables::NestedVariablesGroup::*)(::StringW, ::by_ref<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>)>(&::UnityEngine::Localization::SmartFormat::PersistentVariables::NestedVariablesGroup::TryGetValue)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb049fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::NestedVariablesGroup*>(),
                        {"TryGetValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::PersistentVariables::NestedVariablesGroup._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::PersistentVariables::NestedVariablesGroup::*)()>(&::UnityEngine::Localization::SmartFormat::PersistentVariables::NestedVariablesGroup::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb04a118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::NestedVariablesGroup*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool UnityEngine::Localization::SmartFormat::PersistentVariables::NestedVariablesGroup::TryGetValue(::StringW  name, ::by_ref<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::NestedVariablesGroup*>(),
                        {"TryGetValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name, value);
}
inline void UnityEngine::Localization::SmartFormat::PersistentVariables::NestedVariablesGroup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::NestedVariablesGroup*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::SmartFormat::PersistentVariables::NestedVariablesGroup* UnityEngine::Localization::SmartFormat::PersistentVariables::NestedVariablesGroup::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::PersistentVariables::NestedVariablesGroup*>());
}
/// @brief Convert operator to "::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup"
constexpr  UnityEngine::Localization::SmartFormat::PersistentVariables::NestedVariablesGroup::operator ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*() noexcept {
return static_cast<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup"
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup* UnityEngine::Localization::SmartFormat::PersistentVariables::NestedVariablesGroup::i___UnityEngine__Localization__SmartFormat__PersistentVariables__IVariableGroup() noexcept {
return static_cast<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::NestedVariablesGroup::NestedVariablesGroup()   {
}
