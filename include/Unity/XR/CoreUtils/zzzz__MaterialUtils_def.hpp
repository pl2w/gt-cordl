#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/MaterialUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MaterialUtils)
namespace UnityEngine::UI {
class Graphic;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class MaterialUtils;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::MaterialUtils*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::MaterialUtils*, "Unity.XR.CoreUtils", "MaterialUtils");
// [Extension]
// Dependencies System.Object
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.MaterialUtils
class CORDL_TYPE MaterialUtils : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method AddMaterial, addr 0xb3f84f4, size 0xe4, virtual false, abstract: false, final false
static inline void AddMaterial(::UnityEngine::Renderer*  renderer, ::UnityEngine::Material*  material) ;

/// @brief Method CloneMaterials, addr 0xb3f81bc, size 0x13c, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Material>> CloneMaterials(::UnityEngine::Renderer*  renderer) ;

/// @brief Method GetMaterialClone, addr 0xb3f8108, size 0xb4, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Material> GetMaterialClone(::UnityEngine::UI::Graphic*  graphic) ;

/// @brief Method GetMaterialClone, addr 0xb3f8064, size 0xa4, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Material> GetMaterialClone(::UnityEngine::Renderer*  renderer) ;

/// @brief Method HexToColor, addr 0xb3f82f8, size 0x180, virtual false, abstract: false, final false
static inline ::UnityEngine::Color HexToColor(::StringW  hex) ;

/// @brief Method HueShift, addr 0xb3f8478, size 0x7c, virtual false, abstract: false, final false
static inline ::UnityEngine::Color HueShift(::UnityEngine::Color  color, float_t  shift) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MaterialUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MaterialUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MaterialUtils(MaterialUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MaterialUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaterialUtils(MaterialUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30420};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::XR::CoreUtils::MaterialUtils) == 0x10, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils
