#pragma once
// IWYU pragma private; include "GlobalNamespace/MB_PrepareObjectsForDynamicBatchingDescription.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MB_PrepareObjectsForDynamicBatchingDescription)
// Forward declare root types
namespace GlobalNamespace {
class MB_PrepareObjectsForDynamicBatchingDescription;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MB_PrepareObjectsForDynamicBatchingDescription*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB_PrepareObjectsForDynamicBatchingDescription*, "", "MB_PrepareObjectsForDynamicBatchingDescription");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MB_PrepareObjectsForDynamicBatchingDescription
class CORDL_TYPE MB_PrepareObjectsForDynamicBatchingDescription : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::MB_PrepareObjectsForDynamicBatchingDescription* New_ctor() ;

/// @brief Method OnGUI, addr 0x9dfcc90, size 0xb0, virtual false, abstract: false, final false
inline void OnGUI() ;

/// @brief Method .ctor, addr 0x9dfcd40, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB_PrepareObjectsForDynamicBatchingDescription() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB_PrepareObjectsForDynamicBatchingDescription", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB_PrepareObjectsForDynamicBatchingDescription(MB_PrepareObjectsForDynamicBatchingDescription && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB_PrepareObjectsForDynamicBatchingDescription", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB_PrepareObjectsForDynamicBatchingDescription(MB_PrepareObjectsForDynamicBatchingDescription const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32358};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MB_PrepareObjectsForDynamicBatchingDescription) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
