#pragma once
// IWYU pragma private; include "GlobalNamespace/BezierSpline.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BezierControlPointMode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BezierSpline)
namespace GlobalNamespace {
struct BezierControlPointMode;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class BezierSpline;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BezierSpline*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BezierSpline*, "", "BezierSpline");
// Dependencies BezierControlPointMode, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: BezierSpline
class CORDL_TYPE BezierSpline : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_ControlPointCount)) int32_t  ControlPointCount;

 __declspec(property(get=get_CurveCount)) int32_t  CurveCount;

 __declspec(property(get=get_Loop, put=set_Loop)) bool  Loop;

/// @brief Field _lengthsTable, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__lengthsTable, put=__cordl_internal_set__lengthsTable)) ::ArrayW<float_t>  _lengthsTable;

/// @brief Field _timesTable, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__timesTable, put=__cordl_internal_set__timesTable)) ::ArrayW<float_t>  _timesTable;

/// @brief Field _totalArcLength, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__totalArcLength, put=__cordl_internal_set__totalArcLength)) float_t  _totalArcLength;

/// @brief Field loop, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_loop, put=__cordl_internal_set_loop)) bool  loop;

/// @brief Field modes, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_modes, put=__cordl_internal_set_modes)) ::ArrayW<::GlobalNamespace::BezierControlPointMode>  modes;

/// @brief Field points, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_points, put=__cordl_internal_set_points)) ::ArrayW<::UnityEngine::Vector3>  points;

/// @brief Method AddCurve, addr 0x5b13198, size 0x20c, virtual false, abstract: false, final false
inline void AddCurve() ;

/// @brief Method Awake, addr 0x5b11f3c, size 0x1b4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method BuildSplineFromPoints, addr 0x5b12578, size 0x1dc, virtual false, abstract: false, final false
inline void BuildSplineFromPoints(::ArrayW<::UnityEngine::Vector3>  newPoints, ::ArrayW<::GlobalNamespace::BezierControlPointMode>  newModes, bool  isLoop) ;

/// @brief Method EnforceMode, addr 0x5b12a28, size 0x29c, virtual false, abstract: false, final false
inline void EnforceMode(int32_t  index) ;

/// @brief Method GetControlPoint, addr 0x5b129f0, size 0x38, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetControlPoint(int32_t  index) ;

/// @brief Method GetControlPointMode, addr 0x5b12cc4, size 0x4c, virtual false, abstract: false, final false
inline ::GlobalNamespace::BezierControlPointMode GetControlPointMode(int32_t  index) ;

/// @brief Method GetDirection, addr 0x5b130c4, size 0xd4, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetDirection(float_t  t) ;

/// @brief Method GetDirection, addr 0x5b130a4, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetDirection(float_t  t, bool  ConstantVelocity) ;

/// @brief Method GetPoint, addr 0x5b122c0, size 0x15c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetPoint(float_t  t) ;

/// @brief Method GetPoint, addr 0x5b12dc8, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetPoint(float_t  t, bool  ConstantVelocity) ;

/// @brief Method GetPointLocal, addr 0x5b12de8, size 0x124, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetPointLocal(float_t  t) ;

/// @brief Method GetVelocity, addr 0x5b12f0c, size 0x198, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetVelocity(float_t  t) ;

static inline ::GlobalNamespace::BezierSpline* New_ctor() ;

/// @brief Method RemoveCurve, addr 0x5b13444, size 0x1ac, virtual false, abstract: false, final false
inline void RemoveCurve(int32_t  index) ;

/// @brief Method RemoveLastCurve, addr 0x5b133a4, size 0xa0, virtual false, abstract: false, final false
inline void RemoveLastCurve() ;

/// @brief Method Reset, addr 0x5b135f0, size 0xe8, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SetControlPoint, addr 0x5b127c0, size 0x218, virtual false, abstract: false, final false
inline void SetControlPoint(int32_t  index, ::UnityEngine::Vector3  point) ;

/// @brief Method SetControlPointMode, addr 0x5b12d10, size 0x84, virtual false, abstract: false, final false
inline void SetControlPointMode(int32_t  index, ::GlobalNamespace::BezierControlPointMode  mode) ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__lengthsTable() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__lengthsTable() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__timesTable() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__timesTable() ;

constexpr float_t const& __cordl_internal_get__totalArcLength() const;

constexpr float_t& __cordl_internal_get__totalArcLength() ;

constexpr bool const& __cordl_internal_get_loop() const;

constexpr bool& __cordl_internal_get_loop() ;

constexpr ::ArrayW<::GlobalNamespace::BezierControlPointMode> const& __cordl_internal_get_modes() const;

constexpr ::ArrayW<::GlobalNamespace::BezierControlPointMode>& __cordl_internal_get_modes() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_points() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_points() ;

constexpr void __cordl_internal_set__lengthsTable(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__timesTable(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__totalArcLength(float_t  value) ;

constexpr void __cordl_internal_set_loop(bool  value) ;

constexpr void __cordl_internal_set_modes(::ArrayW<::GlobalNamespace::BezierControlPointMode>  value) ;

constexpr void __cordl_internal_set_points(::ArrayW<::UnityEngine::Vector3>  value) ;

/// @brief Method .ctor, addr 0x5b136d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method buildTimesLenghtsTables, addr 0x5b120f0, size 0x1d0, virtual false, abstract: false, final false
inline void buildTimesLenghtsTables(int32_t  subdivisions) ;

/// @brief Method getPathFromTime, addr 0x5b1241c, size 0x15c, virtual false, abstract: false, final false
inline float_t getPathFromTime(float_t  t) ;

/// @brief Method get_ControlPointCount, addr 0x5b129d8, size 0x18, virtual false, abstract: false, final false
inline int32_t get_ControlPointCount() ;

/// @brief Method get_CurveCount, addr 0x5b12d94, size 0x34, virtual false, abstract: false, final false
inline int32_t get_CurveCount() ;

/// @brief Method get_Loop, addr 0x5b12754, size 0x8, virtual false, abstract: false, final false
inline bool get_Loop() ;

/// @brief Method set_Loop, addr 0x5b1275c, size 0x64, virtual false, abstract: false, final false
inline void set_Loop(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BezierSpline() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BezierSpline", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BezierSpline(BezierSpline && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BezierSpline", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BezierSpline(BezierSpline const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3552};

/// [SerializeField]
/// @brief Field points, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___points;

/// [SerializeField]
/// @brief Field modes, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::BezierControlPointMode>  ___modes;

/// [SerializeField]
/// @brief Field loop, offset: 0x30, size: 0x1, def value: None
 bool  ___loop;

/// @brief Field _totalArcLength, offset: 0x34, size: 0x4, def value: None
 float_t  ____totalArcLength;

/// @brief Field _timesTable, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<float_t>  ____timesTable;

/// @brief Field _lengthsTable, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<float_t>  ____lengthsTable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BezierSpline, ___points) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BezierSpline, ___modes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BezierSpline, ___loop) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BezierSpline, ____totalArcLength) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BezierSpline, ____timesTable) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BezierSpline, ____lengthsTable) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BezierSpline) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
