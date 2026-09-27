#pragma once
// IWYU pragma private; include "Fusion/NetworkBehaviourBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkBehaviour_def.hpp"
#include "Fusion/zzzz__Tick_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkBehaviourBuffer)
namespace Fusion {
struct Tick;
}
namespace GlobalNamespace {
template<typename T>
struct NetworkBehaviour_BehaviourReader_1;
}
namespace GlobalNamespace {
template<typename T>
struct NetworkBehaviour_PropertyReader_1;
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
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace Fusion {
struct NetworkBehaviourBuffer;
}
// Write type traits
MARK_VAL_T(::Fusion::NetworkBehaviourBuffer);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkBehaviourBuffer, "Fusion", "NetworkBehaviourBuffer");
// [IsByRefLike]
// [Obsolete("Types with embedded references are not supported in this version of your compiler.", true)]
// [DefaultMember("Item")]
// Dependencies Fusion.NetworkBehaviour, Fusion.Tick
namespace Fusion {
// Is value type: true
// CS Name: Fusion.NetworkBehaviourBuffer
struct CORDL_TYPE NetworkBehaviourBuffer {
public:
// Declarations
 __declspec(property(get=get_Item)) int32_t  Item[];

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_Tick)) ::Fusion::Tick  Tick;

 __declspec(property(get=get_Valid)) bool  Valid;

/// @brief Method Read, addr 0x5f829e0, size 0x90, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion Read(::GlobalNamespace::NetworkBehaviour_PropertyReader_1<::UnityEngine::Quaternion>  reader) ;

/// @brief Method Read, addr 0x5f82834, size 0x8c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 Read(::GlobalNamespace::NetworkBehaviour_PropertyReader_1<::UnityEngine::Vector2>  reader) ;

/// @brief Method Read, addr 0x5f828c0, size 0x90, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 Read(::GlobalNamespace::NetworkBehaviour_PropertyReader_1<::UnityEngine::Vector3>  reader) ;

/// @brief Method Read, addr 0x5f82950, size 0x90, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 Read(::GlobalNamespace::NetworkBehaviour_PropertyReader_1<::UnityEngine::Vector4>  reader) ;

/// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::NetworkBehaviour*>)
inline T Read(::GlobalNamespace::NetworkBehaviour_BehaviourReader_1<T>  reader) ;

/// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T Read(::GlobalNamespace::NetworkBehaviour_PropertyReader_1<T>  reader) ;

/// @brief Method Read, addr 0x5f827ac, size 0x88, virtual false, abstract: false, final false
inline float_t Read(::GlobalNamespace::NetworkBehaviour_PropertyReader_1<float_t>  reader) ;

/// @brief Method ReinterpretState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T ReinterpretState(int32_t  offset) ;

/// @brief Method .ctor, addr 0x5f7f1dc, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::Fusion::Tick  tick, int32_t*  ptr, int32_t  length) ;

/// @brief Method get_Item, addr 0x5f82774, size 0x38, virtual false, abstract: false, final false
inline int32_t get_Item(int32_t  index) ;

/// @brief Method get_Length, addr 0x5f8276c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Length() ;

/// @brief Method get_Tick, addr 0x5f82764, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::Tick get_Tick() ;

/// @brief Method get_Valid, addr 0x5f804ac, size 0x20, virtual false, abstract: false, final false
inline bool get_Valid() ;

/// @brief Method op_Implicit, addr 0x5f82a70, size 0x10, virtual false, abstract: false, final false
static inline bool op_Implicit_bool(::Fusion::NetworkBehaviourBuffer  buffer) ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkBehaviourBuffer() ;

// Ctor Parameters [CppParam { name: "_ptr", ty: "int32_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_length", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_tick", ty: "::Fusion::Tick", modifiers: "", def_value: None, comment: None }]
constexpr NetworkBehaviourBuffer(int32_t*  _ptr, int32_t  _length, ::Fusion::Tick  _tick) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18915};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _ptr, offset: 0x0, size: 0x8, def value: None
 int32_t*  _ptr;

/// @brief Field _length, offset: 0x8, size: 0x4, def value: None
 int32_t  _length;

/// @brief Field _tick, offset: 0xc, size: 0x4, def value: None
 ::Fusion::Tick  _tick;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkBehaviourBuffer, _ptr) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkBehaviourBuffer, _length) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkBehaviourBuffer, _tick) == 0xc, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkBehaviourBuffer) == 0x10, "Size mismatch!");

} // namespace end def Fusion
