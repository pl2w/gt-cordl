#pragma once
// IWYU pragma private; include "GlobalNamespace/Interop_Sys_TimeValPair.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Interop_Sys_TimeValPair)
// Forward declare root types
namespace GlobalNamespace {
struct Sys_Interop_TimeValPair;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Sys_Interop_TimeValPair);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Sys_Interop_TimeValPair, "", "Interop/Sys/TimeValPair");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Interop/Sys/TimeValPair
struct CORDL_TYPE Sys_Interop_TimeValPair {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Sys_Interop_TimeValPair() ;

// Ctor Parameters [CppParam { name: "ASec", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "AUSec", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "MSec", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "MUSec", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr Sys_Interop_TimeValPair(int64_t  ASec, int64_t  AUSec, int64_t  MSec, int64_t  MUSec) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5317};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field ASec, offset: 0x0, size: 0x8, def value: None
 int64_t  ASec;

/// @brief Field AUSec, offset: 0x8, size: 0x8, def value: None
 int64_t  AUSec;

/// @brief Field MSec, offset: 0x10, size: 0x8, def value: None
 int64_t  MSec;

/// @brief Field MUSec, offset: 0x18, size: 0x8, def value: None
 int64_t  MUSec;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Sys_Interop_TimeValPair, ASec) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Sys_Interop_TimeValPair, AUSec) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Sys_Interop_TimeValPair, MSec) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Sys_Interop_TimeValPair, MUSec) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Sys_Interop_TimeValPair) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
