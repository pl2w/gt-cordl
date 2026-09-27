#pragma once
// IWYU pragma private; include "Oculus/VoiceSDK/Utilities/MicPermissionsManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/VoiceSDK/Utilities/zzzz__MicPermissionsManager_def.hpp"
#include "Oculus/VoiceSDK/Utilities/zzzz__MicPermissionsManager_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::Oculus::VoiceSDK::Utilities::MicPermissionsManager.HasMicPermission
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Oculus::VoiceSDK::Utilities::MicPermissionsManager::HasMicPermission)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb943cac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::VoiceSDK::Utilities::MicPermissionsManager*>(),
                        {"HasMicPermission", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::VoiceSDK::Utilities::MicPermissionsManager.RequestMicPermission
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::StringW>*)>(&::Oculus::VoiceSDK::Utilities::MicPermissionsManager::RequestMicPermission)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xb943cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::VoiceSDK::Utilities::MicPermissionsManager*>(),
                        {"RequestMicPermission", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Oculus::VoiceSDK::Utilities::MicPermissionsManager::HasMicPermission()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::VoiceSDK::Utilities::MicPermissionsManager*>(),
                        {"HasMicPermission", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Oculus::VoiceSDK::Utilities::MicPermissionsManager::RequestMicPermission(::System::Action_1<::StringW>*  permissionGrantedCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::VoiceSDK::Utilities::MicPermissionsManager*>(),
                        {"RequestMicPermission", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, permissionGrantedCallback);
}
// Ctor Parameters []
constexpr ::Oculus::VoiceSDK::Utilities::MicPermissionsManager::MicPermissionsManager()   {
}
//  Writing Method size for method: ::Oculus::VoiceSDK::Utilities::MicPermissionsManager___c__DisplayClass1_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::VoiceSDK::Utilities::MicPermissionsManager___c__DisplayClass1_0::*)()>(&::Oculus::VoiceSDK::Utilities::MicPermissionsManager___c__DisplayClass1_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb943e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::VoiceSDK::Utilities::MicPermissionsManager___c__DisplayClass1_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::VoiceSDK::Utilities::MicPermissionsManager___c__DisplayClass1_0._RequestMicPermission_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::VoiceSDK::Utilities::MicPermissionsManager___c__DisplayClass1_0::*)(::StringW)>(&::Oculus::VoiceSDK::Utilities::MicPermissionsManager___c__DisplayClass1_0::_RequestMicPermission_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb943e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::VoiceSDK::Utilities::MicPermissionsManager___c__DisplayClass1_0*>(),
                        {"<RequestMicPermission>b__0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::StringW>*& Oculus::VoiceSDK::Utilities::MicPermissionsManager___c__DisplayClass1_0::__cordl_internal_get_permissionGrantedCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___permissionGrantedCallback;
}
constexpr ::System::Action_1<::StringW>* const& Oculus::VoiceSDK::Utilities::MicPermissionsManager___c__DisplayClass1_0::__cordl_internal_get_permissionGrantedCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___permissionGrantedCallback;
}
constexpr void Oculus::VoiceSDK::Utilities::MicPermissionsManager___c__DisplayClass1_0::__cordl_internal_set_permissionGrantedCallback(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___permissionGrantedCallback = value;
}
inline void Oculus::VoiceSDK::Utilities::MicPermissionsManager___c__DisplayClass1_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::VoiceSDK::Utilities::MicPermissionsManager___c__DisplayClass1_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::VoiceSDK::Utilities::MicPermissionsManager___c__DisplayClass1_0::_RequestMicPermission_b__0(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::VoiceSDK::Utilities::MicPermissionsManager___c__DisplayClass1_0*>(),
                        {"<RequestMicPermission>b__0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline ::Oculus::VoiceSDK::Utilities::MicPermissionsManager___c__DisplayClass1_0* Oculus::VoiceSDK::Utilities::MicPermissionsManager___c__DisplayClass1_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::VoiceSDK::Utilities::MicPermissionsManager___c__DisplayClass1_0*>());
}
// Ctor Parameters []
constexpr ::Oculus::VoiceSDK::Utilities::MicPermissionsManager___c__DisplayClass1_0::MicPermissionsManager___c__DisplayClass1_0()   {
}
