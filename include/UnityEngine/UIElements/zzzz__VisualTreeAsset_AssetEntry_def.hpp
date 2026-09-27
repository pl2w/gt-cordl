#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualTreeAsset_AssetEntry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__LazyLoadReference_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VisualTreeAsset_AssetEntry)
namespace System {
class Type;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct VisualTreeAsset_AssetEntry;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VisualTreeAsset_AssetEntry);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VisualTreeAsset_AssetEntry, "UnityEngine.UIElements", "VisualTreeAsset/AssetEntry");
// Dependencies UnityEngine.LazyLoadReference`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.VisualTreeAsset/AssetEntry
struct CORDL_TYPE VisualTreeAsset_AssetEntry {
public:
// Declarations
 __declspec(property(get=get_asset)) ::UnityW<::UnityEngine::Object>  asset;

 __declspec(property(get=get_path)) ::StringW  path;

 __declspec(property(get=get_type)) ::System::Type*  type;

/// @brief Method .ctor, addr 0xb7bf778, size 0xd0, virtual false, abstract: false, final false
inline void _ctor(::StringW  path, ::System::Type*  type, ::UnityEngine::Object*  asset) ;

/// @brief Method get_asset, addr 0xb7bf6fc, size 0x7c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> get_asset() ;

/// @brief Method get_path, addr 0xb7bf6f4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_path() ;

/// @brief Method get_type, addr 0xb7bf650, size 0xa4, virtual false, abstract: false, final false
inline ::System::Type* get_type() ;

// Ctor Parameters []
// @brief default ctor
constexpr VisualTreeAsset_AssetEntry() ;

// Ctor Parameters [CppParam { name: "m_Path", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_TypeFullName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_AssetReference", ty: "::UnityEngine::LazyLoadReference_1<::UnityW<::UnityEngine::Object>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_InstanceID", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_CachedType", ty: "::System::Type*", modifiers: "", def_value: None, comment: None }]
constexpr VisualTreeAsset_AssetEntry(::StringW  m_Path, ::StringW  m_TypeFullName, ::UnityEngine::LazyLoadReference_1<::UnityW<::UnityEngine::Object>>  m_AssetReference, int32_t  m_InstanceID, ::System::Type*  m_CachedType) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8429};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// [SerializeField]
/// @brief Field m_Path, offset: 0x0, size: 0x8, def value: None
 ::StringW  m_Path;

/// [SerializeField]
/// @brief Field m_TypeFullName, offset: 0x8, size: 0x8, def value: None
 ::StringW  m_TypeFullName;

/// [SerializeField]
/// @brief Field m_AssetReference, offset: 0x10, size: 0x4, def value: None
 ::UnityEngine::LazyLoadReference_1<::UnityW<::UnityEngine::Object>>  m_AssetReference;

/// [SerializeField]
/// @brief Field m_InstanceID, offset: 0x14, size: 0x4, def value: None
 int32_t  m_InstanceID;

/// @brief Field m_CachedType, offset: 0x18, size: 0x8, def value: None
 ::System::Type*  m_CachedType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VisualTreeAsset_AssetEntry, m_Path) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualTreeAsset_AssetEntry, m_TypeFullName) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualTreeAsset_AssetEntry, m_AssetReference) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualTreeAsset_AssetEntry, m_InstanceID) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualTreeAsset_AssetEntry, m_CachedType) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VisualTreeAsset_AssetEntry) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
