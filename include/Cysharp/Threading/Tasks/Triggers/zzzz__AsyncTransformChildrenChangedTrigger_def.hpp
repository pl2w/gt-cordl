#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncTransformChildrenChangedTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__AsyncUnit_def.hpp"
CORDL_MODULE_EXPORT(AsyncTransformChildrenChangedTrigger)
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnTransformChildrenChangedHandler;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Triggers {
class AsyncTransformChildrenChangedTrigger;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::AsyncTransformChildrenChangedTrigger*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::AsyncTransformChildrenChangedTrigger*, "Cysharp.Threading.Tasks.Triggers", "AsyncTransformChildrenChangedTrigger");
// [DisallowMultipleComponent]
// Dependencies Cysharp.Threading.Tasks.AsyncUnit, Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<T>
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.AsyncTransformChildrenChangedTrigger
class CORDL_TYPE AsyncTransformChildrenChangedTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::Cysharp::Threading::Tasks::AsyncUnit> {
public:
// Declarations
/// @brief Method GetOnTransformChildrenChangedAsyncHandler, addr 0xae3f0f8, size 0x7c, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnTransformChildrenChangedHandler* GetOnTransformChildrenChangedAsyncHandler() ;

/// @brief Method GetOnTransformChildrenChangedAsyncHandler, addr 0xae3f174, size 0x84, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnTransformChildrenChangedHandler* GetOnTransformChildrenChangedAsyncHandler(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Triggers::AsyncTransformChildrenChangedTrigger* New_ctor() ;

/// @brief Method OnTransformChildrenChanged, addr 0xae3f080, size 0x78, virtual false, abstract: false, final false
inline void OnTransformChildrenChanged() ;

/// @brief Method OnTransformChildrenChangedAsync, addr 0xae3f1f8, size 0xe8, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask OnTransformChildrenChangedAsync() ;

/// @brief Method OnTransformChildrenChangedAsync, addr 0xae3f2e0, size 0xf0, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask OnTransformChildrenChangedAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method .ctor, addr 0xae3f3d0, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncTransformChildrenChangedTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncTransformChildrenChangedTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncTransformChildrenChangedTrigger(AsyncTransformChildrenChangedTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncTransformChildrenChangedTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncTransformChildrenChangedTrigger(AsyncTransformChildrenChangedTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22009};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Triggers::AsyncTransformChildrenChangedTrigger) == 0x48, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Triggers
