#pragma once
// IWYU pragma private; include "GorillaTagScripts/DecorativeItem.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_impl.hpp"
#include "GorillaTagScripts/zzzz__DecorativeItem_DecorativeItemState_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTagScripts/zzzz__DecorativeItem_def.hpp"
#include "GlobalNamespace/zzzz__DropZone_def.hpp"
#include "GlobalNamespace/zzzz__InteractionPoint_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTagScripts/zzzz__DecorativeItemReliableState_def.hpp"
#include "GorillaTagScripts/zzzz__DecorativeItem_DecorativeItemState_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_1_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::DecorativeItem.ShouldBeKinematic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::DecorativeItem::*)()>(&::GorillaTagScripts::DecorativeItem::ShouldBeKinematic)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5bb664c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::DecorativeItem*>(),
                    {::i2c::class_of<::GorillaTagScripts::DecorativeItem*>(), 41}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::DecorativeItem.OnSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::DecorativeItem::*)(::GlobalNamespace::VRRig*)>(&::GorillaTagScripts::DecorativeItem::OnSpawn)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5bb6670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::DecorativeItem*>(),
                    {::i2c::class_of<::GorillaTagScripts::DecorativeItem*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::DecorativeItem.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::DecorativeItem::*)()>(&::GorillaTagScripts::DecorativeItem::Start)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5bb66b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::DecorativeItem*>(),
                    {::i2c::class_of<::GorillaTagScripts::DecorativeItem*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::DecorativeItem.OnStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::DecorativeItem::*)()>(&::GorillaTagScripts::DecorativeItem::OnStateChanged)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5bb66d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::DecorativeItem*>(),
                        {"OnStateChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::DecorativeItem.LateUpdateShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::DecorativeItem::*)()>(&::GorillaTagScripts::DecorativeItem::LateUpdateShared)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5bb6b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::DecorativeItem*>(),
                    {::i2c::class_of<::GorillaTagScripts::DecorativeItem*>(), 50}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::DecorativeItem.LateUpdateLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::DecorativeItem::*)()>(&::GorillaTagScripts::DecorativeItem::LateUpdateLocal)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5bb6bdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::DecorativeItem*>(),
                    {::i2c::class_of<::GorillaTagScripts::DecorativeItem*>(), 54}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::DecorativeItem.OnGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::DecorativeItem::*)(::GlobalNamespace::InteractionPoint*, ::UnityEngine::GameObject*)>(&::GorillaTagScripts::DecorativeItem::OnGrab)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5bb6cd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::DecorativeItem*>(),
                    {::i2c::class_of<::GorillaTagScripts::DecorativeItem*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::DecorativeItem.OnRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::DecorativeItem::*)(::GlobalNamespace::DropZone*, ::UnityEngine::GameObject*)>(&::GorillaTagScripts::DecorativeItem::OnRelease)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5bb6cf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::DecorativeItem*>(),
                    {::i2c::class_of<::GorillaTagScripts::DecorativeItem*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::DecorativeItem.SetWillTeleport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::DecorativeItem::*)()>(&::GorillaTagScripts::DecorativeItem::SetWillTeleport)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5bb6de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::DecorativeItem*>(),
                        {"SetWillTeleport", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::DecorativeItem.Respawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::DecorativeItem::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::GorillaTagScripts::DecorativeItem::Respawn)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5bb6a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::DecorativeItem*>(),
                        {"Respawn", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::DecorativeItem.PlayVFX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::DecorativeItem::*)(::UnityEngine::GameObject*)>(&::GorillaTagScripts::DecorativeItem::PlayVFX)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5bb6e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::DecorativeItem*>(),
                        {"PlayVFX", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::DecorativeItem.Reparent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::DecorativeItem::*)(::UnityEngine::Transform*)>(&::GorillaTagScripts::DecorativeItem::Reparent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5bb6d34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::DecorativeItem*>(),
                        {"Reparent", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::DecorativeItem.SnapItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::DecorativeItem::*)(bool, ::UnityEngine::Vector3)>(&::GorillaTagScripts::DecorativeItem::SnapItem)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x5bb6738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::DecorativeItem*>(),
                        {"SnapItem", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::DecorativeItem.InvokeRespawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::DecorativeItem::*)()>(&::GorillaTagScripts::DecorativeItem::InvokeRespawn)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5bb6ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::DecorativeItem*>(),
                        {"InvokeRespawn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::DecorativeItem.ShouldPlayFX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::DecorativeItem::*)()>(&::GorillaTagScripts::DecorativeItem::ShouldPlayFX)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5bb6dfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::DecorativeItem*>(),
                        {"ShouldPlayFX", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::DecorativeItem.OnCollisionEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::DecorativeItem::*)(::UnityEngine::Collision*)>(&::GorillaTagScripts::DecorativeItem::OnCollisionEnter)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5bb703c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::DecorativeItem*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::DecorativeItem._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::DecorativeItem::*)()>(&::GorillaTagScripts::DecorativeItem::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5bb70ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::DecorativeItem*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GorillaTagScripts::DecorativeItemReliableState>& GorillaTagScripts::DecorativeItem::__cordl_internal_get_reliableState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reliableState;
}
constexpr ::UnityW<::GorillaTagScripts::DecorativeItemReliableState> const& GorillaTagScripts::DecorativeItem::__cordl_internal_get_reliableState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reliableState;
}
constexpr void GorillaTagScripts::DecorativeItem::__cordl_internal_set_reliableState(::UnityW<::GorillaTagScripts::DecorativeItemReliableState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reliableState = value;
}
constexpr ::UnityEngine::Events::UnityAction_1<::UnityW<::GorillaTagScripts::DecorativeItem>>*& GorillaTagScripts::DecorativeItem::__cordl_internal_get_respawnItem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___respawnItem;
}
constexpr ::UnityEngine::Events::UnityAction_1<::UnityW<::GorillaTagScripts::DecorativeItem>>* const& GorillaTagScripts::DecorativeItem::__cordl_internal_get_respawnItem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___respawnItem;
}
constexpr void GorillaTagScripts::DecorativeItem::__cordl_internal_set_respawnItem(::UnityEngine::Events::UnityAction_1<::UnityW<::GorillaTagScripts::DecorativeItem>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___respawnItem = value;
}
constexpr ::UnityEngine::LayerMask& GorillaTagScripts::DecorativeItem::__cordl_internal_get_breakItemLayerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___breakItemLayerMask;
}
constexpr ::UnityEngine::LayerMask const& GorillaTagScripts::DecorativeItem::__cordl_internal_get_breakItemLayerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___breakItemLayerMask;
}
constexpr void GorillaTagScripts::DecorativeItem::__cordl_internal_set_breakItemLayerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___breakItemLayerMask = value;
}
constexpr ::UnityEngine::Coroutine*& GorillaTagScripts::DecorativeItem::__cordl_internal_get_respawnTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___respawnTimer;
}
constexpr ::UnityEngine::Coroutine* const& GorillaTagScripts::DecorativeItem::__cordl_internal_get_respawnTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___respawnTimer;
}
constexpr void GorillaTagScripts::DecorativeItem::__cordl_internal_set_respawnTimer(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___respawnTimer = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTagScripts::DecorativeItem::__cordl_internal_get_parent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTagScripts::DecorativeItem::__cordl_internal_get_parent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent;
}
constexpr void GorillaTagScripts::DecorativeItem::__cordl_internal_set_parent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parent = value;
}
constexpr float_t& GorillaTagScripts::DecorativeItem::__cordl_internal_get__respawnTimestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____respawnTimestamp;
}
constexpr float_t const& GorillaTagScripts::DecorativeItem::__cordl_internal_get__respawnTimestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____respawnTimestamp;
}
constexpr void GorillaTagScripts::DecorativeItem::__cordl_internal_set__respawnTimestamp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____respawnTimestamp = value;
}
constexpr bool& GorillaTagScripts::DecorativeItem::__cordl_internal_get_isSnapped()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSnapped;
}
constexpr bool const& GorillaTagScripts::DecorativeItem::__cordl_internal_get_isSnapped() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSnapped;
}
constexpr void GorillaTagScripts::DecorativeItem::__cordl_internal_set_isSnapped(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isSnapped = value;
}
constexpr ::UnityEngine::Vector3& GorillaTagScripts::DecorativeItem::__cordl_internal_get_currentPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentPosition;
}
constexpr ::UnityEngine::Vector3 const& GorillaTagScripts::DecorativeItem::__cordl_internal_get_currentPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentPosition;
}
constexpr void GorillaTagScripts::DecorativeItem::__cordl_internal_set_currentPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentPosition = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GorillaTagScripts::DecorativeItem::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GorillaTagScripts::DecorativeItem::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GorillaTagScripts::DecorativeItem::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GorillaTagScripts::DecorativeItem::__cordl_internal_get_snapAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapAudio;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GorillaTagScripts::DecorativeItem::__cordl_internal_get_snapAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapAudio;
}
constexpr void GorillaTagScripts::DecorativeItem::__cordl_internal_set_snapAudio(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snapAudio = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::DecorativeItem::__cordl_internal_get_shatterVFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shatterVFX;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::DecorativeItem::__cordl_internal_get_shatterVFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shatterVFX;
}
constexpr void GorillaTagScripts::DecorativeItem::__cordl_internal_set_shatterVFX(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shatterVFX = value;
}
constexpr ::GlobalNamespace::DecorativeItem_DecorativeItemState& GorillaTagScripts::DecorativeItem::__cordl_internal_get_previousItemState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousItemState;
}
constexpr ::GlobalNamespace::DecorativeItem_DecorativeItemState const& GorillaTagScripts::DecorativeItem::__cordl_internal_get_previousItemState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousItemState;
}
constexpr void GorillaTagScripts::DecorativeItem::__cordl_internal_set_previousItemState(::GlobalNamespace::DecorativeItem_DecorativeItemState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___previousItemState = value;
}
inline bool GorillaTagScripts::DecorativeItem::ShouldBeKinematic()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::DecorativeItem*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTagScripts::DecorativeItem::OnSpawn(::GlobalNamespace::VRRig*  rig)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::DecorativeItem*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig);
}
inline void GorillaTagScripts::DecorativeItem::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::DecorativeItem*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::DecorativeItem::OnStateChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::DecorativeItem*>(),
                        {"OnStateChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::DecorativeItem::LateUpdateShared()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::DecorativeItem*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::DecorativeItem::LateUpdateLocal()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::DecorativeItem*>(), 54}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::DecorativeItem::OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::DecorativeItem*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointGrabbed, grabbingHand);
}
inline bool GorillaTagScripts::DecorativeItem::OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::DecorativeItem*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, zoneReleased, releasingHand);
}
inline void GorillaTagScripts::DecorativeItem::SetWillTeleport()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::DecorativeItem*>(),
                        {"SetWillTeleport", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::DecorativeItem::Respawn(::UnityEngine::Vector3  randPosition, ::UnityEngine::Quaternion  randRotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::DecorativeItem*>(),
                        {"Respawn", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, randPosition, randRotation);
}
inline void GorillaTagScripts::DecorativeItem::PlayVFX(::UnityEngine::GameObject*  vfx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::DecorativeItem*>(),
                        {"PlayVFX", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vfx);
}
inline bool GorillaTagScripts::DecorativeItem::Reparent(::UnityEngine::Transform*  _transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::DecorativeItem*>(),
                        {"Reparent", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _transform);
}
inline void GorillaTagScripts::DecorativeItem::SnapItem(bool  snap, ::UnityEngine::Vector3  attachPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::DecorativeItem*>(),
                        {"SnapItem", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, snap, attachPoint);
}
inline void GorillaTagScripts::DecorativeItem::InvokeRespawn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::DecorativeItem*>(),
                        {"InvokeRespawn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTagScripts::DecorativeItem::ShouldPlayFX()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::DecorativeItem*>(),
                        {"ShouldPlayFX", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTagScripts::DecorativeItem::OnCollisionEnter(::UnityEngine::Collision*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::DecorativeItem*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GorillaTagScripts::DecorativeItem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::DecorativeItem*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::DecorativeItem* GorillaTagScripts::DecorativeItem::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::DecorativeItem*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::DecorativeItem::DecorativeItem()   {
}
