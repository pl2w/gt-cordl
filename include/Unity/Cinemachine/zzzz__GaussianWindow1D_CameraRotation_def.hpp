#pragma once
// IWYU pragma private; include "Unity/Cinemachine/GaussianWindow1D_CameraRotation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__GaussianWindow1d_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GaussianWindow1D_CameraRotation)
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Unity::Cinemachine {
class GaussianWindow1D_CameraRotation;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::GaussianWindow1D_CameraRotation*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::GaussianWindow1D_CameraRotation*, "Unity.Cinemachine", "GaussianWindow1D_CameraRotation");
// Dependencies Unity.Cinemachine.GaussianWindow1d`1<T>, UnityEngine.Vector2
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.GaussianWindow1D_CameraRotation
class CORDL_TYPE GaussianWindow1D_CameraRotation : public ::Unity::Cinemachine::GaussianWindow1d_1<::UnityEngine::Vector2> {
public:
// Declarations
/// @brief Method Compute, addr 0xaeb795c, size 0x1a4, virtual true, abstract: false, final false
inline ::UnityEngine::Vector2 Compute(int32_t  windowPos) ;

static inline ::Unity::Cinemachine::GaussianWindow1D_CameraRotation* New_ctor(float_t  sigma, int32_t  maxKernelRadius) ;

/// @brief Method .ctor, addr 0xaeb78f4, size 0x68, virtual false, abstract: false, final false
inline void _ctor(float_t  sigma, int32_t  maxKernelRadius) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GaussianWindow1D_CameraRotation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GaussianWindow1D_CameraRotation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GaussianWindow1D_CameraRotation(GaussianWindow1D_CameraRotation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GaussianWindow1D_CameraRotation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GaussianWindow1D_CameraRotation(GaussianWindow1D_CameraRotation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22319};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::GaussianWindow1D_CameraRotation) == 0x28, "Size mismatch!");

} // namespace end def Unity::Cinemachine
