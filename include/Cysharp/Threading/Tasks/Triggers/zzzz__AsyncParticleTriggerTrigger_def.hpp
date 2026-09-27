#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncParticleTriggerTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__AsyncUnit_def.hpp"
CORDL_MODULE_EXPORT(AsyncParticleTriggerTrigger)
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnParticleTriggerHandler;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Triggers {
class AsyncParticleTriggerTrigger;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::AsyncParticleTriggerTrigger*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::AsyncParticleTriggerTrigger*, "Cysharp.Threading.Tasks.Triggers", "AsyncParticleTriggerTrigger");
// [DisallowMultipleComponent]
// Dependencies Cysharp.Threading.Tasks.AsyncUnit, Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<T>
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.AsyncParticleTriggerTrigger
class CORDL_TYPE AsyncParticleTriggerTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::Cysharp::Threading::Tasks::AsyncUnit> {
public:
// Declarations
/// @brief Method GetOnParticleTriggerAsyncHandler, addr 0xae3cc50, size 0x7c, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleTriggerHandler* GetOnParticleTriggerAsyncHandler() ;

/// @brief Method GetOnParticleTriggerAsyncHandler, addr 0xae3cccc, size 0x84, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleTriggerHandler* GetOnParticleTriggerAsyncHandler(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Triggers::AsyncParticleTriggerTrigger* New_ctor() ;

/// @brief Method OnParticleTrigger, addr 0xae3cbd8, size 0x78, virtual false, abstract: false, final false
inline void OnParticleTrigger() ;

/// @brief Method OnParticleTriggerAsync, addr 0xae3cd50, size 0xe8, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask OnParticleTriggerAsync() ;

/// @brief Method OnParticleTriggerAsync, addr 0xae3ce38, size 0xf0, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask OnParticleTriggerAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method .ctor, addr 0xae3cf28, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncParticleTriggerTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncParticleTriggerTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncParticleTriggerTrigger(AsyncParticleTriggerTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncParticleTriggerTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncParticleTriggerTrigger(AsyncParticleTriggerTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21989};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Triggers::AsyncParticleTriggerTrigger) == 0x48, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Triggers
