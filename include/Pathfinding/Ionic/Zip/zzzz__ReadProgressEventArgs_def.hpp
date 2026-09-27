#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/ReadProgressEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/Ionic/Zip/zzzz__ZipProgressEventArgs_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReadProgressEventArgs)
namespace Pathfinding::Ionic::Zip {
class ZipEntry;
}
namespace Pathfinding::Ionic::Zip {
struct ZipProgressEventType;
}
// Forward declare root types
namespace Pathfinding::Ionic::Zip {
class ReadProgressEventArgs;
}
// Write type traits
MARK_REF_T(::Pathfinding::Ionic::Zip::ReadProgressEventArgs*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Ionic::Zip::ReadProgressEventArgs*, "Pathfinding.Ionic.Zip", "ReadProgressEventArgs");
// Dependencies Pathfinding.Ionic.Zip.ZipProgressEventArgs
namespace Pathfinding::Ionic::Zip {
// Is value type: false
// CS Name: Pathfinding.Ionic.Zip.ReadProgressEventArgs
class CORDL_TYPE ReadProgressEventArgs : public ::Pathfinding::Ionic::Zip::ZipProgressEventArgs {
public:
// Declarations
/// @brief Method After, addr 0xa68c05c, size 0x88, virtual false, abstract: false, final false
static inline ::Pathfinding::Ionic::Zip::ReadProgressEventArgs* After(::StringW  archiveName, ::Pathfinding::Ionic::Zip::ZipEntry*  entry, int32_t  entriesTotal) ;

/// @brief Method Before, addr 0xa68bfe8, size 0x74, virtual false, abstract: false, final false
static inline ::Pathfinding::Ionic::Zip::ReadProgressEventArgs* Before(::StringW  archiveName, int32_t  entriesTotal) ;

/// @brief Method ByteUpdate, addr 0xa68c140, size 0x94, virtual false, abstract: false, final false
static inline ::Pathfinding::Ionic::Zip::ReadProgressEventArgs* ByteUpdate(::StringW  archiveName, ::Pathfinding::Ionic::Zip::ZipEntry*  entry, int64_t  bytesXferred, int64_t  totalBytes) ;

/// @brief Method Completed, addr 0xa68c1d4, size 0x5c, virtual false, abstract: false, final false
static inline ::Pathfinding::Ionic::Zip::ReadProgressEventArgs* Completed(::StringW  archiveName) ;

static inline ::Pathfinding::Ionic::Zip::ReadProgressEventArgs* New_ctor(::StringW  archiveName, ::Pathfinding::Ionic::Zip::ZipProgressEventType  flavor) ;

/// @brief Method Started, addr 0xa68c0e4, size 0x5c, virtual false, abstract: false, final false
static inline ::Pathfinding::Ionic::Zip::ReadProgressEventArgs* Started(::StringW  archiveName) ;

/// @brief Method .ctor, addr 0xa68bfe4, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::StringW  archiveName, ::Pathfinding::Ionic::Zip::ZipProgressEventType  flavor) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReadProgressEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReadProgressEventArgs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReadProgressEventArgs(ReadProgressEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReadProgressEventArgs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReadProgressEventArgs(ReadProgressEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28143};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::Ionic::Zip::ReadProgressEventArgs) == 0x40, "Size mismatch!");

} // namespace end def Pathfinding::Ionic::Zip
