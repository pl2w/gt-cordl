#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/AddProgressEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/Ionic/Zip/zzzz__ZipProgressEventArgs_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AddProgressEventArgs)
namespace Pathfinding::Ionic::Zip {
class ZipEntry;
}
namespace Pathfinding::Ionic::Zip {
struct ZipProgressEventType;
}
// Forward declare root types
namespace Pathfinding::Ionic::Zip {
class AddProgressEventArgs;
}
// Write type traits
MARK_REF_T(::Pathfinding::Ionic::Zip::AddProgressEventArgs*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Ionic::Zip::AddProgressEventArgs*, "Pathfinding.Ionic.Zip", "AddProgressEventArgs");
// Dependencies Pathfinding.Ionic.Zip.ZipProgressEventArgs
namespace Pathfinding::Ionic::Zip {
// Is value type: false
// CS Name: Pathfinding.Ionic.Zip.AddProgressEventArgs
class CORDL_TYPE AddProgressEventArgs : public ::Pathfinding::Ionic::Zip::ZipProgressEventArgs {
public:
// Declarations
/// @brief Method AfterEntry, addr 0xa68c234, size 0x88, virtual false, abstract: false, final false
static inline ::Pathfinding::Ionic::Zip::AddProgressEventArgs* AfterEntry(::StringW  archiveName, ::Pathfinding::Ionic::Zip::ZipEntry*  entry, int32_t  entriesTotal) ;

static inline ::Pathfinding::Ionic::Zip::AddProgressEventArgs* New_ctor(::StringW  archiveName, ::Pathfinding::Ionic::Zip::ZipProgressEventType  flavor) ;

/// @brief Method .ctor, addr 0xa68c230, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::StringW  archiveName, ::Pathfinding::Ionic::Zip::ZipProgressEventType  flavor) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AddProgressEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AddProgressEventArgs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AddProgressEventArgs(AddProgressEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AddProgressEventArgs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AddProgressEventArgs(AddProgressEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28144};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::Ionic::Zip::AddProgressEventArgs) == 0x40, "Size mismatch!");

} // namespace end def Pathfinding::Ionic::Zip
