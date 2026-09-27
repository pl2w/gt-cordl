#pragma once
// IWYU pragma private; include "GlobalNamespace/LuauHud.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LuauHud)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Text {
class StringBuilder;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class LuauHud;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LuauHud*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LuauHud*, "", "LuauHud");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LuauHud
class CORDL_TYPE LuauHud : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::GlobalNamespace::LuauHud>  _instance;

/// @brief Field builder, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_builder, put=__cordl_internal_set_builder)) ::System::Text::StringBuilder*  builder;

/// @brief Field buttonDown, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_buttonDown, put=__cordl_internal_set_buttonDown)) bool  buttonDown;

/// @brief Field debugHud, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_debugHud, put=__cordl_internal_set_debugHud)) ::UnityW<::UnityEngine::GameObject>  debugHud;

/// @brief Field luauLogs, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_luauLogs, put=__cordl_internal_set_luauLogs)) ::System::Collections::Generic::List_1<::StringW>*  luauLogs;

/// @brief Field path, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_path, put=__cordl_internal_set_path)) ::StringW  path;

/// @brief Field resetTimer, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_resetTimer, put=__cordl_internal_set_resetTimer)) float_t  resetTimer;

/// @brief Field script, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_script, put=__cordl_internal_set_script)) ::StringW  script;

/// @brief Field showLog, offset 0x22, size 0x1 
 __declspec(property(get=__cordl_internal_get_showLog, put=__cordl_internal_set_showLog)) bool  showLog;

/// @brief Field text, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_text, put=__cordl_internal_set_text)) ::UnityW<::TMPro::TMP_Text>  text;

/// @brief Field useLuauHud, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_useLuauHud, put=__cordl_internal_set_useLuauHud)) bool  useLuauHud;

/// @brief Method Awake, addr 0x5a94b0c, size 0x19c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method LoadLocalScript, addr 0x5a9546c, size 0x6c, virtual false, abstract: false, final false
inline ::StringW LoadLocalScript() ;

/// @brief Method LuauLog, addr 0x5a8bf18, size 0x130, virtual false, abstract: false, final false
inline void LuauLog(::StringW  log) ;

static inline ::GlobalNamespace::LuauHud* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5a94ca8, size 0xb4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method RestartLuauScript, addr 0x5a952e8, size 0x184, virtual false, abstract: false, final false
inline void RestartLuauScript() ;

/// @brief Method Start, addr 0x5a94d5c, size 0x1b8, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x5a94f14, size 0x3d4, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::System::Text::StringBuilder* const& __cordl_internal_get_builder() const;

constexpr ::System::Text::StringBuilder*& __cordl_internal_get_builder() ;

constexpr bool const& __cordl_internal_get_buttonDown() const;

constexpr bool& __cordl_internal_get_buttonDown() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_debugHud() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_debugHud() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_luauLogs() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_luauLogs() ;

constexpr ::StringW const& __cordl_internal_get_path() const;

constexpr ::StringW& __cordl_internal_get_path() ;

constexpr float_t const& __cordl_internal_get_resetTimer() const;

constexpr float_t& __cordl_internal_get_resetTimer() ;

constexpr ::StringW const& __cordl_internal_get_script() const;

constexpr ::StringW& __cordl_internal_get_script() ;

constexpr bool const& __cordl_internal_get_showLog() const;

constexpr bool& __cordl_internal_get_showLog() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_text() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_text() ;

constexpr bool const& __cordl_internal_get_useLuauHud() const;

constexpr bool& __cordl_internal_get_useLuauHud() ;

constexpr void __cordl_internal_set_builder(::System::Text::StringBuilder*  value) ;

constexpr void __cordl_internal_set_buttonDown(bool  value) ;

constexpr void __cordl_internal_set_debugHud(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_luauLogs(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_path(::StringW  value) ;

constexpr void __cordl_internal_set_resetTimer(float_t  value) ;

constexpr void __cordl_internal_set_script(::StringW  value) ;

constexpr void __cordl_internal_set_showLog(bool  value) ;

constexpr void __cordl_internal_set_text(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_useLuauHud(bool  value) ;

/// @brief Method .ctor, addr 0x5a954d8, size 0xbc, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::LuauHud> getStaticF__instance() ;

/// @brief Method get_Instance, addr 0x5a94ac4, size 0x48, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::LuauHud> get_Instance() ;

static inline void setStaticF__instance(::UnityW<::GlobalNamespace::LuauHud>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LuauHud() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LuauHud", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LuauHud(LuauHud && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LuauHud", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LuauHud(LuauHud const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3230};

/// @brief Field useLuauHud, offset: 0x20, size: 0x1, def value: None
 bool  ___useLuauHud;

/// @brief Field buttonDown, offset: 0x21, size: 0x1, def value: None
 bool  ___buttonDown;

/// @brief Field showLog, offset: 0x22, size: 0x1, def value: None
 bool  ___showLog;

/// @brief Field debugHud, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___debugHud;

/// @brief Field text, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___text;

/// @brief Field builder, offset: 0x38, size: 0x8, def value: None
 ::System::Text::StringBuilder*  ___builder;

/// @brief Field resetTimer, offset: 0x40, size: 0x4, def value: None
 float_t  ___resetTimer;

/// @brief Field path, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___path;

/// @brief Field script, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___script;

/// @brief Field luauLogs, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___luauLogs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LuauHud, ___useLuauHud) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LuauHud, ___buttonDown) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LuauHud, ___showLog) == 0x22, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LuauHud, ___debugHud) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LuauHud, ___text) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LuauHud, ___builder) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LuauHud, ___resetTimer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LuauHud, ___path) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LuauHud, ___script) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LuauHud, ___luauLogs) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LuauHud) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
