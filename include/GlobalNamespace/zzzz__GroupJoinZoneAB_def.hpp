#pragma once
// IWYU pragma private; include "GlobalNamespace/GroupJoinZoneAB.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GroupJoinZoneA_def.hpp"
#include "GlobalNamespace/zzzz__GroupJoinZoneB_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GroupJoinZoneAB)
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct GroupJoinZoneAB;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GroupJoinZoneAB);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GroupJoinZoneAB, "", "GroupJoinZoneAB");
// Dependencies GroupJoinZoneA, GroupJoinZoneB
namespace GlobalNamespace {
// Is value type: true
// CS Name: GroupJoinZoneAB
struct CORDL_TYPE GroupJoinZoneAB {
public:
// Declarations
/// @brief Method Equals, addr 0x580c35c, size 0x84, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode, addr 0x580c3e0, size 0x34, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method HasAnyFlag, addr 0x580c334, size 0x28, virtual false, abstract: false, final false
inline bool HasAnyFlag(::GlobalNamespace::GroupJoinZoneAB  other) ;

/// @brief Method ToString, addr 0x580c41c, size 0x118, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method op_BitwiseAnd, addr 0x580c304, size 0x8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::GroupJoinZoneAB op_BitwiseAnd(::GlobalNamespace::GroupJoinZoneAB  one, ::GlobalNamespace::GroupJoinZoneAB  two) ;

/// @brief Method op_BitwiseOr, addr 0x580c30c, size 0x8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::GroupJoinZoneAB op_BitwiseOr(::GlobalNamespace::GroupJoinZoneAB  one, ::GlobalNamespace::GroupJoinZoneAB  two) ;

/// @brief Method op_Equality, addr 0x580c31c, size 0xc, virtual false, abstract: false, final false
static inline bool op_Equality(::GlobalNamespace::GroupJoinZoneAB  one, ::GlobalNamespace::GroupJoinZoneAB  two) ;

/// @brief Method op_Implicit, addr 0x580c414, size 0x8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::GroupJoinZoneAB op_Implicit___GlobalNamespace__GroupJoinZoneAB(int32_t  d) ;

/// @brief Method op_Inequality, addr 0x580c328, size 0xc, virtual false, abstract: false, final false
static inline bool op_Inequality(::GlobalNamespace::GroupJoinZoneAB  one, ::GlobalNamespace::GroupJoinZoneAB  two) ;

/// @brief Method op_OnesComplement, addr 0x580c314, size 0x8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::GroupJoinZoneAB op_OnesComplement(::GlobalNamespace::GroupJoinZoneAB  z) ;

// Ctor Parameters []
// @brief default ctor
constexpr GroupJoinZoneAB() ;

// Ctor Parameters [CppParam { name: "a", ty: "::GlobalNamespace::GroupJoinZoneA", modifiers: "", def_value: None, comment: None }, CppParam { name: "b", ty: "::GlobalNamespace::GroupJoinZoneB", modifiers: "", def_value: None, comment: None }]
constexpr GroupJoinZoneAB(::GlobalNamespace::GroupJoinZoneA  a, ::GlobalNamespace::GroupJoinZoneB  b) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1713};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field a, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::GroupJoinZoneA  a;

/// @brief Field b, offset: 0x4, size: 0x4, def value: None
 ::GlobalNamespace::GroupJoinZoneB  b;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GroupJoinZoneAB, a) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GroupJoinZoneAB, b) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GroupJoinZoneAB) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
