#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Breadcrumbs/IArchiveableBreadcrumbManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IArchiveableBreadcrumbManager)
// Forward declare root types
namespace Backtrace::Unity::Model::Breadcrumbs {
class IArchiveableBreadcrumbManager;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Model::Breadcrumbs::IArchiveableBreadcrumbManager*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Model::Breadcrumbs::IArchiveableBreadcrumbManager*, "Backtrace.Unity.Model.Breadcrumbs", "IArchiveableBreadcrumbManager");
// Dependencies 
namespace Backtrace::Unity::Model::Breadcrumbs {
// Is value type: false
// CS Name: Backtrace.Unity.Model.Breadcrumbs.IArchiveableBreadcrumbManager
class CORDL_TYPE IArchiveableBreadcrumbManager {
public:
// Declarations
/// @brief Method Archive, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW Archive() ;

// Ctor Parameters [CppParam { name: "", ty: "IArchiveableBreadcrumbManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IArchiveableBreadcrumbManager(IArchiveableBreadcrumbManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27639};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Backtrace::Unity::Model::Breadcrumbs
