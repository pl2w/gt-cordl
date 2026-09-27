#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/HitboxBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/LagCompensation/zzzz__HitboxCollider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HitboxBuffer)
namespace Fusion::LagCompensation {
class BVH;
}
namespace Fusion::LagCompensation {
class HitboxBuffer_HitboxSnapshot;
}
namespace Fusion::LagCompensation {
struct HitboxCollider;
}
namespace Fusion::LagCompensation {
struct HitboxHit;
}
namespace Fusion::LagCompensation {
class IHitboxColliderContainer;
}
namespace Fusion::LagCompensation {
class ILagCompensationBroadphase;
}
namespace Fusion::LagCompensation {
class Mapper;
}
namespace Fusion::LagCompensation {
struct PositionRotationQueryParams;
}
namespace Fusion::LagCompensation {
class Query;
}
namespace Fusion::Statistics {
class LagCompensationStatisticsManager;
}
namespace Fusion {
class HitboxRoot;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Fusion::LagCompensation {
class HitboxBuffer;
}
namespace Fusion::LagCompensation {
class HitboxBuffer_HitboxSnapshot;
}
// Write type traits
MARK_REF_T(::Fusion::LagCompensation::HitboxBuffer*);
MARK_REF_T(::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot*);
DEFINE_IL2CPP_CLASS(::Fusion::LagCompensation::HitboxBuffer*, "Fusion.LagCompensation", "HitboxBuffer");
DEFINE_IL2CPP_CLASS(::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot*, "Fusion.LagCompensation", "HitboxBuffer/HitboxSnapshot");
// Dependencies Fusion.LagCompensation.HitboxBuffer::HitboxSnapshot, System.Object
namespace Fusion::LagCompensation {
// Is value type: false
// CS Name: Fusion.LagCompensation.HitboxBuffer
class CORDL_TYPE HitboxBuffer : public ::System::Object {
public:
// Declarations
using HitboxSnapshot = ::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot;

 __declspec(property(get=get_BVH)) ::Fusion::LagCompensation::BVH*  BVH;

 __declspec(property(get=get_Current)) ::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot*  Current;

 __declspec(property(get=get_Length)) int32_t  Length;

/// @brief Field Tick, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_Tick, put=__cordl_internal_set_Tick)) int32_t  Tick;

/// @brief Field _advanced, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__advanced, put=__cordl_internal_set__advanced)) int32_t  _advanced;

/// @brief Field _broadphaseCandidates, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__broadphaseCandidates, put=__cordl_internal_set__broadphaseCandidates)) ::System::Collections::Generic::HashSet_1<::UnityW<::Fusion::HitboxRoot>>*  _broadphaseCandidates;

/// @brief Field _buffer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__buffer, put=__cordl_internal_set__buffer)) ::ArrayW<::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot*>  _buffer;

/// @brief Field _colliderCandidates, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__colliderCandidates, put=__cordl_internal_set__colliderCandidates)) ::System::Collections::Generic::HashSet_1<int32_t>*  _colliderCandidates;

/// @brief Field _head, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__head, put=__cordl_internal_set__head)) int32_t  _head;

/// @brief Field _mapper, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__mapper, put=__cordl_internal_set__mapper)) ::Fusion::LagCompensation::Mapper*  _mapper;

/// @brief Method Add, addr 0x6019728, size 0x38, virtual false, abstract: false, final false
inline void Add(::Fusion::HitboxRoot*  root, ::Fusion::Statistics::LagCompensationStatisticsManager*  lagCompStatManager) ;

/// @brief Method Advance, addr 0x6019500, size 0xac, virtual false, abstract: false, final false
inline void Advance(int32_t  tick, int32_t  dataTick) ;

/// @brief Method GetClosestSnapshotForTick, addr 0x6019e00, size 0x330, virtual false, abstract: false, final false
inline void GetClosestSnapshotForTick(int32_t  tick, ::by_ref<::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot*>  snapshot) ;

/// @brief Method GetClosestTick, addr 0x601a7a8, size 0x1bc, virtual false, abstract: false, final false
inline int32_t GetClosestTick(::Fusion::LagCompensation::Query*  query) ;

/// @brief Method InitColliderCandidatesForNarrowPhase, addr 0x601a310, size 0x1b0, virtual false, abstract: false, final false
inline void InitColliderCandidatesForNarrowPhase(::Fusion::LagCompensation::IHitboxColliderContainer*  container, ::System::Collections::Generic::HashSet_1<int32_t>*  candidates) ;

static inline ::Fusion::LagCompensation::HitboxBuffer* New_ctor(::System::Collections::Generic::List_1<::UnityW<::Fusion::HitboxRoot>>*  initialObjects, int32_t  bufferSize, int32_t  hitboxCapacity, float_t  expansionFactor) ;

/// @brief Method PerformQuery, addr 0x6019b18, size 0x158, virtual false, abstract: false, final false
inline bool PerformQuery(::Fusion::LagCompensation::Query*  query, ::System::Collections::Generic::List_1<::Fusion::LagCompensation::HitboxHit>*  hits) ;

/// @brief Method PosUpdateRefit, addr 0x601970c, size 0x1c, virtual false, abstract: false, final false
inline void PosUpdateRefit() ;

/// @brief Method PositionQueryInternal, addr 0x6019c70, size 0x190, virtual false, abstract: false, final false
inline void PositionQueryInternal(::by_ref<::Fusion::LagCompensation::PositionRotationQueryParams>  param, ::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Quaternion>  rotation) ;

/// @brief Method QuaternionFromMatrix, addr 0x601a2ac, size 0x64, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion QuaternionFromMatrix(::UnityEngine::Matrix4x4  m) ;

/// @brief Method QueryBroadphase, addr 0x601a5bc, size 0x1ec, virtual false, abstract: false, final false
inline void QueryBroadphase(::Fusion::LagCompensation::Query*  query, ::System::Collections::Generic::HashSet_1<int32_t>*  processedColliderIndices, ::by_ref<::Fusion::LagCompensation::IHitboxColliderContainer*>  container) ;

/// @brief Method Remove, addr 0x60199e4, size 0x38, virtual false, abstract: false, final false
inline bool Remove(::Fusion::HitboxRoot*  root) ;

/// @brief Method Update, addr 0x6019adc, size 0x3c, virtual false, abstract: false, final false
inline void Update(::Fusion::HitboxRoot*  root, ::Fusion::Statistics::LagCompensationStatisticsManager*  lagCompStatManager) ;

constexpr int32_t const& __cordl_internal_get_Tick() const;

constexpr int32_t& __cordl_internal_get_Tick() ;

constexpr int32_t const& __cordl_internal_get__advanced() const;

constexpr int32_t& __cordl_internal_get__advanced() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::Fusion::HitboxRoot>>* const& __cordl_internal_get__broadphaseCandidates() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::Fusion::HitboxRoot>>*& __cordl_internal_get__broadphaseCandidates() ;

constexpr ::ArrayW<::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot*> const& __cordl_internal_get__buffer() const;

constexpr ::ArrayW<::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot*>& __cordl_internal_get__buffer() ;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& __cordl_internal_get__colliderCandidates() const;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get__colliderCandidates() ;

constexpr int32_t const& __cordl_internal_get__head() const;

constexpr int32_t& __cordl_internal_get__head() ;

constexpr ::Fusion::LagCompensation::Mapper* const& __cordl_internal_get__mapper() const;

constexpr ::Fusion::LagCompensation::Mapper*& __cordl_internal_get__mapper() ;

constexpr void __cordl_internal_set_Tick(int32_t  value) ;

constexpr void __cordl_internal_set__advanced(int32_t  value) ;

constexpr void __cordl_internal_set__broadphaseCandidates(::System::Collections::Generic::HashSet_1<::UnityW<::Fusion::HitboxRoot>>*  value) ;

constexpr void __cordl_internal_set__buffer(::ArrayW<::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot*>  value) ;

constexpr void __cordl_internal_set__colliderCandidates(::System::Collections::Generic::HashSet_1<int32_t>*  value) ;

constexpr void __cordl_internal_set__head(int32_t  value) ;

constexpr void __cordl_internal_set__mapper(::Fusion::LagCompensation::Mapper*  value) ;

/// @brief Method .ctor, addr 0x6018f48, size 0x388, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::List_1<::UnityW<::Fusion::HitboxRoot>>*  initialObjects, int32_t  bufferSize, int32_t  hitboxCapacity, float_t  expansionFactor) ;

/// @brief Method get_BVH, addr 0x601772c, size 0xa8, virtual false, abstract: false, final false
inline ::Fusion::LagCompensation::BVH* get_BVH() ;

/// @brief Method get_Current, addr 0x6018f14, size 0x34, virtual false, abstract: false, final false
inline ::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot* get_Current() ;

/// @brief Method get_Length, addr 0x6018678, size 0x18, virtual false, abstract: false, final false
inline int32_t get_Length() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HitboxBuffer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HitboxBuffer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HitboxBuffer(HitboxBuffer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HitboxBuffer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HitboxBuffer(HitboxBuffer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19413};

/// @brief Field _buffer, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot*>  ____buffer;

/// @brief Field _mapper, offset: 0x18, size: 0x8, def value: None
 ::Fusion::LagCompensation::Mapper*  ____mapper;

/// @brief Field _head, offset: 0x20, size: 0x4, def value: None
 int32_t  ____head;

/// @brief Field _advanced, offset: 0x24, size: 0x4, def value: None
 int32_t  ____advanced;

/// @brief Field Tick, offset: 0x28, size: 0x4, def value: None
 int32_t  ___Tick;

/// @brief Field _broadphaseCandidates, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::Fusion::HitboxRoot>>*  ____broadphaseCandidates;

/// @brief Field _colliderCandidates, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<int32_t>*  ____colliderCandidates;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::LagCompensation::HitboxBuffer, ____buffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::HitboxBuffer, ____mapper) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::HitboxBuffer, ____head) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::HitboxBuffer, ____advanced) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::HitboxBuffer, ___Tick) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::HitboxBuffer, ____broadphaseCandidates) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::HitboxBuffer, ____colliderCandidates) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Fusion::LagCompensation::HitboxBuffer) == 0x40, "Size mismatch!");

} // namespace end def Fusion::LagCompensation
// Dependencies Fusion.LagCompensation.HitboxCollider, System.Object
namespace Fusion::LagCompensation {
// Is value type: false
// CS Name: Fusion.LagCompensation.HitboxBuffer/HitboxSnapshot
class CORDL_TYPE HitboxBuffer_HitboxSnapshot : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CollidersCapacity)) int32_t  CollidersCapacity;

 __declspec(property(get=get_CollidersCount)) int32_t  CollidersCount;

/// @brief Field DataTick, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_DataTick, put=__cordl_internal_set_DataTick)) int32_t  DataTick;

/// @brief Field Tick, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_Tick, put=__cordl_internal_set_Tick)) int32_t  Tick;

/// @brief Field _broadphase, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__broadphase, put=__cordl_internal_set__broadphase)) ::Fusion::LagCompensation::ILagCompensationBroadphase*  _broadphase;

/// @brief Field _colliders, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__colliders, put=__cordl_internal_set__colliders)) ::ArrayW<::Fusion::LagCompensation::HitboxCollider>  _colliders;

/// @brief Field _collidersCount, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__collidersCount, put=__cordl_internal_set__collidersCount)) int32_t  _collidersCount;

/// @brief Field _collidersFreeHead, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__collidersFreeHead, put=__cordl_internal_set__collidersFreeHead)) int32_t  _collidersFreeHead;

/// @brief Field _collidersTempCount, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__collidersTempCount, put=__cordl_internal_set__collidersTempCount)) int32_t  _collidersTempCount;

/// @brief Convert operator to "::Fusion::LagCompensation::IHitboxColliderContainer"
constexpr operator  ::Fusion::LagCompensation::IHitboxColliderContainer*() noexcept;

/// @brief Method Add, addr 0x6019760, size 0x284, virtual false, abstract: false, final false
inline void Add(::Fusion::HitboxRoot*  h, ::Fusion::Statistics::LagCompensationStatisticsManager*  lagCompStatManager) ;

/// @brief Method CopyFrom, addr 0x60195ac, size 0x160, virtual false, abstract: false, final false
inline void CopyFrom(int32_t  tick, int32_t  dataTick, ::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot*  from) ;

/// @brief Method GetCollider, addr 0x601b69c, size 0xe8, virtual true, abstract: false, final true
inline ::by_ref<::Fusion::LagCompensation::HitboxCollider> GetCollider(int32_t  index) ;

/// @brief Method GetNextCollider, addr 0x601b288, size 0x1a8, virtual true, abstract: false, final true
inline ::by_ref<::Fusion::LagCompensation::HitboxCollider> GetNextCollider(::by_ref<int32_t>  index) ;

/// @brief Method GetNextTempCollider, addr 0x601b430, size 0x120, virtual true, abstract: false, final true
inline ::by_ref<::Fusion::LagCompensation::HitboxCollider> GetNextTempCollider(::by_ref<int32_t>  tmpIndex) ;

static inline ::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot* New_ctor(::Fusion::LagCompensation::Mapper*  mapper, ::System::Collections::Generic::List_1<::UnityW<::Fusion::HitboxRoot>>*  initialObjects, int32_t  hitboxCapacity, float_t  expansionFactor) ;

/// @brief Method ProcessBroadphaseRootCandidates, addr 0x601aa38, size 0x628, virtual false, abstract: false, final false
static inline void ProcessBroadphaseRootCandidates(::Fusion::LagCompensation::Query*  query, ::Fusion::LagCompensation::IHitboxColliderContainer*  fromContainer, ::System::Collections::Generic::HashSet_1<::UnityW<::Fusion::HitboxRoot>>*  rootCandidates, ::System::Collections::Generic::HashSet_1<int32_t>*  processedColliderIndices, ::Fusion::LagCompensation::IHitboxColliderContainer*  toContainer) ;

/// @brief Method QueryBroadphase, addr 0x601a964, size 0xd4, virtual false, abstract: false, final false
inline void QueryBroadphase(::Fusion::LagCompensation::Query*  query, ::System::Collections::Generic::HashSet_1<::UnityW<::Fusion::HitboxRoot>>*  broadphaseCandidates) ;

/// @brief Method ReleaseCollider, addr 0x601b550, size 0x14c, virtual true, abstract: false, final true
inline void ReleaseCollider(int32_t  index) ;

/// @brief Method ReleaseTempColliders, addr 0x601b078, size 0x30, virtual true, abstract: false, final true
inline void ReleaseTempColliders() ;

/// @brief Method Remove, addr 0x6019a1c, size 0xc0, virtual false, abstract: false, final false
inline bool Remove(::Fusion::HitboxRoot*  hr) ;

/// @brief Method ResizeCollidersArray, addr 0x601b0a8, size 0x1e0, virtual false, abstract: false, final false
inline void ResizeCollidersArray(int32_t  minimumIncrease) ;

/// @brief Method Update, addr 0x601b7c4, size 0x32c, virtual false, abstract: false, final false
inline void Update(::Fusion::HitboxRoot*  h, ::Fusion::Statistics::LagCompensationStatisticsManager*  lagCompStatManager) ;

constexpr int32_t const& __cordl_internal_get_DataTick() const;

constexpr int32_t& __cordl_internal_get_DataTick() ;

constexpr int32_t const& __cordl_internal_get_Tick() const;

constexpr int32_t& __cordl_internal_get_Tick() ;

constexpr ::Fusion::LagCompensation::ILagCompensationBroadphase* const& __cordl_internal_get__broadphase() const;

constexpr ::Fusion::LagCompensation::ILagCompensationBroadphase*& __cordl_internal_get__broadphase() ;

constexpr ::ArrayW<::Fusion::LagCompensation::HitboxCollider> const& __cordl_internal_get__colliders() const;

constexpr ::ArrayW<::Fusion::LagCompensation::HitboxCollider>& __cordl_internal_get__colliders() ;

constexpr int32_t const& __cordl_internal_get__collidersCount() const;

constexpr int32_t& __cordl_internal_get__collidersCount() ;

constexpr int32_t const& __cordl_internal_get__collidersFreeHead() const;

constexpr int32_t& __cordl_internal_get__collidersFreeHead() ;

constexpr int32_t const& __cordl_internal_get__collidersTempCount() const;

constexpr int32_t& __cordl_internal_get__collidersTempCount() ;

constexpr void __cordl_internal_set_DataTick(int32_t  value) ;

constexpr void __cordl_internal_set_Tick(int32_t  value) ;

constexpr void __cordl_internal_set__broadphase(::Fusion::LagCompensation::ILagCompensationBroadphase*  value) ;

constexpr void __cordl_internal_set__colliders(::ArrayW<::Fusion::LagCompensation::HitboxCollider>  value) ;

constexpr void __cordl_internal_set__collidersCount(int32_t  value) ;

constexpr void __cordl_internal_set__collidersFreeHead(int32_t  value) ;

constexpr void __cordl_internal_set__collidersTempCount(int32_t  value) ;

/// @brief Method .ctor, addr 0x60192d0, size 0x230, virtual false, abstract: false, final false
inline void _ctor(::Fusion::LagCompensation::Mapper*  mapper, ::System::Collections::Generic::List_1<::UnityW<::Fusion::HitboxRoot>>*  initialObjects, int32_t  hitboxCapacity, float_t  expansionFactor) ;

/// @brief Method get_CollidersCapacity, addr 0x601b060, size 0x18, virtual false, abstract: false, final false
inline int32_t get_CollidersCapacity() ;

/// @brief Method get_CollidersCount, addr 0x601886c, size 0xc, virtual false, abstract: false, final false
inline int32_t get_CollidersCount() ;

/// @brief Convert to "::Fusion::LagCompensation::IHitboxColliderContainer"
constexpr ::Fusion::LagCompensation::IHitboxColliderContainer* i___Fusion__LagCompensation__IHitboxColliderContainer() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HitboxBuffer_HitboxSnapshot() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HitboxBuffer_HitboxSnapshot", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HitboxBuffer_HitboxSnapshot(HitboxBuffer_HitboxSnapshot && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HitboxBuffer_HitboxSnapshot", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HitboxBuffer_HitboxSnapshot(HitboxBuffer_HitboxSnapshot const& ) = delete;

/// @brief Field HIGH_COLLIDERS_CAPACITY offset 0xffffffff size 0x4
static constexpr int32_t  HIGH_COLLIDERS_CAPACITY{static_cast<int32_t>(0x400)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19412};

/// @brief Field _colliders, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::Fusion::LagCompensation::HitboxCollider>  ____colliders;

/// @brief Field _collidersCount, offset: 0x18, size: 0x4, def value: None
 int32_t  ____collidersCount;

/// @brief Field _collidersTempCount, offset: 0x1c, size: 0x4, def value: None
 int32_t  ____collidersTempCount;

/// @brief Field _collidersFreeHead, offset: 0x20, size: 0x4, def value: None
 int32_t  ____collidersFreeHead;

/// @brief Field _broadphase, offset: 0x28, size: 0x8, def value: None
 ::Fusion::LagCompensation::ILagCompensationBroadphase*  ____broadphase;

/// @brief Field Tick, offset: 0x30, size: 0x4, def value: None
 int32_t  ___Tick;

/// @brief Field DataTick, offset: 0x34, size: 0x4, def value: None
 int32_t  ___DataTick;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot, ____colliders) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot, ____collidersCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot, ____collidersTempCount) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot, ____collidersFreeHead) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot, ____broadphase) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot, ___Tick) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot, ___DataTick) == 0x34, "Offset mismatch!");

static_assert(sizeof(::Fusion::LagCompensation::HitboxBuffer_HitboxSnapshot) == 0x38, "Size mismatch!");

} // namespace end def Fusion::LagCompensation
