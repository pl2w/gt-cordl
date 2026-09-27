#pragma once
// IWYU pragma private; include "Modio/Unity/ModioPreInitializer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ModioPreInitializer)
// Forward declare root types
namespace Modio::Unity {
class ModioPreInitializer;
}
// Write type traits
MARK_REF_T(::Modio::Unity::ModioPreInitializer*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::ModioPreInitializer*, "Modio.Unity", "ModioPreInitializer");
// Dependencies UnityEngine.MonoBehaviour
namespace Modio::Unity {
// Is value type: false
// CS Name: Modio.Unity.ModioPreInitializer
class CORDL_TYPE ModioPreInitializer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::Modio::Unity::ModioPreInitializer* New_ctor() ;

/// @brief Method Start, addr 0x9f94974, size 0x58, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method .ctor, addr 0x9f949cc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioPreInitializer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioPreInitializer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioPreInitializer(ModioPreInitializer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioPreInitializer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioPreInitializer(ModioPreInitializer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32063};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Unity::ModioPreInitializer) == 0x20, "Size mismatch!");

} // namespace end def Modio::Unity
