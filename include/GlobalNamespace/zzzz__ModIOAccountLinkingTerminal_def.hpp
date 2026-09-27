#pragma once
// IWYU pragma private; include "GlobalNamespace/ModIOAccountLinkingTerminal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ModIOAccountLinkingTerminal)
// Forward declare root types
namespace GlobalNamespace {
class ModIOAccountLinkingTerminal;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ModIOAccountLinkingTerminal*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModIOAccountLinkingTerminal*, "", "ModIOAccountLinkingTerminal");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ModIOAccountLinkingTerminal
class CORDL_TYPE ModIOAccountLinkingTerminal : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::ModIOAccountLinkingTerminal* New_ctor() ;

/// @brief Method .ctor, addr 0x59c75b4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModIOAccountLinkingTerminal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModIOAccountLinkingTerminal", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModIOAccountLinkingTerminal(ModIOAccountLinkingTerminal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModIOAccountLinkingTerminal", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModIOAccountLinkingTerminal(ModIOAccountLinkingTerminal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2683};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ModIOAccountLinkingTerminal) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
