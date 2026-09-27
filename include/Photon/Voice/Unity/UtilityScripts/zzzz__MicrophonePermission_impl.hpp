#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/UtilityScripts/MicrophonePermission.hpp"
#include "Photon/Voice/Unity/zzzz__VoiceComponent_impl.hpp"
#include "Photon/Voice/Unity/UtilityScripts/zzzz__MicrophonePermission_def.hpp"
#include "Photon/Voice/Unity/zzzz__Recorder_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::MicrophonePermission.add_MicrophonePermissionCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<bool>*)>(&::Photon::Voice::Unity::UtilityScripts::MicrophonePermission::add_MicrophonePermissionCallback)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa78947c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicrophonePermission*>(),
                        {"add_MicrophonePermissionCallback", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::MicrophonePermission.remove_MicrophonePermissionCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<bool>*)>(&::Photon::Voice::Unity::UtilityScripts::MicrophonePermission::remove_MicrophonePermissionCallback)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa789548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicrophonePermission*>(),
                        {"remove_MicrophonePermissionCallback", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::MicrophonePermission.get_HasPermission
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::UtilityScripts::MicrophonePermission::*)()>(&::Photon::Voice::Unity::UtilityScripts::MicrophonePermission::get_HasPermission)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa789614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicrophonePermission*>(),
                        {"get_HasPermission", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::MicrophonePermission.set_HasPermission
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::MicrophonePermission::*)(bool)>(&::Photon::Voice::Unity::UtilityScripts::MicrophonePermission::set_HasPermission)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xa78961c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicrophonePermission*>(),
                        {"set_HasPermission", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::MicrophonePermission.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::MicrophonePermission::*)()>(&::Photon::Voice::Unity::UtilityScripts::MicrophonePermission::Awake)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa789784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicrophonePermission*>(),
                    {::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicrophonePermission*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::MicrophonePermission.InitVoice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::MicrophonePermission::*)()>(&::Photon::Voice::Unity::UtilityScripts::MicrophonePermission::InitVoice)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0xa78980c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicrophonePermission*>(),
                        {"InitVoice", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::MicrophonePermission.PermissionCallbacks_PermissionDeniedAndDontAskAgain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::MicrophonePermission::*)(::StringW)>(&::Photon::Voice::Unity::UtilityScripts::MicrophonePermission::PermissionCallbacks_PermissionDeniedAndDontAskAgain)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa789a38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicrophonePermission*>(),
                        {"PermissionCallbacks_PermissionDeniedAndDontAskAgain", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::MicrophonePermission.PermissionCallbacks_PermissionGranted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::MicrophonePermission::*)(::StringW)>(&::Photon::Voice::Unity::UtilityScripts::MicrophonePermission::PermissionCallbacks_PermissionGranted)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa789b34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicrophonePermission*>(),
                        {"PermissionCallbacks_PermissionGranted", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::MicrophonePermission.PermissionCallbacks_PermissionDenied
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::MicrophonePermission::*)(::StringW)>(&::Photon::Voice::Unity::UtilityScripts::MicrophonePermission::PermissionCallbacks_PermissionDenied)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa789c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicrophonePermission*>(),
                        {"PermissionCallbacks_PermissionDenied", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::MicrophonePermission._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::MicrophonePermission::*)()>(&::Photon::Voice::Unity::UtilityScripts::MicrophonePermission::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa789d2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicrophonePermission*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Photon::Voice::Unity::Recorder>& Photon::Voice::Unity::UtilityScripts::MicrophonePermission::__cordl_internal_get_recorder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recorder;
}
constexpr ::UnityW<::Photon::Voice::Unity::Recorder> const& Photon::Voice::Unity::UtilityScripts::MicrophonePermission::__cordl_internal_get_recorder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recorder;
}
constexpr void Photon::Voice::Unity::UtilityScripts::MicrophonePermission::__cordl_internal_set_recorder(::UnityW<::Photon::Voice::Unity::Recorder>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___recorder = value;
}
constexpr bool& Photon::Voice::Unity::UtilityScripts::MicrophonePermission::__cordl_internal_get_isRequesting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isRequesting;
}
constexpr bool const& Photon::Voice::Unity::UtilityScripts::MicrophonePermission::__cordl_internal_get_isRequesting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isRequesting;
}
constexpr void Photon::Voice::Unity::UtilityScripts::MicrophonePermission::__cordl_internal_set_isRequesting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isRequesting = value;
}
constexpr bool& Photon::Voice::Unity::UtilityScripts::MicrophonePermission::__cordl_internal_get_hasPermission()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasPermission;
}
constexpr bool const& Photon::Voice::Unity::UtilityScripts::MicrophonePermission::__cordl_internal_get_hasPermission() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasPermission;
}
constexpr void Photon::Voice::Unity::UtilityScripts::MicrophonePermission::__cordl_internal_set_hasPermission(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasPermission = value;
}
constexpr bool& Photon::Voice::Unity::UtilityScripts::MicrophonePermission::__cordl_internal_get_autoStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoStart;
}
constexpr bool const& Photon::Voice::Unity::UtilityScripts::MicrophonePermission::__cordl_internal_get_autoStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoStart;
}
constexpr void Photon::Voice::Unity::UtilityScripts::MicrophonePermission::__cordl_internal_set_autoStart(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoStart = value;
}
inline void Photon::Voice::Unity::UtilityScripts::MicrophonePermission::setStaticF_MicrophonePermissionCallback(::System::Action_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<bool>*, "MicrophonePermissionCallback", ::Photon::Voice::Unity::UtilityScripts::MicrophonePermission*>(std::forward<::System::Action_1<bool>*>(value));
}
inline ::System::Action_1<bool>* Photon::Voice::Unity::UtilityScripts::MicrophonePermission::getStaticF_MicrophonePermissionCallback()  {
return ::cordl_internals::getStaticField<::System::Action_1<bool>*, "MicrophonePermissionCallback", ::Photon::Voice::Unity::UtilityScripts::MicrophonePermission*>();
}
inline void Photon::Voice::Unity::UtilityScripts::MicrophonePermission::add_MicrophonePermissionCallback(::System::Action_1<bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicrophonePermission*>(),
                        {"add_MicrophonePermissionCallback", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Photon::Voice::Unity::UtilityScripts::MicrophonePermission::remove_MicrophonePermissionCallback(::System::Action_1<bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicrophonePermission*>(),
                        {"remove_MicrophonePermissionCallback", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool Photon::Voice::Unity::UtilityScripts::MicrophonePermission::get_HasPermission()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicrophonePermission*>(),
                        {"get_HasPermission", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::Unity::UtilityScripts::MicrophonePermission::set_HasPermission(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicrophonePermission*>(),
                        {"set_HasPermission", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Photon::Voice::Unity::UtilityScripts::MicrophonePermission::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicrophonePermission*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::UtilityScripts::MicrophonePermission::InitVoice()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicrophonePermission*>(),
                        {"InitVoice", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::UtilityScripts::MicrophonePermission::PermissionCallbacks_PermissionDeniedAndDontAskAgain(::StringW  permissionName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicrophonePermission*>(),
                        {"PermissionCallbacks_PermissionDeniedAndDontAskAgain", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, permissionName);
}
inline void Photon::Voice::Unity::UtilityScripts::MicrophonePermission::PermissionCallbacks_PermissionGranted(::StringW  permissionName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicrophonePermission*>(),
                        {"PermissionCallbacks_PermissionGranted", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, permissionName);
}
inline void Photon::Voice::Unity::UtilityScripts::MicrophonePermission::PermissionCallbacks_PermissionDenied(::StringW  permissionName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicrophonePermission*>(),
                        {"PermissionCallbacks_PermissionDenied", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, permissionName);
}
inline void Photon::Voice::Unity::UtilityScripts::MicrophonePermission::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::MicrophonePermission*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::Unity::UtilityScripts::MicrophonePermission* Photon::Voice::Unity::UtilityScripts::MicrophonePermission::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::Unity::UtilityScripts::MicrophonePermission*>());
}
// Ctor Parameters []
constexpr ::Photon::Voice::Unity::UtilityScripts::MicrophonePermission::MicrophonePermission()   {
}
