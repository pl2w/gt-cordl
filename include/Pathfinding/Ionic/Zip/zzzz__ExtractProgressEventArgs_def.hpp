#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/ExtractProgressEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/Ionic/Zip/zzzz__ZipProgressEventArgs_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ExtractProgressEventArgs)
namespace Pathfinding::Ionic::Zip {
class ZipEntry;
}
namespace Pathfinding::Ionic::Zip {
struct ZipProgressEventType;
}
// Forward declare root types
namespace Pathfinding::Ionic::Zip {
class ExtractProgressEventArgs;
}
// Write type traits
MARK_REF_T(::Pathfinding::Ionic::Zip::ExtractProgressEventArgs*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Ionic::Zip::ExtractProgressEventArgs*, "Pathfinding.Ionic.Zip", "ExtractProgressEventArgs");
// Dependencies Pathfinding.Ionic.Zip.ZipProgressEventArgs
namespace Pathfinding::Ionic::Zip {
// Is value type: false
// CS Name: Pathfinding.Ionic.Zip.ExtractProgressEventArgs
class CORDL_TYPE ExtractProgressEventArgs : public ::Pathfinding::Ionic::Zip::ZipProgressEventArgs {
public:
// Declarations
/// @brief Field _target, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__target, put=__cordl_internal_set__target)) ::StringW  _target;

/// @brief Method AfterExtractEntry, addr 0xa68c5c0, size 0xa4, virtual false, abstract: false, final false
static inline ::Pathfinding::Ionic::Zip::ExtractProgressEventArgs* AfterExtractEntry(::StringW  archiveName, ::Pathfinding::Ionic::Zip::ZipEntry*  entry, ::StringW  extractLocation) ;

/// @brief Method BeforeExtractEntry, addr 0xa68c478, size 0xa4, virtual false, abstract: false, final false
static inline ::Pathfinding::Ionic::Zip::ExtractProgressEventArgs* BeforeExtractEntry(::StringW  archiveName, ::Pathfinding::Ionic::Zip::ZipEntry*  entry, ::StringW  extractLocation) ;

/// @brief Method ByteUpdate, addr 0xa68c664, size 0xa4, virtual false, abstract: false, final false
static inline ::Pathfinding::Ionic::Zip::ExtractProgressEventArgs* ByteUpdate(::StringW  archiveName, ::Pathfinding::Ionic::Zip::ZipEntry*  entry, int64_t  bytesWritten, int64_t  totalBytes) ;

/// @brief Method ExtractExisting, addr 0xa68c51c, size 0xa4, virtual false, abstract: false, final false
static inline ::Pathfinding::Ionic::Zip::ExtractProgressEventArgs* ExtractExisting(::StringW  archiveName, ::Pathfinding::Ionic::Zip::ZipEntry*  entry, ::StringW  extractLocation) ;

static inline ::Pathfinding::Ionic::Zip::ExtractProgressEventArgs* New_ctor() ;

static inline ::Pathfinding::Ionic::Zip::ExtractProgressEventArgs* New_ctor(::StringW  archiveName, ::Pathfinding::Ionic::Zip::ZipProgressEventType  flavor) ;

constexpr ::StringW const& __cordl_internal_get__target() const;

constexpr ::StringW& __cordl_internal_get__target() ;

constexpr void __cordl_internal_set__target(::StringW  value) ;

/// @brief Method .ctor, addr 0xa68c474, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa68c470, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::StringW  archiveName, ::Pathfinding::Ionic::Zip::ZipProgressEventType  flavor) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExtractProgressEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExtractProgressEventArgs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ExtractProgressEventArgs(ExtractProgressEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExtractProgressEventArgs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExtractProgressEventArgs(ExtractProgressEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28146};

/// @brief Field _target, offset: 0x40, size: 0x8, def value: None
 ::StringW  ____target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Ionic::Zip::ExtractProgressEventArgs, ____target) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Ionic::Zip::ExtractProgressEventArgs) == 0x48, "Size mismatch!");

} // namespace end def Pathfinding::Ionic::Zip
