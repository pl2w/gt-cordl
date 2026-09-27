#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/AccessDoorPlaceholder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(AccessDoorPlaceholder)
// Forward declare root types
namespace GT_CustomMapSupportRuntime {
class AccessDoorPlaceholder;
}
// Write type traits
MARK_REF_T(::GT_CustomMapSupportRuntime::AccessDoorPlaceholder*);
DEFINE_IL2CPP_CLASS(::GT_CustomMapSupportRuntime::AccessDoorPlaceholder*, "GT_CustomMapSupportRuntime", "AccessDoorPlaceholder");
// Dependencies UnityEngine.MonoBehaviour
namespace GT_CustomMapSupportRuntime {
// Is value type: false
// CS Name: GT_CustomMapSupportRuntime.AccessDoorPlaceholder
class CORDL_TYPE AccessDoorPlaceholder : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GT_CustomMapSupportRuntime::AccessDoorPlaceholder* New_ctor() ;

/// @brief Method .ctor, addr 0x9cb0690, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AccessDoorPlaceholder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AccessDoorPlaceholder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AccessDoorPlaceholder(AccessDoorPlaceholder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AccessDoorPlaceholder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AccessDoorPlaceholder(AccessDoorPlaceholder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30871};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GT_CustomMapSupportRuntime::AccessDoorPlaceholder) == 0x20, "Size mismatch!");

} // namespace end def GT_CustomMapSupportRuntime
