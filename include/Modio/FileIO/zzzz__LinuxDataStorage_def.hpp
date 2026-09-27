#pragma once
// IWYU pragma private; include "Modio/FileIO/LinuxDataStorage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/FileIO/zzzz__BaseDataStorage_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LinuxDataStorage)
namespace GlobalNamespace {
struct LinuxDataStorage_UnixStatsFs;
}
// Forward declare root types
namespace Modio::FileIO {
class LinuxDataStorage;
}
// Write type traits
MARK_REF_T(::Modio::FileIO::LinuxDataStorage*);
DEFINE_IL2CPP_CLASS(::Modio::FileIO::LinuxDataStorage*, "Modio.FileIO", "LinuxDataStorage");
// Dependencies Modio.FileIO.BaseDataStorage
namespace Modio::FileIO {
// Is value type: false
// CS Name: Modio.FileIO.LinuxDataStorage
class CORDL_TYPE LinuxDataStorage : public ::Modio::FileIO::BaseDataStorage {
public:
// Declarations
using UnixStatsFs = ::GlobalNamespace::LinuxDataStorage_UnixStatsFs;

/// @brief Method GetAvailableFreeSpace, addr 0xa053a18, size 0xdc, virtual true, abstract: false, final false
inline int64_t GetAvailableFreeSpace() ;

static inline ::Modio::FileIO::LinuxDataStorage* New_ctor() ;

/// @brief Method .ctor, addr 0xa053b8c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method statvfs, addr 0xa053af4, size 0x98, virtual false, abstract: false, final false
static inline int16_t statvfs(::StringW  directory, ::by_ref<::GlobalNamespace::LinuxDataStorage_UnixStatsFs>  statsFs) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LinuxDataStorage() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LinuxDataStorage", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LinuxDataStorage(LinuxDataStorage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LinuxDataStorage", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LinuxDataStorage(LinuxDataStorage const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17673};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::FileIO::LinuxDataStorage) == 0x48, "Size mismatch!");

} // namespace end def Modio::FileIO
