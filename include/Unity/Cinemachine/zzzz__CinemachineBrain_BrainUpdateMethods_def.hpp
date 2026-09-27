#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineBrain_BrainUpdateMethods.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineBrain_BrainUpdateMethods)
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineBrain_BrainUpdateMethods;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineBrain_BrainUpdateMethods);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineBrain_BrainUpdateMethods, "Unity.Cinemachine", "CinemachineBrain/BrainUpdateMethods");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineBrain/BrainUpdateMethods
struct CORDL_TYPE CinemachineBrain_BrainUpdateMethods {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CinemachineBrain_BrainUpdateMethods_Unwrapped
enum struct __CinemachineBrain_BrainUpdateMethods_Unwrapped : int32_t {
__E_FixedUpdate = static_cast<int32_t>(0x0),
__E_LateUpdate = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CinemachineBrain_BrainUpdateMethods_Unwrapped () const noexcept {
return static_cast<__CinemachineBrain_BrainUpdateMethods_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CinemachineBrain_BrainUpdateMethods() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineBrain_BrainUpdateMethods(int32_t  value__) noexcept;

/// @brief Field FixedUpdate value: I32(0)
static ::GlobalNamespace::CinemachineBrain_BrainUpdateMethods const FixedUpdate;

/// @brief Field LateUpdate value: I32(1)
static ::GlobalNamespace::CinemachineBrain_BrainUpdateMethods const LateUpdate;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22141};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachineBrain_BrainUpdateMethods, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineBrain_BrainUpdateMethods) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
