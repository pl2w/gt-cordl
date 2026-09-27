#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaNetworkLeaveTutorialTrigger.hpp"
#include "GlobalNamespace/zzzz__GorillaTriggerBox_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaNetworkLeaveTutorialTrigger_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaNetworkLeaveTutorialTrigger.OnBoxTriggered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaNetworkLeaveTutorialTrigger::*)()>(&::GlobalNamespace::GorillaNetworkLeaveTutorialTrigger::OnBoxTriggered)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5aadf5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaNetworkLeaveTutorialTrigger*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaNetworkLeaveTutorialTrigger*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaNetworkLeaveTutorialTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaNetworkLeaveTutorialTrigger::*)()>(&::GlobalNamespace::GorillaNetworkLeaveTutorialTrigger::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aadfd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkLeaveTutorialTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GorillaNetworkLeaveTutorialTrigger::OnBoxTriggered()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaNetworkLeaveTutorialTrigger*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaNetworkLeaveTutorialTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkLeaveTutorialTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaNetworkLeaveTutorialTrigger* GlobalNamespace::GorillaNetworkLeaveTutorialTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaNetworkLeaveTutorialTrigger*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaNetworkLeaveTutorialTrigger::GorillaNetworkLeaveTutorialTrigger()   {
}
