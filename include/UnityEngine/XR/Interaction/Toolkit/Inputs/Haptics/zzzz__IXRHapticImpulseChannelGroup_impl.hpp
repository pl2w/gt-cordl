#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Haptics/IXRHapticImpulseChannelGroup.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Haptics/zzzz__IXRHapticImpulseChannelGroup_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Haptics/zzzz__IXRHapticImpulseChannel_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannelGroup.get_channelCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannelGroup::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannelGroup::get_channelCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannelGroup*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannelGroup*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannelGroup.GetChannel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannelGroup::*)(int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannelGroup::GetChannel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannelGroup*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannelGroup*>(), 1}
                ));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannelGroup::get_channelCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannelGroup*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel* UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannelGroup::GetChannel(int32_t  channel)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannelGroup*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel*>(this, ___internal_method, channel);
}
