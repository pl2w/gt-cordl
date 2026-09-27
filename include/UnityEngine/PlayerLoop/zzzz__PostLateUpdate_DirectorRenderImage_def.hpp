#pragma once
// IWYU pragma private; include "UnityEngine/PlayerLoop/PostLateUpdate_DirectorRenderImage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(PostLateUpdate_DirectorRenderImage)
// Forward declare root types
namespace GlobalNamespace {
struct PostLateUpdate_DirectorRenderImage;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PostLateUpdate_DirectorRenderImage);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PostLateUpdate_DirectorRenderImage, "UnityEngine.PlayerLoop", "PostLateUpdate/DirectorRenderImage");
// [RequiredByNativeCode]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate/DirectorRenderImage
#pragma pack(push, 0)
struct CORDL_TYPE PostLateUpdate_DirectorRenderImage {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PostLateUpdate_DirectorRenderImage() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15348};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::PostLateUpdate_DirectorRenderImage) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
