#pragma once
// IWYU pragma private; include "GlobalNamespace/VODPlayer.hpp"
#include "GlobalNamespace/zzzz__VODPlayer_State_impl.hpp"
#include "GlobalNamespace/zzzz__VODPlayer_VODStreamSchedule_impl.hpp"
#include "GlobalNamespace/zzzz__VODPlayer_VODStream_VODStreamChannel_impl.hpp"
#include "GlobalNamespace/zzzz__VODPlayer_VODStream_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__VODPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "GlobalNamespace/zzzz__MothershipError_def.hpp"
#include "GlobalNamespace/zzzz__PlayerPrefFlags_Flag_def.hpp"
#include "GlobalNamespace/zzzz__SharedDownloadableFileResult_def.hpp"
#include "GlobalNamespace/zzzz__VODPlayer_State_def.hpp"
#include "GlobalNamespace/zzzz__VODPlayer_VODHourlyStream_def.hpp"
#include "GlobalNamespace/zzzz__VODPlayer_VODNextStreamData_def.hpp"
#include "GlobalNamespace/zzzz__VODPlayer_VODStreamSchedule_def.hpp"
#include "GlobalNamespace/zzzz__VODPlayer_VODStream_VODStreamChannel_def.hpp"
#include "GlobalNamespace/zzzz__VODPlayer_VODStream_def.hpp"
#include "GlobalNamespace/zzzz__VODPlayer__GetCachedFile_d__38_def.hpp"
#include "GlobalNamespace/zzzz__VODPlayer__OnEnable_d__24_def.hpp"
#include "GlobalNamespace/zzzz__VODPlayer__StartImagePlayback_d__48_def.hpp"
#include "GlobalNamespace/zzzz__VODPlayer__StartVideoPlayback_d__49_def.hpp"
#include "GlobalNamespace/zzzz__VODPlayer__waitOnServerTimeAndSchedule_d__26_def.hpp"
#include "GlobalNamespace/zzzz__VODPlayer_def.hpp"
#include "GlobalNamespace/zzzz__VODTarget_def.hpp"
#include "KID/Model/zzzz__Permission_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "UnityEngine/Video/zzzz__VideoPlayer_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VODPlayer.get_StandbyMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (*)()>(&::GlobalNamespace::VODPlayer::get_StandbyMaterial)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5c06dec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"get_StandbyMaterial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VODPlayer.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VODPlayer::*)()>(&::GlobalNamespace::VODPlayer::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5c06e34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VODPlayer.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VODPlayer::*)()>(&::GlobalNamespace::VODPlayer::OnEnable)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5c06e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VODPlayer.PlayerPreFlagChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VODPlayer::*)(::GlobalNamespace::PlayerPrefFlags_Flag, bool)>(&::GlobalNamespace::VODPlayer::PlayerPreFlagChange)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c06f34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"PlayerPreFlagChange", {}, {::i2c::type_of<::GlobalNamespace::PlayerPrefFlags_Flag>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VODPlayer.waitOnServerTimeAndSchedule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VODPlayer::*)()>(&::GlobalNamespace::VODPlayer::waitOnServerTimeAndSchedule)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5c06f48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"waitOnServerTimeAndSchedule", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VODPlayer.getStandby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::GlobalNamespace::VODPlayer::*)(::GlobalNamespace::VODTarget*)>(&::GlobalNamespace::VODPlayer::getStandby)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5c06ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"getStandby", {}, {::i2c::type_of<::GlobalNamespace::VODTarget*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VODPlayer.VODTarget_AlertEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VODPlayer::*)(::GlobalNamespace::VODTarget*)>(&::GlobalNamespace::VODPlayer::VODTarget_AlertEnabled)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x5c07070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"VODTarget_AlertEnabled", {}, {::i2c::type_of<::GlobalNamespace::VODTarget*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VODPlayer.VODTarget_AlertDisabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VODPlayer::*)(::GlobalNamespace::VODTarget*)>(&::GlobalNamespace::VODPlayer::VODTarget_AlertDisabled)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5c0781c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"VODTarget_AlertDisabled", {}, {::i2c::type_of<::GlobalNamespace::VODTarget*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VODPlayer.Player_loopPointReached
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VODPlayer::*)(::UnityEngine::Video::VideoPlayer*)>(&::GlobalNamespace::VODPlayer::Player_loopPointReached)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5c079ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"Player_loopPointReached", {}, {::i2c::type_of<::UnityEngine::Video::VideoPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VODPlayer.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VODPlayer::*)()>(&::GlobalNamespace::VODPlayer::OnDisable)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x5c07b28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VODPlayer.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VODPlayer::*)()>(&::GlobalNamespace::VODPlayer::OnDestroy)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x5c07e58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VODPlayer.IGorillaSliceableSimple_SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VODPlayer::*)()>(&::GlobalNamespace::VODPlayer::IGorillaSliceableSimple_SliceUpdate)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x5c08118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"IGorillaSliceableSimple.SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VODPlayer.getPriorityChannels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel>* (::GlobalNamespace::VODPlayer::*)()>(&::GlobalNamespace::VODPlayer::getPriorityChannels)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5c08bf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"getPriorityChannels", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VODPlayer.getPriorityChannelArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel> (::GlobalNamespace::VODPlayer::*)()>(&::GlobalNamespace::VODPlayer::getPriorityChannelArray)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5c072b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"getPriorityChannelArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VODPlayer.CheckForCachedFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::VODPlayer::*)(::StringW, ::StringW, ::by_ref<::StringW>)>(&::GlobalNamespace::VODPlayer::CheckForCachedFile)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x5c08c7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"CheckForCachedFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VODPlayer.GetCachedFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::GlobalNamespace::VODPlayer::*)(::StringW, ::StringW, ::StringW)>(&::GlobalNamespace::VODPlayer::GetCachedFile)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5c08e68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"GetCachedFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VODPlayer.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VODPlayer::*)()>(&::GlobalNamespace::VODPlayer::Start)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x5c08fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VODPlayer.PositionAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VODPlayer::*)()>(&::GlobalNamespace::VODPlayer::PositionAudio)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x5c0852c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"PositionAudio", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VODPlayer.PlayPreviouStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VODPlayer::*)()>(&::GlobalNamespace::VODPlayer::PlayPreviouStream)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x5c0758c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"PlayPreviouStream", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VODPlayer.StartPlayback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VODPlayer::*)(::GlobalNamespace::VODPlayer_VODStream, double_t)>(&::GlobalNamespace::VODPlayer::StartPlayback)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x5c08900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"StartPlayback", {}, {::i2c::type_of<::GlobalNamespace::VODPlayer_VODStream>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VODPlayer.StartImagePlayback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VODPlayer::*)(::StringW, ::StringW, int32_t, ::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel, double_t, ::StringW)>(&::GlobalNamespace::VODPlayer::StartImagePlayback)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5c093c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"StartImagePlayback", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VODPlayer.StartVideoPlayback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VODPlayer::*)(::StringW, ::StringW, ::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel, double_t, ::StringW)>(&::GlobalNamespace::VODPlayer::StartVideoPlayback)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5c092b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"StartVideoPlayback", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VODPlayer.onTD
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VODPlayer::*)(::StringW)>(&::GlobalNamespace::VODPlayer::onTD)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x5c094e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"onTD", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VODPlayer.onTDError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VODPlayer::*)(::PlayFab::PlayFabError*)>(&::GlobalNamespace::VODPlayer::onTDError)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c0970c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"onTDError", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VODPlayer.GetNextStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::VODPlayer_VODNextStreamData (::GlobalNamespace::VODPlayer::*)(::ArrayW<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel>)>(&::GlobalNamespace::VODPlayer::GetNextStream)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5c07408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"GetNextStream", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VODPlayer.GetNextStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::VODPlayer_VODNextStreamData (::GlobalNamespace::VODPlayer::*)(::ArrayW<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel>, ::System::DateTime)>(&::GlobalNamespace::VODPlayer::GetNextStream)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x5c097a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"GetNextStream", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel>>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VODPlayer.GetSchedule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::GlobalNamespace::VODPlayer_VODStreamSchedule, ::ArrayW<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel>)>(&::GlobalNamespace::VODPlayer::GetSchedule)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5c09b5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"GetSchedule", {}, {::i2c::type_of<::GlobalNamespace::VODPlayer_VODStreamSchedule>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VODPlayer.GetSchedule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::GlobalNamespace::VODPlayer_VODStreamSchedule, ::ArrayW<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel>, ::System::DateTime)>(&::GlobalNamespace::VODPlayer::GetSchedule)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0x5c09cdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"GetSchedule", {}, {::i2c::type_of<::GlobalNamespace::VODPlayer_VODStreamSchedule>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel>>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VODPlayer.GetSchedule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel,::System::Collections::Generic::List_1<::StringW>*>* (*)(::GlobalNamespace::VODPlayer_VODStreamSchedule)>(&::GlobalNamespace::VODPlayer::GetSchedule)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5c0a16c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"GetSchedule", {}, {::i2c::type_of<::GlobalNamespace::VODPlayer_VODStreamSchedule>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VODPlayer.GetSchedule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel,::System::Collections::Generic::List_1<::StringW>*>* (*)(::GlobalNamespace::VODPlayer_VODStreamSchedule, ::System::DateTime)>(&::GlobalNamespace::VODPlayer::GetSchedule)> {
  constexpr static std::size_t size = 0x56c;
  constexpr static std::size_t addrs = 0x5c0a2dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"GetSchedule", {}, {::i2c::type_of<::GlobalNamespace::VODPlayer_VODStreamSchedule>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VODPlayer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VODPlayer::*)()>(&::GlobalNamespace::VODPlayer::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5c0a848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Video::VideoPlayer>& GlobalNamespace::VODPlayer::__cordl_internal_get_player()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___player;
}
constexpr ::UnityW<::UnityEngine::Video::VideoPlayer> const& GlobalNamespace::VODPlayer::__cordl_internal_get_player() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___player;
}
constexpr void GlobalNamespace::VODPlayer::__cordl_internal_set_player(::UnityW<::UnityEngine::Video::VideoPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___player = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::VODPlayer::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::VODPlayer::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::VODPlayer::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::GlobalNamespace::VODPlayer_VODStreamSchedule& GlobalNamespace::VODPlayer::__cordl_internal_get_schedule()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___schedule;
}
constexpr ::GlobalNamespace::VODPlayer_VODStreamSchedule const& GlobalNamespace::VODPlayer::__cordl_internal_get_schedule() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___schedule;
}
constexpr void GlobalNamespace::VODPlayer::__cordl_internal_set_schedule(::GlobalNamespace::VODPlayer_VODStreamSchedule  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___schedule = value;
}
constexpr ::ArrayW<::StringW>& GlobalNamespace::VODPlayer::__cordl_internal_get_titleDataKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___titleDataKey;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::VODPlayer::__cordl_internal_get_titleDataKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___titleDataKey;
}
constexpr void GlobalNamespace::VODPlayer::__cordl_internal_set_titleDataKey(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___titleDataKey = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::VODPlayer::__cordl_internal_get_standbyMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___standbyMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::VODPlayer::__cordl_internal_get_standbyMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___standbyMaterial;
}
constexpr void GlobalNamespace::VODPlayer::__cordl_internal_set_standbyMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___standbyMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::VODPlayer::__cordl_internal_get_playBackMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playBackMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::VODPlayer::__cordl_internal_get_playBackMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playBackMaterial;
}
constexpr void GlobalNamespace::VODPlayer::__cordl_internal_set_playBackMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playBackMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::VODPlayer::__cordl_internal_get_busyMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___busyMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::VODPlayer::__cordl_internal_get_busyMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___busyMaterial;
}
constexpr void GlobalNamespace::VODPlayer::__cordl_internal_set_busyMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___busyMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::VODPlayer::__cordl_internal_get_imageMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___imageMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::VODPlayer::__cordl_internal_get_imageMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___imageMaterial;
}
constexpr void GlobalNamespace::VODPlayer::__cordl_internal_set_imageMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___imageMaterial = value;
}
constexpr ::ArrayW<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel>& GlobalNamespace::VODPlayer::__cordl_internal_get_voiceChatPermRequired()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceChatPermRequired;
}
constexpr ::ArrayW<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel> const& GlobalNamespace::VODPlayer::__cordl_internal_get_voiceChatPermRequired() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceChatPermRequired;
}
constexpr void GlobalNamespace::VODPlayer::__cordl_internal_set_voiceChatPermRequired(::ArrayW<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voiceChatPermRequired = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VODTarget>>*& GlobalNamespace::VODPlayer::__cordl_internal_get_targets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targets;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VODTarget>>* const& GlobalNamespace::VODPlayer::__cordl_internal_get_targets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targets;
}
constexpr void GlobalNamespace::VODPlayer::__cordl_internal_set_targets(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VODTarget>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targets = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel>*& GlobalNamespace::VODPlayer::__cordl_internal_get_voiceChatPermRequiredList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceChatPermRequiredList;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel>* const& GlobalNamespace::VODPlayer::__cordl_internal_get_voiceChatPermRequiredList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceChatPermRequiredList;
}
constexpr void GlobalNamespace::VODPlayer::__cordl_internal_set_voiceChatPermRequiredList(::System::Collections::Generic::List_1<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voiceChatPermRequiredList = value;
}
constexpr int32_t& GlobalNamespace::VODPlayer::__cordl_internal_get_lastCheck()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastCheck;
}
constexpr int32_t const& GlobalNamespace::VODPlayer::__cordl_internal_get_lastCheck() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastCheck;
}
constexpr void GlobalNamespace::VODPlayer::__cordl_internal_set_lastCheck(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastCheck = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::VODPlayer::__cordl_internal_get_cache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cache;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::VODPlayer::__cordl_internal_get_cache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cache;
}
constexpr void GlobalNamespace::VODPlayer::__cordl_internal_set_cache(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cache = value;
}
constexpr bool& GlobalNamespace::VODPlayer::__cordl_internal_get_playerBusy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerBusy;
}
constexpr bool const& GlobalNamespace::VODPlayer::__cordl_internal_get_playerBusy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerBusy;
}
constexpr void GlobalNamespace::VODPlayer::__cordl_internal_set_playerBusy(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerBusy = value;
}
constexpr ::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel& GlobalNamespace::VODPlayer::__cordl_internal_get_playerChannel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerChannel;
}
constexpr ::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel const& GlobalNamespace::VODPlayer::__cordl_internal_get_playerChannel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerChannel;
}
constexpr void GlobalNamespace::VODPlayer::__cordl_internal_set_playerChannel(::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerChannel = value;
}
constexpr int32_t& GlobalNamespace::VODPlayer::__cordl_internal_get_tdGot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tdGot;
}
constexpr int32_t const& GlobalNamespace::VODPlayer::__cordl_internal_get_tdGot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tdGot;
}
constexpr void GlobalNamespace::VODPlayer::__cordl_internal_set_tdGot(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tdGot = value;
}
constexpr ::KID::Model::Permission*& GlobalNamespace::VODPlayer::__cordl_internal_get_voiceChatPerm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceChatPerm;
}
constexpr ::KID::Model::Permission* const& GlobalNamespace::VODPlayer::__cordl_internal_get_voiceChatPerm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceChatPerm;
}
constexpr void GlobalNamespace::VODPlayer::__cordl_internal_set_voiceChatPerm(::KID::Model::Permission*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voiceChatPerm = value;
}
constexpr bool& GlobalNamespace::VODPlayer::__cordl_internal_get_playerPrefMuted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerPrefMuted;
}
constexpr bool const& GlobalNamespace::VODPlayer::__cordl_internal_get_playerPrefMuted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerPrefMuted;
}
constexpr void GlobalNamespace::VODPlayer::__cordl_internal_set_playerPrefMuted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerPrefMuted = value;
}
inline void GlobalNamespace::VODPlayer::setStaticF__standbyMaterial(::UnityW<::UnityEngine::Material>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Material>, "_standbyMaterial", ::GlobalNamespace::VODPlayer*>(std::forward<::UnityW<::UnityEngine::Material>>(value));
}
inline ::UnityW<::UnityEngine::Material> GlobalNamespace::VODPlayer::getStaticF__standbyMaterial()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Material>, "_standbyMaterial", ::GlobalNamespace::VODPlayer*>();
}
inline void GlobalNamespace::VODPlayer::setStaticF_OnCrash(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "OnCrash", ::GlobalNamespace::VODPlayer*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::VODPlayer::getStaticF_OnCrash()  {
return ::cordl_internals::getStaticField<::System::Action*, "OnCrash", ::GlobalNamespace::VODPlayer*>();
}
inline void GlobalNamespace::VODPlayer::setStaticF_state(::GlobalNamespace::VODPlayer_State  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::VODPlayer_State, "state", ::GlobalNamespace::VODPlayer*>(std::forward<::GlobalNamespace::VODPlayer_State>(value));
}
inline ::GlobalNamespace::VODPlayer_State GlobalNamespace::VODPlayer::getStaticF_state()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::VODPlayer_State, "state", ::GlobalNamespace::VODPlayer*>();
}
inline ::UnityW<::UnityEngine::Material> GlobalNamespace::VODPlayer::get_StandbyMaterial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"get_StandbyMaterial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::VODPlayer::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VODPlayer::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VODPlayer::PlayerPreFlagChange(::GlobalNamespace::PlayerPrefFlags_Flag  flag, bool  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"PlayerPreFlagChange", {}, {::i2c::type_of<::GlobalNamespace::PlayerPrefFlags_Flag>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, flag, v);
}
inline void GlobalNamespace::VODPlayer::waitOnServerTimeAndSchedule()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"waitOnServerTimeAndSchedule", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> GlobalNamespace::VODPlayer::getStandby(::GlobalNamespace::VODTarget*  o)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"getStandby", {}, {::i2c::type_of<::GlobalNamespace::VODTarget*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method, o);
}
inline void GlobalNamespace::VODPlayer::VODTarget_AlertEnabled(::GlobalNamespace::VODTarget*  o)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"VODTarget_AlertEnabled", {}, {::i2c::type_of<::GlobalNamespace::VODTarget*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline void GlobalNamespace::VODPlayer::VODTarget_AlertDisabled(::GlobalNamespace::VODTarget*  o)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"VODTarget_AlertDisabled", {}, {::i2c::type_of<::GlobalNamespace::VODTarget*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline void GlobalNamespace::VODPlayer::Player_loopPointReached(::UnityEngine::Video::VideoPlayer*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"Player_loopPointReached", {}, {::i2c::type_of<::UnityEngine::Video::VideoPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline void GlobalNamespace::VODPlayer::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VODPlayer::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VODPlayer::IGorillaSliceableSimple_SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"IGorillaSliceableSimple.SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel>* GlobalNamespace::VODPlayer::getPriorityChannels()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"getPriorityChannels", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel>*>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel> GlobalNamespace::VODPlayer::getPriorityChannelArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"getPriorityChannelArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel>>(this, ___internal_method);
}
inline bool GlobalNamespace::VODPlayer::CheckForCachedFile(::StringW  fileId, ::StringW  extension, ::by_ref<::StringW>  filePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"CheckForCachedFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fileId, extension, filePath);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* GlobalNamespace::VODPlayer::GetCachedFile(::StringW  url, ::StringW  fileId, ::StringW  extension)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"GetCachedFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method, url, fileId, extension);
}
inline void GlobalNamespace::VODPlayer::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VODPlayer::PositionAudio()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"PositionAudio", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VODPlayer::PlayPreviouStream()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"PlayPreviouStream", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VODPlayer::StartPlayback(::GlobalNamespace::VODPlayer_VODStream  str, double_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"StartPlayback", {}, {::i2c::type_of<::GlobalNamespace::VODPlayer_VODStream>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, str, time);
}
inline void GlobalNamespace::VODPlayer::StartImagePlayback(::StringW  url, ::StringW  fileId, int32_t  duration, ::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel  ch, double_t  time, ::StringW  cachedUrl)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"StartImagePlayback", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, url, fileId, duration, ch, time, cachedUrl);
}
inline void GlobalNamespace::VODPlayer::StartVideoPlayback(::StringW  url, ::StringW  fileId, ::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel  ch, double_t  time, ::StringW  cachedUrl)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"StartVideoPlayback", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, url, fileId, ch, time, cachedUrl);
}
inline void GlobalNamespace::VODPlayer::onTD(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"onTD", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline void GlobalNamespace::VODPlayer::onTDError(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"onTDError", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline ::GlobalNamespace::VODPlayer_VODNextStreamData GlobalNamespace::VODPlayer::GetNextStream(::ArrayW<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel>  ch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"GetNextStream", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::VODPlayer_VODNextStreamData>(this, ___internal_method, ch);
}
inline ::GlobalNamespace::VODPlayer_VODNextStreamData GlobalNamespace::VODPlayer::GetNextStream(::ArrayW<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel>  ch, ::System::DateTime  now)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"GetNextStream", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel>>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::VODPlayer_VODNextStreamData>(this, ___internal_method, ch, now);
}
inline ::ArrayW<::StringW> GlobalNamespace::VODPlayer::GetSchedule(::GlobalNamespace::VODPlayer_VODStreamSchedule  schedule, ::ArrayW<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel>  ch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"GetSchedule", {}, {::i2c::type_of<::GlobalNamespace::VODPlayer_VODStreamSchedule>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, schedule, ch);
}
inline ::ArrayW<::StringW> GlobalNamespace::VODPlayer::GetSchedule(::GlobalNamespace::VODPlayer_VODStreamSchedule  schedule, ::ArrayW<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel>  ch, ::System::DateTime  now)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"GetSchedule", {}, {::i2c::type_of<::GlobalNamespace::VODPlayer_VODStreamSchedule>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel>>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, schedule, ch, now);
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel,::System::Collections::Generic::List_1<::StringW>*>* GlobalNamespace::VODPlayer::GetSchedule(::GlobalNamespace::VODPlayer_VODStreamSchedule  schedule)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"GetSchedule", {}, {::i2c::type_of<::GlobalNamespace::VODPlayer_VODStreamSchedule>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel,::System::Collections::Generic::List_1<::StringW>*>*>(nullptr, ___internal_method, schedule);
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel,::System::Collections::Generic::List_1<::StringW>*>* GlobalNamespace::VODPlayer::GetSchedule(::GlobalNamespace::VODPlayer_VODStreamSchedule  schedule, ::System::DateTime  now)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {"GetSchedule", {}, {::i2c::type_of<::GlobalNamespace::VODPlayer_VODStreamSchedule>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel,::System::Collections::Generic::List_1<::StringW>*>*>(nullptr, ___internal_method, schedule, now);
}
inline void GlobalNamespace::VODPlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VODPlayer* GlobalNamespace::VODPlayer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VODPlayer*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GlobalNamespace::VODPlayer::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GlobalNamespace::VODPlayer::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VODPlayer::VODPlayer()   {
}
//  Writing Method size for method: ::GlobalNamespace::VODPlayer___c__DisplayClass47_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VODPlayer___c__DisplayClass47_0::*)()>(&::GlobalNamespace::VODPlayer___c__DisplayClass47_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d04b34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer___c__DisplayClass47_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VODPlayer___c__DisplayClass47_0._StartPlayback_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VODPlayer___c__DisplayClass47_0::*)(::GlobalNamespace::SharedDownloadableFileResult*)>(&::GlobalNamespace::VODPlayer___c__DisplayClass47_0::_StartPlayback_b__0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5d04b3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer___c__DisplayClass47_0*>(),
                        {"<StartPlayback>b__0", {}, {::i2c::type_of<::GlobalNamespace::SharedDownloadableFileResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VODPlayer___c__DisplayClass47_0._StartPlayback_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VODPlayer___c__DisplayClass47_0::*)(::GlobalNamespace::MothershipError*, int32_t)>(&::GlobalNamespace::VODPlayer___c__DisplayClass47_0::_StartPlayback_b__1)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x5d04b8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer___c__DisplayClass47_0*>(),
                        {"<StartPlayback>b__1", {}, {::i2c::type_of<::GlobalNamespace::MothershipError*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VODPlayer___c__DisplayClass47_0._StartPlayback_b__2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VODPlayer___c__DisplayClass47_0::*)(::GlobalNamespace::SharedDownloadableFileResult*)>(&::GlobalNamespace::VODPlayer___c__DisplayClass47_0::_StartPlayback_b__2)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5d04d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer___c__DisplayClass47_0*>(),
                        {"<StartPlayback>b__2", {}, {::i2c::type_of<::GlobalNamespace::SharedDownloadableFileResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VODPlayer___c__DisplayClass47_0._StartPlayback_b__3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VODPlayer___c__DisplayClass47_0::*)(::GlobalNamespace::MothershipError*, int32_t)>(&::GlobalNamespace::VODPlayer___c__DisplayClass47_0::_StartPlayback_b__3)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x5d04de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer___c__DisplayClass47_0*>(),
                        {"<StartPlayback>b__3", {}, {::i2c::type_of<::GlobalNamespace::MothershipError*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::VODPlayer>& GlobalNamespace::VODPlayer___c__DisplayClass47_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::VODPlayer> const& GlobalNamespace::VODPlayer___c__DisplayClass47_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::VODPlayer___c__DisplayClass47_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::VODPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::VODPlayer_VODStream& GlobalNamespace::VODPlayer___c__DisplayClass47_0::__cordl_internal_get_str()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___str;
}
constexpr ::GlobalNamespace::VODPlayer_VODStream const& GlobalNamespace::VODPlayer___c__DisplayClass47_0::__cordl_internal_get_str() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___str;
}
constexpr void GlobalNamespace::VODPlayer___c__DisplayClass47_0::__cordl_internal_set_str(::GlobalNamespace::VODPlayer_VODStream  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___str = value;
}
constexpr double_t& GlobalNamespace::VODPlayer___c__DisplayClass47_0::__cordl_internal_get_time()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___time;
}
constexpr double_t const& GlobalNamespace::VODPlayer___c__DisplayClass47_0::__cordl_internal_get_time() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___time;
}
constexpr void GlobalNamespace::VODPlayer___c__DisplayClass47_0::__cordl_internal_set_time(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___time = value;
}
inline void GlobalNamespace::VODPlayer___c__DisplayClass47_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer___c__DisplayClass47_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VODPlayer___c__DisplayClass47_0::_StartPlayback_b__0(::GlobalNamespace::SharedDownloadableFileResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer___c__DisplayClass47_0*>(),
                        {"<StartPlayback>b__0", {}, {::i2c::type_of<::GlobalNamespace::SharedDownloadableFileResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void GlobalNamespace::VODPlayer___c__DisplayClass47_0::_StartPlayback_b__1(::GlobalNamespace::MothershipError*  error, int32_t  status)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer___c__DisplayClass47_0*>(),
                        {"<StartPlayback>b__1", {}, {::i2c::type_of<::GlobalNamespace::MothershipError*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error, status);
}
inline void GlobalNamespace::VODPlayer___c__DisplayClass47_0::_StartPlayback_b__2(::GlobalNamespace::SharedDownloadableFileResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer___c__DisplayClass47_0*>(),
                        {"<StartPlayback>b__2", {}, {::i2c::type_of<::GlobalNamespace::SharedDownloadableFileResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void GlobalNamespace::VODPlayer___c__DisplayClass47_0::_StartPlayback_b__3(::GlobalNamespace::MothershipError*  error, int32_t  status)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer___c__DisplayClass47_0*>(),
                        {"<StartPlayback>b__3", {}, {::i2c::type_of<::GlobalNamespace::MothershipError*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error, status);
}
inline ::GlobalNamespace::VODPlayer___c__DisplayClass47_0* GlobalNamespace::VODPlayer___c__DisplayClass47_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VODPlayer___c__DisplayClass47_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VODPlayer___c__DisplayClass47_0::VODPlayer___c__DisplayClass47_0()   {
}
