#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaTagCompetitiveRankCosmetic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaTagCompetitiveRankCosmetic)
namespace GlobalNamespace {
class GorillaTagCompetitiveRankCosmetic__DoFindRig_d__16;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaTag::CosmeticSystem {
struct ECosmeticSelectSide;
}
namespace GorillaTag {
class ISpawnable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class WaitForSeconds;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaTagCompetitiveRankCosmetic;
}
namespace GlobalNamespace {
class GorillaTagCompetitiveRankCosmetic__DoFindRig_d__16;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaTagCompetitiveRankCosmetic*);
MARK_REF_T(::GlobalNamespace::GorillaTagCompetitiveRankCosmetic__DoFindRig_d__16*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTagCompetitiveRankCosmetic*, "", "GorillaTagCompetitiveRankCosmetic");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTagCompetitiveRankCosmetic__DoFindRig_d__16*, "", "GorillaTagCompetitiveRankCosmetic/<DoFindRig>d__16");
// Dependencies GorillaTag.CosmeticSystem.ECosmeticSelectSide, UnityEngine.GameObject, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaTagCompetitiveRankCosmetic
class CORDL_TYPE GorillaTagCompetitiveRankCosmetic : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _DoFindRig_d__16 = ::GlobalNamespace::GorillaTagCompetitiveRankCosmetic__DoFindRig_d__16;

 __declspec(property(get=GorillaTag_ISpawnable_get_CosmeticSelectedSide, put=GorillaTag_ISpawnable_set_CosmeticSelectedSide)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  GorillaTag_ISpawnable_CosmeticSelectedSide;

 __declspec(property(get=get_IsSpawned, put=set_IsSpawned)) bool  IsSpawned;

/// @brief Field <GorillaTag.ISpawnable.CosmeticSelectedSide>k__BackingField, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField, put=__cordl_internal_set__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  _GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField;

/// @brief Field <IsSpawned>k__BackingField, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsSpawned_k__BackingField, put=__cordl_internal_set__IsSpawned_k__BackingField)) bool  _IsSpawned_k__BackingField;

/// @brief Field forWardrobe, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_forWardrobe, put=__cordl_internal_set_forWardrobe)) bool  forWardrobe;

/// @brief Field myRig, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_myRig, put=__cordl_internal_set_myRig)) ::UnityW<::GlobalNamespace::VRRig>  myRig;

/// @brief Field rankCosmetics, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_rankCosmetics, put=__cordl_internal_set_rankCosmetics)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  rankCosmetics;

/// @brief Field usePCELO, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_usePCELO, put=__cordl_internal_set_usePCELO)) bool  usePCELO;

/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr operator  ::GorillaTag::ISpawnable*() noexcept;

/// [IteratorStateMachine(typeof(GorillaTagCompetitiveRankCosmetic::<DoFindRig>d__16))]
/// @brief Method DoFindRig, addr 0x592a508, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DoFindRig() ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.get_CosmeticSelectedSide, addr 0x592a154, size 0x8, virtual true, abstract: false, final true
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide GorillaTag_ISpawnable_get_CosmeticSelectedSide() ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.set_CosmeticSelectedSide, addr 0x592a15c, size 0x8, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

static inline ::GlobalNamespace::GorillaTagCompetitiveRankCosmetic* New_ctor() ;

/// @brief Method OnDespawn, addr 0x592a440, size 0x4, virtual true, abstract: false, final true
inline void OnDespawn() ;

/// @brief Method OnDisable, addr 0x592a574, size 0xf4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x592a444, size 0x4c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnRankedScoreChanged, addr 0x592a43c, size 0x4, virtual false, abstract: false, final false
inline void OnRankedScoreChanged(int32_t  questRank, int32_t  pcRank) ;

/// @brief Method OnSpawn, addr 0x592a164, size 0x13c, virtual true, abstract: false, final true
inline void OnSpawn(::GlobalNamespace::VRRig*  rig) ;

/// @brief Method TryGetRig, addr 0x592a2a0, size 0x19c, virtual false, abstract: false, final false
inline bool TryGetRig() ;

/// @brief Method UpdateDisplayedCosmetic, addr 0x592a490, size 0x78, virtual false, abstract: false, final false
inline void UpdateDisplayedCosmetic(int32_t  questRank, int32_t  pcRank) ;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& __cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField() const;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& __cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsSpawned_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsSpawned_k__BackingField() ;

constexpr bool const& __cordl_internal_get_forWardrobe() const;

constexpr bool& __cordl_internal_get_forWardrobe() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_myRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_myRig() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_rankCosmetics() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_rankCosmetics() ;

constexpr bool const& __cordl_internal_get_usePCELO() const;

constexpr bool& __cordl_internal_get_usePCELO() ;

constexpr void __cordl_internal_set__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

constexpr void __cordl_internal_set__IsSpawned_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_forWardrobe(bool  value) ;

constexpr void __cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_rankCosmetics(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_usePCELO(bool  value) ;

/// @brief Method .ctor, addr 0x592a690, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_IsSpawned, addr 0x592a144, size 0x8, virtual true, abstract: false, final true
inline bool get_IsSpawned() ;

/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* i___GorillaTag__ISpawnable() noexcept;

/// [CompilerGenerated]
/// @brief Method set_IsSpawned, addr 0x592a14c, size 0x8, virtual true, abstract: false, final true
inline void set_IsSpawned(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaTagCompetitiveRankCosmetic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveRankCosmetic", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaTagCompetitiveRankCosmetic(GorillaTagCompetitiveRankCosmetic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveRankCosmetic", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaTagCompetitiveRankCosmetic(GorillaTagCompetitiveRankCosmetic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2224};

/// [Tooltip("If enabled, display PC rank. Otherwise, display Quest rank")]
/// [SerializeField]
/// @brief Field usePCELO, offset: 0x20, size: 0x1, def value: None
 bool  ___usePCELO;

/// [SerializeField]
/// @brief Field forWardrobe, offset: 0x21, size: 0x1, def value: None
 bool  ___forWardrobe;

/// [SerializeField]
/// @brief Field myRig, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___myRig;

/// [SerializeField]
/// @brief Field rankCosmetics, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___rankCosmetics;

/// [CompilerGenerated]
/// @brief Field <IsSpawned>k__BackingField, offset: 0x38, size: 0x1, def value: None
 bool  ____IsSpawned_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <GorillaTag.ISpawnable.CosmeticSelectedSide>k__BackingField, offset: 0x3c, size: 0x4, def value: None
 ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  ____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveRankCosmetic, ___usePCELO) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveRankCosmetic, ___forWardrobe) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveRankCosmetic, ___myRig) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveRankCosmetic, ___rankCosmetics) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveRankCosmetic, ____IsSpawned_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveRankCosmetic, ____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaTagCompetitiveRankCosmetic) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaTagCompetitiveRankCosmetic/<DoFindRig>d__16
class CORDL_TYPE GorillaTagCompetitiveRankCosmetic__DoFindRig_d__16 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::GorillaTagCompetitiveRankCosmetic>  __4__this;

/// @brief Field <intervalWait>5__2, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__intervalWait_5__2, put=__cordl_internal_set__intervalWait_5__2)) ::UnityEngine::WaitForSeconds*  _intervalWait_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x592a69c, size 0xc8, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::GorillaTagCompetitiveRankCosmetic__DoFindRig_d__16* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x592a764, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x592a76c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x592a7a4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x592a698, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::GorillaTagCompetitiveRankCosmetic> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::GorillaTagCompetitiveRankCosmetic>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::WaitForSeconds* const& __cordl_internal_get__intervalWait_5__2() const;

constexpr ::UnityEngine::WaitForSeconds*& __cordl_internal_get__intervalWait_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GorillaTagCompetitiveRankCosmetic>  value) ;

constexpr void __cordl_internal_set__intervalWait_5__2(::UnityEngine::WaitForSeconds*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x592a668, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaTagCompetitiveRankCosmetic__DoFindRig_d__16() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveRankCosmetic__DoFindRig_d__16", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaTagCompetitiveRankCosmetic__DoFindRig_d__16(GorillaTagCompetitiveRankCosmetic__DoFindRig_d__16 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveRankCosmetic__DoFindRig_d__16", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaTagCompetitiveRankCosmetic__DoFindRig_d__16(GorillaTagCompetitiveRankCosmetic__DoFindRig_d__16 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2223};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaTagCompetitiveRankCosmetic>  _____4__this;

/// @brief Field <intervalWait>5__2, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::WaitForSeconds*  ____intervalWait_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveRankCosmetic__DoFindRig_d__16, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveRankCosmetic__DoFindRig_d__16, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveRankCosmetic__DoFindRig_d__16, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveRankCosmetic__DoFindRig_d__16, ____intervalWait_5__2) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaTagCompetitiveRankCosmetic__DoFindRig_d__16) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
