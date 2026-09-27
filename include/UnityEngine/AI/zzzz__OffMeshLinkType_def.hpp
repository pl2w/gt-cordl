#pragma once
// IWYU pragma private; include "UnityEngine/AI/OffMeshLinkType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OffMeshLinkType)
// Forward declare root types
namespace UnityEngine::AI {
struct OffMeshLinkType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AI::OffMeshLinkType);
DEFINE_IL2CPP_CLASS(::UnityEngine::AI::OffMeshLinkType, "UnityEngine.AI", "OffMeshLinkType");
// [MovedFrom("UnityEngine")]
// Dependencies 
namespace UnityEngine::AI {
// Is value type: true
// CS Name: UnityEngine.AI.OffMeshLinkType
struct CORDL_TYPE OffMeshLinkType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OffMeshLinkType_Unwrapped
enum struct __OffMeshLinkType_Unwrapped : int32_t {
__E_LinkTypeManual = static_cast<int32_t>(0x0),
__E_LinkTypeDropDown = static_cast<int32_t>(0x1),
__E_LinkTypeJumpAcross = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OffMeshLinkType_Unwrapped () const noexcept {
return static_cast<__OffMeshLinkType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OffMeshLinkType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OffMeshLinkType(int32_t  value__) noexcept;

/// @brief Field LinkTypeDropDown value: I32(1)
static ::UnityEngine::AI::OffMeshLinkType const LinkTypeDropDown;

/// @brief Field LinkTypeJumpAcross value: I32(2)
static ::UnityEngine::AI::OffMeshLinkType const LinkTypeJumpAcross;

/// @brief Field LinkTypeManual value: I32(0)
static ::UnityEngine::AI::OffMeshLinkType const LinkTypeManual;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32098};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AI::OffMeshLinkType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AI::OffMeshLinkType) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::AI
