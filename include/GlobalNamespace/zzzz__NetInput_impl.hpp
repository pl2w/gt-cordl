#pragma once
// IWYU pragma private; include "GlobalNamespace/NetInput.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__NetInput_def.hpp"
#include "GlobalNamespace/zzzz__NetworkedInput_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NetInput.get_LocalPlayerVRRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::VRRig> (*)()>(&::GlobalNamespace::NetInput::get_LocalPlayerVRRig)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x56d906c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetInput*>(),
                        {"get_LocalPlayerVRRig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetInput.GetInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NetworkedInput (*)()>(&::GlobalNamespace::NetInput::GetInput)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x56d9158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetInput*>(),
                        {"GetInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NetInput::setStaticF__localPlayerVRRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::VRRig>, "_localPlayerVRRig", ::GlobalNamespace::NetInput*>(std::forward<::UnityW<::GlobalNamespace::VRRig>>(value));
}
inline ::UnityW<::GlobalNamespace::VRRig> GlobalNamespace::NetInput::getStaticF__localPlayerVRRig()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::VRRig>, "_localPlayerVRRig", ::GlobalNamespace::NetInput*>();
}
inline ::UnityW<::GlobalNamespace::VRRig> GlobalNamespace::NetInput::get_LocalPlayerVRRig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetInput*>(),
                        {"get_LocalPlayerVRRig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::VRRig>>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::NetworkedInput GlobalNamespace::NetInput::GetInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetInput*>(),
                        {"GetInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetworkedInput>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetInput::NetInput()   {
}
