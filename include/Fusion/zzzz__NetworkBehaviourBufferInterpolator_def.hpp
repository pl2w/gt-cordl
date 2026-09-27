#pragma once
// IWYU pragma private; include "Fusion/NetworkBehaviourBufferInterpolator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkBehaviourBuffer_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkBehaviourBufferInterpolator)
namespace Fusion {
struct Angle;
}
namespace Fusion {
class NetworkBehaviour;
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
struct NetworkBehaviourBufferInterpolator;
}
// Write type traits
MARK_VAL_T(::Fusion::NetworkBehaviourBufferInterpolator);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkBehaviourBufferInterpolator, "Fusion", "NetworkBehaviourBufferInterpolator");
// [IsByRefLike]
// [Obsolete("Types with embedded references are not supported in this version of your compiler.", true)]
// [IsReadOnly]
// Dependencies Fusion.NetworkBehaviourBuffer
namespace Fusion {
// Is value type: true
// CS Name: Fusion.NetworkBehaviourBufferInterpolator
struct CORDL_TYPE NetworkBehaviourBufferInterpolator {
public:
// Declarations
/// @brief Method Angle, addr 0x5f82b20, size 0xb8, virtual false, abstract: false, final false
inline float_t Angle(::GlobalNamespace::NetworkBehaviour_PropertyReader_1<::Fusion::Angle>  property) ;

/// @brief Method Angle, addr 0x5f82abc, size 0x64, virtual false, abstract: false, final false
inline float_t Angle(::StringW  property) ;

/// @brief Method Bool, addr 0x5f82d68, size 0x58, virtual false, abstract: false, final false
inline bool Bool(::GlobalNamespace::NetworkBehaviour_PropertyReader_1<bool>  property) ;

/// @brief Method Bool, addr 0x5f82dc0, size 0x58, virtual false, abstract: false, final false
inline bool Bool(::StringW  property) ;

/// @brief Method Float, addr 0x5f82c3c, size 0x7c, virtual false, abstract: false, final false
inline float_t Float(::GlobalNamespace::NetworkBehaviour_PropertyReader_1<float_t>  property) ;

/// @brief Method Float, addr 0x5f82bd8, size 0x64, virtual false, abstract: false, final false
inline float_t Float(::StringW  property) ;

/// @brief Method Int, addr 0x5f82d10, size 0x58, virtual false, abstract: false, final false
inline int32_t Int(::GlobalNamespace::NetworkBehaviour_PropertyReader_1<int32_t>  property) ;

/// @brief Method Int, addr 0x5f82cb8, size 0x58, virtual false, abstract: false, final false
inline int32_t Int(::StringW  property) ;

/// @brief Method Quaternion, addr 0x5f831a8, size 0x90, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion Quaternion(::GlobalNamespace::NetworkBehaviour_PropertyReader_1<::UnityEngine::Quaternion>  property) ;

/// @brief Method Quaternion, addr 0x5f83144, size 0x64, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion Quaternion(::StringW  property) ;

/// @brief Method Select, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T Select(::GlobalNamespace::NetworkBehaviour_PropertyReader_1<T>  property) ;

/// @brief Method Select, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T Select(::StringW  property) ;

/// @brief Method Vector2, addr 0x5f82f98, size 0xa0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 Vector2(::GlobalNamespace::NetworkBehaviour_PropertyReader_1<::UnityEngine::Vector2>  property) ;

/// @brief Method Vector2, addr 0x5f82f34, size 0x64, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 Vector2(::StringW  property) ;

/// @brief Method Vector3, addr 0x5f82e7c, size 0xb8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 Vector3(::GlobalNamespace::NetworkBehaviour_PropertyReader_1<::UnityEngine::Vector3>  property) ;

/// @brief Method Vector3, addr 0x5f82e18, size 0x64, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 Vector3(::StringW  property) ;

/// @brief Method Vector4, addr 0x5f8309c, size 0xa8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 Vector4(::GlobalNamespace::NetworkBehaviour_PropertyReader_1<::UnityEngine::Vector4>  property) ;

/// @brief Method Vector4, addr 0x5f83038, size 0x64, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 Vector4(::StringW  property) ;

/// @brief Method .ctor, addr 0x5f82a80, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::Fusion::NetworkBehaviour*  nb) ;

/// @brief Method op_Implicit, addr 0x5f83238, size 0xc, virtual false, abstract: false, final false
static inline bool op_Implicit_bool(::Fusion::NetworkBehaviourBufferInterpolator  i) ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkBehaviourBufferInterpolator() ;

// Ctor Parameters [CppParam { name: "Behaviour", ty: "::UnityW<::Fusion::NetworkBehaviour>", modifiers: "", def_value: None, comment: None }, CppParam { name: "From", ty: "::Fusion::NetworkBehaviourBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name: "To", ty: "::Fusion::NetworkBehaviourBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name: "Alpha", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Valid", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr NetworkBehaviourBufferInterpolator(::UnityW<::Fusion::NetworkBehaviour>  Behaviour, ::Fusion::NetworkBehaviourBuffer  From, ::Fusion::NetworkBehaviourBuffer  To, float_t  Alpha, bool  Valid) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18916};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field Behaviour, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::Fusion::NetworkBehaviour>  Behaviour;

/// @brief Field From, offset: 0x8, size: 0x10, def value: None
 ::Fusion::NetworkBehaviourBuffer  From;

/// @brief Field To, offset: 0x18, size: 0x10, def value: None
 ::Fusion::NetworkBehaviourBuffer  To;

/// @brief Field Alpha, offset: 0x28, size: 0x4, def value: None
 float_t  Alpha;

/// @brief Field Valid, offset: 0x2c, size: 0x1, def value: None
 bool  Valid;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkBehaviourBufferInterpolator, Behaviour) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkBehaviourBufferInterpolator, From) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkBehaviourBufferInterpolator, To) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkBehaviourBufferInterpolator, Alpha) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkBehaviourBufferInterpolator, Valid) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkBehaviourBufferInterpolator) == 0x30, "Size mismatch!");

} // namespace end def Fusion
