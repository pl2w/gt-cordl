#pragma once
// IWYU pragma private; include "GlobalNamespace/VODTarget.hpp"
#include "GlobalNamespace/zzzz__ObservableBehavior_impl.hpp"
#include "GlobalNamespace/zzzz__VODPlayer_VODNextStreamData_impl.hpp"
#include "GlobalNamespace/zzzz__VODPlayer_VODStream_VODStreamChannel_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AudioRolloffMode_impl.hpp"
#include "GlobalNamespace/zzzz__VODTarget_def.hpp"
#include "GlobalNamespace/zzzz__IBuildValidation_def.hpp"
#include "GlobalNamespace/zzzz__VODPlayer_VODNextStreamData_def.hpp"
#include "GlobalNamespace/zzzz__VODPlayer_VODStream_VODStreamChannel_def.hpp"
#include "GlobalNamespace/zzzz__VODTarget_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VODTarget.get_AudioSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::VODTarget_VODTargetAudioSettings* (::GlobalNamespace::VODTarget::*)()>(&::GlobalNamespace::VODTarget::get_AudioSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d077f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODTarget*>(),
                        {"get_AudioSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VODTarget.get_Renderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Renderer> (::GlobalNamespace::VODTarget::*)()>(&::GlobalNamespace::VODTarget::get_Renderer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d07800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODTarget*>(),
                        {"get_Renderer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VODTarget.get_StandbyOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::GlobalNamespace::VODTarget::*)()>(&::GlobalNamespace::VODTarget::get_StandbyOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d07808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODTarget*>(),
                        {"get_StandbyOverride", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VODTarget.get_Channel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel> (::GlobalNamespace::VODTarget::*)()>(&::GlobalNamespace::VODTarget::get_Channel)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5d07810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODTarget*>(),
                        {"get_Channel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VODTarget.get_Unmutable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::VODTarget::*)()>(&::GlobalNamespace::VODTarget::get_Unmutable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d07878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODTarget*>(),
                        {"get_Unmutable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VODTarget.SetNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VODTarget::*)(::GlobalNamespace::VODPlayer_VODNextStreamData)>(&::GlobalNamespace::VODTarget::SetNext)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d07880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODTarget*>(),
                        {"SetNext", {}, {::i2c::type_of<::GlobalNamespace::VODPlayer_VODNextStreamData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VODTarget.ClearNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VODTarget::*)()>(&::GlobalNamespace::VODTarget::ClearNext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d069f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODTarget*>(),
                        {"ClearNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VODTarget.VerifyChannel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::VODTarget::*)(::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel)>(&::GlobalNamespace::VODTarget::VerifyChannel)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5d06998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODTarget*>(),
                        {"VerifyChannel", {}, {::i2c::type_of<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VODTarget.OnLostObservable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VODTarget::*)()>(&::GlobalNamespace::VODTarget::OnLostObservable)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5d0788c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::VODTarget*>(),
                    {::i2c::class_of<::GlobalNamespace::VODTarget*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VODTarget.OnBecameObservable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VODTarget::*)()>(&::GlobalNamespace::VODTarget::OnBecameObservable)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5d07910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::VODTarget*>(),
                    {::i2c::class_of<::GlobalNamespace::VODTarget*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VODTarget.IBuildValidation_BuildValidationCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::VODTarget::*)()>(&::GlobalNamespace::VODTarget::IBuildValidation_BuildValidationCheck)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5d07994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODTarget*>(),
                        {"IBuildValidation.BuildValidationCheck", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VODTarget.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VODTarget::*)()>(&::GlobalNamespace::VODTarget::Start)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5d07a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODTarget*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VODTarget.UnityOnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VODTarget::*)()>(&::GlobalNamespace::VODTarget::UnityOnEnable)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5d07b44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::VODTarget*>(),
                    {::i2c::class_of<::GlobalNamespace::VODTarget*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VODTarget.UnityOnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VODTarget::*)()>(&::GlobalNamespace::VODTarget::UnityOnDisable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5d07c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::VODTarget*>(),
                    {::i2c::class_of<::GlobalNamespace::VODTarget*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VODTarget.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VODTarget::*)()>(&::GlobalNamespace::VODTarget::OnDestroy)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5d07d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODTarget*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VODTarget.VODPlayer_OnCrash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VODTarget::*)()>(&::GlobalNamespace::VODTarget::VODPlayer_OnCrash)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d07e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODTarget*>(),
                        {"VODPlayer_OnCrash", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VODTarget.ObservableSliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VODTarget::*)()>(&::GlobalNamespace::VODTarget::ObservableSliceUpdate)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x5d07e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::VODTarget*>(),
                    {::i2c::class_of<::GlobalNamespace::VODTarget*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VODTarget.ShowStatic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VODTarget::*)(bool)>(&::GlobalNamespace::VODTarget::ShowStatic)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5d07738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODTarget*>(),
                        {"ShowStatic", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VODTarget._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VODTarget::*)()>(&::GlobalNamespace::VODTarget::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d080cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODTarget*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Renderer>& GlobalNamespace::VODTarget::__cordl_internal_get_targetRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRenderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& GlobalNamespace::VODTarget::__cordl_internal_get_targetRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRenderer;
}
constexpr void GlobalNamespace::VODTarget::__cordl_internal_set_targetRenderer(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetRenderer = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::VODTarget::__cordl_internal_get_standbyOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___standbyOverride;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::VODTarget::__cordl_internal_get_standbyOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___standbyOverride;
}
constexpr void GlobalNamespace::VODTarget::__cordl_internal_set_standbyOverride(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___standbyOverride = value;
}
constexpr ::GlobalNamespace::VODTarget_VODTargetAudioSettings*& GlobalNamespace::VODTarget::__cordl_internal_get_audioSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSettings;
}
constexpr ::GlobalNamespace::VODTarget_VODTargetAudioSettings* const& GlobalNamespace::VODTarget::__cordl_internal_get_audioSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSettings;
}
constexpr void GlobalNamespace::VODTarget::__cordl_internal_set_audioSettings(::GlobalNamespace::VODTarget_VODTargetAudioSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSettings = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::VODTarget::__cordl_internal_get_upNext()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upNext;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::VODTarget::__cordl_internal_get_upNext() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upNext;
}
constexpr void GlobalNamespace::VODTarget::__cordl_internal_set_upNext(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upNext = value;
}
constexpr ::ArrayW<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel>& GlobalNamespace::VODTarget::__cordl_internal_get_channel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channel;
}
constexpr ::ArrayW<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel> const& GlobalNamespace::VODTarget::__cordl_internal_get_channel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channel;
}
constexpr void GlobalNamespace::VODTarget::__cordl_internal_set_channel(::ArrayW<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___channel = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::VODTarget::__cordl_internal_get_staticScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___staticScreen;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::VODTarget::__cordl_internal_get_staticScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___staticScreen;
}
constexpr void GlobalNamespace::VODTarget::__cordl_internal_set_staticScreen(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___staticScreen = value;
}
constexpr bool& GlobalNamespace::VODTarget::__cordl_internal_get_unmutable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unmutable;
}
constexpr bool const& GlobalNamespace::VODTarget::__cordl_internal_get_unmutable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unmutable;
}
constexpr void GlobalNamespace::VODTarget::__cordl_internal_set_unmutable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unmutable = value;
}
constexpr ::GlobalNamespace::VODPlayer_VODNextStreamData& GlobalNamespace::VODTarget::__cordl_internal_get_upNextData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upNextData;
}
constexpr ::GlobalNamespace::VODPlayer_VODNextStreamData const& GlobalNamespace::VODTarget::__cordl_internal_get_upNextData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upNextData;
}
constexpr void GlobalNamespace::VODTarget::__cordl_internal_set_upNextData(::GlobalNamespace::VODPlayer_VODNextStreamData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upNextData = value;
}
inline void GlobalNamespace::VODTarget::setStaticF_AlertEnabled(::System::Action_1<::UnityW<::GlobalNamespace::VODTarget>>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityW<::GlobalNamespace::VODTarget>>*, "AlertEnabled", ::GlobalNamespace::VODTarget*>(std::forward<::System::Action_1<::UnityW<::GlobalNamespace::VODTarget>>*>(value));
}
inline ::System::Action_1<::UnityW<::GlobalNamespace::VODTarget>>* GlobalNamespace::VODTarget::getStaticF_AlertEnabled()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::GlobalNamespace::VODTarget>>*, "AlertEnabled", ::GlobalNamespace::VODTarget*>();
}
inline void GlobalNamespace::VODTarget::setStaticF_AlertDisabled(::System::Action_1<::UnityW<::GlobalNamespace::VODTarget>>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityW<::GlobalNamespace::VODTarget>>*, "AlertDisabled", ::GlobalNamespace::VODTarget*>(std::forward<::System::Action_1<::UnityW<::GlobalNamespace::VODTarget>>*>(value));
}
inline ::System::Action_1<::UnityW<::GlobalNamespace::VODTarget>>* GlobalNamespace::VODTarget::getStaticF_AlertDisabled()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::GlobalNamespace::VODTarget>>*, "AlertDisabled", ::GlobalNamespace::VODTarget*>();
}
inline ::GlobalNamespace::VODTarget_VODTargetAudioSettings* GlobalNamespace::VODTarget::get_AudioSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODTarget*>(),
                        {"get_AudioSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::VODTarget_VODTargetAudioSettings*>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Renderer> GlobalNamespace::VODTarget::get_Renderer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODTarget*>(),
                        {"get_Renderer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Renderer>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> GlobalNamespace::VODTarget::get_StandbyOverride()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODTarget*>(),
                        {"get_StandbyOverride", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel> GlobalNamespace::VODTarget::get_Channel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODTarget*>(),
                        {"get_Channel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel>>(this, ___internal_method);
}
inline bool GlobalNamespace::VODTarget::get_Unmutable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODTarget*>(),
                        {"get_Unmutable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::VODTarget::SetNext(::GlobalNamespace::VODPlayer_VODNextStreamData  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODTarget*>(),
                        {"SetNext", {}, {::i2c::type_of<::GlobalNamespace::VODPlayer_VODNextStreamData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void GlobalNamespace::VODTarget::ClearNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODTarget*>(),
                        {"ClearNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::VODTarget::VerifyChannel(::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel  ch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODTarget*>(),
                        {"VerifyChannel", {}, {::i2c::type_of<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ch);
}
inline void GlobalNamespace::VODTarget::OnLostObservable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::VODTarget*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VODTarget::OnBecameObservable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::VODTarget*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::VODTarget::IBuildValidation_BuildValidationCheck()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODTarget*>(),
                        {"IBuildValidation.BuildValidationCheck", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::VODTarget::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODTarget*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VODTarget::UnityOnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::VODTarget*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VODTarget::UnityOnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::VODTarget*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VODTarget::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODTarget*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VODTarget::VODPlayer_OnCrash()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODTarget*>(),
                        {"VODPlayer_OnCrash", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VODTarget::ObservableSliceUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::VODTarget*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VODTarget::ShowStatic(bool  on)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODTarget*>(),
                        {"ShowStatic", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, on);
}
inline void GlobalNamespace::VODTarget::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODTarget*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VODTarget* GlobalNamespace::VODTarget::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VODTarget*>());
}
/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr  GlobalNamespace::VODTarget::operator ::GlobalNamespace::IBuildValidation*() noexcept {
return static_cast<::GlobalNamespace::IBuildValidation*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* GlobalNamespace::VODTarget::i___GlobalNamespace__IBuildValidation() noexcept {
return static_cast<::GlobalNamespace::IBuildValidation*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VODTarget::VODTarget()   {
}
//  Writing Method size for method: ::GlobalNamespace::VODTarget_VODTargetAudioSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VODTarget_VODTargetAudioSettings::*)()>(&::GlobalNamespace::VODTarget_VODTargetAudioSettings::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d080d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODTarget_VODTargetAudioSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::VODTarget_VODTargetAudioSettings::__cordl_internal_get_volume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volume;
}
constexpr float_t const& GlobalNamespace::VODTarget_VODTargetAudioSettings::__cordl_internal_get_volume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volume;
}
constexpr void GlobalNamespace::VODTarget_VODTargetAudioSettings::__cordl_internal_set_volume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___volume = value;
}
constexpr float_t& GlobalNamespace::VODTarget_VODTargetAudioSettings::__cordl_internal_get_dopplerLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dopplerLevel;
}
constexpr float_t const& GlobalNamespace::VODTarget_VODTargetAudioSettings::__cordl_internal_get_dopplerLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dopplerLevel;
}
constexpr void GlobalNamespace::VODTarget_VODTargetAudioSettings::__cordl_internal_set_dopplerLevel(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dopplerLevel = value;
}
constexpr float_t& GlobalNamespace::VODTarget_VODTargetAudioSettings::__cordl_internal_get_spread()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spread;
}
constexpr float_t const& GlobalNamespace::VODTarget_VODTargetAudioSettings::__cordl_internal_get_spread() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spread;
}
constexpr void GlobalNamespace::VODTarget_VODTargetAudioSettings::__cordl_internal_set_spread(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spread = value;
}
constexpr ::UnityEngine::AudioRolloffMode& GlobalNamespace::VODTarget_VODTargetAudioSettings::__cordl_internal_get_rolloffMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rolloffMode;
}
constexpr ::UnityEngine::AudioRolloffMode const& GlobalNamespace::VODTarget_VODTargetAudioSettings::__cordl_internal_get_rolloffMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rolloffMode;
}
constexpr void GlobalNamespace::VODTarget_VODTargetAudioSettings::__cordl_internal_set_rolloffMode(::UnityEngine::AudioRolloffMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rolloffMode = value;
}
constexpr float_t& GlobalNamespace::VODTarget_VODTargetAudioSettings::__cordl_internal_get_minDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minDistance;
}
constexpr float_t const& GlobalNamespace::VODTarget_VODTargetAudioSettings::__cordl_internal_get_minDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minDistance;
}
constexpr void GlobalNamespace::VODTarget_VODTargetAudioSettings::__cordl_internal_set_minDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minDistance = value;
}
constexpr float_t& GlobalNamespace::VODTarget_VODTargetAudioSettings::__cordl_internal_get_maxDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistance;
}
constexpr float_t const& GlobalNamespace::VODTarget_VODTargetAudioSettings::__cordl_internal_get_maxDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistance;
}
constexpr void GlobalNamespace::VODTarget_VODTargetAudioSettings::__cordl_internal_set_maxDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDistance = value;
}
inline void GlobalNamespace::VODTarget_VODTargetAudioSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODTarget_VODTargetAudioSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VODTarget_VODTargetAudioSettings* GlobalNamespace::VODTarget_VODTargetAudioSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VODTarget_VODTargetAudioSettings*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VODTarget_VODTargetAudioSettings::VODTarget_VODTargetAudioSettings()   {
}
