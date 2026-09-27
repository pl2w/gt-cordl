#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaGestureTracker.hpp"
#include "GlobalNamespace/zzzz__GorillaHandGesture_impl.hpp"
#include "GlobalNamespace/zzzz__VRMap_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaGestureTracker_def.hpp"
#include "GlobalNamespace/zzzz__GestureDigitNode_def.hpp"
#include "GlobalNamespace/zzzz__GestureHandNode_def.hpp"
#include "GlobalNamespace/zzzz__GestureNode_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaGestureTracker.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGestureTracker::*)()>(&::GlobalNamespace::GorillaGestureTracker::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x564eca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGestureTracker*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGestureTracker.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGestureTracker::*)()>(&::GlobalNamespace::GorillaGestureTracker::Setup)> {
  constexpr static std::size_t size = 0x808;
  constexpr static std::size_t addrs = 0x564ecac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGestureTracker*>(),
                        {"Setup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGestureTracker.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGestureTracker::*)()>(&::GlobalNamespace::GorillaGestureTracker::FixedUpdate)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x564f4b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGestureTracker*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGestureTracker.PollGestures
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGestureTracker::*)()>(&::GlobalNamespace::GorillaGestureTracker::PollGestures)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x564f5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGestureTracker*>(),
                        {"PollGestures", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGestureTracker.PollNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGestureTracker::*)()>(&::GlobalNamespace::GorillaGestureTracker::PollNodes)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x564f4cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGestureTracker*>(),
                        {"PollNodes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGestureTracker.PollThumb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGestureTracker::*)(int32_t, ::by_ref<int32_t>)>(&::GlobalNamespace::GorillaGestureTracker::PollThumb)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x564fcd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGestureTracker*>(),
                        {"PollThumb", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGestureTracker.PollIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGestureTracker::*)(int32_t, ::by_ref<int32_t>)>(&::GlobalNamespace::GorillaGestureTracker::PollIndex)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x564feb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGestureTracker*>(),
                        {"PollIndex", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGestureTracker.PollMiddle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGestureTracker::*)(int32_t, ::by_ref<int32_t>)>(&::GlobalNamespace::GorillaGestureTracker::PollMiddle)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x5650104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGestureTracker*>(),
                        {"PollMiddle", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGestureTracker.PollGesture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGestureTracker::*)(int32_t, int32_t, float_t, ::by_ref<::ArrayW<bool>>)>(&::GlobalNamespace::GorillaGestureTracker::PollGesture)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x564f62c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGestureTracker*>(),
                        {"PollGesture", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::ArrayW<bool>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGestureTracker.TrackHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGestureTracker::*)(int32_t, ::GlobalNamespace::GestureHandNode*, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::GlobalNamespace::GorillaGestureTracker::TrackHand)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5650334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGestureTracker*>(),
                        {"TrackHand", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GestureHandNode*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGestureTracker.TrackHandAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGestureTracker::*)(int32_t, ::GlobalNamespace::GestureNode*, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::GlobalNamespace::GorillaGestureTracker::TrackHandAxis)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5650430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGestureTracker*>(),
                        {"TrackHandAxis", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GestureNode*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGestureTracker.TrackDigit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGestureTracker::*)(int32_t, ::GlobalNamespace::GestureDigitNode*, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::GlobalNamespace::GorillaGestureTracker::TrackDigit)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x56505c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGestureTracker*>(),
                        {"TrackDigit", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GestureDigitNode*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGestureTracker.PollFace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGestureTracker::*)(int32_t)>(&::GlobalNamespace::GorillaGestureTracker::PollFace)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x564f8ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGestureTracker*>(),
                        {"PollFace", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGestureTracker.PollHandAxes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGestureTracker::*)(int32_t)>(&::GlobalNamespace::GorillaGestureTracker::PollHandAxes)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x564f9e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGestureTracker*>(),
                        {"PollHandAxes", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGestureTracker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGestureTracker::*)()>(&::GlobalNamespace::GorillaGestureTracker::_ctor)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x56507e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGestureTracker*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::GorillaGestureTracker::__cordl_internal_get__rig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::GorillaGestureTracker::__cordl_internal_get__rig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rig;
}
constexpr void GlobalNamespace::GorillaGestureTracker::__cordl_internal_set__rig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rig = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GorillaGestureTracker::__cordl_internal_get__rigTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GorillaGestureTracker::__cordl_internal_get__rigTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigTransform;
}
constexpr void GlobalNamespace::GorillaGestureTracker::__cordl_internal_set__rigTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rigTransform = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaGestureTracker::__cordl_internal_get__handBasisAngles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handBasisAngles;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaGestureTracker::__cordl_internal_get__handBasisAngles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handBasisAngles;
}
constexpr void GlobalNamespace::GorillaGestureTracker::__cordl_internal_set__handBasisAngles(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handBasisAngles = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaGestureTracker::__cordl_internal_get__faceBasisOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____faceBasisOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaGestureTracker::__cordl_internal_get__faceBasisOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____faceBasisOffset;
}
constexpr void GlobalNamespace::GorillaGestureTracker::__cordl_internal_set__faceBasisOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____faceBasisOffset = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::GorillaGestureTracker::__cordl_internal_get__faceBasisAngles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____faceBasisAngles;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::GorillaGestureTracker::__cordl_internal_get__faceBasisAngles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____faceBasisAngles;
}
constexpr void GlobalNamespace::GorillaGestureTracker::__cordl_internal_set__faceBasisAngles(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____faceBasisAngles = value;
}
constexpr bool& GlobalNamespace::GorillaGestureTracker::__cordl_internal_get__debug()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debug;
}
constexpr bool const& GlobalNamespace::GorillaGestureTracker::__cordl_internal_get__debug() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debug;
}
constexpr void GlobalNamespace::GorillaGestureTracker::__cordl_internal_set__debug(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____debug = value;
}
constexpr bool& GlobalNamespace::GorillaGestureTracker::__cordl_internal_get__setupDone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____setupDone;
}
constexpr bool const& GlobalNamespace::GorillaGestureTracker::__cordl_internal_get__setupDone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____setupDone;
}
constexpr void GlobalNamespace::GorillaGestureTracker::__cordl_internal_set__setupDone(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____setupDone = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GlobalNamespace::GorillaGestureTracker::__cordl_internal_get__bones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bones;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GlobalNamespace::GorillaGestureTracker::__cordl_internal_get__bones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bones;
}
constexpr void GlobalNamespace::GorillaGestureTracker::__cordl_internal_set__bones(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bones = value;
}
constexpr ::ArrayW<::GlobalNamespace::VRMap*>& GlobalNamespace::GorillaGestureTracker::__cordl_internal_get__vrNodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vrNodes;
}
constexpr ::ArrayW<::GlobalNamespace::VRMap*> const& GlobalNamespace::GorillaGestureTracker::__cordl_internal_get__vrNodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vrNodes;
}
constexpr void GlobalNamespace::GorillaGestureTracker::__cordl_internal_set__vrNodes(::ArrayW<::GlobalNamespace::VRMap*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____vrNodes = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::GorillaGestureTracker::__cordl_internal_get__inputs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputs;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::GorillaGestureTracker::__cordl_internal_get__inputs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputs;
}
constexpr void GlobalNamespace::GorillaGestureTracker::__cordl_internal_set__inputs(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inputs = value;
}
constexpr ::ArrayW<int32_t>& GlobalNamespace::GorillaGestureTracker::__cordl_internal_get__flexes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____flexes;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::GorillaGestureTracker::__cordl_internal_get__flexes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____flexes;
}
constexpr void GlobalNamespace::GorillaGestureTracker::__cordl_internal_set__flexes(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____flexes = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GlobalNamespace::GorillaGestureTracker::__cordl_internal_get__normals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normals;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GlobalNamespace::GorillaGestureTracker::__cordl_internal_get__normals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normals;
}
constexpr void GlobalNamespace::GorillaGestureTracker::__cordl_internal_set__normals(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____normals = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GlobalNamespace::GorillaGestureTracker::__cordl_internal_get__positions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positions;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GlobalNamespace::GorillaGestureTracker::__cordl_internal_get__positions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positions;
}
constexpr void GlobalNamespace::GorillaGestureTracker::__cordl_internal_set__positions(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____positions = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaHandGesture>>& GlobalNamespace::GorillaGestureTracker::__cordl_internal_get__gestures()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gestures;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaHandGesture>> const& GlobalNamespace::GorillaGestureTracker::__cordl_internal_get__gestures() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gestures;
}
constexpr void GlobalNamespace::GorillaGestureTracker::__cordl_internal_set__gestures(::ArrayW<::UnityW<::GlobalNamespace::GorillaHandGesture>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gestures = value;
}
constexpr ::ArrayW<bool>& GlobalNamespace::GorillaGestureTracker::__cordl_internal_get__matchesR()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____matchesR;
}
constexpr ::ArrayW<bool> const& GlobalNamespace::GorillaGestureTracker::__cordl_internal_get__matchesR() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____matchesR;
}
constexpr void GlobalNamespace::GorillaGestureTracker::__cordl_internal_set__matchesR(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____matchesR = value;
}
constexpr ::ArrayW<bool>& GlobalNamespace::GorillaGestureTracker::__cordl_internal_get__matchesL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____matchesL;
}
constexpr ::ArrayW<bool> const& GlobalNamespace::GorillaGestureTracker::__cordl_internal_get__matchesL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____matchesL;
}
constexpr void GlobalNamespace::GorillaGestureTracker::__cordl_internal_set__matchesL(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____matchesL = value;
}
inline void GlobalNamespace::GorillaGestureTracker::setStaticF_TickRate(uint32_t  value)  {
::cordl_internals::setStaticField<uint32_t, "TickRate", ::GlobalNamespace::GorillaGestureTracker*>(std::forward<uint32_t>(value));
}
inline uint32_t GlobalNamespace::GorillaGestureTracker::getStaticF_TickRate()  {
return ::cordl_internals::getStaticField<uint32_t, "TickRate", ::GlobalNamespace::GorillaGestureTracker*>();
}
inline void GlobalNamespace::GorillaGestureTracker::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGestureTracker*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaGestureTracker::Setup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGestureTracker*>(),
                        {"Setup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaGestureTracker::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGestureTracker*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaGestureTracker::PollGestures()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGestureTracker*>(),
                        {"PollGestures", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaGestureTracker::PollNodes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGestureTracker*>(),
                        {"PollNodes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaGestureTracker::PollThumb(int32_t  i, ::by_ref<int32_t>  flex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGestureTracker*>(),
                        {"PollThumb", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i, flex);
}
inline void GlobalNamespace::GorillaGestureTracker::PollIndex(int32_t  i, ::by_ref<int32_t>  flex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGestureTracker*>(),
                        {"PollIndex", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i, flex);
}
inline void GlobalNamespace::GorillaGestureTracker::PollMiddle(int32_t  i, ::by_ref<int32_t>  flex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGestureTracker*>(),
                        {"PollMiddle", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i, flex);
}
inline void GlobalNamespace::GorillaGestureTracker::PollGesture(int32_t  hand, int32_t  i, float_t  dt, ::by_ref<::ArrayW<bool>>  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGestureTracker*>(),
                        {"PollGesture", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::ArrayW<bool>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand, i, dt, results);
}
inline void GlobalNamespace::GorillaGestureTracker::TrackHand(int32_t  hand, ::GlobalNamespace::GestureHandNode*  node, ::by_ref<int32_t>  tracked, ::by_ref<int32_t>  matches)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGestureTracker*>(),
                        {"TrackHand", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GestureHandNode*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand, node, tracked, matches);
}
inline void GlobalNamespace::GorillaGestureTracker::TrackHandAxis(int32_t  axis, ::GlobalNamespace::GestureNode*  node, ::by_ref<int32_t>  tracked, ::by_ref<int32_t>  matches)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGestureTracker*>(),
                        {"TrackHandAxis", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GestureNode*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, axis, node, tracked, matches);
}
inline void GlobalNamespace::GorillaGestureTracker::TrackDigit(int32_t  digit, ::GlobalNamespace::GestureDigitNode*  node, ::by_ref<int32_t>  tracked, ::by_ref<int32_t>  matches)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGestureTracker*>(),
                        {"TrackDigit", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GestureDigitNode*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, digit, node, tracked, matches);
}
inline void GlobalNamespace::GorillaGestureTracker::PollFace(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGestureTracker*>(),
                        {"PollFace", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void GlobalNamespace::GorillaGestureTracker::PollHandAxes(int32_t  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGestureTracker*>(),
                        {"PollHandAxes", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void GlobalNamespace::GorillaGestureTracker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGestureTracker*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaGestureTracker* GlobalNamespace::GorillaGestureTracker::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaGestureTracker*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaGestureTracker::GorillaGestureTracker()   {
}
