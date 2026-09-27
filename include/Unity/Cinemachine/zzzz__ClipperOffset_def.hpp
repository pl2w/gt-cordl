#pragma once
// IWYU pragma private; include "Unity/Cinemachine/ClipperOffset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Cinemachine/zzzz__JoinType_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ClipperOffset)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::Cinemachine {
struct EndType;
}
namespace Unity::Cinemachine {
struct JoinType;
}
namespace Unity::Cinemachine {
class PathGroup;
}
namespace Unity::Cinemachine {
struct Point64;
}
namespace Unity::Cinemachine {
struct PointD;
}
// Forward declare root types
namespace Unity::Cinemachine {
class ClipperOffset;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::ClipperOffset*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::ClipperOffset*, "Unity.Cinemachine", "ClipperOffset");
// Dependencies System.Object, Unity.Cinemachine.JoinType
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.ClipperOffset
class CORDL_TYPE ClipperOffset : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_ArcTolerance, put=set_ArcTolerance)) double_t  ArcTolerance;

 __declspec(property(get=get_MergeGroups, put=set_MergeGroups)) bool  MergeGroups;

 __declspec(property(get=get_MiterLimit, put=set_MiterLimit)) double_t  MiterLimit;

 __declspec(property(get=get_PreserveCollinear, put=set_PreserveCollinear)) bool  PreserveCollinear;

 __declspec(property(get=get_ReverseSolution, put=set_ReverseSolution)) bool  ReverseSolution;

/// @brief Field <ArcTolerance>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__ArcTolerance_k__BackingField, put=__cordl_internal_set__ArcTolerance_k__BackingField)) double_t  _ArcTolerance_k__BackingField;

/// @brief Field <MergeGroups>k__BackingField, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__MergeGroups_k__BackingField, put=__cordl_internal_set__MergeGroups_k__BackingField)) bool  _MergeGroups_k__BackingField;

/// @brief Field <MiterLimit>k__BackingField, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__MiterLimit_k__BackingField, put=__cordl_internal_set__MiterLimit_k__BackingField)) double_t  _MiterLimit_k__BackingField;

/// @brief Field <PreserveCollinear>k__BackingField, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__PreserveCollinear_k__BackingField, put=__cordl_internal_set__PreserveCollinear_k__BackingField)) bool  _PreserveCollinear_k__BackingField;

/// @brief Field <ReverseSolution>k__BackingField, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get__ReverseSolution_k__BackingField, put=__cordl_internal_set__ReverseSolution_k__BackingField)) bool  _ReverseSolution_k__BackingField;

/// @brief Field _delta, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__delta, put=__cordl_internal_set__delta)) double_t  _delta;

/// @brief Field _joinType, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__joinType, put=__cordl_internal_set__joinType)) ::Unity::Cinemachine::JoinType  _joinType;

/// @brief Field _normals, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__normals, put=__cordl_internal_set__normals)) ::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*  _normals;

/// @brief Field _pathGroups, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__pathGroups, put=__cordl_internal_set__pathGroups)) ::System::Collections::Generic::List_1<::Unity::Cinemachine::PathGroup*>*  _pathGroups;

/// @brief Field _stepsPerRad, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__stepsPerRad, put=__cordl_internal_set__stepsPerRad)) double_t  _stepsPerRad;

/// @brief Field _tmpLimit, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__tmpLimit, put=__cordl_internal_set__tmpLimit)) double_t  _tmpLimit;

/// @brief Field solution, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_solution, put=__cordl_internal_set_solution)) ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  solution;

/// @brief Method AddPath, addr 0xaefcc84, size 0x130, virtual false, abstract: false, final false
inline void AddPath(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  path, ::Unity::Cinemachine::JoinType  joinType, ::Unity::Cinemachine::EndType  endType) ;

/// @brief Method AddPath, addr 0xaefcecc, size 0x130, virtual false, abstract: false, final false
inline void AddPath(::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*  path, ::Unity::Cinemachine::JoinType  joinType, ::Unity::Cinemachine::EndType  endType) ;

/// @brief Method AddPaths, addr 0xaefcdb4, size 0x118, virtual false, abstract: false, final false
inline void AddPaths(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  paths, ::Unity::Cinemachine::JoinType  joinType, ::Unity::Cinemachine::EndType  endType) ;

/// @brief Method AddPaths, addr 0xaefcffc, size 0x150, virtual false, abstract: false, final false
inline void AddPaths(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  paths, ::Unity::Cinemachine::JoinType  joinType, ::Unity::Cinemachine::EndType  endType) ;

/// @brief Method AlmostZero, addr 0xaefe29c, size 0x68, virtual false, abstract: false, final false
inline bool AlmostZero(double_t  value, double_t  epsilon) ;

/// @brief Method BuildNormals, addr 0xaefef48, size 0x344, virtual false, abstract: false, final false
inline void BuildNormals(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  path) ;

/// @brief Method Clear, addr 0xaefcc14, size 0x70, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method DoGroupOffset, addr 0xaefd6a8, size 0x948, virtual false, abstract: false, final false
inline void DoGroupOffset(::Unity::Cinemachine::PathGroup*  group, double_t  delta) ;

/// @brief Method DoMiter, addr 0xaefea28, size 0x1e4, virtual false, abstract: false, final false
inline void DoMiter(::Unity::Cinemachine::PathGroup*  group, ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  path, int32_t  j, int32_t  k, double_t  cosA) ;

/// @brief Method DoRound, addr 0xaefec0c, size 0x33c, virtual false, abstract: false, final false
inline void DoRound(::Unity::Cinemachine::PathGroup*  group, ::Unity::Cinemachine::Point64  pt, ::Unity::Cinemachine::PointD  normal1, ::Unity::Cinemachine::PointD  normal2, double_t  angle) ;

/// @brief Method DoSquare, addr 0xaefe5c4, size 0x464, virtual false, abstract: false, final false
inline void DoSquare(::Unity::Cinemachine::PathGroup*  group, ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  path, int32_t  j, int32_t  k) ;

/// @brief Method Execute, addr 0xaefd14c, size 0x55c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* Execute(double_t  delta) ;

/// @brief Method GetAvgUnitVector, addr 0xaefe4a8, size 0x40, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::PointD GetAvgUnitVector(::Unity::Cinemachine::PointD  vec1, ::Unity::Cinemachine::PointD  vec2) ;

/// @brief Method GetLowestPolygonIdx, addr 0xaefe0bc, size 0x178, virtual false, abstract: false, final false
inline int32_t GetLowestPolygonIdx(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  paths) ;

/// @brief Method GetUnitNormal, addr 0xaefdff0, size 0xcc, virtual false, abstract: false, final false
static inline ::Unity::Cinemachine::PointD GetUnitNormal(::Unity::Cinemachine::Point64  pt1, ::Unity::Cinemachine::Point64  pt2) ;

/// @brief Method Hypotenuse, addr 0xaefe304, size 0x88, virtual false, abstract: false, final false
inline double_t Hypotenuse(double_t  x, double_t  y) ;

/// @brief Method IntersectPoint, addr 0xaefe4e8, size 0xdc, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::PointD IntersectPoint(::Unity::Cinemachine::PointD  pt1a, ::Unity::Cinemachine::PointD  pt1b, ::Unity::Cinemachine::PointD  pt2a, ::Unity::Cinemachine::PointD  pt2b) ;

/// @brief Method IsFullyOpenEndType, addr 0xaf001e8, size 0xc, virtual false, abstract: false, final false
inline bool IsFullyOpenEndType(::Unity::Cinemachine::EndType  et) ;

static inline ::Unity::Cinemachine::ClipperOffset* New_ctor(double_t  miterLimit, double_t  arcTolerance, bool  preserveCollinear, bool  reverseSolution) ;

/// @brief Method NormalizeVector, addr 0xaefe38c, size 0x11c, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::PointD NormalizeVector(::Unity::Cinemachine::PointD  vec) ;

/// @brief Method OffsetOpenJoined, addr 0xaeff900, size 0x98, virtual false, abstract: false, final false
inline void OffsetOpenJoined(::Unity::Cinemachine::PathGroup*  group, ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  path) ;

/// @brief Method OffsetOpenPath, addr 0xaeff998, size 0x850, virtual false, abstract: false, final false
inline void OffsetOpenPath(::Unity::Cinemachine::PathGroup*  group, ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  path, ::Unity::Cinemachine::EndType  endType) ;

/// @brief Method OffsetPoint, addr 0xaeff28c, size 0x514, virtual false, abstract: false, final false
inline void OffsetPoint(::Unity::Cinemachine::PathGroup*  group, ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  path, int32_t  j, ::by_ref<int32_t>  k) ;

/// @brief Method OffsetPolygon, addr 0xaeff7a0, size 0x160, virtual false, abstract: false, final false
inline void OffsetPolygon(::Unity::Cinemachine::PathGroup*  group, ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  path) ;

/// @brief Method ReflectPoint, addr 0xaefe264, size 0x38, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::PointD ReflectPoint(::Unity::Cinemachine::PointD  pt, ::Unity::Cinemachine::PointD  pivot) ;

/// @brief Method TranslatePoint, addr 0xaefe234, size 0x30, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::PointD TranslatePoint(::Unity::Cinemachine::PointD  pt, double_t  dx, double_t  dy) ;

constexpr double_t const& __cordl_internal_get__ArcTolerance_k__BackingField() const;

constexpr double_t& __cordl_internal_get__ArcTolerance_k__BackingField() ;

constexpr bool const& __cordl_internal_get__MergeGroups_k__BackingField() const;

constexpr bool& __cordl_internal_get__MergeGroups_k__BackingField() ;

constexpr double_t const& __cordl_internal_get__MiterLimit_k__BackingField() const;

constexpr double_t& __cordl_internal_get__MiterLimit_k__BackingField() ;

constexpr bool const& __cordl_internal_get__PreserveCollinear_k__BackingField() const;

constexpr bool& __cordl_internal_get__PreserveCollinear_k__BackingField() ;

constexpr bool const& __cordl_internal_get__ReverseSolution_k__BackingField() const;

constexpr bool& __cordl_internal_get__ReverseSolution_k__BackingField() ;

constexpr double_t const& __cordl_internal_get__delta() const;

constexpr double_t& __cordl_internal_get__delta() ;

constexpr ::Unity::Cinemachine::JoinType const& __cordl_internal_get__joinType() const;

constexpr ::Unity::Cinemachine::JoinType& __cordl_internal_get__joinType() ;

constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>* const& __cordl_internal_get__normals() const;

constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*& __cordl_internal_get__normals() ;

constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::PathGroup*>* const& __cordl_internal_get__pathGroups() const;

constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::PathGroup*>*& __cordl_internal_get__pathGroups() ;

constexpr double_t const& __cordl_internal_get__stepsPerRad() const;

constexpr double_t& __cordl_internal_get__stepsPerRad() ;

constexpr double_t const& __cordl_internal_get__tmpLimit() const;

constexpr double_t& __cordl_internal_get__tmpLimit() ;

constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* const& __cordl_internal_get_solution() const;

constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*& __cordl_internal_get_solution() ;

constexpr void __cordl_internal_set__ArcTolerance_k__BackingField(double_t  value) ;

constexpr void __cordl_internal_set__MergeGroups_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__MiterLimit_k__BackingField(double_t  value) ;

constexpr void __cordl_internal_set__PreserveCollinear_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__ReverseSolution_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__delta(double_t  value) ;

constexpr void __cordl_internal_set__joinType(::Unity::Cinemachine::JoinType  value) ;

constexpr void __cordl_internal_set__normals(::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*  value) ;

constexpr void __cordl_internal_set__pathGroups(::System::Collections::Generic::List_1<::Unity::Cinemachine::PathGroup*>*  value) ;

constexpr void __cordl_internal_set__stepsPerRad(double_t  value) ;

constexpr void __cordl_internal_set__tmpLimit(double_t  value) ;

constexpr void __cordl_internal_set_solution(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  value) ;

/// @brief Method .ctor, addr 0xaefcaa0, size 0x174, virtual false, abstract: false, final false
inline void _ctor(double_t  miterLimit, double_t  arcTolerance, bool  preserveCollinear, bool  reverseSolution) ;

/// [CompilerGenerated]
/// @brief Method get_ArcTolerance, addr 0xaefca50, size 0x8, virtual false, abstract: false, final false
inline double_t get_ArcTolerance() ;

/// [CompilerGenerated]
/// @brief Method get_MergeGroups, addr 0xaefca60, size 0x8, virtual false, abstract: false, final false
inline bool get_MergeGroups() ;

/// [CompilerGenerated]
/// @brief Method get_MiterLimit, addr 0xaefca70, size 0x8, virtual false, abstract: false, final false
inline double_t get_MiterLimit() ;

/// [CompilerGenerated]
/// @brief Method get_PreserveCollinear, addr 0xaefca80, size 0x8, virtual false, abstract: false, final false
inline bool get_PreserveCollinear() ;

/// [CompilerGenerated]
/// @brief Method get_ReverseSolution, addr 0xaefca90, size 0x8, virtual false, abstract: false, final false
inline bool get_ReverseSolution() ;

/// [CompilerGenerated]
/// @brief Method set_ArcTolerance, addr 0xaefca58, size 0x8, virtual false, abstract: false, final false
inline void set_ArcTolerance(double_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_MergeGroups, addr 0xaefca68, size 0x8, virtual false, abstract: false, final false
inline void set_MergeGroups(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_MiterLimit, addr 0xaefca78, size 0x8, virtual false, abstract: false, final false
inline void set_MiterLimit(double_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_PreserveCollinear, addr 0xaefca88, size 0x8, virtual false, abstract: false, final false
inline void set_PreserveCollinear(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_ReverseSolution, addr 0xaefca98, size 0x8, virtual false, abstract: false, final false
inline void set_ReverseSolution(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClipperOffset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClipperOffset", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ClipperOffset(ClipperOffset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClipperOffset", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClipperOffset(ClipperOffset const& ) = delete;

/// @brief Field TwoPi offset 0xffffffff size 0x8
static constexpr double_t  TwoPi{static_cast<double_t>(6.283185307179586)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22529};

/// @brief Field _pathGroups, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Unity::Cinemachine::PathGroup*>*  ____pathGroups;

/// @brief Field _normals, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*  ____normals;

/// @brief Field solution, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  ___solution;

/// @brief Field _delta, offset: 0x28, size: 0x8, def value: None
 double_t  ____delta;

/// @brief Field _tmpLimit, offset: 0x30, size: 0x8, def value: None
 double_t  ____tmpLimit;

/// @brief Field _stepsPerRad, offset: 0x38, size: 0x8, def value: None
 double_t  ____stepsPerRad;

/// @brief Field _joinType, offset: 0x40, size: 0x4, def value: None
 ::Unity::Cinemachine::JoinType  ____joinType;

/// [CompilerGenerated]
/// @brief Field <ArcTolerance>k__BackingField, offset: 0x48, size: 0x8, def value: None
 double_t  ____ArcTolerance_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MergeGroups>k__BackingField, offset: 0x50, size: 0x1, def value: None
 bool  ____MergeGroups_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MiterLimit>k__BackingField, offset: 0x58, size: 0x8, def value: None
 double_t  ____MiterLimit_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <PreserveCollinear>k__BackingField, offset: 0x60, size: 0x1, def value: None
 bool  ____PreserveCollinear_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ReverseSolution>k__BackingField, offset: 0x61, size: 0x1, def value: None
 bool  ____ReverseSolution_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::ClipperOffset, ____pathGroups) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::ClipperOffset, ____normals) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::ClipperOffset, ___solution) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::ClipperOffset, ____delta) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::ClipperOffset, ____tmpLimit) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::ClipperOffset, ____stepsPerRad) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::ClipperOffset, ____joinType) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::ClipperOffset, ____ArcTolerance_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::ClipperOffset, ____MergeGroups_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::ClipperOffset, ____MiterLimit_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::ClipperOffset, ____PreserveCollinear_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::ClipperOffset, ____ReverseSolution_k__BackingField) == 0x61, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::ClipperOffset) == 0x68, "Size mismatch!");

} // namespace end def Unity::Cinemachine
