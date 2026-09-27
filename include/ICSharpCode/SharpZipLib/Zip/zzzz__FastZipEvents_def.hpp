#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/FastZipEvents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(FastZipEvents)
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
class ProcessFileHandler;
}
namespace ICSharpCode::SharpZipLib::Core {
class ProgressHandler;
}
namespace System {
template<typename TEventArgs>
class EventHandler_1;
}
namespace System {
class Exception;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Zip {
class FastZipEvents;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::FastZipEvents*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::FastZipEvents*, "ICSharpCode.SharpZipLib.Zip", "FastZipEvents");
// Dependencies System.Object, System.TimeSpan
namespace ICSharpCode::SharpZipLib::Zip {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.FastZipEvents
class CORDL_TYPE FastZipEvents : public ::System::Object {
public:
// Declarations
/// @brief Field CompletedFile, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_CompletedFile, put=__cordl_internal_set_CompletedFile)) ::ICSharpCode::SharpZipLib::Core::CompletedFileHandler*  CompletedFile;

/// @brief Field DirectoryFailure, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_DirectoryFailure, put=__cordl_internal_set_DirectoryFailure)) ::ICSharpCode::SharpZipLib::Core::DirectoryFailureHandler*  DirectoryFailure;

/// @brief Field FileFailure, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_FileFailure, put=__cordl_internal_set_FileFailure)) ::ICSharpCode::SharpZipLib::Core::FileFailureHandler*  FileFailure;

/// @brief Field ProcessDirectory, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_ProcessDirectory, put=__cordl_internal_set_ProcessDirectory)) ::System::EventHandler_1<::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs*>*  ProcessDirectory;

/// @brief Field ProcessFile, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ProcessFile, put=__cordl_internal_set_ProcessFile)) ::ICSharpCode::SharpZipLib::Core::ProcessFileHandler*  ProcessFile;

/// @brief Field Progress, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Progress, put=__cordl_internal_set_Progress)) ::ICSharpCode::SharpZipLib::Core::ProgressHandler*  Progress;

 __declspec(property(get=get_ProgressInterval, put=set_ProgressInterval)) ::System::TimeSpan  ProgressInterval;

/// @brief Field progressInterval_, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_progressInterval_, put=__cordl_internal_set_progressInterval_)) ::System::TimeSpan  progressInterval_;

static inline ::ICSharpCode::SharpZipLib::Zip::FastZipEvents* New_ctor() ;

/// @brief Method OnCompletedFile, addr 0x9f7b938, size 0xa0, virtual false, abstract: false, final false
inline bool OnCompletedFile(::StringW  file) ;

/// @brief Method OnDirectoryFailure, addr 0x9f7b748, size 0xa8, virtual false, abstract: false, final false
inline bool OnDirectoryFailure(::StringW  directory, ::System::Exception*  e) ;

/// @brief Method OnFileFailure, addr 0x9f7b7f0, size 0xa8, virtual false, abstract: false, final false
inline bool OnFileFailure(::StringW  file, ::System::Exception*  e) ;

/// @brief Method OnProcessDirectory, addr 0x9f7b9d8, size 0xa8, virtual false, abstract: false, final false
inline bool OnProcessDirectory(::StringW  directory, bool  hasMatchingFiles) ;

/// @brief Method OnProcessFile, addr 0x9f7b898, size 0xa0, virtual false, abstract: false, final false
inline bool OnProcessFile(::StringW  file) ;

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

constexpr ::ICSharpCode::SharpZipLib::Core::ProgressHandler* const& __cordl_internal_get_Progress() const;

constexpr ::ICSharpCode::SharpZipLib::Core::ProgressHandler*& __cordl_internal_get_Progress() ;

constexpr ::System::TimeSpan const& __cordl_internal_get_progressInterval_() const;

constexpr ::System::TimeSpan& __cordl_internal_get_progressInterval_() ;

constexpr void __cordl_internal_set_CompletedFile(::ICSharpCode::SharpZipLib::Core::CompletedFileHandler*  value) ;

constexpr void __cordl_internal_set_DirectoryFailure(::ICSharpCode::SharpZipLib::Core::DirectoryFailureHandler*  value) ;

constexpr void __cordl_internal_set_FileFailure(::ICSharpCode::SharpZipLib::Core::FileFailureHandler*  value) ;

constexpr void __cordl_internal_set_ProcessDirectory(::System::EventHandler_1<::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs*>*  value) ;

constexpr void __cordl_internal_set_ProcessFile(::ICSharpCode::SharpZipLib::Core::ProcessFileHandler*  value) ;

constexpr void __cordl_internal_set_Progress(::ICSharpCode::SharpZipLib::Core::ProgressHandler*  value) ;

constexpr void __cordl_internal_set_progressInterval_(::System::TimeSpan  value) ;

/// @brief Method .ctor, addr 0x9f7ba90, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_ProcessDirectory, addr 0x9f7b5e8, size 0xb0, virtual false, abstract: false, final false
inline void add_ProcessDirectory(::System::EventHandler_1<::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs*>*  value) ;

/// @brief Method get_ProgressInterval, addr 0x9f7ba80, size 0x8, virtual false, abstract: false, final false
inline ::System::TimeSpan get_ProgressInterval() ;

/// [CompilerGenerated]
/// @brief Method remove_ProcessDirectory, addr 0x9f7b698, size 0xb0, virtual false, abstract: false, final false
inline void remove_ProcessDirectory(::System::EventHandler_1<::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs*>*  value) ;

/// @brief Method set_ProgressInterval, addr 0x9f7ba88, size 0x8, virtual false, abstract: false, final false
inline void set_ProgressInterval(::System::TimeSpan  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FastZipEvents() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FastZipEvents", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FastZipEvents(FastZipEvents && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FastZipEvents", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FastZipEvents(FastZipEvents const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17311};

/// [CompilerGenerated]
/// @brief Field ProcessDirectory, offset: 0x10, size: 0x8, def value: None
 ::System::EventHandler_1<::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs*>*  ___ProcessDirectory;

/// @brief Field ProcessFile, offset: 0x18, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Core::ProcessFileHandler*  ___ProcessFile;

/// @brief Field Progress, offset: 0x20, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Core::ProgressHandler*  ___Progress;

/// @brief Field CompletedFile, offset: 0x28, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Core::CompletedFileHandler*  ___CompletedFile;

/// @brief Field DirectoryFailure, offset: 0x30, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Core::DirectoryFailureHandler*  ___DirectoryFailure;

/// @brief Field FileFailure, offset: 0x38, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Core::FileFailureHandler*  ___FileFailure;

/// @brief Field progressInterval_, offset: 0x40, size: 0x8, def value: None
 ::System::TimeSpan  ___progressInterval_;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::FastZipEvents, ___ProcessDirectory) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::FastZipEvents, ___ProcessFile) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::FastZipEvents, ___Progress) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::FastZipEvents, ___CompletedFile) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::FastZipEvents, ___DirectoryFailure) == 0x30, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::FastZipEvents, ___FileFailure) == 0x38, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::FastZipEvents, ___progressInterval_) == 0x40, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::FastZipEvents) == 0x48, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip
