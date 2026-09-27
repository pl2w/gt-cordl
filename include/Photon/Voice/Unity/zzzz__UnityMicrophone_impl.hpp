#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/UnityMicrophone.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Voice/Unity/zzzz__UnityMicrophone_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::Photon::Voice::Unity::UnityMicrophone.get_devices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)()>(&::Photon::Voice::Unity::UnityMicrophone::get_devices)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa75fa9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UnityMicrophone*>(),
                        {"get_devices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UnityMicrophone.End
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Photon::Voice::Unity::UnityMicrophone::End)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa75faa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UnityMicrophone*>(),
                        {"End", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UnityMicrophone.GetDeviceCaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::Photon::Voice::Unity::UnityMicrophone::GetDeviceCaps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa75faac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UnityMicrophone*>(),
                        {"GetDeviceCaps", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UnityMicrophone.GetPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::Photon::Voice::Unity::UnityMicrophone::GetPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa75fab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UnityMicrophone*>(),
                        {"GetPosition", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UnityMicrophone.IsRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::Photon::Voice::Unity::UnityMicrophone::IsRecording)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa75fabc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UnityMicrophone*>(),
                        {"IsRecording", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UnityMicrophone.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (*)(::StringW, bool, int32_t, int32_t)>(&::Photon::Voice::Unity::UnityMicrophone::Start)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa75fac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UnityMicrophone*>(),
                        {"Start", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::ArrayW<::StringW> Photon::Voice::Unity::UnityMicrophone::get_devices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UnityMicrophone*>(),
                        {"get_devices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method);
}
inline void Photon::Voice::Unity::UnityMicrophone::End(::StringW  deviceName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UnityMicrophone*>(),
                        {"End", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, deviceName);
}
inline void Photon::Voice::Unity::UnityMicrophone::GetDeviceCaps(::StringW  deviceName, ::by_ref<int32_t>  minFreq, ::by_ref<int32_t>  maxFreq)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UnityMicrophone*>(),
                        {"GetDeviceCaps", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, deviceName, minFreq, maxFreq);
}
inline int32_t Photon::Voice::Unity::UnityMicrophone::GetPosition(::StringW  deviceName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UnityMicrophone*>(),
                        {"GetPosition", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, deviceName);
}
inline bool Photon::Voice::Unity::UnityMicrophone::IsRecording(::StringW  deviceName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UnityMicrophone*>(),
                        {"IsRecording", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, deviceName);
}
inline ::UnityW<::UnityEngine::AudioClip> Photon::Voice::Unity::UnityMicrophone::Start(::StringW  deviceName, bool  loop, int32_t  lengthSec, int32_t  frequency)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UnityMicrophone*>(),
                        {"Start", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(nullptr, ___internal_method, deviceName, loop, lengthSec, frequency);
}
// Ctor Parameters []
constexpr ::Photon::Voice::Unity::UnityMicrophone::UnityMicrophone()   {
}
