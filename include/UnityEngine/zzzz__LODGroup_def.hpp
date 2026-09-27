#pragma once
// IWYU pragma private; include "UnityEngine/LODGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Component_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(LODGroup)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
struct LOD;
}
// Forward declare root types
namespace UnityEngine {
class LODGroup;
}
// Write type traits
MARK_REF_T(::UnityEngine::LODGroup*);
DEFINE_IL2CPP_CLASS(::UnityEngine::LODGroup*, "UnityEngine", "LODGroup");
// [NativeHeader("Runtime/Graphics/LOD/LODGroupManager.h")]
// [NativeHeader("Runtime/Graphics/LOD/LODUtility.h")]
// [StaticAccessor("GetLODGroupManager()", (UnityEngine.Bindings.StaticAccessorType)0)]
// [NativeHeader("Runtime/Graphics/LOD/LODGroup.h")]
// Dependencies UnityEngine.Component
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.LODGroup
class CORDL_TYPE LODGroup : public ::UnityEngine::Component {
public:
// Declarations
 __declspec(property(put=set_enabled)) bool  enabled;

/// [FreeFunction("GetLODs_Binding", HasExplicitThis = true)]
/// @brief Method GetLODs, addr 0xb5a0110, size 0x78, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::LOD> GetLODs() ;

/// @brief Method GetLODs_Injected, addr 0xb5a0188, size 0x3c, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::LOD> GetLODs_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method set_enabled, addr 0xb5a004c, size 0x80, virtual false, abstract: false, final false
inline void set_enabled(bool  value) ;

/// @brief Method set_enabled_Injected, addr 0xb5a00cc, size 0x44, virtual false, abstract: false, final false
static inline void set_enabled_Injected(::System::IntPtr  _unity_self, bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LODGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LODGroup", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LODGroup(LODGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LODGroup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LODGroup(LODGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14938};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::LODGroup) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
