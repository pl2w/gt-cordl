#pragma once
// IWYU pragma private; include "System/Uri_Offset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Uri_Offset)
// Forward declare root types
namespace GlobalNamespace {
struct Uri_Offset;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Uri_Offset);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Uri_Offset, "System", "Uri/Offset");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Uri/Offset
#pragma pack(push, 1)
struct CORDL_TYPE Uri_Offset {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Uri_Offset() ;

// Ctor Parameters [CppParam { name: "Scheme", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "User", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Host", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "PortValue", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Path", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Query", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Fragment", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "End", ty: "uint16_t", modifiers: "", def_value: None, comment: None }]
constexpr Uri_Offset(uint16_t  Scheme, uint16_t  User, uint16_t  Host, uint16_t  PortValue, uint16_t  Path, uint16_t  Query, uint16_t  Fragment, uint16_t  End) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9928};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Scheme, offset: 0x0, size: 0x2, def value: None
 uint16_t  Scheme;

/// @brief Field User, offset: 0x2, size: 0x2, def value: None
 uint16_t  User;

/// @brief Field Host, offset: 0x4, size: 0x2, def value: None
 uint16_t  Host;

/// @brief Field PortValue, offset: 0x6, size: 0x2, def value: None
 uint16_t  PortValue;

/// @brief Field Path, offset: 0x8, size: 0x2, def value: None
 uint16_t  Path;

/// @brief Field Query, offset: 0xa, size: 0x2, def value: None
 uint16_t  Query;

/// @brief Field Fragment, offset: 0xc, size: 0x2, def value: None
 uint16_t  Fragment;

/// @brief Field End, offset: 0xe, size: 0x2, def value: None
 uint16_t  End;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Uri_Offset, Scheme) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Uri_Offset, User) == 0x2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Uri_Offset, Host) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Uri_Offset, PortValue) == 0x6, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Uri_Offset, Path) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Uri_Offset, Query) == 0xa, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Uri_Offset, Fragment) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Uri_Offset, End) == 0xe, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Uri_Offset) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
