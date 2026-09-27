#pragma once
// IWYU pragma private; include "Liv/Lck/Smoothing/SmoothingUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SmoothingUtils)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Liv::Lck::Smoothing {
class SmoothingUtils;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Smoothing::SmoothingUtils*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Smoothing::SmoothingUtils*, "Liv.Lck.Smoothing", "SmoothingUtils");
// Dependencies System.Object
namespace Liv::Lck::Smoothing {
// Is value type: false
// CS Name: Liv.Lck.Smoothing.SmoothingUtils
class CORDL_TYPE SmoothingUtils : public ::System::Object {
public:
// Declarations
/// @brief Method SmoothDampQuaternion, addr 0x9d3dd0c, size 0x94, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion SmoothDampQuaternion(::UnityEngine::Quaternion  current, ::UnityEngine::Quaternion  target, ::by_ref<::UnityEngine::Vector3>  currentVelocity, float_t  smoothTime) ;

/// @brief Method SmoothDampQuaternion, addr 0x9d3e6b0, size 0x22c, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion SmoothDampQuaternion(::UnityEngine::Quaternion  current, ::UnityEngine::Quaternion  target, ::by_ref<::UnityEngine::Vector3>  currentVelocity, float_t  smoothTime, float_t  deltaTime) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SmoothingUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SmoothingUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SmoothingUtils(SmoothingUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SmoothingUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SmoothingUtils(SmoothingUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24849};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::Smoothing::SmoothingUtils) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck::Smoothing
