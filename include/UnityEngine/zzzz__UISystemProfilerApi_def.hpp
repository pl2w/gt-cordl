#pragma once
// IWYU pragma private; include "UnityEngine/UISystemProfilerApi.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UISystemProfilerApi)
namespace GlobalNamespace {
struct UISystemProfilerApi_SampleType;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class UISystemProfilerApi;
}
// Write type traits
MARK_REF_T(::UnityEngine::UISystemProfilerApi*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UISystemProfilerApi*, "UnityEngine", "UISystemProfilerApi");
// [StaticAccessor("UI::SystemProfilerApi", (UnityEngine.Bindings.StaticAccessorType)2)]
// [NativeHeader("Modules/UI/Canvas.h")]
// [IgnoredByDeepProfiler]
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.UISystemProfilerApi
class CORDL_TYPE UISystemProfilerApi : public ::System::Object {
public:
// Declarations
using SampleType = ::GlobalNamespace::UISystemProfilerApi_SampleType;

/// @brief Method AddMarker, addr 0xb8e9c90, size 0x19c, virtual false, abstract: false, final false
static inline void AddMarker(::StringW  name, ::UnityEngine::Object*  obj) ;

/// @brief Method AddMarker_Injected, addr 0xb8e9e2c, size 0x44, virtual false, abstract: false, final false
static inline void AddMarker_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name, ::System::IntPtr  obj) ;

/// @brief Method BeginSample, addr 0xb8e9c18, size 0x3c, virtual false, abstract: false, final false
static inline void BeginSample(::GlobalNamespace::UISystemProfilerApi_SampleType  type) ;

/// @brief Method EndSample, addr 0xb8e9c54, size 0x3c, virtual false, abstract: false, final false
static inline void EndSample(::GlobalNamespace::UISystemProfilerApi_SampleType  type) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UISystemProfilerApi() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UISystemProfilerApi", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UISystemProfilerApi(UISystemProfilerApi && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UISystemProfilerApi", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UISystemProfilerApi(UISystemProfilerApi const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32092};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UISystemProfilerApi) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
