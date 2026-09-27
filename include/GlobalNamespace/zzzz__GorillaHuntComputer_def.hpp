#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaHuntComputer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticItem_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GorillaHuntComputer)
namespace GlobalNamespace {
struct CosmeticsController_CosmeticItem;
}
namespace GlobalNamespace {
class GorillaHuntComputer___c;
}
namespace GlobalNamespace {
class GorillaHuntManager;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class VRRig;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaHuntComputer;
}
namespace GlobalNamespace {
class GorillaHuntComputer___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaHuntComputer*);
MARK_REF_T(::GlobalNamespace::GorillaHuntComputer___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaHuntComputer*, "", "GorillaHuntComputer");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaHuntComputer___c*, "", "GorillaHuntComputer/<>c");
// Dependencies GorillaNetworking.CosmeticsController::CosmeticItem, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaHuntComputer
class CORDL_TYPE GorillaHuntComputer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::GlobalNamespace::GorillaHuntComputer___c;

/// @brief Field badge, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_badge, put=__cordl_internal_set_badge)) ::UnityW<::UnityEngine::UI::Image>  badge;

/// @brief Field face, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_face, put=__cordl_internal_set_face)) ::UnityW<::UnityEngine::UI::Image>  face;

/// @brief Field hat, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_hat, put=__cordl_internal_set_hat)) ::UnityW<::UnityEngine::UI::Image>  hat;

/// @brief Field huntManager, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_huntManager, put=__cordl_internal_set_huntManager)) ::UnityW<::GlobalNamespace::GorillaHuntManager>  huntManager;

/// @brief Field leftHand, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftHand, put=__cordl_internal_set_leftHand)) ::UnityW<::UnityEngine::UI::Image>  leftHand;

/// @brief Field material, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_material, put=__cordl_internal_set_material)) ::UnityW<::UnityEngine::UI::Image>  material;

/// @brief Field myRig, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_myRig, put=__cordl_internal_set_myRig)) ::UnityW<::GlobalNamespace::VRRig>  myRig;

/// @brief Field myTarget, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_myTarget, put=__cordl_internal_set_myTarget)) ::GlobalNamespace::NetPlayer*  myTarget;

/// @brief Field rightHand, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightHand, put=__cordl_internal_set_rightHand)) ::UnityW<::UnityEngine::UI::Image>  rightHand;

/// @brief Field tempItem, offset 0x78, size 0x98 
 __declspec(property(get=__cordl_internal_get_tempItem, put=__cordl_internal_set_tempItem)) ::GlobalNamespace::CosmeticsController_CosmeticItem  tempItem;

/// @brief Field tempSprite, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_tempSprite, put=__cordl_internal_set_tempSprite)) ::UnityW<::UnityEngine::Sprite>  tempSprite;

/// @brief Field tempTarget, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_tempTarget, put=__cordl_internal_set_tempTarget)) ::GlobalNamespace::NetPlayer*  tempTarget;

/// @brief Field text, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_text, put=__cordl_internal_set_text)) ::UnityW<::UnityEngine::UI::Text>  text;

/// @brief Method GetPrioritizedItemForHand, addr 0x590fe3c, size 0x268, virtual false, abstract: false, final false
inline ::GlobalNamespace::CosmeticsController_CosmeticItem GetPrioritizedItemForHand(::GlobalNamespace::VRRig*  targetRig, bool  forLeftHand) ;

static inline ::GlobalNamespace::GorillaHuntComputer* New_ctor() ;

/// @brief Method NormalizeName, addr 0x590fac0, size 0x1d4, virtual false, abstract: false, final false
inline ::StringW NormalizeName(bool  doIt, ::StringW  text) ;

/// @brief Method SetImage, addr 0x590fc94, size 0x1a8, virtual false, abstract: false, final false
inline void SetImage(::StringW  itemDisplayName, ::by_ref<::UnityEngine::UI::Image*>  image) ;

/// @brief Method Update, addr 0x590ee18, size 0xb08, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_badge() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_badge() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_face() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_face() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_hat() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_hat() ;

constexpr ::UnityW<::GlobalNamespace::GorillaHuntManager> const& __cordl_internal_get_huntManager() const;

constexpr ::UnityW<::GlobalNamespace::GorillaHuntManager>& __cordl_internal_get_huntManager() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_leftHand() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_leftHand() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_material() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_material() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_myRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_myRig() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_myTarget() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_myTarget() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_rightHand() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_rightHand() ;

constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem const& __cordl_internal_get_tempItem() const;

constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem& __cordl_internal_get_tempItem() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_tempSprite() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_tempSprite() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_tempTarget() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_tempTarget() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_text() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_text() ;

constexpr void __cordl_internal_set_badge(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set_face(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set_hat(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set_huntManager(::UnityW<::GlobalNamespace::GorillaHuntManager>  value) ;

constexpr void __cordl_internal_set_leftHand(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_myTarget(::GlobalNamespace::NetPlayer*  value) ;

constexpr void __cordl_internal_set_rightHand(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set_tempItem(::GlobalNamespace::CosmeticsController_CosmeticItem  value) ;

constexpr void __cordl_internal_set_tempSprite(::UnityW<::UnityEngine::Sprite>  value) ;

constexpr void __cordl_internal_set_tempTarget(::GlobalNamespace::NetPlayer*  value) ;

constexpr void __cordl_internal_set_text(::UnityW<::UnityEngine::UI::Text>  value) ;

/// @brief Method .ctor, addr 0x59100a4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaHuntComputer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaHuntComputer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaHuntComputer(GorillaHuntComputer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaHuntComputer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaHuntComputer(GorillaHuntComputer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2179};

/// @brief Field text, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___text;

/// @brief Field material, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ___material;

/// @brief Field hat, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ___hat;

/// @brief Field face, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ___face;

/// @brief Field badge, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ___badge;

/// @brief Field leftHand, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ___leftHand;

/// @brief Field rightHand, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ___rightHand;

/// @brief Field myTarget, offset: 0x58, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___myTarget;

/// @brief Field tempTarget, offset: 0x60, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___tempTarget;

/// [DebugReadout]
/// @brief Field myRig, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___myRig;

/// @brief Field tempSprite, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ___tempSprite;

/// @brief Field tempItem, offset: 0x78, size: 0x98, def value: None
 ::GlobalNamespace::CosmeticsController_CosmeticItem  ___tempItem;

/// @brief Field huntManager, offset: 0x110, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaHuntManager>  ___huntManager;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaHuntComputer, ___text) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHuntComputer, ___material) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHuntComputer, ___hat) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHuntComputer, ___face) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHuntComputer, ___badge) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHuntComputer, ___leftHand) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHuntComputer, ___rightHand) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHuntComputer, ___myTarget) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHuntComputer, ___tempTarget) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHuntComputer, ___myRig) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHuntComputer, ___tempSprite) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHuntComputer, ___tempItem) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHuntComputer, ___huntManager) == 0x110, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaHuntComputer) == 0x118, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaHuntComputer/<>c
class CORDL_TYPE GorillaHuntComputer___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::GorillaHuntComputer___c*  __9;

/// @brief Field <>9__15_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__15_0, put=setStaticF___9__15_0)) ::System::Predicate_1<char16_t>*  __9__15_0;

static inline ::GlobalNamespace::GorillaHuntComputer___c* New_ctor() ;

/// @brief Method <NormalizeName>b__15_0, addr 0x591011c, size 0x30, virtual false, abstract: false, final false
inline bool _NormalizeName_b__15_0(char16_t  c) ;

/// @brief Method .ctor, addr 0x5910114, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::GorillaHuntComputer___c* getStaticF___9() ;

static inline ::System::Predicate_1<char16_t>* getStaticF___9__15_0() ;

static inline void setStaticF___9(::GlobalNamespace::GorillaHuntComputer___c*  value) ;

static inline void setStaticF___9__15_0(::System::Predicate_1<char16_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaHuntComputer___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaHuntComputer___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaHuntComputer___c(GorillaHuntComputer___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaHuntComputer___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaHuntComputer___c(GorillaHuntComputer___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2178};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GorillaHuntComputer___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
