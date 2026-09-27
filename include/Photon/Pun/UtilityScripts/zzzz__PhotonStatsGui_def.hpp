#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/PhotonStatsGui.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PhotonStatsGui)
// Forward declare root types
namespace Photon::Pun::UtilityScripts {
class PhotonStatsGui;
}
// Write type traits
MARK_REF_T(::Photon::Pun::UtilityScripts::PhotonStatsGui*);
DEFINE_IL2CPP_CLASS(::Photon::Pun::UtilityScripts::PhotonStatsGui*, "Photon.Pun.UtilityScripts", "PhotonStatsGui");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Rect
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: Photon.Pun.UtilityScripts.PhotonStatsGui
class CORDL_TYPE PhotonStatsGui : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field WindowId, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_WindowId, put=__cordl_internal_set_WindowId)) int32_t  WindowId;

/// @brief Field buttonsOn, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_buttonsOn, put=__cordl_internal_set_buttonsOn)) bool  buttonsOn;

/// @brief Field healthStatsVisible, offset 0x22, size 0x1 
 __declspec(property(get=__cordl_internal_get_healthStatsVisible, put=__cordl_internal_set_healthStatsVisible)) bool  healthStatsVisible;

/// @brief Field statsOn, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_statsOn, put=__cordl_internal_set_statsOn)) bool  statsOn;

/// @brief Field statsRect, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_statsRect, put=__cordl_internal_set_statsRect)) ::UnityEngine::Rect  statsRect;

/// @brief Field statsWindowOn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_statsWindowOn, put=__cordl_internal_set_statsWindowOn)) bool  statsWindowOn;

/// @brief Field trafficStatsOn, offset 0x23, size 0x1 
 __declspec(property(get=__cordl_internal_get_trafficStatsOn, put=__cordl_internal_set_trafficStatsOn)) bool  trafficStatsOn;

/// @brief Field turnOn, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_turnOn, put=__cordl_internal_set_turnOn)) bool  turnOn;

static inline ::Photon::Pun::UtilityScripts::PhotonStatsGui* New_ctor() ;

/// @brief Method OnGUI, addr 0xa731604, size 0x1d4, virtual false, abstract: false, final false
inline void OnGUI() ;

/// @brief Method Start, addr 0xa7315ac, size 0x34, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method TrafficStatsWindow, addr 0xa7317d8, size 0x1084, virtual false, abstract: false, final false
inline void TrafficStatsWindow(int32_t  windowID) ;

/// @brief Method Update, addr 0xa7315e0, size 0x24, virtual false, abstract: false, final false
inline void Update() ;

constexpr int32_t const& __cordl_internal_get_WindowId() const;

constexpr int32_t& __cordl_internal_get_WindowId() ;

constexpr bool const& __cordl_internal_get_buttonsOn() const;

constexpr bool& __cordl_internal_get_buttonsOn() ;

constexpr bool const& __cordl_internal_get_healthStatsVisible() const;

constexpr bool& __cordl_internal_get_healthStatsVisible() ;

constexpr bool const& __cordl_internal_get_statsOn() const;

constexpr bool& __cordl_internal_get_statsOn() ;

constexpr ::UnityEngine::Rect const& __cordl_internal_get_statsRect() const;

constexpr ::UnityEngine::Rect& __cordl_internal_get_statsRect() ;

constexpr bool const& __cordl_internal_get_statsWindowOn() const;

constexpr bool& __cordl_internal_get_statsWindowOn() ;

constexpr bool const& __cordl_internal_get_trafficStatsOn() const;

constexpr bool& __cordl_internal_get_trafficStatsOn() ;

constexpr bool const& __cordl_internal_get_turnOn() const;

constexpr bool& __cordl_internal_get_turnOn() ;

constexpr void __cordl_internal_set_WindowId(int32_t  value) ;

constexpr void __cordl_internal_set_buttonsOn(bool  value) ;

constexpr void __cordl_internal_set_healthStatsVisible(bool  value) ;

constexpr void __cordl_internal_set_statsOn(bool  value) ;

constexpr void __cordl_internal_set_statsRect(::UnityEngine::Rect  value) ;

constexpr void __cordl_internal_set_statsWindowOn(bool  value) ;

constexpr void __cordl_internal_set_trafficStatsOn(bool  value) ;

constexpr void __cordl_internal_set_turnOn(bool  value) ;

/// @brief Method .ctor, addr 0xa73285c, size 0x24, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonStatsGui() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonStatsGui", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonStatsGui(PhotonStatsGui && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonStatsGui", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonStatsGui(PhotonStatsGui const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31207};

/// @brief Field statsWindowOn, offset: 0x20, size: 0x1, def value: None
 bool  ___statsWindowOn;

/// @brief Field statsOn, offset: 0x21, size: 0x1, def value: None
 bool  ___statsOn;

/// @brief Field healthStatsVisible, offset: 0x22, size: 0x1, def value: None
 bool  ___healthStatsVisible;

/// @brief Field trafficStatsOn, offset: 0x23, size: 0x1, def value: None
 bool  ___trafficStatsOn;

/// @brief Field buttonsOn, offset: 0x24, size: 0x1, def value: None
 bool  ___buttonsOn;

/// @brief Field statsRect, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::Rect  ___statsRect;

/// @brief Field WindowId, offset: 0x38, size: 0x4, def value: None
 int32_t  ___WindowId;

/// @brief Field turnOn, offset: 0x3c, size: 0x1, def value: None
 bool  ___turnOn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Pun::UtilityScripts::PhotonStatsGui, ___statsWindowOn) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::PhotonStatsGui, ___statsOn) == 0x21, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::PhotonStatsGui, ___healthStatsVisible) == 0x22, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::PhotonStatsGui, ___trafficStatsOn) == 0x23, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::PhotonStatsGui, ___buttonsOn) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::PhotonStatsGui, ___statsRect) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::PhotonStatsGui, ___WindowId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::PhotonStatsGui, ___turnOn) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::Photon::Pun::UtilityScripts::PhotonStatsGui) == 0x40, "Size mismatch!");

} // namespace end def Photon::Pun::UtilityScripts
