#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetSlipMitt.hpp"
#include "GlobalNamespace/zzzz__SIGadgetSlipMitt_EState_impl.hpp"
#include "GlobalNamespace/zzzz__SIGadget_impl.hpp"
#include "GorillaLocomotion/zzzz__GTPlayer_HandState_impl.hpp"
#include "UnityEngine/zzzz__AudioClip_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__SIGadgetSlipMitt_def.hpp"
#include "GlobalNamespace/zzzz__GameButtonActivatable_def.hpp"
#include "GlobalNamespace/zzzz__GameSnappable_def.hpp"
#include "GlobalNamespace/zzzz__SIGadgetSlipMitt_EState_def.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeSet_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaLocomotion/zzzz__GTPlayer_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIGadgetSlipMitt.get__HandIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SIGadgetSlipMitt::*)()>(&::GlobalNamespace::SIGadgetSlipMitt::get__HandIndex)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x58dac48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetSlipMitt*>(),
                        {"get__HandIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetSlipMitt.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetSlipMitt::*)()>(&::GlobalNamespace::SIGadgetSlipMitt::Start)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x58dad58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetSlipMitt*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetSlipMitt.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetSlipMitt::*)()>(&::GlobalNamespace::SIGadgetSlipMitt::OnDestroy)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x58db02c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetSlipMitt*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetSlipMitt._HandleStartInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetSlipMitt::*)()>(&::GlobalNamespace::SIGadgetSlipMitt::_HandleStartInteraction)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x58db2c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetSlipMitt*>(),
                        {"_HandleStartInteraction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetSlipMitt._HandleStopInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetSlipMitt::*)()>(&::GlobalNamespace::SIGadgetSlipMitt::_HandleStopInteraction)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x58db358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetSlipMitt*>(),
                        {"_HandleStopInteraction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetSlipMitt.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetSlipMitt::*)()>(&::GlobalNamespace::SIGadgetSlipMitt::FixedUpdate)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x58db3e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetSlipMitt*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetSlipMitt._HandleGTPlayerOnUpdateGravity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetSlipMitt::*)(::GorillaLocomotion::GTPlayer*)>(&::GlobalNamespace::SIGadgetSlipMitt::_HandleGTPlayerOnUpdateGravity)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x58db964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetSlipMitt*>(),
                        {"_HandleGTPlayerOnUpdateGravity", {}, {::i2c::type_of<::GorillaLocomotion::GTPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetSlipMitt.OnUpdateRemote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetSlipMitt::*)(float_t)>(&::GlobalNamespace::SIGadgetSlipMitt::OnUpdateRemote)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x58dbc0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetSlipMitt*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetSlipMitt*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetSlipMitt._CanChangeState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int64_t)>(&::GlobalNamespace::SIGadgetSlipMitt::_CanChangeState)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58dbc64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetSlipMitt*>(),
                        {"_CanChangeState", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetSlipMitt.SetStateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetSlipMitt::*)(::GlobalNamespace::SIGadgetSlipMitt_EState)>(&::GlobalNamespace::SIGadgetSlipMitt::SetStateAuthority)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x58db3a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetSlipMitt*>(),
                        {"SetStateAuthority", {}, {::i2c::type_of<::GlobalNamespace::SIGadgetSlipMitt_EState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetSlipMitt._SetStateShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetSlipMitt::*)(::GlobalNamespace::SIGadgetSlipMitt_EState)>(&::GlobalNamespace::SIGadgetSlipMitt::_SetStateShared)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58dbc48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetSlipMitt*>(),
                        {"_SetStateShared", {}, {::i2c::type_of<::GlobalNamespace::SIGadgetSlipMitt_EState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetSlipMitt._CheckInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIGadgetSlipMitt::*)()>(&::GlobalNamespace::SIGadgetSlipMitt::_CheckInput)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x58db7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetSlipMitt*>(),
                        {"_CheckInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetSlipMitt._DoAirGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetSlipMitt::*)()>(&::GlobalNamespace::SIGadgetSlipMitt::_DoAirGrab)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58dbc70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetSlipMitt*>(),
                        {"_DoAirGrab", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetSlipMitt._DoDash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetSlipMitt::*)()>(&::GlobalNamespace::SIGadgetSlipMitt::_DoDash)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x58dbd30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetSlipMitt*>(),
                        {"_DoDash", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetSlipMitt._CalculateDashSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SIGadgetSlipMitt::*)(float_t)>(&::GlobalNamespace::SIGadgetSlipMitt::_CalculateDashSpeed)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x58dbf6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetSlipMitt*>(),
                        {"_CalculateDashSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetSlipMitt._PlayHaptic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetSlipMitt::*)(float_t)>(&::GlobalNamespace::SIGadgetSlipMitt::_PlayHaptic)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x58db7f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetSlipMitt*>(),
                        {"_PlayHaptic", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetSlipMitt._PlayAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetSlipMitt::*)(int32_t)>(&::GlobalNamespace::SIGadgetSlipMitt::_PlayAudio)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x58dbff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetSlipMitt*>(),
                        {"_PlayAudio", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetSlipMitt.ApplyUpgradeNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetSlipMitt::*)(::GlobalNamespace::SIUpgradeSet)>(&::GlobalNamespace::SIGadgetSlipMitt::ApplyUpgradeNodes)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x58dc07c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetSlipMitt*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetSlipMitt*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetSlipMitt._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetSlipMitt::*)()>(&::GlobalNamespace::SIGadgetSlipMitt::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x58dc0c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetSlipMitt*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameSnappable>& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get_m_snappable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_snappable;
}
constexpr ::UnityW<::GlobalNamespace::GameSnappable> const& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get_m_snappable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_snappable;
}
constexpr void GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_set_m_snappable(::UnityW<::GlobalNamespace::GameSnappable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_snappable = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get_m_yoyoDefaultPosXform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_yoyoDefaultPosXform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get_m_yoyoDefaultPosXform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_yoyoDefaultPosXform;
}
constexpr void GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_set_m_yoyoDefaultPosXform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_yoyoDefaultPosXform = value;
}
constexpr ::UnityW<::GlobalNamespace::GameButtonActivatable>& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get_m_buttonActivatable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_buttonActivatable;
}
constexpr ::UnityW<::GlobalNamespace::GameButtonActivatable> const& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get_m_buttonActivatable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_buttonActivatable;
}
constexpr void GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_set_m_buttonActivatable(::UnityW<::GlobalNamespace::GameButtonActivatable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_buttonActivatable = value;
}
constexpr float_t& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get_m_inputActivateThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_inputActivateThreshold;
}
constexpr float_t const& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get_m_inputActivateThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_inputActivateThreshold;
}
constexpr void GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_set_m_inputActivateThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_inputActivateThreshold = value;
}
constexpr float_t& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get_m_inputDeactivateThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_inputDeactivateThreshold;
}
constexpr float_t const& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get_m_inputDeactivateThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_inputDeactivateThreshold;
}
constexpr void GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_set_m_inputDeactivateThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_inputDeactivateThreshold = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get_m_yoyoRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_yoyoRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get_m_yoyoRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_yoyoRenderer;
}
constexpr void GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_set_m_yoyoRenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_yoyoRenderer = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get_m_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get_m_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_audioSource;
}
constexpr void GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_set_m_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_audioSource = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get_m_clips()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_clips;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get_m_clips() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_clips;
}
constexpr void GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_set_m_clips(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_clips = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get_m_clipVolumes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_clipVolumes;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get_m_clipVolumes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_clipVolumes;
}
constexpr void GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_set_m_clipVolumes(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_clipVolumes = value;
}
constexpr float_t& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get_m_yankMinSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_yankMinSpeed;
}
constexpr float_t const& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get_m_yankMinSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_yankMinSpeed;
}
constexpr void GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_set_m_yankMinSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_yankMinSpeed = value;
}
constexpr float_t& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get_m_yankMaxSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_yankMaxSpeed;
}
constexpr float_t const& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get_m_yankMaxSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_yankMaxSpeed;
}
constexpr void GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_set_m_yankMaxSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_yankMaxSpeed = value;
}
constexpr float_t& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get_m_minDashSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_minDashSpeed;
}
constexpr float_t const& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get_m_minDashSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_minDashSpeed;
}
constexpr void GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_set_m_minDashSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_minDashSpeed = value;
}
constexpr float_t& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get__maxDashSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxDashSpeed;
}
constexpr float_t const& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get__maxDashSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxDashSpeed;
}
constexpr void GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_set__maxDashSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxDashSpeed = value;
}
constexpr float_t& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get_m_maxDashSpeedDefault()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_maxDashSpeedDefault;
}
constexpr float_t const& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get_m_maxDashSpeedDefault() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_maxDashSpeedDefault;
}
constexpr void GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_set_m_maxDashSpeedDefault(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_maxDashSpeedDefault = value;
}
constexpr float_t& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get_m_maxDashSpeedUpgraded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_maxDashSpeedUpgraded;
}
constexpr float_t const& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get_m_maxDashSpeedUpgraded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_maxDashSpeedUpgraded;
}
constexpr void GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_set_m_maxDashSpeedUpgraded(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_maxDashSpeedUpgraded = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get_m_speedMappingCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_speedMappingCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get_m_speedMappingCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_speedMappingCurve;
}
constexpr void GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_set_m_speedMappingCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_speedMappingCurve = value;
}
constexpr float_t& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get_m_slipperySurfacesTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_slipperySurfacesTime;
}
constexpr float_t const& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get_m_slipperySurfacesTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_slipperySurfacesTime;
}
constexpr void GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_set_m_slipperySurfacesTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_slipperySurfacesTime = value;
}
constexpr float_t& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get_m_maxInfluenceAngleDefault()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_maxInfluenceAngleDefault;
}
constexpr float_t const& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get_m_maxInfluenceAngleDefault() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_maxInfluenceAngleDefault;
}
constexpr void GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_set_m_maxInfluenceAngleDefault(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_maxInfluenceAngleDefault = value;
}
constexpr float_t& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get_m_maxInfluenceAngleUpgrade()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_maxInfluenceAngleUpgrade;
}
constexpr float_t const& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get_m_maxInfluenceAngleUpgrade() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_maxInfluenceAngleUpgrade;
}
constexpr void GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_set_m_maxInfluenceAngleUpgrade(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_maxInfluenceAngleUpgrade = value;
}
constexpr float_t& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get_m_cooldownDurationDefault()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_cooldownDurationDefault;
}
constexpr float_t const& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get_m_cooldownDurationDefault() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_cooldownDurationDefault;
}
constexpr void GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_set_m_cooldownDurationDefault(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_cooldownDurationDefault = value;
}
constexpr float_t& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get_m_cooldownDurationUpgrade()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_cooldownDurationUpgrade;
}
constexpr float_t const& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get_m_cooldownDurationUpgrade() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_cooldownDurationUpgrade;
}
constexpr void GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_set_m_cooldownDurationUpgrade(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_cooldownDurationUpgrade = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get_m_airGrabXform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_airGrabXform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get_m_airGrabXform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_airGrabXform;
}
constexpr void GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_set_m_airGrabXform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_airGrabXform = value;
}
constexpr bool& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get__isActivated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isActivated;
}
constexpr bool const& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get__isActivated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isActivated;
}
constexpr void GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_set__isActivated(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isActivated = value;
}
constexpr bool& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get__wasActivated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wasActivated;
}
constexpr bool const& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get__wasActivated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wasActivated;
}
constexpr void GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_set__wasActivated(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____wasActivated = value;
}
constexpr float_t& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get__airGrabTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____airGrabTime;
}
constexpr float_t const& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get__airGrabTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____airGrabTime;
}
constexpr void GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_set__airGrabTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____airGrabTime = value;
}
constexpr float_t& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get__airReleaseSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____airReleaseSpeed;
}
constexpr float_t const& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get__airReleaseSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____airReleaseSpeed;
}
constexpr void GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_set__airReleaseSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____airReleaseSpeed = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get__airReleaseVector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____airReleaseVector;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get__airReleaseVector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____airReleaseVector;
}
constexpr void GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_set__airReleaseVector(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____airReleaseVector = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get__attachedVRRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attachedVRRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get__attachedVRRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attachedVRRig;
}
constexpr void GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_set__attachedVRRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____attachedVRRig = value;
}
constexpr ::GlobalNamespace::GTPlayer_HandState& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get__attachedHandState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attachedHandState;
}
constexpr ::GlobalNamespace::GTPlayer_HandState const& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get__attachedHandState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attachedHandState;
}
constexpr void GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_set__attachedHandState(::GlobalNamespace::GTPlayer_HandState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____attachedHandState = value;
}
constexpr int32_t& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get__lastAttachedPlayerActorNr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastAttachedPlayerActorNr;
}
constexpr int32_t const& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get__lastAttachedPlayerActorNr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastAttachedPlayerActorNr;
}
constexpr void GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_set__lastAttachedPlayerActorNr(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastAttachedPlayerActorNr = value;
}
constexpr int32_t& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get__attachedPlayerActorNr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attachedPlayerActorNr;
}
constexpr int32_t const& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get__attachedPlayerActorNr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attachedPlayerActorNr;
}
constexpr void GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_set__attachedPlayerActorNr(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____attachedPlayerActorNr = value;
}
constexpr bool& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get__isTagged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isTagged;
}
constexpr bool const& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get__isTagged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isTagged;
}
constexpr void GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_set__isTagged(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isTagged = value;
}
constexpr ::GlobalNamespace::SIGadgetSlipMitt_EState& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
constexpr ::GlobalNamespace::SIGadgetSlipMitt_EState const& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
constexpr void GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_set__state(::GlobalNamespace::SIGadgetSlipMitt_EState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____state = value;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit>& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get__raycastHitResults()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raycastHitResults;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit> const& GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_get__raycastHitResults() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raycastHitResults;
}
constexpr void GlobalNamespace::SIGadgetSlipMitt::__cordl_internal_set__raycastHitResults(::ArrayW<::UnityEngine::RaycastHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____raycastHitResults = value;
}
inline int32_t GlobalNamespace::SIGadgetSlipMitt::get__HandIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetSlipMitt*>(),
                        {"get__HandIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetSlipMitt::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetSlipMitt*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetSlipMitt::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetSlipMitt*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetSlipMitt::_HandleStartInteraction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetSlipMitt*>(),
                        {"_HandleStartInteraction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetSlipMitt::_HandleStopInteraction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetSlipMitt*>(),
                        {"_HandleStopInteraction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetSlipMitt::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetSlipMitt*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetSlipMitt::_HandleGTPlayerOnUpdateGravity(::GorillaLocomotion::GTPlayer*  gtPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetSlipMitt*>(),
                        {"_HandleGTPlayerOnUpdateGravity", {}, {::i2c::type_of<::GorillaLocomotion::GTPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gtPlayer);
}
inline void GlobalNamespace::SIGadgetSlipMitt::OnUpdateRemote(float_t  dt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetSlipMitt*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline bool GlobalNamespace::SIGadgetSlipMitt::_CanChangeState(int64_t  newStateIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetSlipMitt*>(),
                        {"_CanChangeState", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, newStateIndex);
}
inline void GlobalNamespace::SIGadgetSlipMitt::SetStateAuthority(::GlobalNamespace::SIGadgetSlipMitt_EState  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetSlipMitt*>(),
                        {"SetStateAuthority", {}, {::i2c::type_of<::GlobalNamespace::SIGadgetSlipMitt_EState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::SIGadgetSlipMitt::_SetStateShared(::GlobalNamespace::SIGadgetSlipMitt_EState  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetSlipMitt*>(),
                        {"_SetStateShared", {}, {::i2c::type_of<::GlobalNamespace::SIGadgetSlipMitt_EState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline bool GlobalNamespace::SIGadgetSlipMitt::_CheckInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetSlipMitt*>(),
                        {"_CheckInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetSlipMitt::_DoAirGrab()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetSlipMitt*>(),
                        {"_DoAirGrab", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetSlipMitt::_DoDash()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetSlipMitt*>(),
                        {"_DoDash", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::SIGadgetSlipMitt::_CalculateDashSpeed(float_t  currentYankSpeed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetSlipMitt*>(),
                        {"_CalculateDashSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, currentYankSpeed);
}
inline void GlobalNamespace::SIGadgetSlipMitt::_PlayHaptic(float_t  strengthMultiplier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetSlipMitt*>(),
                        {"_PlayHaptic", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, strengthMultiplier);
}
inline void GlobalNamespace::SIGadgetSlipMitt::_PlayAudio(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetSlipMitt*>(),
                        {"_PlayAudio", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void GlobalNamespace::SIGadgetSlipMitt::ApplyUpgradeNodes(::GlobalNamespace::SIUpgradeSet  withUpgrades)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetSlipMitt*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, withUpgrades);
}
inline void GlobalNamespace::SIGadgetSlipMitt::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetSlipMitt*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SIGadgetSlipMitt* GlobalNamespace::SIGadgetSlipMitt::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIGadgetSlipMitt*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIGadgetSlipMitt::SIGadgetSlipMitt()   {
}
