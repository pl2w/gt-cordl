#pragma once
// IWYU pragma private; include "GlobalNamespace/SlingshotTestScenarioTransferrable.hpp"
#include "GlobalNamespace/zzzz__SlingshotTestScenario_impl.hpp"
#include "GlobalNamespace/zzzz__SlingshotTestScenarioTransferrable_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SlingshotTestScenarioTransferrable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SlingshotTestScenarioTransferrable::*)()>(&::GlobalNamespace::SlingshotTestScenarioTransferrable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x573d20c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotTestScenarioTransferrable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& GlobalNamespace::SlingshotTestScenarioTransferrable::__cordl_internal_get_testObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testObject;
}
constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& GlobalNamespace::SlingshotTestScenarioTransferrable::__cordl_internal_get_testObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testObject;
}
constexpr void GlobalNamespace::SlingshotTestScenarioTransferrable::__cordl_internal_set_testObject(::UnityW<::GlobalNamespace::TransferrableObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___testObject = value;
}
inline void GlobalNamespace::SlingshotTestScenarioTransferrable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotTestScenarioTransferrable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SlingshotTestScenarioTransferrable* GlobalNamespace::SlingshotTestScenarioTransferrable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SlingshotTestScenarioTransferrable*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SlingshotTestScenarioTransferrable::SlingshotTestScenarioTransferrable()   {
}
