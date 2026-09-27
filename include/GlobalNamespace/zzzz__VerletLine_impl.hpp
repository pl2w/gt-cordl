#pragma once
// IWYU pragma private; include "GlobalNamespace/VerletLine.hpp"
#include "GlobalNamespace/zzzz__VerletLine_LineNode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__VerletLine_def.hpp"
#include "GlobalNamespace/zzzz__VerletLine_LineNode_def.hpp"
#include "GlobalNamespace/zzzz__VerletLine_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__LineRenderer_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VerletLine.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VerletLine::*)()>(&::GlobalNamespace::VerletLine::Awake)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x59a6a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerletLine*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VerletLine.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VerletLine::*)()>(&::GlobalNamespace::VerletLine::OnEnable)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x59a6d38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerletLine*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VerletLine.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VerletLine::*)()>(&::GlobalNamespace::VerletLine::OnDisable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x59a6e08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerletLine*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VerletLine.SetLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VerletLine::*)(float_t, float_t)>(&::GlobalNamespace::VerletLine::SetLength)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x59a6e98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerletLine*>(),
                        {"SetLength", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VerletLine.AddSegmentLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VerletLine::*)(float_t, float_t)>(&::GlobalNamespace::VerletLine::AddSegmentLength)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x59a6f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerletLine*>(),
                        {"AddSegmentLength", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VerletLine.RemoveSegmentLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VerletLine::*)(float_t, float_t)>(&::GlobalNamespace::VerletLine::RemoveSegmentLength)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x59a6fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerletLine*>(),
                        {"RemoveSegmentLength", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VerletLine.ResizeAfterDelay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::VerletLine::*)(float_t)>(&::GlobalNamespace::VerletLine::ResizeAfterDelay)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x59a6f08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerletLine*>(),
                        {"ResizeAfterDelay", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VerletLine.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VerletLine::*)()>(&::GlobalNamespace::VerletLine::Update)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x59a7050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerletLine*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VerletLine.ForceTotalLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VerletLine::*)(float_t)>(&::GlobalNamespace::VerletLine::ForceTotalLength)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x59a715c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerletLine*>(),
                        {"ForceTotalLength", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VerletLine.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VerletLine::*)()>(&::GlobalNamespace::VerletLine::FixedUpdate)> {
  constexpr static std::size_t size = 0x6d0;
  constexpr static std::size_t addrs = 0x59a7184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerletLine*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VerletLine.Simulate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::VerletLine_LineNode>, float_t)>(&::GlobalNamespace::VerletLine::Simulate)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x59a7854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerletLine*>(),
                        {"Simulate", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::VerletLine_LineNode>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VerletLine.LimitDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::VerletLine_LineNode>, ::by_ref<::GlobalNamespace::VerletLine_LineNode>, float_t)>(&::GlobalNamespace::VerletLine::LimitDistance)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x59a78b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerletLine*>(),
                        {"LimitDistance", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::VerletLine_LineNode>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::VerletLine_LineNode>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VerletLine._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VerletLine::*)()>(&::GlobalNamespace::VerletLine::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x59a79a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerletLine*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::VerletLine::__cordl_internal_get_lineStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineStart;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::VerletLine::__cordl_internal_get_lineStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineStart;
}
constexpr void GlobalNamespace::VerletLine::__cordl_internal_set_lineStart(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lineStart = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::VerletLine::__cordl_internal_get_lineEnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineEnd;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::VerletLine::__cordl_internal_get_lineEnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineEnd;
}
constexpr void GlobalNamespace::VerletLine::__cordl_internal_set_lineEnd(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lineEnd = value;
}
constexpr ::UnityW<::UnityEngine::LineRenderer>& GlobalNamespace::VerletLine::__cordl_internal_get_line()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___line;
}
constexpr ::UnityW<::UnityEngine::LineRenderer> const& GlobalNamespace::VerletLine::__cordl_internal_get_line() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___line;
}
constexpr void GlobalNamespace::VerletLine::__cordl_internal_set_line(::UnityW<::UnityEngine::LineRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___line = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::VerletLine::__cordl_internal_get_endRigidbody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endRigidbody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::VerletLine::__cordl_internal_get_endRigidbody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endRigidbody;
}
constexpr void GlobalNamespace::VerletLine::__cordl_internal_set_endRigidbody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endRigidbody = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::VerletLine::__cordl_internal_get_endRigidbodyParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endRigidbodyParent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::VerletLine::__cordl_internal_get_endRigidbodyParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endRigidbodyParent;
}
constexpr void GlobalNamespace::VerletLine::__cordl_internal_set_endRigidbodyParent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endRigidbodyParent = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::VerletLine::__cordl_internal_get_endLineAnchorLocalPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endLineAnchorLocalPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::VerletLine::__cordl_internal_get_endLineAnchorLocalPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endLineAnchorLocalPosition;
}
constexpr void GlobalNamespace::VerletLine::__cordl_internal_set_endLineAnchorLocalPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endLineAnchorLocalPosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::VerletLine::__cordl_internal_get_rigidBodyStartingLocalPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigidBodyStartingLocalPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::VerletLine::__cordl_internal_get_rigidBodyStartingLocalPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigidBodyStartingLocalPosition;
}
constexpr void GlobalNamespace::VerletLine::__cordl_internal_set_rigidBodyStartingLocalPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigidBodyStartingLocalPosition = value;
}
constexpr int32_t& GlobalNamespace::VerletLine::__cordl_internal_get_segmentNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___segmentNumber;
}
constexpr int32_t const& GlobalNamespace::VerletLine::__cordl_internal_get_segmentNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___segmentNumber;
}
constexpr void GlobalNamespace::VerletLine::__cordl_internal_set_segmentNumber(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___segmentNumber = value;
}
constexpr float_t& GlobalNamespace::VerletLine::__cordl_internal_get_segmentLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___segmentLength;
}
constexpr float_t const& GlobalNamespace::VerletLine::__cordl_internal_get_segmentLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___segmentLength;
}
constexpr void GlobalNamespace::VerletLine::__cordl_internal_set_segmentLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___segmentLength = value;
}
constexpr float_t& GlobalNamespace::VerletLine::__cordl_internal_get_segmentTargetLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___segmentTargetLength;
}
constexpr float_t const& GlobalNamespace::VerletLine::__cordl_internal_get_segmentTargetLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___segmentTargetLength;
}
constexpr void GlobalNamespace::VerletLine::__cordl_internal_set_segmentTargetLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___segmentTargetLength = value;
}
constexpr float_t& GlobalNamespace::VerletLine::__cordl_internal_get_segmentMaxLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___segmentMaxLength;
}
constexpr float_t const& GlobalNamespace::VerletLine::__cordl_internal_get_segmentMaxLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___segmentMaxLength;
}
constexpr void GlobalNamespace::VerletLine::__cordl_internal_set_segmentMaxLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___segmentMaxLength = value;
}
constexpr float_t& GlobalNamespace::VerletLine::__cordl_internal_get_segmentMinLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___segmentMinLength;
}
constexpr float_t const& GlobalNamespace::VerletLine::__cordl_internal_get_segmentMinLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___segmentMinLength;
}
constexpr void GlobalNamespace::VerletLine::__cordl_internal_set_segmentMinLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___segmentMinLength = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::VerletLine::__cordl_internal_get_gravity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::VerletLine::__cordl_internal_get_gravity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravity;
}
constexpr void GlobalNamespace::VerletLine::__cordl_internal_set_gravity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gravity = value;
}
constexpr int32_t& GlobalNamespace::VerletLine::__cordl_internal_get_simIterations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___simIterations;
}
constexpr int32_t const& GlobalNamespace::VerletLine::__cordl_internal_get_simIterations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___simIterations;
}
constexpr void GlobalNamespace::VerletLine::__cordl_internal_set_simIterations(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___simIterations = value;
}
constexpr float_t& GlobalNamespace::VerletLine::__cordl_internal_get_tension()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tension;
}
constexpr float_t const& GlobalNamespace::VerletLine::__cordl_internal_get_tension() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tension;
}
constexpr void GlobalNamespace::VerletLine::__cordl_internal_set_tension(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tension = value;
}
constexpr float_t& GlobalNamespace::VerletLine::__cordl_internal_get_tensionScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tensionScale;
}
constexpr float_t const& GlobalNamespace::VerletLine::__cordl_internal_get_tensionScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tensionScale;
}
constexpr void GlobalNamespace::VerletLine::__cordl_internal_set_tensionScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tensionScale = value;
}
constexpr float_t& GlobalNamespace::VerletLine::__cordl_internal_get_endMaxSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endMaxSpeed;
}
constexpr float_t const& GlobalNamespace::VerletLine::__cordl_internal_get_endMaxSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endMaxSpeed;
}
constexpr void GlobalNamespace::VerletLine::__cordl_internal_set_endMaxSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endMaxSpeed = value;
}
constexpr float_t& GlobalNamespace::VerletLine::__cordl_internal_get_resizeSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resizeSpeed;
}
constexpr float_t const& GlobalNamespace::VerletLine::__cordl_internal_get_resizeSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resizeSpeed;
}
constexpr void GlobalNamespace::VerletLine::__cordl_internal_set_resizeSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resizeSpeed = value;
}
constexpr float_t& GlobalNamespace::VerletLine::__cordl_internal_get_resizeScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resizeScale;
}
constexpr float_t const& GlobalNamespace::VerletLine::__cordl_internal_get_resizeScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resizeScale;
}
constexpr void GlobalNamespace::VerletLine::__cordl_internal_set_resizeScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resizeScale = value;
}
constexpr ::ArrayW<::GlobalNamespace::VerletLine_LineNode>& GlobalNamespace::VerletLine::__cordl_internal_get__nodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nodes;
}
constexpr ::ArrayW<::GlobalNamespace::VerletLine_LineNode> const& GlobalNamespace::VerletLine::__cordl_internal_get__nodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nodes;
}
constexpr void GlobalNamespace::VerletLine::__cordl_internal_set__nodes(::ArrayW<::GlobalNamespace::VerletLine_LineNode>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nodes = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GlobalNamespace::VerletLine::__cordl_internal_get__positions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positions;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GlobalNamespace::VerletLine::__cordl_internal_get__positions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positions;
}
constexpr void GlobalNamespace::VerletLine::__cordl_internal_set__positions(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____positions = value;
}
constexpr float_t& GlobalNamespace::VerletLine::__cordl_internal_get_totalLineLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalLineLength;
}
constexpr float_t const& GlobalNamespace::VerletLine::__cordl_internal_get_totalLineLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalLineLength;
}
constexpr void GlobalNamespace::VerletLine::__cordl_internal_set_totalLineLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalLineLength = value;
}
constexpr bool& GlobalNamespace::VerletLine::__cordl_internal_get_onlyPullAtEdges()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onlyPullAtEdges;
}
constexpr bool const& GlobalNamespace::VerletLine::__cordl_internal_get_onlyPullAtEdges() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onlyPullAtEdges;
}
constexpr void GlobalNamespace::VerletLine::__cordl_internal_set_onlyPullAtEdges(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onlyPullAtEdges = value;
}
constexpr bool& GlobalNamespace::VerletLine::__cordl_internal_get_scaleLineWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleLineWidth;
}
constexpr bool const& GlobalNamespace::VerletLine::__cordl_internal_get_scaleLineWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleLineWidth;
}
constexpr void GlobalNamespace::VerletLine::__cordl_internal_set_scaleLineWidth(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scaleLineWidth = value;
}
inline void GlobalNamespace::VerletLine::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerletLine*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VerletLine::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerletLine*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VerletLine::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerletLine*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VerletLine::SetLength(float_t  total, float_t  delay)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerletLine*>(),
                        {"SetLength", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, total, delay);
}
inline void GlobalNamespace::VerletLine::AddSegmentLength(float_t  amount, float_t  delay)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerletLine*>(),
                        {"AddSegmentLength", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, amount, delay);
}
inline void GlobalNamespace::VerletLine::RemoveSegmentLength(float_t  amount, float_t  delay)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerletLine*>(),
                        {"RemoveSegmentLength", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, amount, delay);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::VerletLine::ResizeAfterDelay(float_t  delay)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerletLine*>(),
                        {"ResizeAfterDelay", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, delay);
}
inline void GlobalNamespace::VerletLine::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerletLine*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VerletLine::ForceTotalLength(float_t  totalLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerletLine*>(),
                        {"ForceTotalLength", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, totalLength);
}
inline void GlobalNamespace::VerletLine::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerletLine*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VerletLine::Simulate(::by_ref<::GlobalNamespace::VerletLine_LineNode>  p, float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerletLine*>(),
                        {"Simulate", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::VerletLine_LineNode>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, dt);
}
inline void GlobalNamespace::VerletLine::LimitDistance(::by_ref<::GlobalNamespace::VerletLine_LineNode>  p1, ::by_ref<::GlobalNamespace::VerletLine_LineNode>  p2, float_t  restLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerletLine*>(),
                        {"LimitDistance", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::VerletLine_LineNode>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::VerletLine_LineNode>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p1, p2, restLength);
}
inline void GlobalNamespace::VerletLine::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerletLine*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VerletLine* GlobalNamespace::VerletLine::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VerletLine*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VerletLine::VerletLine()   {
}
//  Writing Method size for method: ::GlobalNamespace::VerletLine__ResizeAfterDelay_d__31._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VerletLine__ResizeAfterDelay_d__31::*)(int32_t)>(&::GlobalNamespace::VerletLine__ResizeAfterDelay_d__31::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x59a7028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerletLine__ResizeAfterDelay_d__31*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VerletLine__ResizeAfterDelay_d__31.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VerletLine__ResizeAfterDelay_d__31::*)()>(&::GlobalNamespace::VerletLine__ResizeAfterDelay_d__31::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59a7a88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerletLine__ResizeAfterDelay_d__31*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VerletLine__ResizeAfterDelay_d__31.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::VerletLine__ResizeAfterDelay_d__31::*)()>(&::GlobalNamespace::VerletLine__ResizeAfterDelay_d__31::MoveNext)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x59a7a8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerletLine__ResizeAfterDelay_d__31*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VerletLine__ResizeAfterDelay_d__31.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::VerletLine__ResizeAfterDelay_d__31::*)()>(&::GlobalNamespace::VerletLine__ResizeAfterDelay_d__31::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59a7b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerletLine__ResizeAfterDelay_d__31*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VerletLine__ResizeAfterDelay_d__31.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VerletLine__ResizeAfterDelay_d__31::*)()>(&::GlobalNamespace::VerletLine__ResizeAfterDelay_d__31::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59a7b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerletLine__ResizeAfterDelay_d__31*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VerletLine__ResizeAfterDelay_d__31.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::VerletLine__ResizeAfterDelay_d__31::*)()>(&::GlobalNamespace::VerletLine__ResizeAfterDelay_d__31::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59a7b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerletLine__ResizeAfterDelay_d__31*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::VerletLine__ResizeAfterDelay_d__31::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::VerletLine__ResizeAfterDelay_d__31::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::VerletLine__ResizeAfterDelay_d__31::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::VerletLine__ResizeAfterDelay_d__31::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::VerletLine__ResizeAfterDelay_d__31::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::VerletLine__ResizeAfterDelay_d__31::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr float_t& GlobalNamespace::VerletLine__ResizeAfterDelay_d__31::__cordl_internal_get_delay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delay;
}
constexpr float_t const& GlobalNamespace::VerletLine__ResizeAfterDelay_d__31::__cordl_internal_get_delay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delay;
}
constexpr void GlobalNamespace::VerletLine__ResizeAfterDelay_d__31::__cordl_internal_set_delay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___delay = value;
}
inline void GlobalNamespace::VerletLine__ResizeAfterDelay_d__31::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerletLine__ResizeAfterDelay_d__31*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::VerletLine__ResizeAfterDelay_d__31::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerletLine__ResizeAfterDelay_d__31*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::VerletLine__ResizeAfterDelay_d__31::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerletLine__ResizeAfterDelay_d__31*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::VerletLine__ResizeAfterDelay_d__31::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerletLine__ResizeAfterDelay_d__31*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::VerletLine__ResizeAfterDelay_d__31::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerletLine__ResizeAfterDelay_d__31*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::VerletLine__ResizeAfterDelay_d__31::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerletLine__ResizeAfterDelay_d__31*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::VerletLine__ResizeAfterDelay_d__31* GlobalNamespace::VerletLine__ResizeAfterDelay_d__31::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VerletLine__ResizeAfterDelay_d__31*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::VerletLine__ResizeAfterDelay_d__31::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::VerletLine__ResizeAfterDelay_d__31::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::VerletLine__ResizeAfterDelay_d__31::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::VerletLine__ResizeAfterDelay_d__31::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::VerletLine__ResizeAfterDelay_d__31::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::VerletLine__ResizeAfterDelay_d__31::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VerletLine__ResizeAfterDelay_d__31::VerletLine__ResizeAfterDelay_d__31()   {
}
