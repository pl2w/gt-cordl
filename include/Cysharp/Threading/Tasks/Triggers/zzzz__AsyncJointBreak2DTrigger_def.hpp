#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncJointBreak2DTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_def.hpp"
CORDL_MODULE_EXPORT(AsyncJointBreak2DTrigger)
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnJointBreak2DHandler;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace UnityEngine {
class Joint2D;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Triggers {
class AsyncJointBreak2DTrigger;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::AsyncJointBreak2DTrigger*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::AsyncJointBreak2DTrigger*, "Cysharp.Threading.Tasks.Triggers", "AsyncJointBreak2DTrigger");
// [DisallowMultipleComponent]
// Dependencies Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<T>
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.AsyncJointBreak2DTrigger
class CORDL_TYPE AsyncJointBreak2DTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityW<::UnityEngine::Joint2D>> {
public:
// Declarations
/// @brief Method GetOnJointBreak2DAsyncHandler, addr 0xae3c110, size 0x7c, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnJointBreak2DHandler* GetOnJointBreak2DAsyncHandler() ;

/// @brief Method GetOnJointBreak2DAsyncHandler, addr 0xae3c18c, size 0x84, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnJointBreak2DHandler* GetOnJointBreak2DAsyncHandler(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Triggers::AsyncJointBreak2DTrigger* New_ctor() ;

/// @brief Method OnJointBreak2D, addr 0xae3c0b8, size 0x58, virtual false, abstract: false, final false
inline void OnJointBreak2D(::UnityEngine::Joint2D*  brokenJoint) ;

/// @brief Method OnJointBreak2DAsync, addr 0xae3c210, size 0x10c, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Joint2D>> OnJointBreak2DAsync() ;

/// @brief Method OnJointBreak2DAsync, addr 0xae3c31c, size 0x118, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Joint2D>> OnJointBreak2DAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method .ctor, addr 0xae3c434, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncJointBreak2DTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncJointBreak2DTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncJointBreak2DTrigger(AsyncJointBreak2DTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncJointBreak2DTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncJointBreak2DTrigger(AsyncJointBreak2DTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21983};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Triggers::AsyncJointBreak2DTrigger) == 0x48, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Triggers
