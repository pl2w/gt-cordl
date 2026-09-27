#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncPreRenderTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__AsyncUnit_def.hpp"
CORDL_MODULE_EXPORT(AsyncPreRenderTrigger)
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnPreRenderHandler;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Triggers {
class AsyncPreRenderTrigger;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::AsyncPreRenderTrigger*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::AsyncPreRenderTrigger*, "Cysharp.Threading.Tasks.Triggers", "AsyncPreRenderTrigger");
// [DisallowMultipleComponent]
// Dependencies Cysharp.Threading.Tasks.AsyncUnit, Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<T>
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.AsyncPreRenderTrigger
class CORDL_TYPE AsyncPreRenderTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::Cysharp::Threading::Tasks::AsyncUnit> {
public:
// Declarations
/// @brief Method GetOnPreRenderAsyncHandler, addr 0xae3db04, size 0x7c, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnPreRenderHandler* GetOnPreRenderAsyncHandler() ;

/// @brief Method GetOnPreRenderAsyncHandler, addr 0xae3db80, size 0x84, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnPreRenderHandler* GetOnPreRenderAsyncHandler(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Triggers::AsyncPreRenderTrigger* New_ctor() ;

/// @brief Method OnPreRender, addr 0xae3da8c, size 0x78, virtual false, abstract: false, final false
inline void OnPreRender() ;

/// @brief Method OnPreRenderAsync, addr 0xae3dc04, size 0xe8, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask OnPreRenderAsync() ;

/// @brief Method OnPreRenderAsync, addr 0xae3dcec, size 0xf0, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask OnPreRenderAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method .ctor, addr 0xae3dddc, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncPreRenderTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncPreRenderTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncPreRenderTrigger(AsyncPreRenderTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncPreRenderTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncPreRenderTrigger(AsyncPreRenderTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21997};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Triggers::AsyncPreRenderTrigger) == 0x48, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Triggers
