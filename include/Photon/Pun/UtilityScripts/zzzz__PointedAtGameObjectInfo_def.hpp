#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/PointedAtGameObjectInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PointedAtGameObjectInfo)
namespace Photon::Pun {
class PhotonView;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Photon::Pun::UtilityScripts {
class PointedAtGameObjectInfo;
}
// Write type traits
MARK_REF_T(::Photon::Pun::UtilityScripts::PointedAtGameObjectInfo*);
DEFINE_IL2CPP_CLASS(::Photon::Pun::UtilityScripts::PointedAtGameObjectInfo*, "Photon.Pun.UtilityScripts", "PointedAtGameObjectInfo");
// Dependencies UnityEngine.MonoBehaviour
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: Photon.Pun.UtilityScripts.PointedAtGameObjectInfo
class CORDL_TYPE PointedAtGameObjectInfo : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::UnityW<::Photon::Pun::UtilityScripts::PointedAtGameObjectInfo>  Instance;

/// @brief Field focus, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_focus, put=__cordl_internal_set_focus)) ::UnityW<::UnityEngine::Transform>  focus;

/// @brief Field text, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_text, put=__cordl_internal_set_text)) ::UnityW<::UnityEngine::UI::Text>  text;

/// @brief Method LateUpdate, addr 0xa732d74, size 0xc4, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::Photon::Pun::UtilityScripts::PointedAtGameObjectInfo* New_ctor() ;

/// @brief Method RemoveFocus, addr 0xa732c88, size 0xec, virtual false, abstract: false, final false
inline void RemoveFocus(::Photon::Pun::PhotonView*  pv) ;

/// @brief Method SetFocus, addr 0xa732998, size 0x2f0, virtual false, abstract: false, final false
inline void SetFocus(::Photon::Pun::PhotonView*  pv) ;

/// @brief Method Start, addr 0xa732880, size 0x118, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_focus() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_focus() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_text() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_text() ;

constexpr void __cordl_internal_set_focus(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_text(::UnityW<::UnityEngine::UI::Text>  value) ;

/// @brief Method .ctor, addr 0xa732e38, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::Photon::Pun::UtilityScripts::PointedAtGameObjectInfo> getStaticF_Instance() ;

static inline void setStaticF_Instance(::UnityW<::Photon::Pun::UtilityScripts::PointedAtGameObjectInfo>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PointedAtGameObjectInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PointedAtGameObjectInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PointedAtGameObjectInfo(PointedAtGameObjectInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PointedAtGameObjectInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PointedAtGameObjectInfo(PointedAtGameObjectInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31208};

/// @brief Field text, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___text;

/// @brief Field focus, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___focus;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Pun::UtilityScripts::PointedAtGameObjectInfo, ___text) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::PointedAtGameObjectInfo, ___focus) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Photon::Pun::UtilityScripts::PointedAtGameObjectInfo) == 0x30, "Size mismatch!");

} // namespace end def Photon::Pun::UtilityScripts
