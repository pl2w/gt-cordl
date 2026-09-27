#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineStateDrivenCamera_ParentHash.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineStateDrivenCamera_ParentHash)
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineStateDrivenCamera_ParentHash;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineStateDrivenCamera_ParentHash);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineStateDrivenCamera_ParentHash, "Unity.Cinemachine", "CinemachineStateDrivenCamera/ParentHash");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineStateDrivenCamera/ParentHash
struct CORDL_TYPE CinemachineStateDrivenCamera_ParentHash {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineStateDrivenCamera_ParentHash() ;

// Ctor Parameters [CppParam { name: "Hash", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "HashOfParent", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineStateDrivenCamera_ParentHash(int32_t  Hash, int32_t  HashOfParent) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22207};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field Hash, offset: 0x0, size: 0x4, def value: None
 int32_t  Hash;

/// @brief Field HashOfParent, offset: 0x4, size: 0x4, def value: None
 int32_t  HashOfParent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachineStateDrivenCamera_ParentHash, Hash) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineStateDrivenCamera_ParentHash, HashOfParent) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineStateDrivenCamera_ParentHash) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
