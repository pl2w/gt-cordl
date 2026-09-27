#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineCollider_ResolutionStrategy.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineCollider_ResolutionStrategy)
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineCollider_ResolutionStrategy;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineCollider_ResolutionStrategy);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineCollider_ResolutionStrategy, "Unity.Cinemachine", "CinemachineCollider/ResolutionStrategy");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineCollider/ResolutionStrategy
struct CORDL_TYPE CinemachineCollider_ResolutionStrategy {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CinemachineCollider_ResolutionStrategy_Unwrapped
enum struct __CinemachineCollider_ResolutionStrategy_Unwrapped : int32_t {
__E_PullCameraForward = static_cast<int32_t>(0x0),
__E_PreserveCameraHeight = static_cast<int32_t>(0x1),
__E_PreserveCameraDistance = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CinemachineCollider_ResolutionStrategy_Unwrapped () const noexcept {
return static_cast<__CinemachineCollider_ResolutionStrategy_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CinemachineCollider_ResolutionStrategy() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineCollider_ResolutionStrategy(int32_t  value__) noexcept;

/// @brief Field PreserveCameraDistance value: I32(2)
static ::GlobalNamespace::CinemachineCollider_ResolutionStrategy const PreserveCameraDistance;

/// @brief Field PreserveCameraHeight value: I32(1)
static ::GlobalNamespace::CinemachineCollider_ResolutionStrategy const PreserveCameraHeight;

/// @brief Field PullCameraForward value: I32(0)
static ::GlobalNamespace::CinemachineCollider_ResolutionStrategy const PullCameraForward;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22391};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachineCollider_ResolutionStrategy, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineCollider_ResolutionStrategy) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
