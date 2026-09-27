#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VisualEffectControlClip.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_impl.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffectControlClip_PrewarmClipSettings_impl.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffectControlClip_ReinitMode_impl.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffectControlClip_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/Timeline/zzzz__ClipCaps_def.hpp"
#include "UnityEngine/Timeline/zzzz__ITimelineClipAsset_def.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffectControlClip_ClipEvent_def.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffectControlClip_PrewarmClipSettings_def.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffectControlClip_ReinitMode_def.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffectPlayableSerializedEvent_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffectControlClip.get_clipCaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Timeline::ClipCaps (::UnityEngine::VFX::VisualEffectControlClip::*)()>(&::UnityEngine::VFX::VisualEffectControlClip::get_clipCaps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3d6598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::VFX::VisualEffectControlClip*>(),
                        {"get_clipCaps", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffectControlClip.get_clipStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::VFX::VisualEffectControlClip::*)()>(&::UnityEngine::VFX::VisualEffectControlClip::get_clipStart)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3d65a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::VFX::VisualEffectControlClip*>(),
                        {"get_clipStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffectControlClip.set_clipStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::VisualEffectControlClip::*)(double_t)>(&::UnityEngine::VFX::VisualEffectControlClip::set_clipStart)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3d65a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::VFX::VisualEffectControlClip*>(),
                        {"set_clipStart", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffectControlClip.get_clipEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::VFX::VisualEffectControlClip::*)()>(&::UnityEngine::VFX::VisualEffectControlClip::get_clipEnd)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3d65b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::VFX::VisualEffectControlClip*>(),
                        {"get_clipEnd", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffectControlClip.set_clipEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::VisualEffectControlClip::*)(double_t)>(&::UnityEngine::VFX::VisualEffectControlClip::set_clipEnd)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3d65b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::VFX::VisualEffectControlClip*>(),
                        {"set_clipEnd", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffectControlClip.CreatePlayable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::Playable (::UnityEngine::VFX::VisualEffectControlClip::*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*)>(&::UnityEngine::VFX::VisualEffectControlClip::CreatePlayable)> {
  constexpr static std::size_t size = 0x754;
  constexpr static std::size_t addrs = 0xb3d65c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::VFX::VisualEffectControlClip*>(),
                    {::i2c::class_of<::UnityEngine::VFX::VisualEffectControlClip*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffectControlClip._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::VisualEffectControlClip::*)()>(&::UnityEngine::VFX::VisualEffectControlClip::_ctor)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0xb3d6d8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::VFX::VisualEffectControlClip*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr double_t& UnityEngine::VFX::VisualEffectControlClip::__cordl_internal_get__clipStart_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clipStart_k__BackingField;
}
constexpr double_t const& UnityEngine::VFX::VisualEffectControlClip::__cordl_internal_get__clipStart_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clipStart_k__BackingField;
}
constexpr void UnityEngine::VFX::VisualEffectControlClip::__cordl_internal_set__clipStart_k__BackingField(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clipStart_k__BackingField = value;
}
constexpr double_t& UnityEngine::VFX::VisualEffectControlClip::__cordl_internal_get__clipEnd_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clipEnd_k__BackingField;
}
constexpr double_t const& UnityEngine::VFX::VisualEffectControlClip::__cordl_internal_get__clipEnd_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clipEnd_k__BackingField;
}
constexpr void UnityEngine::VFX::VisualEffectControlClip::__cordl_internal_set__clipEnd_k__BackingField(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clipEnd_k__BackingField = value;
}
constexpr bool& UnityEngine::VFX::VisualEffectControlClip::__cordl_internal_get_scrubbing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scrubbing;
}
constexpr bool const& UnityEngine::VFX::VisualEffectControlClip::__cordl_internal_get_scrubbing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scrubbing;
}
constexpr void UnityEngine::VFX::VisualEffectControlClip::__cordl_internal_set_scrubbing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scrubbing = value;
}
constexpr uint32_t& UnityEngine::VFX::VisualEffectControlClip::__cordl_internal_get_startSeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startSeed;
}
constexpr uint32_t const& UnityEngine::VFX::VisualEffectControlClip::__cordl_internal_get_startSeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startSeed;
}
constexpr void UnityEngine::VFX::VisualEffectControlClip::__cordl_internal_set_startSeed(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startSeed = value;
}
constexpr ::GlobalNamespace::VisualEffectControlClip_ReinitMode& UnityEngine::VFX::VisualEffectControlClip::__cordl_internal_get_reinit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reinit;
}
constexpr ::GlobalNamespace::VisualEffectControlClip_ReinitMode const& UnityEngine::VFX::VisualEffectControlClip::__cordl_internal_get_reinit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reinit;
}
constexpr void UnityEngine::VFX::VisualEffectControlClip::__cordl_internal_set_reinit(::GlobalNamespace::VisualEffectControlClip_ReinitMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reinit = value;
}
constexpr ::GlobalNamespace::VisualEffectControlClip_PrewarmClipSettings& UnityEngine::VFX::VisualEffectControlClip::__cordl_internal_get_prewarm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prewarm;
}
constexpr ::GlobalNamespace::VisualEffectControlClip_PrewarmClipSettings const& UnityEngine::VFX::VisualEffectControlClip::__cordl_internal_get_prewarm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prewarm;
}
constexpr void UnityEngine::VFX::VisualEffectControlClip::__cordl_internal_set_prewarm(::GlobalNamespace::VisualEffectControlClip_PrewarmClipSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prewarm = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::VisualEffectControlClip_ClipEvent>*& UnityEngine::VFX::VisualEffectControlClip::__cordl_internal_get_clipEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipEvents;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::VisualEffectControlClip_ClipEvent>* const& UnityEngine::VFX::VisualEffectControlClip::__cordl_internal_get_clipEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipEvents;
}
constexpr void UnityEngine::VFX::VisualEffectControlClip::__cordl_internal_set_clipEvents(::System::Collections::Generic::List_1<::GlobalNamespace::VisualEffectControlClip_ClipEvent>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clipEvents = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>*& UnityEngine::VFX::VisualEffectControlClip::__cordl_internal_get_singleEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___singleEvents;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>* const& UnityEngine::VFX::VisualEffectControlClip::__cordl_internal_get_singleEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___singleEvents;
}
constexpr void UnityEngine::VFX::VisualEffectControlClip::__cordl_internal_set_singleEvents(::System::Collections::Generic::List_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___singleEvents = value;
}
inline ::UnityEngine::Timeline::ClipCaps UnityEngine::VFX::VisualEffectControlClip::get_clipCaps()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::VFX::VisualEffectControlClip*>(),
                        {"get_clipCaps", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::ClipCaps>(this, ___internal_method);
}
inline double_t UnityEngine::VFX::VisualEffectControlClip::get_clipStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::VFX::VisualEffectControlClip*>(),
                        {"get_clipStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void UnityEngine::VFX::VisualEffectControlClip::set_clipStart(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::VFX::VisualEffectControlClip*>(),
                        {"set_clipStart", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline double_t UnityEngine::VFX::VisualEffectControlClip::get_clipEnd()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::VFX::VisualEffectControlClip*>(),
                        {"get_clipEnd", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void UnityEngine::VFX::VisualEffectControlClip::set_clipEnd(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::VFX::VisualEffectControlClip*>(),
                        {"set_clipEnd", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Playables::Playable UnityEngine::VFX::VisualEffectControlClip::CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  owner)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::VFX::VisualEffectControlClip*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable>(this, ___internal_method, graph, owner);
}
inline void UnityEngine::VFX::VisualEffectControlClip::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::VFX::VisualEffectControlClip*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::VFX::VisualEffectControlClip* UnityEngine::VFX::VisualEffectControlClip::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::VisualEffectControlClip*>());
}
/// @brief Convert operator to "::UnityEngine::Timeline::ITimelineClipAsset"
constexpr  UnityEngine::VFX::VisualEffectControlClip::operator ::UnityEngine::Timeline::ITimelineClipAsset*() noexcept {
return static_cast<::UnityEngine::Timeline::ITimelineClipAsset*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Timeline::ITimelineClipAsset"
constexpr ::UnityEngine::Timeline::ITimelineClipAsset* UnityEngine::VFX::VisualEffectControlClip::i___UnityEngine__Timeline__ITimelineClipAsset() noexcept {
return static_cast<::UnityEngine::Timeline::ITimelineClipAsset*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::VisualEffectControlClip::VisualEffectControlClip()   {
}
