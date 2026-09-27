#pragma once
// IWYU pragma private; include "GlobalNamespace/MB_BatchPrepareObjectsForDynamicBatchingDescription.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MB_BatchPrepareObjectsForDynamicBatchingDescription)
// Forward declare root types
namespace GlobalNamespace {
class MB_BatchPrepareObjectsForDynamicBatchingDescription;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MB_BatchPrepareObjectsForDynamicBatchingDescription*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB_BatchPrepareObjectsForDynamicBatchingDescription*, "", "MB_BatchPrepareObjectsForDynamicBatchingDescription");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MB_BatchPrepareObjectsForDynamicBatchingDescription
class CORDL_TYPE MB_BatchPrepareObjectsForDynamicBatchingDescription : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::MB_BatchPrepareObjectsForDynamicBatchingDescription* New_ctor() ;

/// @brief Method OnGUI, addr 0x9dfc2e0, size 0xb0, virtual false, abstract: false, final false
inline void OnGUI() ;

/// @brief Method .ctor, addr 0x9dfc390, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB_BatchPrepareObjectsForDynamicBatchingDescription() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB_BatchPrepareObjectsForDynamicBatchingDescription", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB_BatchPrepareObjectsForDynamicBatchingDescription(MB_BatchPrepareObjectsForDynamicBatchingDescription && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB_BatchPrepareObjectsForDynamicBatchingDescription", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB_BatchPrepareObjectsForDynamicBatchingDescription(MB_BatchPrepareObjectsForDynamicBatchingDescription const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32356};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MB_BatchPrepareObjectsForDynamicBatchingDescription) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
