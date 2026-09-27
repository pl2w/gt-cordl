#pragma once
// IWYU pragma private; include "GorillaTagScripts/GorillaPlayerTimerButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaPlayerTimerButton)
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GorillaTagScripts {
class GorillaPlayerTimerButton;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::GorillaPlayerTimerButton*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::GorillaPlayerTimerButton*, "GorillaTagScripts", "GorillaPlayerTimerButton");
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.GorillaPlayerTimerButton
class CORDL_TYPE GorillaPlayerTimerButton : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field debounceTime, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_debounceTime, put=__cordl_internal_set_debounceTime)) float_t  debounceTime;

/// @brief Field isBothStartAndStop, offset 0x25, size 0x1 
 __declspec(property(get=__cordl_internal_get_isBothStartAndStop, put=__cordl_internal_set_isBothStartAndStop)) bool  isBothStartAndStop;

/// @brief Field isInitialized, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_isInitialized, put=__cordl_internal_set_isInitialized)) bool  isInitialized;

/// @brief Field isStartButton, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_isStartButton, put=__cordl_internal_set_isStartButton)) bool  isStartButton;

/// @brief Field lastTriggeredTime, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastTriggeredTime, put=__cordl_internal_set_lastTriggeredTime)) float_t  lastTriggeredTime;

/// @brief Field materialProps, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_materialProps, put=__cordl_internal_set_materialProps)) ::UnityEngine::MaterialPropertyBlock*  materialProps;

/// @brief Field mesh, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_mesh, put=__cordl_internal_set_mesh)) ::UnityW<::UnityEngine::MeshRenderer>  mesh;

/// @brief Field notPressedColor, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get_notPressedColor, put=__cordl_internal_set_notPressedColor)) ::UnityEngine::Color  notPressedColor;

/// @brief Field pressColor, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_pressColor, put=__cordl_internal_set_pressColor)) ::UnityEngine::Color  pressColor;

/// @brief Method Awake, addr 0x5bc97fc, size 0x60, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GorillaTagScripts::GorillaPlayerTimerButton* New_ctor() ;

/// @brief Method OnDisable, addr 0x5bc9b10, size 0x1a4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5bc9a48, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnLocalTimerStarted, addr 0x5bc9cb4, size 0x10, virtual false, abstract: false, final false
inline void OnLocalTimerStarted() ;

/// @brief Method OnTimerStopped, addr 0x5bc9cc4, size 0x98, virtual false, abstract: false, final false
inline void OnTimerStopped(int32_t  actorNum, int32_t  timeDelta) ;

/// @brief Method OnTriggerEnter, addr 0x5bc9d5c, size 0x2d4, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x5bca138, size 0x124, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method Start, addr 0x5bc985c, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method TryInit, addr 0x5bc9860, size 0x1e8, virtual false, abstract: false, final false
inline void TryInit() ;

constexpr float_t const& __cordl_internal_get_debounceTime() const;

constexpr float_t& __cordl_internal_get_debounceTime() ;

constexpr bool const& __cordl_internal_get_isBothStartAndStop() const;

constexpr bool& __cordl_internal_get_isBothStartAndStop() ;

constexpr bool const& __cordl_internal_get_isInitialized() const;

constexpr bool& __cordl_internal_get_isInitialized() ;

constexpr bool const& __cordl_internal_get_isStartButton() const;

constexpr bool& __cordl_internal_get_isStartButton() ;

constexpr float_t const& __cordl_internal_get_lastTriggeredTime() const;

constexpr float_t& __cordl_internal_get_lastTriggeredTime() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get_materialProps() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get_materialProps() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_mesh() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_mesh() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_notPressedColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_notPressedColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_pressColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_pressColor() ;

constexpr void __cordl_internal_set_debounceTime(float_t  value) ;

constexpr void __cordl_internal_set_isBothStartAndStop(bool  value) ;

constexpr void __cordl_internal_set_isInitialized(bool  value) ;

constexpr void __cordl_internal_set_isStartButton(bool  value) ;

constexpr void __cordl_internal_set_lastTriggeredTime(float_t  value) ;

constexpr void __cordl_internal_set_materialProps(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set_mesh(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_notPressedColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_pressColor(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0x5bca25c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaPlayerTimerButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaPlayerTimerButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaPlayerTimerButton(GorillaPlayerTimerButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaPlayerTimerButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaPlayerTimerButton(GorillaPlayerTimerButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3989};

/// @brief Field lastTriggeredTime, offset: 0x20, size: 0x4, def value: None
 float_t  ___lastTriggeredTime;

/// [SerializeField]
/// @brief Field isStartButton, offset: 0x24, size: 0x1, def value: None
 bool  ___isStartButton;

/// [SerializeField]
/// @brief Field isBothStartAndStop, offset: 0x25, size: 0x1, def value: None
 bool  ___isBothStartAndStop;

/// [SerializeField]
/// @brief Field debounceTime, offset: 0x28, size: 0x4, def value: None
 float_t  ___debounceTime;

/// [SerializeField]
/// @brief Field mesh, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___mesh;

/// [SerializeField]
/// @brief Field pressColor, offset: 0x38, size: 0x10, def value: None
 ::UnityEngine::Color  ___pressColor;

/// [SerializeField]
/// @brief Field notPressedColor, offset: 0x48, size: 0x10, def value: None
 ::UnityEngine::Color  ___notPressedColor;

/// @brief Field materialProps, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ___materialProps;

/// @brief Field isInitialized, offset: 0x60, size: 0x1, def value: None
 bool  ___isInitialized;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::GorillaPlayerTimerButton, ___lastTriggeredTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaPlayerTimerButton, ___isStartButton) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaPlayerTimerButton, ___isBothStartAndStop) == 0x25, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaPlayerTimerButton, ___debounceTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaPlayerTimerButton, ___mesh) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaPlayerTimerButton, ___pressColor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaPlayerTimerButton, ___notPressedColor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaPlayerTimerButton, ___materialProps) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GorillaPlayerTimerButton, ___isInitialized) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::GorillaPlayerTimerButton) == 0x68, "Size mismatch!");

} // namespace end def GorillaTagScripts
