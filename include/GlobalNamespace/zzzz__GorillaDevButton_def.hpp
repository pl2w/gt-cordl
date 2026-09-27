#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaDevButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__DevButtonType_def.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaDevButton)
namespace GlobalNamespace {
class DevConsoleInstance;
}
namespace UnityEngine {
class Coroutine;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaDevButton;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaDevButton*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaDevButton*, "", "GorillaDevButton");
// Dependencies DevButtonType, GorillaPressableButton, UnityEngine.LogType
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaDevButton
class CORDL_TYPE GorillaDevButton : public ::GlobalNamespace::GorillaPressableButton {
public:
// Declarations
/// @brief Field Type, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_Type, put=__cordl_internal_set_Type)) ::GlobalNamespace::DevButtonType  Type;

/// @brief Field holdForSeconds, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get_holdForSeconds, put=__cordl_internal_set_holdForSeconds)) float_t  holdForSeconds;

/// @brief Field levelType, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_levelType, put=__cordl_internal_set_levelType)) ::UnityEngine::LogType  levelType;

/// @brief Field lineNumber, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_lineNumber, put=__cordl_internal_set_lineNumber)) int32_t  lineNumber;

 __declspec(property(get=get_on, put=set_on)) bool  on;

/// @brief Field pressCoroutine, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_pressCoroutine, put=__cordl_internal_set_pressCoroutine)) ::UnityEngine::Coroutine*  pressCoroutine;

/// @brief Field repeatIfHeld, offset 0xcc, size 0x1 
 __declspec(property(get=__cordl_internal_get_repeatIfHeld, put=__cordl_internal_set_repeatIfHeld)) bool  repeatIfHeld;

/// @brief Field targetConsole, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetConsole, put=__cordl_internal_set_targetConsole)) ::UnityW<::GlobalNamespace::DevConsoleInstance>  targetConsole;

static inline ::GlobalNamespace::GorillaDevButton* New_ctor() ;

/// @brief Method OnEnable, addr 0x59978d0, size 0xc, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::GlobalNamespace::DevButtonType const& __cordl_internal_get_Type() const;

constexpr ::GlobalNamespace::DevButtonType& __cordl_internal_get_Type() ;

constexpr float_t const& __cordl_internal_get_holdForSeconds() const;

constexpr float_t& __cordl_internal_get_holdForSeconds() ;

constexpr ::UnityEngine::LogType const& __cordl_internal_get_levelType() const;

constexpr ::UnityEngine::LogType& __cordl_internal_get_levelType() ;

constexpr int32_t const& __cordl_internal_get_lineNumber() const;

constexpr int32_t& __cordl_internal_get_lineNumber() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_pressCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_pressCoroutine() ;

constexpr bool const& __cordl_internal_get_repeatIfHeld() const;

constexpr bool& __cordl_internal_get_repeatIfHeld() ;

constexpr ::UnityW<::GlobalNamespace::DevConsoleInstance> const& __cordl_internal_get_targetConsole() const;

constexpr ::UnityW<::GlobalNamespace::DevConsoleInstance>& __cordl_internal_get_targetConsole() ;

constexpr void __cordl_internal_set_Type(::GlobalNamespace::DevButtonType  value) ;

constexpr void __cordl_internal_set_holdForSeconds(float_t  value) ;

constexpr void __cordl_internal_set_levelType(::UnityEngine::LogType  value) ;

constexpr void __cordl_internal_set_lineNumber(int32_t  value) ;

constexpr void __cordl_internal_set_pressCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_repeatIfHeld(bool  value) ;

constexpr void __cordl_internal_set_targetConsole(::UnityW<::GlobalNamespace::DevConsoleInstance>  value) ;

/// @brief Method .ctor, addr 0x59978dc, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_on, addr 0x59978a4, size 0x8, virtual false, abstract: false, final false
inline bool get_on() ;

/// @brief Method set_on, addr 0x59978ac, size 0x24, virtual false, abstract: false, final false
inline void set_on(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaDevButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaDevButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaDevButton(GorillaDevButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaDevButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaDevButton(GorillaDevButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2599};

/// @brief Field Type, offset: 0xb8, size: 0x4, def value: None
 ::GlobalNamespace::DevButtonType  ___Type;

/// @brief Field levelType, offset: 0xbc, size: 0x4, def value: None
 ::UnityEngine::LogType  ___levelType;

/// @brief Field targetConsole, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::DevConsoleInstance>  ___targetConsole;

/// @brief Field lineNumber, offset: 0xc8, size: 0x4, def value: None
 int32_t  ___lineNumber;

/// @brief Field repeatIfHeld, offset: 0xcc, size: 0x1, def value: None
 bool  ___repeatIfHeld;

/// @brief Field holdForSeconds, offset: 0xd0, size: 0x4, def value: None
 float_t  ___holdForSeconds;

/// @brief Field pressCoroutine, offset: 0xd8, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___pressCoroutine;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaDevButton, ___Type) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaDevButton, ___levelType) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaDevButton, ___targetConsole) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaDevButton, ___lineNumber) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaDevButton, ___repeatIfHeld) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaDevButton, ___holdForSeconds) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaDevButton, ___pressCoroutine) == 0xd8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaDevButton) == 0xe0, "Size mismatch!");

} // namespace end def GlobalNamespace
