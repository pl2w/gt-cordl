#pragma once
// IWYU pragma private; include "GlobalNamespace/GRAbilityInterpolatedMovement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRAbilityInterpolatedMovement_InterpType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GRAbilityInterpolatedMovement)
namespace GlobalNamespace {
struct GRAbilityInterpolatedMovement_InterpType;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GRAbilityInterpolatedMovement;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRAbilityInterpolatedMovement*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRAbilityInterpolatedMovement*, "", "GRAbilityInterpolatedMovement");
// Dependencies GRAbilityInterpolatedMovement::InterpType, System.Object, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRAbilityInterpolatedMovement
class CORDL_TYPE GRAbilityInterpolatedMovement : public ::System::Object {
public:
// Declarations
using InterpType = ::GlobalNamespace::GRAbilityInterpolatedMovement_InterpType;

/// @brief Field duration, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_duration, put=__cordl_internal_set_duration)) float_t  duration;

/// @brief Field endPos, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_endPos, put=__cordl_internal_set_endPos)) ::UnityEngine::Vector3  endPos;

/// @brief Field endTime, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_endTime, put=__cordl_internal_set_endTime)) double_t  endTime;

/// @brief Field interpolationType, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_interpolationType, put=__cordl_internal_set_interpolationType)) ::GlobalNamespace::GRAbilityInterpolatedMovement_InterpType  interpolationType;

/// @brief Field maxVelocityMagnitude, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxVelocityMagnitude, put=__cordl_internal_set_maxVelocityMagnitude)) float_t  maxVelocityMagnitude;

/// @brief Field rb, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_rb, put=__cordl_internal_set_rb)) ::UnityW<::UnityEngine::Rigidbody>  rb;

/// @brief Field root, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_root, put=__cordl_internal_set_root)) ::UnityW<::UnityEngine::Transform>  root;

/// @brief Field startPos, offset 0x1c, size 0xc 
 __declspec(property(get=__cordl_internal_get_startPos, put=__cordl_internal_set_startPos)) ::UnityEngine::Vector3  startPos;

/// @brief Field velocity, offset 0x10, size 0xc 
 __declspec(property(get=__cordl_internal_get_velocity, put=__cordl_internal_set_velocity)) ::UnityEngine::Vector3  velocity;

/// @brief Field walkableArea, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_walkableArea, put=__cordl_internal_set_walkableArea)) int32_t  walkableArea;

/// @brief Method InitFromVelocityAndDuration, addr 0x586794c, size 0x54, virtual false, abstract: false, final false
inline void InitFromVelocityAndDuration(::UnityEngine::Vector3  velocity, float_t  duration) ;

/// @brief Method IsDone, addr 0x5867a50, size 0x24, virtual false, abstract: false, final false
inline bool IsDone() ;

static inline ::GlobalNamespace::GRAbilityInterpolatedMovement* New_ctor() ;

/// @brief Method Setup, addr 0x58678a4, size 0xa8, virtual false, abstract: false, final false
inline void Setup(::UnityEngine::Transform*  root) ;

/// @brief Method Start, addr 0x58679a0, size 0xac, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Stop, addr 0x5867a4c, size 0x4, virtual false, abstract: false, final false
inline void Stop() ;

/// @brief Method Update, addr 0x5867a74, size 0x234, virtual false, abstract: false, final false
inline void Update(float_t  dt) ;

constexpr float_t const& __cordl_internal_get_duration() const;

constexpr float_t& __cordl_internal_get_duration() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_endPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_endPos() ;

constexpr double_t const& __cordl_internal_get_endTime() const;

constexpr double_t& __cordl_internal_get_endTime() ;

constexpr ::GlobalNamespace::GRAbilityInterpolatedMovement_InterpType const& __cordl_internal_get_interpolationType() const;

constexpr ::GlobalNamespace::GRAbilityInterpolatedMovement_InterpType& __cordl_internal_get_interpolationType() ;

constexpr float_t const& __cordl_internal_get_maxVelocityMagnitude() const;

constexpr float_t& __cordl_internal_get_maxVelocityMagnitude() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rb() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rb() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_root() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_root() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_startPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_startPos() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_velocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_velocity() ;

constexpr int32_t const& __cordl_internal_get_walkableArea() const;

constexpr int32_t& __cordl_internal_get_walkableArea() ;

constexpr void __cordl_internal_set_duration(float_t  value) ;

constexpr void __cordl_internal_set_endPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_endTime(double_t  value) ;

constexpr void __cordl_internal_set_interpolationType(::GlobalNamespace::GRAbilityInterpolatedMovement_InterpType  value) ;

constexpr void __cordl_internal_set_maxVelocityMagnitude(float_t  value) ;

constexpr void __cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_root(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_startPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_velocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_walkableArea(int32_t  value) ;

/// @brief Method .ctor, addr 0x5867ca8, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRAbilityInterpolatedMovement() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRAbilityInterpolatedMovement", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRAbilityInterpolatedMovement(GRAbilityInterpolatedMovement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRAbilityInterpolatedMovement", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRAbilityInterpolatedMovement(GRAbilityInterpolatedMovement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1849};

/// @brief Field velocity, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___velocity;

/// @brief Field startPos, offset: 0x1c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___startPos;

/// @brief Field endPos, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___endPos;

/// @brief Field duration, offset: 0x34, size: 0x4, def value: None
 float_t  ___duration;

/// @brief Field endTime, offset: 0x38, size: 0x8, def value: None
 double_t  ___endTime;

/// @brief Field maxVelocityMagnitude, offset: 0x40, size: 0x4, def value: None
 float_t  ___maxVelocityMagnitude;

/// @brief Field root, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___root;

/// @brief Field rb, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___rb;

/// @brief Field interpolationType, offset: 0x58, size: 0x4, def value: None
 ::GlobalNamespace::GRAbilityInterpolatedMovement_InterpType  ___interpolationType;

/// @brief Field walkableArea, offset: 0x5c, size: 0x4, def value: None
 int32_t  ___walkableArea;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRAbilityInterpolatedMovement, ___velocity) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityInterpolatedMovement, ___startPos) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityInterpolatedMovement, ___endPos) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityInterpolatedMovement, ___duration) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityInterpolatedMovement, ___endTime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityInterpolatedMovement, ___maxVelocityMagnitude) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityInterpolatedMovement, ___root) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityInterpolatedMovement, ___rb) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityInterpolatedMovement, ___interpolationType) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityInterpolatedMovement, ___walkableArea) == 0x5c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRAbilityInterpolatedMovement) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
