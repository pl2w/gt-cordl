#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/ZipProgressEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/Ionic/Zip/zzzz__ZipProgressEventType_def.hpp"
#include "System/zzzz__EventArgs_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ZipProgressEventArgs)
namespace Pathfinding::Ionic::Zip {
class ZipEntry;
}
namespace Pathfinding::Ionic::Zip {
struct ZipProgressEventType;
}
// Forward declare root types
namespace Pathfinding::Ionic::Zip {
class ZipProgressEventArgs;
}
// Write type traits
MARK_REF_T(::Pathfinding::Ionic::Zip::ZipProgressEventArgs*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Ionic::Zip::ZipProgressEventArgs*, "Pathfinding.Ionic.Zip", "ZipProgressEventArgs");
// Dependencies Pathfinding.Ionic.Zip.ZipProgressEventType, System.EventArgs
namespace Pathfinding::Ionic::Zip {
// Is value type: false
// CS Name: Pathfinding.Ionic.Zip.ZipProgressEventArgs
class CORDL_TYPE ZipProgressEventArgs : public ::System::EventArgs {
public:
// Declarations
 __declspec(property(put=set_ArchiveName)) ::StringW  ArchiveName;

 __declspec(property(put=set_BytesTransferred)) int64_t  BytesTransferred;

 __declspec(property(get=get_Cancel)) bool  Cancel;

 __declspec(property(put=set_CurrentEntry)) ::Pathfinding::Ionic::Zip::ZipEntry*  CurrentEntry;

 __declspec(property(put=set_EntriesTotal)) int32_t  EntriesTotal;

 __declspec(property(put=set_EventType)) ::Pathfinding::Ionic::Zip::ZipProgressEventType  EventType;

 __declspec(property(put=set_TotalBytesToTransfer)) int64_t  TotalBytesToTransfer;

/// @brief Field _archiveName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__archiveName, put=__cordl_internal_set__archiveName)) ::StringW  _archiveName;

/// @brief Field _bytesTransferred, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__bytesTransferred, put=__cordl_internal_set__bytesTransferred)) int64_t  _bytesTransferred;

/// @brief Field _cancel, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get__cancel, put=__cordl_internal_set__cancel)) bool  _cancel;

/// @brief Field _entriesTotal, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__entriesTotal, put=__cordl_internal_set__entriesTotal)) int32_t  _entriesTotal;

/// @brief Field _flavor, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__flavor, put=__cordl_internal_set__flavor)) ::Pathfinding::Ionic::Zip::ZipProgressEventType  _flavor;

/// @brief Field _latestEntry, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__latestEntry, put=__cordl_internal_set__latestEntry)) ::Pathfinding::Ionic::Zip::ZipEntry*  _latestEntry;

/// @brief Field _totalBytesToTransfer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__totalBytesToTransfer, put=__cordl_internal_set__totalBytesToTransfer)) int64_t  _totalBytesToTransfer;

static inline ::Pathfinding::Ionic::Zip::ZipProgressEventArgs* New_ctor() ;

static inline ::Pathfinding::Ionic::Zip::ZipProgressEventArgs* New_ctor(::StringW  archiveName, ::Pathfinding::Ionic::Zip::ZipProgressEventType  flavor) ;

constexpr ::StringW const& __cordl_internal_get__archiveName() const;

constexpr ::StringW& __cordl_internal_get__archiveName() ;

constexpr int64_t const& __cordl_internal_get__bytesTransferred() const;

constexpr int64_t& __cordl_internal_get__bytesTransferred() ;

constexpr bool const& __cordl_internal_get__cancel() const;

constexpr bool& __cordl_internal_get__cancel() ;

constexpr int32_t const& __cordl_internal_get__entriesTotal() const;

constexpr int32_t& __cordl_internal_get__entriesTotal() ;

constexpr ::Pathfinding::Ionic::Zip::ZipProgressEventType const& __cordl_internal_get__flavor() const;

constexpr ::Pathfinding::Ionic::Zip::ZipProgressEventType& __cordl_internal_get__flavor() ;

constexpr ::Pathfinding::Ionic::Zip::ZipEntry* const& __cordl_internal_get__latestEntry() const;

constexpr ::Pathfinding::Ionic::Zip::ZipEntry*& __cordl_internal_get__latestEntry() ;

constexpr int64_t const& __cordl_internal_get__totalBytesToTransfer() const;

constexpr int64_t& __cordl_internal_get__totalBytesToTransfer() ;

constexpr void __cordl_internal_set__archiveName(::StringW  value) ;

constexpr void __cordl_internal_set__bytesTransferred(int64_t  value) ;

constexpr void __cordl_internal_set__cancel(bool  value) ;

constexpr void __cordl_internal_set__entriesTotal(int32_t  value) ;

constexpr void __cordl_internal_set__flavor(::Pathfinding::Ionic::Zip::ZipProgressEventType  value) ;

constexpr void __cordl_internal_set__latestEntry(::Pathfinding::Ionic::Zip::ZipEntry*  value) ;

constexpr void __cordl_internal_set__totalBytesToTransfer(int64_t  value) ;

/// @brief Method .ctor, addr 0xa68bed4, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa68bf2c, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::StringW  archiveName, ::Pathfinding::Ionic::Zip::ZipProgressEventType  flavor) ;

/// @brief Method get_Cancel, addr 0xa68bfbc, size 0x8, virtual false, abstract: false, final false
inline bool get_Cancel() ;

/// @brief Method set_ArchiveName, addr 0xa68bfcc, size 0x8, virtual false, abstract: false, final false
inline void set_ArchiveName(::StringW  value) ;

/// @brief Method set_BytesTransferred, addr 0xa68bfd4, size 0x8, virtual false, abstract: false, final false
inline void set_BytesTransferred(int64_t  value) ;

/// @brief Method set_CurrentEntry, addr 0xa68bfb4, size 0x8, virtual false, abstract: false, final false
inline void set_CurrentEntry(::Pathfinding::Ionic::Zip::ZipEntry*  value) ;

/// @brief Method set_EntriesTotal, addr 0xa68bfac, size 0x8, virtual false, abstract: false, final false
inline void set_EntriesTotal(int32_t  value) ;

/// @brief Method set_EventType, addr 0xa68bfc4, size 0x8, virtual false, abstract: false, final false
inline void set_EventType(::Pathfinding::Ionic::Zip::ZipProgressEventType  value) ;

/// @brief Method set_TotalBytesToTransfer, addr 0xa68bfdc, size 0x8, virtual false, abstract: false, final false
inline void set_TotalBytesToTransfer(int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZipProgressEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZipProgressEventArgs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZipProgressEventArgs(ZipProgressEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZipProgressEventArgs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZipProgressEventArgs(ZipProgressEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28142};

/// @brief Field _entriesTotal, offset: 0x10, size: 0x4, def value: None
 int32_t  ____entriesTotal;

/// @brief Field _cancel, offset: 0x14, size: 0x1, def value: None
 bool  ____cancel;

/// @brief Field _latestEntry, offset: 0x18, size: 0x8, def value: None
 ::Pathfinding::Ionic::Zip::ZipEntry*  ____latestEntry;

/// @brief Field _flavor, offset: 0x20, size: 0x4, def value: None
 ::Pathfinding::Ionic::Zip::ZipProgressEventType  ____flavor;

/// @brief Field _archiveName, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____archiveName;

/// @brief Field _bytesTransferred, offset: 0x30, size: 0x8, def value: None
 int64_t  ____bytesTransferred;

/// @brief Field _totalBytesToTransfer, offset: 0x38, size: 0x8, def value: None
 int64_t  ____totalBytesToTransfer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipProgressEventArgs, ____entriesTotal) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipProgressEventArgs, ____cancel) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipProgressEventArgs, ____latestEntry) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipProgressEventArgs, ____flavor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipProgressEventArgs, ____archiveName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipProgressEventArgs, ____bytesTransferred) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipProgressEventArgs, ____totalBytesToTransfer) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Ionic::Zip::ZipProgressEventArgs) == 0x40, "Size mismatch!");

} // namespace end def Pathfinding::Ionic::Zip
