#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/HitboxBuffer.hpp"
#include "Fusion/LagCompensation/zzzz__HitboxCollider_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/LagCompensation/zzzz__HitboxBuffer_def.hpp"
#include "Fusion/LagCompensation/zzzz__BVH_def.hpp"
#include "Fusion/LagCompensation/zzzz__HitboxBuffer_def.hpp"
#include "Fusion/LagCompensation/zzzz__HitboxCollider_def.hpp"
#include "Fusion/LagCompensation/zzzz__HitboxHit_def.hpp"
#include "Fusion/LagCompensation/zzzz__IHitboxColliderContainer_def.hpp"
#include "Fusion/LagCompensation/zzzz__ILagCompensationBroadphase_def.hpp"
#include "Fusion/LagCompensation/zzzz__Mapper_def.hpp"
#include "Fusion/LagCompensation/zzzz__PositionRotationQueryParams_def.hpp"
#include "Fusion/LagCompensation/zzzz__Query_def.hpp"
#include "Fusion/Statistics/zzzz__LagCompensationStatisticsManager_def.hpp"
#include "Fusion/zzzz__HitboxRoot_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Fusion::LagCompensation::HitboxBuffer.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::LagCompensation::HitboxBuffer::*)()>(&::Fusion::LagCompensation::HitboxBuffer::get_Length)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6018678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer*>(),
                        {"get_Length", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::HitboxBuffer.get_BVH
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::LagCompensation::BVH* (::Fusion::LagCompensation::HitboxBuffer::*)()>(&::Fusion::LagCompensation::HitboxBuffer::get_BVH)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x601772c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer*>(),
                        {"get_BVH", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::HitboxBuffer.get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot* (::Fusion::LagCompensation::HitboxBuffer::*)()>(&::Fusion::LagCompensation::HitboxBuffer::get_Current)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6018f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer*>(),
                        {"get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::HitboxBuffer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::HitboxBuffer::*)(::System::Collections::Generic::List_1<::UnityW<::Fusion::HitboxRoot>>*, int32_t, int32_t, float_t)>(&::Fusion::LagCompensation::HitboxBuffer::_ctor)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x6018f48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Fusion::HitboxRoot>>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::HitboxBuffer.Advance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::HitboxBuffer::*)(int32_t, int32_t)>(&::Fusion::LagCompensation::HitboxBuffer::Advance)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6019500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer*>(),
                        {"Advance", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::HitboxBuffer.PosUpdateRefit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::HitboxBuffer::*)()>(&::Fusion::LagCompensation::HitboxBuffer::PosUpdateRefit)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x601970c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer*>(),
                        {"PosUpdateRefit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::HitboxBuffer.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::HitboxBuffer::*)(::Fusion::HitboxRoot*, ::Fusion::Statistics::LagCompensationStatisticsManager*)>(&::Fusion::LagCompensation::HitboxBuffer::Add)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6019728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer*>(),
                        {"Add", {}, {::i2c::type_of<::Fusion::HitboxRoot*>(), ::i2c::type_of<::Fusion::Statistics::LagCompensationStatisticsManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::HitboxBuffer.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::LagCompensation::HitboxBuffer::*)(::Fusion::HitboxRoot*)>(&::Fusion::LagCompensation::HitboxBuffer::Remove)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x60199e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer*>(),
                        {"Remove", {}, {::i2c::type_of<::Fusion::HitboxRoot*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::HitboxBuffer.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::HitboxBuffer::*)(::Fusion::HitboxRoot*, ::Fusion::Statistics::LagCompensationStatisticsManager*)>(&::Fusion::LagCompensation::HitboxBuffer::Update)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6019adc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer*>(),
                        {"Update", {}, {::i2c::type_of<::Fusion::HitboxRoot*>(), ::i2c::type_of<::Fusion::Statistics::LagCompensationStatisticsManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::HitboxBuffer.PerformQuery
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::LagCompensation::HitboxBuffer::*)(::Fusion::LagCompensation::Query*, ::System::Collections::Generic::List_1<::Fusion::LagCompensation::HitboxHit>*)>(&::Fusion::LagCompensation::HitboxBuffer::PerformQuery)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6019b18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer*>(),
                        {"PerformQuery", {}, {::i2c::type_of<::Fusion::LagCompensation::Query*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::LagCompensation::HitboxHit>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::HitboxBuffer.PositionQueryInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::HitboxBuffer::*)(::by_ref<::Fusion::LagCompensation::PositionRotationQueryParams>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>)>(&::Fusion::LagCompensation::HitboxBuffer::PositionQueryInternal)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x6019c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer*>(),
                        {"PositionQueryInternal", {}, {::i2c::type_of<::by_ref<::Fusion::LagCompensation::PositionRotationQueryParams>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::HitboxBuffer.InitColliderCandidatesForNarrowPhase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::HitboxBuffer::*)(::Fusion::LagCompensation::IHitboxColliderContainer*, ::System::Collections::Generic::HashSet_1<int32_t>*)>(&::Fusion::LagCompensation::HitboxBuffer::InitColliderCandidatesForNarrowPhase)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x601a310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer*>(),
                        {"InitColliderCandidatesForNarrowPhase", {}, {::i2c::type_of<::Fusion::LagCompensation::IHitboxColliderContainer*>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::HitboxBuffer.QuaternionFromMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Matrix4x4)>(&::Fusion::LagCompensation::HitboxBuffer::QuaternionFromMatrix)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x601a2ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer*>(),
                        {"QuaternionFromMatrix", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::HitboxBuffer.GetClosestSnapshotForTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::HitboxBuffer::*)(int32_t, ::by_ref<::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot*>)>(&::Fusion::LagCompensation::HitboxBuffer::GetClosestSnapshotForTick)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x6019e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer*>(),
                        {"GetClosestSnapshotForTick", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::HitboxBuffer.QueryBroadphase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::HitboxBuffer::*)(::Fusion::LagCompensation::Query*, ::System::Collections::Generic::HashSet_1<int32_t>*, ::by_ref<::Fusion::LagCompensation::IHitboxColliderContainer*>)>(&::Fusion::LagCompensation::HitboxBuffer::QueryBroadphase)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x601a5bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer*>(),
                        {"QueryBroadphase", {}, {::i2c::type_of<::Fusion::LagCompensation::Query*>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<int32_t>*>(), ::i2c::type_of<::by_ref<::Fusion::LagCompensation::IHitboxColliderContainer*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::HitboxBuffer.GetClosestTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::LagCompensation::HitboxBuffer::*)(::Fusion::LagCompensation::Query*)>(&::Fusion::LagCompensation::HitboxBuffer::GetClosestTick)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x601a7a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer*>(),
                        {"GetClosestTick", {}, {::i2c::type_of<::Fusion::LagCompensation::Query*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot*>& Fusion::LagCompensation::HitboxBuffer::__cordl_internal_get__buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buffer;
}
constexpr ::ArrayW<::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot*> const& Fusion::LagCompensation::HitboxBuffer::__cordl_internal_get__buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buffer;
}
constexpr void Fusion::LagCompensation::HitboxBuffer::__cordl_internal_set__buffer(::ArrayW<::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buffer = value;
}
constexpr ::Fusion::LagCompensation::Mapper*& Fusion::LagCompensation::HitboxBuffer::__cordl_internal_get__mapper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mapper;
}
constexpr ::Fusion::LagCompensation::Mapper* const& Fusion::LagCompensation::HitboxBuffer::__cordl_internal_get__mapper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mapper;
}
constexpr void Fusion::LagCompensation::HitboxBuffer::__cordl_internal_set__mapper(::Fusion::LagCompensation::Mapper*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mapper = value;
}
constexpr int32_t& Fusion::LagCompensation::HitboxBuffer::__cordl_internal_get__head()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____head;
}
constexpr int32_t const& Fusion::LagCompensation::HitboxBuffer::__cordl_internal_get__head() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____head;
}
constexpr void Fusion::LagCompensation::HitboxBuffer::__cordl_internal_set__head(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____head = value;
}
constexpr int32_t& Fusion::LagCompensation::HitboxBuffer::__cordl_internal_get__advanced()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____advanced;
}
constexpr int32_t const& Fusion::LagCompensation::HitboxBuffer::__cordl_internal_get__advanced() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____advanced;
}
constexpr void Fusion::LagCompensation::HitboxBuffer::__cordl_internal_set__advanced(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____advanced = value;
}
constexpr int32_t& Fusion::LagCompensation::HitboxBuffer::__cordl_internal_get_Tick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tick;
}
constexpr int32_t const& Fusion::LagCompensation::HitboxBuffer::__cordl_internal_get_Tick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tick;
}
constexpr void Fusion::LagCompensation::HitboxBuffer::__cordl_internal_set_Tick(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Tick = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::Fusion::HitboxRoot>>*& Fusion::LagCompensation::HitboxBuffer::__cordl_internal_get__broadphaseCandidates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____broadphaseCandidates;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::Fusion::HitboxRoot>>* const& Fusion::LagCompensation::HitboxBuffer::__cordl_internal_get__broadphaseCandidates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____broadphaseCandidates;
}
constexpr void Fusion::LagCompensation::HitboxBuffer::__cordl_internal_set__broadphaseCandidates(::System::Collections::Generic::HashSet_1<::UnityW<::Fusion::HitboxRoot>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____broadphaseCandidates = value;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& Fusion::LagCompensation::HitboxBuffer::__cordl_internal_get__colliderCandidates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colliderCandidates;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& Fusion::LagCompensation::HitboxBuffer::__cordl_internal_get__colliderCandidates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colliderCandidates;
}
constexpr void Fusion::LagCompensation::HitboxBuffer::__cordl_internal_set__colliderCandidates(::System::Collections::Generic::HashSet_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____colliderCandidates = value;
}
inline int32_t Fusion::LagCompensation::HitboxBuffer::get_Length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer*>(),
                        {"get_Length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Fusion::LagCompensation::BVH* Fusion::LagCompensation::HitboxBuffer::get_BVH()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer*>(),
                        {"get_BVH", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::LagCompensation::BVH*>(this, ___internal_method);
}
inline ::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot* Fusion::LagCompensation::HitboxBuffer::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot*>(this, ___internal_method);
}
inline void Fusion::LagCompensation::HitboxBuffer::_ctor(::System::Collections::Generic::List_1<::UnityW<::Fusion::HitboxRoot>>*  initialObjects, int32_t  bufferSize, int32_t  hitboxCapacity, float_t  expansionFactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Fusion::HitboxRoot>>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initialObjects, bufferSize, hitboxCapacity, expansionFactor);
}
inline void Fusion::LagCompensation::HitboxBuffer::Advance(int32_t  tick, int32_t  dataTick)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer*>(),
                        {"Advance", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tick, dataTick);
}
inline void Fusion::LagCompensation::HitboxBuffer::PosUpdateRefit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer*>(),
                        {"PosUpdateRefit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::LagCompensation::HitboxBuffer::Add(::Fusion::HitboxRoot*  root, ::Fusion::Statistics::LagCompensationStatisticsManager*  lagCompStatManager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer*>(),
                        {"Add", {}, {::i2c::type_of<::Fusion::HitboxRoot*>(), ::i2c::type_of<::Fusion::Statistics::LagCompensationStatisticsManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, root, lagCompStatManager);
}
inline bool Fusion::LagCompensation::HitboxBuffer::Remove(::Fusion::HitboxRoot*  root)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer*>(),
                        {"Remove", {}, {::i2c::type_of<::Fusion::HitboxRoot*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, root);
}
inline void Fusion::LagCompensation::HitboxBuffer::Update(::Fusion::HitboxRoot*  root, ::Fusion::Statistics::LagCompensationStatisticsManager*  lagCompStatManager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer*>(),
                        {"Update", {}, {::i2c::type_of<::Fusion::HitboxRoot*>(), ::i2c::type_of<::Fusion::Statistics::LagCompensationStatisticsManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, root, lagCompStatManager);
}
inline bool Fusion::LagCompensation::HitboxBuffer::PerformQuery(::Fusion::LagCompensation::Query*  query, ::System::Collections::Generic::List_1<::Fusion::LagCompensation::HitboxHit>*  hits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer*>(),
                        {"PerformQuery", {}, {::i2c::type_of<::Fusion::LagCompensation::Query*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::LagCompensation::HitboxHit>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, query, hits);
}
inline void Fusion::LagCompensation::HitboxBuffer::PositionQueryInternal(::by_ref<::Fusion::LagCompensation::PositionRotationQueryParams>  param, ::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Quaternion>  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer*>(),
                        {"PositionQueryInternal", {}, {::i2c::type_of<::by_ref<::Fusion::LagCompensation::PositionRotationQueryParams>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, param, position, rotation);
}
inline void Fusion::LagCompensation::HitboxBuffer::InitColliderCandidatesForNarrowPhase(::Fusion::LagCompensation::IHitboxColliderContainer*  container, ::System::Collections::Generic::HashSet_1<int32_t>*  candidates)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer*>(),
                        {"InitColliderCandidatesForNarrowPhase", {}, {::i2c::type_of<::Fusion::LagCompensation::IHitboxColliderContainer*>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, candidates);
}
inline ::UnityEngine::Quaternion Fusion::LagCompensation::HitboxBuffer::QuaternionFromMatrix(::UnityEngine::Matrix4x4  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer*>(),
                        {"QuaternionFromMatrix", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, m);
}
inline void Fusion::LagCompensation::HitboxBuffer::GetClosestSnapshotForTick(int32_t  tick, ::by_ref<::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot*>  snapshot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer*>(),
                        {"GetClosestSnapshotForTick", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tick, snapshot);
}
inline void Fusion::LagCompensation::HitboxBuffer::QueryBroadphase(::Fusion::LagCompensation::Query*  query, ::System::Collections::Generic::HashSet_1<int32_t>*  processedColliderIndices, ::by_ref<::Fusion::LagCompensation::IHitboxColliderContainer*>  container)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer*>(),
                        {"QueryBroadphase", {}, {::i2c::type_of<::Fusion::LagCompensation::Query*>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<int32_t>*>(), ::i2c::type_of<::by_ref<::Fusion::LagCompensation::IHitboxColliderContainer*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, query, processedColliderIndices, container);
}
inline int32_t Fusion::LagCompensation::HitboxBuffer::GetClosestTick(::Fusion::LagCompensation::Query*  query)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer*>(),
                        {"GetClosestTick", {}, {::i2c::type_of<::Fusion::LagCompensation::Query*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, query);
}
inline ::Fusion::LagCompensation::HitboxBuffer* Fusion::LagCompensation::HitboxBuffer::New_ctor(::System::Collections::Generic::List_1<::UnityW<::Fusion::HitboxRoot>>*  initialObjects, int32_t  bufferSize, int32_t  hitboxCapacity, float_t  expansionFactor)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::LagCompensation::HitboxBuffer*>(initialObjects, bufferSize, hitboxCapacity, expansionFactor));
}
// Ctor Parameters []
constexpr ::Fusion::LagCompensation::HitboxBuffer::HitboxBuffer()   {
}
//  Writing Method size for method: ::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot.get_CollidersCapacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::*)()>(&::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::get_CollidersCapacity)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x601b060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot*>(),
                        {"get_CollidersCapacity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot.get_CollidersCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::*)()>(&::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::get_CollidersCount)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x601886c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot*>(),
                        {"get_CollidersCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::*)(::Fusion::LagCompensation::Mapper*, ::System::Collections::Generic::List_1<::UnityW<::Fusion::HitboxRoot>>*, int32_t, float_t)>(&::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::_ctor)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x60192d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::LagCompensation::Mapper*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Fusion::HitboxRoot>>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot.CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::*)(int32_t, int32_t, ::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot*)>(&::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::CopyFrom)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x60195ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot*>(),
                        {"CopyFrom", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot.GetNextCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Fusion::LagCompensation::HitboxCollider> (::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::*)(::by_ref<int32_t>)>(&::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::GetNextCollider)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x601b288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot*>(),
                        {"GetNextCollider", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot.ResizeCollidersArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::*)(int32_t)>(&::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::ResizeCollidersArray)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x601b0a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot*>(),
                        {"ResizeCollidersArray", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot.GetNextTempCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Fusion::LagCompensation::HitboxCollider> (::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::*)(::by_ref<int32_t>)>(&::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::GetNextTempCollider)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x601b430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot*>(),
                        {"GetNextTempCollider", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot.ReleaseTempColliders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::*)()>(&::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::ReleaseTempColliders)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x601b078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot*>(),
                        {"ReleaseTempColliders", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot.ReleaseCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::*)(int32_t)>(&::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::ReleaseCollider)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x601b550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot*>(),
                        {"ReleaseCollider", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot.GetCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Fusion::LagCompensation::HitboxCollider> (::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::*)(int32_t)>(&::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::GetCollider)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x601b69c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot*>(),
                        {"GetCollider", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::*)(::Fusion::HitboxRoot*, ::Fusion::Statistics::LagCompensationStatisticsManager*)>(&::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::Add)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x6019760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot*>(),
                        {"Add", {}, {::i2c::type_of<::Fusion::HitboxRoot*>(), ::i2c::type_of<::Fusion::Statistics::LagCompensationStatisticsManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::*)(::Fusion::HitboxRoot*)>(&::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::Remove)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6019a1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot*>(),
                        {"Remove", {}, {::i2c::type_of<::Fusion::HitboxRoot*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::*)(::Fusion::HitboxRoot*, ::Fusion::Statistics::LagCompensationStatisticsManager*)>(&::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::Update)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x601b7c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot*>(),
                        {"Update", {}, {::i2c::type_of<::Fusion::HitboxRoot*>(), ::i2c::type_of<::Fusion::Statistics::LagCompensationStatisticsManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot.QueryBroadphase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::*)(::Fusion::LagCompensation::Query*, ::System::Collections::Generic::HashSet_1<::UnityW<::Fusion::HitboxRoot>>*)>(&::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::QueryBroadphase)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x601a964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot*>(),
                        {"QueryBroadphase", {}, {::i2c::type_of<::Fusion::LagCompensation::Query*>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityW<::Fusion::HitboxRoot>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot.ProcessBroadphaseRootCandidates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::LagCompensation::Query*, ::Fusion::LagCompensation::IHitboxColliderContainer*, ::System::Collections::Generic::HashSet_1<::UnityW<::Fusion::HitboxRoot>>*, ::System::Collections::Generic::HashSet_1<int32_t>*, ::Fusion::LagCompensation::IHitboxColliderContainer*)>(&::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::ProcessBroadphaseRootCandidates)> {
  constexpr static std::size_t size = 0x628;
  constexpr static std::size_t addrs = 0x601aa38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot*>(),
                        {"ProcessBroadphaseRootCandidates", {}, {::i2c::type_of<::Fusion::LagCompensation::Query*>(), ::i2c::type_of<::Fusion::LagCompensation::IHitboxColliderContainer*>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityW<::Fusion::HitboxRoot>>*>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<int32_t>*>(), ::i2c::type_of<::Fusion::LagCompensation::IHitboxColliderContainer*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::Fusion::LagCompensation::HitboxCollider>& Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::__cordl_internal_get__colliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colliders;
}
constexpr ::ArrayW<::Fusion::LagCompensation::HitboxCollider> const& Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::__cordl_internal_get__colliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colliders;
}
constexpr void Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::__cordl_internal_set__colliders(::ArrayW<::Fusion::LagCompensation::HitboxCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____colliders = value;
}
constexpr int32_t& Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::__cordl_internal_get__collidersCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collidersCount;
}
constexpr int32_t const& Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::__cordl_internal_get__collidersCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collidersCount;
}
constexpr void Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::__cordl_internal_set__collidersCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____collidersCount = value;
}
constexpr int32_t& Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::__cordl_internal_get__collidersTempCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collidersTempCount;
}
constexpr int32_t const& Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::__cordl_internal_get__collidersTempCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collidersTempCount;
}
constexpr void Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::__cordl_internal_set__collidersTempCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____collidersTempCount = value;
}
constexpr int32_t& Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::__cordl_internal_get__collidersFreeHead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collidersFreeHead;
}
constexpr int32_t const& Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::__cordl_internal_get__collidersFreeHead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collidersFreeHead;
}
constexpr void Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::__cordl_internal_set__collidersFreeHead(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____collidersFreeHead = value;
}
constexpr ::Fusion::LagCompensation::ILagCompensationBroadphase*& Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::__cordl_internal_get__broadphase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____broadphase;
}
constexpr ::Fusion::LagCompensation::ILagCompensationBroadphase* const& Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::__cordl_internal_get__broadphase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____broadphase;
}
constexpr void Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::__cordl_internal_set__broadphase(::Fusion::LagCompensation::ILagCompensationBroadphase*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____broadphase = value;
}
constexpr int32_t& Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::__cordl_internal_get_Tick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tick;
}
constexpr int32_t const& Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::__cordl_internal_get_Tick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tick;
}
constexpr void Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::__cordl_internal_set_Tick(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Tick = value;
}
constexpr int32_t& Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::__cordl_internal_get_DataTick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DataTick;
}
constexpr int32_t const& Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::__cordl_internal_get_DataTick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DataTick;
}
constexpr void Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::__cordl_internal_set_DataTick(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DataTick = value;
}
inline int32_t Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::get_CollidersCapacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot*>(),
                        {"get_CollidersCapacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::get_CollidersCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot*>(),
                        {"get_CollidersCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::_ctor(::Fusion::LagCompensation::Mapper*  mapper, ::System::Collections::Generic::List_1<::UnityW<::Fusion::HitboxRoot>>*  initialObjects, int32_t  hitboxCapacity, float_t  expansionFactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::LagCompensation::Mapper*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Fusion::HitboxRoot>>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mapper, initialObjects, hitboxCapacity, expansionFactor);
}
inline void Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::CopyFrom(int32_t  tick, int32_t  dataTick, ::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot*  from)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot*>(),
                        {"CopyFrom", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tick, dataTick, from);
}
inline ::by_ref<::Fusion::LagCompensation::HitboxCollider> Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::GetNextCollider(::by_ref<int32_t>  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot*>(),
                        {"GetNextCollider", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Fusion::LagCompensation::HitboxCollider>>(this, ___internal_method, index);
}
inline void Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::ResizeCollidersArray(int32_t  minimumIncrease)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot*>(),
                        {"ResizeCollidersArray", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, minimumIncrease);
}
inline ::by_ref<::Fusion::LagCompensation::HitboxCollider> Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::GetNextTempCollider(::by_ref<int32_t>  tmpIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot*>(),
                        {"GetNextTempCollider", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Fusion::LagCompensation::HitboxCollider>>(this, ___internal_method, tmpIndex);
}
inline void Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::ReleaseTempColliders()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot*>(),
                        {"ReleaseTempColliders", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::ReleaseCollider(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot*>(),
                        {"ReleaseCollider", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline ::by_ref<::Fusion::LagCompensation::HitboxCollider> Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::GetCollider(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot*>(),
                        {"GetCollider", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Fusion::LagCompensation::HitboxCollider>>(this, ___internal_method, index);
}
inline void Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::Add(::Fusion::HitboxRoot*  h, ::Fusion::Statistics::LagCompensationStatisticsManager*  lagCompStatManager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot*>(),
                        {"Add", {}, {::i2c::type_of<::Fusion::HitboxRoot*>(), ::i2c::type_of<::Fusion::Statistics::LagCompensationStatisticsManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, h, lagCompStatManager);
}
inline bool Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::Remove(::Fusion::HitboxRoot*  hr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot*>(),
                        {"Remove", {}, {::i2c::type_of<::Fusion::HitboxRoot*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hr);
}
inline void Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::Update(::Fusion::HitboxRoot*  h, ::Fusion::Statistics::LagCompensationStatisticsManager*  lagCompStatManager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot*>(),
                        {"Update", {}, {::i2c::type_of<::Fusion::HitboxRoot*>(), ::i2c::type_of<::Fusion::Statistics::LagCompensationStatisticsManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, h, lagCompStatManager);
}
inline void Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::QueryBroadphase(::Fusion::LagCompensation::Query*  query, ::System::Collections::Generic::HashSet_1<::UnityW<::Fusion::HitboxRoot>>*  broadphaseCandidates)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot*>(),
                        {"QueryBroadphase", {}, {::i2c::type_of<::Fusion::LagCompensation::Query*>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityW<::Fusion::HitboxRoot>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, query, broadphaseCandidates);
}
inline void Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::ProcessBroadphaseRootCandidates(::Fusion::LagCompensation::Query*  query, ::Fusion::LagCompensation::IHitboxColliderContainer*  fromContainer, ::System::Collections::Generic::HashSet_1<::UnityW<::Fusion::HitboxRoot>>*  rootCandidates, ::System::Collections::Generic::HashSet_1<int32_t>*  processedColliderIndices, ::Fusion::LagCompensation::IHitboxColliderContainer*  toContainer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot*>(),
                        {"ProcessBroadphaseRootCandidates", {}, {::i2c::type_of<::Fusion::LagCompensation::Query*>(), ::i2c::type_of<::Fusion::LagCompensation::IHitboxColliderContainer*>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityW<::Fusion::HitboxRoot>>*>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<int32_t>*>(), ::i2c::type_of<::Fusion::LagCompensation::IHitboxColliderContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, query, fromContainer, rootCandidates, processedColliderIndices, toContainer);
}
inline ::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot* Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::New_ctor(::Fusion::LagCompensation::Mapper*  mapper, ::System::Collections::Generic::List_1<::UnityW<::Fusion::HitboxRoot>>*  initialObjects, int32_t  hitboxCapacity, float_t  expansionFactor)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot*>(mapper, initialObjects, hitboxCapacity, expansionFactor));
}
/// @brief Convert operator to "::Fusion::LagCompensation::IHitboxColliderContainer"
constexpr  Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::operator ::Fusion::LagCompensation::IHitboxColliderContainer*() noexcept {
return static_cast<::Fusion::LagCompensation::IHitboxColliderContainer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::LagCompensation::IHitboxColliderContainer"
constexpr ::Fusion::LagCompensation::IHitboxColliderContainer* Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::i___Fusion__LagCompensation__IHitboxColliderContainer() noexcept {
return static_cast<::Fusion::LagCompensation::IHitboxColliderContainer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot::HitboxBuffer_HitboxSnapshot()   {
}
