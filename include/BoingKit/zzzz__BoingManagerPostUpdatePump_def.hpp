#pragma once
// IWYU pragma private; include "BoingKit/BoingManagerPostUpdatePump.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BoingManagerPostUpdatePump)
// Forward declare root types
namespace BoingKit {
class BoingManagerPostUpdatePump;
}
// Write type traits
MARK_REF_T(::BoingKit::BoingManagerPostUpdatePump*);
DEFINE_IL2CPP_CLASS(::BoingKit::BoingManagerPostUpdatePump*, "BoingKit", "BoingManagerPostUpdatePump");
// Dependencies UnityEngine.MonoBehaviour
namespace BoingKit {
// Is value type: false
// CS Name: BoingKit.BoingManagerPostUpdatePump
class CORDL_TYPE BoingManagerPostUpdatePump : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Method FixedUpdate, addr 0x5e1b4b8, size 0x6c, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method LateUpdate, addr 0x5e1b5a8, size 0x9c, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::BoingKit::BoingManagerPostUpdatePump* New_ctor() ;

/// @brief Method Start, addr 0x5e1b360, size 0x6c, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method TryDestroyDuplicate, addr 0x5e1b3cc, size 0xec, virtual false, abstract: false, final false
inline bool TryDestroyDuplicate() ;

/// @brief Method Update, addr 0x5e1b524, size 0x84, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method .ctor, addr 0x5e1b644, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoingManagerPostUpdatePump() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoingManagerPostUpdatePump", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BoingManagerPostUpdatePump(BoingManagerPostUpdatePump && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoingManagerPostUpdatePump", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoingManagerPostUpdatePump(BoingManagerPostUpdatePump const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5192};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BoingKit::BoingManagerPostUpdatePump) == 0x20, "Size mismatch!");

} // namespace end def BoingKit
