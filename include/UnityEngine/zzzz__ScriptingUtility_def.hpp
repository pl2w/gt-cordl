#pragma once
// IWYU pragma private; include "UnityEngine/ScriptingUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ScriptingUtility)
namespace GlobalNamespace {
struct ScriptingUtility_TestClass;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace UnityEngine {
class ScriptingUtility;
}
// Write type traits
MARK_REF_T(::UnityEngine::ScriptingUtility*);
DEFINE_IL2CPP_CLASS(::UnityEngine::ScriptingUtility*, "UnityEngine", "ScriptingUtility");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ScriptingUtility
class CORDL_TYPE ScriptingUtility : public ::System::Object {
public:
// Declarations
using TestClass = ::GlobalNamespace::ScriptingUtility_TestClass;

/// [RequiredByNativeCode]
/// @brief Method IsManagedCodeWorking, addr 0xb5e4d3c, size 0x8, virtual false, abstract: false, final false
static inline bool IsManagedCodeWorking() ;

/// [RequiredByNativeCode]
/// @brief Method SetupCallbacks, addr 0xb5e4d44, size 0x4, virtual false, abstract: false, final false
static inline void SetupCallbacks(::System::IntPtr  p) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScriptingUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScriptingUtility", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScriptingUtility(ScriptingUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScriptingUtility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScriptingUtility(ScriptingUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15096};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ScriptingUtility) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
