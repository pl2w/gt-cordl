#pragma once
// IWYU pragma private; include "Fusion/AssetObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(AssetObject)
// Forward declare root types
namespace Fusion {
class AssetObject;
}
// Write type traits
MARK_REF_T(::Fusion::AssetObject*);
DEFINE_IL2CPP_CLASS(::Fusion::AssetObject*, "Fusion", "AssetObject");
// Dependencies UnityEngine.ScriptableObject
namespace Fusion {
// Is value type: false
// CS Name: Fusion.AssetObject
class CORDL_TYPE AssetObject : public ::UnityEngine::ScriptableObject {
public:
// Declarations
static inline ::Fusion::AssetObject* New_ctor() ;

/// @brief Method .ctor, addr 0x5f9732c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AssetObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AssetObject", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AssetObject(AssetObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssetObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssetObject(AssetObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18970};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::AssetObject) == 0x18, "Size mismatch!");

} // namespace end def Fusion
