#pragma once
// IWYU pragma private; include "GlobalNamespace/GRUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GRUtils)
namespace GlobalNamespace {
struct GRToolProgressionManager_ToolParts;
}
namespace GlobalNamespace {
struct GRTool_GRToolType;
}
// Forward declare root types
namespace GlobalNamespace {
class GRUtils;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRUtils*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRUtils*, "", "GRUtils");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRUtils
class CORDL_TYPE GRUtils : public ::System::Object {
public:
// Declarations
/// @brief Method GetToolName, addr 0x58ef728, size 0xcc, virtual false, abstract: false, final false
static inline ::StringW GetToolName(::GlobalNamespace::GRTool_GRToolType  toolType) ;

/// @brief Method GetToolPart, addr 0x58ef7f4, size 0x24, virtual false, abstract: false, final false
static inline ::GlobalNamespace::GRToolProgressionManager_ToolParts GetToolPart(::GlobalNamespace::GRTool_GRToolType  toolType) ;

static inline ::GlobalNamespace::GRUtils* New_ctor() ;

/// @brief Method .ctor, addr 0x58ef818, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRUtils(GRUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRUtils(GRUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2110};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GRUtils) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
