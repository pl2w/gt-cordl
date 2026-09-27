#pragma once
// IWYU pragma private; include "GlobalNamespace/SplineWalker.hpp"
#include "GlobalNamespace/zzzz__SplineWalkerMode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SplineWalker_def.hpp"
#include "GlobalNamespace/zzzz__BezierSpline_def.hpp"
#include "GlobalNamespace/zzzz__LinearSpline_def.hpp"
#include "Photon/Pun/zzzz__IPunObservable_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "Photon/Pun/zzzz__PhotonView_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SplineWalker.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SplineWalker::*)()>(&::GlobalNamespace::SplineWalker::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5b16290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplineWalker*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SplineWalker.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SplineWalker::*)()>(&::GlobalNamespace::SplineWalker::Update)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x5b162e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplineWalker*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SplineWalker.OnPhotonSerializeView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SplineWalker::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::SplineWalker::OnPhotonSerializeView)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b16588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplineWalker*>(),
                        {"OnPhotonSerializeView", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SplineWalker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SplineWalker::*)()>(&::GlobalNamespace::SplineWalker::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b165a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplineWalker*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BezierSpline>& GlobalNamespace::SplineWalker::__cordl_internal_get_spline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spline;
}
constexpr ::UnityW<::GlobalNamespace::BezierSpline> const& GlobalNamespace::SplineWalker::__cordl_internal_get_spline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spline;
}
constexpr void GlobalNamespace::SplineWalker::__cordl_internal_set_spline(::UnityW<::GlobalNamespace::BezierSpline>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spline = value;
}
constexpr ::UnityW<::GlobalNamespace::LinearSpline>& GlobalNamespace::SplineWalker::__cordl_internal_get_linearSpline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___linearSpline;
}
constexpr ::UnityW<::GlobalNamespace::LinearSpline> const& GlobalNamespace::SplineWalker::__cordl_internal_get_linearSpline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___linearSpline;
}
constexpr void GlobalNamespace::SplineWalker::__cordl_internal_set_linearSpline(::UnityW<::GlobalNamespace::LinearSpline>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___linearSpline = value;
}
constexpr float_t& GlobalNamespace::SplineWalker::__cordl_internal_get_duration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr float_t const& GlobalNamespace::SplineWalker::__cordl_internal_get_duration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr void GlobalNamespace::SplineWalker::__cordl_internal_set_duration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___duration = value;
}
constexpr bool& GlobalNamespace::SplineWalker::__cordl_internal_get_lookForward()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookForward;
}
constexpr bool const& GlobalNamespace::SplineWalker::__cordl_internal_get_lookForward() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookForward;
}
constexpr void GlobalNamespace::SplineWalker::__cordl_internal_set_lookForward(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lookForward = value;
}
constexpr ::GlobalNamespace::SplineWalkerMode& GlobalNamespace::SplineWalker::__cordl_internal_get_mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr ::GlobalNamespace::SplineWalkerMode const& GlobalNamespace::SplineWalker::__cordl_internal_get_mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr void GlobalNamespace::SplineWalker::__cordl_internal_set_mode(::GlobalNamespace::SplineWalkerMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mode = value;
}
constexpr bool& GlobalNamespace::SplineWalker::__cordl_internal_get_walkLinearPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___walkLinearPath;
}
constexpr bool const& GlobalNamespace::SplineWalker::__cordl_internal_get_walkLinearPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___walkLinearPath;
}
constexpr void GlobalNamespace::SplineWalker::__cordl_internal_set_walkLinearPath(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___walkLinearPath = value;
}
constexpr bool& GlobalNamespace::SplineWalker::__cordl_internal_get_useWorldPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useWorldPosition;
}
constexpr bool const& GlobalNamespace::SplineWalker::__cordl_internal_get_useWorldPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useWorldPosition;
}
constexpr void GlobalNamespace::SplineWalker::__cordl_internal_set_useWorldPosition(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useWorldPosition = value;
}
constexpr float_t& GlobalNamespace::SplineWalker::__cordl_internal_get_progress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progress;
}
constexpr float_t const& GlobalNamespace::SplineWalker::__cordl_internal_get_progress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progress;
}
constexpr void GlobalNamespace::SplineWalker::__cordl_internal_set_progress(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progress = value;
}
constexpr bool& GlobalNamespace::SplineWalker::__cordl_internal_get_goingForward()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___goingForward;
}
constexpr bool const& GlobalNamespace::SplineWalker::__cordl_internal_get_goingForward() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___goingForward;
}
constexpr void GlobalNamespace::SplineWalker::__cordl_internal_set_goingForward(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___goingForward = value;
}
constexpr bool& GlobalNamespace::SplineWalker::__cordl_internal_get_DoNetworkSync()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DoNetworkSync;
}
constexpr bool const& GlobalNamespace::SplineWalker::__cordl_internal_get_DoNetworkSync() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DoNetworkSync;
}
constexpr void GlobalNamespace::SplineWalker::__cordl_internal_set_DoNetworkSync(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DoNetworkSync = value;
}
constexpr ::UnityW<::Photon::Pun::PhotonView>& GlobalNamespace::SplineWalker::__cordl_internal_get__view()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____view;
}
constexpr ::UnityW<::Photon::Pun::PhotonView> const& GlobalNamespace::SplineWalker::__cordl_internal_get__view() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____view;
}
constexpr void GlobalNamespace::SplineWalker::__cordl_internal_set__view(::UnityW<::Photon::Pun::PhotonView>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____view = value;
}
inline void GlobalNamespace::SplineWalker::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplineWalker*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SplineWalker::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplineWalker*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SplineWalker::OnPhotonSerializeView(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplineWalker*>(),
                        {"OnPhotonSerializeView", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::SplineWalker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplineWalker*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SplineWalker* GlobalNamespace::SplineWalker::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SplineWalker*>());
}
/// @brief Convert operator to "::Photon::Pun::IPunObservable"
constexpr  GlobalNamespace::SplineWalker::operator ::Photon::Pun::IPunObservable*() noexcept {
return static_cast<::Photon::Pun::IPunObservable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Pun::IPunObservable"
constexpr ::Photon::Pun::IPunObservable* GlobalNamespace::SplineWalker::i___Photon__Pun__IPunObservable() noexcept {
return static_cast<::Photon::Pun::IPunObservable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SplineWalker::SplineWalker()   {
}
