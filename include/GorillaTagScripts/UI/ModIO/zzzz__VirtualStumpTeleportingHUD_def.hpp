#pragma once
// IWYU pragma private; include "GorillaTagScripts/UI/ModIO/VirtualStumpTeleportingHUD.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VirtualStumpTeleportingHUD)
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace GorillaTagScripts::UI::ModIO {
class VirtualStumpTeleportingHUD;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD*, "GorillaTagScripts.UI.ModIO", "VirtualStumpTeleportingHUD");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTagScripts::UI::ModIO {
// Is value type: false
// CS Name: GorillaTagScripts.UI.ModIO.VirtualStumpTeleportingHUD
class CORDL_TYPE VirtualStumpTeleportingHUD : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field enteringVirtualStumpString, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_enteringVirtualStumpString, put=__cordl_internal_set_enteringVirtualStumpString)) ::StringW  enteringVirtualStumpString;

/// @brief Field isEnteringVirtualStump, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_isEnteringVirtualStump, put=__cordl_internal_set_isEnteringVirtualStump)) bool  isEnteringVirtualStump;

/// @brief Field lastTextUpdateTime, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastTextUpdateTime, put=__cordl_internal_set_lastTextUpdateTime)) float_t  lastTextUpdateTime;

/// @brief Field leavingVirtualStumpString, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_leavingVirtualStumpString, put=__cordl_internal_set_leavingVirtualStumpString)) ::StringW  leavingVirtualStumpString;

/// @brief Field maxNumProgressDots, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxNumProgressDots, put=__cordl_internal_set_maxNumProgressDots)) int32_t  maxNumProgressDots;

/// @brief Field numProgressDots, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_numProgressDots, put=__cordl_internal_set_numProgressDots)) int32_t  numProgressDots;

/// @brief Field teleportingStatusText, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_teleportingStatusText, put=__cordl_internal_set_teleportingStatusText)) ::UnityW<::TMPro::TMP_Text>  teleportingStatusText;

/// @brief Field textUpdateInterval, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_textUpdateInterval, put=__cordl_internal_set_textUpdateInterval)) float_t  textUpdateInterval;

/// @brief Method IncrementProgressDots, addr 0x5bf59b4, size 0x1c, virtual false, abstract: false, final false
inline void IncrementProgressDots() ;

/// @brief Method Initialize, addr 0x5be7b64, size 0x250, virtual false, abstract: false, final false
inline void Initialize(bool  isEntering) ;

static inline ::GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD* New_ctor() ;

/// @brief Method Update, addr 0x5bf589c, size 0x118, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::StringW const& __cordl_internal_get_enteringVirtualStumpString() const;

constexpr ::StringW& __cordl_internal_get_enteringVirtualStumpString() ;

constexpr bool const& __cordl_internal_get_isEnteringVirtualStump() const;

constexpr bool& __cordl_internal_get_isEnteringVirtualStump() ;

constexpr float_t const& __cordl_internal_get_lastTextUpdateTime() const;

constexpr float_t& __cordl_internal_get_lastTextUpdateTime() ;

constexpr ::StringW const& __cordl_internal_get_leavingVirtualStumpString() const;

constexpr ::StringW& __cordl_internal_get_leavingVirtualStumpString() ;

constexpr int32_t const& __cordl_internal_get_maxNumProgressDots() const;

constexpr int32_t& __cordl_internal_get_maxNumProgressDots() ;

constexpr int32_t const& __cordl_internal_get_numProgressDots() const;

constexpr int32_t& __cordl_internal_get_numProgressDots() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_teleportingStatusText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_teleportingStatusText() ;

constexpr float_t const& __cordl_internal_get_textUpdateInterval() const;

constexpr float_t& __cordl_internal_get_textUpdateInterval() ;

constexpr void __cordl_internal_set_enteringVirtualStumpString(::StringW  value) ;

constexpr void __cordl_internal_set_isEnteringVirtualStump(bool  value) ;

constexpr void __cordl_internal_set_lastTextUpdateTime(float_t  value) ;

constexpr void __cordl_internal_set_leavingVirtualStumpString(::StringW  value) ;

constexpr void __cordl_internal_set_maxNumProgressDots(int32_t  value) ;

constexpr void __cordl_internal_set_numProgressDots(int32_t  value) ;

constexpr void __cordl_internal_set_teleportingStatusText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_textUpdateInterval(float_t  value) ;

/// @brief Method .ctor, addr 0x5bf59d0, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VirtualStumpTeleportingHUD() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VirtualStumpTeleportingHUD", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VirtualStumpTeleportingHUD(VirtualStumpTeleportingHUD && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VirtualStumpTeleportingHUD", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VirtualStumpTeleportingHUD(VirtualStumpTeleportingHUD const& ) = delete;

/// @brief Field VIRT_STUMP_HUD_ENTERING_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  VIRT_STUMP_HUD_ENTERING_KEY{u"VIRT_STUMP_HUD_ENTERING"};

/// @brief Field VIRT_STUMP_HUD_LEAVING_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  VIRT_STUMP_HUD_LEAVING_KEY{u"VIRT_STUMP_HUD_LEAVING"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4081};

/// [SerializeField]
/// @brief Field enteringVirtualStumpString, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___enteringVirtualStumpString;

/// [SerializeField]
/// @brief Field leavingVirtualStumpString, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___leavingVirtualStumpString;

/// [SerializeField]
/// @brief Field teleportingStatusText, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___teleportingStatusText;

/// [SerializeField]
/// @brief Field maxNumProgressDots, offset: 0x38, size: 0x4, def value: None
 int32_t  ___maxNumProgressDots;

/// [SerializeField]
/// @brief Field textUpdateInterval, offset: 0x3c, size: 0x4, def value: None
 float_t  ___textUpdateInterval;

/// @brief Field lastTextUpdateTime, offset: 0x40, size: 0x4, def value: None
 float_t  ___lastTextUpdateTime;

/// @brief Field numProgressDots, offset: 0x44, size: 0x4, def value: None
 int32_t  ___numProgressDots;

/// @brief Field isEnteringVirtualStump, offset: 0x48, size: 0x1, def value: None
 bool  ___isEnteringVirtualStump;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD, ___enteringVirtualStumpString) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD, ___leavingVirtualStumpString) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD, ___teleportingStatusText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD, ___maxNumProgressDots) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD, ___textUpdateInterval) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD, ___lastTextUpdateTime) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD, ___numProgressDots) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD, ___isEnteringVirtualStump) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD) == 0x50, "Size mismatch!");

} // namespace end def GorillaTagScripts::UI::ModIO
