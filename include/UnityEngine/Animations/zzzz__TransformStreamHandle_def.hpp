#pragma once
// IWYU pragma private; include "UnityEngine/Animations/TransformStreamHandle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TransformStreamHandle)
namespace UnityEngine::Animations {
struct AnimationStream;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::Animations {
struct TransformStreamHandle;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Animations::TransformStreamHandle);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::TransformStreamHandle, "UnityEngine.Animations", "TransformStreamHandle");
// [MovedFrom("UnityEngine.Experimental.Animations")]
// [NativeHeader("Modules/Animation/Director/AnimationStreamHandles.h")]
// [NativeHeader("Modules/Animation/ScriptBindings/AnimationStreamHandles.bindings.h")]
// Dependencies 
namespace UnityEngine::Animations {
// Is value type: true
// CS Name: UnityEngine.Animations.TransformStreamHandle
struct CORDL_TYPE TransformStreamHandle {
public:
// Declarations
 __declspec(property(get=get_animatorBindingsVersion)) uint32_t  animatorBindingsVersion;

 __declspec(property(get=get_createdByNative)) bool  createdByNative;

 __declspec(property(get=get_hasHandleIndex)) bool  hasHandleIndex;

 __declspec(property(get=get_hasSkeletonIndex)) bool  hasSkeletonIndex;

/// @brief Method CheckIsValidAndResolve, addr 0xb54cea4, size 0x124, virtual false, abstract: false, final false
inline void CheckIsValidAndResolve(::by_ref<::UnityEngine::Animations::AnimationStream>  stream) ;

/// @brief Method IsResolvedInternal, addr 0xb54ce5c, size 0x48, virtual false, abstract: false, final false
inline bool IsResolvedInternal(::by_ref<::UnityEngine::Animations::AnimationStream>  stream) ;

/// @brief Method IsSameVersionAsStream, addr 0xb54ce38, size 0x14, virtual false, abstract: false, final false
inline bool IsSameVersionAsStream(::by_ref<::UnityEngine::Animations::AnimationStream>  stream) ;

/// @brief Method IsValidInternal, addr 0xb54cdbc, size 0x54, virtual false, abstract: false, final false
inline bool IsValidInternal(::by_ref<::UnityEngine::Animations::AnimationStream>  stream) ;

/// [NativeMethod(Name = "Resolve", IsThreadSafe = true)]
/// @brief Method ResolveInternal, addr 0xb54cfc8, size 0x44, virtual false, abstract: false, final false
inline void ResolveInternal(::by_ref<::UnityEngine::Animations::AnimationStream>  stream) ;

/// @brief Method SetLocalTRS, addr 0xb54d00c, size 0x98, virtual false, abstract: false, final false
inline void SetLocalTRS(::UnityEngine::Animations::AnimationStream  stream, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  scale, bool  useMask) ;

/// [NativeMethod(Name = "TransformStreamHandleBindings::SetLocalTRSInternal", IsFreeFunction = true, HasExplicitThis = true, IsThreadSafe = true)]
/// @brief Method SetLocalTRSInternal, addr 0xb54d0a4, size 0x8c, virtual false, abstract: false, final false
inline void SetLocalTRSInternal(::by_ref<::UnityEngine::Animations::AnimationStream>  stream, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  scale, bool  useMask) ;

/// @brief Method SetLocalTRSInternal_Injected, addr 0xb54d130, size 0x74, virtual false, abstract: false, final false
static inline void SetLocalTRSInternal_Injected(::by_ref<::UnityEngine::Animations::TransformStreamHandle>  _unity_self, ::by_ref<::UnityEngine::Animations::AnimationStream>  stream, ::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Quaternion>  rotation, ::by_ref<::UnityEngine::Vector3>  scale, bool  useMask) ;

/// @brief Method get_animatorBindingsVersion, addr 0xb54ce30, size 0x8, virtual false, abstract: false, final false
inline uint32_t get_animatorBindingsVersion() ;

/// @brief Method get_createdByNative, addr 0xb54ce10, size 0x10, virtual false, abstract: false, final false
inline bool get_createdByNative() ;

/// @brief Method get_hasHandleIndex, addr 0xb54ce20, size 0x10, virtual false, abstract: false, final false
inline bool get_hasHandleIndex() ;

/// @brief Method get_hasSkeletonIndex, addr 0xb54ce4c, size 0x10, virtual false, abstract: false, final false
inline bool get_hasSkeletonIndex() ;

// Ctor Parameters []
// @brief default ctor
constexpr TransformStreamHandle() ;

// Ctor Parameters [CppParam { name: "m_AnimatorBindingsVersion", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "handleIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "skeletonIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TransformStreamHandle(uint32_t  m_AnimatorBindingsVersion, int32_t  handleIndex, int32_t  skeletonIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29818};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field m_AnimatorBindingsVersion, offset: 0x0, size: 0x4, def value: None
 uint32_t  m_AnimatorBindingsVersion;

/// @brief Field handleIndex, offset: 0x4, size: 0x4, def value: None
 int32_t  handleIndex;

/// @brief Field skeletonIndex, offset: 0x8, size: 0x4, def value: None
 int32_t  skeletonIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Animations::TransformStreamHandle, m_AnimatorBindingsVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animations::TransformStreamHandle, handleIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animations::TransformStreamHandle, skeletonIndex) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Animations::TransformStreamHandle) == 0xc, "Size mismatch!");

} // namespace end def UnityEngine::Animations
