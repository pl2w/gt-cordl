#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Breadcrumbs/Storage/IBreadcrumbFile.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IBreadcrumbFile)
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Backtrace::Unity::Model::Breadcrumbs::Storage {
class IBreadcrumbFile;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile*, "Backtrace.Unity.Model.Breadcrumbs.Storage", "IBreadcrumbFile");
// Dependencies 
namespace Backtrace::Unity::Model::Breadcrumbs::Storage {
// Is value type: false
// CS Name: Backtrace.Unity.Model.Breadcrumbs.Storage.IBreadcrumbFile
class CORDL_TYPE IBreadcrumbFile {
public:
// Declarations
/// @brief Method Delete, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Delete() ;

/// @brief Method Exists, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool Exists() ;

/// @brief Method GetCreateStream, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::IO::Stream* GetCreateStream() ;

/// @brief Method GetIOStream, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::IO::Stream* GetIOStream() ;

/// @brief Method GetWriteStream, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::IO::Stream* GetWriteStream() ;

// Ctor Parameters [CppParam { name: "", ty: "IBreadcrumbFile", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IBreadcrumbFile(IBreadcrumbFile const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27645};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Backtrace::Unity::Model::Breadcrumbs::Storage
