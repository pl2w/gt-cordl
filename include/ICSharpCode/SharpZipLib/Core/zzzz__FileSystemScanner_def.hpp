#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Core/FileSystemScanner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(FileSystemScanner)
namespace ICSharpCode::SharpZipLib::Core {
class CompletedFileHandler;
}
namespace ICSharpCode::SharpZipLib::Core {
class DirectoryEventArgs;
}
namespace ICSharpCode::SharpZipLib::Core {
class DirectoryFailureHandler;
}
namespace ICSharpCode::SharpZipLib::Core {
class FileFailureHandler;
}
namespace ICSharpCode::SharpZipLib::Core {
class IScanFilter;
}
namespace ICSharpCode::SharpZipLib::Core {
class ProcessFileHandler;
}
namespace System {
template<typename TEventArgs>
class EventHandler_1;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Core {
class FileSystemScanner;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Core::FileSystemScanner*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Core::FileSystemScanner*, "ICSharpCode.SharpZipLib.Core", "FileSystemScanner");
// Dependencies System.Object
namespace ICSharpCode::SharpZipLib::Core {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Core.FileSystemScanner
class CORDL_TYPE FileSystemScanner : public ::System::Object {
public:
// Declarations
/// @brief Field CompletedFile, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_CompletedFile, put=__cordl_internal_set_CompletedFile)) ::ICSharpCode::SharpZipLib::Core::CompletedFileHandler*  CompletedFile;

/// @brief Field DirectoryFailure, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_DirectoryFailure, put=__cordl_internal_set_DirectoryFailure)) ::ICSharpCode::SharpZipLib::Core::DirectoryFailureHandler*  DirectoryFailure;

/// @brief Field FileFailure, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_FileFailure, put=__cordl_internal_set_FileFailure)) ::ICSharpCode::SharpZipLib::Core::FileFailureHandler*  FileFailure;

/// @brief Field ProcessDirectory, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_ProcessDirectory, put=__cordl_internal_set_ProcessDirectory)) ::System::EventHandler_1<::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs*>*  ProcessDirectory;

/// @brief Field ProcessFile, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ProcessFile, put=__cordl_internal_set_ProcessFile)) ::ICSharpCode::SharpZipLib::Core::ProcessFileHandler*  ProcessFile;

/// @brief Field alive_, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_alive_, put=__cordl_internal_set_alive_)) bool  alive_;

/// @brief Field directoryFilter_, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_directoryFilter_, put=__cordl_internal_set_directoryFilter_)) ::ICSharpCode::SharpZipLib::Core::IScanFilter*  directoryFilter_;

/// @brief Field fileFilter_, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_fileFilter_, put=__cordl_internal_set_fileFilter_)) ::ICSharpCode::SharpZipLib::Core::IScanFilter*  fileFilter_;

static inline ::ICSharpCode::SharpZipLib::Core::FileSystemScanner* New_ctor(::ICSharpCode::SharpZipLib::Core::IScanFilter*  fileFilter) ;

static inline ::ICSharpCode::SharpZipLib::Core::FileSystemScanner* New_ctor(::ICSharpCode::SharpZipLib::Core::IScanFilter*  fileFilter, ::ICSharpCode::SharpZipLib::Core::IScanFilter*  directoryFilter) ;

static inline ::ICSharpCode::SharpZipLib::Core::FileSystemScanner* New_ctor(::StringW  fileFilter, ::StringW  directoryFilter) ;

static inline ::ICSharpCode::SharpZipLib::Core::FileSystemScanner* New_ctor(::StringW  filter) ;

/// @brief Method OnCompleteFile, addr 0x9ffa910, size 0x90, virtual false, abstract: false, final false
inline void OnCompleteFile(::StringW  file) ;

/// @brief Method OnDirectoryFailure, addr 0x9ffa738, size 0xa0, virtual false, abstract: false, final false
inline bool OnDirectoryFailure(::StringW  directory, ::System::Exception*  e) ;

/// @brief Method OnFileFailure, addr 0x9ffa7d8, size 0xa8, virtual false, abstract: false, final false
inline bool OnFileFailure(::StringW  file, ::System::Exception*  e) ;

/// @brief Method OnProcessDirectory, addr 0x9ffa9a0, size 0x94, virtual false, abstract: false, final false
inline void OnProcessDirectory(::StringW  directory, bool  hasMatchingFiles) ;

/// @brief Method OnProcessFile, addr 0x9ffa880, size 0x90, virtual false, abstract: false, final false
inline void OnProcessFile(::StringW  file) ;

/// @brief Method Scan, addr 0x9ffaa34, size 0xc, virtual false, abstract: false, final false
inline void Scan(::StringW  directory, bool  recurse) ;

/// @brief Method ScanDir, addr 0x9ffaa40, size 0x498, virtual false, abstract: false, final false
inline void ScanDir(::StringW  directory, bool  recurse) ;

constexpr ::ICSharpCode::SharpZipLib::Core::CompletedFileHandler* const& __cordl_internal_get_CompletedFile() const;

constexpr ::ICSharpCode::SharpZipLib::Core::CompletedFileHandler*& __cordl_internal_get_CompletedFile() ;

constexpr ::ICSharpCode::SharpZipLib::Core::DirectoryFailureHandler* const& __cordl_internal_get_DirectoryFailure() const;

constexpr ::ICSharpCode::SharpZipLib::Core::DirectoryFailureHandler*& __cordl_internal_get_DirectoryFailure() ;

constexpr ::ICSharpCode::SharpZipLib::Core::FileFailureHandler* const& __cordl_internal_get_FileFailure() const;

constexpr ::ICSharpCode::SharpZipLib::Core::FileFailureHandler*& __cordl_internal_get_FileFailure() ;

constexpr ::System::EventHandler_1<::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs*>* const& __cordl_internal_get_ProcessDirectory() const;

constexpr ::System::EventHandler_1<::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs*>*& __cordl_internal_get_ProcessDirectory() ;

constexpr ::ICSharpCode::SharpZipLib::Core::ProcessFileHandler* const& __cordl_internal_get_ProcessFile() const;

constexpr ::ICSharpCode::SharpZipLib::Core::ProcessFileHandler*& __cordl_internal_get_ProcessFile() ;

constexpr bool const& __cordl_internal_get_alive_() const;

constexpr bool& __cordl_internal_get_alive_() ;

constexpr ::ICSharpCode::SharpZipLib::Core::IScanFilter* const& __cordl_internal_get_directoryFilter_() const;

constexpr ::ICSharpCode::SharpZipLib::Core::IScanFilter*& __cordl_internal_get_directoryFilter_() ;

constexpr ::ICSharpCode::SharpZipLib::Core::IScanFilter* const& __cordl_internal_get_fileFilter_() const;

constexpr ::ICSharpCode::SharpZipLib::Core::IScanFilter*& __cordl_internal_get_fileFilter_() ;

constexpr void __cordl_internal_set_CompletedFile(::ICSharpCode::SharpZipLib::Core::CompletedFileHandler*  value) ;

constexpr void __cordl_internal_set_DirectoryFailure(::ICSharpCode::SharpZipLib::Core::DirectoryFailureHandler*  value) ;

constexpr void __cordl_internal_set_FileFailure(::ICSharpCode::SharpZipLib::Core::FileFailureHandler*  value) ;

constexpr void __cordl_internal_set_ProcessDirectory(::System::EventHandler_1<::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs*>*  value) ;

constexpr void __cordl_internal_set_ProcessFile(::ICSharpCode::SharpZipLib::Core::ProcessFileHandler*  value) ;

constexpr void __cordl_internal_set_alive_(bool  value) ;

constexpr void __cordl_internal_set_directoryFilter_(::ICSharpCode::SharpZipLib::Core::IScanFilter*  value) ;

constexpr void __cordl_internal_set_fileFilter_(::ICSharpCode::SharpZipLib::Core::IScanFilter*  value) ;

/// @brief Method .ctor, addr 0x9ffa564, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::ICSharpCode::SharpZipLib::Core::IScanFilter*  fileFilter) ;

/// @brief Method .ctor, addr 0x9ffa594, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::ICSharpCode::SharpZipLib::Core::IScanFilter*  fileFilter, ::ICSharpCode::SharpZipLib::Core::IScanFilter*  directoryFilter) ;

/// @brief Method .ctor, addr 0x9ffa4c4, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::StringW  fileFilter, ::StringW  directoryFilter) ;

/// @brief Method .ctor, addr 0x9ffa3d4, size 0x78, virtual false, abstract: false, final false
inline void _ctor(::StringW  filter) ;

/// [CompilerGenerated]
/// @brief Method add_ProcessDirectory, addr 0x9ffa5d8, size 0xb0, virtual false, abstract: false, final false
inline void add_ProcessDirectory(::System::EventHandler_1<::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_ProcessDirectory, addr 0x9ffa688, size 0xb0, virtual false, abstract: false, final false
inline void remove_ProcessDirectory(::System::EventHandler_1<::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FileSystemScanner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FileSystemScanner", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FileSystemScanner(FileSystemScanner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FileSystemScanner", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FileSystemScanner(FileSystemScanner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17427};

/// [CompilerGenerated]
/// @brief Field ProcessDirectory, offset: 0x10, size: 0x8, def value: None
 ::System::EventHandler_1<::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs*>*  ___ProcessDirectory;

/// @brief Field ProcessFile, offset: 0x18, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Core::ProcessFileHandler*  ___ProcessFile;

/// @brief Field CompletedFile, offset: 0x20, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Core::CompletedFileHandler*  ___CompletedFile;

/// @brief Field DirectoryFailure, offset: 0x28, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Core::DirectoryFailureHandler*  ___DirectoryFailure;

/// @brief Field FileFailure, offset: 0x30, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Core::FileFailureHandler*  ___FileFailure;

/// @brief Field fileFilter_, offset: 0x38, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Core::IScanFilter*  ___fileFilter_;

/// @brief Field directoryFilter_, offset: 0x40, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Core::IScanFilter*  ___directoryFilter_;

/// @brief Field alive_, offset: 0x48, size: 0x1, def value: None
 bool  ___alive_;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Core::FileSystemScanner, ___ProcessDirectory) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Core::FileSystemScanner, ___ProcessFile) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Core::FileSystemScanner, ___CompletedFile) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Core::FileSystemScanner, ___DirectoryFailure) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Core::FileSystemScanner, ___FileFailure) == 0x30, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Core::FileSystemScanner, ___fileFilter_) == 0x38, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Core::FileSystemScanner, ___directoryFilter_) == 0x40, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Core::FileSystemScanner, ___alive_) == 0x48, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Core::FileSystemScanner) == 0x50, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Core
