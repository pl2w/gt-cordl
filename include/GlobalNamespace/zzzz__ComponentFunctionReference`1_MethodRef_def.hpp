#pragma once
// IWYU pragma private; include "GlobalNamespace/ComponentFunctionReference`1_MethodRef.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ComponentFunctionReference`1_MethodRef)
namespace System::Reflection {
class MethodInfo;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TResult>
struct ComponentFunctionReference_1_MethodRef;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::ComponentFunctionReference_1_MethodRef);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::ComponentFunctionReference_1_MethodRef, "", "ComponentFunctionReference`1/MethodRef");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename TResult>
// Is value type: true
// CS Name: ComponentFunctionReference`1/MethodRef<TResult>
struct CORDL_TYPE ComponentFunctionReference_1_MethodRef {
public:
// Declarations
/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Object*  obj, ::System::Reflection::MethodInfo*  m) ;

// Ctor Parameters []
// @brief default ctor
constexpr ComponentFunctionReference_1_MethodRef() ;

// Ctor Parameters [CppParam { name: "component", ty: "::UnityW<::UnityEngine::Object>", modifiers: "", def_value: None, comment: None }, CppParam { name: "methodName", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr ComponentFunctionReference_1_MethodRef(::UnityW<::UnityEngine::Object>  component, ::StringW  methodName) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2621};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field component, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  component;

/// @brief Field methodName, offset: 0x8, size: 0x8, def value: None
 ::StringW  methodName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
