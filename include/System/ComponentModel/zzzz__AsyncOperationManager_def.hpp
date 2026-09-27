#pragma once
// IWYU pragma private; include "System/ComponentModel/AsyncOperationManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AsyncOperationManager)
namespace System::ComponentModel {
class AsyncOperation;
}
namespace System::Threading {
class SynchronizationContext;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class AsyncOperationManager;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::AsyncOperationManager*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::AsyncOperationManager*, "System.ComponentModel", "AsyncOperationManager");
// Dependencies System.Object
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.AsyncOperationManager
class CORDL_TYPE AsyncOperationManager : public ::System::Object {
public:
// Declarations
/// @brief Method CreateOperation, addr 0xad453e0, size 0x1c, virtual false, abstract: false, final false
static inline ::System::ComponentModel::AsyncOperation* CreateOperation(::System::Object*  userSuppliedState) ;

/// @brief Method get_SynchronizationContext, addr 0xad453fc, size 0x64, virtual false, abstract: false, final false
static inline ::System::Threading::SynchronizationContext* get_SynchronizationContext() ;

/// @brief Method set_SynchronizationContext, addr 0xad45460, size 0x8, virtual false, abstract: false, final false
static inline void set_SynchronizationContext(::System::Threading::SynchronizationContext*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncOperationManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncOperationManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncOperationManager(AsyncOperationManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncOperationManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncOperationManager(AsyncOperationManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10090};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::ComponentModel::AsyncOperationManager) == 0x10, "Size mismatch!");

} // namespace end def System::ComponentModel
