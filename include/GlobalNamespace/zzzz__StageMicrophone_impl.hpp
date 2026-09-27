#pragma once
// IWYU pragma private; include "GlobalNamespace/StageMicrophone.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__StageMicrophone_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StageMicrophone.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StageMicrophone::*)()>(&::GlobalNamespace::StageMicrophone::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5986d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StageMicrophone*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StageMicrophone.IsPlayerAmplified
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::StageMicrophone::*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::StageMicrophone::IsPlayerAmplified)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5986d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StageMicrophone*>(),
                        {"IsPlayerAmplified", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StageMicrophone.GetPlayerSpatialBlend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::StageMicrophone::*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::StageMicrophone::GetPlayerSpatialBlend)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5986e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StageMicrophone*>(),
                        {"GetPlayerSpatialBlend", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StageMicrophone._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StageMicrophone::*)()>(&::GlobalNamespace::StageMicrophone::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5986e78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StageMicrophone*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::StageMicrophone::__cordl_internal_get_PickupRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PickupRadius;
}
constexpr float_t const& GlobalNamespace::StageMicrophone::__cordl_internal_get_PickupRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PickupRadius;
}
constexpr void GlobalNamespace::StageMicrophone::__cordl_internal_set_PickupRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PickupRadius = value;
}
constexpr float_t& GlobalNamespace::StageMicrophone::__cordl_internal_get_AmplifiedSpatialBlend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AmplifiedSpatialBlend;
}
constexpr float_t const& GlobalNamespace::StageMicrophone::__cordl_internal_get_AmplifiedSpatialBlend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AmplifiedSpatialBlend;
}
constexpr void GlobalNamespace::StageMicrophone::__cordl_internal_set_AmplifiedSpatialBlend(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AmplifiedSpatialBlend = value;
}
inline void GlobalNamespace::StageMicrophone::setStaticF_Instance(::UnityW<::GlobalNamespace::StageMicrophone>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::StageMicrophone>, "Instance", ::GlobalNamespace::StageMicrophone*>(std::forward<::UnityW<::GlobalNamespace::StageMicrophone>>(value));
}
inline ::UnityW<::GlobalNamespace::StageMicrophone> GlobalNamespace::StageMicrophone::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::StageMicrophone>, "Instance", ::GlobalNamespace::StageMicrophone*>();
}
inline void GlobalNamespace::StageMicrophone::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StageMicrophone*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::StageMicrophone::IsPlayerAmplified(::GlobalNamespace::VRRig*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StageMicrophone*>(),
                        {"IsPlayerAmplified", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player);
}
inline float_t GlobalNamespace::StageMicrophone::GetPlayerSpatialBlend(::GlobalNamespace::VRRig*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StageMicrophone*>(),
                        {"GetPlayerSpatialBlend", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, player);
}
inline void GlobalNamespace::StageMicrophone::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StageMicrophone*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::StageMicrophone* GlobalNamespace::StageMicrophone::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StageMicrophone*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StageMicrophone::StageMicrophone()   {
}
