#pragma once
// IWYU pragma private; include "Fusion/NetworkMecanimAnimator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__AnimatorSyncSettings_def.hpp"
#include "Fusion/zzzz__NetworkBehaviour_def.hpp"
#include "Fusion/zzzz__NetworkMecanimAnimator_AnimatorData_def.hpp"
#include "Fusion/zzzz__RenderSource_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkMecanimAnimator)
namespace Fusion {
class IAfterAllTicks;
}
namespace Fusion {
class IPublicFacingInterface;
}
namespace Fusion {
struct NetworkBehaviourBuffer;
}
namespace GlobalNamespace {
struct NetworkMecanimAnimator_AnimatorData;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace Fusion {
class NetworkMecanimAnimator;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkMecanimAnimator*);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkMecanimAnimator*, "Fusion", "NetworkMecanimAnimator");
// [HelpURL("https://doc.photonengine.com/fusion/current/manual/prebuilt-components#networkmechanimanimator")]
// [DisallowMultipleComponent]
// [AddComponentMenu("Fusion/Network Mecanim Animator")]
// [NetworkBehaviourWeaved(-1)]
// Dependencies Fusion.AnimatorSyncSettings, Fusion.NetworkBehaviour, Fusion.NetworkMecanimAnimator::AnimatorData, Fusion.RenderSource
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkMecanimAnimator
class CORDL_TYPE NetworkMecanimAnimator : public ::Fusion::NetworkBehaviour {
public:
// Declarations
using AnimatorData = ::GlobalNamespace::NetworkMecanimAnimator_AnimatorData;

/// @brief Field Animator, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_Animator, put=__cordl_internal_set_Animator)) ::UnityW<::UnityEngine::Animator>  Animator;

/// @brief Field ApplyTiming, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_ApplyTiming, put=__cordl_internal_set_ApplyTiming)) ::Fusion::RenderSource  ApplyTiming;

 __declspec(property(get=get_DynamicWordCount)) ::System::Nullable_1<int32_t>  DynamicWordCount;

/// @brief Field StateHashes, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_StateHashes, put=__cordl_internal_set_StateHashes)) ::ArrayW<int32_t>  StateHashes;

/// @brief Field SyncSettings, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_SyncSettings, put=__cordl_internal_set_SyncSettings)) ::Fusion::AnimatorSyncSettings  SyncSettings;

/// @brief Field TotalWords, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_TotalWords, put=__cordl_internal_set_TotalWords)) int32_t  TotalWords;

/// @brief Field TriggerHashes, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_TriggerHashes, put=__cordl_internal_set_TriggerHashes)) ::ArrayW<int32_t>  TriggerHashes;

/// @brief Field _animatorData, offset 0xb0, size 0x40 
 __declspec(property(get=__cordl_internal_get__animatorData, put=__cordl_internal_set__animatorData)) ::GlobalNamespace::NetworkMecanimAnimator_AnimatorData  _animatorData;

/// @brief Field _isInitialized, offset 0xf0, size 0x1 
 __declspec(property(get=__cordl_internal_get__isInitialized, put=__cordl_internal_set__isInitialized)) bool  _isInitialized;

/// @brief Field _lastAppliedTick, offset 0xf4, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastAppliedTick, put=__cordl_internal_set__lastAppliedTick)) int32_t  _lastAppliedTick;

/// @brief Field _pendingTriggers, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__pendingTriggers, put=__cordl_internal_set__pendingTriggers)) ::System::Collections::Generic::HashSet_1<int32_t>*  _pendingTriggers;

/// @brief Convert operator to "::Fusion::IAfterAllTicks"
constexpr operator  ::Fusion::IAfterAllTicks*() noexcept;

/// @brief Convert operator to "::Fusion::IPublicFacingInterface"
constexpr operator  ::Fusion::IPublicFacingInterface*() noexcept;

/// @brief Method ApplyAnimatorData, addr 0x5f85118, size 0x6c, virtual false, abstract: false, final false
inline void ApplyAnimatorData(::Fusion::NetworkBehaviourBuffer  buffer) ;

/// @brief Method ApplyLayerWeights, addr 0x5f8627c, size 0x10c, virtual false, abstract: false, final false
inline void ApplyLayerWeights(::Fusion::NetworkBehaviourBuffer  buffer, ::by_ref<int32_t>  wordOffset) ;

/// @brief Method ApplyParameters, addr 0x5f85c50, size 0x40c, virtual false, abstract: false, final false
inline void ApplyParameters(::Fusion::NetworkBehaviourBuffer  buffer, ::by_ref<int32_t>  wordOffset) ;

/// @brief Method ApplyStates, addr 0x5f8605c, size 0x220, virtual false, abstract: false, final false
inline void ApplyStates(::Fusion::NetworkBehaviourBuffer  buffer, ::by_ref<int32_t>  wordOffset) ;

/// @brief Method CaptureAnimatorData, addr 0x5f84fac, size 0x4c, virtual false, abstract: false, final false
inline void CaptureAnimatorData() ;

/// @brief Method CaptureLayerWeights, addr 0x5f85b0c, size 0x144, virtual false, abstract: false, final false
inline void CaptureLayerWeights(::by_ref<int32_t>  wordOffset) ;

/// @brief Method CaptureParameters, addr 0x5f85324, size 0x4c8, virtual false, abstract: false, final false
inline void CaptureParameters(::by_ref<int32_t>  wordOffset) ;

/// @brief Method CaptureStates, addr 0x5f857ec, size 0x320, virtual false, abstract: false, final false
inline void CaptureStates(::by_ref<int32_t>  wordOffset) ;

/// @brief Method EnsureInitialized, addr 0x5f84d4c, size 0x1a0, virtual false, abstract: false, final false
inline void EnsureInitialized() ;

/// @brief Method Fusion.IAfterAllTicks.AfterAllTicks, addr 0x5f84f74, size 0x38, virtual true, abstract: false, final true
inline void Fusion_IAfterAllTicks_AfterAllTicks(bool  resimulation, int32_t  tickCount) ;

static inline ::Fusion::NetworkMecanimAnimator* New_ctor() ;

/// @brief Method Render, addr 0x5f84ff8, size 0x120, virtual true, abstract: false, final false
inline void Render() ;

/// @brief Method SetTrigger, addr 0x5f8524c, size 0xd8, virtual false, abstract: false, final false
inline void SetTrigger(::StringW  trigger, bool  passThroughOnInputAuthority) ;

/// @brief Method SetTrigger, addr 0x5f85184, size 0xc8, virtual false, abstract: false, final false
inline void SetTrigger(int32_t  triggerHash, bool  passThroughOnInputAuthority) ;

/// @brief Method Spawned, addr 0x5f84eec, size 0x88, virtual true, abstract: false, final false
inline void Spawned() ;

constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get_Animator() const;

constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get_Animator() ;

constexpr ::Fusion::RenderSource const& __cordl_internal_get_ApplyTiming() const;

constexpr ::Fusion::RenderSource& __cordl_internal_get_ApplyTiming() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_StateHashes() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_StateHashes() ;

constexpr ::Fusion::AnimatorSyncSettings const& __cordl_internal_get_SyncSettings() const;

constexpr ::Fusion::AnimatorSyncSettings& __cordl_internal_get_SyncSettings() ;

constexpr int32_t const& __cordl_internal_get_TotalWords() const;

constexpr int32_t& __cordl_internal_get_TotalWords() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_TriggerHashes() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_TriggerHashes() ;

constexpr ::GlobalNamespace::NetworkMecanimAnimator_AnimatorData const& __cordl_internal_get__animatorData() const;

constexpr ::GlobalNamespace::NetworkMecanimAnimator_AnimatorData& __cordl_internal_get__animatorData() ;

constexpr bool const& __cordl_internal_get__isInitialized() const;

constexpr bool& __cordl_internal_get__isInitialized() ;

constexpr int32_t const& __cordl_internal_get__lastAppliedTick() const;

constexpr int32_t& __cordl_internal_get__lastAppliedTick() ;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& __cordl_internal_get__pendingTriggers() const;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get__pendingTriggers() ;

constexpr void __cordl_internal_set_Animator(::UnityW<::UnityEngine::Animator>  value) ;

constexpr void __cordl_internal_set_ApplyTiming(::Fusion::RenderSource  value) ;

constexpr void __cordl_internal_set_StateHashes(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_SyncSettings(::Fusion::AnimatorSyncSettings  value) ;

constexpr void __cordl_internal_set_TotalWords(int32_t  value) ;

constexpr void __cordl_internal_set_TriggerHashes(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set__animatorData(::GlobalNamespace::NetworkMecanimAnimator_AnimatorData  value) ;

constexpr void __cordl_internal_set__isInitialized(bool  value) ;

constexpr void __cordl_internal_set__lastAppliedTick(int32_t  value) ;

constexpr void __cordl_internal_set__pendingTriggers(::System::Collections::Generic::HashSet_1<int32_t>*  value) ;

/// @brief Method .ctor, addr 0x5f864d4, size 0xa4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DynamicWordCount, addr 0x5f84ce4, size 0x68, virtual true, abstract: false, final false
inline ::System::Nullable_1<int32_t> get_DynamicWordCount() ;

/// @brief Convert to "::Fusion::IAfterAllTicks"
constexpr ::Fusion::IAfterAllTicks* i___Fusion__IAfterAllTicks() noexcept;

/// @brief Convert to "::Fusion::IPublicFacingInterface"
constexpr ::Fusion::IPublicFacingInterface* i___Fusion__IPublicFacingInterface() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkMecanimAnimator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkMecanimAnimator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkMecanimAnimator(NetworkMecanimAnimator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkMecanimAnimator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkMecanimAnimator(NetworkMecanimAnimator const& ) = delete;

/// @brief Field BITS_PER_BOOL offset 0xffffffff size 0x4
static constexpr int32_t  BITS_PER_BOOL{static_cast<int32_t>(0x4)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18925};

/// [InlineHelp]
/// @brief Field Animator, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  ___Animator;

/// [InlineHelp]
/// [SerializeField]
/// @brief Field ApplyTiming, offset: 0x88, size: 0x4, def value: None
 ::Fusion::RenderSource  ___ApplyTiming;

/// [InlineHelp]
/// [SerializeField]
/// [ExpandableEnum]
/// @brief Field SyncSettings, offset: 0x8c, size: 0x4, def value: None
 ::Fusion::AnimatorSyncSettings  ___SyncSettings;

/// [InlineHelp]
/// [SerializeField]
/// @brief Field StateHashes, offset: 0x90, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___StateHashes;

/// [InlineHelp]
/// [SerializeField]
/// @brief Field TriggerHashes, offset: 0x98, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___TriggerHashes;

/// [InlineHelp]
/// [ReadOnly]
/// [SerializeField]
/// @brief Field TotalWords, offset: 0xa0, size: 0x4, def value: None
 int32_t  ___TotalWords;

/// @brief Field _pendingTriggers, offset: 0xa8, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<int32_t>*  ____pendingTriggers;

/// @brief Field _animatorData, offset: 0xb0, size: 0x40, def value: None
 ::GlobalNamespace::NetworkMecanimAnimator_AnimatorData  ____animatorData;

/// @brief Field _isInitialized, offset: 0xf0, size: 0x1, def value: None
 bool  ____isInitialized;

/// @brief Field _lastAppliedTick, offset: 0xf4, size: 0x4, def value: None
 int32_t  ____lastAppliedTick;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkMecanimAnimator, ___Animator) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkMecanimAnimator, ___ApplyTiming) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkMecanimAnimator, ___SyncSettings) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkMecanimAnimator, ___StateHashes) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkMecanimAnimator, ___TriggerHashes) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkMecanimAnimator, ___TotalWords) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkMecanimAnimator, ____pendingTriggers) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkMecanimAnimator, ____animatorData) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkMecanimAnimator, ____isInitialized) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkMecanimAnimator, ____lastAppliedTick) == 0xf4, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkMecanimAnimator) == 0xf8, "Size mismatch!");

} // namespace end def Fusion
