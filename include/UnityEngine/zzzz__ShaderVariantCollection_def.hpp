#pragma once
// IWYU pragma private; include "UnityEngine/ShaderVariantCollection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ShaderVariantCollection)
// Forward declare root types
namespace UnityEngine {
class ShaderVariantCollection;
}
// Write type traits
MARK_REF_T(::UnityEngine::ShaderVariantCollection*);
DEFINE_IL2CPP_CLASS(::UnityEngine::ShaderVariantCollection*, "UnityEngine", "ShaderVariantCollection");
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ShaderVariantCollection
class CORDL_TYPE ShaderVariantCollection : public ::UnityEngine::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShaderVariantCollection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShaderVariantCollection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ShaderVariantCollection(ShaderVariantCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShaderVariantCollection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShaderVariantCollection(ShaderVariantCollection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15133};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ShaderVariantCollection) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
