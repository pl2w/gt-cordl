#pragma once
// IWYU pragma private; include "UnityEngine/Random.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Random)
namespace GlobalNamespace {
struct Random_State;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Random;
}
// Write type traits
MARK_REF_T(::UnityEngine::Random*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Random*, "UnityEngine", "Random");
// [NativeHeader("Runtime/Export/Random/Random.bindings.h")]
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Random
class CORDL_TYPE Random : public ::System::Object {
public:
// Declarations
using State = ::GlobalNamespace::Random_State;

/// @brief Method ColorHSV, addr 0xb5d57dc, size 0x24, virtual false, abstract: false, final false
static inline ::UnityEngine::Color ColorHSV() ;

/// @brief Method ColorHSV, addr 0xb5d5978, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Color ColorHSV(float_t  hueMin, float_t  hueMax, float_t  saturationMin, float_t  saturationMax, float_t  valueMin, float_t  valueMax) ;

/// @brief Method ColorHSV, addr 0xb5d5800, size 0x178, virtual false, abstract: false, final false
static inline ::UnityEngine::Color ColorHSV(float_t  hueMin, float_t  hueMax, float_t  saturationMin, float_t  saturationMax, float_t  valueMin, float_t  valueMax, float_t  alphaMin, float_t  alphaMax) ;

/// [FreeFunction]
/// @brief Method GetRandomUnitCircle, addr 0xb5d55cc, size 0x3c, virtual false, abstract: false, final false
static inline void GetRandomUnitCircle(::by_ref<::UnityEngine::Vector2>  output) ;

/// [NativeMethod("SetSeed")]
/// [StaticAccessor("GetScriptingRand()", (UnityEngine.Bindings.StaticAccessorType)0)]
/// @brief Method InitState, addr 0xb5d531c, size 0x3c, virtual false, abstract: false, final false
static inline void InitState(int32_t  seed) ;

/// [FreeFunction]
/// @brief Method RandomRangeInt, addr 0xb5d54d8, size 0x44, virtual false, abstract: false, final false
static inline int32_t RandomRangeInt(int32_t  minInclusive, int32_t  maxExclusive) ;

/// [FreeFunction]
/// @brief Method Range, addr 0xb5d5454, size 0x40, virtual false, abstract: false, final false
static inline float_t Range(float_t  minInclusive, float_t  maxInclusive) ;

/// @brief Method Range, addr 0xb5d5494, size 0x44, virtual false, abstract: false, final false
static inline int32_t Range(int32_t  minInclusive, int32_t  maxExclusive) ;

/// @brief Method get_insideUnitCircle, addr 0xb5d5608, size 0x44, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 get_insideUnitCircle() ;

/// [FreeFunction]
/// @brief Method get_insideUnitSphere, addr 0xb5d5544, size 0x4c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 get_insideUnitSphere() ;

/// @brief Method get_insideUnitSphere_Injected, addr 0xb5d5590, size 0x3c, virtual false, abstract: false, final false
static inline void get_insideUnitSphere_Injected(::by_ref<::UnityEngine::Vector3>  ret) ;

/// [FreeFunction]
/// @brief Method get_onUnitSphere, addr 0xb5d564c, size 0x4c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 get_onUnitSphere() ;

/// @brief Method get_onUnitSphere_Injected, addr 0xb5d5698, size 0x3c, virtual false, abstract: false, final false
static inline void get_onUnitSphere_Injected(::by_ref<::UnityEngine::Vector3>  ret) ;

/// [FreeFunction]
/// @brief Method get_rotation, addr 0xb5d56d4, size 0x48, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion get_rotation() ;

/// [FreeFunction]
/// @brief Method get_rotationUniform, addr 0xb5d5758, size 0x48, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion get_rotationUniform() ;

/// @brief Method get_rotationUniform_Injected, addr 0xb5d57a0, size 0x3c, virtual false, abstract: false, final false
static inline void get_rotationUniform_Injected(::by_ref<::UnityEngine::Quaternion>  ret) ;

/// @brief Method get_rotation_Injected, addr 0xb5d571c, size 0x3c, virtual false, abstract: false, final false
static inline void get_rotation_Injected(::by_ref<::UnityEngine::Quaternion>  ret) ;

/// @brief Method get_state, addr 0xb5d5358, size 0x44, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Random_State get_state() ;

/// @brief Method get_state_Injected, addr 0xb5d539c, size 0x3c, virtual false, abstract: false, final false
static inline void get_state_Injected(::by_ref<::GlobalNamespace::Random_State>  ret) ;

/// [FreeFunction]
/// @brief Method get_value, addr 0xb5d551c, size 0x28, virtual false, abstract: false, final false
static inline float_t get_value() ;

/// @brief Method set_state, addr 0xb5d53d8, size 0x40, virtual false, abstract: false, final false
static inline void set_state(::GlobalNamespace::Random_State  value) ;

/// @brief Method set_state_Injected, addr 0xb5d5418, size 0x3c, virtual false, abstract: false, final false
static inline void set_state_Injected(::by_ref<::GlobalNamespace::Random_State>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Random() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Random", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Random(Random && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Random", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Random(Random const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15018};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Random) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
