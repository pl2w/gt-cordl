#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/Rendering/GraphicsStateCollection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GraphicsStateCollection)
namespace System {
struct IntPtr;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Rendering {
struct GraphicsDeviceType;
}
namespace UnityEngine {
struct RuntimePlatform;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering {
class GraphicsStateCollection;
}
// Write type traits
MARK_REF_T(::UnityEngine::Experimental::Rendering::GraphicsStateCollection*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Experimental::Rendering::GraphicsStateCollection*, "UnityEngine.Experimental.Rendering", "GraphicsStateCollection");
// [NativeHeader("Runtime/Graphics/GraphicsStateCollection.h")]
// Dependencies UnityEngine.Object
namespace UnityEngine::Experimental::Rendering {
// Is value type: false
// CS Name: UnityEngine.Experimental.Rendering.GraphicsStateCollection
class CORDL_TYPE GraphicsStateCollection : public ::UnityEngine::Object {
public:
// Declarations
 __declspec(property(get=get_graphicsDeviceType)) ::UnityEngine::Rendering::GraphicsDeviceType  graphicsDeviceType;

 __declspec(property(get=get_qualityLevelName)) ::StringW  qualityLevelName;

 __declspec(property(get=get_runtimePlatform)) ::UnityEngine::RuntimePlatform  runtimePlatform;

 __declspec(property(get=get_totalGraphicsStateCount)) int32_t  totalGraphicsStateCount;

/// @brief Method BeginTrace, addr 0xb62f614, size 0x78, virtual false, abstract: false, final false
inline bool BeginTrace() ;

/// @brief Method BeginTrace_Injected, addr 0xb62f68c, size 0x3c, virtual false, abstract: false, final false
static inline bool BeginTrace_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method EndTrace, addr 0xb62f6c8, size 0x78, virtual false, abstract: false, final false
inline void EndTrace() ;

/// @brief Method EndTrace_Injected, addr 0xb62f740, size 0x3c, virtual false, abstract: false, final false
static inline void EndTrace_Injected(::System::IntPtr  _unity_self) ;

/// [NativeName("CreateFromScript")]
/// @brief Method Internal_Create, addr 0xb62fde4, size 0x3c, virtual false, abstract: false, final false
static inline void Internal_Create(/* [Writable] */ ::UnityEngine::Experimental::Rendering::GraphicsStateCollection*  gsc) ;

static inline ::UnityEngine::Experimental::Rendering::GraphicsStateCollection* New_ctor() ;

/// @brief Method SendToEditor, addr 0xb62fa54, size 0x1ac, virtual false, abstract: false, final false
inline bool SendToEditor(::StringW  fileName) ;

/// @brief Method SendToEditor_Injected, addr 0xb62fc00, size 0x44, virtual false, abstract: false, final false
static inline bool SendToEditor_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  fileName) ;

/// [NativeName("Warmup")]
/// @brief Method WarmUp, addr 0xb62fc44, size 0x98, virtual false, abstract: false, final false
inline ::Unity::Jobs::JobHandle WarmUp(::Unity::Jobs::JobHandle  dependency) ;

/// @brief Method WarmUp_Injected, addr 0xb62fcdc, size 0x54, virtual false, abstract: false, final false
static inline void WarmUp_Injected(::System::IntPtr  _unity_self, ::by_ref<::Unity::Jobs::JobHandle>  dependency, ::by_ref<::Unity::Jobs::JobHandle>  ret) ;

/// @brief Method .ctor, addr 0xb62fe20, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

/// [NativeName("GetDeviceRenderer")]
/// @brief Method get_graphicsDeviceType, addr 0xb62f77c, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::GraphicsDeviceType get_graphicsDeviceType() ;

/// @brief Method get_graphicsDeviceType_Injected, addr 0xb62f7f4, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::GraphicsDeviceType get_graphicsDeviceType_Injected(::System::IntPtr  _unity_self) ;

/// [NativeName("GetQualityLevelName")]
/// @brief Method get_qualityLevelName, addr 0xb62f8e4, size 0x12c, virtual false, abstract: false, final false
inline ::StringW get_qualityLevelName() ;

/// @brief Method get_qualityLevelName_Injected, addr 0xb62fa10, size 0x44, virtual false, abstract: false, final false
static inline void get_qualityLevelName_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// [NativeName("GetRuntimePlatform")]
/// @brief Method get_runtimePlatform, addr 0xb62f830, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::RuntimePlatform get_runtimePlatform() ;

/// @brief Method get_runtimePlatform_Injected, addr 0xb62f8a8, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::RuntimePlatform get_runtimePlatform_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_totalGraphicsStateCount, addr 0xb62fd30, size 0x78, virtual false, abstract: false, final false
inline int32_t get_totalGraphicsStateCount() ;

/// @brief Method get_totalGraphicsStateCount_Injected, addr 0xb62fda8, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_totalGraphicsStateCount_Injected(::System::IntPtr  _unity_self) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GraphicsStateCollection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GraphicsStateCollection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GraphicsStateCollection(GraphicsStateCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GraphicsStateCollection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GraphicsStateCollection(GraphicsStateCollection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15665};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Experimental::Rendering::GraphicsStateCollection) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Experimental::Rendering
