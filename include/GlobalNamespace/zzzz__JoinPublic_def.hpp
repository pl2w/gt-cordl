#pragma once
// IWYU pragma private; include "GlobalNamespace/JoinPublic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(JoinPublic)
// Forward declare root types
namespace GlobalNamespace {
class JoinPublic;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::JoinPublic*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::JoinPublic*, "", "JoinPublic");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: JoinPublic
class CORDL_TYPE JoinPublic : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::JoinPublic* New_ctor() ;

/// @brief Method .ctor, addr 0x5adfe88, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JoinPublic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JoinPublic", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JoinPublic(JoinPublic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JoinPublic", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JoinPublic(JoinPublic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3442};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::JoinPublic) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
