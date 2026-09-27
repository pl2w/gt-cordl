#pragma once
// IWYU pragma private; include "Unity/Cinemachine/Active.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Cinemachine/zzzz__LocalMinima_def.hpp"
#include "Unity/Cinemachine/zzzz__Point64_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Active)
namespace Unity::Cinemachine {
class OutRec;
}
namespace Unity::Cinemachine {
class Vertex;
}
// Forward declare root types
namespace Unity::Cinemachine {
class Active;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::Active*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::Active*, "Unity.Cinemachine", "Active");
// [NullableContext(2)]
// [Nullable(0)]
// Dependencies System.Object, Unity.Cinemachine.LocalMinima, Unity.Cinemachine.Point64
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.Active
class CORDL_TYPE Active : public ::System::Object {
public:
// Declarations
/// @brief Field bot, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_bot, put=__cordl_internal_set_bot)) ::Unity::Cinemachine::Point64  bot;

/// @brief Field curX, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_curX, put=__cordl_internal_set_curX)) int64_t  curX;

/// @brief Field dx, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_dx, put=__cordl_internal_set_dx)) double_t  dx;

/// @brief Field isLeftBound, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get_isLeftBound, put=__cordl_internal_set_isLeftBound)) bool  isLeftBound;

/// @brief Field jump, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_jump, put=__cordl_internal_set_jump)) ::Unity::Cinemachine::Active*  jump;

/// @brief Field localMin, offset 0x88, size 0x10 
 __declspec(property(get=__cordl_internal_get_localMin, put=__cordl_internal_set_localMin)) ::Unity::Cinemachine::LocalMinima  localMin;

/// @brief Field nextInAEL, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextInAEL, put=__cordl_internal_set_nextInAEL)) ::Unity::Cinemachine::Active*  nextInAEL;

/// @brief Field nextInSEL, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextInSEL, put=__cordl_internal_set_nextInSEL)) ::Unity::Cinemachine::Active*  nextInSEL;

/// @brief Field outrec, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_outrec, put=__cordl_internal_set_outrec)) ::Unity::Cinemachine::OutRec*  outrec;

/// @brief Field prevInAEL, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_prevInAEL, put=__cordl_internal_set_prevInAEL)) ::Unity::Cinemachine::Active*  prevInAEL;

/// @brief Field prevInSEL, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_prevInSEL, put=__cordl_internal_set_prevInSEL)) ::Unity::Cinemachine::Active*  prevInSEL;

/// @brief Field top, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_top, put=__cordl_internal_set_top)) ::Unity::Cinemachine::Point64  top;

/// @brief Field vertexTop, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_vertexTop, put=__cordl_internal_set_vertexTop)) ::Unity::Cinemachine::Vertex*  vertexTop;

/// @brief Field windCount, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_windCount, put=__cordl_internal_set_windCount)) int32_t  windCount;

/// @brief Field windCount2, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_windCount2, put=__cordl_internal_set_windCount2)) int32_t  windCount2;

/// @brief Field windDx, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_windDx, put=__cordl_internal_set_windDx)) int32_t  windDx;

static inline ::Unity::Cinemachine::Active* New_ctor() ;

constexpr ::Unity::Cinemachine::Point64 const& __cordl_internal_get_bot() const;

constexpr ::Unity::Cinemachine::Point64& __cordl_internal_get_bot() ;

constexpr int64_t const& __cordl_internal_get_curX() const;

constexpr int64_t& __cordl_internal_get_curX() ;

constexpr double_t const& __cordl_internal_get_dx() const;

constexpr double_t& __cordl_internal_get_dx() ;

constexpr bool const& __cordl_internal_get_isLeftBound() const;

constexpr bool& __cordl_internal_get_isLeftBound() ;

constexpr ::Unity::Cinemachine::Active* const& __cordl_internal_get_jump() const;

constexpr ::Unity::Cinemachine::Active*& __cordl_internal_get_jump() ;

constexpr ::Unity::Cinemachine::LocalMinima const& __cordl_internal_get_localMin() const;

constexpr ::Unity::Cinemachine::LocalMinima& __cordl_internal_get_localMin() ;

constexpr ::Unity::Cinemachine::Active* const& __cordl_internal_get_nextInAEL() const;

constexpr ::Unity::Cinemachine::Active*& __cordl_internal_get_nextInAEL() ;

constexpr ::Unity::Cinemachine::Active* const& __cordl_internal_get_nextInSEL() const;

constexpr ::Unity::Cinemachine::Active*& __cordl_internal_get_nextInSEL() ;

constexpr ::Unity::Cinemachine::OutRec* const& __cordl_internal_get_outrec() const;

constexpr ::Unity::Cinemachine::OutRec*& __cordl_internal_get_outrec() ;

constexpr ::Unity::Cinemachine::Active* const& __cordl_internal_get_prevInAEL() const;

constexpr ::Unity::Cinemachine::Active*& __cordl_internal_get_prevInAEL() ;

constexpr ::Unity::Cinemachine::Active* const& __cordl_internal_get_prevInSEL() const;

constexpr ::Unity::Cinemachine::Active*& __cordl_internal_get_prevInSEL() ;

constexpr ::Unity::Cinemachine::Point64 const& __cordl_internal_get_top() const;

constexpr ::Unity::Cinemachine::Point64& __cordl_internal_get_top() ;

constexpr ::Unity::Cinemachine::Vertex* const& __cordl_internal_get_vertexTop() const;

constexpr ::Unity::Cinemachine::Vertex*& __cordl_internal_get_vertexTop() ;

constexpr int32_t const& __cordl_internal_get_windCount() const;

constexpr int32_t& __cordl_internal_get_windCount() ;

constexpr int32_t const& __cordl_internal_get_windCount2() const;

constexpr int32_t& __cordl_internal_get_windCount2() ;

constexpr int32_t const& __cordl_internal_get_windDx() const;

constexpr int32_t& __cordl_internal_get_windDx() ;

constexpr void __cordl_internal_set_bot(::Unity::Cinemachine::Point64  value) ;

constexpr void __cordl_internal_set_curX(int64_t  value) ;

constexpr void __cordl_internal_set_dx(double_t  value) ;

constexpr void __cordl_internal_set_isLeftBound(bool  value) ;

constexpr void __cordl_internal_set_jump(::Unity::Cinemachine::Active*  value) ;

constexpr void __cordl_internal_set_localMin(::Unity::Cinemachine::LocalMinima  value) ;

constexpr void __cordl_internal_set_nextInAEL(::Unity::Cinemachine::Active*  value) ;

constexpr void __cordl_internal_set_nextInSEL(::Unity::Cinemachine::Active*  value) ;

constexpr void __cordl_internal_set_outrec(::Unity::Cinemachine::OutRec*  value) ;

constexpr void __cordl_internal_set_prevInAEL(::Unity::Cinemachine::Active*  value) ;

constexpr void __cordl_internal_set_prevInSEL(::Unity::Cinemachine::Active*  value) ;

constexpr void __cordl_internal_set_top(::Unity::Cinemachine::Point64  value) ;

constexpr void __cordl_internal_set_vertexTop(::Unity::Cinemachine::Vertex*  value) ;

constexpr void __cordl_internal_set_windCount(int32_t  value) ;

constexpr void __cordl_internal_set_windCount2(int32_t  value) ;

constexpr void __cordl_internal_set_windDx(int32_t  value) ;

/// @brief Method .ctor, addr 0xaeef5f4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Active() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Active", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Active(Active && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Active", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Active(Active const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22513};

/// @brief Field bot, offset: 0x10, size: 0x10, def value: None
 ::Unity::Cinemachine::Point64  ___bot;

/// @brief Field top, offset: 0x20, size: 0x10, def value: None
 ::Unity::Cinemachine::Point64  ___top;

/// @brief Field curX, offset: 0x30, size: 0x8, def value: None
 int64_t  ___curX;

/// @brief Field dx, offset: 0x38, size: 0x8, def value: None
 double_t  ___dx;

/// @brief Field windDx, offset: 0x40, size: 0x4, def value: None
 int32_t  ___windDx;

/// @brief Field windCount, offset: 0x44, size: 0x4, def value: None
 int32_t  ___windCount;

/// @brief Field windCount2, offset: 0x48, size: 0x4, def value: None
 int32_t  ___windCount2;

/// @brief Field outrec, offset: 0x50, size: 0x8, def value: None
 ::Unity::Cinemachine::OutRec*  ___outrec;

/// @brief Field prevInAEL, offset: 0x58, size: 0x8, def value: None
 ::Unity::Cinemachine::Active*  ___prevInAEL;

/// @brief Field nextInAEL, offset: 0x60, size: 0x8, def value: None
 ::Unity::Cinemachine::Active*  ___nextInAEL;

/// @brief Field prevInSEL, offset: 0x68, size: 0x8, def value: None
 ::Unity::Cinemachine::Active*  ___prevInSEL;

/// @brief Field nextInSEL, offset: 0x70, size: 0x8, def value: None
 ::Unity::Cinemachine::Active*  ___nextInSEL;

/// @brief Field jump, offset: 0x78, size: 0x8, def value: None
 ::Unity::Cinemachine::Active*  ___jump;

/// @brief Field vertexTop, offset: 0x80, size: 0x8, def value: None
 ::Unity::Cinemachine::Vertex*  ___vertexTop;

/// @brief Field localMin, offset: 0x88, size: 0x10, def value: None
 ::Unity::Cinemachine::LocalMinima  ___localMin;

/// @brief Field isLeftBound, offset: 0x98, size: 0x1, def value: None
 bool  ___isLeftBound;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::Active, ___bot) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::Active, ___top) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::Active, ___curX) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::Active, ___dx) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::Active, ___windDx) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::Active, ___windCount) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::Active, ___windCount2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::Active, ___outrec) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::Active, ___prevInAEL) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::Active, ___nextInAEL) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::Active, ___prevInSEL) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::Active, ___nextInSEL) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::Active, ___jump) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::Active, ___vertexTop) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::Active, ___localMin) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::Active, ___isLeftBound) == 0x98, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::Active) == 0xa0, "Size mismatch!");

} // namespace end def Unity::Cinemachine
