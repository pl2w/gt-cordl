#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualTreeAsset_UxmlObjectEntry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VisualTreeAsset_UxmlObjectEntry)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements {
class UxmlObjectAsset;
}
// Forward declare root types
namespace GlobalNamespace {
struct VisualTreeAsset_UxmlObjectEntry;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VisualTreeAsset_UxmlObjectEntry);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VisualTreeAsset_UxmlObjectEntry, "UnityEngine.UIElements", "VisualTreeAsset/UxmlObjectEntry");
// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.VisualTreeAsset/UxmlObjectEntry
struct CORDL_TYPE VisualTreeAsset_UxmlObjectEntry {
public:
// Declarations
/// @brief Method GetField, addr 0xb7bf404, size 0x168, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::UxmlObjectAsset* GetField(::StringW  fieldName) ;

/// @brief Method ToString, addr 0xb7bf56c, size 0xe4, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0xb7bf3f4, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  parentId, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UxmlObjectAsset*>*  uxmlObjectAssets) ;

// Ctor Parameters []
// @brief default ctor
constexpr VisualTreeAsset_UxmlObjectEntry() ;

// Ctor Parameters [CppParam { name: "parentId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "uxmlObjectAssets", ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::UxmlObjectAsset*>*", modifiers: "", def_value: None, comment: None }]
constexpr VisualTreeAsset_UxmlObjectEntry(int32_t  parentId, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UxmlObjectAsset*>*  uxmlObjectAssets) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8428};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [SerializeField]
/// @brief Field parentId, offset: 0x0, size: 0x4, def value: None
 int32_t  parentId;

/// [SerializeField]
/// @brief Field uxmlObjectAssets, offset: 0x8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UxmlObjectAsset*>*  uxmlObjectAssets;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VisualTreeAsset_UxmlObjectEntry, parentId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualTreeAsset_UxmlObjectEntry, uxmlObjectAssets) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VisualTreeAsset_UxmlObjectEntry) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
