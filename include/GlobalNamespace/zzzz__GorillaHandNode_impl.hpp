#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaHandNode.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaHandNode_def.hpp"
#include "GlobalNamespace/zzzz__GorillaHandSocket_def.hpp"
#include "GlobalNamespace/zzzz__VRMapIndex_def.hpp"
#include "GlobalNamespace/zzzz__VRMapMiddle_def.hpp"
#include "GlobalNamespace/zzzz__VRMapThumb_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaHandNode.get_isGripping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaHandNode::*)()>(&::GlobalNamespace::GorillaHandNode::get_isGripping)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x590d430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandNode*>(),
                        {"get_isGripping", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHandNode.get_isLeftHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaHandNode::*)()>(&::GlobalNamespace::GorillaHandNode::get_isLeftHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x590d4ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandNode*>(),
                        {"get_isLeftHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHandNode.get_isRightHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaHandNode::*)()>(&::GlobalNamespace::GorillaHandNode::get_isRightHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x590d4f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandNode*>(),
                        {"get_isRightHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHandNode.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHandNode::*)()>(&::GlobalNamespace::GorillaHandNode::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x590d4fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandNode*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHandNode.PollGrip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaHandNode::*)()>(&::GlobalNamespace::GorillaHandNode::PollGrip)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x590d434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandNode*>(),
                        {"PollGrip", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHandNode.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHandNode::*)()>(&::GlobalNamespace::GorillaHandNode::Setup)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x590d500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandNode*>(),
                        {"Setup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHandNode.OnTriggerStay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHandNode::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::GorillaHandNode::OnTriggerStay)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x590d930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandNode*>(),
                        {"OnTriggerStay", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHandNode.PollIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::GorillaHandNode::*)()>(&::GlobalNamespace::GorillaHandNode::PollIndex)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x590d8dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandNode*>(),
                        {"PollIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHandNode.PollMiddle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::GorillaHandNode::*)()>(&::GlobalNamespace::GorillaHandNode::PollMiddle)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x590d918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandNode*>(),
                        {"PollMiddle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHandNode.PollThumb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::GorillaHandNode::*)()>(&::GlobalNamespace::GorillaHandNode::PollThumb)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x590d8c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandNode*>(),
                        {"PollThumb", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHandNode._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHandNode::*)()>(&::GlobalNamespace::GorillaHandNode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x590d428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandNode*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::GorillaHandNode::__cordl_internal_get_rig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::GorillaHandNode::__cordl_internal_get_rig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rig;
}
constexpr void GlobalNamespace::GorillaHandNode::__cordl_internal_set_rig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rig = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& GlobalNamespace::GorillaHandNode::__cordl_internal_get_collider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GlobalNamespace::GorillaHandNode::__cordl_internal_get_collider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collider;
}
constexpr void GlobalNamespace::GorillaHandNode::__cordl_internal_set_collider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collider = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::GorillaHandNode::__cordl_internal_get_rigidbody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigidbody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::GorillaHandNode::__cordl_internal_get_rigidbody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigidbody;
}
constexpr void GlobalNamespace::GorillaHandNode::__cordl_internal_set_rigidbody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigidbody = value;
}
constexpr ::GlobalNamespace::VRMapIndex*& GlobalNamespace::GorillaHandNode::__cordl_internal_get_vrIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vrIndex;
}
constexpr ::GlobalNamespace::VRMapIndex* const& GlobalNamespace::GorillaHandNode::__cordl_internal_get_vrIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vrIndex;
}
constexpr void GlobalNamespace::GorillaHandNode::__cordl_internal_set_vrIndex(::GlobalNamespace::VRMapIndex*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vrIndex = value;
}
constexpr ::GlobalNamespace::VRMapThumb*& GlobalNamespace::GorillaHandNode::__cordl_internal_get_vrThumb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vrThumb;
}
constexpr ::GlobalNamespace::VRMapThumb* const& GlobalNamespace::GorillaHandNode::__cordl_internal_get_vrThumb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vrThumb;
}
constexpr void GlobalNamespace::GorillaHandNode::__cordl_internal_set_vrThumb(::GlobalNamespace::VRMapThumb*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vrThumb = value;
}
constexpr ::GlobalNamespace::VRMapMiddle*& GlobalNamespace::GorillaHandNode::__cordl_internal_get_vrMiddle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vrMiddle;
}
constexpr ::GlobalNamespace::VRMapMiddle* const& GlobalNamespace::GorillaHandNode::__cordl_internal_get_vrMiddle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vrMiddle;
}
constexpr void GlobalNamespace::GorillaHandNode::__cordl_internal_set_vrMiddle(::GlobalNamespace::VRMapMiddle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vrMiddle = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaHandSocket>& GlobalNamespace::GorillaHandNode::__cordl_internal_get_attachedToSocket()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachedToSocket;
}
constexpr ::UnityW<::GlobalNamespace::GorillaHandSocket> const& GlobalNamespace::GorillaHandNode::__cordl_internal_get_attachedToSocket() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachedToSocket;
}
constexpr void GlobalNamespace::GorillaHandNode::__cordl_internal_set_attachedToSocket(::UnityW<::GlobalNamespace::GorillaHandSocket>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attachedToSocket = value;
}
constexpr bool& GlobalNamespace::GorillaHandNode::__cordl_internal_get__isLeftHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isLeftHand;
}
constexpr bool const& GlobalNamespace::GorillaHandNode::__cordl_internal_get__isLeftHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isLeftHand;
}
constexpr void GlobalNamespace::GorillaHandNode::__cordl_internal_set__isLeftHand(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isLeftHand = value;
}
constexpr bool& GlobalNamespace::GorillaHandNode::__cordl_internal_get__isRightHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isRightHand;
}
constexpr bool const& GlobalNamespace::GorillaHandNode::__cordl_internal_get__isRightHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isRightHand;
}
constexpr void GlobalNamespace::GorillaHandNode::__cordl_internal_set__isRightHand(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isRightHand = value;
}
constexpr bool& GlobalNamespace::GorillaHandNode::__cordl_internal_get_ignoreSockets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreSockets;
}
constexpr bool const& GlobalNamespace::GorillaHandNode::__cordl_internal_get_ignoreSockets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreSockets;
}
constexpr void GlobalNamespace::GorillaHandNode::__cordl_internal_set_ignoreSockets(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ignoreSockets = value;
}
inline bool GlobalNamespace::GorillaHandNode::get_isGripping()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandNode*>(),
                        {"get_isGripping", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaHandNode::get_isLeftHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandNode*>(),
                        {"get_isLeftHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaHandNode::get_isRightHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandNode*>(),
                        {"get_isRightHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaHandNode::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandNode*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaHandNode::PollGrip()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandNode*>(),
                        {"PollGrip", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaHandNode::Setup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandNode*>(),
                        {"Setup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaHandNode::OnTriggerStay(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandNode*>(),
                        {"OnTriggerStay", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline float_t GlobalNamespace::GorillaHandNode::PollIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandNode*>(),
                        {"PollIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::GorillaHandNode::PollMiddle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandNode*>(),
                        {"PollMiddle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::GorillaHandNode::PollThumb()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandNode*>(),
                        {"PollThumb", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaHandNode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandNode*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaHandNode* GlobalNamespace::GorillaHandNode::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaHandNode*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaHandNode::GorillaHandNode()   {
}
