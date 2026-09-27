#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaTagCompetitivePrivateRoomBlocker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GorillaTagCompetitivePrivateRoomBlocker)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaTagCompetitivePrivateRoomBlocker;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaTagCompetitivePrivateRoomBlocker*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTagCompetitivePrivateRoomBlocker*, "", "GorillaTagCompetitivePrivateRoomBlocker");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaTagCompetitivePrivateRoomBlocker
class CORDL_TYPE GorillaTagCompetitivePrivateRoomBlocker : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field blocker, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_blocker, put=__cordl_internal_set_blocker)) ::UnityW<::UnityEngine::GameObject>  blocker;

static inline ::GlobalNamespace::GorillaTagCompetitivePrivateRoomBlocker* New_ctor() ;

/// @brief Method Update, addr 0x592a0b4, size 0x88, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_blocker() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_blocker() ;

constexpr void __cordl_internal_set_blocker(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x592a13c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaTagCompetitivePrivateRoomBlocker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitivePrivateRoomBlocker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaTagCompetitivePrivateRoomBlocker(GorillaTagCompetitivePrivateRoomBlocker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitivePrivateRoomBlocker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaTagCompetitivePrivateRoomBlocker(GorillaTagCompetitivePrivateRoomBlocker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2222};

/// [SerializeField]
/// @brief Field blocker, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___blocker;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitivePrivateRoomBlocker, ___blocker) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaTagCompetitivePrivateRoomBlocker) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
