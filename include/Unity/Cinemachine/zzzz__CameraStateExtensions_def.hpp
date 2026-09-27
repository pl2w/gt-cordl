#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CameraStateExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CameraStateExtensions)
namespace GlobalNamespace {
struct CustomBlendableItems_CameraState_Item;
}
namespace Unity::Cinemachine {
struct CameraState;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CameraStateExtensions;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CameraStateExtensions*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CameraStateExtensions*, "Unity.Cinemachine", "CameraStateExtensions");
// [Extension]
// Dependencies System.Object
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CameraStateExtensions
class CORDL_TYPE CameraStateExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method FindCustomBlendable, addr 0xaeab698, size 0x19c, virtual false, abstract: false, final false
static inline int32_t FindCustomBlendable(::Unity::Cinemachine::CameraState  s, ::UnityEngine::Object*  custom) ;

/// [Extension]
/// @brief Method GetCorrectedOrientation, addr 0xaeacc84, size 0x98, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion GetCorrectedOrientation(::Unity::Cinemachine::CameraState  s) ;

/// [Extension]
/// @brief Method GetCorrectedPosition, addr 0xaeac868, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetCorrectedPosition(::Unity::Cinemachine::CameraState  s) ;

/// [Extension]
/// @brief Method GetCustomBlendable, addr 0xaeab834, size 0xc0, virtual false, abstract: false, final false
static inline ::GlobalNamespace::CustomBlendableItems_CameraState_Item GetCustomBlendable(::Unity::Cinemachine::CameraState  s, int32_t  index) ;

/// [Extension]
/// @brief Method GetFinalOrientation, addr 0xaeacd3c, size 0x140, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion GetFinalOrientation(::Unity::Cinemachine::CameraState  s) ;

/// [Extension]
/// @brief Method GetFinalPosition, addr 0xaeacd1c, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetFinalPosition(::Unity::Cinemachine::CameraState  s) ;

/// [Extension]
/// @brief Method GetNumCustomBlendables, addr 0xaeace7c, size 0x8, virtual false, abstract: false, final false
static inline int32_t GetNumCustomBlendables(::Unity::Cinemachine::CameraState  s) ;

/// [Extension]
/// @brief Method HasLookAt, addr 0xaeac804, size 0x34, virtual false, abstract: false, final false
static inline bool HasLookAt(::Unity::Cinemachine::CameraState  s) ;

/// [Extension]
/// @brief Method IsTargetOffscreen, addr 0xaeace84, size 0x2d4, virtual false, abstract: false, final false
static inline bool IsTargetOffscreen(::Unity::Cinemachine::CameraState  state) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CameraStateExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CameraStateExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CameraStateExtensions(CameraStateExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CameraStateExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CameraStateExtensions(CameraStateExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22259};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::CameraStateExtensions) == 0x10, "Size mismatch!");

} // namespace end def Unity::Cinemachine
