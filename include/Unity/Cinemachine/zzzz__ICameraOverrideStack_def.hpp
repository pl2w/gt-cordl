#pragma once
// IWYU pragma private; include "Unity/Cinemachine/ICameraOverrideStack.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ICameraOverrideStack)
namespace Unity::Cinemachine {
class ICinemachineCamera;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Cinemachine {
class ICameraOverrideStack;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::ICameraOverrideStack*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::ICameraOverrideStack*, "Unity.Cinemachine", "ICameraOverrideStack");
// Dependencies 
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.ICameraOverrideStack
class CORDL_TYPE ICameraOverrideStack {
public:
// Declarations
 __declspec(property(get=get_DefaultWorldUp)) ::UnityEngine::Vector3  DefaultWorldUp;

/// @brief Method ReleaseCameraOverride, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ReleaseCameraOverride(int32_t  overrideId) ;

/// @brief Method SetCameraOverride, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t SetCameraOverride(int32_t  overrideId, int32_t  priority, ::Unity::Cinemachine::ICinemachineCamera*  camA, ::Unity::Cinemachine::ICinemachineCamera*  camB, float_t  weightB, float_t  deltaTime) ;

/// @brief Method get_DefaultWorldUp, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Vector3 get_DefaultWorldUp() ;

// Ctor Parameters [CppParam { name: "", ty: "ICameraOverrideStack", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ICameraOverrideStack(ICameraOverrideStack const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22251};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Cinemachine
