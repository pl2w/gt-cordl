#pragma once
// IWYU pragma private; include "Fusion/FusionMonoBehaviour.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(FusionMonoBehaviour)
// Forward declare root types
namespace Fusion {
class FusionMonoBehaviour;
}
// Write type traits
MARK_REF_T(::Fusion::FusionMonoBehaviour*);
DEFINE_IL2CPP_CLASS(::Fusion::FusionMonoBehaviour*, "Fusion", "FusionMonoBehaviour");
// Dependencies UnityEngine.MonoBehaviour
namespace Fusion {
// Is value type: false
// CS Name: Fusion.FusionMonoBehaviour
class CORDL_TYPE FusionMonoBehaviour : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::Fusion::FusionMonoBehaviour* New_ctor() ;

/// @brief Method .ctor, addr 0x5f3e6d4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionMonoBehaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionMonoBehaviour", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionMonoBehaviour(FusionMonoBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionMonoBehaviour", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionMonoBehaviour(FusionMonoBehaviour const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31301};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::FusionMonoBehaviour) == 0x20, "Size mismatch!");

} // namespace end def Fusion
