#pragma once
// IWYU pragma private; include "Unity/Cinemachine/OutPt.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Cinemachine/zzzz__Point64_def.hpp"
CORDL_MODULE_EXPORT(OutPt)
namespace Unity::Cinemachine {
class Joiner;
}
namespace Unity::Cinemachine {
class OutRec;
}
namespace Unity::Cinemachine {
struct Point64;
}
// Forward declare root types
namespace Unity::Cinemachine {
class OutPt;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::OutPt*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::OutPt*, "Unity.Cinemachine", "OutPt");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies System.Object, Unity.Cinemachine.Point64
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.OutPt
class CORDL_TYPE OutPt : public ::System::Object {
public:
// Declarations
/// @brief Field joiner, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_joiner, put=__cordl_internal_set_joiner)) ::Unity::Cinemachine::Joiner*  joiner;

/// @brief Field next, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_next, put=__cordl_internal_set_next)) ::Unity::Cinemachine::OutPt*  next;

/// @brief Field outrec, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_outrec, put=__cordl_internal_set_outrec)) ::Unity::Cinemachine::OutRec*  outrec;

/// @brief Field prev, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_prev, put=__cordl_internal_set_prev)) ::Unity::Cinemachine::OutPt*  prev;

/// @brief Field pt, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_pt, put=__cordl_internal_set_pt)) ::Unity::Cinemachine::Point64  pt;

static inline ::Unity::Cinemachine::OutPt* New_ctor(::Unity::Cinemachine::Point64  pt, ::Unity::Cinemachine::OutRec*  outrec) ;

constexpr ::Unity::Cinemachine::Joiner* const& __cordl_internal_get_joiner() const;

constexpr ::Unity::Cinemachine::Joiner*& __cordl_internal_get_joiner() ;

constexpr ::Unity::Cinemachine::OutPt* const& __cordl_internal_get_next() const;

constexpr ::Unity::Cinemachine::OutPt*& __cordl_internal_get_next() ;

constexpr ::Unity::Cinemachine::OutRec* const& __cordl_internal_get_outrec() const;

constexpr ::Unity::Cinemachine::OutRec*& __cordl_internal_get_outrec() ;

constexpr ::Unity::Cinemachine::OutPt* const& __cordl_internal_get_prev() const;

constexpr ::Unity::Cinemachine::OutPt*& __cordl_internal_get_prev() ;

constexpr ::Unity::Cinemachine::Point64 const& __cordl_internal_get_pt() const;

constexpr ::Unity::Cinemachine::Point64& __cordl_internal_get_pt() ;

constexpr void __cordl_internal_set_joiner(::Unity::Cinemachine::Joiner*  value) ;

constexpr void __cordl_internal_set_next(::Unity::Cinemachine::OutPt*  value) ;

constexpr void __cordl_internal_set_outrec(::Unity::Cinemachine::OutRec*  value) ;

constexpr void __cordl_internal_set_prev(::Unity::Cinemachine::OutPt*  value) ;

constexpr void __cordl_internal_set_pt(::Unity::Cinemachine::Point64  value) ;

/// @brief Method .ctor, addr 0xaeef37c, size 0x74, virtual false, abstract: false, final false
inline void _ctor(::Unity::Cinemachine::Point64  pt, ::Unity::Cinemachine::OutRec*  outrec) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OutPt() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OutPt", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OutPt(OutPt && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OutPt", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OutPt(OutPt const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22510};

/// @brief Field pt, offset: 0x10, size: 0x10, def value: None
 ::Unity::Cinemachine::Point64  ___pt;

/// [Nullable(2)]
/// @brief Field next, offset: 0x20, size: 0x8, def value: None
 ::Unity::Cinemachine::OutPt*  ___next;

/// @brief Field prev, offset: 0x28, size: 0x8, def value: None
 ::Unity::Cinemachine::OutPt*  ___prev;

/// @brief Field outrec, offset: 0x30, size: 0x8, def value: None
 ::Unity::Cinemachine::OutRec*  ___outrec;

/// [Nullable(2)]
/// @brief Field joiner, offset: 0x38, size: 0x8, def value: None
 ::Unity::Cinemachine::Joiner*  ___joiner;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::OutPt, ___pt) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::OutPt, ___next) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::OutPt, ___prev) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::OutPt, ___outrec) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::OutPt, ___joiner) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::OutPt) == 0x40, "Size mismatch!");

} // namespace end def Unity::Cinemachine
