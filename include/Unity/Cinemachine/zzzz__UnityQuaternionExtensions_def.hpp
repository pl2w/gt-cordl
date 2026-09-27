#pragma once
// IWYU pragma private; include "Unity/Cinemachine/UnityQuaternionExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(UnityQuaternionExtensions)
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
namespace Unity::Cinemachine {
class UnityQuaternionExtensions;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::UnityQuaternionExtensions*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::UnityQuaternionExtensions*, "Unity.Cinemachine", "UnityQuaternionExtensions");
// [Extension]
// Dependencies System.Object
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.UnityQuaternionExtensions
class CORDL_TYPE UnityQuaternionExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method ApplyCameraRotation, addr 0xaec1890, size 0x1d4, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion ApplyCameraRotation(::UnityEngine::Quaternion  orient, ::UnityEngine::Vector2  rot, ::UnityEngine::Vector3  worldUp) ;

/// [Extension]
/// @brief Method GetCameraRotationToTarget, addr 0xaec1544, size 0x34c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 GetCameraRotationToTarget(::UnityEngine::Quaternion  orient, ::UnityEngine::Vector3  lookAtDir, ::UnityEngine::Vector3  worldUp) ;

/// @brief Method SlerpWithReferenceUp, addr 0xaec1078, size 0x498, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion SlerpWithReferenceUp(::UnityEngine::Quaternion  qA, ::UnityEngine::Quaternion  qB, float_t  t, ::UnityEngine::Vector3  up) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityQuaternionExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityQuaternionExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityQuaternionExtensions(UnityQuaternionExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityQuaternionExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityQuaternionExtensions(UnityQuaternionExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22377};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::UnityQuaternionExtensions) == 0x10, "Size mismatch!");

} // namespace end def Unity::Cinemachine
