#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineStoryboard_StoryboardRenderMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineStoryboard_StoryboardRenderMode)
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineStoryboard_StoryboardRenderMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineStoryboard_StoryboardRenderMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineStoryboard_StoryboardRenderMode, "Unity.Cinemachine", "CinemachineStoryboard/StoryboardRenderMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineStoryboard/StoryboardRenderMode
struct CORDL_TYPE CinemachineStoryboard_StoryboardRenderMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CinemachineStoryboard_StoryboardRenderMode_Unwrapped
enum struct __CinemachineStoryboard_StoryboardRenderMode_Unwrapped : int32_t {
__E_ScreenSpaceOverlay = static_cast<int32_t>(0x0),
__E_ScreenSpaceCamera = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CinemachineStoryboard_StoryboardRenderMode_Unwrapped () const noexcept {
return static_cast<__CinemachineStoryboard_StoryboardRenderMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CinemachineStoryboard_StoryboardRenderMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineStoryboard_StoryboardRenderMode(int32_t  value__) noexcept;

/// @brief Field ScreenSpaceCamera value: I32(1)
static ::GlobalNamespace::CinemachineStoryboard_StoryboardRenderMode const ScreenSpaceCamera;

/// @brief Field ScreenSpaceOverlay value: I32(0)
static ::GlobalNamespace::CinemachineStoryboard_StoryboardRenderMode const ScreenSpaceOverlay;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22212};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachineStoryboard_StoryboardRenderMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineStoryboard_StoryboardRenderMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
