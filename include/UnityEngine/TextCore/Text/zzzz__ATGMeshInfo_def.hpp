#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/ATGMeshInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/TextCore/Text/zzzz__NativeTextElementInfo_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ATGMeshInfo)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
namespace UnityEngine::TextCore::Text {
struct NativeTextElementInfo;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct ATGMeshInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::ATGMeshInfo);
DEFINE_IL2CPP_CLASS(::UnityEngine::TextCore::Text::ATGMeshInfo, "UnityEngine.TextCore.Text", "ATGMeshInfo");
// [NativeHeader("Modules/TextCoreTextEngine/Native/ATGMeshInfo.h")]
// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
// Dependencies UnityEngine.TextCore.Text.NativeTextElementInfo
namespace UnityEngine::TextCore::Text {
// Is value type: true
// CS Name: UnityEngine.TextCore.Text.ATGMeshInfo
struct CORDL_TYPE ATGMeshInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ATGMeshInfo() ;

// Ctor Parameters [CppParam { name: "textElementInfos", ty: "::ArrayW<::UnityEngine::TextCore::Text::NativeTextElementInfo>", modifiers: "", def_value: None, comment: None }, CppParam { name: "fontAssetId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "textElementCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "fontAsset", ty: "::UnityW<::UnityEngine::TextCore::Text::FontAsset>", modifiers: "", def_value: None, comment: None }, CppParam { name: "textElementInfoIndicesByAtlas", ty: "::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<int32_t>*>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "hasMultipleColors", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr ATGMeshInfo(::ArrayW<::UnityEngine::TextCore::Text::NativeTextElementInfo>  textElementInfos, int32_t  fontAssetId, int32_t  textElementCount, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>  fontAsset, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<int32_t>*>*  textElementInfoIndicesByAtlas, bool  hasMultipleColors) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26221};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field textElementInfos, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::TextCore::Text::NativeTextElementInfo>  textElementInfos;

/// @brief Field fontAssetId, offset: 0x8, size: 0x4, def value: None
 int32_t  fontAssetId;

/// @brief Field textElementCount, offset: 0xc, size: 0x4, def value: None
 int32_t  textElementCount;

/// [Ignore]
/// @brief Field fontAsset, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::TextCore::Text::FontAsset>  fontAsset;

/// [Ignore]
/// @brief Field textElementInfoIndicesByAtlas, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<int32_t>*>*  textElementInfoIndicesByAtlas;

/// [Ignore]
/// @brief Field hasMultipleColors, offset: 0x20, size: 0x1, def value: None
 bool  hasMultipleColors;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::Text::ATGMeshInfo, textElementInfos) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::ATGMeshInfo, fontAssetId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::ATGMeshInfo, textElementCount) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::ATGMeshInfo, fontAsset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::ATGMeshInfo, textElementInfoIndicesByAtlas) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::ATGMeshInfo, hasMultipleColors) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::TextCore::Text::ATGMeshInfo) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::TextCore::Text
