#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkVector3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NetworkVector3)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class NetworkVector3;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NetworkVector3*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkVector3*, "", "NetworkVector3");
// Dependencies System.Object, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: NetworkVector3
class CORDL_TYPE NetworkVector3 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CurrentSyncTarget)) ::UnityEngine::Vector3  CurrentSyncTarget;

/// @brief Field _currentSyncTarget, offset 0x18, size 0xc 
 __declspec(property(get=__cordl_internal_get__currentSyncTarget, put=__cordl_internal_set__currentSyncTarget)) ::UnityEngine::Vector3  _currentSyncTarget;

/// @brief Field distanceTraveled, offset 0x24, size 0xc 
 __declspec(property(get=__cordl_internal_get_distanceTraveled, put=__cordl_internal_set_distanceTraveled)) ::UnityEngine::Vector3  distanceTraveled;

/// @brief Field lastSetNetTime, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastSetNetTime, put=__cordl_internal_set_lastSetNetTime)) double_t  lastSetNetTime;

/// @brief Method ClearPredictedMotion, addr 0x5b0b214, size 0x58, virtual false, abstract: false, final false
inline void ClearPredictedMotion() ;

/// @brief Method GetPredictedFuture, addr 0x5b0b170, size 0xa4, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetPredictedFuture() ;

static inline ::GlobalNamespace::NetworkVector3* New_ctor() ;

/// @brief Method Reset, addr 0x5b0b26c, size 0x70, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SetNewSyncTarget, addr 0x5b0af88, size 0x1e8, virtual false, abstract: false, final false
inline void SetNewSyncTarget(::UnityEngine::Vector3  newTarget) ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__currentSyncTarget() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__currentSyncTarget() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_distanceTraveled() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_distanceTraveled() ;

constexpr double_t const& __cordl_internal_get_lastSetNetTime() const;

constexpr double_t& __cordl_internal_get_lastSetNetTime() ;

constexpr void __cordl_internal_set__currentSyncTarget(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_distanceTraveled(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastSetNetTime(double_t  value) ;

/// @brief Method .ctor, addr 0x5b0b2dc, size 0x74, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CurrentSyncTarget, addr 0x5b0af7c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_CurrentSyncTarget() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkVector3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkVector3", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkVector3(NetworkVector3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkVector3", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkVector3(NetworkVector3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3518};

/// @brief Field lastSetNetTime, offset: 0x10, size: 0x8, def value: None
 double_t  ___lastSetNetTime;

/// @brief Field _currentSyncTarget, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____currentSyncTarget;

/// @brief Field distanceTraveled, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___distanceTraveled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkVector3, ___lastSetNetTime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkVector3, ____currentSyncTarget) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkVector3, ___distanceTraveled) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetworkVector3) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
