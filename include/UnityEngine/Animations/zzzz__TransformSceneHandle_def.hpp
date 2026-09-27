#pragma once
// IWYU pragma private; include "UnityEngine/Animations/TransformSceneHandle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TransformSceneHandle)
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
struct TransformSceneHandle;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Animations::TransformSceneHandle);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::TransformSceneHandle, "UnityEngine.Animations", "TransformSceneHandle");
// [MovedFrom("UnityEngine.Experimental.Animations")]
// [NativeHeader("Modules/Animation/ScriptBindings/AnimationStreamHandles.bindings.h")]
// [NativeHeader("Modules/Animation/Director/AnimationSceneHandles.h")]
// Dependencies 
namespace UnityEngine::Animations {
// Is value type: true
// CS Name: UnityEngine.Animations.TransformSceneHandle
struct CORDL_TYPE TransformSceneHandle {
public:
// Declarations
 __declspec(property(get=get_createdByNative)) bool  createdByNative;

 __declspec(property(get=get_hasTransformSceneHandleDefinitionIndex)) bool  hasTransformSceneHandleDefinitionIndex;

/// @brief Method CheckIsValid, addr 0xb54d2a4, size 0xe4, virtual false, abstract: false, final false
inline void CheckIsValid(::by_ref<::UnityEngine::Animations::AnimationStream>  stream) ;

/// @brief Method GetLocalTRS, addr 0xb54d388, size 0x70, virtual false, abstract: false, final false
inline void GetLocalTRS(::UnityEngine::Animations::AnimationStream  stream, ::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Quaternion>  rotation, ::by_ref<::UnityEngine::Vector3>  scale) ;

/// [NativeMethod(Name = "TransformSceneHandleBindings::GetLocalTRSInternal", IsFreeFunction = true, IsThreadSafe = true, HasExplicitThis = true)]
/// @brief Method GetLocalTRSInternal, addr 0xb54d3f8, size 0x6c, virtual false, abstract: false, final false
inline void GetLocalTRSInternal(::by_ref<::UnityEngine::Animations::AnimationStream>  stream, ::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Quaternion>  rotation, ::by_ref<::UnityEngine::Vector3>  scale) ;

/// [ThreadSafe]
/// @brief Method HasValidTransform, addr 0xb54d260, size 0x44, virtual false, abstract: false, final false
inline bool HasValidTransform(::by_ref<::UnityEngine::Animations::AnimationStream>  stream) ;

/// @brief Method IsValid, addr 0xb54d1a4, size 0x9c, virtual false, abstract: false, final false
inline bool IsValid(::UnityEngine::Animations::AnimationStream  stream) ;

/// @brief Method get_createdByNative, addr 0xb54d240, size 0x10, virtual false, abstract: false, final false
inline bool get_createdByNative() ;

/// @brief Method get_hasTransformSceneHandleDefinitionIndex, addr 0xb54d250, size 0x10, virtual false, abstract: false, final false
inline bool get_hasTransformSceneHandleDefinitionIndex() ;

// Ctor Parameters []
// @brief default ctor
constexpr TransformSceneHandle() ;

// Ctor Parameters [CppParam { name: "valid", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "transformSceneHandleDefinitionIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TransformSceneHandle(uint32_t  valid, int32_t  transformSceneHandleDefinitionIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29820};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field valid, offset: 0x0, size: 0x4, def value: None
 uint32_t  valid;

/// @brief Field transformSceneHandleDefinitionIndex, offset: 0x4, size: 0x4, def value: None
 int32_t  transformSceneHandleDefinitionIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Animations::TransformSceneHandle, valid) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animations::TransformSceneHandle, transformSceneHandleDefinitionIndex) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Animations::TransformSceneHandle) == 0x8, "Size mismatch!");

} // namespace end def UnityEngine::Animations
