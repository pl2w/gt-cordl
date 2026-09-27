#pragma once
// IWYU pragma private; include "GlobalNamespace/BubbleGumEvents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BubbleGumEvents)
namespace GlobalNamespace {
struct BubbleGumEvents_EdibleState;
}
namespace GlobalNamespace {
class BubbleGumEvents___c;
}
namespace GlobalNamespace {
class EdibleHoldable;
}
namespace GlobalNamespace {
class GumBubble;
}
namespace GlobalNamespace {
class VRRig;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class BubbleGumEvents;
}
namespace GlobalNamespace {
class BubbleGumEvents___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BubbleGumEvents*);
MARK_REF_T(::GlobalNamespace::BubbleGumEvents___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BubbleGumEvents*, "", "BubbleGumEvents");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BubbleGumEvents___c*, "", "BubbleGumEvents/<>c");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BubbleGumEvents
class CORDL_TYPE BubbleGumEvents : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using EdibleState = ::GlobalNamespace::BubbleGumEvents_EdibleState;

using __c = ::GlobalNamespace::BubbleGumEvents___c;

/// @brief Field _bubble, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__bubble, put=__cordl_internal_set__bubble)) ::UnityW<::GlobalNamespace::GumBubble>  _bubble;

/// @brief Field _edible, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__edible, put=__cordl_internal_set__edible)) ::UnityW<::GlobalNamespace::EdibleHoldable>  _edible;

/// @brief Field gTargetCache, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gTargetCache, put=setStaticF_gTargetCache)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::UnityW<::GlobalNamespace::GumBubble>>*  gTargetCache;

static inline ::GlobalNamespace::BubbleGumEvents* New_ctor() ;

/// @brief Method OnBite, addr 0x5789654, size 0x3e8, virtual false, abstract: false, final false
inline void OnBite(::GlobalNamespace::VRRig*  rig, int32_t  nextState, bool  isViewRig) ;

/// @brief Method OnBiteView, addr 0x578964c, size 0x8, virtual false, abstract: false, final false
inline void OnBiteView(::GlobalNamespace::VRRig*  rig, int32_t  nextState) ;

/// @brief Method OnBiteWorld, addr 0x5789a3c, size 0x8, virtual false, abstract: false, final false
inline void OnBiteWorld(::GlobalNamespace::VRRig*  rig, int32_t  nextState) ;

/// @brief Method OnDisable, addr 0x5789550, size 0xfc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5789454, size 0xfc, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::UnityW<::GlobalNamespace::GumBubble> const& __cordl_internal_get__bubble() const;

constexpr ::UnityW<::GlobalNamespace::GumBubble>& __cordl_internal_get__bubble() ;

constexpr ::UnityW<::GlobalNamespace::EdibleHoldable> const& __cordl_internal_get__edible() const;

constexpr ::UnityW<::GlobalNamespace::EdibleHoldable>& __cordl_internal_get__edible() ;

constexpr void __cordl_internal_set__bubble(::UnityW<::GlobalNamespace::GumBubble>  value) ;

constexpr void __cordl_internal_set__edible(::UnityW<::GlobalNamespace::EdibleHoldable>  value) ;

/// @brief Method .ctor, addr 0x5789a4c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::UnityW<::GlobalNamespace::GumBubble>>* getStaticF_gTargetCache() ;

static inline void setStaticF_gTargetCache(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::UnityW<::GlobalNamespace::GumBubble>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BubbleGumEvents() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BubbleGumEvents", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BubbleGumEvents(BubbleGumEvents && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BubbleGumEvents", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BubbleGumEvents(BubbleGumEvents const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1424};

/// [SerializeField]
/// @brief Field _edible, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EdibleHoldable>  ____edible;

/// [SerializeField]
/// @brief Field _bubble, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GumBubble>  ____bubble;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BubbleGumEvents, ____edible) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BubbleGumEvents, ____bubble) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BubbleGumEvents) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BubbleGumEvents/<>c
class CORDL_TYPE BubbleGumEvents___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::BubbleGumEvents___c*  __9;

/// @brief Field <>9__7_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__7_0, put=setStaticF___9__7_0)) ::System::Func_2<::UnityW<::GlobalNamespace::GumBubble>,bool>*  __9__7_0;

static inline ::GlobalNamespace::BubbleGumEvents___c* New_ctor() ;

/// @brief Method <OnBite>b__7_0, addr 0x5789b60, size 0x74, virtual false, abstract: false, final false
inline bool _OnBite_b__7_0(::GlobalNamespace::GumBubble*  g) ;

/// @brief Method .ctor, addr 0x5789b58, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::BubbleGumEvents___c* getStaticF___9() ;

static inline ::System::Func_2<::UnityW<::GlobalNamespace::GumBubble>,bool>* getStaticF___9__7_0() ;

static inline void setStaticF___9(::GlobalNamespace::BubbleGumEvents___c*  value) ;

static inline void setStaticF___9__7_0(::System::Func_2<::UnityW<::GlobalNamespace::GumBubble>,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BubbleGumEvents___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BubbleGumEvents___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BubbleGumEvents___c(BubbleGumEvents___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BubbleGumEvents___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BubbleGumEvents___c(BubbleGumEvents___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1423};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BubbleGumEvents___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
