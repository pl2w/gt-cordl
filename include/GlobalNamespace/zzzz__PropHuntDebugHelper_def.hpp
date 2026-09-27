#pragma once
// IWYU pragma private; include "GlobalNamespace/PropHuntDebugHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PropHuntDebugHelper)
namespace GlobalNamespace {
class GorillaPropHuntGameManager;
}
namespace GlobalNamespace {
class PropHuntDebugHelper__Start_d__8;
}
namespace GlobalNamespace {
class PropHuntHandFollower;
}
namespace GorillaTag::CosmeticSystem {
class AllCosmeticsArraySO;
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
// Forward declare root types
namespace GlobalNamespace {
class PropHuntDebugHelper;
}
namespace GlobalNamespace {
class PropHuntDebugHelper__Start_d__8;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PropHuntDebugHelper*);
MARK_REF_T(::GlobalNamespace::PropHuntDebugHelper__Start_d__8*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PropHuntDebugHelper*, "", "PropHuntDebugHelper");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PropHuntDebugHelper__Start_d__8*, "", "PropHuntDebugHelper/<Start>d__8");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PropHuntDebugHelper
class CORDL_TYPE PropHuntDebugHelper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _Start_d__8 = ::GlobalNamespace::PropHuntDebugHelper__Start_d__8;

/// @brief Field _allCosmetics, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__allCosmetics, put=__cordl_internal_set__allCosmetics)) ::UnityW<::GorillaTag::CosmeticSystem::AllCosmeticsArraySO>  _allCosmetics;

/// @brief Field _cachedAllPropIDs, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__cachedAllPropIDs, put=__cordl_internal_set__cachedAllPropIDs)) ::ArrayW<::StringW>  _cachedAllPropIDs;

/// @brief Field _localPropHuntHandFollower, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__localPropHuntHandFollower, put=__cordl_internal_set__localPropHuntHandFollower)) ::UnityW<::GlobalNamespace::PropHuntHandFollower>  _localPropHuntHandFollower;

/// @brief Field _propHuntManager, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__propHuntManager, put=__cordl_internal_set__propHuntManager)) ::UnityW<::GlobalNamespace::GorillaPropHuntGameManager>  _propHuntManager;

/// @brief Field _propsText, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__propsText, put=__cordl_internal_set__propsText)) ::UnityW<::TMPro::TextMeshPro>  _propsText;

/// @brief Field _selectedPropIndex, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__selectedPropIndex, put=__cordl_internal_set__selectedPropIndex)) int32_t  _selectedPropIndex;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::PropHuntDebugHelper>  instance;

/// @brief Method Awake, addr 0x5637560, size 0xcc, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetCurrentPropInfo, addr 0x56379d8, size 0x18, virtual false, abstract: false, final false
inline ::StringW GetCurrentPropInfo() ;

/// @brief Method GetSelectedPropID, addr 0x5637964, size 0x74, virtual false, abstract: false, final false
inline ::StringW GetSelectedPropID(int32_t  index) ;

static inline ::GlobalNamespace::PropHuntDebugHelper* New_ctor() ;

/// [ContextMenu("Next Prop")]
/// @brief Method NextProp, addr 0x5637a44, size 0x50, virtual false, abstract: false, final false
inline void NextProp() ;

/// [ContextMenu("Prev Prop")]
/// @brief Method PrevProp, addr 0x56379f0, size 0x50, virtual false, abstract: false, final false
inline void PrevProp() ;

/// @brief Method SendForcePropHandRPC, addr 0x5637a40, size 0x4, virtual false, abstract: false, final false
inline void SendForcePropHandRPC(::StringW  newPropId) ;

/// [IteratorStateMachine(typeof(PropHuntDebugHelper::<Start>d__8))]
/// @brief Method Start, addr 0x563762c, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* Start() ;

/// [ContextMenu("Toggle Round")]
/// @brief Method ToggleRound, addr 0x5637a94, size 0x4, virtual false, abstract: false, final false
inline void ToggleRound() ;

/// @brief Method UpdatePropsText, addr 0x56376c0, size 0x2a4, virtual false, abstract: false, final false
inline void UpdatePropsText() ;

constexpr ::UnityW<::GorillaTag::CosmeticSystem::AllCosmeticsArraySO> const& __cordl_internal_get__allCosmetics() const;

constexpr ::UnityW<::GorillaTag::CosmeticSystem::AllCosmeticsArraySO>& __cordl_internal_get__allCosmetics() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get__cachedAllPropIDs() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get__cachedAllPropIDs() ;

constexpr ::UnityW<::GlobalNamespace::PropHuntHandFollower> const& __cordl_internal_get__localPropHuntHandFollower() const;

constexpr ::UnityW<::GlobalNamespace::PropHuntHandFollower>& __cordl_internal_get__localPropHuntHandFollower() ;

constexpr ::UnityW<::GlobalNamespace::GorillaPropHuntGameManager> const& __cordl_internal_get__propHuntManager() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPropHuntGameManager>& __cordl_internal_get__propHuntManager() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__propsText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__propsText() ;

constexpr int32_t const& __cordl_internal_get__selectedPropIndex() const;

constexpr int32_t& __cordl_internal_get__selectedPropIndex() ;

constexpr void __cordl_internal_set__allCosmetics(::UnityW<::GorillaTag::CosmeticSystem::AllCosmeticsArraySO>  value) ;

constexpr void __cordl_internal_set__cachedAllPropIDs(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set__localPropHuntHandFollower(::UnityW<::GlobalNamespace::PropHuntHandFollower>  value) ;

constexpr void __cordl_internal_set__propHuntManager(::UnityW<::GlobalNamespace::GorillaPropHuntGameManager>  value) ;

constexpr void __cordl_internal_set__propsText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__selectedPropIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0x5637a98, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::PropHuntDebugHelper> getStaticF_instance() ;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::PropHuntDebugHelper>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PropHuntDebugHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PropHuntDebugHelper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PropHuntDebugHelper(PropHuntDebugHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PropHuntDebugHelper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PropHuntDebugHelper(PropHuntDebugHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{631};

/// [SerializeField]
/// @brief Field _propHuntManager, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPropHuntGameManager>  ____propHuntManager;

/// [SerializeField]
/// @brief Field _localPropHuntHandFollower, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PropHuntHandFollower>  ____localPropHuntHandFollower;

/// [SerializeField]
/// @brief Field _propsText, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____propsText;

/// [SerializeField]
/// @brief Field _allCosmetics, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GorillaTag::CosmeticSystem::AllCosmeticsArraySO>  ____allCosmetics;

/// @brief Field _cachedAllPropIDs, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::StringW>  ____cachedAllPropIDs;

/// @brief Field _selectedPropIndex, offset: 0x48, size: 0x4, def value: None
 int32_t  ____selectedPropIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PropHuntDebugHelper, ____propHuntManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHuntDebugHelper, ____localPropHuntHandFollower) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHuntDebugHelper, ____propsText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHuntDebugHelper, ____allCosmetics) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHuntDebugHelper, ____cachedAllPropIDs) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHuntDebugHelper, ____selectedPropIndex) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PropHuntDebugHelper) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PropHuntDebugHelper/<Start>d__8
class CORDL_TYPE PropHuntDebugHelper__Start_d__8 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::PropHuntDebugHelper>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5637aac, size 0x2d4, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::PropHuntDebugHelper__Start_d__8* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5637d80, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5637d88, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5637dc0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5637aa8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::PropHuntDebugHelper> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::PropHuntDebugHelper>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PropHuntDebugHelper>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5637698, size 0x28, virtual false, abstract: false, final false
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
constexpr PropHuntDebugHelper__Start_d__8() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PropHuntDebugHelper__Start_d__8", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PropHuntDebugHelper__Start_d__8(PropHuntDebugHelper__Start_d__8 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PropHuntDebugHelper__Start_d__8", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PropHuntDebugHelper__Start_d__8(PropHuntDebugHelper__Start_d__8 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{630};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PropHuntDebugHelper>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PropHuntDebugHelper__Start_d__8, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHuntDebugHelper__Start_d__8, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHuntDebugHelper__Start_d__8, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PropHuntDebugHelper__Start_d__8) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
