#pragma once
// IWYU pragma private; include "GlobalNamespace/StickyHand.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__StickyHand_def.hpp"
#include "GlobalNamespace/zzzz__SoundBankPlayer_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "GorillaTag/zzzz__ISpawnable_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StickyHand.GorillaTag_ISpawnable_get_IsSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::StickyHand::*)()>(&::GlobalNamespace::StickyHand::GorillaTag_ISpawnable_get_IsSpawned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x565c57c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyHand*>(),
                        {"GorillaTag.ISpawnable.get_IsSpawned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StickyHand.GorillaTag_ISpawnable_set_IsSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StickyHand::*)(bool)>(&::GlobalNamespace::StickyHand::GorillaTag_ISpawnable_set_IsSpawned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x565c584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyHand*>(),
                        {"GorillaTag.ISpawnable.set_IsSpawned", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StickyHand.get_CosmeticSelectedSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTag::CosmeticSystem::ECosmeticSelectSide (::GlobalNamespace::StickyHand::*)()>(&::GlobalNamespace::StickyHand::get_CosmeticSelectedSide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x565c58c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyHand*>(),
                        {"get_CosmeticSelectedSide", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StickyHand.set_CosmeticSelectedSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StickyHand::*)(::GorillaTag::CosmeticSystem::ECosmeticSelectSide)>(&::GlobalNamespace::StickyHand::set_CosmeticSelectedSide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x565c594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyHand*>(),
                        {"set_CosmeticSelectedSide", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StickyHand.GorillaTag_ISpawnable_OnSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StickyHand::*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::StickyHand::GorillaTag_ISpawnable_OnSpawn)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x565c59c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyHand*>(),
                        {"GorillaTag.ISpawnable.OnSpawn", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StickyHand.GorillaTag_ISpawnable_OnDespawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StickyHand::*)()>(&::GlobalNamespace::StickyHand::GorillaTag_ISpawnable_OnDespawn)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x565c6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyHand*>(),
                        {"GorillaTag.ISpawnable.OnDespawn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StickyHand.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StickyHand::*)()>(&::GlobalNamespace::StickyHand::Update)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x565c6c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyHand*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StickyHand.Stick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StickyHand::*)()>(&::GlobalNamespace::StickyHand::Stick)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x565c9e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyHand*>(),
                        {"Stick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StickyHand.Unstick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StickyHand::*)()>(&::GlobalNamespace::StickyHand::Unstick)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x565c98c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyHand*>(),
                        {"Unstick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StickyHand.OnCollisionStay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StickyHand::*)(::UnityEngine::Collision*)>(&::GlobalNamespace::StickyHand::OnCollisionStay)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x565ca44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyHand*>(),
                        {"OnCollisionStay", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StickyHand._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StickyHand::*)()>(&::GlobalNamespace::StickyHand::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x565ccf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyHand*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::StickyHand::__cordl_internal_get_flatHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatHand;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::StickyHand::__cordl_internal_get_flatHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatHand;
}
constexpr void GlobalNamespace::StickyHand::__cordl_internal_set_flatHand(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flatHand = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::StickyHand::__cordl_internal_get_regularHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___regularHand;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::StickyHand::__cordl_internal_get_regularHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___regularHand;
}
constexpr void GlobalNamespace::StickyHand::__cordl_internal_set_regularHand(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___regularHand = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::StickyHand::__cordl_internal_get_rb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rb;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::StickyHand::__cordl_internal_get_rb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rb;
}
constexpr void GlobalNamespace::StickyHand::__cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rb = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::StickyHand::__cordl_internal_get_stringParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stringParent;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::StickyHand::__cordl_internal_get_stringParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stringParent;
}
constexpr void GlobalNamespace::StickyHand::__cordl_internal_set_stringParent(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stringParent = value;
}
constexpr float_t& GlobalNamespace::StickyHand::__cordl_internal_get_surfaceOffsetDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfaceOffsetDistance;
}
constexpr float_t const& GlobalNamespace::StickyHand::__cordl_internal_get_surfaceOffsetDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfaceOffsetDistance;
}
constexpr void GlobalNamespace::StickyHand::__cordl_internal_set_surfaceOffsetDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___surfaceOffsetDistance = value;
}
constexpr float_t& GlobalNamespace::StickyHand::__cordl_internal_get_stringMaxAttachLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stringMaxAttachLength;
}
constexpr float_t const& GlobalNamespace::StickyHand::__cordl_internal_get_stringMaxAttachLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stringMaxAttachLength;
}
constexpr void GlobalNamespace::StickyHand::__cordl_internal_set_stringMaxAttachLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stringMaxAttachLength = value;
}
constexpr float_t& GlobalNamespace::StickyHand::__cordl_internal_get_stringDetachLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stringDetachLength;
}
constexpr float_t const& GlobalNamespace::StickyHand::__cordl_internal_get_stringDetachLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stringDetachLength;
}
constexpr void GlobalNamespace::StickyHand::__cordl_internal_set_stringDetachLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stringDetachLength = value;
}
constexpr float_t& GlobalNamespace::StickyHand::__cordl_internal_get_stringTeleportLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stringTeleportLength;
}
constexpr float_t const& GlobalNamespace::StickyHand::__cordl_internal_get_stringTeleportLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stringTeleportLength;
}
constexpr void GlobalNamespace::StickyHand::__cordl_internal_set_stringTeleportLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stringTeleportLength = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::StickyHand::__cordl_internal_get_thwackSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thwackSound;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::StickyHand::__cordl_internal_get_thwackSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thwackSound;
}
constexpr void GlobalNamespace::StickyHand::__cordl_internal_set_thwackSound(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___thwackSound = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::StickyHand::__cordl_internal_get_schlupSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___schlupSound;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::StickyHand::__cordl_internal_get_schlupSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___schlupSound;
}
constexpr void GlobalNamespace::StickyHand::__cordl_internal_set_schlupSound(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___schlupSound = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::StickyHand::__cordl_internal_get_myRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::StickyHand::__cordl_internal_get_myRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRig;
}
constexpr void GlobalNamespace::StickyHand::__cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myRig = value;
}
constexpr bool& GlobalNamespace::StickyHand::__cordl_internal_get_isLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLocal;
}
constexpr bool const& GlobalNamespace::StickyHand::__cordl_internal_get_isLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLocal;
}
constexpr void GlobalNamespace::StickyHand::__cordl_internal_set_isLocal(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isLocal = value;
}
constexpr int32_t& GlobalNamespace::StickyHand::__cordl_internal_get_stateBitIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateBitIndex;
}
constexpr int32_t const& GlobalNamespace::StickyHand::__cordl_internal_get_stateBitIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateBitIndex;
}
constexpr void GlobalNamespace::StickyHand::__cordl_internal_set_stateBitIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stateBitIndex = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::StickyHand::__cordl_internal_get_defaultLocalPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultLocalPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::StickyHand::__cordl_internal_get_defaultLocalPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultLocalPosition;
}
constexpr void GlobalNamespace::StickyHand::__cordl_internal_set_defaultLocalPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultLocalPosition = value;
}
constexpr bool& GlobalNamespace::StickyHand::__cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GorillaTag_ISpawnable_IsSpawned_k__BackingField;
}
constexpr bool const& GlobalNamespace::StickyHand::__cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GorillaTag_ISpawnable_IsSpawned_k__BackingField;
}
constexpr void GlobalNamespace::StickyHand::__cordl_internal_set__GorillaTag_ISpawnable_IsSpawned_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GorillaTag_ISpawnable_IsSpawned_k__BackingField = value;
}
constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& GlobalNamespace::StickyHand::__cordl_internal_get__CosmeticSelectedSide_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CosmeticSelectedSide_k__BackingField;
}
constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& GlobalNamespace::StickyHand::__cordl_internal_get__CosmeticSelectedSide_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CosmeticSelectedSide_k__BackingField;
}
constexpr void GlobalNamespace::StickyHand::__cordl_internal_set__CosmeticSelectedSide_k__BackingField(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CosmeticSelectedSide_k__BackingField = value;
}
inline bool GlobalNamespace::StickyHand::GorillaTag_ISpawnable_get_IsSpawned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyHand*>(),
                        {"GorillaTag.ISpawnable.get_IsSpawned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::StickyHand::GorillaTag_ISpawnable_set_IsSpawned(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyHand*>(),
                        {"GorillaTag.ISpawnable.set_IsSpawned", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide GlobalNamespace::StickyHand::get_CosmeticSelectedSide()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyHand*>(),
                        {"get_CosmeticSelectedSide", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>(this, ___internal_method);
}
inline void GlobalNamespace::StickyHand::set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyHand*>(),
                        {"set_CosmeticSelectedSide", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::StickyHand::GorillaTag_ISpawnable_OnSpawn(::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyHand*>(),
                        {"GorillaTag.ISpawnable.OnSpawn", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig);
}
inline void GlobalNamespace::StickyHand::GorillaTag_ISpawnable_OnDespawn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyHand*>(),
                        {"GorillaTag.ISpawnable.OnDespawn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StickyHand::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyHand*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StickyHand::Stick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyHand*>(),
                        {"Stick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StickyHand::Unstick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyHand*>(),
                        {"Unstick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StickyHand::OnCollisionStay(::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyHand*>(),
                        {"OnCollisionStay", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collision);
}
inline void GlobalNamespace::StickyHand::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyHand*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::StickyHand* GlobalNamespace::StickyHand::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StickyHand*>());
}
/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr  GlobalNamespace::StickyHand::operator ::GorillaTag::ISpawnable*() noexcept {
return static_cast<::GorillaTag::ISpawnable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* GlobalNamespace::StickyHand::i___GorillaTag__ISpawnable() noexcept {
return static_cast<::GorillaTag::ISpawnable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StickyHand::StickyHand()   {
}
