#pragma once
// IWYU pragma private; include "GlobalNamespace/JoustTerrain.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(JoustTerrain)
// Forward declare root types
namespace GlobalNamespace {
class JoustTerrain;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::JoustTerrain*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::JoustTerrain*, "", "JoustTerrain");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: JoustTerrain
class CORDL_TYPE JoustTerrain : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::JoustTerrain* New_ctor() ;

/// @brief Method Start, addr 0x56c1e5c, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x56c1e60, size 0x4, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method .ctor, addr 0x56c1e64, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JoustTerrain() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JoustTerrain", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JoustTerrain(JoustTerrain && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JoustTerrain", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JoustTerrain(JoustTerrain const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1003};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::JoustTerrain) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
