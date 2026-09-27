#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDAudioManager_KIDSoundType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(KIDAudioManager_KIDSoundType)
// Forward declare root types
namespace GlobalNamespace {
struct KIDAudioManager_KIDSoundType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::KIDAudioManager_KIDSoundType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDAudioManager_KIDSoundType, "", "KIDAudioManager/KIDSoundType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: KIDAudioManager/KIDSoundType
struct CORDL_TYPE KIDAudioManager_KIDSoundType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __KIDAudioManager_KIDSoundType_Unwrapped
enum struct __KIDAudioManager_KIDSoundType_Unwrapped : int32_t {
__E_ButtonClick = static_cast<int32_t>(0x0),
__E_Hover = static_cast<int32_t>(0x1),
__E_Success = static_cast<int32_t>(0x2),
__E_Denied = static_cast<int32_t>(0x3),
__E_InputBack = static_cast<int32_t>(0x4),
__E_TurnOffPermission = static_cast<int32_t>(0x5),
__E_PageTransition = static_cast<int32_t>(0x6),
__E_ButtonHeld = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __KIDAudioManager_KIDSoundType_Unwrapped () const noexcept {
return static_cast<__KIDAudioManager_KIDSoundType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr KIDAudioManager_KIDSoundType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr KIDAudioManager_KIDSoundType(int32_t  value__) noexcept;

/// @brief Field ButtonClick value: I32(0)
static ::GlobalNamespace::KIDAudioManager_KIDSoundType const ButtonClick;

/// @brief Field ButtonHeld value: I32(7)
static ::GlobalNamespace::KIDAudioManager_KIDSoundType const ButtonHeld;

/// @brief Field Denied value: I32(3)
static ::GlobalNamespace::KIDAudioManager_KIDSoundType const Denied;

/// @brief Field Hover value: I32(1)
static ::GlobalNamespace::KIDAudioManager_KIDSoundType const Hover;

/// @brief Field InputBack value: I32(4)
static ::GlobalNamespace::KIDAudioManager_KIDSoundType const InputBack;

/// @brief Field PageTransition value: I32(6)
static ::GlobalNamespace::KIDAudioManager_KIDSoundType const PageTransition;

/// @brief Field Success value: I32(2)
static ::GlobalNamespace::KIDAudioManager_KIDSoundType const Success;

/// @brief Field TurnOffPermission value: I32(5)
static ::GlobalNamespace::KIDAudioManager_KIDSoundType const TurnOffPermission;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2912};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDAudioManager_KIDSoundType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDAudioManager_KIDSoundType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
