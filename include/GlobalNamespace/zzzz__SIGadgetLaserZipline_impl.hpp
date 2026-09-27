#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetLaserZipline.hpp"
#include "GlobalNamespace/zzzz__ResettableUseCounter_impl.hpp"
#include "GlobalNamespace/zzzz__SIGadget_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__SIGadgetLaserZipline_def.hpp"
#include "GlobalNamespace/zzzz__GameButtonActivatable_def.hpp"
#include "GlobalNamespace/zzzz__ICallBack_def.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeSet_def.hpp"
#include "GlobalNamespace/zzzz__SoundBankPlayer_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIGadgetLaserZipline.AccumulateVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3)>(&::GlobalNamespace::SIGadgetLaserZipline::AccumulateVelocity)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x58d8770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetLaserZipline*>(),
                        {"AccumulateVelocity", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetLaserZipline.ResetLocalAppliedPositionOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::SIGadgetLaserZipline::ResetLocalAppliedPositionOffset)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x58d8950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetLaserZipline*>(),
                        {"ResetLocalAppliedPositionOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetLaserZipline.ReapplyPositionOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::SIGadgetLaserZipline::ReapplyPositionOffset)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x58d8b28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetLaserZipline*>(),
                        {"ReapplyPositionOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetLaserZipline.AccumulateAndApplyLocalPositionOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3)>(&::GlobalNamespace::SIGadgetLaserZipline::AccumulateAndApplyLocalPositionOffset)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x58d8c34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetLaserZipline*>(),
                        {"AccumulateAndApplyLocalPositionOffset", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetLaserZipline.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetLaserZipline::*)()>(&::GlobalNamespace::SIGadgetLaserZipline::Awake)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x58d8d9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetLaserZipline*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetLaserZipline.ClearCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetLaserZipline::*)()>(&::GlobalNamespace::SIGadgetLaserZipline::ClearCallback)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x58d9160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetLaserZipline*>(),
                        {"ClearCallback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetLaserZipline.ShowReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetLaserZipline::*)(bool)>(&::GlobalNamespace::SIGadgetLaserZipline::ShowReady)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x58d92b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetLaserZipline*>(),
                        {"ShowReady", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetLaserZipline.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetLaserZipline::*)()>(&::GlobalNamespace::SIGadgetLaserZipline::OnDestroy)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x58d92d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetLaserZipline*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetLaserZipline.OnGrabbed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetLaserZipline::*)()>(&::GlobalNamespace::SIGadgetLaserZipline::OnGrabbed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58d9304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetLaserZipline*>(),
                        {"OnGrabbed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetLaserZipline.OnSnapped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetLaserZipline::*)()>(&::GlobalNamespace::SIGadgetLaserZipline::OnSnapped)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58d9308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetLaserZipline*>(),
                        {"OnSnapped", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetLaserZipline.OnReleased
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetLaserZipline::*)()>(&::GlobalNamespace::SIGadgetLaserZipline::OnReleased)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x58d930c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetLaserZipline*>(),
                        {"OnReleased", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetLaserZipline.OnUnsnapped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetLaserZipline::*)()>(&::GlobalNamespace::SIGadgetLaserZipline::OnUnsnapped)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x58d933c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetLaserZipline*>(),
                        {"OnUnsnapped", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetLaserZipline.OnUpdateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetLaserZipline::*)(float_t)>(&::GlobalNamespace::SIGadgetLaserZipline::OnUpdateAuthority)> {
  constexpr static std::size_t size = 0xf70;
  constexpr static std::size_t addrs = 0x58d936c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetLaserZipline*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetLaserZipline*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetLaserZipline.GetStateLong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::SIGadgetLaserZipline::*)()>(&::GlobalNamespace::SIGadgetLaserZipline::GetStateLong)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x58da2dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetLaserZipline*>(),
                        {"GetStateLong", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetLaserZipline.OnUpdateRemote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetLaserZipline::*)(float_t)>(&::GlobalNamespace::SIGadgetLaserZipline::OnUpdateRemote)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x58da3dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetLaserZipline*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetLaserZipline*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetLaserZipline.OnKnockback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetLaserZipline::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::SIGadgetLaserZipline::OnKnockback)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x58da4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetLaserZipline*>(),
                        {"OnKnockback", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetLaserZipline.OnEntityStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetLaserZipline::*)(int64_t, int64_t)>(&::GlobalNamespace::SIGadgetLaserZipline::OnEntityStateChanged)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x58da524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetLaserZipline*>(),
                        {"OnEntityStateChanged", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetLaserZipline.CallBack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetLaserZipline::*)()>(&::GlobalNamespace::SIGadgetLaserZipline::CallBack)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x58da728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetLaserZipline*>(),
                        {"CallBack", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetLaserZipline.UpdateAudioPitch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetLaserZipline::*)(float_t)>(&::GlobalNamespace::SIGadgetLaserZipline::UpdateAudioPitch)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x58da3b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetLaserZipline*>(),
                        {"UpdateAudioPitch", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetLaserZipline.ApplyUpgradeNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetLaserZipline::*)(::GlobalNamespace::SIUpgradeSet)>(&::GlobalNamespace::SIGadgetLaserZipline::ApplyUpgradeNodes)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x58dab48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetLaserZipline*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetLaserZipline*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetLaserZipline._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetLaserZipline::*)()>(&::GlobalNamespace::SIGadgetLaserZipline::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x58dab90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetLaserZipline*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameButtonActivatable>& GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_get_m_buttonActivatable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_buttonActivatable;
}
constexpr ::UnityW<::GlobalNamespace::GameButtonActivatable> const& GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_get_m_buttonActivatable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_buttonActivatable;
}
constexpr void GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_set_m_buttonActivatable(::UnityW<::GlobalNamespace::GameButtonActivatable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_buttonActivatable = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_get_zipline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zipline;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_get_zipline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zipline;
}
constexpr void GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_set_zipline(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zipline = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_get_ziplineAnchorOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ziplineAnchorOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_get_ziplineAnchorOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ziplineAnchorOffset;
}
constexpr void GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_set_ziplineAnchorOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ziplineAnchorOffset = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_get_laserBeam()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___laserBeam;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_get_laserBeam() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___laserBeam;
}
constexpr void GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_set_laserBeam(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___laserBeam = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_get_laserBeamAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___laserBeamAudio;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_get_laserBeamAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___laserBeamAudio;
}
constexpr void GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_set_laserBeamAudio(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___laserBeamAudio = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_get_onUseAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onUseAudio;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_get_onUseAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onUseAudio;
}
constexpr void GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_set_onUseAudio(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onUseAudio = value;
}
constexpr float_t& GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_get_cooldownDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldownDuration;
}
constexpr float_t const& GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_get_cooldownDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldownDuration;
}
constexpr void GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_set_cooldownDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cooldownDuration = value;
}
constexpr bool& GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_get_cooldownOnUseUntilTouchGround()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldownOnUseUntilTouchGround;
}
constexpr bool const& GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_get_cooldownOnUseUntilTouchGround() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldownOnUseUntilTouchGround;
}
constexpr void GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_set_cooldownOnUseUntilTouchGround(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cooldownOnUseUntilTouchGround = value;
}
constexpr int32_t& GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_get_maxSuperchargeUses()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSuperchargeUses;
}
constexpr int32_t const& GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_get_maxSuperchargeUses() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSuperchargeUses;
}
constexpr void GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_set_maxSuperchargeUses(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxSuperchargeUses = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_get_audioSingleUse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSingleUse;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_get_audioSingleUse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSingleUse;
}
constexpr void GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_set_audioSingleUse(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSingleUse = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_get_audioReusable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioReusable;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_get_audioReusable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioReusable;
}
constexpr void GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_set_audioReusable(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioReusable = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_get_audioUsedUp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioUsedUp;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_get_audioUsedUp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioUsedUp;
}
constexpr void GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_set_audioUsedUp(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioUsedUp = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_get_audioRecharged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioRecharged;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_get_audioRecharged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioRecharged;
}
constexpr void GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_set_audioRecharged(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioRecharged = value;
}
constexpr float_t& GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_get_upgradedSpeedBoost()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgradedSpeedBoost;
}
constexpr float_t const& GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_get_upgradedSpeedBoost() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgradedSpeedBoost;
}
constexpr void GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_set_upgradedSpeedBoost(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upgradedSpeedBoost = value;
}
constexpr float_t& GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_get_speedBoostVelocityCap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speedBoostVelocityCap;
}
constexpr float_t const& GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_get_speedBoostVelocityCap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speedBoostVelocityCap;
}
constexpr void GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_set_speedBoostVelocityCap(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speedBoostVelocityCap = value;
}
constexpr bool& GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_get_hasActiveCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasActiveCallback;
}
constexpr bool const& GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_get_hasActiveCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasActiveCallback;
}
constexpr void GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_set_hasActiveCallback(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasActiveCallback = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_get_activeCallbackOnRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeCallbackOnRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_get_activeCallbackOnRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeCallbackOnRig;
}
constexpr void GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_set_activeCallbackOnRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeCallbackOnRig = value;
}
constexpr bool& GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_get_isTriggerPressed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isTriggerPressed;
}
constexpr bool const& GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_get_isTriggerPressed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isTriggerPressed;
}
constexpr void GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_set_isTriggerPressed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isTriggerPressed = value;
}
constexpr bool& GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_get_wasTriggerPressed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasTriggerPressed;
}
constexpr bool const& GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_get_wasTriggerPressed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasTriggerPressed;
}
constexpr void GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_set_wasTriggerPressed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasTriggerPressed = value;
}
constexpr bool& GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_get_isLineBroken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLineBroken;
}
constexpr bool const& GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_get_isLineBroken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLineBroken;
}
constexpr void GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_set_isLineBroken(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isLineBroken = value;
}
constexpr bool& GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_get_wasSlidingUngrounded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasSlidingUngrounded;
}
constexpr bool const& GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_get_wasSlidingUngrounded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasSlidingUngrounded;
}
constexpr void GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_set_wasSlidingUngrounded(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasSlidingUngrounded = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_get_activatedAtRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activatedAtRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_get_activatedAtRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activatedAtRotation;
}
constexpr void GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_set_activatedAtRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activatedAtRotation = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_get_activatedAtPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activatedAtPoint;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_get_activatedAtPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activatedAtPoint;
}
constexpr void GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_set_activatedAtPoint(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activatedAtPoint = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_get_ziplineDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ziplineDirection;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_get_ziplineDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ziplineDirection;
}
constexpr void GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_set_ziplineDirection(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ziplineDirection = value;
}
constexpr float_t& GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_get_coolingDownUntilTimestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coolingDownUntilTimestamp;
}
constexpr float_t const& GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_get_coolingDownUntilTimestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coolingDownUntilTimestamp;
}
constexpr void GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_set_coolingDownUntilTimestamp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___coolingDownUntilTimestamp = value;
}
constexpr ::GlobalNamespace::ResettableUseCounter& GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_get_groundedCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groundedCooldown;
}
constexpr ::GlobalNamespace::ResettableUseCounter const& GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_get_groundedCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groundedCooldown;
}
constexpr void GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_set_groundedCooldown(::GlobalNamespace::ResettableUseCounter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___groundedCooldown = value;
}
constexpr float_t& GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_get__speedBoost()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____speedBoost;
}
constexpr float_t const& GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_get__speedBoost() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____speedBoost;
}
constexpr void GlobalNamespace::SIGadgetLaserZipline::__cordl_internal_set__speedBoost(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____speedBoost = value;
}
inline void GlobalNamespace::SIGadgetLaserZipline::setStaticF_s_localPlayerVelocityFrame(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_localPlayerVelocityFrame", ::GlobalNamespace::SIGadgetLaserZipline*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::SIGadgetLaserZipline::getStaticF_s_localPlayerVelocityFrame()  {
return ::cordl_internals::getStaticField<int32_t, "s_localPlayerVelocityFrame", ::GlobalNamespace::SIGadgetLaserZipline*>();
}
inline void GlobalNamespace::SIGadgetLaserZipline::setStaticF_s_LocalPlayerAccumulatedVelocity(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "s_LocalPlayerAccumulatedVelocity", ::GlobalNamespace::SIGadgetLaserZipline*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::SIGadgetLaserZipline::getStaticF_s_LocalPlayerAccumulatedVelocity()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "s_LocalPlayerAccumulatedVelocity", ::GlobalNamespace::SIGadgetLaserZipline*>();
}
inline void GlobalNamespace::SIGadgetLaserZipline::setStaticF_s_LocalPlayerNumAccumulatedVelocities(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_LocalPlayerNumAccumulatedVelocities", ::GlobalNamespace::SIGadgetLaserZipline*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::SIGadgetLaserZipline::getStaticF_s_LocalPlayerNumAccumulatedVelocities()  {
return ::cordl_internals::getStaticField<int32_t, "s_LocalPlayerNumAccumulatedVelocities", ::GlobalNamespace::SIGadgetLaserZipline*>();
}
inline void GlobalNamespace::SIGadgetLaserZipline::setStaticF_s_LocalPlayerPositionFrame(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_LocalPlayerPositionFrame", ::GlobalNamespace::SIGadgetLaserZipline*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::SIGadgetLaserZipline::getStaticF_s_LocalPlayerPositionFrame()  {
return ::cordl_internals::getStaticField<int32_t, "s_LocalPlayerPositionFrame", ::GlobalNamespace::SIGadgetLaserZipline*>();
}
inline void GlobalNamespace::SIGadgetLaserZipline::setStaticF_s_LocalPlayerAccumulatedPositionOffset(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "s_LocalPlayerAccumulatedPositionOffset", ::GlobalNamespace::SIGadgetLaserZipline*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::SIGadgetLaserZipline::getStaticF_s_LocalPlayerAccumulatedPositionOffset()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "s_LocalPlayerAccumulatedPositionOffset", ::GlobalNamespace::SIGadgetLaserZipline*>();
}
inline void GlobalNamespace::SIGadgetLaserZipline::setStaticF_s_LocalPlayerAppliedPositionOffset(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "s_LocalPlayerAppliedPositionOffset", ::GlobalNamespace::SIGadgetLaserZipline*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::SIGadgetLaserZipline::getStaticF_s_LocalPlayerAppliedPositionOffset()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "s_LocalPlayerAppliedPositionOffset", ::GlobalNamespace::SIGadgetLaserZipline*>();
}
inline void GlobalNamespace::SIGadgetLaserZipline::AccumulateVelocity(::UnityEngine::Vector3  desiredVelocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetLaserZipline*>(),
                        {"AccumulateVelocity", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, desiredVelocity);
}
inline void GlobalNamespace::SIGadgetLaserZipline::ResetLocalAppliedPositionOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetLaserZipline*>(),
                        {"ResetLocalAppliedPositionOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::SIGadgetLaserZipline::ReapplyPositionOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetLaserZipline*>(),
                        {"ReapplyPositionOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::SIGadgetLaserZipline::AccumulateAndApplyLocalPositionOffset(::UnityEngine::Vector3  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetLaserZipline*>(),
                        {"AccumulateAndApplyLocalPositionOffset", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, offset);
}
inline void GlobalNamespace::SIGadgetLaserZipline::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetLaserZipline*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetLaserZipline::ClearCallback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetLaserZipline*>(),
                        {"ClearCallback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetLaserZipline::ShowReady(bool  isReady)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetLaserZipline*>(),
                        {"ShowReady", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isReady);
}
inline void GlobalNamespace::SIGadgetLaserZipline::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetLaserZipline*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetLaserZipline::OnGrabbed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetLaserZipline*>(),
                        {"OnGrabbed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetLaserZipline::OnSnapped()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetLaserZipline*>(),
                        {"OnSnapped", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetLaserZipline::OnReleased()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetLaserZipline*>(),
                        {"OnReleased", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetLaserZipline::OnUnsnapped()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetLaserZipline*>(),
                        {"OnUnsnapped", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetLaserZipline::OnUpdateAuthority(float_t  dt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetLaserZipline*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline int64_t GlobalNamespace::SIGadgetLaserZipline::GetStateLong()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetLaserZipline*>(),
                        {"GetStateLong", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetLaserZipline::OnUpdateRemote(float_t  dt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetLaserZipline*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::SIGadgetLaserZipline::OnKnockback(::UnityEngine::Vector3  knockbackVector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetLaserZipline*>(),
                        {"OnKnockback", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, knockbackVector);
}
inline void GlobalNamespace::SIGadgetLaserZipline::OnEntityStateChanged(int64_t  oldState, int64_t  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetLaserZipline*>(),
                        {"OnEntityStateChanged", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldState, newState);
}
inline void GlobalNamespace::SIGadgetLaserZipline::CallBack()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetLaserZipline*>(),
                        {"CallBack", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetLaserZipline::UpdateAudioPitch(float_t  playerSpeed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetLaserZipline*>(),
                        {"UpdateAudioPitch", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerSpeed);
}
inline void GlobalNamespace::SIGadgetLaserZipline::ApplyUpgradeNodes(::GlobalNamespace::SIUpgradeSet  withUpgrades)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetLaserZipline*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, withUpgrades);
}
inline void GlobalNamespace::SIGadgetLaserZipline::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetLaserZipline*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SIGadgetLaserZipline* GlobalNamespace::SIGadgetLaserZipline::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIGadgetLaserZipline*>());
}
/// @brief Convert operator to "::GlobalNamespace::ICallBack"
constexpr  GlobalNamespace::SIGadgetLaserZipline::operator ::GlobalNamespace::ICallBack*() noexcept {
return static_cast<::GlobalNamespace::ICallBack*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ICallBack"
constexpr ::GlobalNamespace::ICallBack* GlobalNamespace::SIGadgetLaserZipline::i___GlobalNamespace__ICallBack() noexcept {
return static_cast<::GlobalNamespace::ICallBack*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIGadgetLaserZipline::SIGadgetLaserZipline()   {
}
