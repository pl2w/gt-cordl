#pragma once
// IWYU pragma private; include "UnityEngine/CharacterController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Collider_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CharacterController)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
struct CollisionFlags;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class CharacterController;
}
// Write type traits
MARK_REF_T(::UnityEngine::CharacterController*);
DEFINE_IL2CPP_CLASS(::UnityEngine::CharacterController*, "UnityEngine", "CharacterController");
// [NativeHeader("Modules/Physics/CharacterController.h")]
// Dependencies UnityEngine.Collider
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.CharacterController
class CORDL_TYPE CharacterController : public ::UnityEngine::Collider {
public:
// Declarations
 __declspec(property(get=get_center, put=set_center)) ::UnityEngine::Vector3  center;

 __declspec(property(get=get_collisionFlags)) ::UnityEngine::CollisionFlags  collisionFlags;

 __declspec(property(get=get_height, put=set_height)) float_t  height;

 __declspec(property(get=get_isGrounded)) bool  isGrounded;

 __declspec(property(get=get_radius)) float_t  radius;

 __declspec(property(get=get_skinWidth)) float_t  skinWidth;

 __declspec(property(get=get_stepOffset)) float_t  stepOffset;

/// @brief Method Move, addr 0xb67fd2c, size 0x90, virtual false, abstract: false, final false
inline ::UnityEngine::CollisionFlags Move(::UnityEngine::Vector3  motion) ;

/// @brief Method Move_Injected, addr 0xb67fdbc, size 0x44, virtual false, abstract: false, final false
static inline ::UnityEngine::CollisionFlags Move_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  motion) ;

static inline ::UnityEngine::CharacterController* New_ctor() ;

/// @brief Method SimpleMove, addr 0xb67fc54, size 0x94, virtual false, abstract: false, final false
inline bool SimpleMove(::UnityEngine::Vector3  speed) ;

/// @brief Method SimpleMove_Injected, addr 0xb67fce8, size 0x44, virtual false, abstract: false, final false
static inline bool SimpleMove_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  speed) ;

/// @brief Method .ctor, addr 0xb6804bc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_center, addr 0xb6801a4, size 0x98, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_center() ;

/// @brief Method get_center_Injected, addr 0xb68023c, size 0x44, virtual false, abstract: false, final false
static inline void get_center_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_collisionFlags, addr 0xb67feb4, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::CollisionFlags get_collisionFlags() ;

/// @brief Method get_collisionFlags_Injected, addr 0xb67ff2c, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::CollisionFlags get_collisionFlags_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_height, addr 0xb68001c, size 0x78, virtual false, abstract: false, final false
inline float_t get_height() ;

/// @brief Method get_height_Injected, addr 0xb680094, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_height_Injected(::System::IntPtr  _unity_self) ;

/// [NativeName("IsGrounded")]
/// @brief Method get_isGrounded, addr 0xb67fe00, size 0x78, virtual false, abstract: false, final false
inline bool get_isGrounded() ;

/// @brief Method get_isGrounded_Injected, addr 0xb67fe78, size 0x3c, virtual false, abstract: false, final false
static inline bool get_isGrounded_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_radius, addr 0xb67ff68, size 0x78, virtual false, abstract: false, final false
inline float_t get_radius() ;

/// @brief Method get_radius_Injected, addr 0xb67ffe0, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_radius_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_skinWidth, addr 0xb680408, size 0x78, virtual false, abstract: false, final false
inline float_t get_skinWidth() ;

/// @brief Method get_skinWidth_Injected, addr 0xb680480, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_skinWidth_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_stepOffset, addr 0xb680354, size 0x78, virtual false, abstract: false, final false
inline float_t get_stepOffset() ;

/// @brief Method get_stepOffset_Injected, addr 0xb6803cc, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_stepOffset_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method set_center, addr 0xb680280, size 0x90, virtual false, abstract: false, final false
inline void set_center(::UnityEngine::Vector3  value) ;

/// @brief Method set_center_Injected, addr 0xb680310, size 0x44, virtual false, abstract: false, final false
static inline void set_center_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  value) ;

/// @brief Method set_height, addr 0xb6800d0, size 0x88, virtual false, abstract: false, final false
inline void set_height(float_t  value) ;

/// @brief Method set_height_Injected, addr 0xb680158, size 0x4c, virtual false, abstract: false, final false
static inline void set_height_Injected(::System::IntPtr  _unity_self, float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CharacterController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CharacterController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CharacterController(CharacterController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CharacterController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CharacterController(CharacterController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30563};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::CharacterController) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
