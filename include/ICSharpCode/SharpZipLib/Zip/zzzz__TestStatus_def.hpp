#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/TestStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ICSharpCode/SharpZipLib/Zip/zzzz__TestOperation_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TestStatus)
namespace ICSharpCode::SharpZipLib::Zip {
struct TestOperation;
}
namespace ICSharpCode::SharpZipLib::Zip {
class ZipEntry;
}
namespace ICSharpCode::SharpZipLib::Zip {
class ZipFile;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Zip {
class TestStatus;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::TestStatus*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::TestStatus*, "ICSharpCode.SharpZipLib.Zip", "TestStatus");
// Dependencies ICSharpCode.SharpZipLib.Zip.TestOperation, System.Object
namespace ICSharpCode::SharpZipLib::Zip {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.TestStatus
class CORDL_TYPE TestStatus : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_BytesTested)) int64_t  BytesTested;

 __declspec(property(get=get_Entry)) ::ICSharpCode::SharpZipLib::Zip::ZipEntry*  Entry;

 __declspec(property(get=get_EntryValid)) bool  EntryValid;

 __declspec(property(get=get_ErrorCount)) int32_t  ErrorCount;

 __declspec(property(get=get_File)) ::ICSharpCode::SharpZipLib::Zip::ZipFile*  File;

 __declspec(property(get=get_Operation)) ::ICSharpCode::SharpZipLib::Zip::TestOperation  Operation;

/// @brief Field bytesTested_, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_bytesTested_, put=__cordl_internal_set_bytesTested_)) int64_t  bytesTested_;

/// @brief Field entryValid_, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_entryValid_, put=__cordl_internal_set_entryValid_)) bool  entryValid_;

/// @brief Field entry_, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_entry_, put=__cordl_internal_set_entry_)) ::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry_;

/// @brief Field errorCount_, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_errorCount_, put=__cordl_internal_set_errorCount_)) int32_t  errorCount_;

/// @brief Field file_, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_file_, put=__cordl_internal_set_file_)) ::ICSharpCode::SharpZipLib::Zip::ZipFile*  file_;

/// @brief Field operation_, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_operation_, put=__cordl_internal_set_operation_)) ::ICSharpCode::SharpZipLib::Zip::TestOperation  operation_;

/// @brief Method AddError, addr 0x9f83af0, size 0x14, virtual false, abstract: false, final false
inline void AddError() ;

static inline ::ICSharpCode::SharpZipLib::Zip::TestStatus* New_ctor(::ICSharpCode::SharpZipLib::Zip::ZipFile*  file) ;

/// @brief Method SetBytesTested, addr 0x9f83b34, size 0x8, virtual false, abstract: false, final false
inline void SetBytesTested(int64_t  value) ;

/// @brief Method SetEntry, addr 0x9f83b0c, size 0x28, virtual false, abstract: false, final false
inline void SetEntry(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry) ;

/// @brief Method SetOperation, addr 0x9f83b04, size 0x8, virtual false, abstract: false, final false
inline void SetOperation(::ICSharpCode::SharpZipLib::Zip::TestOperation  operation) ;

constexpr int64_t const& __cordl_internal_get_bytesTested_() const;

constexpr int64_t& __cordl_internal_get_bytesTested_() ;

constexpr bool const& __cordl_internal_get_entryValid_() const;

constexpr bool& __cordl_internal_get_entryValid_() ;

constexpr ::ICSharpCode::SharpZipLib::Zip::ZipEntry* const& __cordl_internal_get_entry_() const;

constexpr ::ICSharpCode::SharpZipLib::Zip::ZipEntry*& __cordl_internal_get_entry_() ;

constexpr int32_t const& __cordl_internal_get_errorCount_() const;

constexpr int32_t& __cordl_internal_get_errorCount_() ;

constexpr ::ICSharpCode::SharpZipLib::Zip::ZipFile* const& __cordl_internal_get_file_() const;

constexpr ::ICSharpCode::SharpZipLib::Zip::ZipFile*& __cordl_internal_get_file_() ;

constexpr ::ICSharpCode::SharpZipLib::Zip::TestOperation const& __cordl_internal_get_operation_() const;

constexpr ::ICSharpCode::SharpZipLib::Zip::TestOperation& __cordl_internal_get_operation_() ;

constexpr void __cordl_internal_set_bytesTested_(int64_t  value) ;

constexpr void __cordl_internal_set_entryValid_(bool  value) ;

constexpr void __cordl_internal_set_entry_(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  value) ;

constexpr void __cordl_internal_set_errorCount_(int32_t  value) ;

constexpr void __cordl_internal_set_file_(::ICSharpCode::SharpZipLib::Zip::ZipFile*  value) ;

constexpr void __cordl_internal_set_operation_(::ICSharpCode::SharpZipLib::Zip::TestOperation  value) ;

/// @brief Method .ctor, addr 0x9f83a90, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::ICSharpCode::SharpZipLib::Zip::ZipFile*  file) ;

/// @brief Method get_BytesTested, addr 0x9f83ae0, size 0x8, virtual false, abstract: false, final false
inline int64_t get_BytesTested() ;

/// @brief Method get_Entry, addr 0x9f83ad0, size 0x8, virtual false, abstract: false, final false
inline ::ICSharpCode::SharpZipLib::Zip::ZipEntry* get_Entry() ;

/// @brief Method get_EntryValid, addr 0x9f83ae8, size 0x8, virtual false, abstract: false, final false
inline bool get_EntryValid() ;

/// @brief Method get_ErrorCount, addr 0x9f83ad8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ErrorCount() ;

/// @brief Method get_File, addr 0x9f83ac8, size 0x8, virtual false, abstract: false, final false
inline ::ICSharpCode::SharpZipLib::Zip::ZipFile* get_File() ;

/// @brief Method get_Operation, addr 0x9f83ac0, size 0x8, virtual false, abstract: false, final false
inline ::ICSharpCode::SharpZipLib::Zip::TestOperation get_Operation() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TestStatus() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TestStatus", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TestStatus(TestStatus && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TestStatus", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TestStatus(TestStatus const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17340};

/// @brief Field file_, offset: 0x10, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Zip::ZipFile*  ___file_;

/// @brief Field entry_, offset: 0x18, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Zip::ZipEntry*  ___entry_;

/// @brief Field entryValid_, offset: 0x20, size: 0x1, def value: None
 bool  ___entryValid_;

/// @brief Field errorCount_, offset: 0x24, size: 0x4, def value: None
 int32_t  ___errorCount_;

/// @brief Field bytesTested_, offset: 0x28, size: 0x8, def value: None
 int64_t  ___bytesTested_;

/// @brief Field operation_, offset: 0x30, size: 0x4, def value: None
 ::ICSharpCode::SharpZipLib::Zip::TestOperation  ___operation_;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::TestStatus, ___file_) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::TestStatus, ___entry_) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::TestStatus, ___entryValid_) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::TestStatus, ___errorCount_) == 0x24, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::TestStatus, ___bytesTested_) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::TestStatus, ___operation_) == 0x30, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::TestStatus) == 0x38, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip
