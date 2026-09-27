#pragma once
// IWYU pragma private; include "Backtrace/Unity/Interfaces/IBacktraceDatabaseFileContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IBacktraceDatabaseFileContext)
namespace Backtrace::Unity::Model::Database {
class BacktraceDatabaseRecord;
}
namespace Backtrace::Unity::Model {
class BacktraceData;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::IO {
class FileInfo;
}
// Forward declare root types
namespace Backtrace::Unity::Interfaces {
class IBacktraceDatabaseFileContext;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*, "Backtrace.Unity.Interfaces", "IBacktraceDatabaseFileContext");
// Dependencies 
namespace Backtrace::Unity::Interfaces {
// Is value type: false
// CS Name: Backtrace.Unity.Interfaces.IBacktraceDatabaseFileContext
class CORDL_TYPE IBacktraceDatabaseFileContext {
public:
// Declarations
 __declspec(property(get=get_ScreenshotMaxHeight, put=set_ScreenshotMaxHeight)) int32_t  ScreenshotMaxHeight;

 __declspec(property(get=get_ScreenshotQuality, put=set_ScreenshotQuality)) int32_t  ScreenshotQuality;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Clear() ;

/// @brief Method Delete, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Delete(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  record) ;

/// @brief Method GenerateRecordAttachments, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* GenerateRecordAttachments(::Backtrace::Unity::Model::BacktraceData*  data) ;

/// @brief Method GetAll, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Collections::Generic::IEnumerable_1<::System::IO::FileInfo*>* GetAll() ;

/// @brief Method GetRecords, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Collections::Generic::IEnumerable_1<::System::IO::FileInfo*>* GetRecords() ;

/// @brief Method IsValidRecord, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool IsValidRecord(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  record) ;

/// @brief Method RemoveOrphaned, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void RemoveOrphaned(::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*  existingRecords) ;

/// @brief Method Save, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool Save(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  record) ;

/// @brief Method ValidFileConsistency, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool ValidFileConsistency() ;

/// @brief Method get_ScreenshotMaxHeight, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_ScreenshotMaxHeight() ;

/// @brief Method get_ScreenshotQuality, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_ScreenshotQuality() ;

/// @brief Method set_ScreenshotMaxHeight, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_ScreenshotMaxHeight(int32_t  value) ;

/// @brief Method set_ScreenshotQuality, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_ScreenshotQuality(int32_t  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IBacktraceDatabaseFileContext", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IBacktraceDatabaseFileContext(IBacktraceDatabaseFileContext const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27661};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Backtrace::Unity::Interfaces
