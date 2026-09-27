#pragma once
// IWYU pragma private; include "GorillaTagScripts/GorillaPlayerTimerCountDisplay.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaPlayerTimerCountDisplay)
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace GorillaTagScripts {
class GorillaPlayerTimerCountDisplay;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::GorillaPlayerTimerCountDisplay*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::GorillaPlayerTimerCountDisplay*, "GorillaTagScripts", "GorillaPlayerTimerCountDisplay");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.GorillaPlayerTimerCountDisplay
class CORDL_TYPE GorillaPlayerTimerCountDisplay : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field <TickRunning>k__BackingField, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Field displayText, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_displayText, put=__cordl_internal_set_displayText)) ::UnityW<::TMPro::TMP_Text>  displayText;

/// @brief Field isInitialized, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_isInitialized, put=__cordl_internal_set_isInitialized)) bool  isInitialized;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

static inline ::GorillaTagScripts::GorillaPlayerTimerCountDisplay* New_ctor() ;

/// @brief Method OnDisable, addr 0x5bca4b8, size 0x1fc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5bca4b4, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnLocalTimerStarted, addr 0x5bca6b4, size 0x80, virtual false, abstract: false, final false
inline void OnLocalTimerStarted() ;

/// @brief Method OnTimerStopped, addr 0x5bca734, size 0x19c, virtual false, abstract: false, final false
inline void OnTimerStopped(int32_t  actorNum, int32_t  timeDelta) ;

/// @brief Method Start, addr 0x5bca26c, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Tick, addr 0x5bcab34, size 0x4, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method TryInit, addr 0x5bca270, size 0x244, virtual false, abstract: false, final false
inline void TryInit() ;

/// @brief Method UpdateLatestTime, addr 0x5bca8d0, size 0x178, virtual false, abstract: false, final false
inline void UpdateLatestTime() ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_displayText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_displayText() ;

constexpr bool const& __cordl_internal_get_isInitialized() const;

constexpr bool& __cordl_internal_get_isInitialized() ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_displayText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_isInitialized(bool  value) ;

/// @brief Method .ctor, addr 0x5bcab38, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x5bcab24, size 0x8, virtual true, abstract: false, final true
inline bool get_TickRunning() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x5bcab2c, size 0x8, virtual true, abstract: false, final true
inline void set_TickRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaPlayerTimerCountDisplay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaPlayerTimerCountDisplay", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaPlayerTimerCountDisplay(GorillaPlayerTimerCountDisplay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaPlayerTimerCountDisplay", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaPlayerTimerCountDisplay(GorillaPlayerTimerCountDisplay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3990};

/// [SerializeField]
/// @brief Field displayText, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___displayText;

/// @brief Field isInitialized, offset: 0x28, size: 0x1, def value: None
 bool  ___isInitialized;

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0x29, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::GorillaPlayerTimerCountDisplay, ___displayText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaPlayerTimerCountDisplay, ___isInitialized) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaPlayerTimerCountDisplay, ____TickRunning_k__BackingField) == 0x29, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::GorillaPlayerTimerCountDisplay) == 0x30, "Size mismatch!");

} // namespace end def GorillaTagScripts
