#pragma once
// IWYU pragma private; include "Voxels/StayOutsideOfGeo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(StayOutsideOfGeo)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace Unity::Mathematics {
struct int3;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace Voxels {
class VoxelWorld;
}
// Forward declare root types
namespace Voxels {
class StayOutsideOfGeo;
}
// Write type traits
MARK_REF_T(::Voxels::StayOutsideOfGeo*);
DEFINE_IL2CPP_CLASS(::Voxels::StayOutsideOfGeo*, "Voxels", "StayOutsideOfGeo");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Voxels {
// Is value type: false
// CS Name: Voxels.StayOutsideOfGeo
class CORDL_TYPE StayOutsideOfGeo : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _disableOnMove, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__disableOnMove, put=__cordl_internal_set__disableOnMove)) ::UnityW<::UnityEngine::Collider>  _disableOnMove;

/// @brief Field _historyIndex, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__historyIndex, put=__cordl_internal_set__historyIndex)) int32_t  _historyIndex;

/// @brief Field _maxDensity, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxDensity, put=__cordl_internal_set__maxDensity)) float_t  _maxDensity;

/// @brief Field _maxHistorySize, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxHistorySize, put=__cordl_internal_set__maxHistorySize)) int32_t  _maxHistorySize;

/// @brief Field _minDensity, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__minDensity, put=__cordl_internal_set__minDensity)) float_t  _minDensity;

/// @brief Field _pauseOnPenetration, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__pauseOnPenetration, put=__cordl_internal_set__pauseOnPenetration)) bool  _pauseOnPenetration;

/// @brief Field _positionHistory, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__positionHistory, put=__cordl_internal_set__positionHistory)) ::System::Collections::Generic::List_1<::Unity::Mathematics::int3>*  _positionHistory;

/// @brief Field _target, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__target, put=__cordl_internal_set__target)) ::UnityW<::UnityEngine::Transform>  _target;

/// @brief Field _targetOffset, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get__targetOffset, put=__cordl_internal_set__targetOffset)) ::UnityEngine::Vector3  _targetOffset;

/// @brief Field _threshold, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__threshold, put=__cordl_internal_set__threshold)) float_t  _threshold;

/// @brief Field _voxelWorld, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__voxelWorld, put=__cordl_internal_set__voxelWorld)) ::UnityW<::Voxels::VoxelWorld>  _voxelWorld;

/// @brief Method AddPositionToHistory, addr 0x5db213c, size 0x140, virtual false, abstract: false, final false
inline void AddPositionToHistory(::Unity::Mathematics::int3  position) ;

/// @brief Method GetMostRecentPosition, addr 0x5db2b84, size 0xa8, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 GetMostRecentPosition() ;

/// @brief Method IsOutsideGeo, addr 0x5db27a4, size 0x44, virtual false, abstract: false, final false
inline bool IsOutsideGeo(::Unity::Mathematics::int3  position) ;

static inline ::Voxels::StayOutsideOfGeo* New_ctor() ;

/// @brief Method PopMostRecentPosition, addr 0x5db29e4, size 0xac, virtual false, abstract: false, final false
inline ::Unity::Mathematics::int3 PopMostRecentPosition() ;

/// @brief Method Reset, addr 0x5db19f0, size 0x24, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method ResolvePenetration, addr 0x5db227c, size 0x528, virtual false, abstract: false, final false
inline bool ResolvePenetration(::Unity::Mathematics::int3  pos) ;

/// @brief Method SetPosition, addr 0x5db27e8, size 0x1fc, virtual false, abstract: false, final false
inline void SetPosition(::UnityEngine::Vector3  worldPosition) ;

/// @brief Method Start, addr 0x5db1a14, size 0x14c, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method TestPosition, addr 0x5db1eec, size 0x250, virtual false, abstract: false, final false
inline ::System::ValueTuple_2<bool,::Unity::Mathematics::int3> TestPosition(::Unity::Mathematics::int3  position, bool  useThreshold) ;

/// @brief Method Update, addr 0x5db1bd0, size 0x31c, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get__disableOnMove() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get__disableOnMove() ;

constexpr int32_t const& __cordl_internal_get__historyIndex() const;

constexpr int32_t& __cordl_internal_get__historyIndex() ;

constexpr float_t const& __cordl_internal_get__maxDensity() const;

constexpr float_t& __cordl_internal_get__maxDensity() ;

constexpr int32_t const& __cordl_internal_get__maxHistorySize() const;

constexpr int32_t& __cordl_internal_get__maxHistorySize() ;

constexpr float_t const& __cordl_internal_get__minDensity() const;

constexpr float_t& __cordl_internal_get__minDensity() ;

constexpr bool const& __cordl_internal_get__pauseOnPenetration() const;

constexpr bool& __cordl_internal_get__pauseOnPenetration() ;

constexpr ::System::Collections::Generic::List_1<::Unity::Mathematics::int3>* const& __cordl_internal_get__positionHistory() const;

constexpr ::System::Collections::Generic::List_1<::Unity::Mathematics::int3>*& __cordl_internal_get__positionHistory() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__target() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__target() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__targetOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__targetOffset() ;

constexpr float_t const& __cordl_internal_get__threshold() const;

constexpr float_t& __cordl_internal_get__threshold() ;

constexpr ::UnityW<::Voxels::VoxelWorld> const& __cordl_internal_get__voxelWorld() const;

constexpr ::UnityW<::Voxels::VoxelWorld>& __cordl_internal_get__voxelWorld() ;

constexpr void __cordl_internal_set__disableOnMove(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set__historyIndex(int32_t  value) ;

constexpr void __cordl_internal_set__maxDensity(float_t  value) ;

constexpr void __cordl_internal_set__maxHistorySize(int32_t  value) ;

constexpr void __cordl_internal_set__minDensity(float_t  value) ;

constexpr void __cordl_internal_set__pauseOnPenetration(bool  value) ;

constexpr void __cordl_internal_set__positionHistory(::System::Collections::Generic::List_1<::Unity::Mathematics::int3>*  value) ;

constexpr void __cordl_internal_set__target(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__targetOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__threshold(float_t  value) ;

constexpr void __cordl_internal_set__voxelWorld(::UnityW<::Voxels::VoxelWorld>  value) ;

/// @brief Method .ctor, addr 0x5db2c2c, size 0xe4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StayOutsideOfGeo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StayOutsideOfGeo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StayOutsideOfGeo(StayOutsideOfGeo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StayOutsideOfGeo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StayOutsideOfGeo(StayOutsideOfGeo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5027};

/// [SerializeField]
/// @brief Field _target, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____target;

/// [SerializeField]
/// @brief Field _targetOffset, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____targetOffset;

/// [SerializeField]
/// @brief Field _threshold, offset: 0x34, size: 0x4, def value: None
 float_t  ____threshold;

/// [SerializeField]
/// @brief Field _pauseOnPenetration, offset: 0x38, size: 0x1, def value: None
 bool  ____pauseOnPenetration;

/// [SerializeField]
/// @brief Field _disableOnMove, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ____disableOnMove;

/// @brief Field _voxelWorld, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::Voxels::VoxelWorld>  ____voxelWorld;

/// @brief Field _positionHistory, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Unity::Mathematics::int3>*  ____positionHistory;

/// @brief Field _maxHistorySize, offset: 0x58, size: 0x4, def value: None
 int32_t  ____maxHistorySize;

/// @brief Field _historyIndex, offset: 0x5c, size: 0x4, def value: None
 int32_t  ____historyIndex;

/// @brief Field _maxDensity, offset: 0x60, size: 0x4, def value: None
 float_t  ____maxDensity;

/// @brief Field _minDensity, offset: 0x64, size: 0x4, def value: None
 float_t  ____minDensity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Voxels::StayOutsideOfGeo, ____target) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Voxels::StayOutsideOfGeo, ____targetOffset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Voxels::StayOutsideOfGeo, ____threshold) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Voxels::StayOutsideOfGeo, ____pauseOnPenetration) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Voxels::StayOutsideOfGeo, ____disableOnMove) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Voxels::StayOutsideOfGeo, ____voxelWorld) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Voxels::StayOutsideOfGeo, ____positionHistory) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Voxels::StayOutsideOfGeo, ____maxHistorySize) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Voxels::StayOutsideOfGeo, ____historyIndex) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Voxels::StayOutsideOfGeo, ____maxDensity) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Voxels::StayOutsideOfGeo, ____minDensity) == 0x64, "Offset mismatch!");

static_assert(sizeof(::Voxels::StayOutsideOfGeo) == 0x68, "Size mismatch!");

} // namespace end def Voxels
