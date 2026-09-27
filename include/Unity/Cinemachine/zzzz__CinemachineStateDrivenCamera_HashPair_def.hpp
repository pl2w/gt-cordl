#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineStateDrivenCamera_HashPair.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineStateDrivenCamera_HashPair)
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineStateDrivenCamera_HashPair;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineStateDrivenCamera_HashPair);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineStateDrivenCamera_HashPair, "Unity.Cinemachine", "CinemachineStateDrivenCamera/HashPair");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineStateDrivenCamera/HashPair
struct CORDL_TYPE CinemachineStateDrivenCamera_HashPair {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineStateDrivenCamera_HashPair() ;

// Ctor Parameters [CppParam { name: "parentHash", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "hash", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineStateDrivenCamera_HashPair(int32_t  parentHash, int32_t  hash) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22208};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field parentHash, offset: 0x0, size: 0x4, def value: None
 int32_t  parentHash;

/// @brief Field hash, offset: 0x4, size: 0x4, def value: None
 int32_t  hash;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachineStateDrivenCamera_HashPair, parentHash) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineStateDrivenCamera_HashPair, hash) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineStateDrivenCamera_HashPair) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
