#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualTreeAsset_UsingEntry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(VisualTreeAsset_UsingEntry)
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace UnityEngine::UIElements {
class VisualTreeAsset;
}
// Forward declare root types
namespace GlobalNamespace {
struct VisualTreeAsset_UsingEntry;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VisualTreeAsset_UsingEntry);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VisualTreeAsset_UsingEntry, "UnityEngine.UIElements", "VisualTreeAsset/UsingEntry");
// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.VisualTreeAsset/UsingEntry
struct CORDL_TYPE VisualTreeAsset_UsingEntry {
public:
// Declarations
/// @brief Field comparer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_comparer, put=setStaticF_comparer)) ::System::Collections::Generic::IComparer_1<::GlobalNamespace::VisualTreeAsset_UsingEntry>*  comparer;

/// @brief Method .ctor, addr 0xb7bf320, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::StringW  alias, ::StringW  path) ;

static inline ::System::Collections::Generic::IComparer_1<::GlobalNamespace::VisualTreeAsset_UsingEntry>* getStaticF_comparer() ;

static inline void setStaticF_comparer(::System::Collections::Generic::IComparer_1<::GlobalNamespace::VisualTreeAsset_UsingEntry>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr VisualTreeAsset_UsingEntry() ;

// Ctor Parameters [CppParam { name: "alias", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "asset", ty: "::UnityW<::UnityEngine::UIElements::VisualTreeAsset>", modifiers: "", def_value: None, comment: None }]
constexpr VisualTreeAsset_UsingEntry(::StringW  alias, ::StringW  path, ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>  asset) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8424};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// [SerializeField]
/// @brief Field alias, offset: 0x0, size: 0x8, def value: None
 ::StringW  alias;

/// [SerializeField]
/// @brief Field path, offset: 0x8, size: 0x8, def value: None
 ::StringW  path;

/// [SerializeField]
/// @brief Field asset, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>  asset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VisualTreeAsset_UsingEntry, alias) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualTreeAsset_UsingEntry, path) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualTreeAsset_UsingEntry, asset) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VisualTreeAsset_UsingEntry) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
