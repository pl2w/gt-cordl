#pragma once
// IWYU pragma private; include "GorillaTag/Reactions/GorillaMaterialReaction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/Reactions/zzzz__GorillaMaterialReaction_EMomentInState_def.hpp"
#include "GorillaTag/Reactions/zzzz__GorillaMaterialReaction_ReactionEntry_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaMaterialReaction)
namespace GlobalNamespace {
struct GorillaMaterialReaction_EMomentInState;
}
namespace GlobalNamespace {
struct GorillaMaterialReaction_GameObjectStates;
}
namespace GlobalNamespace {
struct GorillaMaterialReaction_MomentInStateActiveOption;
}
namespace GlobalNamespace {
struct GorillaMaterialReaction_ReactionEntry;
}
namespace GlobalNamespace {
class ITickSystemPost;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaTag::Reactions {
class GorillaMaterialReaction_MomentInStateAttribute;
}
// Forward declare root types
namespace GorillaTag::Reactions {
class GorillaMaterialReaction;
}
namespace GorillaTag::Reactions {
class GorillaMaterialReaction_MomentInStateAttribute;
}
// Write type traits
MARK_REF_T(::GorillaTag::Reactions::GorillaMaterialReaction*);
MARK_REF_T(::GorillaTag::Reactions::GorillaMaterialReaction_MomentInStateAttribute*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Reactions::GorillaMaterialReaction*, "GorillaTag.Reactions", "GorillaMaterialReaction");
DEFINE_IL2CPP_CLASS(::GorillaTag::Reactions::GorillaMaterialReaction_MomentInStateAttribute*, "GorillaTag.Reactions", "GorillaMaterialReaction/MomentInStateAttribute");
// Dependencies GorillaTag.Reactions.GorillaMaterialReaction::EMomentInState, GorillaTag.Reactions.GorillaMaterialReaction::ReactionEntry, UnityEngine.GameObject, UnityEngine.MonoBehaviour
namespace GorillaTag::Reactions {
// Is value type: false
// CS Name: GorillaTag.Reactions.GorillaMaterialReaction
class CORDL_TYPE GorillaMaterialReaction : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using EMomentInState = ::GlobalNamespace::GorillaMaterialReaction_EMomentInState;

using GameObjectStates = ::GlobalNamespace::GorillaMaterialReaction_GameObjectStates;

using MomentInStateActiveOption = ::GlobalNamespace::GorillaMaterialReaction_MomentInStateActiveOption;

using ReactionEntry = ::GlobalNamespace::GorillaMaterialReaction_ReactionEntry;

using MomentInStateAttribute = ::GorillaTag::Reactions::GorillaMaterialReaction_MomentInStateAttribute;

 __declspec(property(get=ITickSystemPost_get_PostTickRunning, put=ITickSystemPost_set_PostTickRunning)) bool  ITickSystemPost_PostTickRunning;

/// @brief Field <ITickSystemPost.PostTickRunning>k__BackingField, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__ITickSystemPost_PostTickRunning_k__BackingField, put=__cordl_internal_set__ITickSystemPost_PostTickRunning_k__BackingField)) bool  _ITickSystemPost_PostTickRunning_k__BackingField;

/// @brief Field _currentMatIndexStartTime, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentMatIndexStartTime, put=__cordl_internal_set__currentMatIndexStartTime)) double_t  _currentMatIndexStartTime;

/// @brief Field _currentMomentDuration, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentMomentDuration, put=__cordl_internal_set__currentMomentDuration)) double_t  _currentMomentDuration;

/// @brief Field _currentMomentInState, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentMomentInState, put=__cordl_internal_set__currentMomentInState)) ::GlobalNamespace::GorillaMaterialReaction_EMomentInState  _currentMomentInState;

/// @brief Field _matCount, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__matCount, put=__cordl_internal_set__matCount)) int32_t  _matCount;

/// @brief Field _mat_x_moment_x_activeBool_to_gObjs, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__mat_x_moment_x_activeBool_to_gObjs, put=__cordl_internal_set__mat_x_moment_x_activeBool_to_gObjs)) ::ArrayW<::ArrayW<::UnityW<::UnityEngine::GameObject>>>  _mat_x_moment_x_activeBool_to_gObjs;

/// @brief Field _momentEnumCount, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__momentEnumCount, put=__cordl_internal_set__momentEnumCount)) int32_t  _momentEnumCount;

/// @brief Field _ownerVRRig, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__ownerVRRig, put=__cordl_internal_set__ownerVRRig)) ::UnityW<::GlobalNamespace::VRRig>  _ownerVRRig;

/// @brief Field _previousMatIndex, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__previousMatIndex, put=__cordl_internal_set__previousMatIndex)) int32_t  _previousMatIndex;

/// @brief Field _reactionsRemaining, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__reactionsRemaining, put=__cordl_internal_set__reactionsRemaining)) int32_t  _reactionsRemaining;

/// @brief Field _statusEffectReactions, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__statusEffectReactions, put=__cordl_internal_set__statusEffectReactions)) ::ArrayW<::GlobalNamespace::GorillaMaterialReaction_ReactionEntry>  _statusEffectReactions;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemPost"
constexpr operator  ::GlobalNamespace::ITickSystemPost*() noexcept;

/// @brief Method Awake, addr 0x5d40658, size 0x18, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ITickSystemPost.PostTick, addr 0x5d40efc, size 0x318, virtual true, abstract: false, final true
inline void ITickSystemPost_PostTick() ;

/// [CompilerGenerated]
/// @brief Method ITickSystemPost.get_PostTickRunning, addr 0x5d40eec, size 0x8, virtual true, abstract: false, final true
inline bool ITickSystemPost_get_PostTickRunning() ;

/// [CompilerGenerated]
/// @brief Method ITickSystemPost.set_PostTickRunning, addr 0x5d40ef4, size 0x8, virtual true, abstract: false, final true
inline void ITickSystemPost_set_PostTickRunning(bool  value) ;

static inline ::GorillaTag::Reactions::GorillaMaterialReaction* New_ctor() ;

/// @brief Method OnDisable, addr 0x5d40e80, size 0x6c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5d40c4c, size 0x234, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PopulateRuntimeLookupArrays, addr 0x5d40160, size 0x4f8, virtual false, abstract: false, final false
inline void PopulateRuntimeLookupArrays() ;

/// @brief Method RemoveAndReportNulls, addr 0x5d40670, size 0x5dc, virtual false, abstract: false, final false
inline void RemoveAndReportNulls() ;

constexpr bool const& __cordl_internal_get__ITickSystemPost_PostTickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__ITickSystemPost_PostTickRunning_k__BackingField() ;

constexpr double_t const& __cordl_internal_get__currentMatIndexStartTime() const;

constexpr double_t& __cordl_internal_get__currentMatIndexStartTime() ;

constexpr double_t const& __cordl_internal_get__currentMomentDuration() const;

constexpr double_t& __cordl_internal_get__currentMomentDuration() ;

constexpr ::GlobalNamespace::GorillaMaterialReaction_EMomentInState const& __cordl_internal_get__currentMomentInState() const;

constexpr ::GlobalNamespace::GorillaMaterialReaction_EMomentInState& __cordl_internal_get__currentMomentInState() ;

constexpr int32_t const& __cordl_internal_get__matCount() const;

constexpr int32_t& __cordl_internal_get__matCount() ;

constexpr ::ArrayW<::ArrayW<::UnityW<::UnityEngine::GameObject>>> const& __cordl_internal_get__mat_x_moment_x_activeBool_to_gObjs() const;

constexpr ::ArrayW<::ArrayW<::UnityW<::UnityEngine::GameObject>>>& __cordl_internal_get__mat_x_moment_x_activeBool_to_gObjs() ;

constexpr int32_t const& __cordl_internal_get__momentEnumCount() const;

constexpr int32_t& __cordl_internal_get__momentEnumCount() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get__ownerVRRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get__ownerVRRig() ;

constexpr int32_t const& __cordl_internal_get__previousMatIndex() const;

constexpr int32_t& __cordl_internal_get__previousMatIndex() ;

constexpr int32_t const& __cordl_internal_get__reactionsRemaining() const;

constexpr int32_t& __cordl_internal_get__reactionsRemaining() ;

constexpr ::ArrayW<::GlobalNamespace::GorillaMaterialReaction_ReactionEntry> const& __cordl_internal_get__statusEffectReactions() const;

constexpr ::ArrayW<::GlobalNamespace::GorillaMaterialReaction_ReactionEntry>& __cordl_internal_get__statusEffectReactions() ;

constexpr void __cordl_internal_set__ITickSystemPost_PostTickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__currentMatIndexStartTime(double_t  value) ;

constexpr void __cordl_internal_set__currentMomentDuration(double_t  value) ;

constexpr void __cordl_internal_set__currentMomentInState(::GlobalNamespace::GorillaMaterialReaction_EMomentInState  value) ;

constexpr void __cordl_internal_set__matCount(int32_t  value) ;

constexpr void __cordl_internal_set__mat_x_moment_x_activeBool_to_gObjs(::ArrayW<::ArrayW<::UnityW<::UnityEngine::GameObject>>>  value) ;

constexpr void __cordl_internal_set__momentEnumCount(int32_t  value) ;

constexpr void __cordl_internal_set__ownerVRRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set__previousMatIndex(int32_t  value) ;

constexpr void __cordl_internal_set__reactionsRemaining(int32_t  value) ;

constexpr void __cordl_internal_set__statusEffectReactions(::ArrayW<::GlobalNamespace::GorillaMaterialReaction_ReactionEntry>  value) ;

/// @brief Method .ctor, addr 0x5d41214, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemPost"
constexpr ::GlobalNamespace::ITickSystemPost* i___GlobalNamespace__ITickSystemPost() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaMaterialReaction() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaMaterialReaction", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaMaterialReaction(GorillaMaterialReaction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaMaterialReaction", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaMaterialReaction(GorillaMaterialReaction const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4707};

/// [SerializeField]
/// @brief Field _statusEffectReactions, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::GorillaMaterialReaction_ReactionEntry>  ____statusEffectReactions;

/// @brief Field _previousMatIndex, offset: 0x28, size: 0x4, def value: None
 int32_t  ____previousMatIndex;

/// @brief Field _currentMomentInState, offset: 0x2c, size: 0x4, def value: None
 ::GlobalNamespace::GorillaMaterialReaction_EMomentInState  ____currentMomentInState;

/// @brief Field _currentMatIndexStartTime, offset: 0x30, size: 0x8, def value: None
 double_t  ____currentMatIndexStartTime;

/// @brief Field _currentMomentDuration, offset: 0x38, size: 0x8, def value: None
 double_t  ____currentMomentDuration;

/// @brief Field _reactionsRemaining, offset: 0x40, size: 0x4, def value: None
 int32_t  ____reactionsRemaining;

/// @brief Field _momentEnumCount, offset: 0x44, size: 0x4, def value: None
 int32_t  ____momentEnumCount;

/// @brief Field _matCount, offset: 0x48, size: 0x4, def value: None
 int32_t  ____matCount;

/// @brief Field _mat_x_moment_x_activeBool_to_gObjs, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::ArrayW<::UnityW<::UnityEngine::GameObject>>>  ____mat_x_moment_x_activeBool_to_gObjs;

/// @brief Field _ownerVRRig, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ____ownerVRRig;

/// [CompilerGenerated]
/// @brief Field <ITickSystemPost.PostTickRunning>k__BackingField, offset: 0x60, size: 0x1, def value: None
 bool  ____ITickSystemPost_PostTickRunning_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Reactions::GorillaMaterialReaction, ____statusEffectReactions) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::GorillaMaterialReaction, ____previousMatIndex) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::GorillaMaterialReaction, ____currentMomentInState) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::GorillaMaterialReaction, ____currentMatIndexStartTime) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::GorillaMaterialReaction, ____currentMomentDuration) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::GorillaMaterialReaction, ____reactionsRemaining) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::GorillaMaterialReaction, ____momentEnumCount) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::GorillaMaterialReaction, ____matCount) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::GorillaMaterialReaction, ____mat_x_moment_x_activeBool_to_gObjs) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::GorillaMaterialReaction, ____ownerVRRig) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::GorillaMaterialReaction, ____ITickSystemPost_PostTickRunning_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Reactions::GorillaMaterialReaction) == 0x68, "Size mismatch!");

} // namespace end def GorillaTag::Reactions
// Dependencies System.Attribute
namespace GorillaTag::Reactions {
// Is value type: false
// CS Name: GorillaTag.Reactions.GorillaMaterialReaction/MomentInStateAttribute
class CORDL_TYPE GorillaMaterialReaction_MomentInStateAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::GorillaTag::Reactions::GorillaMaterialReaction_MomentInStateAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x5d4121c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaMaterialReaction_MomentInStateAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaMaterialReaction_MomentInStateAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaMaterialReaction_MomentInStateAttribute(GorillaMaterialReaction_MomentInStateAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaMaterialReaction_MomentInStateAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaMaterialReaction_MomentInStateAttribute(GorillaMaterialReaction_MomentInStateAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4706};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTag::Reactions::GorillaMaterialReaction_MomentInStateAttribute) == 0x10, "Size mismatch!");

} // namespace end def GorillaTag::Reactions
