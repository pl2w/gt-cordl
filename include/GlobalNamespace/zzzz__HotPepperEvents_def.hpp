#pragma once
// IWYU pragma private; include "GlobalNamespace/HotPepperEvents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CosmeticRefID_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HotPepperEvents)
namespace GlobalNamespace {
class EdibleHoldable;
}
namespace GlobalNamespace {
struct HotPepperEvents_EdibleState;
}
namespace GlobalNamespace {
class VRRig;
}
// Forward declare root types
namespace GlobalNamespace {
class HotPepperEvents;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HotPepperEvents*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HotPepperEvents*, "", "HotPepperEvents");
// Dependencies CosmeticRefID, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: HotPepperEvents
class CORDL_TYPE HotPepperEvents : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using EdibleState = ::GlobalNamespace::HotPepperEvents_EdibleState;

/// @brief Field _pepper, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__pepper, put=__cordl_internal_set__pepper)) ::UnityW<::GlobalNamespace::EdibleHoldable>  _pepper;

/// @brief Field m_targetEffectID, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_targetEffectID, put=__cordl_internal_set_m_targetEffectID)) ::GlobalNamespace::CosmeticRefID  m_targetEffectID;

static inline ::GlobalNamespace::HotPepperEvents* New_ctor() ;

/// @brief Method OnBite, addr 0x578ab24, size 0x104, virtual false, abstract: false, final false
inline void OnBite(::GlobalNamespace::VRRig*  rig, int32_t  nextState, bool  isViewRig) ;

/// @brief Method OnBiteView, addr 0x578ab1c, size 0x8, virtual false, abstract: false, final false
inline void OnBiteView(::GlobalNamespace::VRRig*  rig, int32_t  nextState) ;

/// @brief Method OnBiteWorld, addr 0x578ac28, size 0x8, virtual false, abstract: false, final false
inline void OnBiteWorld(::GlobalNamespace::VRRig*  rig, int32_t  nextState) ;

/// @brief Method OnDisable, addr 0x578aa20, size 0xfc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x578a924, size 0xfc, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::UnityW<::GlobalNamespace::EdibleHoldable> const& __cordl_internal_get__pepper() const;

constexpr ::UnityW<::GlobalNamespace::EdibleHoldable>& __cordl_internal_get__pepper() ;

constexpr ::GlobalNamespace::CosmeticRefID const& __cordl_internal_get_m_targetEffectID() const;

constexpr ::GlobalNamespace::CosmeticRefID& __cordl_internal_get_m_targetEffectID() ;

constexpr void __cordl_internal_set__pepper(::UnityW<::GlobalNamespace::EdibleHoldable>  value) ;

constexpr void __cordl_internal_set_m_targetEffectID(::GlobalNamespace::CosmeticRefID  value) ;

/// @brief Method .ctor, addr 0x578aca8, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HotPepperEvents() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HotPepperEvents", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HotPepperEvents(HotPepperEvents && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HotPepperEvents", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HotPepperEvents(HotPepperEvents const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1431};

/// [SerializeField]
/// @brief Field _pepper, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EdibleHoldable>  ____pepper;

/// [SerializeField]
/// @brief Field m_targetEffectID, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::CosmeticRefID  ___m_targetEffectID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HotPepperEvents, ____pepper) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HotPepperEvents, ___m_targetEffectID) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HotPepperEvents) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
