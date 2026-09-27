#pragma once
// IWYU pragma private; include "GlobalNamespace/NewMapsDisplay_NewMapData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(NewMapsDisplay_NewMapData)
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
struct NewMapsDisplay_NewMapData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NewMapsDisplay_NewMapData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NewMapsDisplay_NewMapData, "", "NewMapsDisplay/NewMapData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: NewMapsDisplay/NewMapData
struct CORDL_TYPE NewMapsDisplay_NewMapData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr NewMapsDisplay_NewMapData() ;

// Ctor Parameters [CppParam { name: "image", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: None, comment: None }, CppParam { name: "info", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr NewMapsDisplay_NewMapData(::UnityW<::UnityEngine::Texture2D>  image, ::StringW  info) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2730};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field image, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  image;

/// @brief Field info, offset: 0x8, size: 0x8, def value: None
 ::StringW  info;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NewMapsDisplay_NewMapData, image) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NewMapsDisplay_NewMapData, info) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NewMapsDisplay_NewMapData) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
