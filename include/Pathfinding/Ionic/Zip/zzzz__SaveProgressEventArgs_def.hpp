#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/SaveProgressEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/Ionic/Zip/zzzz__ZipProgressEventArgs_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SaveProgressEventArgs)
namespace Pathfinding::Ionic::Zip {
class ZipEntry;
}
namespace Pathfinding::Ionic::Zip {
struct ZipProgressEventType;
}
// Forward declare root types
namespace Pathfinding::Ionic::Zip {
class SaveProgressEventArgs;
}
// Write type traits
MARK_REF_T(::Pathfinding::Ionic::Zip::SaveProgressEventArgs*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Ionic::Zip::SaveProgressEventArgs*, "Pathfinding.Ionic.Zip", "SaveProgressEventArgs");
// Dependencies Pathfinding.Ionic.Zip.ZipProgressEventArgs
namespace Pathfinding::Ionic::Zip {
// Is value type: false
// CS Name: Pathfinding.Ionic.Zip.SaveProgressEventArgs
class CORDL_TYPE SaveProgressEventArgs : public ::Pathfinding::Ionic::Zip::ZipProgressEventArgs {
public:
// Declarations
/// @brief Field _entriesSaved, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__entriesSaved, put=__cordl_internal_set__entriesSaved)) int32_t  _entriesSaved;

/// @brief Method ByteUpdate, addr 0xa68c314, size 0xa4, virtual false, abstract: false, final false
static inline ::Pathfinding::Ionic::Zip::SaveProgressEventArgs* ByteUpdate(::StringW  archiveName, ::Pathfinding::Ionic::Zip::ZipEntry*  entry, int64_t  bytesXferred, int64_t  totalBytes) ;

/// @brief Method Completed, addr 0xa68c414, size 0x5c, virtual false, abstract: false, final false
static inline ::Pathfinding::Ionic::Zip::SaveProgressEventArgs* Completed(::StringW  archiveName) ;

static inline ::Pathfinding::Ionic::Zip::SaveProgressEventArgs* New_ctor(::StringW  archiveName, bool  before, int32_t  entriesTotal, int32_t  entriesSaved, ::Pathfinding::Ionic::Zip::ZipEntry*  entry) ;

static inline ::Pathfinding::Ionic::Zip::SaveProgressEventArgs* New_ctor(::StringW  archiveName, ::Pathfinding::Ionic::Zip::ZipProgressEventType  flavor) ;

/// @brief Method Started, addr 0xa68c3b8, size 0x5c, virtual false, abstract: false, final false
static inline ::Pathfinding::Ionic::Zip::SaveProgressEventArgs* Started(::StringW  archiveName) ;

constexpr int32_t const& __cordl_internal_get__entriesSaved() const;

constexpr int32_t& __cordl_internal_get__entriesSaved() ;

constexpr void __cordl_internal_set__entriesSaved(int32_t  value) ;

/// @brief Method .ctor, addr 0xa68c2bc, size 0x54, virtual false, abstract: false, final false
inline void _ctor(::StringW  archiveName, bool  before, int32_t  entriesTotal, int32_t  entriesSaved, ::Pathfinding::Ionic::Zip::ZipEntry*  entry) ;

/// @brief Method .ctor, addr 0xa68c310, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::StringW  archiveName, ::Pathfinding::Ionic::Zip::ZipProgressEventType  flavor) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SaveProgressEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SaveProgressEventArgs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SaveProgressEventArgs(SaveProgressEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SaveProgressEventArgs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SaveProgressEventArgs(SaveProgressEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28145};

/// @brief Field _entriesSaved, offset: 0x40, size: 0x4, def value: None
 int32_t  ____entriesSaved;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Ionic::Zip::SaveProgressEventArgs, ____entriesSaved) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Ionic::Zip::SaveProgressEventArgs) == 0x48, "Size mismatch!");

} // namespace end def Pathfinding::Ionic::Zip
