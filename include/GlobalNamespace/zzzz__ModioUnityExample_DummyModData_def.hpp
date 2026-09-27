#pragma once
// IWYU pragma private; include "GlobalNamespace/ModioUnityExample_DummyModData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ModioUnityExample_DummyModData)
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
struct ModioUnityExample_DummyModData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ModioUnityExample_DummyModData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModioUnityExample_DummyModData, "", "ModioUnityExample/DummyModData");
// [IsReadOnly]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ModioUnityExample/DummyModData
struct CORDL_TYPE ModioUnityExample_DummyModData {
public:
// Declarations
/// @brief Method .ctor, addr 0x9f98464, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, ::StringW  summary, ::UnityEngine::Texture2D*  logo, ::StringW  path) ;

// Ctor Parameters []
// @brief default ctor
constexpr ModioUnityExample_DummyModData() ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "summary", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "logo", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: None, comment: None }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr ModioUnityExample_DummyModData(::StringW  name, ::StringW  summary, ::UnityW<::UnityEngine::Texture2D>  logo, ::StringW  path) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32486};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field name, offset: 0x0, size: 0x8, def value: None
 ::StringW  name;

/// @brief Field summary, offset: 0x8, size: 0x8, def value: None
 ::StringW  summary;

/// @brief Field logo, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  logo;

/// @brief Field path, offset: 0x18, size: 0x8, def value: None
 ::StringW  path;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModioUnityExample_DummyModData, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUnityExample_DummyModData, summary) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUnityExample_DummyModData, logo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUnityExample_DummyModData, path) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModioUnityExample_DummyModData) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
