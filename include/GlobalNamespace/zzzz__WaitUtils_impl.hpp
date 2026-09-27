#pragma once
// IWYU pragma private; include "GlobalNamespace/WaitUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__WaitUtils_def.hpp"
#include "System/Linq/Expressions/zzzz__ParameterExpression_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__WaitForSeconds_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::WaitUtils.WaitForSeconds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::WaitForSeconds* (*)(float_t)>(&::GlobalNamespace::WaitUtils::WaitForSeconds)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5b1d65c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaitUtils*>(),
                        {"WaitForSeconds", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::WaitUtils::setStaticF__waitForSeconds(::UnityEngine::WaitForSeconds*  value)  {
::cordl_internals::setStaticField<::UnityEngine::WaitForSeconds*, "_waitForSeconds", ::GlobalNamespace::WaitUtils*>(std::forward<::UnityEngine::WaitForSeconds*>(value));
}
inline ::UnityEngine::WaitForSeconds* GlobalNamespace::WaitUtils::getStaticF__waitForSeconds()  {
return ::cordl_internals::getStaticField<::UnityEngine::WaitForSeconds*, "_waitForSeconds", ::GlobalNamespace::WaitUtils*>();
}
inline void GlobalNamespace::WaitUtils::setStaticF__param(::System::Linq::Expressions::ParameterExpression*  value)  {
::cordl_internals::setStaticField<::System::Linq::Expressions::ParameterExpression*, "_param", ::GlobalNamespace::WaitUtils*>(std::forward<::System::Linq::Expressions::ParameterExpression*>(value));
}
inline ::System::Linq::Expressions::ParameterExpression* GlobalNamespace::WaitUtils::getStaticF__param()  {
return ::cordl_internals::getStaticField<::System::Linq::Expressions::ParameterExpression*, "_param", ::GlobalNamespace::WaitUtils*>();
}
inline void GlobalNamespace::WaitUtils::setStaticF__waitForSecondsSetter(::System::Action_1<float_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<float_t>*, "_waitForSecondsSetter", ::GlobalNamespace::WaitUtils*>(std::forward<::System::Action_1<float_t>*>(value));
}
inline ::System::Action_1<float_t>* GlobalNamespace::WaitUtils::getStaticF__waitForSecondsSetter()  {
return ::cordl_internals::getStaticField<::System::Action_1<float_t>*, "_waitForSecondsSetter", ::GlobalNamespace::WaitUtils*>();
}
inline ::UnityEngine::WaitForSeconds* GlobalNamespace::WaitUtils::WaitForSeconds(float_t  seconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaitUtils*>(),
                        {"WaitForSeconds", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::WaitForSeconds*>(nullptr, ___internal_method, seconds);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WaitUtils::WaitUtils()   {
}
