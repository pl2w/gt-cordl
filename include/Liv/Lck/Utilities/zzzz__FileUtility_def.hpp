#pragma once
// IWYU pragma private; include "Liv/Lck/Utilities/FileUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(FileUtility)
namespace GlobalNamespace {
struct FileUtility__CopyToGallery_d__1;
}
namespace GlobalNamespace {
struct FileUtility__DeleteMatchingFilesAsync_d__6;
}
namespace GlobalNamespace {
struct __c__DisplayClass1_0_FileUtility___CopyToGallery_g__WrappedMediaSaveCallback_0_d;
}
namespace Liv::Lck::Utilities {
class FileUtility___c__DisplayClass1_0;
}
namespace Liv::Lck::Utilities {
class FileUtility___c__DisplayClass1_1;
}
namespace Liv::Lck::Utilities {
class FileUtility___c__DisplayClass6_0;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
// Forward declare root types
namespace Liv::Lck::Utilities {
class FileUtility;
}
namespace Liv::Lck::Utilities {
class FileUtility___c__DisplayClass1_0;
}
namespace Liv::Lck::Utilities {
class FileUtility___c__DisplayClass1_1;
}
namespace Liv::Lck::Utilities {
class FileUtility___c__DisplayClass6_0;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Utilities::FileUtility*);
MARK_REF_T(::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_0*);
MARK_REF_T(::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_1*);
MARK_REF_T(::Liv::Lck::Utilities::FileUtility___c__DisplayClass6_0*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Utilities::FileUtility*, "Liv.Lck.Utilities", "FileUtility");
DEFINE_IL2CPP_CLASS(::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_0*, "Liv.Lck.Utilities", "FileUtility/<>c__DisplayClass1_0");
DEFINE_IL2CPP_CLASS(::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_1*, "Liv.Lck.Utilities", "FileUtility/<>c__DisplayClass1_1");
DEFINE_IL2CPP_CLASS(::Liv::Lck::Utilities::FileUtility___c__DisplayClass6_0*, "Liv.Lck.Utilities", "FileUtility/<>c__DisplayClass6_0");
// Dependencies System.Object
namespace Liv::Lck::Utilities {
// Is value type: false
// CS Name: Liv.Lck.Utilities.FileUtility
class CORDL_TYPE FileUtility : public ::System::Object {
public:
// Declarations
using _CopyToGallery_d__1 = ::GlobalNamespace::FileUtility__CopyToGallery_d__1;

using _DeleteMatchingFilesAsync_d__6 = ::GlobalNamespace::FileUtility__DeleteMatchingFilesAsync_d__6;

using __c__DisplayClass1_0 = ::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_0;

using __c__DisplayClass1_1 = ::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_1;

using __c__DisplayClass6_0 = ::Liv::Lck::Utilities::FileUtility___c__DisplayClass6_0;

/// [AsyncStateMachine(typeof(Liv.Lck.Utilities.FileUtility::<CopyToGallery>d__1))]
/// @brief Method CopyToGallery, addr 0x9d62cbc, size 0x110, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* CopyToGallery(::StringW  sourceFilePath, ::StringW  albumName, ::System::Action_2<bool,::StringW>*  callback) ;

/// [AsyncStateMachine(typeof(Liv.Lck.Utilities.FileUtility::<DeleteMatchingFilesAsync>d__6))]
/// @brief Method DeleteMatchingFilesAsync, addr 0x9d6c674, size 0xd8, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* DeleteMatchingFilesAsync(::StringW  filePath) ;

/// @brief Method GenerateEchoFilename, addr 0x9d6c460, size 0x194, virtual false, abstract: false, final false
static inline ::StringW GenerateEchoFilename(::StringW  extension) ;

/// @brief Method GenerateFilename, addr 0x9d6c2cc, size 0x194, virtual false, abstract: false, final false
static inline ::StringW GenerateFilename(::StringW  extension) ;

/// @brief Method IsEchoFile, addr 0x9d6c5f4, size 0x80, virtual false, abstract: false, final false
static inline bool IsEchoFile(::StringW  filePath) ;

/// @brief Method IsFileLocked, addr 0x9d62b38, size 0x184, virtual false, abstract: false, final false
static inline bool IsFileLocked(::StringW  filePath) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FileUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FileUtility", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FileUtility(FileUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FileUtility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FileUtility(FileUtility const& ) = delete;

/// @brief Field EchoFileMarker offset 0xffffffff size 0x8
static constexpr ::ConstString  EchoFileMarker{u"_Echo_"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25002};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::Utilities::FileUtility) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck::Utilities
// [CompilerGenerated]
// Dependencies System.Object
namespace Liv::Lck::Utilities {
// Is value type: false
// CS Name: Liv.Lck.Utilities.FileUtility/<>c__DisplayClass6_0
class CORDL_TYPE FileUtility___c__DisplayClass6_0 : public ::System::Object {
public:
// Declarations
/// @brief Field fileExtension, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_fileExtension, put=__cordl_internal_set_fileExtension)) ::StringW  fileExtension;

/// @brief Field folderPath, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_folderPath, put=__cordl_internal_set_folderPath)) ::StringW  folderPath;

/// @brief Field sourceIsEcho, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_sourceIsEcho, put=__cordl_internal_set_sourceIsEcho)) bool  sourceIsEcho;

static inline ::Liv::Lck::Utilities::FileUtility___c__DisplayClass6_0* New_ctor() ;

/// @brief Method <DeleteMatchingFilesAsync>b__0, addr 0x9d6ca48, size 0x230, virtual false, abstract: false, final false
inline void _DeleteMatchingFilesAsync_b__0() ;

constexpr ::StringW const& __cordl_internal_get_fileExtension() const;

constexpr ::StringW& __cordl_internal_get_fileExtension() ;

constexpr ::StringW const& __cordl_internal_get_folderPath() const;

constexpr ::StringW& __cordl_internal_get_folderPath() ;

constexpr bool const& __cordl_internal_get_sourceIsEcho() const;

constexpr bool& __cordl_internal_get_sourceIsEcho() ;

constexpr void __cordl_internal_set_fileExtension(::StringW  value) ;

constexpr void __cordl_internal_set_folderPath(::StringW  value) ;

constexpr void __cordl_internal_set_sourceIsEcho(bool  value) ;

/// @brief Method .ctor, addr 0x9d6ca40, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FileUtility___c__DisplayClass6_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FileUtility___c__DisplayClass6_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FileUtility___c__DisplayClass6_0(FileUtility___c__DisplayClass6_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FileUtility___c__DisplayClass6_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FileUtility___c__DisplayClass6_0(FileUtility___c__DisplayClass6_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24999};

/// @brief Field folderPath, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___folderPath;

/// @brief Field fileExtension, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___fileExtension;

/// @brief Field sourceIsEcho, offset: 0x20, size: 0x1, def value: None
 bool  ___sourceIsEcho;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Utilities::FileUtility___c__DisplayClass6_0, ___folderPath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Utilities::FileUtility___c__DisplayClass6_0, ___fileExtension) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Utilities::FileUtility___c__DisplayClass6_0, ___sourceIsEcho) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Utilities::FileUtility___c__DisplayClass6_0) == 0x28, "Size mismatch!");

} // namespace end def Liv::Lck::Utilities
// [CompilerGenerated]
// Dependencies System.Object
namespace Liv::Lck::Utilities {
// Is value type: false
// CS Name: Liv.Lck.Utilities.FileUtility/<>c__DisplayClass1_1
class CORDL_TYPE FileUtility___c__DisplayClass1_1 : public ::System::Object {
public:
// Declarations
/// @brief Field CS$<>8__locals1, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CS$__8__locals1, put=__cordl_internal_set_CS$__8__locals1)) ::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_0*  CS$__8__locals1;

/// @brief Field destinationFilePath, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_destinationFilePath, put=__cordl_internal_set_destinationFilePath)) ::StringW  destinationFilePath;

static inline ::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_1* New_ctor() ;

/// @brief Method <CopyToGallery>b__1, addr 0x9d6ca18, size 0x28, virtual false, abstract: false, final false
inline void _CopyToGallery_b__1() ;

constexpr ::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_0* const& __cordl_internal_get_CS$__8__locals1() const;

constexpr ::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_0*& __cordl_internal_get_CS$__8__locals1() ;

constexpr ::StringW const& __cordl_internal_get_destinationFilePath() const;

constexpr ::StringW& __cordl_internal_get_destinationFilePath() ;

constexpr void __cordl_internal_set_CS$__8__locals1(::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_0*  value) ;

constexpr void __cordl_internal_set_destinationFilePath(::StringW  value) ;

/// @brief Method .ctor, addr 0x9d6ca10, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FileUtility___c__DisplayClass1_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FileUtility___c__DisplayClass1_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FileUtility___c__DisplayClass1_1(FileUtility___c__DisplayClass1_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FileUtility___c__DisplayClass1_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FileUtility___c__DisplayClass1_1(FileUtility___c__DisplayClass1_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24998};

/// @brief Field destinationFilePath, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___destinationFilePath;

/// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
 ::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_0*  ___CS$__8__locals1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_1, ___destinationFilePath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_1) == 0x20, "Size mismatch!");

} // namespace end def Liv::Lck::Utilities
// [CompilerGenerated]
// Dependencies System.Object
namespace Liv::Lck::Utilities {
// Is value type: false
// CS Name: Liv.Lck.Utilities.FileUtility/<>c__DisplayClass1_0
class CORDL_TYPE FileUtility___c__DisplayClass1_0 : public ::System::Object {
public:
// Declarations
using __CopyToGallery_g__WrappedMediaSaveCallback_0_d = ::GlobalNamespace::__c__DisplayClass1_0_FileUtility___CopyToGallery_g__WrappedMediaSaveCallback_0_d;

/// @brief Field callback, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::System::Action_2<bool,::StringW>*  callback;

/// @brief Field sourceFilePath, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_sourceFilePath, put=__cordl_internal_set_sourceFilePath)) ::StringW  sourceFilePath;

static inline ::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_0* New_ctor() ;

/// [AsyncStateMachine(typeof(Liv.Lck.Utilities.FileUtility::<>c__DisplayClass1_0::<<CopyToGallery>g__WrappedMediaSaveCallback|0>d))]
/// @brief Method <CopyToGallery>g__WrappedMediaSaveCallback|0, addr 0x9d6c754, size 0xd0, virtual false, abstract: false, final false
inline void _CopyToGallery_g__WrappedMediaSaveCallback_0(bool  success, ::StringW  path) ;

constexpr ::System::Action_2<bool,::StringW>* const& __cordl_internal_get_callback() const;

constexpr ::System::Action_2<bool,::StringW>*& __cordl_internal_get_callback() ;

constexpr ::StringW const& __cordl_internal_get_sourceFilePath() const;

constexpr ::StringW& __cordl_internal_get_sourceFilePath() ;

constexpr void __cordl_internal_set_callback(::System::Action_2<bool,::StringW>*  value) ;

constexpr void __cordl_internal_set_sourceFilePath(::StringW  value) ;

/// @brief Method .ctor, addr 0x9d6c74c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FileUtility___c__DisplayClass1_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FileUtility___c__DisplayClass1_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FileUtility___c__DisplayClass1_0(FileUtility___c__DisplayClass1_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FileUtility___c__DisplayClass1_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FileUtility___c__DisplayClass1_0(FileUtility___c__DisplayClass1_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24997};

/// @brief Field callback, offset: 0x10, size: 0x8, def value: None
 ::System::Action_2<bool,::StringW>*  ___callback;

/// @brief Field sourceFilePath, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___sourceFilePath;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_0, ___callback) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_0, ___sourceFilePath) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_0) == 0x20, "Size mismatch!");

} // namespace end def Liv::Lck::Utilities
