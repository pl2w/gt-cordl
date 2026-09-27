#pragma once
// IWYU pragma private; include "GlobalNamespace/MazePlayerCollection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MazePlayerCollection)
namespace GlobalNamespace {
class MazePlayerCollection___c__DisplayClass6_0;
}
namespace GlobalNamespace {
class MonkeyeAI;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class VRRig;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class MazePlayerCollection;
}
namespace GlobalNamespace {
class MazePlayerCollection___c__DisplayClass6_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MazePlayerCollection*);
MARK_REF_T(::GlobalNamespace::MazePlayerCollection___c__DisplayClass6_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MazePlayerCollection*, "", "MazePlayerCollection");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MazePlayerCollection___c__DisplayClass6_0*, "", "MazePlayerCollection/<>c__DisplayClass6_0");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MazePlayerCollection
class CORDL_TYPE MazePlayerCollection : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass6_0 = ::GlobalNamespace::MazePlayerCollection___c__DisplayClass6_0;

/// @brief Field containedRigs, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_containedRigs, put=__cordl_internal_set_containedRigs)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  containedRigs;

/// @brief Field monkeyeAis, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_monkeyeAis, put=__cordl_internal_set_monkeyeAis)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MonkeyeAI>>*  monkeyeAis;

static inline ::GlobalNamespace::MazePlayerCollection* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5c01610, size 0xe4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnPlayerLeftRoom, addr 0x5c01a0c, size 0xe4, virtual false, abstract: false, final false
inline void OnPlayerLeftRoom(::GlobalNamespace::NetPlayer*  otherPlayer) ;

/// @brief Method OnTriggerEnter, addr 0x5c016f4, size 0x1b8, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x5c018ac, size 0x160, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method Start, addr 0x5c0152c, size 0xe4, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* const& __cordl_internal_get_containedRigs() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*& __cordl_internal_get_containedRigs() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MonkeyeAI>>* const& __cordl_internal_get_monkeyeAis() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MonkeyeAI>>*& __cordl_internal_get_monkeyeAis() ;

constexpr void __cordl_internal_set_containedRigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value) ;

constexpr void __cordl_internal_set_monkeyeAis(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MonkeyeAI>>*  value) ;

/// @brief Method .ctor, addr 0x5c01af8, size 0xdc, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MazePlayerCollection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MazePlayerCollection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MazePlayerCollection(MazePlayerCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MazePlayerCollection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MazePlayerCollection(MazePlayerCollection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{422};

/// @brief Field containedRigs, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  ___containedRigs;

/// @brief Field monkeyeAis, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MonkeyeAI>>*  ___monkeyeAis;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MazePlayerCollection, ___containedRigs) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MazePlayerCollection, ___monkeyeAis) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MazePlayerCollection) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MazePlayerCollection/<>c__DisplayClass6_0
class CORDL_TYPE MazePlayerCollection___c__DisplayClass6_0 : public ::System::Object {
public:
// Declarations
/// @brief Field otherPlayer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_otherPlayer, put=__cordl_internal_set_otherPlayer)) ::GlobalNamespace::NetPlayer*  otherPlayer;

static inline ::GlobalNamespace::MazePlayerCollection___c__DisplayClass6_0* New_ctor() ;

/// @brief Method <OnPlayerLeftRoom>b__0, addr 0x5c01bd4, size 0x24, virtual false, abstract: false, final false
inline bool _OnPlayerLeftRoom_b__0(::GlobalNamespace::VRRig*  r) ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_otherPlayer() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_otherPlayer() ;

constexpr void __cordl_internal_set_otherPlayer(::GlobalNamespace::NetPlayer*  value) ;

/// @brief Method .ctor, addr 0x5c01af0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MazePlayerCollection___c__DisplayClass6_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MazePlayerCollection___c__DisplayClass6_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MazePlayerCollection___c__DisplayClass6_0(MazePlayerCollection___c__DisplayClass6_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MazePlayerCollection___c__DisplayClass6_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MazePlayerCollection___c__DisplayClass6_0(MazePlayerCollection___c__DisplayClass6_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{421};

/// @brief Field otherPlayer, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___otherPlayer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MazePlayerCollection___c__DisplayClass6_0, ___otherPlayer) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MazePlayerCollection___c__DisplayClass6_0) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
