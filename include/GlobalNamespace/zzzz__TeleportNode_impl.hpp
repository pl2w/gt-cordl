#pragma once
// IWYU pragma private; include "GlobalNamespace/TeleportNode.hpp"
#include "GlobalNamespace/zzzz__GTZone_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaTriggerBox_impl.hpp"
#include "GlobalNamespace/zzzz__XSceneRef_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__TeleportNode_def.hpp"
#include "GlobalNamespace/zzzz__TeleportNode_def.hpp"
#include "GorillaLocomotion/zzzz__GTPlayer_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TeleportNode.SetDestinationOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TeleportNode::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::TeleportNode::SetDestinationOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b2d0c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportNode*>(),
                        {"SetDestinationOverride", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TeleportNode.ClearDestinationOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TeleportNode::*)()>(&::GlobalNamespace::TeleportNode::ClearDestinationOverride)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b2d0cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportNode*>(),
                        {"ClearDestinationOverride", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TeleportNode.OnBoxTriggered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TeleportNode::*)()>(&::GlobalNamespace::TeleportNode::OnBoxTriggered)> {
  constexpr static std::size_t size = 0x640;
  constexpr static std::size_t addrs = 0x5b2d0d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TeleportNode*>(),
                    {::i2c::class_of<::GlobalNamespace::TeleportNode*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TeleportNode.DelayedTeleport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::TeleportNode::*)(::GorillaLocomotion::GTPlayer*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::GlobalNamespace::TeleportNode::DelayedTeleport)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5b2d718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportNode*>(),
                        {"DelayedTeleport", {}, {::i2c::type_of<::GorillaLocomotion::GTPlayer*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TeleportNode._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TeleportNode::*)()>(&::GlobalNamespace::TeleportNode::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b2d7f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportNode*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::XSceneRef& GlobalNamespace::TeleportNode::__cordl_internal_get_teleportFromRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teleportFromRef;
}
constexpr ::GlobalNamespace::XSceneRef const& GlobalNamespace::TeleportNode::__cordl_internal_get_teleportFromRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teleportFromRef;
}
constexpr void GlobalNamespace::TeleportNode::__cordl_internal_set_teleportFromRef(::GlobalNamespace::XSceneRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___teleportFromRef = value;
}
constexpr ::GlobalNamespace::XSceneRef& GlobalNamespace::TeleportNode::__cordl_internal_get_teleportToRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teleportToRef;
}
constexpr ::GlobalNamespace::XSceneRef const& GlobalNamespace::TeleportNode::__cordl_internal_get_teleportToRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teleportToRef;
}
constexpr void GlobalNamespace::TeleportNode::__cordl_internal_set_teleportToRef(::GlobalNamespace::XSceneRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___teleportToRef = value;
}
constexpr ::GlobalNamespace::GTZone& GlobalNamespace::TeleportNode::__cordl_internal_get_teleportToZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teleportToZone;
}
constexpr ::GlobalNamespace::GTZone const& GlobalNamespace::TeleportNode::__cordl_internal_get_teleportToZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teleportToZone;
}
constexpr void GlobalNamespace::TeleportNode::__cordl_internal_set_teleportToZone(::GlobalNamespace::GTZone  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___teleportToZone = value;
}
constexpr bool& GlobalNamespace::TeleportNode::__cordl_internal_get_seamless()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seamless;
}
constexpr bool const& GlobalNamespace::TeleportNode::__cordl_internal_get_seamless() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seamless;
}
constexpr void GlobalNamespace::TeleportNode::__cordl_internal_set_seamless(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seamless = value;
}
constexpr bool& GlobalNamespace::TeleportNode::__cordl_internal_get_keepVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keepVelocity;
}
constexpr bool const& GlobalNamespace::TeleportNode::__cordl_internal_get_keepVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keepVelocity;
}
constexpr void GlobalNamespace::TeleportNode::__cordl_internal_set_keepVelocity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keepVelocity = value;
}
constexpr bool& GlobalNamespace::TeleportNode::__cordl_internal_get_subsOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subsOnly;
}
constexpr bool const& GlobalNamespace::TeleportNode::__cordl_internal_get_subsOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subsOnly;
}
constexpr void GlobalNamespace::TeleportNode::__cordl_internal_set_subsOnly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subsOnly = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::TeleportNode::__cordl_internal_get_onTeleport()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onTeleport;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::TeleportNode::__cordl_internal_get_onTeleport() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onTeleport;
}
constexpr void GlobalNamespace::TeleportNode::__cordl_internal_set_onTeleport(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onTeleport = value;
}
constexpr float_t& GlobalNamespace::TeleportNode::__cordl_internal_get_teleportTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teleportTime;
}
constexpr float_t const& GlobalNamespace::TeleportNode::__cordl_internal_get_teleportTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teleportTime;
}
constexpr void GlobalNamespace::TeleportNode::__cordl_internal_set_teleportTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___teleportTime = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::TeleportNode::__cordl_internal_get_destinationOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destinationOverride;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::TeleportNode::__cordl_internal_get_destinationOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destinationOverride;
}
constexpr void GlobalNamespace::TeleportNode::__cordl_internal_set_destinationOverride(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___destinationOverride = value;
}
inline void GlobalNamespace::TeleportNode::SetDestinationOverride(::UnityEngine::Transform*  destination)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportNode*>(),
                        {"SetDestinationOverride", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destination);
}
inline void GlobalNamespace::TeleportNode::ClearDestinationOverride()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportNode*>(),
                        {"ClearDestinationOverride", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TeleportNode::OnBoxTriggered()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TeleportNode*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::TeleportNode::DelayedTeleport(::GorillaLocomotion::GTPlayer*  p, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportNode*>(),
                        {"DelayedTeleport", {}, {::i2c::type_of<::GorillaLocomotion::GTPlayer*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, p, position, rotation);
}
inline void GlobalNamespace::TeleportNode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportNode*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TeleportNode* GlobalNamespace::TeleportNode::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TeleportNode*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TeleportNode::TeleportNode()   {
}
//  Writing Method size for method: ::GlobalNamespace::TeleportNode__DelayedTeleport_d__12._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TeleportNode__DelayedTeleport_d__12::*)(int32_t)>(&::GlobalNamespace::TeleportNode__DelayedTeleport_d__12::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b2d80c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportNode__DelayedTeleport_d__12*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TeleportNode__DelayedTeleport_d__12.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TeleportNode__DelayedTeleport_d__12::*)()>(&::GlobalNamespace::TeleportNode__DelayedTeleport_d__12::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b2d834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportNode__DelayedTeleport_d__12*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TeleportNode__DelayedTeleport_d__12.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TeleportNode__DelayedTeleport_d__12::*)()>(&::GlobalNamespace::TeleportNode__DelayedTeleport_d__12::MoveNext)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5b2d838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportNode__DelayedTeleport_d__12*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TeleportNode__DelayedTeleport_d__12.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::TeleportNode__DelayedTeleport_d__12::*)()>(&::GlobalNamespace::TeleportNode__DelayedTeleport_d__12::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b2d8f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportNode__DelayedTeleport_d__12*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TeleportNode__DelayedTeleport_d__12.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TeleportNode__DelayedTeleport_d__12::*)()>(&::GlobalNamespace::TeleportNode__DelayedTeleport_d__12::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b2d8fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportNode__DelayedTeleport_d__12*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TeleportNode__DelayedTeleport_d__12.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::TeleportNode__DelayedTeleport_d__12::*)()>(&::GlobalNamespace::TeleportNode__DelayedTeleport_d__12::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b2d934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportNode__DelayedTeleport_d__12*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::TeleportNode__DelayedTeleport_d__12::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::TeleportNode__DelayedTeleport_d__12::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::TeleportNode__DelayedTeleport_d__12::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::TeleportNode__DelayedTeleport_d__12::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::TeleportNode__DelayedTeleport_d__12::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::TeleportNode__DelayedTeleport_d__12::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GorillaLocomotion::GTPlayer>& GlobalNamespace::TeleportNode__DelayedTeleport_d__12::__cordl_internal_get_p()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___p;
}
constexpr ::UnityW<::GorillaLocomotion::GTPlayer> const& GlobalNamespace::TeleportNode__DelayedTeleport_d__12::__cordl_internal_get_p() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___p;
}
constexpr void GlobalNamespace::TeleportNode__DelayedTeleport_d__12::__cordl_internal_set_p(::UnityW<::GorillaLocomotion::GTPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___p = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::TeleportNode__DelayedTeleport_d__12::__cordl_internal_get_position()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___position;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::TeleportNode__DelayedTeleport_d__12::__cordl_internal_get_position() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___position;
}
constexpr void GlobalNamespace::TeleportNode__DelayedTeleport_d__12::__cordl_internal_set_position(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___position = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::TeleportNode__DelayedTeleport_d__12::__cordl_internal_get_rotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::TeleportNode__DelayedTeleport_d__12::__cordl_internal_get_rotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotation;
}
constexpr void GlobalNamespace::TeleportNode__DelayedTeleport_d__12::__cordl_internal_set_rotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotation = value;
}
constexpr ::UnityW<::GlobalNamespace::TeleportNode>& GlobalNamespace::TeleportNode__DelayedTeleport_d__12::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::TeleportNode> const& GlobalNamespace::TeleportNode__DelayedTeleport_d__12::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::TeleportNode__DelayedTeleport_d__12::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::TeleportNode>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::TeleportNode__DelayedTeleport_d__12::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportNode__DelayedTeleport_d__12*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::TeleportNode__DelayedTeleport_d__12::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportNode__DelayedTeleport_d__12*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::TeleportNode__DelayedTeleport_d__12::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportNode__DelayedTeleport_d__12*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::TeleportNode__DelayedTeleport_d__12::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportNode__DelayedTeleport_d__12*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::TeleportNode__DelayedTeleport_d__12::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportNode__DelayedTeleport_d__12*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::TeleportNode__DelayedTeleport_d__12::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportNode__DelayedTeleport_d__12*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::TeleportNode__DelayedTeleport_d__12* GlobalNamespace::TeleportNode__DelayedTeleport_d__12::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TeleportNode__DelayedTeleport_d__12*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::TeleportNode__DelayedTeleport_d__12::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::TeleportNode__DelayedTeleport_d__12::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::TeleportNode__DelayedTeleport_d__12::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::TeleportNode__DelayedTeleport_d__12::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::TeleportNode__DelayedTeleport_d__12::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::TeleportNode__DelayedTeleport_d__12::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TeleportNode__DelayedTeleport_d__12::TeleportNode__DelayedTeleport_d__12()   {
}
