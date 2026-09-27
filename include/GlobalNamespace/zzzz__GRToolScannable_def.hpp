#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolScannable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRScannable_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GRToolScannable)
namespace GlobalNamespace {
class GRToolProgressionManager_ToolProgressionMetaData;
}
namespace GlobalNamespace {
class GRToolUpgradePiece;
}
namespace GlobalNamespace {
class GRTool;
}
namespace GlobalNamespace {
class GhostReactor;
}
// Forward declare root types
namespace GlobalNamespace {
class GRToolScannable;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRToolScannable*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRToolScannable*, "", "GRToolScannable");
// Dependencies GRScannable
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRToolScannable
class CORDL_TYPE GRToolScannable : public ::GlobalNamespace::GRScannable {
public:
// Declarations
/// @brief Field metadata, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_metadata, put=__cordl_internal_set_metadata)) ::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData*  metadata;

/// @brief Field tool, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_tool, put=__cordl_internal_set_tool)) ::UnityW<::GlobalNamespace::GRTool>  tool;

/// @brief Field upgradePiece, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_upgradePiece, put=__cordl_internal_set_upgradePiece)) ::UnityW<::GlobalNamespace::GRToolUpgradePiece>  upgradePiece;

/// @brief Method FetchMetadata, addr 0x58c6da0, size 0x10c, virtual false, abstract: false, final false
inline void FetchMetadata(::GlobalNamespace::GhostReactor*  reactor) ;

/// @brief Method GetAnnotationText, addr 0x58c6f84, size 0x6c, virtual true, abstract: false, final false
inline ::StringW GetAnnotationText(::GlobalNamespace::GhostReactor*  reactor) ;

/// @brief Method GetBodyText, addr 0x58c6f18, size 0x6c, virtual true, abstract: false, final false
inline ::StringW GetBodyText(::GlobalNamespace::GhostReactor*  reactor) ;

/// @brief Method GetTitleText, addr 0x58c6eac, size 0x6c, virtual true, abstract: false, final false
inline ::StringW GetTitleText(::GlobalNamespace::GhostReactor*  reactor) ;

static inline ::GlobalNamespace::GRToolScannable* New_ctor() ;

/// @brief Method Start, addr 0x58c6cb4, size 0xec, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData* const& __cordl_internal_get_metadata() const;

constexpr ::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData*& __cordl_internal_get_metadata() ;

constexpr ::UnityW<::GlobalNamespace::GRTool> const& __cordl_internal_get_tool() const;

constexpr ::UnityW<::GlobalNamespace::GRTool>& __cordl_internal_get_tool() ;

constexpr ::UnityW<::GlobalNamespace::GRToolUpgradePiece> const& __cordl_internal_get_upgradePiece() const;

constexpr ::UnityW<::GlobalNamespace::GRToolUpgradePiece>& __cordl_internal_get_upgradePiece() ;

constexpr void __cordl_internal_set_metadata(::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData*  value) ;

constexpr void __cordl_internal_set_tool(::UnityW<::GlobalNamespace::GRTool>  value) ;

constexpr void __cordl_internal_set_upgradePiece(::UnityW<::GlobalNamespace::GRToolUpgradePiece>  value) ;

/// @brief Method .ctor, addr 0x58c6ff0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRToolScannable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRToolScannable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRToolScannable(GRToolScannable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRToolScannable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRToolScannable(GRToolScannable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2082};

/// @brief Field tool, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRTool>  ___tool;

/// @brief Field upgradePiece, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRToolUpgradePiece>  ___upgradePiece;

/// @brief Field metadata, offset: 0x50, size: 0x8, def value: None
 ::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData*  ___metadata;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRToolScannable, ___tool) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolScannable, ___upgradePiece) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolScannable, ___metadata) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRToolScannable) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
