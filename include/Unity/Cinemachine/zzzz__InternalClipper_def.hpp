#pragma once
// IWYU pragma private; include "Unity/Cinemachine/InternalClipper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(InternalClipper)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::Cinemachine {
struct Point64;
}
namespace Unity::Cinemachine {
struct PointD;
}
namespace Unity::Cinemachine {
struct PointInPolygonResult;
}
// Forward declare root types
namespace Unity::Cinemachine {
class InternalClipper;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::InternalClipper*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::InternalClipper*, "Unity.Cinemachine", "InternalClipper");
// Dependencies System.Object
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.InternalClipper
class CORDL_TYPE InternalClipper : public ::System::Object {
public:
// Declarations
/// @brief Method CrossProduct, addr 0xaee7f10, size 0x30, virtual false, abstract: false, final false
static inline double_t CrossProduct(::Unity::Cinemachine::Point64  pt1, ::Unity::Cinemachine::Point64  pt2, ::Unity::Cinemachine::Point64  pt3) ;

/// @brief Method DotProduct, addr 0xaee7f40, size 0x30, virtual false, abstract: false, final false
static inline double_t DotProduct(::Unity::Cinemachine::Point64  pt1, ::Unity::Cinemachine::Point64  pt2, ::Unity::Cinemachine::Point64  pt3) ;

/// @brief Method DotProduct, addr 0xaee7f70, size 0x10, virtual false, abstract: false, final false
static inline double_t DotProduct(::Unity::Cinemachine::PointD  vec1, ::Unity::Cinemachine::PointD  vec2) ;

/// @brief Method GetIntersectPoint, addr 0xaee7f80, size 0x190, virtual false, abstract: false, final false
static inline bool GetIntersectPoint(::Unity::Cinemachine::Point64  ln1a, ::Unity::Cinemachine::Point64  ln1b, ::Unity::Cinemachine::Point64  ln2a, ::Unity::Cinemachine::Point64  ln2b, ::by_ref<::Unity::Cinemachine::PointD>  ip) ;

/// @brief Method PointInPolygon, addr 0xaee81c4, size 0x244, virtual false, abstract: false, final false
static inline ::Unity::Cinemachine::PointInPolygonResult PointInPolygon(::Unity::Cinemachine::Point64  pt, ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  polygon) ;

/// @brief Method SegmentsIntersect, addr 0xaee8110, size 0xb4, virtual false, abstract: false, final false
static inline bool SegmentsIntersect(::Unity::Cinemachine::Point64  seg1a, ::Unity::Cinemachine::Point64  seg1b, ::Unity::Cinemachine::Point64  seg2a, ::Unity::Cinemachine::Point64  seg2b) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InternalClipper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InternalClipper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InternalClipper(InternalClipper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InternalClipper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InternalClipper(InternalClipper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22502};

/// @brief Field defaultMinimumEdgeLength offset 0xffffffff size 0x8
static constexpr double_t  defaultMinimumEdgeLength{static_cast<double_t>(0.1)};

/// @brief Field floatingPointTolerance offset 0xffffffff size 0x8
static constexpr double_t  floatingPointTolerance{static_cast<double_t>(1e-15)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::InternalClipper) == 0x10, "Size mismatch!");

} // namespace end def Unity::Cinemachine
