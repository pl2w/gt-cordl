#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MeshBuilderNative_NativeColorPage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color32_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshBuilderNative_NativeColorPage)
// Forward declare root types
namespace GlobalNamespace {
struct MeshBuilderNative_NativeColorPage;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MeshBuilderNative_NativeColorPage);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MeshBuilderNative_NativeColorPage, "UnityEngine.UIElements", "MeshBuilderNative/NativeColorPage");
// Dependencies UnityEngine.Color32
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.MeshBuilderNative/NativeColorPage
struct CORDL_TYPE MeshBuilderNative_NativeColorPage {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MeshBuilderNative_NativeColorPage() ;

// Ctor Parameters [CppParam { name: "isValid", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "pageAndID", ty: "::UnityEngine::Color32", modifiers: "", def_value: None, comment: None }]
constexpr MeshBuilderNative_NativeColorPage(int32_t  isValid, ::UnityEngine::Color32  pageAndID) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7819};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field isValid, offset: 0x0, size: 0x4, def value: None
 int32_t  isValid;

/// @brief Field pageAndID, offset: 0x4, size: 0x4, def value: None
 ::UnityEngine::Color32  pageAndID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MeshBuilderNative_NativeColorPage, isValid) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshBuilderNative_NativeColorPage, pageAndID) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MeshBuilderNative_NativeColorPage) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
