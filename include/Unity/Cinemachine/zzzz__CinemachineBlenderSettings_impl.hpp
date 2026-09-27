#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineBlenderSettings.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineBlenderSettings_CustomBlend_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineBlenderSettings_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineBlendDefinition_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineBlenderSettings_CustomBlend_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineCamera_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBlenderSettings.GetBlendForVirtualCameras
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::CinemachineBlendDefinition (::Unity::Cinemachine::CinemachineBlenderSettings::*)(::StringW, ::StringW, ::Unity::Cinemachine::CinemachineBlendDefinition)>(&::Unity::Cinemachine::CinemachineBlenderSettings::GetBlendForVirtualCameras)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0xaeaf944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBlenderSettings*>(),
                        {"GetBlendForVirtualCameras", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Unity::Cinemachine::CinemachineBlendDefinition>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBlenderSettings.LookupBlend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::CinemachineBlendDefinition (*)(::Unity::Cinemachine::ICinemachineCamera*, ::Unity::Cinemachine::ICinemachineCamera*, ::Unity::Cinemachine::CinemachineBlendDefinition, ::Unity::Cinemachine::CinemachineBlenderSettings*, ::UnityEngine::Object*)>(&::Unity::Cinemachine::CinemachineBlenderSettings::LookupBlend)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0xaeafb68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBlenderSettings*>(),
                        {"LookupBlend", {}, {::i2c::type_of<::Unity::Cinemachine::ICinemachineCamera*>(), ::i2c::type_of<::Unity::Cinemachine::ICinemachineCamera*>(), ::i2c::type_of<::Unity::Cinemachine::CinemachineBlendDefinition>(), ::i2c::type_of<::Unity::Cinemachine::CinemachineBlenderSettings*>(), ::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBlenderSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineBlenderSettings::*)()>(&::Unity::Cinemachine::CinemachineBlenderSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeafdb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBlenderSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::CinemachineBlenderSettings_CustomBlend>& Unity::Cinemachine::CinemachineBlenderSettings::__cordl_internal_get_CustomBlends()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomBlends;
}
constexpr ::ArrayW<::GlobalNamespace::CinemachineBlenderSettings_CustomBlend> const& Unity::Cinemachine::CinemachineBlenderSettings::__cordl_internal_get_CustomBlends() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomBlends;
}
constexpr void Unity::Cinemachine::CinemachineBlenderSettings::__cordl_internal_set_CustomBlends(::ArrayW<::GlobalNamespace::CinemachineBlenderSettings_CustomBlend>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CustomBlends = value;
}
inline ::Unity::Cinemachine::CinemachineBlendDefinition Unity::Cinemachine::CinemachineBlenderSettings::GetBlendForVirtualCameras(::StringW  fromCameraName, ::StringW  toCameraName, ::Unity::Cinemachine::CinemachineBlendDefinition  defaultBlend)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBlenderSettings*>(),
                        {"GetBlendForVirtualCameras", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Unity::Cinemachine::CinemachineBlendDefinition>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::CinemachineBlendDefinition>(this, ___internal_method, fromCameraName, toCameraName, defaultBlend);
}
inline ::Unity::Cinemachine::CinemachineBlendDefinition Unity::Cinemachine::CinemachineBlenderSettings::LookupBlend(::Unity::Cinemachine::ICinemachineCamera*  outgoing, ::Unity::Cinemachine::ICinemachineCamera*  incoming, ::Unity::Cinemachine::CinemachineBlendDefinition  defaultBlend, ::Unity::Cinemachine::CinemachineBlenderSettings*  customBlends, ::UnityEngine::Object*  owner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBlenderSettings*>(),
                        {"LookupBlend", {}, {::i2c::type_of<::Unity::Cinemachine::ICinemachineCamera*>(), ::i2c::type_of<::Unity::Cinemachine::ICinemachineCamera*>(), ::i2c::type_of<::Unity::Cinemachine::CinemachineBlendDefinition>(), ::i2c::type_of<::Unity::Cinemachine::CinemachineBlenderSettings*>(), ::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::CinemachineBlendDefinition>(nullptr, ___internal_method, outgoing, incoming, defaultBlend, customBlends, owner);
}
inline void Unity::Cinemachine::CinemachineBlenderSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBlenderSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineBlenderSettings* Unity::Cinemachine::CinemachineBlenderSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineBlenderSettings*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineBlenderSettings::CinemachineBlenderSettings()   {
}
