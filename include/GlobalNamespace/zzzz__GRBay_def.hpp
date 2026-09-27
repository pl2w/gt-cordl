#pragma once
// IWYU pragma private; include "GlobalNamespace/GRBay.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRShuttleGroupLoc_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GRBay)
namespace GlobalNamespace {
class GRShuttle;
}
namespace GlobalNamespace {
class GhostReactor;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class Animation;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class GRBay;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRBay*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRBay*, "", "GRBay");
// Dependencies GRShuttleGroupLoc, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRBay
class CORDL_TYPE GRBay : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field bayDoorAnimation, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_bayDoorAnimation, put=__cordl_internal_set_bayDoorAnimation)) ::UnityW<::UnityEngine::Animation>  bayDoorAnimation;

/// @brief Field debugForceUnlockedByLevel, offset 0x6c, size 0x1 
 __declspec(property(get=__cordl_internal_get_debugForceUnlockedByLevel, put=__cordl_internal_set_debugForceUnlockedByLevel)) bool  debugForceUnlockedByLevel;

/// @brief Field hideWhenClosed, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_hideWhenClosed, put=__cordl_internal_set_hideWhenClosed)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  hideWhenClosed;

/// @brief Field hideWhenOpen, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_hideWhenOpen, put=__cordl_internal_set_hideWhenOpen)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  hideWhenOpen;

/// @brief Field isOpen, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_isOpen, put=__cordl_internal_set_isOpen)) bool  isOpen;

/// @brief Field maxDropText, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_maxDropText, put=__cordl_internal_set_maxDropText)) ::UnityW<::TMPro::TMP_Text>  maxDropText;

/// @brief Field playerName, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerName, put=__cordl_internal_set_playerName)) ::UnityW<::TMPro::TMP_Text>  playerName;

/// @brief Field reactor, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_reactor, put=__cordl_internal_set_reactor)) ::UnityW<::GlobalNamespace::GhostReactor>  reactor;

/// @brief Field showWhenNotOwned, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_showWhenNotOwned, put=__cordl_internal_set_showWhenNotOwned)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  showWhenNotOwned;

/// @brief Field showWhenOwned, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_showWhenOwned, put=__cordl_internal_set_showWhenOwned)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  showWhenOwned;

/// @brief Field shuttleIndex, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_shuttleIndex, put=__cordl_internal_set_shuttleIndex)) int32_t  shuttleIndex;

/// @brief Field shuttleLoc, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_shuttleLoc, put=__cordl_internal_set_shuttleLoc)) ::GlobalNamespace::GRShuttleGroupLoc  shuttleLoc;

/// @brief Field unlockByDrillLevel, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_unlockByDrillLevel, put=__cordl_internal_set_unlockByDrillLevel)) int32_t  unlockByDrillLevel;

/// @brief Field unlockShuttle, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_unlockShuttle, put=__cordl_internal_set_unlockShuttle)) ::UnityW<::GlobalNamespace::GRShuttle>  unlockShuttle;

/// @brief Method Awake, addr 0x5872704, size 0xd4, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::GRBay* New_ctor() ;

/// @brief Method Refresh, addr 0x58728cc, size 0x2e0, virtual false, abstract: false, final false
inline void Refresh() ;

/// @brief Method SetOpen, addr 0x5872bac, size 0x5a4, virtual false, abstract: false, final false
inline void SetOpen(bool  open) ;

/// @brief Method Setup, addr 0x58727d8, size 0xf4, virtual false, abstract: false, final false
inline void Setup(::GlobalNamespace::GhostReactor*  reactor) ;

constexpr ::UnityW<::UnityEngine::Animation> const& __cordl_internal_get_bayDoorAnimation() const;

constexpr ::UnityW<::UnityEngine::Animation>& __cordl_internal_get_bayDoorAnimation() ;

constexpr bool const& __cordl_internal_get_debugForceUnlockedByLevel() const;

constexpr bool& __cordl_internal_get_debugForceUnlockedByLevel() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_hideWhenClosed() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_hideWhenClosed() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_hideWhenOpen() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_hideWhenOpen() ;

constexpr bool const& __cordl_internal_get_isOpen() const;

constexpr bool& __cordl_internal_get_isOpen() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_maxDropText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_maxDropText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_playerName() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_playerName() ;

constexpr ::UnityW<::GlobalNamespace::GhostReactor> const& __cordl_internal_get_reactor() const;

constexpr ::UnityW<::GlobalNamespace::GhostReactor>& __cordl_internal_get_reactor() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_showWhenNotOwned() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_showWhenNotOwned() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_showWhenOwned() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_showWhenOwned() ;

constexpr int32_t const& __cordl_internal_get_shuttleIndex() const;

constexpr int32_t& __cordl_internal_get_shuttleIndex() ;

constexpr ::GlobalNamespace::GRShuttleGroupLoc const& __cordl_internal_get_shuttleLoc() const;

constexpr ::GlobalNamespace::GRShuttleGroupLoc& __cordl_internal_get_shuttleLoc() ;

constexpr int32_t const& __cordl_internal_get_unlockByDrillLevel() const;

constexpr int32_t& __cordl_internal_get_unlockByDrillLevel() ;

constexpr ::UnityW<::GlobalNamespace::GRShuttle> const& __cordl_internal_get_unlockShuttle() const;

constexpr ::UnityW<::GlobalNamespace::GRShuttle>& __cordl_internal_get_unlockShuttle() ;

constexpr void __cordl_internal_set_bayDoorAnimation(::UnityW<::UnityEngine::Animation>  value) ;

constexpr void __cordl_internal_set_debugForceUnlockedByLevel(bool  value) ;

constexpr void __cordl_internal_set_hideWhenClosed(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_hideWhenOpen(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_isOpen(bool  value) ;

constexpr void __cordl_internal_set_maxDropText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_playerName(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_reactor(::UnityW<::GlobalNamespace::GhostReactor>  value) ;

constexpr void __cordl_internal_set_showWhenNotOwned(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_showWhenOwned(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_shuttleIndex(int32_t  value) ;

constexpr void __cordl_internal_set_shuttleLoc(::GlobalNamespace::GRShuttleGroupLoc  value) ;

constexpr void __cordl_internal_set_unlockByDrillLevel(int32_t  value) ;

constexpr void __cordl_internal_set_unlockShuttle(::UnityW<::GlobalNamespace::GRShuttle>  value) ;

/// @brief Method .ctor, addr 0x5873150, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRBay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRBay", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRBay(GRBay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRBay", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRBay(GRBay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1889};

/// @brief Field hideWhenOpen, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___hideWhenOpen;

/// @brief Field hideWhenClosed, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___hideWhenClosed;

/// @brief Field bayDoorAnimation, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animation>  ___bayDoorAnimation;

/// @brief Field isOpen, offset: 0x38, size: 0x1, def value: None
 bool  ___isOpen;

/// @brief Field playerName, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___playerName;

/// @brief Field maxDropText, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___maxDropText;

/// @brief Field showWhenOwned, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___showWhenOwned;

/// @brief Field showWhenNotOwned, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___showWhenNotOwned;

/// @brief Field unlockByDrillLevel, offset: 0x60, size: 0x4, def value: None
 int32_t  ___unlockByDrillLevel;

/// @brief Field shuttleLoc, offset: 0x64, size: 0x4, def value: None
 ::GlobalNamespace::GRShuttleGroupLoc  ___shuttleLoc;

/// @brief Field shuttleIndex, offset: 0x68, size: 0x4, def value: None
 int32_t  ___shuttleIndex;

/// @brief Field debugForceUnlockedByLevel, offset: 0x6c, size: 0x1, def value: None
 bool  ___debugForceUnlockedByLevel;

/// @brief Field unlockShuttle, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRShuttle>  ___unlockShuttle;

/// @brief Field reactor, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GhostReactor>  ___reactor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRBay, ___hideWhenOpen) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBay, ___hideWhenClosed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBay, ___bayDoorAnimation) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBay, ___isOpen) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBay, ___playerName) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBay, ___maxDropText) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBay, ___showWhenOwned) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBay, ___showWhenNotOwned) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBay, ___unlockByDrillLevel) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBay, ___shuttleLoc) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBay, ___shuttleIndex) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBay, ___debugForceUnlockedByLevel) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBay, ___unlockShuttle) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBay, ___reactor) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRBay) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
