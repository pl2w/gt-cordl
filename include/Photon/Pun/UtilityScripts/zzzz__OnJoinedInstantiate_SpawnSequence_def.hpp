#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/OnJoinedInstantiate_SpawnSequence.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OnJoinedInstantiate_SpawnSequence)
// Forward declare root types
namespace GlobalNamespace {
struct OnJoinedInstantiate_SpawnSequence;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OnJoinedInstantiate_SpawnSequence);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OnJoinedInstantiate_SpawnSequence, "Photon.Pun.UtilityScripts", "OnJoinedInstantiate/SpawnSequence");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Photon.Pun.UtilityScripts.OnJoinedInstantiate/SpawnSequence
struct CORDL_TYPE OnJoinedInstantiate_SpawnSequence {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OnJoinedInstantiate_SpawnSequence_Unwrapped
enum struct __OnJoinedInstantiate_SpawnSequence_Unwrapped : int32_t {
__E_Connection = static_cast<int32_t>(0x0),
__E_Random = static_cast<int32_t>(0x1),
__E_RoundRobin = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OnJoinedInstantiate_SpawnSequence_Unwrapped () const noexcept {
return static_cast<__OnJoinedInstantiate_SpawnSequence_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OnJoinedInstantiate_SpawnSequence() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OnJoinedInstantiate_SpawnSequence(int32_t  value__) noexcept;

/// @brief Field Connection value: I32(0)
static ::GlobalNamespace::OnJoinedInstantiate_SpawnSequence const Connection;

/// @brief Field Random value: I32(1)
static ::GlobalNamespace::OnJoinedInstantiate_SpawnSequence const Random;

/// @brief Field RoundRobin value: I32(2)
static ::GlobalNamespace::OnJoinedInstantiate_SpawnSequence const RoundRobin;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31232};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OnJoinedInstantiate_SpawnSequence, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OnJoinedInstantiate_SpawnSequence) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
