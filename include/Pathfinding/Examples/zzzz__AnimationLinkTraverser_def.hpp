#pragma once
// IWYU pragma private; include "Pathfinding/Examples/AnimationLinkTraverser.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__VersionedMonoBehaviour_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AnimationLinkTraverser)
namespace Pathfinding::Examples {
class AnimationLinkTraverser__TraverseOffMeshLink_d__4;
}
namespace Pathfinding {
class AnimationLink;
}
namespace Pathfinding {
class RichAI;
}
namespace Pathfinding {
class RichSpecial;
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
class Animation;
}
// Forward declare root types
namespace Pathfinding::Examples {
class AnimationLinkTraverser;
}
namespace Pathfinding::Examples {
class AnimationLinkTraverser__TraverseOffMeshLink_d__4;
}
// Write type traits
MARK_REF_T(::Pathfinding::Examples::AnimationLinkTraverser*);
MARK_REF_T(::Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Examples::AnimationLinkTraverser*, "Pathfinding.Examples", "AnimationLinkTraverser");
DEFINE_IL2CPP_CLASS(::Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4*, "Pathfinding.Examples", "AnimationLinkTraverser/<TraverseOffMeshLink>d__4");
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_examples_1_1_animation_link_traverser.php")]
// Dependencies Pathfinding.VersionedMonoBehaviour
namespace Pathfinding::Examples {
// Is value type: false
// CS Name: Pathfinding.Examples.AnimationLinkTraverser
class CORDL_TYPE AnimationLinkTraverser : public ::Pathfinding::VersionedMonoBehaviour {
public:
// Declarations
using _TraverseOffMeshLink_d__4 = ::Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4;

/// @brief Field ai, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_ai, put=__cordl_internal_set_ai)) ::UnityW<::Pathfinding::RichAI>  ai;

/// @brief Field anim, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_anim, put=__cordl_internal_set_anim)) ::UnityW<::UnityEngine::Animation>  anim;

static inline ::Pathfinding::Examples::AnimationLinkTraverser* New_ctor() ;

/// @brief Method OnDisable, addr 0x5efb7e0, size 0x120, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5efb68c, size 0x154, virtual false, abstract: false, final false
inline void OnEnable() ;

/// [IteratorStateMachine(typeof(Pathfinding.Examples.AnimationLinkTraverser::<TraverseOffMeshLink>d__4))]
/// @brief Method TraverseOffMeshLink, addr 0x5efb900, size 0x88, virtual true, abstract: false, final false
inline ::System::Collections::IEnumerator* TraverseOffMeshLink(::Pathfinding::RichSpecial*  rs) ;

constexpr ::UnityW<::Pathfinding::RichAI> const& __cordl_internal_get_ai() const;

constexpr ::UnityW<::Pathfinding::RichAI>& __cordl_internal_get_ai() ;

constexpr ::UnityW<::UnityEngine::Animation> const& __cordl_internal_get_anim() const;

constexpr ::UnityW<::UnityEngine::Animation>& __cordl_internal_get_anim() ;

constexpr void __cordl_internal_set_ai(::UnityW<::Pathfinding::RichAI>  value) ;

constexpr void __cordl_internal_set_anim(::UnityW<::UnityEngine::Animation>  value) ;

/// @brief Method .ctor, addr 0x5efb9b0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimationLinkTraverser() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimationLinkTraverser", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimationLinkTraverser(AnimationLinkTraverser && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimationLinkTraverser", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimationLinkTraverser(AnimationLinkTraverser const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21553};

/// @brief Field anim, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animation>  ___anim;

/// @brief Field ai, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Pathfinding::RichAI>  ___ai;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Examples::AnimationLinkTraverser, ___anim) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::AnimationLinkTraverser, ___ai) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Examples::AnimationLinkTraverser) == 0x38, "Size mismatch!");

} // namespace end def Pathfinding::Examples
// [CompilerGenerated]
// Dependencies System.Object
namespace Pathfinding::Examples {
// Is value type: false
// CS Name: Pathfinding.Examples.AnimationLinkTraverser/<TraverseOffMeshLink>d__4
class CORDL_TYPE AnimationLinkTraverser__TraverseOffMeshLink_d__4 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Pathfinding::Examples::AnimationLinkTraverser>  __4__this;

/// @brief Field <link>5__2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__link_5__2, put=__cordl_internal_set__link_5__2)) ::UnityW<::Pathfinding::AnimationLink>  _link_5__2;

/// @brief Field rs, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_rs, put=__cordl_internal_set_rs)) ::Pathfinding::RichSpecial*  rs;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5efb9bc, size 0x64c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5efc008, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5efc010, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5efc048, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5efb9b8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Pathfinding::Examples::AnimationLinkTraverser> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Pathfinding::Examples::AnimationLinkTraverser>& __cordl_internal_get___4__this() ;

constexpr ::UnityW<::Pathfinding::AnimationLink> const& __cordl_internal_get__link_5__2() const;

constexpr ::UnityW<::Pathfinding::AnimationLink>& __cordl_internal_get__link_5__2() ;

constexpr ::Pathfinding::RichSpecial* const& __cordl_internal_get_rs() const;

constexpr ::Pathfinding::RichSpecial*& __cordl_internal_get_rs() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Pathfinding::Examples::AnimationLinkTraverser>  value) ;

constexpr void __cordl_internal_set__link_5__2(::UnityW<::Pathfinding::AnimationLink>  value) ;

constexpr void __cordl_internal_set_rs(::Pathfinding::RichSpecial*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5efb988, size 0x28, virtual false, abstract: false, final false
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
constexpr AnimationLinkTraverser__TraverseOffMeshLink_d__4() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimationLinkTraverser__TraverseOffMeshLink_d__4", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimationLinkTraverser__TraverseOffMeshLink_d__4(AnimationLinkTraverser__TraverseOffMeshLink_d__4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimationLinkTraverser__TraverseOffMeshLink_d__4", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimationLinkTraverser__TraverseOffMeshLink_d__4(AnimationLinkTraverser__TraverseOffMeshLink_d__4 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21552};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field rs, offset: 0x20, size: 0x8, def value: None
 ::Pathfinding::RichSpecial*  ___rs;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Pathfinding::Examples::AnimationLinkTraverser>  _____4__this;

/// @brief Field <link>5__2, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Pathfinding::AnimationLink>  ____link_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4, ___rs) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4, ____link_5__2) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Examples::AnimationLinkTraverser__TraverseOffMeshLink_d__4) == 0x38, "Size mismatch!");

} // namespace end def Pathfinding::Examples
