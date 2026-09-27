#pragma once
// IWYU pragma private; include "UnityEngine/AnimationState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__TrackedReference_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimationState)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
class AnimationState_BindingsMarshaller;
}
// Forward declare root types
namespace UnityEngine {
class AnimationState;
}
namespace UnityEngine {
class AnimationState_BindingsMarshaller;
}
// Write type traits
MARK_REF_T(::UnityEngine::AnimationState*);
MARK_REF_T(::UnityEngine::AnimationState_BindingsMarshaller*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AnimationState*, "UnityEngine", "AnimationState");
DEFINE_IL2CPP_CLASS(::UnityEngine::AnimationState_BindingsMarshaller*, "UnityEngine", "AnimationState/BindingsMarshaller");
// [UsedByNativeCode]
// [NativeHeader("Modules/Animation/AnimationState.h")]
// Dependencies UnityEngine.TrackedReference
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AnimationState
class CORDL_TYPE AnimationState : public ::UnityEngine::TrackedReference {
public:
// Declarations
using BindingsMarshaller = ::UnityEngine::AnimationState_BindingsMarshaller;

 __declspec(property(get=get_clip)) ::UnityW<::UnityEngine::AnimationClip>  clip;

 __declspec(property(put=set_enabled)) bool  enabled;

 __declspec(property(put=set_layer)) int32_t  layer;

 __declspec(property(get=get_length)) float_t  length;

 __declspec(property(get=get_normalizedTime, put=set_normalizedTime)) float_t  normalizedTime;

 __declspec(property(put=set_speed)) float_t  speed;

 __declspec(property(get=get_time, put=set_time)) float_t  time;

 __declspec(property(get=get_weight, put=set_weight)) float_t  weight;

static inline ::UnityEngine::AnimationState* New_ctor() ;

/// @brief Method .ctor, addr 0xb53cc2c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_clip, addr 0xb53bd60, size 0x88, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AnimationClip> get_clip() ;

/// @brief Method get_clip_Injected, addr 0xb53cbf0, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr get_clip_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_length, addr 0xb53cac8, size 0x50, virtual false, abstract: false, final false
inline float_t get_length() ;

/// @brief Method get_length_Injected, addr 0xb53cb18, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_length_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_normalizedTime, addr 0xb53c8e4, size 0x50, virtual false, abstract: false, final false
inline float_t get_normalizedTime() ;

/// @brief Method get_normalizedTime_Injected, addr 0xb53c934, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_normalizedTime_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_time, addr 0xb53c7ac, size 0x50, virtual false, abstract: false, final false
inline float_t get_time() ;

/// @brief Method get_time_Injected, addr 0xb53c7fc, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_time_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_weight, addr 0xb53c674, size 0x50, virtual false, abstract: false, final false
inline float_t get_weight() ;

/// @brief Method get_weight_Injected, addr 0xb53c6c4, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_weight_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method set_enabled, addr 0xb53c5d8, size 0x58, virtual false, abstract: false, final false
inline void set_enabled(bool  value) ;

/// @brief Method set_enabled_Injected, addr 0xb53c630, size 0x44, virtual false, abstract: false, final false
static inline void set_enabled_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_layer, addr 0xb53cb54, size 0x58, virtual false, abstract: false, final false
inline void set_layer(int32_t  value) ;

/// @brief Method set_layer_Injected, addr 0xb53cbac, size 0x44, virtual false, abstract: false, final false
static inline void set_layer_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

/// @brief Method set_normalizedTime, addr 0xb53c970, size 0x60, virtual false, abstract: false, final false
inline void set_normalizedTime(float_t  value) ;

/// @brief Method set_normalizedTime_Injected, addr 0xb53c9d0, size 0x4c, virtual false, abstract: false, final false
static inline void set_normalizedTime_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_speed, addr 0xb53ca1c, size 0x60, virtual false, abstract: false, final false
inline void set_speed(float_t  value) ;

/// @brief Method set_speed_Injected, addr 0xb53ca7c, size 0x4c, virtual false, abstract: false, final false
static inline void set_speed_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_time, addr 0xb53c838, size 0x60, virtual false, abstract: false, final false
inline void set_time(float_t  value) ;

/// @brief Method set_time_Injected, addr 0xb53c898, size 0x4c, virtual false, abstract: false, final false
static inline void set_time_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_weight, addr 0xb53c700, size 0x60, virtual false, abstract: false, final false
inline void set_weight(float_t  value) ;

/// @brief Method set_weight_Injected, addr 0xb53c760, size 0x4c, virtual false, abstract: false, final false
static inline void set_weight_Injected(::System::IntPtr  _unity_self, float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimationState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimationState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimationState(AnimationState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimationState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimationState(AnimationState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29763};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AnimationState) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AnimationState/BindingsMarshaller
class CORDL_TYPE AnimationState_BindingsMarshaller : public ::System::Object {
public:
// Declarations
/// @brief Method ConvertToNative, addr 0xb53cc34, size 0x14, virtual false, abstract: false, final false
static inline ::System::IntPtr ConvertToNative(::UnityEngine::AnimationState*  animationState) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimationState_BindingsMarshaller() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimationState_BindingsMarshaller", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimationState_BindingsMarshaller(AnimationState_BindingsMarshaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimationState_BindingsMarshaller", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimationState_BindingsMarshaller(AnimationState_BindingsMarshaller const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29762};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AnimationState_BindingsMarshaller) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
