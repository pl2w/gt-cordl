#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Breadcrumbs/IBacktraceLogManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IBacktraceLogManager)
namespace Backtrace::Unity::Model::Breadcrumbs {
struct BreadcrumbLevel;
}
namespace Backtrace::Unity::Model::Breadcrumbs {
struct UnityEngineLogLevel;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
// Forward declare root types
namespace Backtrace::Unity::Model::Breadcrumbs {
class IBacktraceLogManager;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager*, "Backtrace.Unity.Model.Breadcrumbs", "IBacktraceLogManager");
// Dependencies 
namespace Backtrace::Unity::Model::Breadcrumbs {
// Is value type: false
// CS Name: Backtrace.Unity.Model.Breadcrumbs.IBacktraceLogManager
class CORDL_TYPE IBacktraceLogManager {
public:
// Declarations
 __declspec(property(get=get_BreadcrumbsFilePath)) ::StringW  BreadcrumbsFilePath;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool Add(::StringW  message, ::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel  level, ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel  type, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes) ;

/// @brief Method BreadcrumbId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline double_t BreadcrumbId() ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool Clear() ;

/// @brief Method Enable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool Enable() ;

/// @brief Method Length, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t Length() ;

/// @brief Method get_BreadcrumbsFilePath, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_BreadcrumbsFilePath() ;

// Ctor Parameters [CppParam { name: "", ty: "IBacktraceLogManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IBacktraceLogManager(IBacktraceLogManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27641};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Backtrace::Unity::Model::Breadcrumbs
