#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncApplicationQuitTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__AsyncUnit_def.hpp"
CORDL_MODULE_EXPORT(AsyncApplicationQuitTrigger)
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnApplicationQuitHandler;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Triggers {
class AsyncApplicationQuitTrigger;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::AsyncApplicationQuitTrigger*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::AsyncApplicationQuitTrigger*, "Cysharp.Threading.Tasks.Triggers", "AsyncApplicationQuitTrigger");
// [DisallowMultipleComponent]
// Dependencies Cysharp.Threading.Tasks.AsyncUnit, Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<T>
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.AsyncApplicationQuitTrigger
class CORDL_TYPE AsyncApplicationQuitTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::Cysharp::Threading::Tasks::AsyncUnit> {
public:
// Declarations
/// @brief Method GetOnApplicationQuitAsyncHandler, addr 0xae37b70, size 0x7c, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationQuitHandler* GetOnApplicationQuitAsyncHandler() ;

/// @brief Method GetOnApplicationQuitAsyncHandler, addr 0xae37bec, size 0x84, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationQuitHandler* GetOnApplicationQuitAsyncHandler(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Triggers::AsyncApplicationQuitTrigger* New_ctor() ;

/// @brief Method OnApplicationQuit, addr 0xae37af8, size 0x78, virtual false, abstract: false, final false
inline void OnApplicationQuit() ;

/// @brief Method OnApplicationQuitAsync, addr 0xae37c70, size 0xe8, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask OnApplicationQuitAsync() ;

/// @brief Method OnApplicationQuitAsync, addr 0xae37d58, size 0xf0, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask OnApplicationQuitAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method .ctor, addr 0xae37e48, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncApplicationQuitTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncApplicationQuitTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncApplicationQuitTrigger(AsyncApplicationQuitTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncApplicationQuitTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncApplicationQuitTrigger(AsyncApplicationQuitTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21945};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Triggers::AsyncApplicationQuitTrigger) == 0x48, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Triggers
