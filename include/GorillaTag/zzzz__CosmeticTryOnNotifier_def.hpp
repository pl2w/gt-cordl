#pragma once
// IWYU pragma private; include "GorillaTag/CosmeticTryOnNotifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/zzzz__CosmeticTryOnNotifier_Mode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CosmeticTryOnNotifier)
namespace GlobalNamespace {
struct CosmeticTryOnNotifier_Mode;
}
namespace GlobalNamespace {
class RigContainer;
}
namespace GlobalNamespace {
class VRRigCollection;
}
namespace GorillaTag {
class StringList;
}
// Forward declare root types
namespace GorillaTag {
class CosmeticTryOnNotifier;
}
// Write type traits
MARK_REF_T(::GorillaTag::CosmeticTryOnNotifier*);
DEFINE_IL2CPP_CLASS(::GorillaTag::CosmeticTryOnNotifier*, "GorillaTag", "CosmeticTryOnNotifier");
// [RequireComponent(typeof(VRRigCollection))]
// Dependencies GorillaTag.CosmeticTryOnNotifier::Mode, UnityEngine.MonoBehaviour
namespace GorillaTag {
// Is value type: false
// CS Name: GorillaTag.CosmeticTryOnNotifier
class CORDL_TYPE CosmeticTryOnNotifier : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Mode = ::GlobalNamespace::CosmeticTryOnNotifier_Mode;

/// @brief Field m_vrrigCollection, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_vrrigCollection, put=__cordl_internal_set_m_vrrigCollection)) ::UnityW<::GlobalNamespace::VRRigCollection>  m_vrrigCollection;

/// @brief Field mode, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_mode, put=__cordl_internal_set_mode)) ::GlobalNamespace::CosmeticTryOnNotifier_Mode  mode;

/// @brief Field unlockList, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_unlockList, put=__cordl_internal_set_unlockList)) ::UnityW<::GorillaTag::StringList>  unlockList;

/// @brief Method Awake, addr 0x5d28328, size 0x1fc, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GorillaTag::CosmeticTryOnNotifier* New_ctor() ;

/// @brief Method PlayerEnteredTryOnSpace, addr 0x5d28524, size 0xc0, virtual false, abstract: false, final false
inline void PlayerEnteredTryOnSpace(::GlobalNamespace::RigContainer*  playerRig) ;

/// @brief Method PlayerLeftTryOnSpace, addr 0x5d285e4, size 0xc0, virtual false, abstract: false, final false
inline void PlayerLeftTryOnSpace(::GlobalNamespace::RigContainer*  playerRig) ;

constexpr ::UnityW<::GlobalNamespace::VRRigCollection> const& __cordl_internal_get_m_vrrigCollection() const;

constexpr ::UnityW<::GlobalNamespace::VRRigCollection>& __cordl_internal_get_m_vrrigCollection() ;

constexpr ::GlobalNamespace::CosmeticTryOnNotifier_Mode const& __cordl_internal_get_mode() const;

constexpr ::GlobalNamespace::CosmeticTryOnNotifier_Mode& __cordl_internal_get_mode() ;

constexpr ::UnityW<::GorillaTag::StringList> const& __cordl_internal_get_unlockList() const;

constexpr ::UnityW<::GorillaTag::StringList>& __cordl_internal_get_unlockList() ;

constexpr void __cordl_internal_set_m_vrrigCollection(::UnityW<::GlobalNamespace::VRRigCollection>  value) ;

constexpr void __cordl_internal_set_mode(::GlobalNamespace::CosmeticTryOnNotifier_Mode  value) ;

constexpr void __cordl_internal_set_unlockList(::UnityW<::GorillaTag::StringList>  value) ;

/// @brief Method .ctor, addr 0x5d286a4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticTryOnNotifier() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticTryOnNotifier", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticTryOnNotifier(CosmeticTryOnNotifier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticTryOnNotifier", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticTryOnNotifier(CosmeticTryOnNotifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4628};

/// @brief Field m_vrrigCollection, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRigCollection>  ___m_vrrigCollection;

/// [SerializeField]
/// @brief Field mode, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::CosmeticTryOnNotifier_Mode  ___mode;

/// [SerializeField]
/// @brief Field unlockList, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GorillaTag::StringList>  ___unlockList;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::CosmeticTryOnNotifier, ___m_vrrigCollection) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::CosmeticTryOnNotifier, ___mode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::CosmeticTryOnNotifier, ___unlockList) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::CosmeticTryOnNotifier) == 0x38, "Size mismatch!");

} // namespace end def GorillaTag
