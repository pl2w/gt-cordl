#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerCollection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PlayerCollection)
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class PlayerCollection___c__DisplayClass5_0;
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
class PlayerCollection;
}
namespace GlobalNamespace {
class PlayerCollection___c__DisplayClass5_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerCollection*);
MARK_REF_T(::GlobalNamespace::PlayerCollection___c__DisplayClass5_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerCollection*, "", "PlayerCollection");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerCollection___c__DisplayClass5_0*, "", "PlayerCollection/<>c__DisplayClass5_0");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerCollection
class CORDL_TYPE PlayerCollection : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass5_0 = ::GlobalNamespace::PlayerCollection___c__DisplayClass5_0;

/// @brief Field containedRigs, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_containedRigs, put=__cordl_internal_set_containedRigs)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  containedRigs;

static inline ::GlobalNamespace::PlayerCollection* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5711a80, size 0xe4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnPlayerLeftRoom, addr 0x5712024, size 0xe4, virtual false, abstract: false, final false
inline void OnPlayerLeftRoom(::GlobalNamespace::NetPlayer*  otherPlayer) ;

/// @brief Method OnTriggerEnter, addr 0x5711b64, size 0x1b8, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x5711d1c, size 0x308, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method Start, addr 0x571199c, size 0xe4, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* const& __cordl_internal_get_containedRigs() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*& __cordl_internal_get_containedRigs() ;

constexpr void __cordl_internal_set_containedRigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value) ;

/// @brief Method .ctor, addr 0x5712110, size 0x8c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerCollection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerCollection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerCollection(PlayerCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerCollection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerCollection(PlayerCollection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1178};

/// [DebugReadout]
/// @brief Field containedRigs, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  ___containedRigs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerCollection, ___containedRigs) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerCollection) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerCollection/<>c__DisplayClass5_0
class CORDL_TYPE PlayerCollection___c__DisplayClass5_0 : public ::System::Object {
public:
// Declarations
/// @brief Field otherPlayer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_otherPlayer, put=__cordl_internal_set_otherPlayer)) ::GlobalNamespace::NetPlayer*  otherPlayer;

static inline ::GlobalNamespace::PlayerCollection___c__DisplayClass5_0* New_ctor() ;

/// @brief Method <OnPlayerLeftRoom>b__0, addr 0x571219c, size 0x2c, virtual false, abstract: false, final false
inline bool _OnPlayerLeftRoom_b__0(::GlobalNamespace::VRRig*  r) ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_otherPlayer() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_otherPlayer() ;

constexpr void __cordl_internal_set_otherPlayer(::GlobalNamespace::NetPlayer*  value) ;

/// @brief Method .ctor, addr 0x5712108, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerCollection___c__DisplayClass5_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerCollection___c__DisplayClass5_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerCollection___c__DisplayClass5_0(PlayerCollection___c__DisplayClass5_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerCollection___c__DisplayClass5_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerCollection___c__DisplayClass5_0(PlayerCollection___c__DisplayClass5_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1177};

/// @brief Field otherPlayer, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___otherPlayer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerCollection___c__DisplayClass5_0, ___otherPlayer) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerCollection___c__DisplayClass5_0) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
