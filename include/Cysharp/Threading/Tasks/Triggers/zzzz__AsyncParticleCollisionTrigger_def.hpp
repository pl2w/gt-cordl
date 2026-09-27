#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncParticleCollisionTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_def.hpp"
CORDL_MODULE_EXPORT(AsyncParticleCollisionTrigger)
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnParticleCollisionHandler;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Triggers {
class AsyncParticleCollisionTrigger;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::AsyncParticleCollisionTrigger*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::AsyncParticleCollisionTrigger*, "Cysharp.Threading.Tasks.Triggers", "AsyncParticleCollisionTrigger");
// [DisallowMultipleComponent]
// Dependencies Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<T>
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.AsyncParticleCollisionTrigger
class CORDL_TYPE AsyncParticleCollisionTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityW<::UnityEngine::GameObject>> {
public:
// Declarations
/// @brief Method GetOnParticleCollisionAsyncHandler, addr 0xae3c4d4, size 0x7c, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleCollisionHandler* GetOnParticleCollisionAsyncHandler() ;

/// @brief Method GetOnParticleCollisionAsyncHandler, addr 0xae3c550, size 0x84, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleCollisionHandler* GetOnParticleCollisionAsyncHandler(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Triggers::AsyncParticleCollisionTrigger* New_ctor() ;

/// @brief Method OnParticleCollision, addr 0xae3c47c, size 0x58, virtual false, abstract: false, final false
inline void OnParticleCollision(::UnityEngine::GameObject*  other) ;

/// @brief Method OnParticleCollisionAsync, addr 0xae3c5d4, size 0x10c, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::GameObject>> OnParticleCollisionAsync() ;

/// @brief Method OnParticleCollisionAsync, addr 0xae3c6e0, size 0x118, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::GameObject>> OnParticleCollisionAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method .ctor, addr 0xae3c7f8, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncParticleCollisionTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncParticleCollisionTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncParticleCollisionTrigger(AsyncParticleCollisionTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncParticleCollisionTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncParticleCollisionTrigger(AsyncParticleCollisionTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21985};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Triggers::AsyncParticleCollisionTrigger) == 0x48, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Triggers
