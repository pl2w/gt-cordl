#pragma once
// IWYU pragma private; include "UnityEngine/Rigidbody2D.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Component_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Rigidbody2D)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
struct ForceMode2D;
}
namespace UnityEngine {
struct RigidbodyType2D;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
class Rigidbody2D;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rigidbody2D*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rigidbody2D*, "UnityEngine", "Rigidbody2D");
// [RequireComponent(typeof(UnityEngine.Transform))]
// [NativeHeader("Modules/Physics2D/Public/Rigidbody2D.h")]
// Dependencies UnityEngine.Component
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Rigidbody2D
class CORDL_TYPE Rigidbody2D : public ::UnityEngine::Component {
public:
// Declarations
 __declspec(property(get=get_angularVelocity, put=set_angularVelocity)) float_t  angularVelocity;

 __declspec(property(get=get_bodyType)) ::UnityEngine::RigidbodyType2D  bodyType;

/// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
/// [Obsolete("isKinematic has been deprecated. Please use bodyType.", false)]
/// @brief [ExcludeFromDocs]
 __declspec(property(get=get_isKinematic)) bool  isKinematic;

 __declspec(property(get=get_linearVelocity, put=set_linearVelocity)) ::UnityEngine::Vector2  linearVelocity;

 __declspec(property(get=get_mass)) float_t  mass;

 __declspec(property(get=get_position, put=set_position)) ::UnityEngine::Vector2  position;

 __declspec(property(get=get_rotation, put=set_rotation)) float_t  rotation;

/// [ExcludeFromDocs]
/// @brief Method AddForce, addr 0xb67d320, size 0x8, virtual false, abstract: false, final false
inline void AddForce(::UnityEngine::Vector2  force) ;

/// [NativeMethod("AddForce")]
/// @brief Method AddForce_Internal, addr 0xb67d328, size 0x94, virtual false, abstract: false, final false
inline void AddForce_Internal(::UnityEngine::Vector2  force, /* [DefaultValue("ForceMode2D.Force")] */ ::UnityEngine::ForceMode2D  mode) ;

/// @brief Method AddForce_Internal_Injected, addr 0xb67d3bc, size 0x54, virtual false, abstract: false, final false
static inline void AddForce_Internal_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  force, /* [DefaultValue("ForceMode2D.Force")] */ ::UnityEngine::ForceMode2D  mode) ;

/// @brief Method MovePosition, addr 0xb67ccfc, size 0x84, virtual false, abstract: false, final false
inline void MovePosition(::UnityEngine::Vector2  position) ;

/// @brief Method MovePosition_Injected, addr 0xb67cd80, size 0x44, virtual false, abstract: false, final false
static inline void MovePosition_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  position) ;

/// @brief Method MoveRotation, addr 0xb67cdc4, size 0x4, virtual false, abstract: false, final false
inline void MoveRotation(float_t  angle) ;

/// [NativeMethod("MoveRotation")]
/// @brief Method MoveRotation_Angle, addr 0xb67cdc8, size 0x88, virtual false, abstract: false, final false
inline void MoveRotation_Angle(float_t  angle) ;

/// @brief Method MoveRotation_Angle_Injected, addr 0xb67ce50, size 0x4c, virtual false, abstract: false, final false
static inline void MoveRotation_Angle_Injected(::System::IntPtr  _unity_self, float_t  angle) ;

static inline ::UnityEngine::Rigidbody2D* New_ctor() ;

/// @brief Method .ctor, addr 0xb67d428, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_angularVelocity, addr 0xb67d030, size 0x78, virtual false, abstract: false, final false
inline float_t get_angularVelocity() ;

/// @brief Method get_angularVelocity_Injected, addr 0xb67d0a8, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_angularVelocity_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_bodyType, addr 0xb67d26c, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::RigidbodyType2D get_bodyType() ;

/// @brief Method get_bodyType_Injected, addr 0xb67d2e4, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::RigidbodyType2D get_bodyType_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_isKinematic, addr 0xb67d410, size 0x18, virtual false, abstract: false, final false
inline bool get_isKinematic() ;

/// @brief Method get_linearVelocity, addr 0xb67ce9c, size 0x88, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_linearVelocity() ;

/// @brief Method get_linearVelocity_Injected, addr 0xb67cf24, size 0x44, virtual false, abstract: false, final false
static inline void get_linearVelocity_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  ret) ;

/// @brief Method get_mass, addr 0xb67d1b8, size 0x78, virtual false, abstract: false, final false
inline float_t get_mass() ;

/// @brief Method get_mass_Injected, addr 0xb67d230, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_mass_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_position, addr 0xb67c9e0, size 0x88, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_position() ;

/// @brief Method get_position_Injected, addr 0xb67ca68, size 0x44, virtual false, abstract: false, final false
static inline void get_position_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  ret) ;

/// @brief Method get_rotation, addr 0xb67cb74, size 0x78, virtual false, abstract: false, final false
inline float_t get_rotation() ;

/// @brief Method get_rotation_Injected, addr 0xb67cbec, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_rotation_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method set_angularVelocity, addr 0xb67d0e4, size 0x88, virtual false, abstract: false, final false
inline void set_angularVelocity(float_t  value) ;

/// @brief Method set_angularVelocity_Injected, addr 0xb67d16c, size 0x4c, virtual false, abstract: false, final false
static inline void set_angularVelocity_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_linearVelocity, addr 0xb67cf68, size 0x84, virtual false, abstract: false, final false
inline void set_linearVelocity(::UnityEngine::Vector2  value) ;

/// @brief Method set_linearVelocity_Injected, addr 0xb67cfec, size 0x44, virtual false, abstract: false, final false
static inline void set_linearVelocity_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  value) ;

/// @brief Method set_position, addr 0xb67caac, size 0x84, virtual false, abstract: false, final false
inline void set_position(::UnityEngine::Vector2  value) ;

/// @brief Method set_position_Injected, addr 0xb67cb30, size 0x44, virtual false, abstract: false, final false
static inline void set_position_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  value) ;

/// @brief Method set_rotation, addr 0xb67cc28, size 0x88, virtual false, abstract: false, final false
inline void set_rotation(float_t  value) ;

/// @brief Method set_rotation_Injected, addr 0xb67ccb0, size 0x4c, virtual false, abstract: false, final false
static inline void set_rotation_Injected(::System::IntPtr  _unity_self, float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Rigidbody2D() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Rigidbody2D", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Rigidbody2D(Rigidbody2D && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Rigidbody2D", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Rigidbody2D(Rigidbody2D const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32216};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rigidbody2D) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
