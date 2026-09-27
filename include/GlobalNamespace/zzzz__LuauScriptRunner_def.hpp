#pragma once
// IWYU pragma private; include "GlobalNamespace/LuauScriptRunner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LuauScriptRunner)
namespace GlobalNamespace {
class lua_CFunction;
}
namespace GlobalNamespace {
struct lua_State;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class LuauScriptRunner;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LuauScriptRunner*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LuauScriptRunner*, "", "LuauScriptRunner");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LuauScriptRunner
class CORDL_TYPE LuauScriptRunner : public ::System::Object {
public:
// Declarations
/// @brief Field L, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_L, put=__cordl_internal_set_L)) ::GlobalNamespace::lua_State*  L;

/// @brief Field Script, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Script, put=__cordl_internal_set_Script)) ::StringW  Script;

/// @brief Field ScriptName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ScriptName, put=__cordl_internal_set_ScriptName)) ::StringW  ScriptName;

/// @brief Field ScriptRunners, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ScriptRunners, put=setStaticF_ScriptRunners)) ::System::Collections::Generic::List_1<::GlobalNamespace::LuauScriptRunner*>*  ScriptRunners;

/// @brief Field ShouldTick, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_ShouldTick, put=__cordl_internal_set_ShouldTick)) bool  ShouldTick;

/// @brief Field postTickCallback, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_postTickCallback, put=__cordl_internal_set_postTickCallback)) ::GlobalNamespace::lua_CFunction*  postTickCallback;

/// @brief Field preTickCallback, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_preTickCallback, put=__cordl_internal_set_preTickCallback)) ::GlobalNamespace::lua_CFunction*  preTickCallback;

/// @brief Method ErrorCheck, addr 0x5a8bd8c, size 0x18c, virtual false, abstract: false, final false
static inline bool ErrorCheck(::GlobalNamespace::lua_State*  L, int32_t  status) ;

/// @brief Method FromFile, addr 0x5a98428, size 0x1ec, virtual false, abstract: false, final false
inline ::GlobalNamespace::LuauScriptRunner* FromFile(::StringW  filePath, /* [CanBeNull] */ ::GlobalNamespace::lua_CFunction*  bindings, /* [CanBeNull] */ ::GlobalNamespace::lua_CFunction*  tick) ;

static inline ::GlobalNamespace::LuauScriptRunner* New_ctor(::StringW  script, ::StringW  name, /* [CanBeNull] */ ::GlobalNamespace::lua_CFunction*  bindings, /* [CanBeNull] */ ::GlobalNamespace::lua_CFunction*  preTick, /* [CanBeNull] */ ::GlobalNamespace::lua_CFunction*  postTick) ;

/// @brief Method Tick, addr 0x5a957d0, size 0x1b4, virtual false, abstract: false, final false
inline bool Tick(float_t  deltaTime) ;

constexpr ::GlobalNamespace::lua_State* const& __cordl_internal_get_L() const;

constexpr ::GlobalNamespace::lua_State*& __cordl_internal_get_L() ;

constexpr ::StringW const& __cordl_internal_get_Script() const;

constexpr ::StringW& __cordl_internal_get_Script() ;

constexpr ::StringW const& __cordl_internal_get_ScriptName() const;

constexpr ::StringW& __cordl_internal_get_ScriptName() ;

constexpr bool const& __cordl_internal_get_ShouldTick() const;

constexpr bool& __cordl_internal_get_ShouldTick() ;

constexpr ::GlobalNamespace::lua_CFunction* const& __cordl_internal_get_postTickCallback() const;

constexpr ::GlobalNamespace::lua_CFunction*& __cordl_internal_get_postTickCallback() ;

constexpr ::GlobalNamespace::lua_CFunction* const& __cordl_internal_get_preTickCallback() const;

constexpr ::GlobalNamespace::lua_CFunction*& __cordl_internal_get_preTickCallback() ;

constexpr void __cordl_internal_set_L(::GlobalNamespace::lua_State*  value) ;

constexpr void __cordl_internal_set_Script(::StringW  value) ;

constexpr void __cordl_internal_set_ScriptName(::StringW  value) ;

constexpr void __cordl_internal_set_ShouldTick(bool  value) ;

constexpr void __cordl_internal_set_postTickCallback(::GlobalNamespace::lua_CFunction*  value) ;

constexpr void __cordl_internal_set_preTickCallback(::GlobalNamespace::lua_CFunction*  value) ;

/// @brief Method .ctor, addr 0x5a98134, size 0x2f4, virtual false, abstract: false, final false
inline void _ctor(::StringW  script, ::StringW  name, /* [CanBeNull] */ ::GlobalNamespace::lua_CFunction*  bindings, /* [CanBeNull] */ ::GlobalNamespace::lua_CFunction*  preTick, /* [CanBeNull] */ ::GlobalNamespace::lua_CFunction*  postTick) ;

static inline ::System::Collections::Generic::List_1<::GlobalNamespace::LuauScriptRunner*>* getStaticF_ScriptRunners() ;

static inline void setStaticF_ScriptRunners(::System::Collections::Generic::List_1<::GlobalNamespace::LuauScriptRunner*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LuauScriptRunner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LuauScriptRunner", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LuauScriptRunner(LuauScriptRunner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LuauScriptRunner", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LuauScriptRunner(LuauScriptRunner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3233};

/// @brief Field ShouldTick, offset: 0x10, size: 0x1, def value: None
 bool  ___ShouldTick;

/// @brief Field postTickCallback, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::lua_CFunction*  ___postTickCallback;

/// @brief Field preTickCallback, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::lua_CFunction*  ___preTickCallback;

/// @brief Field ScriptName, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___ScriptName;

/// @brief Field Script, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___Script;

/// @brief Field L, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::lua_State*  ___L;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LuauScriptRunner, ___ShouldTick) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LuauScriptRunner, ___postTickCallback) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LuauScriptRunner, ___preTickCallback) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LuauScriptRunner, ___ScriptName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LuauScriptRunner, ___Script) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LuauScriptRunner, ___L) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LuauScriptRunner) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
