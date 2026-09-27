#pragma once
// IWYU pragma private; include "Unity/Cinemachine/Joiner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Joiner)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::Cinemachine {
class OutPt;
}
// Forward declare root types
namespace Unity::Cinemachine {
class Joiner;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::Joiner*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::Joiner*, "Unity.Cinemachine", "Joiner");
// [NullableContext(2)]
// [Nullable(0)]
// Dependencies System.Object
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.Joiner
class CORDL_TYPE Joiner : public ::System::Object {
public:
// Declarations
/// @brief Field idx, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_idx, put=__cordl_internal_set_idx)) int32_t  idx;

/// @brief Field next1, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_next1, put=__cordl_internal_set_next1)) ::Unity::Cinemachine::Joiner*  next1;

/// @brief Field next2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_next2, put=__cordl_internal_set_next2)) ::Unity::Cinemachine::Joiner*  next2;

/// @brief Field nextH, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextH, put=__cordl_internal_set_nextH)) ::Unity::Cinemachine::Joiner*  nextH;

/// @brief Field op1, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_op1, put=__cordl_internal_set_op1)) ::Unity::Cinemachine::OutPt*  op1;

/// @brief Field op2, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_op2, put=__cordl_internal_set_op2)) ::Unity::Cinemachine::OutPt*  op2;

static inline ::Unity::Cinemachine::Joiner* New_ctor(::System::Collections::Generic::List_1<::Unity::Cinemachine::Joiner*>*  joinerList, /* [Nullable(1)] */ ::Unity::Cinemachine::OutPt*  op1, ::Unity::Cinemachine::OutPt*  op2, ::Unity::Cinemachine::Joiner*  nextH) ;

constexpr int32_t const& __cordl_internal_get_idx() const;

constexpr int32_t& __cordl_internal_get_idx() ;

constexpr ::Unity::Cinemachine::Joiner* const& __cordl_internal_get_next1() const;

constexpr ::Unity::Cinemachine::Joiner*& __cordl_internal_get_next1() ;

constexpr ::Unity::Cinemachine::Joiner* const& __cordl_internal_get_next2() const;

constexpr ::Unity::Cinemachine::Joiner*& __cordl_internal_get_next2() ;

constexpr ::Unity::Cinemachine::Joiner* const& __cordl_internal_get_nextH() const;

constexpr ::Unity::Cinemachine::Joiner*& __cordl_internal_get_nextH() ;

constexpr ::Unity::Cinemachine::OutPt* const& __cordl_internal_get_op1() const;

constexpr ::Unity::Cinemachine::OutPt*& __cordl_internal_get_op1() ;

constexpr ::Unity::Cinemachine::OutPt* const& __cordl_internal_get_op2() const;

constexpr ::Unity::Cinemachine::OutPt*& __cordl_internal_get_op2() ;

constexpr void __cordl_internal_set_idx(int32_t  value) ;

constexpr void __cordl_internal_set_next1(::Unity::Cinemachine::Joiner*  value) ;

constexpr void __cordl_internal_set_next2(::Unity::Cinemachine::Joiner*  value) ;

constexpr void __cordl_internal_set_nextH(::Unity::Cinemachine::Joiner*  value) ;

constexpr void __cordl_internal_set_op1(::Unity::Cinemachine::OutPt*  value) ;

constexpr void __cordl_internal_set_op2(::Unity::Cinemachine::OutPt*  value) ;

/// @brief Method .ctor, addr 0xaeef484, size 0x170, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::List_1<::Unity::Cinemachine::Joiner*>*  joinerList, /* [Nullable(1)] */ ::Unity::Cinemachine::OutPt*  op1, ::Unity::Cinemachine::OutPt*  op2, ::Unity::Cinemachine::Joiner*  nextH) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Joiner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Joiner", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Joiner(Joiner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Joiner", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Joiner(Joiner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22512};

/// @brief Field idx, offset: 0x10, size: 0x4, def value: None
 int32_t  ___idx;

/// [Nullable(1)]
/// @brief Field op1, offset: 0x18, size: 0x8, def value: None
 ::Unity::Cinemachine::OutPt*  ___op1;

/// @brief Field op2, offset: 0x20, size: 0x8, def value: None
 ::Unity::Cinemachine::OutPt*  ___op2;

/// @brief Field next1, offset: 0x28, size: 0x8, def value: None
 ::Unity::Cinemachine::Joiner*  ___next1;

/// @brief Field next2, offset: 0x30, size: 0x8, def value: None
 ::Unity::Cinemachine::Joiner*  ___next2;

/// @brief Field nextH, offset: 0x38, size: 0x8, def value: None
 ::Unity::Cinemachine::Joiner*  ___nextH;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::Joiner, ___idx) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::Joiner, ___op1) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::Joiner, ___op2) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::Joiner, ___next1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::Joiner, ___next2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::Joiner, ___nextH) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::Joiner) == 0x40, "Size mismatch!");

} // namespace end def Unity::Cinemachine
