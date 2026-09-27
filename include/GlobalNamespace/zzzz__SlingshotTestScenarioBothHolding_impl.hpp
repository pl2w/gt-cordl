#pragma once
// IWYU pragma private; include "GlobalNamespace/SlingshotTestScenarioBothHolding.hpp"
#include "GlobalNamespace/zzzz__SlingshotTestScenario_impl.hpp"
#include "GlobalNamespace/zzzz__SlingshotTestScenarioBothHolding_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SlingshotTestScenarioBothHolding._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SlingshotTestScenarioBothHolding::*)()>(&::GlobalNamespace::SlingshotTestScenarioBothHolding::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x573d1fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotTestScenarioBothHolding*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& GlobalNamespace::SlingshotTestScenarioBothHolding::__cordl_internal_get_testObject1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testObject1;
}
constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& GlobalNamespace::SlingshotTestScenarioBothHolding::__cordl_internal_get_testObject1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testObject1;
}
constexpr void GlobalNamespace::SlingshotTestScenarioBothHolding::__cordl_internal_set_testObject1(::UnityW<::GlobalNamespace::TransferrableObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___testObject1 = value;
}
constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& GlobalNamespace::SlingshotTestScenarioBothHolding::__cordl_internal_get_testObject2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testObject2;
}
constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& GlobalNamespace::SlingshotTestScenarioBothHolding::__cordl_internal_get_testObject2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testObject2;
}
constexpr void GlobalNamespace::SlingshotTestScenarioBothHolding::__cordl_internal_set_testObject2(::UnityW<::GlobalNamespace::TransferrableObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___testObject2 = value;
}
inline void GlobalNamespace::SlingshotTestScenarioBothHolding::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotTestScenarioBothHolding*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SlingshotTestScenarioBothHolding* GlobalNamespace::SlingshotTestScenarioBothHolding::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SlingshotTestScenarioBothHolding*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SlingshotTestScenarioBothHolding::SlingshotTestScenarioBothHolding()   {
}
