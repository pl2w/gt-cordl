#pragma once
// IWYU pragma private; include "GorillaNetworking/GorillaRigHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaNetworking/zzzz__CosmeticsThrottler_RigDrawState_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaRigHelper)
namespace GlobalNamespace {
class VRRig;
}
namespace System {
class IComparable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GorillaNetworking {
struct GorillaRigHelper;
}
// Write type traits
MARK_VAL_T(::GorillaNetworking::GorillaRigHelper);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::GorillaRigHelper, "GorillaNetworking", "GorillaRigHelper");
// Dependencies GorillaNetworking.CosmeticsThrottler::RigDrawState
namespace GorillaNetworking {
// Is value type: true
// CS Name: GorillaNetworking.GorillaRigHelper
struct CORDL_TYPE GorillaRigHelper {
public:
// Declarations
/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() ;

/// @brief Method CompareTo, addr 0x5c71954, size 0x80, virtual true, abstract: false, final true
inline int32_t CompareTo(::System::Object*  obj) ;

/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* i___System__IComparable() ;

// Ctor Parameters []
// @brief default ctor
constexpr GorillaRigHelper() ;

// Ctor Parameters [CppParam { name: "rig", ty: "::UnityW<::GlobalNamespace::VRRig>", modifiers: "", def_value: None, comment: None }, CppParam { name: "state", ty: "::GlobalNamespace::CosmeticsThrottler_RigDrawState", modifiers: "", def_value: None, comment: None }, CppParam { name: "sqrDistance", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "prevSqrDistance", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr GorillaRigHelper(::UnityW<::GlobalNamespace::VRRig>  rig, ::GlobalNamespace::CosmeticsThrottler_RigDrawState  state, float_t  sqrDistance, float_t  prevSqrDistance) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4313};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field rig, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  rig;

/// @brief Field state, offset: 0x8, size: 0x4, def value: None
 ::GlobalNamespace::CosmeticsThrottler_RigDrawState  state;

/// @brief Field sqrDistance, offset: 0xc, size: 0x4, def value: None
 float_t  sqrDistance;

/// @brief Field prevSqrDistance, offset: 0x10, size: 0x4, def value: None
 float_t  prevSqrDistance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::GorillaRigHelper, rig) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaRigHelper, state) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaRigHelper, sqrDistance) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GorillaRigHelper, prevSqrDistance) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::GorillaRigHelper) == 0x18, "Size mismatch!");

} // namespace end def GorillaNetworking
