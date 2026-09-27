#pragma once
// IWYU pragma private; include "GlobalNamespace/HandLinkAuthorityStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__HandLinkAuthorityType_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HandLinkAuthorityStatus)
namespace GlobalNamespace {
struct HandLinkAuthorityType;
}
// Forward declare root types
namespace GlobalNamespace {
struct HandLinkAuthorityStatus;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HandLinkAuthorityStatus);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HandLinkAuthorityStatus, "", "HandLinkAuthorityStatus");
// Dependencies HandLinkAuthorityType
namespace GlobalNamespace {
// Is value type: true
// CS Name: HandLinkAuthorityStatus
struct CORDL_TYPE HandLinkAuthorityStatus {
public:
// Declarations
/// @brief Method CompareTo, addr 0x598a0bc, size 0xb8, virtual false, abstract: false, final false
inline int32_t CompareTo(::GlobalNamespace::HandLinkAuthorityStatus  b) ;

/// @brief Method ToString, addr 0x598a1c8, size 0xa4, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x598a000, size 0x14, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::HandLinkAuthorityType  authority) ;

/// @brief Method .ctor, addr 0x598a014, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::HandLinkAuthorityType  authority, float_t  timestamp, int32_t  tiebreak) ;

/// @brief Method op_Equality, addr 0x598a174, size 0x34, virtual false, abstract: false, final false
static inline bool op_Equality(::GlobalNamespace::HandLinkAuthorityStatus  a, ::GlobalNamespace::HandLinkAuthorityStatus  b) ;

/// @brief Method op_GreaterThan, addr 0x598a024, size 0x4c, virtual false, abstract: false, final false
static inline bool op_GreaterThan(::GlobalNamespace::HandLinkAuthorityStatus  a, ::GlobalNamespace::HandLinkAuthorityStatus  b) ;

/// @brief Method op_Inequality, addr 0x598a1a8, size 0x20, virtual false, abstract: false, final false
static inline bool op_Inequality(::GlobalNamespace::HandLinkAuthorityStatus  a, ::GlobalNamespace::HandLinkAuthorityStatus  b) ;

/// @brief Method op_LessThan, addr 0x598a070, size 0x4c, virtual false, abstract: false, final false
static inline bool op_LessThan(::GlobalNamespace::HandLinkAuthorityStatus  a, ::GlobalNamespace::HandLinkAuthorityStatus  b) ;

// Ctor Parameters []
// @brief default ctor
constexpr HandLinkAuthorityStatus() ;

// Ctor Parameters [CppParam { name: "type", ty: "::GlobalNamespace::HandLinkAuthorityType", modifiers: "", def_value: None, comment: None }, CppParam { name: "timestamp", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "tiebreak", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HandLinkAuthorityStatus(::GlobalNamespace::HandLinkAuthorityType  type, float_t  timestamp, int32_t  tiebreak) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2561};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field type, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::HandLinkAuthorityType  type;

/// @brief Field timestamp, offset: 0x4, size: 0x4, def value: None
 float_t  timestamp;

/// @brief Field tiebreak, offset: 0x8, size: 0x4, def value: None
 int32_t  tiebreak;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HandLinkAuthorityStatus, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandLinkAuthorityStatus, timestamp) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandLinkAuthorityStatus, tiebreak) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HandLinkAuthorityStatus) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
