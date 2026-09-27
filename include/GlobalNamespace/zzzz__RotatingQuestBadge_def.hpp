#pragma once
// IWYU pragma private; include "GlobalNamespace/RotatingQuestBadge.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RotatingQuestBadge_BadgeLevel_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RotatingQuestBadge)
namespace GlobalNamespace {
struct RotatingQuestBadge_BadgeLevel;
}
namespace GlobalNamespace {
class RotatingQuestBadge__DoFindRig_d__17;
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
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
class WaitForSeconds;
}
// Forward declare root types
namespace GlobalNamespace {
class RotatingQuestBadge;
}
namespace GlobalNamespace {
class RotatingQuestBadge__DoFindRig_d__17;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RotatingQuestBadge*);
MARK_REF_T(::GlobalNamespace::RotatingQuestBadge__DoFindRig_d__17*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RotatingQuestBadge*, "", "RotatingQuestBadge");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RotatingQuestBadge__DoFindRig_d__17*, "", "RotatingQuestBadge/<DoFindRig>d__17");
// Dependencies GorillaTag.CosmeticSystem.ECosmeticSelectSide, RotatingQuestBadge::BadgeLevel, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: RotatingQuestBadge
class CORDL_TYPE RotatingQuestBadge : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using BadgeLevel = ::GlobalNamespace::RotatingQuestBadge_BadgeLevel;

using _DoFindRig_d__17 = ::GlobalNamespace::RotatingQuestBadge__DoFindRig_d__17;

 __declspec(property(get=GorillaTag_ISpawnable_get_CosmeticSelectedSide, put=GorillaTag_ISpawnable_set_CosmeticSelectedSide)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  GorillaTag_ISpawnable_CosmeticSelectedSide;

 __declspec(property(get=get_IsSpawned, put=set_IsSpawned)) bool  IsSpawned;

/// @brief Field <GorillaTag.ISpawnable.CosmeticSelectedSide>k__BackingField, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField, put=__cordl_internal_set__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  _GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField;

/// @brief Field <IsSpawned>k__BackingField, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsSpawned_k__BackingField, put=__cordl_internal_set__IsSpawned_k__BackingField)) bool  _IsSpawned_k__BackingField;

/// @brief Field badgeLevels, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_badgeLevels, put=__cordl_internal_set_badgeLevels)) ::ArrayW<::GlobalNamespace::RotatingQuestBadge_BadgeLevel>  badgeLevels;

/// @brief Field displayField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_displayField, put=__cordl_internal_set_displayField)) ::UnityW<::TMPro::TextMeshPro>  displayField;

/// @brief Field forWardrobe, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_forWardrobe, put=__cordl_internal_set_forWardrobe)) bool  forWardrobe;

/// @brief Field myRig, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_myRig, put=__cordl_internal_set_myRig)) ::UnityW<::GlobalNamespace::VRRig>  myRig;

/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr operator  ::GorillaTag::ISpawnable*() noexcept;

/// [IteratorStateMachine(typeof(RotatingQuestBadge::<DoFindRig>d__17))]
/// @brief Method DoFindRig, addr 0x562c1e8, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DoFindRig() ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.get_CosmeticSelectedSide, addr 0x562be08, size 0x8, virtual true, abstract: false, final true
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide GorillaTag_ISpawnable_get_CosmeticSelectedSide() ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.set_CosmeticSelectedSide, addr 0x562be10, size 0x8, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

static inline ::GlobalNamespace::RotatingQuestBadge* New_ctor() ;

/// @brief Method OnDespawn, addr 0x562c114, size 0x4, virtual true, abstract: false, final true
inline void OnDespawn() ;

/// @brief Method OnDisable, addr 0x562c254, size 0xf4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x562c118, size 0x48, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnProgressScoreChanged, addr 0x562c0a8, size 0x6c, virtual false, abstract: false, final false
inline void OnProgressScoreChanged(int32_t  score) ;

/// @brief Method OnSpawn, addr 0x562be18, size 0x118, virtual true, abstract: false, final true
inline void OnSpawn(::GlobalNamespace::VRRig*  rig) ;

/// @brief Method SetBadgeLevel, addr 0x562c160, size 0x88, virtual false, abstract: false, final false
inline void SetBadgeLevel(int32_t  level) ;

/// @brief Method TryGetRig, addr 0x562bf30, size 0x178, virtual false, abstract: false, final false
inline bool TryGetRig() ;

/// @brief Method UpdateBadge, addr 0x562c370, size 0x80, virtual false, abstract: false, final false
inline void UpdateBadge(int32_t  score) ;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& __cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField() const;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& __cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsSpawned_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsSpawned_k__BackingField() ;

constexpr ::ArrayW<::GlobalNamespace::RotatingQuestBadge_BadgeLevel> const& __cordl_internal_get_badgeLevels() const;

constexpr ::ArrayW<::GlobalNamespace::RotatingQuestBadge_BadgeLevel>& __cordl_internal_get_badgeLevels() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_displayField() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_displayField() ;

constexpr bool const& __cordl_internal_get_forWardrobe() const;

constexpr bool& __cordl_internal_get_forWardrobe() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_myRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_myRig() ;

constexpr void __cordl_internal_set__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

constexpr void __cordl_internal_set__IsSpawned_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_badgeLevels(::ArrayW<::GlobalNamespace::RotatingQuestBadge_BadgeLevel>  value) ;

constexpr void __cordl_internal_set_displayField(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_forWardrobe(bool  value) ;

constexpr void __cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

/// @brief Method .ctor, addr 0x562c3f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_IsSpawned, addr 0x562bdf8, size 0x8, virtual true, abstract: false, final true
inline bool get_IsSpawned() ;

/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* i___GorillaTag__ISpawnable() noexcept;

/// [CompilerGenerated]
/// @brief Method set_IsSpawned, addr 0x562be00, size 0x8, virtual true, abstract: false, final true
inline void set_IsSpawned(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RotatingQuestBadge() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RotatingQuestBadge", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RotatingQuestBadge(RotatingQuestBadge && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RotatingQuestBadge", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RotatingQuestBadge(RotatingQuestBadge const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{613};

/// [SerializeField]
/// @brief Field displayField, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___displayField;

/// [SerializeField]
/// @brief Field forWardrobe, offset: 0x28, size: 0x1, def value: None
 bool  ___forWardrobe;

/// [SerializeField]
/// @brief Field myRig, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___myRig;

/// [SerializeField]
/// @brief Field badgeLevels, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::RotatingQuestBadge_BadgeLevel>  ___badgeLevels;

/// [CompilerGenerated]
/// @brief Field <IsSpawned>k__BackingField, offset: 0x40, size: 0x1, def value: None
 bool  ____IsSpawned_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <GorillaTag.ISpawnable.CosmeticSelectedSide>k__BackingField, offset: 0x44, size: 0x4, def value: None
 ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  ____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RotatingQuestBadge, ___displayField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotatingQuestBadge, ___forWardrobe) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotatingQuestBadge, ___myRig) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotatingQuestBadge, ___badgeLevels) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotatingQuestBadge, ____IsSpawned_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotatingQuestBadge, ____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RotatingQuestBadge) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RotatingQuestBadge/<DoFindRig>d__17
class CORDL_TYPE RotatingQuestBadge__DoFindRig_d__17 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::RotatingQuestBadge>  __4__this;

/// @brief Field <intervalWait>5__2, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__intervalWait_5__2, put=__cordl_internal_set__intervalWait_5__2)) ::UnityEngine::WaitForSeconds*  _intervalWait_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x562c3fc, size 0xc8, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::RotatingQuestBadge__DoFindRig_d__17* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x562c4c4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x562c4cc, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x562c504, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x562c3f8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::RotatingQuestBadge> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::RotatingQuestBadge>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::WaitForSeconds* const& __cordl_internal_get__intervalWait_5__2() const;

constexpr ::UnityEngine::WaitForSeconds*& __cordl_internal_get__intervalWait_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::RotatingQuestBadge>  value) ;

constexpr void __cordl_internal_set__intervalWait_5__2(::UnityEngine::WaitForSeconds*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x562c348, size 0x28, virtual false, abstract: false, final false
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
constexpr RotatingQuestBadge__DoFindRig_d__17() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RotatingQuestBadge__DoFindRig_d__17", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RotatingQuestBadge__DoFindRig_d__17(RotatingQuestBadge__DoFindRig_d__17 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RotatingQuestBadge__DoFindRig_d__17", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RotatingQuestBadge__DoFindRig_d__17(RotatingQuestBadge__DoFindRig_d__17 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{612};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RotatingQuestBadge>  _____4__this;

/// @brief Field <intervalWait>5__2, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::WaitForSeconds*  ____intervalWait_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RotatingQuestBadge__DoFindRig_d__17, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotatingQuestBadge__DoFindRig_d__17, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotatingQuestBadge__DoFindRig_d__17, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotatingQuestBadge__DoFindRig_d__17, ____intervalWait_5__2) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RotatingQuestBadge__DoFindRig_d__17) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
