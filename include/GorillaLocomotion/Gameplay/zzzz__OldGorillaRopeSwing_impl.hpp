#pragma once
// IWYU pragma private; include "GorillaLocomotion/Gameplay/OldGorillaRopeSwing.hpp"
#include "Photon/Pun/zzzz__MonoBehaviourPun_impl.hpp"
#include "UnityEngine/XR/zzzz__XRNode_impl.hpp"
#include "UnityEngine/zzzz__Rigidbody_impl.hpp"
#include "GorillaLocomotion/Gameplay/zzzz__OldGorillaRopeSwing_def.hpp"
#include "GorillaLocomotion/Gameplay/zzzz__GorillaRopeSwingSettings_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::OldGorillaRopeSwing.get_isIdle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaLocomotion::Gameplay::OldGorillaRopeSwing::*)()>(&::GorillaLocomotion::Gameplay::OldGorillaRopeSwing::get_isIdle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cee59c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::OldGorillaRopeSwing*>(),
                        {"get_isIdle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::OldGorillaRopeSwing.set_isIdle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::OldGorillaRopeSwing::*)(bool)>(&::GorillaLocomotion::Gameplay::OldGorillaRopeSwing::set_isIdle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cee5a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::OldGorillaRopeSwing*>(),
                        {"set_isIdle", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::OldGorillaRopeSwing.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::OldGorillaRopeSwing::*)()>(&::GorillaLocomotion::Gameplay::OldGorillaRopeSwing::Awake)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cee5ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::OldGorillaRopeSwing*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::OldGorillaRopeSwing.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::OldGorillaRopeSwing::*)()>(&::GorillaLocomotion::Gameplay::OldGorillaRopeSwing::OnDisable)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cee734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::OldGorillaRopeSwing*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::OldGorillaRopeSwing.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::OldGorillaRopeSwing::*)()>(&::GorillaLocomotion::Gameplay::OldGorillaRopeSwing::Update)> {
  constexpr static std::size_t size = 0x5d4;
  constexpr static std::size_t addrs = 0x5cee748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::OldGorillaRopeSwing*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::OldGorillaRopeSwing.SetIsIdle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::OldGorillaRopeSwing::*)(bool)>(&::GorillaLocomotion::Gameplay::OldGorillaRopeSwing::SetIsIdle)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5cee5b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::OldGorillaRopeSwing*>(),
                        {"SetIsIdle", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::OldGorillaRopeSwing.ToggleIsKinematic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::OldGorillaRopeSwing::*)(bool)>(&::GorillaLocomotion::Gameplay::OldGorillaRopeSwing::ToggleIsKinematic)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5ceed1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::OldGorillaRopeSwing*>(),
                        {"ToggleIsKinematic", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::OldGorillaRopeSwing.GetBone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rigidbody> (::GorillaLocomotion::Gameplay::OldGorillaRopeSwing::*)(int32_t)>(&::GorillaLocomotion::Gameplay::OldGorillaRopeSwing::GetBone)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5ceede4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::OldGorillaRopeSwing*>(),
                        {"GetBone", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::OldGorillaRopeSwing.GetBoneIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaLocomotion::Gameplay::OldGorillaRopeSwing::*)(::UnityEngine::Rigidbody*)>(&::GorillaLocomotion::Gameplay::OldGorillaRopeSwing::GetBoneIndex)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5ceee60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::OldGorillaRopeSwing*>(),
                        {"GetBoneIndex", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::OldGorillaRopeSwing.AttachLocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::OldGorillaRopeSwing::*)(::UnityEngine::XR::XRNode, ::UnityEngine::Rigidbody*, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GorillaLocomotion::Gameplay::OldGorillaRopeSwing::AttachLocalPlayer)> {
  constexpr static std::size_t size = 0x640;
  constexpr static std::size_t addrs = 0x5ceef14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::OldGorillaRopeSwing*>(),
                        {"AttachLocalPlayer", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<::UnityEngine::Rigidbody*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::OldGorillaRopeSwing.DetachLocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::OldGorillaRopeSwing::*)()>(&::GorillaLocomotion::Gameplay::OldGorillaRopeSwing::DetachLocalPlayer)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5cef82c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::OldGorillaRopeSwing*>(),
                        {"DetachLocalPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::OldGorillaRopeSwing.AttachRemotePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaLocomotion::Gameplay::OldGorillaRopeSwing::*)(int32_t, int32_t, ::UnityEngine::Transform*, ::UnityEngine::Vector3)>(&::GorillaLocomotion::Gameplay::OldGorillaRopeSwing::AttachRemotePlayer)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x5cef988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::OldGorillaRopeSwing*>(),
                        {"AttachRemotePlayer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::OldGorillaRopeSwing.DetachRemotePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::OldGorillaRopeSwing::*)(int32_t)>(&::GorillaLocomotion::Gameplay::OldGorillaRopeSwing::DetachRemotePlayer)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5cefb64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::OldGorillaRopeSwing*>(),
                        {"DetachRemotePlayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::OldGorillaRopeSwing.SetVelocity_RPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::OldGorillaRopeSwing::*)(int32_t, ::UnityEngine::Vector3, bool, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>)>(&::GorillaLocomotion::Gameplay::OldGorillaRopeSwing::SetVelocity_RPC)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x5cef554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::OldGorillaRopeSwing*>(),
                        {"SetVelocity_RPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::OldGorillaRopeSwing.SetVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::OldGorillaRopeSwing::*)(int32_t, ::UnityEngine::Vector3, bool, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>)>(&::GorillaLocomotion::Gameplay::OldGorillaRopeSwing::SetVelocity)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x5cefbbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::OldGorillaRopeSwing*>(),
                        {"SetVelocity", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::OldGorillaRopeSwing._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::OldGorillaRopeSwing::*)()>(&::GorillaLocomotion::Gameplay::OldGorillaRopeSwing::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5ceff38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::OldGorillaRopeSwing*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaLocomotion::Gameplay::OldGorillaRopeSwing::__cordl_internal_get_prefabRopeBit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefabRopeBit;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaLocomotion::Gameplay::OldGorillaRopeSwing::__cordl_internal_get_prefabRopeBit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefabRopeBit;
}
constexpr void GorillaLocomotion::Gameplay::OldGorillaRopeSwing::__cordl_internal_set_prefabRopeBit(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prefabRopeBit = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Rigidbody>>& GorillaLocomotion::Gameplay::OldGorillaRopeSwing::__cordl_internal_get_bones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bones;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Rigidbody>> const& GorillaLocomotion::Gameplay::OldGorillaRopeSwing::__cordl_internal_get_bones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bones;
}
constexpr void GorillaLocomotion::Gameplay::OldGorillaRopeSwing::__cordl_internal_set_bones(::ArrayW<::UnityW<::UnityEngine::Rigidbody>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bones = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& GorillaLocomotion::Gameplay::OldGorillaRopeSwing::__cordl_internal_get_remotePlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remotePlayers;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& GorillaLocomotion::Gameplay::OldGorillaRopeSwing::__cordl_internal_get_remotePlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remotePlayers;
}
constexpr void GorillaLocomotion::Gameplay::OldGorillaRopeSwing::__cordl_internal_set_remotePlayers(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___remotePlayers = value;
}
constexpr float_t& GorillaLocomotion::Gameplay::OldGorillaRopeSwing::__cordl_internal_get_lastGrabTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastGrabTime;
}
constexpr float_t const& GorillaLocomotion::Gameplay::OldGorillaRopeSwing::__cordl_internal_get_lastGrabTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastGrabTime;
}
constexpr void GorillaLocomotion::Gameplay::OldGorillaRopeSwing::__cordl_internal_set_lastGrabTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastGrabTime = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GorillaLocomotion::Gameplay::OldGorillaRopeSwing::__cordl_internal_get_ropeCreakSFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ropeCreakSFX;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GorillaLocomotion::Gameplay::OldGorillaRopeSwing::__cordl_internal_get_ropeCreakSFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ropeCreakSFX;
}
constexpr void GorillaLocomotion::Gameplay::OldGorillaRopeSwing::__cordl_internal_set_ropeCreakSFX(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ropeCreakSFX = value;
}
constexpr bool& GorillaLocomotion::Gameplay::OldGorillaRopeSwing::__cordl_internal_get_localPlayerOn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPlayerOn;
}
constexpr bool const& GorillaLocomotion::Gameplay::OldGorillaRopeSwing::__cordl_internal_get_localPlayerOn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPlayerOn;
}
constexpr void GorillaLocomotion::Gameplay::OldGorillaRopeSwing::__cordl_internal_set_localPlayerOn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localPlayerOn = value;
}
constexpr ::UnityEngine::XR::XRNode& GorillaLocomotion::Gameplay::OldGorillaRopeSwing::__cordl_internal_get_localPlayerXRNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPlayerXRNode;
}
constexpr ::UnityEngine::XR::XRNode const& GorillaLocomotion::Gameplay::OldGorillaRopeSwing::__cordl_internal_get_localPlayerXRNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPlayerXRNode;
}
constexpr void GorillaLocomotion::Gameplay::OldGorillaRopeSwing::__cordl_internal_set_localPlayerXRNode(::UnityEngine::XR::XRNode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localPlayerXRNode = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GorillaLocomotion::Gameplay::OldGorillaRopeSwing::__cordl_internal_get_localGrabbedRigid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localGrabbedRigid;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GorillaLocomotion::Gameplay::OldGorillaRopeSwing::__cordl_internal_get_localGrabbedRigid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localGrabbedRigid;
}
constexpr void GorillaLocomotion::Gameplay::OldGorillaRopeSwing::__cordl_internal_set_localGrabbedRigid(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localGrabbedRigid = value;
}
constexpr bool& GorillaLocomotion::Gameplay::OldGorillaRopeSwing::__cordl_internal_get__isIdle_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isIdle_k__BackingField;
}
constexpr bool const& GorillaLocomotion::Gameplay::OldGorillaRopeSwing::__cordl_internal_get__isIdle_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isIdle_k__BackingField;
}
constexpr void GorillaLocomotion::Gameplay::OldGorillaRopeSwing::__cordl_internal_set__isIdle_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isIdle_k__BackingField = value;
}
constexpr float_t& GorillaLocomotion::Gameplay::OldGorillaRopeSwing::__cordl_internal_get_potentialIdleTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___potentialIdleTimer;
}
constexpr float_t const& GorillaLocomotion::Gameplay::OldGorillaRopeSwing::__cordl_internal_get_potentialIdleTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___potentialIdleTimer;
}
constexpr void GorillaLocomotion::Gameplay::OldGorillaRopeSwing::__cordl_internal_set_potentialIdleTimer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___potentialIdleTimer = value;
}
constexpr int32_t& GorillaLocomotion::Gameplay::OldGorillaRopeSwing::__cordl_internal_get_ropeLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ropeLength;
}
constexpr int32_t const& GorillaLocomotion::Gameplay::OldGorillaRopeSwing::__cordl_internal_get_ropeLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ropeLength;
}
constexpr void GorillaLocomotion::Gameplay::OldGorillaRopeSwing::__cordl_internal_set_ropeLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ropeLength = value;
}
constexpr ::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwingSettings>& GorillaLocomotion::Gameplay::OldGorillaRopeSwing::__cordl_internal_get_settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settings;
}
constexpr ::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwingSettings> const& GorillaLocomotion::Gameplay::OldGorillaRopeSwing::__cordl_internal_get_settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settings;
}
constexpr void GorillaLocomotion::Gameplay::OldGorillaRopeSwing::__cordl_internal_set_settings(::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwingSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___settings = value;
}
inline bool GorillaLocomotion::Gameplay::OldGorillaRopeSwing::get_isIdle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::OldGorillaRopeSwing*>(),
                        {"get_isIdle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaLocomotion::Gameplay::OldGorillaRopeSwing::set_isIdle(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::OldGorillaRopeSwing*>(),
                        {"set_isIdle", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaLocomotion::Gameplay::OldGorillaRopeSwing::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::OldGorillaRopeSwing*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::Gameplay::OldGorillaRopeSwing::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::OldGorillaRopeSwing*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::Gameplay::OldGorillaRopeSwing::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::OldGorillaRopeSwing*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::Gameplay::OldGorillaRopeSwing::SetIsIdle(bool  idle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::OldGorillaRopeSwing*>(),
                        {"SetIsIdle", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, idle);
}
inline void GorillaLocomotion::Gameplay::OldGorillaRopeSwing::ToggleIsKinematic(bool  kinematic)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::OldGorillaRopeSwing*>(),
                        {"ToggleIsKinematic", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, kinematic);
}
inline ::UnityW<::UnityEngine::Rigidbody> GorillaLocomotion::Gameplay::OldGorillaRopeSwing::GetBone(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::OldGorillaRopeSwing*>(),
                        {"GetBone", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rigidbody>>(this, ___internal_method, index);
}
inline int32_t GorillaLocomotion::Gameplay::OldGorillaRopeSwing::GetBoneIndex(::UnityEngine::Rigidbody*  r)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::OldGorillaRopeSwing*>(),
                        {"GetBoneIndex", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, r);
}
inline void GorillaLocomotion::Gameplay::OldGorillaRopeSwing::AttachLocalPlayer(::UnityEngine::XR::XRNode  xrNode, ::UnityEngine::Rigidbody*  rigid, ::UnityEngine::Vector3  offset, ::UnityEngine::Vector3  velocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::OldGorillaRopeSwing*>(),
                        {"AttachLocalPlayer", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<::UnityEngine::Rigidbody*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xrNode, rigid, offset, velocity);
}
inline void GorillaLocomotion::Gameplay::OldGorillaRopeSwing::DetachLocalPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::OldGorillaRopeSwing*>(),
                        {"DetachLocalPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaLocomotion::Gameplay::OldGorillaRopeSwing::AttachRemotePlayer(int32_t  playerId, int32_t  boneIndex, ::UnityEngine::Transform*  offsetTransform, ::UnityEngine::Vector3  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::OldGorillaRopeSwing*>(),
                        {"AttachRemotePlayer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, playerId, boneIndex, offsetTransform, offset);
}
inline void GorillaLocomotion::Gameplay::OldGorillaRopeSwing::DetachRemotePlayer(int32_t  playerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::OldGorillaRopeSwing*>(),
                        {"DetachRemotePlayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId);
}
inline void GorillaLocomotion::Gameplay::OldGorillaRopeSwing::SetVelocity_RPC(int32_t  boneIndex, ::UnityEngine::Vector3  velocity, bool  wholeRope, ::ArrayW<::UnityEngine::Vector3>  ropeRotations, ::ArrayW<::UnityEngine::Vector3>  ropeVelocities)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::OldGorillaRopeSwing*>(),
                        {"SetVelocity_RPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, boneIndex, velocity, wholeRope, ropeRotations, ropeVelocities);
}
inline void GorillaLocomotion::Gameplay::OldGorillaRopeSwing::SetVelocity(int32_t  boneIndex, ::UnityEngine::Vector3  velocity, bool  wholeRope, ::ArrayW<::UnityEngine::Vector3>  ropeRotations, ::ArrayW<::UnityEngine::Vector3>  ropeVelocities)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::OldGorillaRopeSwing*>(),
                        {"SetVelocity", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, boneIndex, velocity, wholeRope, ropeRotations, ropeVelocities);
}
inline void GorillaLocomotion::Gameplay::OldGorillaRopeSwing::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::OldGorillaRopeSwing*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaLocomotion::Gameplay::OldGorillaRopeSwing* GorillaLocomotion::Gameplay::OldGorillaRopeSwing::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaLocomotion::Gameplay::OldGorillaRopeSwing*>());
}
// Ctor Parameters []
constexpr ::GorillaLocomotion::Gameplay::OldGorillaRopeSwing::OldGorillaRopeSwing()   {
}
