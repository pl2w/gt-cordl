#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncControllerColliderHitTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_def.hpp"
CORDL_MODULE_EXPORT(AsyncControllerColliderHitTrigger)
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnControllerColliderHitHandler;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace UnityEngine {
class ControllerColliderHit;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Triggers {
class AsyncControllerColliderHitTrigger;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::AsyncControllerColliderHitTrigger*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::AsyncControllerColliderHitTrigger*, "Cysharp.Threading.Tasks.Triggers", "AsyncControllerColliderHitTrigger");
// [DisallowMultipleComponent]
// Dependencies Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<T>
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.AsyncControllerColliderHitTrigger
class CORDL_TYPE AsyncControllerColliderHitTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::ControllerColliderHit*> {
public:
// Declarations
/// @brief Method GetOnControllerColliderHitAsyncHandler, addr 0xae3a7dc, size 0x7c, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnControllerColliderHitHandler* GetOnControllerColliderHitAsyncHandler() ;

/// @brief Method GetOnControllerColliderHitAsyncHandler, addr 0xae3a858, size 0x84, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnControllerColliderHitHandler* GetOnControllerColliderHitAsyncHandler(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Triggers::AsyncControllerColliderHitTrigger* New_ctor() ;

/// @brief Method OnControllerColliderHit, addr 0xae3a784, size 0x58, virtual false, abstract: false, final false
inline void OnControllerColliderHit(::UnityEngine::ControllerColliderHit*  hit) ;

/// @brief Method OnControllerColliderHitAsync, addr 0xae3a8dc, size 0x10c, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::ControllerColliderHit*> OnControllerColliderHitAsync() ;

/// @brief Method OnControllerColliderHitAsync, addr 0xae3a9e8, size 0x118, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::ControllerColliderHit*> OnControllerColliderHitAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method .ctor, addr 0xae3ab00, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncControllerColliderHitTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncControllerColliderHitTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncControllerColliderHitTrigger(AsyncControllerColliderHitTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncControllerColliderHitTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncControllerColliderHitTrigger(AsyncControllerColliderHitTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21969};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Triggers::AsyncControllerColliderHitTrigger) == 0x48, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Triggers
