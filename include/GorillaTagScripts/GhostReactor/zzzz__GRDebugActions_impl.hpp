#pragma once
// IWYU pragma private; include "GorillaTagScripts/GhostReactor/GRDebugActions.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/GhostReactor/zzzz__GRDebugActions_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::GRDebugActions._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GhostReactor::GRDebugActions::*)()>(&::GorillaTagScripts::GhostReactor::GRDebugActions::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c192dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRDebugActions*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaTagScripts::GhostReactor::GRDebugActions::__cordl_internal_get_giveScripAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___giveScripAmount;
}
constexpr int32_t const& GorillaTagScripts::GhostReactor::GRDebugActions::__cordl_internal_get_giveScripAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___giveScripAmount;
}
constexpr void GorillaTagScripts::GhostReactor::GRDebugActions::__cordl_internal_set_giveScripAmount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___giveScripAmount = value;
}
inline void GorillaTagScripts::GhostReactor::GRDebugActions::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::GRDebugActions*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::GhostReactor::GRDebugActions* GorillaTagScripts::GhostReactor::GRDebugActions::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::GhostReactor::GRDebugActions*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::GhostReactor::GRDebugActions::GRDebugActions()   {
}
