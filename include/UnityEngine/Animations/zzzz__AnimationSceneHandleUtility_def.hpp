#pragma once
// IWYU pragma private; include "UnityEngine/Animations/AnimationSceneHandleUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimationSceneHandleUtility)
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::Animations {
struct AnimationStream;
}
namespace UnityEngine::Animations {
struct PropertySceneHandle;
}
// Forward declare root types
namespace UnityEngine::Animations {
class AnimationSceneHandleUtility;
}
// Write type traits
MARK_REF_T(::UnityEngine::Animations::AnimationSceneHandleUtility*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::AnimationSceneHandleUtility*, "UnityEngine.Animations", "AnimationSceneHandleUtility");
// [MovedFrom("UnityEngine.Experimental.Animations")]
// [NativeHeader("Modules/Animation/ScriptBindings/AnimationStreamHandles.bindings.h")]
// Dependencies System.Object
namespace UnityEngine::Animations {
// Is value type: false
// CS Name: UnityEngine.Animations.AnimationSceneHandleUtility
class CORDL_TYPE AnimationSceneHandleUtility : public ::System::Object {
public:
// Declarations
/// @brief Method ReadFloats, addr 0xb54d464, size 0x118, virtual false, abstract: false, final false
static inline void ReadFloats(::UnityEngine::Animations::AnimationStream  stream, ::Unity::Collections::NativeArray_1<::UnityEngine::Animations::PropertySceneHandle>  handles, ::Unity::Collections::NativeArray_1<float_t>  buffer) ;

/// [NativeMethod(Name = "AnimationHandleUtilityBindings::ReadSceneFloatsInternal", IsFreeFunction = true, HasExplicitThis = false, IsThreadSafe = true)]
/// @brief Method ReadSceneFloatsInternal, addr 0xb54d57c, size 0x5c, virtual false, abstract: false, final false
static inline void ReadSceneFloatsInternal(::by_ref<::UnityEngine::Animations::AnimationStream>  stream, void*  propertySceneHandles, void*  floatBuffer, int32_t  count) ;

/// @brief Method ValidateAndGetArrayCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T0,typename T1>
requires(::cordl_internals::value_type_constraint<T0> && ::cordl_internals::default_constructor_constraint<T0> && ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1>)
static inline int32_t ValidateAndGetArrayCount(::by_ref<::UnityEngine::Animations::AnimationStream>  stream, ::Unity::Collections::NativeArray_1<T0>  handles, ::Unity::Collections::NativeArray_1<T1>  buffer) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimationSceneHandleUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimationSceneHandleUtility", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimationSceneHandleUtility(AnimationSceneHandleUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimationSceneHandleUtility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimationSceneHandleUtility(AnimationSceneHandleUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29822};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Animations::AnimationSceneHandleUtility) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Animations
