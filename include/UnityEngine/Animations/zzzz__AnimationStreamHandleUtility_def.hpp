#pragma once
// IWYU pragma private; include "UnityEngine/Animations/AnimationStreamHandleUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimationStreamHandleUtility)
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::Animations {
struct AnimationStream;
}
namespace UnityEngine::Animations {
struct PropertyStreamHandle;
}
// Forward declare root types
namespace UnityEngine::Animations {
class AnimationStreamHandleUtility;
}
// Write type traits
MARK_REF_T(::UnityEngine::Animations::AnimationStreamHandleUtility*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::AnimationStreamHandleUtility*, "UnityEngine.Animations", "AnimationStreamHandleUtility");
// [NativeHeader("Modules/Animation/ScriptBindings/AnimationStreamHandles.bindings.h")]
// [MovedFrom("UnityEngine.Experimental.Animations")]
// Dependencies System.Object
namespace UnityEngine::Animations {
// Is value type: false
// CS Name: UnityEngine.Animations.AnimationStreamHandleUtility
class CORDL_TYPE AnimationStreamHandleUtility : public ::System::Object {
public:
// Declarations
/// @brief Method ReadFloats, addr 0xb54d778, size 0x120, virtual false, abstract: false, final false
static inline void ReadFloats(::UnityEngine::Animations::AnimationStream  stream, ::Unity::Collections::NativeArray_1<::UnityEngine::Animations::PropertyStreamHandle>  handles, ::Unity::Collections::NativeArray_1<float_t>  buffer) ;

/// [NativeMethod(Name = "AnimationHandleUtilityBindings::ReadStreamFloatsInternal", IsFreeFunction = true, HasExplicitThis = false, IsThreadSafe = true)]
/// @brief Method ReadStreamFloatsInternal, addr 0xb54d898, size 0x5c, virtual false, abstract: false, final false
static inline void ReadStreamFloatsInternal(::by_ref<::UnityEngine::Animations::AnimationStream>  stream, void*  propertyStreamHandles, void*  floatBuffer, int32_t  count) ;

/// @brief Method WriteFloats, addr 0xb54d5d8, size 0x134, virtual false, abstract: false, final false
static inline void WriteFloats(::UnityEngine::Animations::AnimationStream  stream, ::Unity::Collections::NativeArray_1<::UnityEngine::Animations::PropertyStreamHandle>  handles, ::Unity::Collections::NativeArray_1<float_t>  buffer, bool  useMask) ;

/// [NativeMethod(Name = "AnimationHandleUtilityBindings::WriteStreamFloatsInternal", IsFreeFunction = true, HasExplicitThis = false, IsThreadSafe = true)]
/// @brief Method WriteStreamFloatsInternal, addr 0xb54d70c, size 0x6c, virtual false, abstract: false, final false
static inline void WriteStreamFloatsInternal(::by_ref<::UnityEngine::Animations::AnimationStream>  stream, void*  propertyStreamHandles, void*  floatBuffer, int32_t  count, bool  useMask) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimationStreamHandleUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimationStreamHandleUtility", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimationStreamHandleUtility(AnimationStreamHandleUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimationStreamHandleUtility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimationStreamHandleUtility(AnimationStreamHandleUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29823};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Animations::AnimationStreamHandleUtility) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Animations
