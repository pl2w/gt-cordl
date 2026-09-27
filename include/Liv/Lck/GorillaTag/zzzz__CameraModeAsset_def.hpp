#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/CameraModeAsset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(CameraModeAsset)
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace Liv::Lck::GorillaTag {
struct CameraModeAsset;
}
// Write type traits
MARK_VAL_T(::Liv::Lck::GorillaTag::CameraModeAsset);
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::CameraModeAsset, "Liv.Lck.GorillaTag", "CameraModeAsset");
// Dependencies 
namespace Liv::Lck::GorillaTag {
// Is value type: true
// CS Name: Liv.Lck.GorillaTag.CameraModeAsset
struct CORDL_TYPE CameraModeAsset {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CameraModeAsset() ;

// Ctor Parameters [CppParam { name: "Icon", ty: "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr CameraModeAsset(::UnityW<::UnityEngine::Sprite>  Icon, ::StringW  Name) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29668};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Icon, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  Icon;

/// @brief Field Name, offset: 0x8, size: 0x8, def value: None
 ::StringW  Name;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::GorillaTag::CameraModeAsset, Icon) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::CameraModeAsset, Name) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::GorillaTag::CameraModeAsset) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
