#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Components/LocalizedMonoBehaviour.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LocalizedMonoBehaviour)
// Forward declare root types
namespace UnityEngine::Localization::Components {
class LocalizedMonoBehaviour;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Components::LocalizedMonoBehaviour*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Components::LocalizedMonoBehaviour*, "UnityEngine.Localization.Components", "LocalizedMonoBehaviour");
// [ExecuteAlways]
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::Localization::Components {
// Is value type: false
// CS Name: UnityEngine.Localization.Components.LocalizedMonoBehaviour
class CORDL_TYPE LocalizedMonoBehaviour : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::UnityEngine::Localization::Components::LocalizedMonoBehaviour* New_ctor() ;

/// @brief Method .ctor, addr 0xb04ef64, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizedMonoBehaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizedMonoBehaviour", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizedMonoBehaviour(LocalizedMonoBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedMonoBehaviour", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizedMonoBehaviour(LocalizedMonoBehaviour const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25322};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::Components::LocalizedMonoBehaviour) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Components
