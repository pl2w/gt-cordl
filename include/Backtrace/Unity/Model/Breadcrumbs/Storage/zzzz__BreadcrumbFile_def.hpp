#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Breadcrumbs/Storage/BreadcrumbFile.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(BreadcrumbFile)
namespace Backtrace::Unity::Model::Breadcrumbs::Storage {
class IBreadcrumbFile;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Backtrace::Unity::Model::Breadcrumbs::Storage {
class BreadcrumbFile;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Model::Breadcrumbs::Storage::BreadcrumbFile*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Model::Breadcrumbs::Storage::BreadcrumbFile*, "Backtrace.Unity.Model.Breadcrumbs.Storage", "BreadcrumbFile");
// Dependencies System.Object
namespace Backtrace::Unity::Model::Breadcrumbs::Storage {
// Is value type: false
// CS Name: Backtrace.Unity.Model.Breadcrumbs.Storage.BreadcrumbFile
class CORDL_TYPE BreadcrumbFile : public ::System::Object {
public:
// Declarations
/// @brief Field _path, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__path, put=__cordl_internal_set__path)) ::StringW  _path;

/// @brief Convert operator to "::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile"
constexpr operator  ::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile*() noexcept;

/// @brief Method Delete, addr 0x5f1fd90, size 0xc, virtual true, abstract: false, final true
inline void Delete() ;

/// @brief Method Exists, addr 0x5f1fd9c, size 0xc, virtual true, abstract: false, final true
inline bool Exists() ;

/// @brief Method GetCreateStream, addr 0x5f1fda8, size 0x68, virtual true, abstract: false, final true
inline ::System::IO::Stream* GetCreateStream() ;

/// @brief Method GetIOStream, addr 0x5f1fe10, size 0x68, virtual true, abstract: false, final true
inline ::System::IO::Stream* GetIOStream() ;

/// @brief Method GetWriteStream, addr 0x5f1fe78, size 0x68, virtual true, abstract: false, final true
inline ::System::IO::Stream* GetWriteStream() ;

static inline ::Backtrace::Unity::Model::Breadcrumbs::Storage::BreadcrumbFile* New_ctor(::StringW  path) ;

constexpr ::StringW const& __cordl_internal_get__path() const;

constexpr ::StringW& __cordl_internal_get__path() ;

constexpr void __cordl_internal_set__path(::StringW  value) ;

/// @brief Method .ctor, addr 0x5f1e588, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  path) ;

/// @brief Convert to "::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile"
constexpr ::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile* i___Backtrace__Unity__Model__Breadcrumbs__Storage__IBreadcrumbFile() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BreadcrumbFile() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BreadcrumbFile", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BreadcrumbFile(BreadcrumbFile && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BreadcrumbFile", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BreadcrumbFile(BreadcrumbFile const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27644};

/// @brief Field _path, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____path;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Model::Breadcrumbs::Storage::BreadcrumbFile, ____path) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Model::Breadcrumbs::Storage::BreadcrumbFile) == 0x18, "Size mismatch!");

} // namespace end def Backtrace::Unity::Model::Breadcrumbs::Storage
