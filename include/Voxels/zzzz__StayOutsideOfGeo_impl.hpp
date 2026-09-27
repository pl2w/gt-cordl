#pragma once
// IWYU pragma private; include "Voxels/StayOutsideOfGeo.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Voxels/zzzz__StayOutsideOfGeo_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "Unity/Mathematics/zzzz__int3_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "Voxels/zzzz__VoxelWorld_def.hpp"
//  Writing Method size for method: ::Voxels::StayOutsideOfGeo.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::StayOutsideOfGeo::*)()>(&::Voxels::StayOutsideOfGeo::Reset)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5db19f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::StayOutsideOfGeo*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::StayOutsideOfGeo.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::StayOutsideOfGeo::*)()>(&::Voxels::StayOutsideOfGeo::Start)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5db1a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::StayOutsideOfGeo*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::StayOutsideOfGeo.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::StayOutsideOfGeo::*)()>(&::Voxels::StayOutsideOfGeo::Update)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x5db1bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::StayOutsideOfGeo*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::StayOutsideOfGeo.ResolvePenetration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Voxels::StayOutsideOfGeo::*)(::Unity::Mathematics::int3)>(&::Voxels::StayOutsideOfGeo::ResolvePenetration)> {
  constexpr static std::size_t size = 0x528;
  constexpr static std::size_t addrs = 0x5db227c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::StayOutsideOfGeo*>(),
                        {"ResolvePenetration", {}, {::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::StayOutsideOfGeo.SetPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::StayOutsideOfGeo::*)(::UnityEngine::Vector3)>(&::Voxels::StayOutsideOfGeo::SetPosition)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x5db27e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::StayOutsideOfGeo*>(),
                        {"SetPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::StayOutsideOfGeo.TestPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<bool,::Unity::Mathematics::int3> (::Voxels::StayOutsideOfGeo::*)(::Unity::Mathematics::int3, bool)>(&::Voxels::StayOutsideOfGeo::TestPosition)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x5db1eec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::StayOutsideOfGeo*>(),
                        {"TestPosition", {}, {::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::StayOutsideOfGeo.IsOutsideGeo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Voxels::StayOutsideOfGeo::*)(::Unity::Mathematics::int3)>(&::Voxels::StayOutsideOfGeo::IsOutsideGeo)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5db27a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::StayOutsideOfGeo*>(),
                        {"IsOutsideGeo", {}, {::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::StayOutsideOfGeo.AddPositionToHistory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::StayOutsideOfGeo::*)(::Unity::Mathematics::int3)>(&::Voxels::StayOutsideOfGeo::AddPositionToHistory)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5db213c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::StayOutsideOfGeo*>(),
                        {"AddPositionToHistory", {}, {::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::StayOutsideOfGeo.GetMostRecentPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Voxels::StayOutsideOfGeo::*)()>(&::Voxels::StayOutsideOfGeo::GetMostRecentPosition)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5db2b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::StayOutsideOfGeo*>(),
                        {"GetMostRecentPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::StayOutsideOfGeo.PopMostRecentPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Voxels::StayOutsideOfGeo::*)()>(&::Voxels::StayOutsideOfGeo::PopMostRecentPosition)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5db29e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::StayOutsideOfGeo*>(),
                        {"PopMostRecentPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::StayOutsideOfGeo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::StayOutsideOfGeo::*)()>(&::Voxels::StayOutsideOfGeo::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5db2c2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::StayOutsideOfGeo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& Voxels::StayOutsideOfGeo::__cordl_internal_get__target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Voxels::StayOutsideOfGeo::__cordl_internal_get__target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr void Voxels::StayOutsideOfGeo::__cordl_internal_set__target(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____target = value;
}
constexpr ::UnityEngine::Vector3& Voxels::StayOutsideOfGeo::__cordl_internal_get__targetOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetOffset;
}
constexpr ::UnityEngine::Vector3 const& Voxels::StayOutsideOfGeo::__cordl_internal_get__targetOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetOffset;
}
constexpr void Voxels::StayOutsideOfGeo::__cordl_internal_set__targetOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetOffset = value;
}
constexpr float_t& Voxels::StayOutsideOfGeo::__cordl_internal_get__threshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____threshold;
}
constexpr float_t const& Voxels::StayOutsideOfGeo::__cordl_internal_get__threshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____threshold;
}
constexpr void Voxels::StayOutsideOfGeo::__cordl_internal_set__threshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____threshold = value;
}
constexpr bool& Voxels::StayOutsideOfGeo::__cordl_internal_get__pauseOnPenetration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pauseOnPenetration;
}
constexpr bool const& Voxels::StayOutsideOfGeo::__cordl_internal_get__pauseOnPenetration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pauseOnPenetration;
}
constexpr void Voxels::StayOutsideOfGeo::__cordl_internal_set__pauseOnPenetration(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pauseOnPenetration = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& Voxels::StayOutsideOfGeo::__cordl_internal_get__disableOnMove()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disableOnMove;
}
constexpr ::UnityW<::UnityEngine::Collider> const& Voxels::StayOutsideOfGeo::__cordl_internal_get__disableOnMove() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disableOnMove;
}
constexpr void Voxels::StayOutsideOfGeo::__cordl_internal_set__disableOnMove(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disableOnMove = value;
}
constexpr ::UnityW<::Voxels::VoxelWorld>& Voxels::StayOutsideOfGeo::__cordl_internal_get__voxelWorld()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voxelWorld;
}
constexpr ::UnityW<::Voxels::VoxelWorld> const& Voxels::StayOutsideOfGeo::__cordl_internal_get__voxelWorld() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voxelWorld;
}
constexpr void Voxels::StayOutsideOfGeo::__cordl_internal_set__voxelWorld(::UnityW<::Voxels::VoxelWorld>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____voxelWorld = value;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Mathematics::int3>*& Voxels::StayOutsideOfGeo::__cordl_internal_get__positionHistory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positionHistory;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Mathematics::int3>* const& Voxels::StayOutsideOfGeo::__cordl_internal_get__positionHistory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positionHistory;
}
constexpr void Voxels::StayOutsideOfGeo::__cordl_internal_set__positionHistory(::System::Collections::Generic::List_1<::Unity::Mathematics::int3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____positionHistory = value;
}
constexpr int32_t& Voxels::StayOutsideOfGeo::__cordl_internal_get__maxHistorySize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxHistorySize;
}
constexpr int32_t const& Voxels::StayOutsideOfGeo::__cordl_internal_get__maxHistorySize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxHistorySize;
}
constexpr void Voxels::StayOutsideOfGeo::__cordl_internal_set__maxHistorySize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxHistorySize = value;
}
constexpr int32_t& Voxels::StayOutsideOfGeo::__cordl_internal_get__historyIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____historyIndex;
}
constexpr int32_t const& Voxels::StayOutsideOfGeo::__cordl_internal_get__historyIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____historyIndex;
}
constexpr void Voxels::StayOutsideOfGeo::__cordl_internal_set__historyIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____historyIndex = value;
}
constexpr float_t& Voxels::StayOutsideOfGeo::__cordl_internal_get__maxDensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxDensity;
}
constexpr float_t const& Voxels::StayOutsideOfGeo::__cordl_internal_get__maxDensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxDensity;
}
constexpr void Voxels::StayOutsideOfGeo::__cordl_internal_set__maxDensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxDensity = value;
}
constexpr float_t& Voxels::StayOutsideOfGeo::__cordl_internal_get__minDensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minDensity;
}
constexpr float_t const& Voxels::StayOutsideOfGeo::__cordl_internal_get__minDensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minDensity;
}
constexpr void Voxels::StayOutsideOfGeo::__cordl_internal_set__minDensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minDensity = value;
}
inline void Voxels::StayOutsideOfGeo::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::StayOutsideOfGeo*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::StayOutsideOfGeo::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::StayOutsideOfGeo*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::StayOutsideOfGeo::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::StayOutsideOfGeo*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Voxels::StayOutsideOfGeo::ResolvePenetration(::Unity::Mathematics::int3  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::StayOutsideOfGeo*>(),
                        {"ResolvePenetration", {}, {::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pos);
}
inline void Voxels::StayOutsideOfGeo::SetPosition(::UnityEngine::Vector3  worldPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::StayOutsideOfGeo*>(),
                        {"SetPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, worldPosition);
}
inline ::System::ValueTuple_2<bool,::Unity::Mathematics::int3> Voxels::StayOutsideOfGeo::TestPosition(::Unity::Mathematics::int3  position, bool  useThreshold)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::StayOutsideOfGeo*>(),
                        {"TestPosition", {}, {::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<bool,::Unity::Mathematics::int3>>(this, ___internal_method, position, useThreshold);
}
inline bool Voxels::StayOutsideOfGeo::IsOutsideGeo(::Unity::Mathematics::int3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::StayOutsideOfGeo*>(),
                        {"IsOutsideGeo", {}, {::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, position);
}
inline void Voxels::StayOutsideOfGeo::AddPositionToHistory(::Unity::Mathematics::int3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::StayOutsideOfGeo*>(),
                        {"AddPositionToHistory", {}, {::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position);
}
inline ::Unity::Mathematics::int3 Voxels::StayOutsideOfGeo::GetMostRecentPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::StayOutsideOfGeo*>(),
                        {"GetMostRecentPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Voxels::StayOutsideOfGeo::PopMostRecentPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::StayOutsideOfGeo*>(),
                        {"PopMostRecentPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(this, ___internal_method);
}
inline void Voxels::StayOutsideOfGeo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::StayOutsideOfGeo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Voxels::StayOutsideOfGeo* Voxels::StayOutsideOfGeo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Voxels::StayOutsideOfGeo*>());
}
// Ctor Parameters []
constexpr ::Voxels::StayOutsideOfGeo::StayOutsideOfGeo()   {
}
