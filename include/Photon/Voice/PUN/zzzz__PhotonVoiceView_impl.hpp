#pragma once
// IWYU pragma private; include "Photon/Voice/PUN/PhotonVoiceView.hpp"
#include "Photon/Voice/Unity/zzzz__VoiceComponent_impl.hpp"
#include "Photon/Voice/PUN/zzzz__PhotonVoiceView_def.hpp"
#include "Photon/Pun/zzzz__PhotonView_def.hpp"
#include "Photon/Voice/Unity/zzzz__Recorder_def.hpp"
#include "Photon/Voice/Unity/zzzz__Speaker_def.hpp"
//  Writing Method size for method: ::Photon::Voice::PUN::PhotonVoiceView.get_RecorderInUse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Photon::Voice::Unity::Recorder> (::Photon::Voice::PUN::PhotonVoiceView::*)()>(&::Photon::Voice::PUN::PhotonVoiceView::get_RecorderInUse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa780018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceView*>(),
                        {"get_RecorderInUse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::PUN::PhotonVoiceView.set_RecorderInUse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::PUN::PhotonVoiceView::*)(::Photon::Voice::Unity::Recorder*)>(&::Photon::Voice::PUN::PhotonVoiceView::set_RecorderInUse)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xa780020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceView*>(),
                        {"set_RecorderInUse", {}, {::i2c::type_of<::Photon::Voice::Unity::Recorder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::PUN::PhotonVoiceView.get_SpeakerInUse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Photon::Voice::Unity::Speaker> (::Photon::Voice::PUN::PhotonVoiceView::*)()>(&::Photon::Voice::PUN::PhotonVoiceView::get_SpeakerInUse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7806c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceView*>(),
                        {"get_SpeakerInUse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::PUN::PhotonVoiceView.set_SpeakerInUse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::PUN::PhotonVoiceView::*)(::Photon::Voice::Unity::Speaker*)>(&::Photon::Voice::PUN::PhotonVoiceView::set_SpeakerInUse)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xa7806cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceView*>(),
                        {"set_SpeakerInUse", {}, {::i2c::type_of<::Photon::Voice::Unity::Speaker*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::PUN::PhotonVoiceView.get_IsSetup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::PUN::PhotonVoiceView::*)()>(&::Photon::Voice::PUN::PhotonVoiceView::get_IsSetup)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa78089c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceView*>(),
                        {"get_IsSetup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::PUN::PhotonVoiceView.get_IsSpeaker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::PUN::PhotonVoiceView::*)()>(&::Photon::Voice::PUN::PhotonVoiceView::get_IsSpeaker)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7808f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceView*>(),
                        {"get_IsSpeaker", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::PUN::PhotonVoiceView.set_IsSpeaker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::PUN::PhotonVoiceView::*)(bool)>(&::Photon::Voice::PUN::PhotonVoiceView::set_IsSpeaker)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7808f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceView*>(),
                        {"set_IsSpeaker", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::PUN::PhotonVoiceView.get_IsSpeaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::PUN::PhotonVoiceView::*)()>(&::Photon::Voice::PUN::PhotonVoiceView::get_IsSpeaking)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa780900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceView*>(),
                        {"get_IsSpeaking", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::PUN::PhotonVoiceView.get_IsRecorder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::PUN::PhotonVoiceView::*)()>(&::Photon::Voice::PUN::PhotonVoiceView::get_IsRecorder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa780928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceView*>(),
                        {"get_IsRecorder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::PUN::PhotonVoiceView.set_IsRecorder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::PUN::PhotonVoiceView::*)(bool)>(&::Photon::Voice::PUN::PhotonVoiceView::set_IsRecorder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa780930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceView*>(),
                        {"set_IsRecorder", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::PUN::PhotonVoiceView.get_IsRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::PUN::PhotonVoiceView::*)()>(&::Photon::Voice::PUN::PhotonVoiceView::get_IsRecording)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa780938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceView*>(),
                        {"get_IsRecording", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::PUN::PhotonVoiceView.get_IsSpeakerLinked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::PUN::PhotonVoiceView::*)()>(&::Photon::Voice::PUN::PhotonVoiceView::get_IsSpeakerLinked)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa780960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceView*>(),
                        {"get_IsSpeakerLinked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::PUN::PhotonVoiceView.get_IsPhotonViewReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::PUN::PhotonVoiceView::*)()>(&::Photon::Voice::PUN::PhotonVoiceView::get_IsPhotonViewReady)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa78063c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceView*>(),
                        {"get_IsPhotonViewReady", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::PUN::PhotonVoiceView.get_RequiresSpeaker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::PUN::PhotonVoiceView::*)()>(&::Photon::Voice::PUN::PhotonVoiceView::get_RequiresSpeaker)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa780854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceView*>(),
                        {"get_RequiresSpeaker", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::PUN::PhotonVoiceView.get_RequiresRecorder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::PUN::PhotonVoiceView::*)()>(&::Photon::Voice::PUN::PhotonVoiceView::get_RequiresRecorder)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa7801a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceView*>(),
                        {"get_RequiresRecorder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::PUN::PhotonVoiceView.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::PUN::PhotonVoiceView::*)()>(&::Photon::Voice::PUN::PhotonVoiceView::Awake)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa780988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceView*>(),
                    {::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceView*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::PUN::PhotonVoiceView.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::PUN::PhotonVoiceView::*)()>(&::Photon::Voice::PUN::PhotonVoiceView::OnEnable)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa780b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceView*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::PUN::PhotonVoiceView.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::PUN::PhotonVoiceView::*)()>(&::Photon::Voice::PUN::PhotonVoiceView::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa780b28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceView*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::PUN::PhotonVoiceView.CheckLateLinking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::PUN::PhotonVoiceView::*)()>(&::Photon::Voice::PUN::PhotonVoiceView::CheckLateLinking)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0xa780b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceView*>(),
                        {"CheckLateLinking", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::PUN::PhotonVoiceView.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::PUN::PhotonVoiceView::*)()>(&::Photon::Voice::PUN::PhotonVoiceView::Setup)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xa780df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceView*>(),
                        {"Setup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::PUN::PhotonVoiceView.SetupRecorder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::PUN::PhotonVoiceView::*)()>(&::Photon::Voice::PUN::PhotonVoiceView::SetupRecorder)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0xa780f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceView*>(),
                        {"SetupRecorder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::PUN::PhotonVoiceView.SetupRecorder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::PUN::PhotonVoiceView::*)(::Photon::Voice::Unity::Recorder*)>(&::Photon::Voice::PUN::PhotonVoiceView::SetupRecorder)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0xa781334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceView*>(),
                        {"SetupRecorder", {}, {::i2c::type_of<::Photon::Voice::Unity::Recorder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::PUN::PhotonVoiceView.SetupSpeaker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::PUN::PhotonVoiceView::*)()>(&::Photon::Voice::PUN::PhotonVoiceView::SetupSpeaker)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0xa7816a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceView*>(),
                        {"SetupSpeaker", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::PUN::PhotonVoiceView.SetupSpeaker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::PUN::PhotonVoiceView::*)(::Photon::Voice::Unity::Speaker*)>(&::Photon::Voice::PUN::PhotonVoiceView::SetupSpeaker)> {
  constexpr static std::size_t size = 0x57c;
  constexpr static std::size_t addrs = 0xa781a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceView*>(),
                        {"SetupSpeaker", {}, {::i2c::type_of<::Photon::Voice::Unity::Speaker*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::PUN::PhotonVoiceView.SetupRecorderInUse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::PUN::PhotonVoiceView::*)()>(&::Photon::Voice::PUN::PhotonVoiceView::SetupRecorderInUse)> {
  constexpr static std::size_t size = 0x45c;
  constexpr static std::size_t addrs = 0xa7801e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceView*>(),
                        {"SetupRecorderInUse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::PUN::PhotonVoiceView.SetupSpeakerInUse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::PUN::PhotonVoiceView::*)()>(&::Photon::Voice::PUN::PhotonVoiceView::SetupSpeakerInUse)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0xa77edc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceView*>(),
                        {"SetupSpeakerInUse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::PUN::PhotonVoiceView.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::PUN::PhotonVoiceView::*)()>(&::Photon::Voice::PUN::PhotonVoiceView::Init)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xa7809f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceView*>(),
                        {"Init", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::PUN::PhotonVoiceView._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::PUN::PhotonVoiceView::*)()>(&::Photon::Voice::PUN::PhotonVoiceView::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa78200c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceView*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Photon::Pun::PhotonView>& Photon::Voice::PUN::PhotonVoiceView::__cordl_internal_get_photonView()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___photonView;
}
constexpr ::UnityW<::Photon::Pun::PhotonView> const& Photon::Voice::PUN::PhotonVoiceView::__cordl_internal_get_photonView() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___photonView;
}
constexpr void Photon::Voice::PUN::PhotonVoiceView::__cordl_internal_set_photonView(::UnityW<::Photon::Pun::PhotonView>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___photonView = value;
}
constexpr ::UnityW<::Photon::Voice::Unity::Recorder>& Photon::Voice::PUN::PhotonVoiceView::__cordl_internal_get_recorderInUse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recorderInUse;
}
constexpr ::UnityW<::Photon::Voice::Unity::Recorder> const& Photon::Voice::PUN::PhotonVoiceView::__cordl_internal_get_recorderInUse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recorderInUse;
}
constexpr void Photon::Voice::PUN::PhotonVoiceView::__cordl_internal_set_recorderInUse(::UnityW<::Photon::Voice::Unity::Recorder>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___recorderInUse = value;
}
constexpr ::UnityW<::Photon::Voice::Unity::Speaker>& Photon::Voice::PUN::PhotonVoiceView::__cordl_internal_get_speakerInUse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speakerInUse;
}
constexpr ::UnityW<::Photon::Voice::Unity::Speaker> const& Photon::Voice::PUN::PhotonVoiceView::__cordl_internal_get_speakerInUse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speakerInUse;
}
constexpr void Photon::Voice::PUN::PhotonVoiceView::__cordl_internal_set_speakerInUse(::UnityW<::Photon::Voice::Unity::Speaker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speakerInUse = value;
}
constexpr bool& Photon::Voice::PUN::PhotonVoiceView::__cordl_internal_get_onEnableCalledOnce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onEnableCalledOnce;
}
constexpr bool const& Photon::Voice::PUN::PhotonVoiceView::__cordl_internal_get_onEnableCalledOnce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onEnableCalledOnce;
}
constexpr void Photon::Voice::PUN::PhotonVoiceView::__cordl_internal_set_onEnableCalledOnce(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onEnableCalledOnce = value;
}
constexpr bool& Photon::Voice::PUN::PhotonVoiceView::__cordl_internal_get_AutoCreateRecorderIfNotFound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutoCreateRecorderIfNotFound;
}
constexpr bool const& Photon::Voice::PUN::PhotonVoiceView::__cordl_internal_get_AutoCreateRecorderIfNotFound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutoCreateRecorderIfNotFound;
}
constexpr void Photon::Voice::PUN::PhotonVoiceView::__cordl_internal_set_AutoCreateRecorderIfNotFound(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AutoCreateRecorderIfNotFound = value;
}
constexpr bool& Photon::Voice::PUN::PhotonVoiceView::__cordl_internal_get_UsePrimaryRecorder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UsePrimaryRecorder;
}
constexpr bool const& Photon::Voice::PUN::PhotonVoiceView::__cordl_internal_get_UsePrimaryRecorder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UsePrimaryRecorder;
}
constexpr void Photon::Voice::PUN::PhotonVoiceView::__cordl_internal_set_UsePrimaryRecorder(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UsePrimaryRecorder = value;
}
constexpr bool& Photon::Voice::PUN::PhotonVoiceView::__cordl_internal_get_SetupDebugSpeaker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SetupDebugSpeaker;
}
constexpr bool const& Photon::Voice::PUN::PhotonVoiceView::__cordl_internal_get_SetupDebugSpeaker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SetupDebugSpeaker;
}
constexpr void Photon::Voice::PUN::PhotonVoiceView::__cordl_internal_set_SetupDebugSpeaker(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SetupDebugSpeaker = value;
}
constexpr bool& Photon::Voice::PUN::PhotonVoiceView::__cordl_internal_get__IsSpeaker_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsSpeaker_k__BackingField;
}
constexpr bool const& Photon::Voice::PUN::PhotonVoiceView::__cordl_internal_get__IsSpeaker_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsSpeaker_k__BackingField;
}
constexpr void Photon::Voice::PUN::PhotonVoiceView::__cordl_internal_set__IsSpeaker_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsSpeaker_k__BackingField = value;
}
constexpr bool& Photon::Voice::PUN::PhotonVoiceView::__cordl_internal_get__IsRecorder_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsRecorder_k__BackingField;
}
constexpr bool const& Photon::Voice::PUN::PhotonVoiceView::__cordl_internal_get__IsRecorder_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsRecorder_k__BackingField;
}
constexpr void Photon::Voice::PUN::PhotonVoiceView::__cordl_internal_set__IsRecorder_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsRecorder_k__BackingField = value;
}
inline ::UnityW<::Photon::Voice::Unity::Recorder> Photon::Voice::PUN::PhotonVoiceView::get_RecorderInUse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceView*>(),
                        {"get_RecorderInUse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Photon::Voice::Unity::Recorder>>(this, ___internal_method);
}
inline void Photon::Voice::PUN::PhotonVoiceView::set_RecorderInUse(::Photon::Voice::Unity::Recorder*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceView*>(),
                        {"set_RecorderInUse", {}, {::i2c::type_of<::Photon::Voice::Unity::Recorder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::Photon::Voice::Unity::Speaker> Photon::Voice::PUN::PhotonVoiceView::get_SpeakerInUse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceView*>(),
                        {"get_SpeakerInUse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Photon::Voice::Unity::Speaker>>(this, ___internal_method);
}
inline void Photon::Voice::PUN::PhotonVoiceView::set_SpeakerInUse(::Photon::Voice::Unity::Speaker*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceView*>(),
                        {"set_SpeakerInUse", {}, {::i2c::type_of<::Photon::Voice::Unity::Speaker*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Voice::PUN::PhotonVoiceView::get_IsSetup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceView*>(),
                        {"get_IsSetup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Photon::Voice::PUN::PhotonVoiceView::get_IsSpeaker()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceView*>(),
                        {"get_IsSpeaker", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::PUN::PhotonVoiceView::set_IsSpeaker(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceView*>(),
                        {"set_IsSpeaker", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Voice::PUN::PhotonVoiceView::get_IsSpeaking()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceView*>(),
                        {"get_IsSpeaking", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Photon::Voice::PUN::PhotonVoiceView::get_IsRecorder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceView*>(),
                        {"get_IsRecorder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::PUN::PhotonVoiceView::set_IsRecorder(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceView*>(),
                        {"set_IsRecorder", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Voice::PUN::PhotonVoiceView::get_IsRecording()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceView*>(),
                        {"get_IsRecording", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Photon::Voice::PUN::PhotonVoiceView::get_IsSpeakerLinked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceView*>(),
                        {"get_IsSpeakerLinked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Photon::Voice::PUN::PhotonVoiceView::get_IsPhotonViewReady()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceView*>(),
                        {"get_IsPhotonViewReady", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Photon::Voice::PUN::PhotonVoiceView::get_RequiresSpeaker()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceView*>(),
                        {"get_RequiresSpeaker", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Photon::Voice::PUN::PhotonVoiceView::get_RequiresRecorder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceView*>(),
                        {"get_RequiresRecorder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::PUN::PhotonVoiceView::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceView*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::PUN::PhotonVoiceView::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceView*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::PUN::PhotonVoiceView::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceView*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::PUN::PhotonVoiceView::CheckLateLinking()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceView*>(),
                        {"CheckLateLinking", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::PUN::PhotonVoiceView::Setup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceView*>(),
                        {"Setup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Photon::Voice::PUN::PhotonVoiceView::SetupRecorder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceView*>(),
                        {"SetupRecorder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Photon::Voice::PUN::PhotonVoiceView::SetupRecorder(::Photon::Voice::Unity::Recorder*  recorder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceView*>(),
                        {"SetupRecorder", {}, {::i2c::type_of<::Photon::Voice::Unity::Recorder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, recorder);
}
inline bool Photon::Voice::PUN::PhotonVoiceView::SetupSpeaker()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceView*>(),
                        {"SetupSpeaker", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Photon::Voice::PUN::PhotonVoiceView::SetupSpeaker(::Photon::Voice::Unity::Speaker*  speaker)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceView*>(),
                        {"SetupSpeaker", {}, {::i2c::type_of<::Photon::Voice::Unity::Speaker*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, speaker);
}
inline void Photon::Voice::PUN::PhotonVoiceView::SetupRecorderInUse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceView*>(),
                        {"SetupRecorderInUse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::PUN::PhotonVoiceView::SetupSpeakerInUse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceView*>(),
                        {"SetupSpeakerInUse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::PUN::PhotonVoiceView::Init()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceView*>(),
                        {"Init", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::PUN::PhotonVoiceView::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PUN::PhotonVoiceView*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::PUN::PhotonVoiceView* Photon::Voice::PUN::PhotonVoiceView::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::PUN::PhotonVoiceView*>());
}
// Ctor Parameters []
constexpr ::Photon::Voice::PUN::PhotonVoiceView::PhotonVoiceView()   {
}
