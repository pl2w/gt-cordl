#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncParticleUpdateJobScheduledTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_def.hpp"
#include "UnityEngine/ParticleSystemJobs/zzzz__ParticleSystemJobData_def.hpp"
CORDL_MODULE_EXPORT(AsyncParticleUpdateJobScheduledTrigger)
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnParticleUpdateJobScheduledHandler;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace UnityEngine::ParticleSystemJobs {
struct ParticleSystemJobData;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Triggers {
class AsyncParticleUpdateJobScheduledTrigger;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Triggers::AsyncParticleUpdateJobScheduledTrigger*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Triggers::AsyncParticleUpdateJobScheduledTrigger*, "Cysharp.Threading.Tasks.Triggers", "AsyncParticleUpdateJobScheduledTrigger");
// [DisallowMultipleComponent]
// Dependencies Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<T>, UnityEngine.ParticleSystemJobs.ParticleSystemJobData
namespace Cysharp::Threading::Tasks::Triggers {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.AsyncParticleUpdateJobScheduledTrigger
class CORDL_TYPE AsyncParticleUpdateJobScheduledTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::ParticleSystemJobs::ParticleSystemJobData> {
public:
// Declarations
/// @brief Method GetOnParticleUpdateJobScheduledAsyncHandler, addr 0xae3cfe4, size 0x7c, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleUpdateJobScheduledHandler* GetOnParticleUpdateJobScheduledAsyncHandler() ;

/// @brief Method GetOnParticleUpdateJobScheduledAsyncHandler, addr 0xae3d060, size 0x84, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleUpdateJobScheduledHandler* GetOnParticleUpdateJobScheduledAsyncHandler(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Triggers::AsyncParticleUpdateJobScheduledTrigger* New_ctor() ;

/// @brief Method OnParticleUpdateJobScheduled, addr 0xae3cf70, size 0x74, virtual false, abstract: false, final false
inline void OnParticleUpdateJobScheduled(::UnityEngine::ParticleSystemJobs::ParticleSystemJobData  particles) ;

/// @brief Method OnParticleUpdateJobScheduledAsync, addr 0xae3d0e4, size 0x114, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::ParticleSystemJobs::ParticleSystemJobData> OnParticleUpdateJobScheduledAsync() ;

/// @brief Method OnParticleUpdateJobScheduledAsync, addr 0xae3d1f8, size 0x11c, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::ParticleSystemJobs::ParticleSystemJobData> OnParticleUpdateJobScheduledAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method .ctor, addr 0xae3d314, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncParticleUpdateJobScheduledTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncParticleUpdateJobScheduledTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncParticleUpdateJobScheduledTrigger(AsyncParticleUpdateJobScheduledTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncParticleUpdateJobScheduledTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncParticleUpdateJobScheduledTrigger(AsyncParticleUpdateJobScheduledTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21991};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Triggers::AsyncParticleUpdateJobScheduledTrigger) == 0x48, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Triggers
