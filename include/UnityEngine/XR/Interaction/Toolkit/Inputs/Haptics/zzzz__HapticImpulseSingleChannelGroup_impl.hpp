#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Haptics/HapticImpulseSingleChannelGroup.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Haptics/zzzz__HapticImpulseSingleChannelGroup_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Haptics/zzzz__IXRHapticImpulseChannelGroup_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Haptics/zzzz__IXRHapticImpulseChannel_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseSingleChannelGroup.get_channelCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseSingleChannelGroup::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseSingleChannelGroup::get_channelCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4cbd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseSingleChannelGroup*>(),
                        {"get_channelCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseSingleChannelGroup.get_impulseChannel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseSingleChannelGroup::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseSingleChannelGroup::get_impulseChannel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4cbd48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseSingleChannelGroup*>(),
                        {"get_impulseChannel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseSingleChannelGroup._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseSingleChannelGroup::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseSingleChannelGroup::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb4caedc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseSingleChannelGroup*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseSingleChannelGroup.GetChannel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseSingleChannelGroup::*)(int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseSingleChannelGroup::GetChannel)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb4cbd50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseSingleChannelGroup*>(),
                        {"GetChannel", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel*& UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseSingleChannelGroup::__cordl_internal_get__impulseChannel_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____impulseChannel_k__BackingField;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseSingleChannelGroup::__cordl_internal_get__impulseChannel_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____impulseChannel_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseSingleChannelGroup::__cordl_internal_set__impulseChannel_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____impulseChannel_k__BackingField = value;
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseSingleChannelGroup::get_channelCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseSingleChannelGroup*>(),
                        {"get_channelCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel* UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseSingleChannelGroup::get_impulseChannel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseSingleChannelGroup*>(),
                        {"get_impulseChannel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseSingleChannelGroup::_ctor(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel*  channel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseSingleChannelGroup*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel* UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseSingleChannelGroup::GetChannel(int32_t  channel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseSingleChannelGroup*>(),
                        {"GetChannel", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel*>(this, ___internal_method, channel);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseSingleChannelGroup* UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseSingleChannelGroup::New_ctor(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel*  channel)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseSingleChannelGroup*>(channel));
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannelGroup"
constexpr  UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseSingleChannelGroup::operator ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannelGroup*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannelGroup*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannelGroup"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannelGroup* UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseSingleChannelGroup::i___UnityEngine__XR__Interaction__Toolkit__Inputs__Haptics__IXRHapticImpulseChannelGroup() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannelGroup*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseSingleChannelGroup::HapticImpulseSingleChannelGroup()   {
}
