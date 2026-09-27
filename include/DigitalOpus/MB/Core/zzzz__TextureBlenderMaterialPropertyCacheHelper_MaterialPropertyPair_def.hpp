#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPair.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPair)
namespace System {
class Object;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
struct TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPair;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPair);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPair, "DigitalOpus.MB.Core", "TextureBlenderMaterialPropertyCacheHelper/MaterialPropertyPair");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: DigitalOpus.MB.Core.TextureBlenderMaterialPropertyCacheHelper/MaterialPropertyPair
struct CORDL_TYPE TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPair {
public:
// Declarations
/// @brief Method Equals, addr 0x9df5868, size 0xa4, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0x9df590c, size 0x64, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method .ctor, addr 0x9df55d4, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Material*  m, ::StringW  prop) ;

// Ctor Parameters []
// @brief default ctor
constexpr TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPair() ;

// Ctor Parameters [CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None, comment: None }, CppParam { name: "property", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPair(::UnityW<::UnityEngine::Material>  material, ::StringW  property) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22853};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field material, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  material;

/// @brief Field property, offset: 0x8, size: 0x8, def value: None
 ::StringW  property;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPair, material) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPair, property) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPair) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
