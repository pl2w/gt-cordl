#pragma once
// IWYU pragma private; include "GlobalNamespace/GRPlayerProgressionHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GRPlayerProgressionHandler)
// Forward declare root types
namespace GlobalNamespace {
class GRPlayerProgressionHandler;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRPlayerProgressionHandler*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRPlayerProgressionHandler*, "", "GRPlayerProgressionHandler");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRPlayerProgressionHandler
class CORDL_TYPE GRPlayerProgressionHandler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::GRPlayerProgressionHandler* New_ctor() ;

/// @brief Method Start, addr 0x58a6948, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x58a694c, size 0x4, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method .ctor, addr 0x58a6950, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRPlayerProgressionHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRPlayerProgressionHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRPlayerProgressionHandler(GRPlayerProgressionHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRPlayerProgressionHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRPlayerProgressionHandler(GRPlayerProgressionHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2010};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GRPlayerProgressionHandler) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
