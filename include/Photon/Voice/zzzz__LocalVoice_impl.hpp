#pragma once
// IWYU pragma private; include "Photon/Voice/LocalVoice.hpp"
#include "Photon/Voice/zzzz__VoiceInfo_impl.hpp"
#include "System/zzzz__ArraySegment_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Voice/zzzz__LocalVoice_def.hpp"
#include "Photon/Voice/zzzz__FrameFlags_def.hpp"
#include "Photon/Voice/zzzz__IEncoder_def.hpp"
#include "Photon/Voice/zzzz__IServiceable_def.hpp"
#include "Photon/Voice/zzzz__SpacingProfile_def.hpp"
#include "Photon/Voice/zzzz__VoiceClient_def.hpp"
#include "Photon/Voice/zzzz__VoiceInfo_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Photon::Voice::LocalVoice.get_Group
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Photon::Voice::LocalVoice::*)()>(&::Photon::Voice::LocalVoice::get_Group)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa748804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"get_Group", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LocalVoice.set_Group
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::LocalVoice::*)(uint8_t)>(&::Photon::Voice::LocalVoice::set_Group)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa74880c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"set_Group", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LocalVoice.get_InterestGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Photon::Voice::LocalVoice::*)()>(&::Photon::Voice::LocalVoice::get_InterestGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa748814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"get_InterestGroup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LocalVoice.set_InterestGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::LocalVoice::*)(uint8_t)>(&::Photon::Voice::LocalVoice::set_InterestGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa74881c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"set_InterestGroup", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LocalVoice.get_Info
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::VoiceInfo (::Photon::Voice::LocalVoice::*)()>(&::Photon::Voice::LocalVoice::get_Info)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa748824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"get_Info", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LocalVoice.get_TransmitEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::LocalVoice::*)()>(&::Photon::Voice::LocalVoice::get_TransmitEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa748838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"get_TransmitEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LocalVoice.set_TransmitEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::LocalVoice::*)(bool)>(&::Photon::Voice::LocalVoice::set_TransmitEnabled)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xa748840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"set_TransmitEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LocalVoice.get_IsCurrentlyTransmitting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::LocalVoice::*)()>(&::Photon::Voice::LocalVoice::get_IsCurrentlyTransmitting)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa748998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"get_IsCurrentlyTransmitting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LocalVoice.get_FramesSent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::LocalVoice::*)()>(&::Photon::Voice::LocalVoice::get_FramesSent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7489c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"get_FramesSent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LocalVoice.set_FramesSent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::LocalVoice::*)(int32_t)>(&::Photon::Voice::LocalVoice::set_FramesSent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7489c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"set_FramesSent", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LocalVoice.get_FramesSentBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::LocalVoice::*)()>(&::Photon::Voice::LocalVoice::get_FramesSentBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7489d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"get_FramesSentBytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LocalVoice.set_FramesSentBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::LocalVoice::*)(int32_t)>(&::Photon::Voice::LocalVoice::set_FramesSentBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7489d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"set_FramesSentBytes", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LocalVoice.get_Reliable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::LocalVoice::*)()>(&::Photon::Voice::LocalVoice::get_Reliable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7489e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"get_Reliable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LocalVoice.set_Reliable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::LocalVoice::*)(bool)>(&::Photon::Voice::LocalVoice::set_Reliable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7489e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"set_Reliable", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LocalVoice.get_Encrypt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::LocalVoice::*)()>(&::Photon::Voice::LocalVoice::get_Encrypt)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7489f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"get_Encrypt", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LocalVoice.set_Encrypt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::LocalVoice::*)(bool)>(&::Photon::Voice::LocalVoice::set_Encrypt)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7489f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"set_Encrypt", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LocalVoice.get_LocalUserServiceable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::IServiceable* (::Photon::Voice::LocalVoice::*)()>(&::Photon::Voice::LocalVoice::get_LocalUserServiceable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa748a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"get_LocalUserServiceable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LocalVoice.set_LocalUserServiceable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::LocalVoice::*)(::Photon::Voice::IServiceable*)>(&::Photon::Voice::LocalVoice::set_LocalUserServiceable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa748a08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"set_LocalUserServiceable", {}, {::i2c::type_of<::Photon::Voice::IServiceable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LocalVoice.get_DebugEchoMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::LocalVoice::*)()>(&::Photon::Voice::LocalVoice::get_DebugEchoMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa748a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"get_DebugEchoMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LocalVoice.set_DebugEchoMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::LocalVoice::*)(bool)>(&::Photon::Voice::LocalVoice::set_DebugEchoMode)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0xa748a18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"set_DebugEchoMode", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LocalVoice.SendSpacingProfileStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::LocalVoice::*)()>(&::Photon::Voice::LocalVoice::SendSpacingProfileStart)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa749128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"SendSpacingProfileStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LocalVoice.get_SendSpacingProfileDump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Voice::LocalVoice::*)()>(&::Photon::Voice::LocalVoice::get_SendSpacingProfileDump)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa74913c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"get_SendSpacingProfileDump", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LocalVoice.get_SendSpacingProfileMax
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::LocalVoice::*)()>(&::Photon::Voice::LocalVoice::get_SendSpacingProfileMax)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa749150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"get_SendSpacingProfileMax", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LocalVoice.get_ID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Photon::Voice::LocalVoice::*)()>(&::Photon::Voice::LocalVoice::get_ID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa749164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"get_ID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LocalVoice.get_EvNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Photon::Voice::LocalVoice::*)()>(&::Photon::Voice::LocalVoice::get_EvNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa74916c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"get_EvNumber", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LocalVoice._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::LocalVoice::*)()>(&::Photon::Voice::LocalVoice::_ctor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xa749174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LocalVoice._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::LocalVoice::*)(::Photon::Voice::VoiceClient*, ::Photon::Voice::IEncoder*, uint8_t, ::Photon::Voice::VoiceInfo, int32_t)>(&::Photon::Voice::LocalVoice::_ctor)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0xa749298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Voice::VoiceClient*>(), ::i2c::type_of<::Photon::Voice::IEncoder*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::Photon::Voice::VoiceInfo>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LocalVoice.get_shortName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Voice::LocalVoice::*)()>(&::Photon::Voice::LocalVoice::get_shortName)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa74960c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"get_shortName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LocalVoice.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Voice::LocalVoice::*)()>(&::Photon::Voice::LocalVoice::get_Name)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xa7497b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LocalVoice.get_LogPrefix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Voice::LocalVoice::*)()>(&::Photon::Voice::LocalVoice::get_LogPrefix)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa7495b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"get_LogPrefix", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LocalVoice.service
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::LocalVoice::*)()>(&::Photon::Voice::LocalVoice::service)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa74996c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                    {::i2c::class_of<::Photon::Voice::LocalVoice*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LocalVoice.sendConfigFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::LocalVoice::*)(int32_t)>(&::Photon::Voice::LocalVoice::sendConfigFrame)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0xa749e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"sendConfigFrame", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LocalVoice.sendFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::LocalVoice::*)(::System::ArraySegment_1<uint8_t>, ::Photon::Voice::FrameFlags)>(&::Photon::Voice::LocalVoice::sendFrame)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0xa749b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"sendFrame", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<::Photon::Voice::FrameFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LocalVoice.sendFrame0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::LocalVoice::*)(::System::ArraySegment_1<uint8_t>, ::Photon::Voice::FrameFlags, int32_t, bool)>(&::Photon::Voice::LocalVoice::sendFrame0)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0xa74a05c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"sendFrame0", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<::Photon::Voice::FrameFlags>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LocalVoice.RemoveSelf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::LocalVoice::*)()>(&::Photon::Voice::LocalVoice::RemoveSelf)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa74a268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"RemoveSelf", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LocalVoice.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::LocalVoice::*)()>(&::Photon::Voice::LocalVoice::Dispose)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa74a548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                    {::i2c::class_of<::Photon::Voice::LocalVoice*>(), 6}
                ));
    return ___internal_method;
  }
};
constexpr uint8_t& Photon::Voice::LocalVoice::__cordl_internal_get__InterestGroup_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InterestGroup_k__BackingField;
}
constexpr uint8_t const& Photon::Voice::LocalVoice::__cordl_internal_get__InterestGroup_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InterestGroup_k__BackingField;
}
constexpr void Photon::Voice::LocalVoice::__cordl_internal_set__InterestGroup_k__BackingField(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____InterestGroup_k__BackingField = value;
}
constexpr bool& Photon::Voice::LocalVoice::__cordl_internal_get_transmitEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transmitEnabled;
}
constexpr bool const& Photon::Voice::LocalVoice::__cordl_internal_get_transmitEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transmitEnabled;
}
constexpr void Photon::Voice::LocalVoice::__cordl_internal_set_transmitEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transmitEnabled = value;
}
constexpr int32_t& Photon::Voice::LocalVoice::__cordl_internal_get__FramesSent_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FramesSent_k__BackingField;
}
constexpr int32_t const& Photon::Voice::LocalVoice::__cordl_internal_get__FramesSent_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FramesSent_k__BackingField;
}
constexpr void Photon::Voice::LocalVoice::__cordl_internal_set__FramesSent_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FramesSent_k__BackingField = value;
}
constexpr int32_t& Photon::Voice::LocalVoice::__cordl_internal_get__FramesSentBytes_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FramesSentBytes_k__BackingField;
}
constexpr int32_t const& Photon::Voice::LocalVoice::__cordl_internal_get__FramesSentBytes_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FramesSentBytes_k__BackingField;
}
constexpr void Photon::Voice::LocalVoice::__cordl_internal_set__FramesSentBytes_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FramesSentBytes_k__BackingField = value;
}
constexpr bool& Photon::Voice::LocalVoice::__cordl_internal_get__Reliable_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Reliable_k__BackingField;
}
constexpr bool const& Photon::Voice::LocalVoice::__cordl_internal_get__Reliable_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Reliable_k__BackingField;
}
constexpr void Photon::Voice::LocalVoice::__cordl_internal_set__Reliable_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Reliable_k__BackingField = value;
}
constexpr bool& Photon::Voice::LocalVoice::__cordl_internal_get__Encrypt_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Encrypt_k__BackingField;
}
constexpr bool const& Photon::Voice::LocalVoice::__cordl_internal_get__Encrypt_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Encrypt_k__BackingField;
}
constexpr void Photon::Voice::LocalVoice::__cordl_internal_set__Encrypt_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Encrypt_k__BackingField = value;
}
constexpr ::Photon::Voice::IServiceable*& Photon::Voice::LocalVoice::__cordl_internal_get__LocalUserServiceable_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LocalUserServiceable_k__BackingField;
}
constexpr ::Photon::Voice::IServiceable* const& Photon::Voice::LocalVoice::__cordl_internal_get__LocalUserServiceable_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LocalUserServiceable_k__BackingField;
}
constexpr void Photon::Voice::LocalVoice::__cordl_internal_set__LocalUserServiceable_k__BackingField(::Photon::Voice::IServiceable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LocalUserServiceable_k__BackingField = value;
}
constexpr bool& Photon::Voice::LocalVoice::__cordl_internal_get_debugEchoMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugEchoMode;
}
constexpr bool const& Photon::Voice::LocalVoice::__cordl_internal_get_debugEchoMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugEchoMode;
}
constexpr void Photon::Voice::LocalVoice::__cordl_internal_set_debugEchoMode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugEchoMode = value;
}
constexpr ::Photon::Voice::VoiceInfo& Photon::Voice::LocalVoice::__cordl_internal_get_info()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___info;
}
constexpr ::Photon::Voice::VoiceInfo const& Photon::Voice::LocalVoice::__cordl_internal_get_info() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___info;
}
constexpr void Photon::Voice::LocalVoice::__cordl_internal_set_info(::Photon::Voice::VoiceInfo  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___info = value;
}
constexpr ::Photon::Voice::IEncoder*& Photon::Voice::LocalVoice::__cordl_internal_get_encoder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___encoder;
}
constexpr ::Photon::Voice::IEncoder* const& Photon::Voice::LocalVoice::__cordl_internal_get_encoder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___encoder;
}
constexpr void Photon::Voice::LocalVoice::__cordl_internal_set_encoder(::Photon::Voice::IEncoder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___encoder = value;
}
constexpr uint8_t& Photon::Voice::LocalVoice::__cordl_internal_get_id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr uint8_t const& Photon::Voice::LocalVoice::__cordl_internal_get_id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr void Photon::Voice::LocalVoice::__cordl_internal_set_id(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___id = value;
}
constexpr int32_t& Photon::Voice::LocalVoice::__cordl_internal_get_channelId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channelId;
}
constexpr int32_t const& Photon::Voice::LocalVoice::__cordl_internal_get_channelId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channelId;
}
constexpr void Photon::Voice::LocalVoice::__cordl_internal_set_channelId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___channelId = value;
}
constexpr uint8_t& Photon::Voice::LocalVoice::__cordl_internal_get_evNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___evNumber;
}
constexpr uint8_t const& Photon::Voice::LocalVoice::__cordl_internal_get_evNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___evNumber;
}
constexpr void Photon::Voice::LocalVoice::__cordl_internal_set_evNumber(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___evNumber = value;
}
constexpr ::Photon::Voice::VoiceClient*& Photon::Voice::LocalVoice::__cordl_internal_get_voiceClient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceClient;
}
constexpr ::Photon::Voice::VoiceClient* const& Photon::Voice::LocalVoice::__cordl_internal_get_voiceClient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceClient;
}
constexpr void Photon::Voice::LocalVoice::__cordl_internal_set_voiceClient(::Photon::Voice::VoiceClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voiceClient = value;
}
constexpr ::System::ArraySegment_1<uint8_t>& Photon::Voice::LocalVoice::__cordl_internal_get_configFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___configFrame;
}
constexpr ::System::ArraySegment_1<uint8_t> const& Photon::Voice::LocalVoice::__cordl_internal_get_configFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___configFrame;
}
constexpr void Photon::Voice::LocalVoice::__cordl_internal_set_configFrame(::System::ArraySegment_1<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___configFrame = value;
}
constexpr bool& Photon::Voice::LocalVoice::__cordl_internal_get_disposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disposed;
}
constexpr bool const& Photon::Voice::LocalVoice::__cordl_internal_get_disposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disposed;
}
constexpr void Photon::Voice::LocalVoice::__cordl_internal_set_disposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disposed = value;
}
constexpr ::System::Object*& Photon::Voice::LocalVoice::__cordl_internal_get_disposeLock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disposeLock;
}
constexpr ::System::Object* const& Photon::Voice::LocalVoice::__cordl_internal_get_disposeLock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disposeLock;
}
constexpr void Photon::Voice::LocalVoice::__cordl_internal_set_disposeLock(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disposeLock = value;
}
constexpr int32_t& Photon::Voice::LocalVoice::__cordl_internal_get_lastTransmitTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTransmitTime;
}
constexpr int32_t const& Photon::Voice::LocalVoice::__cordl_internal_get_lastTransmitTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTransmitTime;
}
constexpr void Photon::Voice::LocalVoice::__cordl_internal_set_lastTransmitTime(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastTransmitTime = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<uint8_t,int32_t>*& Photon::Voice::LocalVoice::__cordl_internal_get_eventTimestamps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventTimestamps;
}
constexpr ::System::Collections::Generic::Dictionary_2<uint8_t,int32_t>* const& Photon::Voice::LocalVoice::__cordl_internal_get_eventTimestamps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventTimestamps;
}
constexpr void Photon::Voice::LocalVoice::__cordl_internal_set_eventTimestamps(::System::Collections::Generic::Dictionary_2<uint8_t,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eventTimestamps = value;
}
constexpr ::Photon::Voice::SpacingProfile*& Photon::Voice::LocalVoice::__cordl_internal_get_sendSpacingProfile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendSpacingProfile;
}
constexpr ::Photon::Voice::SpacingProfile* const& Photon::Voice::LocalVoice::__cordl_internal_get_sendSpacingProfile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendSpacingProfile;
}
constexpr void Photon::Voice::LocalVoice::__cordl_internal_set_sendSpacingProfile(::Photon::Voice::SpacingProfile*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sendSpacingProfile = value;
}
inline uint8_t Photon::Voice::LocalVoice::get_Group()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"get_Group", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline void Photon::Voice::LocalVoice::set_Group(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"set_Group", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint8_t Photon::Voice::LocalVoice::get_InterestGroup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"get_InterestGroup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline void Photon::Voice::LocalVoice::set_InterestGroup(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"set_InterestGroup", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Photon::Voice::VoiceInfo Photon::Voice::LocalVoice::get_Info()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"get_Info", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::VoiceInfo>(this, ___internal_method);
}
inline bool Photon::Voice::LocalVoice::get_TransmitEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"get_TransmitEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::LocalVoice::set_TransmitEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"set_TransmitEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Voice::LocalVoice::get_IsCurrentlyTransmitting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"get_IsCurrentlyTransmitting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Photon::Voice::LocalVoice::get_FramesSent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"get_FramesSent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Photon::Voice::LocalVoice::set_FramesSent(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"set_FramesSent", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Photon::Voice::LocalVoice::get_FramesSentBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"get_FramesSentBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Photon::Voice::LocalVoice::set_FramesSentBytes(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"set_FramesSentBytes", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Voice::LocalVoice::get_Reliable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"get_Reliable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::LocalVoice::set_Reliable(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"set_Reliable", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Voice::LocalVoice::get_Encrypt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"get_Encrypt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::LocalVoice::set_Encrypt(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"set_Encrypt", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Photon::Voice::IServiceable* Photon::Voice::LocalVoice::get_LocalUserServiceable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"get_LocalUserServiceable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::IServiceable*>(this, ___internal_method);
}
inline void Photon::Voice::LocalVoice::set_LocalUserServiceable(::Photon::Voice::IServiceable*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"set_LocalUserServiceable", {}, {::i2c::type_of<::Photon::Voice::IServiceable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Voice::LocalVoice::get_DebugEchoMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"get_DebugEchoMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::LocalVoice::set_DebugEchoMode(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"set_DebugEchoMode", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Photon::Voice::LocalVoice::SendSpacingProfileStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"SendSpacingProfileStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Photon::Voice::LocalVoice::get_SendSpacingProfileDump()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"get_SendSpacingProfileDump", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t Photon::Voice::LocalVoice::get_SendSpacingProfileMax()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"get_SendSpacingProfileMax", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline uint8_t Photon::Voice::LocalVoice::get_ID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"get_ID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline uint8_t Photon::Voice::LocalVoice::get_EvNumber()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"get_EvNumber", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline void Photon::Voice::LocalVoice::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::LocalVoice::_ctor(::Photon::Voice::VoiceClient*  voiceClient, ::Photon::Voice::IEncoder*  encoder, uint8_t  id, ::Photon::Voice::VoiceInfo  voiceInfo, int32_t  channelId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Voice::VoiceClient*>(), ::i2c::type_of<::Photon::Voice::IEncoder*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::Photon::Voice::VoiceInfo>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, voiceClient, encoder, id, voiceInfo, channelId);
}
inline ::StringW Photon::Voice::LocalVoice::get_shortName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"get_shortName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Photon::Voice::LocalVoice::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Photon::Voice::LocalVoice::get_LogPrefix()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"get_LogPrefix", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Photon::Voice::LocalVoice::service()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::LocalVoice*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::LocalVoice::sendConfigFrame(int32_t  targetPlayerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"sendConfigFrame", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPlayerId);
}
inline void Photon::Voice::LocalVoice::sendFrame(::System::ArraySegment_1<uint8_t>  compressed, ::Photon::Voice::FrameFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"sendFrame", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<::Photon::Voice::FrameFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, compressed, flags);
}
inline void Photon::Voice::LocalVoice::sendFrame0(::System::ArraySegment_1<uint8_t>  compressed, ::Photon::Voice::FrameFlags  flags, int32_t  targetPlayerId, bool  reliable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"sendFrame0", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<::Photon::Voice::FrameFlags>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, compressed, flags, targetPlayerId, reliable);
}
inline void Photon::Voice::LocalVoice::RemoveSelf()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoice*>(),
                        {"RemoveSelf", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::LocalVoice::Dispose()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::LocalVoice*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::LocalVoice* Photon::Voice::LocalVoice::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::LocalVoice*>());
}
inline ::Photon::Voice::LocalVoice* Photon::Voice::LocalVoice::New_ctor(::Photon::Voice::VoiceClient*  voiceClient, ::Photon::Voice::IEncoder*  encoder, uint8_t  id, ::Photon::Voice::VoiceInfo  voiceInfo, int32_t  channelId)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::LocalVoice*>(voiceClient, encoder, id, voiceInfo, channelId));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Photon::Voice::LocalVoice::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Photon::Voice::LocalVoice::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Photon::Voice::LocalVoice::LocalVoice()   {
}
