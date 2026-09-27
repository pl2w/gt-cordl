#pragma once
// IWYU pragma private; include "GlobalNamespace/SlingshotTester.hpp"
#include "GlobalNamespace/zzzz__SlingshotTestScenario_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SlingshotTester_def.hpp"
#include "GlobalNamespace/zzzz__SlingshotTestScenario_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SlingshotTester._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SlingshotTester::*)()>(&::GlobalNamespace::SlingshotTester::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x573d1d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotTester*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SlingshotTestScenario>& GlobalNamespace::SlingshotTester::__cordl_internal_get_currentScenario()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentScenario;
}
constexpr ::UnityW<::GlobalNamespace::SlingshotTestScenario> const& GlobalNamespace::SlingshotTester::__cordl_internal_get_currentScenario() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentScenario;
}
constexpr void GlobalNamespace::SlingshotTester::__cordl_internal_set_currentScenario(::UnityW<::GlobalNamespace::SlingshotTestScenario>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentScenario = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SlingshotTestScenario>>& GlobalNamespace::SlingshotTester::__cordl_internal_get_scenarioList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scenarioList;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SlingshotTestScenario>> const& GlobalNamespace::SlingshotTester::__cordl_internal_get_scenarioList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scenarioList;
}
constexpr void GlobalNamespace::SlingshotTester::__cordl_internal_set_scenarioList(::ArrayW<::UnityW<::GlobalNamespace::SlingshotTestScenario>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scenarioList = value;
}
inline void GlobalNamespace::SlingshotTester::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotTester*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SlingshotTester* GlobalNamespace::SlingshotTester::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SlingshotTester*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SlingshotTester::SlingshotTester()   {
}
