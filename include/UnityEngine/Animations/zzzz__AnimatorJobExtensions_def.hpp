#pragma once
// IWYU pragma private; include "UnityEngine/Animations/AnimatorJobExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AnimatorJobExtensions)
namespace System {
struct IntPtr;
}
namespace System {
class Type;
}
namespace UnityEngine::Animations {
struct CustomStreamPropertyType;
}
namespace UnityEngine::Animations {
struct PropertySceneHandle;
}
namespace UnityEngine::Animations {
struct PropertyStreamHandle;
}
namespace UnityEngine::Animations {
struct TransformSceneHandle;
}
namespace UnityEngine::Animations {
struct TransformStreamHandle;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::Animations {
class AnimatorJobExtensions;
}
// Write type traits
MARK_REF_T(::UnityEngine::Animations::AnimatorJobExtensions*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::AnimatorJobExtensions*, "UnityEngine.Animations", "AnimatorJobExtensions");
// [NativeHeader("Modules/Animation/Director/AnimationStreamHandles.h")]
// [NativeHeader("Modules/Animation/Director/AnimationSceneHandles.h")]
// [NativeHeader("Modules/Animation/Director/AnimationStream.h")]
// [StaticAccessor("AnimatorJobExtensionsBindings", (UnityEngine.Bindings.StaticAccessorType)2)]
// [NativeHeader("Modules/Animation/ScriptBindings/AnimatorJobExtensions.bindings.h")]
// [MovedFrom("UnityEngine.Experimental.Animations")]
// [NativeHeader("Modules/Animation/Animator.h")]
// [Extension]
// Dependencies System.Object
namespace UnityEngine::Animations {
// Is value type: false
// CS Name: UnityEngine.Animations.AnimatorJobExtensions
class CORDL_TYPE AnimatorJobExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method BindCustomStreamProperty, addr 0xb54ddbc, size 0x24, virtual false, abstract: false, final false
static inline ::UnityEngine::Animations::PropertyStreamHandle BindCustomStreamProperty(::UnityEngine::Animator*  animator, ::StringW  property, ::UnityEngine::Animations::CustomStreamPropertyType  type) ;

/// [Extension]
/// @brief Method BindSceneProperty, addr 0xb54e408, size 0x1c, virtual false, abstract: false, final false
static inline ::UnityEngine::Animations::PropertySceneHandle BindSceneProperty(::UnityEngine::Animator*  animator, ::UnityEngine::Transform*  transform, ::System::Type*  type, ::StringW  property) ;

/// [Extension]
/// @brief Method BindSceneProperty, addr 0xb54e424, size 0x18, virtual false, abstract: false, final false
static inline ::UnityEngine::Animations::PropertySceneHandle BindSceneProperty(::UnityEngine::Animator*  animator, ::UnityEngine::Transform*  transform, ::System::Type*  type, ::StringW  property, /* [DefaultValue("false")] */ bool  isObjectReference) ;

/// [Extension]
/// @brief Method BindSceneTransform, addr 0xb54e2c4, size 0x18, virtual false, abstract: false, final false
static inline ::UnityEngine::Animations::TransformSceneHandle BindSceneTransform(::UnityEngine::Animator*  animator, ::UnityEngine::Transform*  transform) ;

/// [Extension]
/// @brief Method BindStreamProperty, addr 0xb54dd70, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::Animations::PropertyStreamHandle BindStreamProperty(::UnityEngine::Animator*  animator, ::UnityEngine::Transform*  transform, ::System::Type*  type, ::StringW  property) ;

/// [Extension]
/// @brief Method BindStreamProperty, addr 0xb54dd98, size 0x24, virtual false, abstract: false, final false
static inline ::UnityEngine::Animations::PropertyStreamHandle BindStreamProperty(::UnityEngine::Animator*  animator, ::UnityEngine::Transform*  transform, ::System::Type*  type, ::StringW  property, /* [DefaultValue("false")] */ bool  isObjectReference) ;

/// [Extension]
/// @brief Method BindStreamTransform, addr 0xb54dc18, size 0x2c, virtual false, abstract: false, final false
static inline ::UnityEngine::Animations::TransformStreamHandle BindStreamTransform(::UnityEngine::Animator*  animator, ::UnityEngine::Transform*  transform) ;

/// @brief Method InternalBindCustomStreamProperty, addr 0xb54dde0, size 0x21c, virtual false, abstract: false, final false
static inline void InternalBindCustomStreamProperty(/* [NotNull] */ ::UnityEngine::Animator*  animator, /* [NotNull] */ ::StringW  property, ::UnityEngine::Animations::CustomStreamPropertyType  propertyType, ::by_ref<::UnityEngine::Animations::PropertyStreamHandle>  propertyStreamHandle) ;

/// @brief Method InternalBindCustomStreamProperty_Injected, addr 0xb54e7cc, size 0x5c, virtual false, abstract: false, final false
static inline void InternalBindCustomStreamProperty_Injected(::System::IntPtr  animator, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  property, ::UnityEngine::Animations::CustomStreamPropertyType  propertyType, ::by_ref<::UnityEngine::Animations::PropertyStreamHandle>  propertyStreamHandle) ;

/// @brief Method InternalBindSceneProperty, addr 0xb54e43c, size 0x2c8, virtual false, abstract: false, final false
static inline void InternalBindSceneProperty(/* [NotNull] */ ::UnityEngine::Animator*  animator, /* [NotNull] */ ::UnityEngine::Transform*  transform, /* [NotNull] */ ::System::Type*  type, /* [NotNull] */ ::StringW  property, bool  isObjectReference, ::by_ref<::UnityEngine::Animations::PropertySceneHandle>  propertySceneHandle) ;

/// @brief Method InternalBindSceneProperty_Injected, addr 0xb54e87c, size 0x74, virtual false, abstract: false, final false
static inline void InternalBindSceneProperty_Injected(::System::IntPtr  animator, ::System::IntPtr  transform, ::System::Type*  type, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  property, bool  isObjectReference, ::by_ref<::UnityEngine::Animations::PropertySceneHandle>  propertySceneHandle) ;

/// @brief Method InternalBindSceneTransform, addr 0xb54e2dc, size 0x12c, virtual false, abstract: false, final false
static inline void InternalBindSceneTransform(/* [NotNull] */ ::UnityEngine::Animator*  animator, /* [NotNull] */ ::UnityEngine::Transform*  transform, ::by_ref<::UnityEngine::Animations::TransformSceneHandle>  transformSceneHandle) ;

/// @brief Method InternalBindSceneTransform_Injected, addr 0xb54e828, size 0x54, virtual false, abstract: false, final false
static inline void InternalBindSceneTransform_Injected(::System::IntPtr  animator, ::System::IntPtr  transform, ::by_ref<::UnityEngine::Animations::TransformSceneHandle>  transformSceneHandle) ;

/// @brief Method InternalBindStreamProperty, addr 0xb54dffc, size 0x2c8, virtual false, abstract: false, final false
static inline void InternalBindStreamProperty(/* [NotNull] */ ::UnityEngine::Animator*  animator, /* [NotNull] */ ::UnityEngine::Transform*  transform, /* [NotNull] */ ::System::Type*  type, /* [NotNull] */ ::StringW  property, bool  isObjectReference, ::by_ref<::UnityEngine::Animations::PropertyStreamHandle>  propertyStreamHandle) ;

/// @brief Method InternalBindStreamProperty_Injected, addr 0xb54e758, size 0x74, virtual false, abstract: false, final false
static inline void InternalBindStreamProperty_Injected(::System::IntPtr  animator, ::System::IntPtr  transform, ::System::Type*  type, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  property, bool  isObjectReference, ::by_ref<::UnityEngine::Animations::PropertyStreamHandle>  propertyStreamHandle) ;

/// @brief Method InternalBindStreamTransform, addr 0xb54dc44, size 0x12c, virtual false, abstract: false, final false
static inline void InternalBindStreamTransform(/* [NotNull] */ ::UnityEngine::Animator*  animator, /* [NotNull] */ ::UnityEngine::Transform*  transform, ::by_ref<::UnityEngine::Animations::TransformStreamHandle>  transformStreamHandle) ;

/// @brief Method InternalBindStreamTransform_Injected, addr 0xb54e704, size 0x54, virtual false, abstract: false, final false
static inline void InternalBindStreamTransform_Injected(::System::IntPtr  animator, ::System::IntPtr  transform, ::by_ref<::UnityEngine::Animations::TransformStreamHandle>  transformStreamHandle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimatorJobExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimatorJobExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimatorJobExtensions(AnimatorJobExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimatorJobExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimatorJobExtensions(AnimatorJobExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29826};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Animations::AnimatorJobExtensions) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Animations
