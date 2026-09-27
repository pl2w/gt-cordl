#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GtTabletSocialCameraVisuals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtTabletSocialCameraVisuals_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__IGtCameraVisuals_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtTabletSocialCameraVisuals.SetVisualsActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtTabletSocialCameraVisuals::*)(bool)>(&::Liv::Lck::GorillaTag::GtTabletSocialCameraVisuals::SetVisualsActive)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9d2f4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletSocialCameraVisuals*>(),
                        {"SetVisualsActive", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtTabletSocialCameraVisuals.SetNetworkedVisualsActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtTabletSocialCameraVisuals::*)(bool)>(&::Liv::Lck::GorillaTag::GtTabletSocialCameraVisuals::SetNetworkedVisualsActive)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9d2f558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletSocialCameraVisuals*>(),
                        {"SetNetworkedVisualsActive", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtTabletSocialCameraVisuals.SetRecordingState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtTabletSocialCameraVisuals::*)(bool)>(&::Liv::Lck::GorillaTag::GtTabletSocialCameraVisuals::SetRecordingState)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9d2f520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletSocialCameraVisuals*>(),
                        {"SetRecordingState", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtTabletSocialCameraVisuals._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtTabletSocialCameraVisuals::*)()>(&::Liv::Lck::GorillaTag::GtTabletSocialCameraVisuals::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d2f574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletSocialCameraVisuals*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& Liv::Lck::GorillaTag::GtTabletSocialCameraVisuals::__cordl_internal_get__visuals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visuals;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Liv::Lck::GorillaTag::GtTabletSocialCameraVisuals::__cordl_internal_get__visuals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visuals;
}
constexpr void Liv::Lck::GorillaTag::GtTabletSocialCameraVisuals::__cordl_internal_set__visuals(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____visuals = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Liv::Lck::GorillaTag::GtTabletSocialCameraVisuals::__cordl_internal_get__recordingIndicatorRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordingIndicatorRoot;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Liv::Lck::GorillaTag::GtTabletSocialCameraVisuals::__cordl_internal_get__recordingIndicatorRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordingIndicatorRoot;
}
constexpr void Liv::Lck::GorillaTag::GtTabletSocialCameraVisuals::__cordl_internal_set__recordingIndicatorRoot(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____recordingIndicatorRoot = value;
}
constexpr bool& Liv::Lck::GorillaTag::GtTabletSocialCameraVisuals::__cordl_internal_get__isRecording()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isRecording;
}
constexpr bool const& Liv::Lck::GorillaTag::GtTabletSocialCameraVisuals::__cordl_internal_get__isRecording() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isRecording;
}
constexpr void Liv::Lck::GorillaTag::GtTabletSocialCameraVisuals::__cordl_internal_set__isRecording(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isRecording = value;
}
inline void Liv::Lck::GorillaTag::GtTabletSocialCameraVisuals::SetVisualsActive(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletSocialCameraVisuals*>(),
                        {"SetVisualsActive", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, active);
}
inline void Liv::Lck::GorillaTag::GtTabletSocialCameraVisuals::SetNetworkedVisualsActive(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletSocialCameraVisuals*>(),
                        {"SetNetworkedVisualsActive", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, active);
}
inline void Liv::Lck::GorillaTag::GtTabletSocialCameraVisuals::SetRecordingState(bool  isRecording)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletSocialCameraVisuals*>(),
                        {"SetRecordingState", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isRecording);
}
inline void Liv::Lck::GorillaTag::GtTabletSocialCameraVisuals::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTabletSocialCameraVisuals*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::GorillaTag::GtTabletSocialCameraVisuals* Liv::Lck::GorillaTag::GtTabletSocialCameraVisuals::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::GorillaTag::GtTabletSocialCameraVisuals*>());
}
/// @brief Convert operator to "::Liv::Lck::GorillaTag::IGtCameraVisuals"
constexpr  Liv::Lck::GorillaTag::GtTabletSocialCameraVisuals::operator ::Liv::Lck::GorillaTag::IGtCameraVisuals*() noexcept {
return static_cast<::Liv::Lck::GorillaTag::IGtCameraVisuals*>(static_cast<void*>(this));
}
/// @brief Convert to "::Liv::Lck::GorillaTag::IGtCameraVisuals"
constexpr ::Liv::Lck::GorillaTag::IGtCameraVisuals* Liv::Lck::GorillaTag::GtTabletSocialCameraVisuals::i___Liv__Lck__GorillaTag__IGtCameraVisuals() noexcept {
return static_cast<::Liv::Lck::GorillaTag::IGtCameraVisuals*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::GorillaTag::GtTabletSocialCameraVisuals::GtTabletSocialCameraVisuals()   {
}
