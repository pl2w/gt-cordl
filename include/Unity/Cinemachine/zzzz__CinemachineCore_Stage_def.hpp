#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineCore_Stage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineCore_Stage)
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineCore_Stage;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineCore_Stage);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineCore_Stage, "Unity.Cinemachine", "CinemachineCore/Stage");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineCore/Stage
struct CORDL_TYPE CinemachineCore_Stage {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CinemachineCore_Stage_Unwrapped
enum struct __CinemachineCore_Stage_Unwrapped : int32_t {
__E_Body = static_cast<int32_t>(0x0),
__E_Aim = static_cast<int32_t>(0x1),
__E_Noise = static_cast<int32_t>(0x2),
__E_Finalize = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CinemachineCore_Stage_Unwrapped () const noexcept {
return static_cast<__CinemachineCore_Stage_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CinemachineCore_Stage() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineCore_Stage(int32_t  value__) noexcept;

/// @brief Field Aim value: I32(1)
static ::GlobalNamespace::CinemachineCore_Stage const Aim;

/// @brief Field Body value: I32(0)
static ::GlobalNamespace::CinemachineCore_Stage const Body;

/// @brief Field Finalize value: I32(3)
static ::GlobalNamespace::CinemachineCore_Stage const Finalize;

/// @brief Field Noise value: I32(2)
static ::GlobalNamespace::CinemachineCore_Stage const Noise;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22276};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachineCore_Stage, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineCore_Stage) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
