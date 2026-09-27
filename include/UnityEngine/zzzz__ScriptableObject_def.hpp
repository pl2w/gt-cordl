#pragma once
// IWYU pragma private; include "UnityEngine/ScriptableObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ScriptableObject)
namespace System {
struct IntPtr;
}
namespace System {
class Type;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
// Forward declare root types
namespace UnityEngine {
class ScriptableObject;
}
// Write type traits
MARK_REF_T(::UnityEngine::ScriptableObject*);
DEFINE_IL2CPP_CLASS(::UnityEngine::ScriptableObject*, "UnityEngine", "ScriptableObject");
// [ExtensionOfNativeClass]
// [RequiredByNativeCode]
// [NativeHeader("Runtime/Mono/MonoBehaviour.h")]
// [NativeClass(null)]
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ScriptableObject
class CORDL_TYPE ScriptableObject : public ::UnityEngine::Object {
public:
// Declarations
/// @brief Method CreateInstance, addr 0xb5e4a10, size 0x4, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::ScriptableObject> CreateInstance(::StringW  className) ;

/// @brief Method CreateInstance, addr 0xb5e4c10, size 0x8, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::ScriptableObject> CreateInstance(::System::Type*  type) ;

/// @brief Method CreateInstance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T CreateInstance() ;

/// [NativeMethod(IsThreadSafe = true, ThrowsException = true)]
/// @brief Method CreateScriptableObject, addr 0xb5e49d4, size 0x3c, virtual false, abstract: false, final false
static inline void CreateScriptableObject(/* [Writable] */ ::UnityEngine::ScriptableObject*  self) ;

/// [FreeFunction("Scripting::CreateScriptableObject")]
/// @brief Method CreateScriptableObjectInstanceFromName, addr 0xb5e4a14, size 0x1fc, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::ScriptableObject> CreateScriptableObjectInstanceFromName(::StringW  className) ;

/// @brief Method CreateScriptableObjectInstanceFromName_Injected, addr 0xb5e4c94, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr CreateScriptableObjectInstanceFromName_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  className) ;

/// [NativeMethod(Name = "Scripting::CreateScriptableObjectWithType", IsFreeFunction = true, ThrowsException = true)]
/// @brief Method CreateScriptableObjectInstanceFromType, addr 0xb5e4c18, size 0x7c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::ScriptableObject> CreateScriptableObjectInstanceFromType(::System::Type*  type, bool  applyDefaultsAndReset) ;

/// @brief Method CreateScriptableObjectInstanceFromType_Injected, addr 0xb5e4cd0, size 0x44, virtual false, abstract: false, final false
static inline ::System::IntPtr CreateScriptableObjectInstanceFromType_Injected(::System::Type*  type, bool  applyDefaultsAndReset) ;

static inline ::UnityEngine::ScriptableObject* New_ctor() ;

/// @brief Method .ctor, addr 0xb5e4954, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScriptableObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScriptableObject", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScriptableObject(ScriptableObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScriptableObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScriptableObject(ScriptableObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15093};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ScriptableObject) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
