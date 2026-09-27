#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Breadcrumbs/InMemory/BacktraceInMemoryLogManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BacktraceInMemoryLogManager)
namespace Backtrace::Unity::Model::Breadcrumbs::InMemory {
class InMemoryBreadcrumb;
}
namespace Backtrace::Unity::Model::Breadcrumbs {
struct BreadcrumbLevel;
}
namespace Backtrace::Unity::Model::Breadcrumbs {
class IBacktraceLogManager;
}
namespace Backtrace::Unity::Model::Breadcrumbs {
struct UnityEngineLogLevel;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Backtrace::Unity::Model::Breadcrumbs::InMemory {
class BacktraceInMemoryLogManager;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager*, "Backtrace.Unity.Model.Breadcrumbs.InMemory", "BacktraceInMemoryLogManager");
// Dependencies System.Object
namespace Backtrace::Unity::Model::Breadcrumbs::InMemory {
// Is value type: false
// CS Name: Backtrace.Unity.Model.Breadcrumbs.InMemory.BacktraceInMemoryLogManager
class CORDL_TYPE BacktraceInMemoryLogManager : public ::System::Object {
public:
// Declarations
/// @brief Field Breadcrumbs, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Breadcrumbs, put=__cordl_internal_set_Breadcrumbs)) ::System::Collections::Generic::Queue_1<::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb*>*  Breadcrumbs;

 __declspec(property(get=get_BreadcrumbsFilePath)) ::StringW  BreadcrumbsFilePath;

 __declspec(property(get=get_MaximumNumberOfBreadcrumbs, put=set_MaximumNumberOfBreadcrumbs)) int32_t  MaximumNumberOfBreadcrumbs;

/// @brief Field <MaximumNumberOfBreadcrumbs>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__MaximumNumberOfBreadcrumbs_k__BackingField, put=__cordl_internal_set__MaximumNumberOfBreadcrumbs_k__BackingField)) int32_t  _MaximumNumberOfBreadcrumbs_k__BackingField;

/// @brief Field _breadcrumbId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__breadcrumbId, put=__cordl_internal_set__breadcrumbId)) double_t  _breadcrumbId;

/// @brief Field _lockObject, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__lockObject, put=__cordl_internal_set__lockObject)) ::System::Object*  _lockObject;

/// @brief Convert operator to "::Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager"
constexpr operator  ::Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager*() noexcept;

/// @brief Method Add, addr 0x5f1ffdc, size 0x22c, virtual true, abstract: false, final true
inline bool Add(::StringW  message, ::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel  type, ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel  level, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes) ;

/// @brief Method BreadcrumbId, addr 0x5f2052c, size 0x8, virtual true, abstract: false, final true
inline double_t BreadcrumbId() ;

/// @brief Method Clear, addr 0x5f20484, size 0x58, virtual true, abstract: false, final true
inline bool Clear() ;

/// @brief Method Enable, addr 0x5f204dc, size 0x8, virtual true, abstract: false, final true
inline bool Enable() ;

/// @brief Method Length, addr 0x5f204e4, size 0x48, virtual true, abstract: false, final true
inline int32_t Length() ;

static inline ::Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager* New_ctor() ;

constexpr ::System::Collections::Generic::Queue_1<::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb*>* const& __cordl_internal_get_Breadcrumbs() const;

constexpr ::System::Collections::Generic::Queue_1<::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb*>*& __cordl_internal_get_Breadcrumbs() ;

constexpr int32_t const& __cordl_internal_get__MaximumNumberOfBreadcrumbs_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__MaximumNumberOfBreadcrumbs_k__BackingField() ;

constexpr double_t const& __cordl_internal_get__breadcrumbId() const;

constexpr double_t& __cordl_internal_get__breadcrumbId() ;

constexpr ::System::Object* const& __cordl_internal_get__lockObject() const;

constexpr ::System::Object*& __cordl_internal_get__lockObject() ;

constexpr void __cordl_internal_set_Breadcrumbs(::System::Collections::Generic::Queue_1<::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb*>*  value) ;

constexpr void __cordl_internal_set__MaximumNumberOfBreadcrumbs_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__breadcrumbId(double_t  value) ;

constexpr void __cordl_internal_set__lockObject(::System::Object*  value) ;

/// @brief Method .ctor, addr 0x5f1fef0, size 0xd4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_BreadcrumbsFilePath, addr 0x5f1ffc4, size 0x18, virtual true, abstract: false, final true
inline ::StringW get_BreadcrumbsFilePath() ;

/// [CompilerGenerated]
/// @brief Method get_MaximumNumberOfBreadcrumbs, addr 0x5f1fee0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_MaximumNumberOfBreadcrumbs() ;

/// @brief Convert to "::Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager"
constexpr ::Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager* i___Backtrace__Unity__Model__Breadcrumbs__IBacktraceLogManager() noexcept;

/// [CompilerGenerated]
/// @brief Method set_MaximumNumberOfBreadcrumbs, addr 0x5f1fee8, size 0x8, virtual false, abstract: false, final false
inline void set_MaximumNumberOfBreadcrumbs(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BacktraceInMemoryLogManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BacktraceInMemoryLogManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BacktraceInMemoryLogManager(BacktraceInMemoryLogManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BacktraceInMemoryLogManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BacktraceInMemoryLogManager(BacktraceInMemoryLogManager const& ) = delete;

/// @brief Field DefaultMaximumNumberOfInMemoryBreadcrumbs offset 0xffffffff size 0x4
static constexpr int32_t  DefaultMaximumNumberOfInMemoryBreadcrumbs{static_cast<int32_t>(0x64)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27646};

/// [CompilerGenerated]
/// @brief Field <MaximumNumberOfBreadcrumbs>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____MaximumNumberOfBreadcrumbs_k__BackingField;

/// @brief Field _lockObject, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  ____lockObject;

/// @brief Field Breadcrumbs, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb*>*  ___Breadcrumbs;

/// @brief Field _breadcrumbId, offset: 0x28, size: 0x8, def value: None
 double_t  ____breadcrumbId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager, ____MaximumNumberOfBreadcrumbs_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager, ____lockObject) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager, ___Breadcrumbs) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager, ____breadcrumbId) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager) == 0x30, "Size mismatch!");

} // namespace end def Backtrace::Unity::Model::Breadcrumbs::InMemory
