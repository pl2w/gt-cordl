#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/GlobalVariables/BoolGlobalVariable.hpp"
#include "UnityEngine/Localization/SmartFormat/PersistentVariables/zzzz__BoolVariable_impl.hpp"
#include "UnityEngine/Localization/SmartFormat/GlobalVariables/zzzz__BoolGlobalVariable_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::GlobalVariables::BoolGlobalVariable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::GlobalVariables::BoolGlobalVariable::*)()>(&::UnityEngine::Localization::SmartFormat::GlobalVariables::BoolGlobalVariable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb038b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::GlobalVariables::BoolGlobalVariable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::SmartFormat::GlobalVariables::BoolGlobalVariable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::GlobalVariables::BoolGlobalVariable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::SmartFormat::GlobalVariables::BoolGlobalVariable* UnityEngine::Localization::SmartFormat::GlobalVariables::BoolGlobalVariable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::GlobalVariables::BoolGlobalVariable*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::GlobalVariables::BoolGlobalVariable::BoolGlobalVariable()   {
}
