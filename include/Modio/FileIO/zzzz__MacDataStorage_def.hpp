#pragma once
// IWYU pragma private; include "Modio/FileIO/MacDataStorage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/FileIO/zzzz__BaseDataStorage_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MacDataStorage)
namespace GlobalNamespace {
struct MacDataStorage_UnixStatsFs;
}
// Forward declare root types
namespace Modio::FileIO {
class MacDataStorage;
}
// Write type traits
MARK_REF_T(::Modio::FileIO::MacDataStorage*);
DEFINE_IL2CPP_CLASS(::Modio::FileIO::MacDataStorage*, "Modio.FileIO", "MacDataStorage");
// Dependencies Modio.FileIO.BaseDataStorage
namespace Modio::FileIO {
// Is value type: false
// CS Name: Modio.FileIO.MacDataStorage
class CORDL_TYPE MacDataStorage : public ::Modio::FileIO::BaseDataStorage {
public:
// Declarations
using UnixStatsFs = ::GlobalNamespace::MacDataStorage_UnixStatsFs;

/// @brief Method GetAvailableFreeSpace, addr 0xa053b94, size 0x8, virtual true, abstract: false, final false
inline int64_t GetAvailableFreeSpace() ;

static inline ::Modio::FileIO::MacDataStorage* New_ctor() ;

/// @brief Method .ctor, addr 0xa053c34, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method statvfs, addr 0xa053b9c, size 0x98, virtual false, abstract: false, final false
static inline int16_t statvfs(::StringW  directory, ::by_ref<::GlobalNamespace::MacDataStorage_UnixStatsFs>  statsFs) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MacDataStorage() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MacDataStorage", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MacDataStorage(MacDataStorage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MacDataStorage", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MacDataStorage(MacDataStorage const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17675};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::FileIO::MacDataStorage) == 0x48, "Size mismatch!");

} // namespace end def Modio::FileIO
