#pragma once
// IWYU pragma private; include "GorillaTag/Audio/LoudSpeakerNetwork.hpp"
#include "UnityEngine/zzzz__AudioSource_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTag/Audio/zzzz__LoudSpeakerNetwork_def.hpp"
#include "GlobalNamespace/zzzz__RigContainer_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTag/Audio/zzzz__GTRecorder_def.hpp"
#include "Photon/Voice/Unity/zzzz__Speaker_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GorillaTag::Audio::LoudSpeakerNetwork.get_SpeakerSources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::AudioSource>> (::GorillaTag::Audio::LoudSpeakerNetwork::*)()>(&::GorillaTag::Audio::LoudSpeakerNetwork::get_SpeakerSources)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d52f5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::LoudSpeakerNetwork*>(),
                        {"get_SpeakerSources", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::LoudSpeakerNetwork.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::LoudSpeakerNetwork::*)()>(&::GorillaTag::Audio::LoudSpeakerNetwork::Awake)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5d52f64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::LoudSpeakerNetwork*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::LoudSpeakerNetwork.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::LoudSpeakerNetwork::*)()>(&::GorillaTag::Audio::LoudSpeakerNetwork::Start)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5d5302c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::LoudSpeakerNetwork*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::LoudSpeakerNetwork.GetParentRigContainer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Audio::LoudSpeakerNetwork::*)(::by_ref<::GlobalNamespace::RigContainer*>)>(&::GorillaTag::Audio::LoudSpeakerNetwork::GetParentRigContainer)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5d53150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::LoudSpeakerNetwork*>(),
                        {"GetParentRigContainer", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::RigContainer*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::LoudSpeakerNetwork.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::LoudSpeakerNetwork::*)()>(&::GorillaTag::Audio::LoudSpeakerNetwork::OnEnable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5d53238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::LoudSpeakerNetwork*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::LoudSpeakerNetwork.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::LoudSpeakerNetwork::*)()>(&::GorillaTag::Audio::LoudSpeakerNetwork::OnDisable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5d53278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::LoudSpeakerNetwork*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::LoudSpeakerNetwork.AddSpeaker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::LoudSpeakerNetwork::*)(::Photon::Voice::Unity::Speaker*)>(&::GorillaTag::Audio::LoudSpeakerNetwork::AddSpeaker)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5d532b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::LoudSpeakerNetwork*>(),
                        {"AddSpeaker", {}, {::i2c::type_of<::Photon::Voice::Unity::Speaker*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::LoudSpeakerNetwork.RemoveSpeaker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::LoudSpeakerNetwork::*)(::Photon::Voice::Unity::Speaker*)>(&::GorillaTag::Audio::LoudSpeakerNetwork::RemoveSpeaker)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d5339c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::LoudSpeakerNetwork*>(),
                        {"RemoveSpeaker", {}, {::i2c::type_of<::Photon::Voice::Unity::Speaker*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::LoudSpeakerNetwork.StartBroadcastSpeakerOutput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::LoudSpeakerNetwork::*)(::GlobalNamespace::VRRig*)>(&::GorillaTag::Audio::LoudSpeakerNetwork::StartBroadcastSpeakerOutput)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5d52ae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::LoudSpeakerNetwork*>(),
                        {"StartBroadcastSpeakerOutput", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::LoudSpeakerNetwork.BroadcastLoudSpeakerNetwork
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::LoudSpeakerNetwork::*)(int32_t, bool)>(&::GorillaTag::Audio::LoudSpeakerNetwork::BroadcastLoudSpeakerNetwork)> {
  constexpr static std::size_t size = 0x52c;
  constexpr static std::size_t addrs = 0x5d533f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::LoudSpeakerNetwork*>(),
                        {"BroadcastLoudSpeakerNetwork", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::LoudSpeakerNetwork.StopBroadcastSpeakerOutput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::LoudSpeakerNetwork::*)(::GlobalNamespace::VRRig*)>(&::GorillaTag::Audio::LoudSpeakerNetwork::StopBroadcastSpeakerOutput)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5d52e7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::LoudSpeakerNetwork*>(),
                        {"StopBroadcastSpeakerOutput", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::LoudSpeakerNetwork.StopBroadcastLoudSpeakerNetwork
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::LoudSpeakerNetwork::*)(int32_t, bool)>(&::GorillaTag::Audio::LoudSpeakerNetwork::StopBroadcastLoudSpeakerNetwork)> {
  constexpr static std::size_t size = 0x52c;
  constexpr static std::size_t addrs = 0x5d53920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::LoudSpeakerNetwork*>(),
                        {"StopBroadcastLoudSpeakerNetwork", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::LoudSpeakerNetwork._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::LoudSpeakerNetwork::*)()>(&::GorillaTag::Audio::LoudSpeakerNetwork::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5d53e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::LoudSpeakerNetwork*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioSource>>& GorillaTag::Audio::LoudSpeakerNetwork::__cordl_internal_get__speakerSources()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____speakerSources;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioSource>> const& GorillaTag::Audio::LoudSpeakerNetwork::__cordl_internal_get__speakerSources() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____speakerSources;
}
constexpr void GorillaTag::Audio::LoudSpeakerNetwork::__cordl_internal_set__speakerSources(::ArrayW<::UnityW<::UnityEngine::AudioSource>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____speakerSources = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Photon::Voice::Unity::Speaker>>*& GorillaTag::Audio::LoudSpeakerNetwork::__cordl_internal_get__currentSpeakers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentSpeakers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Photon::Voice::Unity::Speaker>>* const& GorillaTag::Audio::LoudSpeakerNetwork::__cordl_internal_get__currentSpeakers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentSpeakers;
}
constexpr void GorillaTag::Audio::LoudSpeakerNetwork::__cordl_internal_set__currentSpeakers(::System::Collections::Generic::List_1<::UnityW<::Photon::Voice::Unity::Speaker>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentSpeakers = value;
}
constexpr int32_t& GorillaTag::Audio::LoudSpeakerNetwork::__cordl_internal_get__currentSpeakerActor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentSpeakerActor;
}
constexpr int32_t const& GorillaTag::Audio::LoudSpeakerNetwork::__cordl_internal_get__currentSpeakerActor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentSpeakerActor;
}
constexpr void GorillaTag::Audio::LoudSpeakerNetwork::__cordl_internal_set__currentSpeakerActor(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentSpeakerActor = value;
}
constexpr bool& GorillaTag::Audio::LoudSpeakerNetwork::__cordl_internal_get_ReparentLocalSpeaker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReparentLocalSpeaker;
}
constexpr bool const& GorillaTag::Audio::LoudSpeakerNetwork::__cordl_internal_get_ReparentLocalSpeaker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReparentLocalSpeaker;
}
constexpr void GorillaTag::Audio::LoudSpeakerNetwork::__cordl_internal_set_ReparentLocalSpeaker(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ReparentLocalSpeaker = value;
}
constexpr ::UnityW<::GlobalNamespace::RigContainer>& GorillaTag::Audio::LoudSpeakerNetwork::__cordl_internal_get__rigContainer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigContainer;
}
constexpr ::UnityW<::GlobalNamespace::RigContainer> const& GorillaTag::Audio::LoudSpeakerNetwork::__cordl_internal_get__rigContainer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigContainer;
}
constexpr void GorillaTag::Audio::LoudSpeakerNetwork::__cordl_internal_set__rigContainer(::UnityW<::GlobalNamespace::RigContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rigContainer = value;
}
constexpr ::UnityW<::GorillaTag::Audio::GTRecorder>& GorillaTag::Audio::LoudSpeakerNetwork::__cordl_internal_get__localRecorder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localRecorder;
}
constexpr ::UnityW<::GorillaTag::Audio::GTRecorder> const& GorillaTag::Audio::LoudSpeakerNetwork::__cordl_internal_get__localRecorder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localRecorder;
}
constexpr void GorillaTag::Audio::LoudSpeakerNetwork::__cordl_internal_set__localRecorder(::UnityW<::GorillaTag::Audio::GTRecorder>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localRecorder = value;
}
inline ::ArrayW<::UnityW<::UnityEngine::AudioSource>> GorillaTag::Audio::LoudSpeakerNetwork::get_SpeakerSources()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::LoudSpeakerNetwork*>(),
                        {"get_SpeakerSources", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::AudioSource>>>(this, ___internal_method);
}
inline void GorillaTag::Audio::LoudSpeakerNetwork::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::LoudSpeakerNetwork*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Audio::LoudSpeakerNetwork::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::LoudSpeakerNetwork*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTag::Audio::LoudSpeakerNetwork::GetParentRigContainer(::by_ref<::GlobalNamespace::RigContainer*>  rigContainer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::LoudSpeakerNetwork*>(),
                        {"GetParentRigContainer", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::RigContainer*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, rigContainer);
}
inline void GorillaTag::Audio::LoudSpeakerNetwork::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::LoudSpeakerNetwork*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Audio::LoudSpeakerNetwork::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::LoudSpeakerNetwork*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Audio::LoudSpeakerNetwork::AddSpeaker(::Photon::Voice::Unity::Speaker*  speaker)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::LoudSpeakerNetwork*>(),
                        {"AddSpeaker", {}, {::i2c::type_of<::Photon::Voice::Unity::Speaker*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, speaker);
}
inline void GorillaTag::Audio::LoudSpeakerNetwork::RemoveSpeaker(::Photon::Voice::Unity::Speaker*  speaker)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::LoudSpeakerNetwork*>(),
                        {"RemoveSpeaker", {}, {::i2c::type_of<::Photon::Voice::Unity::Speaker*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, speaker);
}
inline void GorillaTag::Audio::LoudSpeakerNetwork::StartBroadcastSpeakerOutput(::GlobalNamespace::VRRig*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::LoudSpeakerNetwork*>(),
                        {"StartBroadcastSpeakerOutput", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GorillaTag::Audio::LoudSpeakerNetwork::BroadcastLoudSpeakerNetwork(int32_t  actorNumber, bool  isLocal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::LoudSpeakerNetwork*>(),
                        {"BroadcastLoudSpeakerNetwork", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, actorNumber, isLocal);
}
inline void GorillaTag::Audio::LoudSpeakerNetwork::StopBroadcastSpeakerOutput(::GlobalNamespace::VRRig*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::LoudSpeakerNetwork*>(),
                        {"StopBroadcastSpeakerOutput", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GorillaTag::Audio::LoudSpeakerNetwork::StopBroadcastLoudSpeakerNetwork(int32_t  actorNumber, bool  isLocal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::LoudSpeakerNetwork*>(),
                        {"StopBroadcastLoudSpeakerNetwork", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, actorNumber, isLocal);
}
inline void GorillaTag::Audio::LoudSpeakerNetwork::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::LoudSpeakerNetwork*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Audio::LoudSpeakerNetwork* GorillaTag::Audio::LoudSpeakerNetwork::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Audio::LoudSpeakerNetwork*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Audio::LoudSpeakerNetwork::LoudSpeakerNetwork()   {
}
