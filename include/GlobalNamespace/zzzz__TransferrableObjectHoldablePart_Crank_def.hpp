#pragma once
// IWYU pragma private; include "GlobalNamespace/TransferrableObjectHoldablePart_Crank.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TransferrableObjectHoldablePart_Crank_CrankThreshold_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObjectHoldablePart_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TransferrableObjectHoldablePart_Crank)
namespace GlobalNamespace {
struct TransferrableObjectHoldablePart_Crank_CrankThreshold;
}
namespace GlobalNamespace {
class VRRig;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class TransferrableObjectHoldablePart_Crank;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TransferrableObjectHoldablePart_Crank*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TransferrableObjectHoldablePart_Crank*, "", "TransferrableObjectHoldablePart_Crank");
// Dependencies TransferrableObjectHoldablePart, TransferrableObjectHoldablePart_Crank::CrankThreshold, UnityEngine.Quaternion
namespace GlobalNamespace {
// Is value type: false
// CS Name: TransferrableObjectHoldablePart_Crank
class CORDL_TYPE TransferrableObjectHoldablePart_Crank : public ::GlobalNamespace::TransferrableObjectHoldablePart {
public:
// Declarations
using CrankThreshold = ::GlobalNamespace::TransferrableObjectHoldablePart_Crank_CrankThreshold;

/// @brief Field baseLocalAngle, offset 0x74, size 0x10 
 __declspec(property(get=__cordl_internal_get_baseLocalAngle, put=__cordl_internal_set_baseLocalAngle)) ::UnityEngine::Quaternion  baseLocalAngle;

/// @brief Field baseLocalAngleInverse, offset 0x84, size 0x10 
 __declspec(property(get=__cordl_internal_get_baseLocalAngleInverse, put=__cordl_internal_set_baseLocalAngleInverse)) ::UnityEngine::Quaternion  baseLocalAngleInverse;

/// @brief Field crankAngleOffset, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_crankAngleOffset, put=__cordl_internal_set_crankAngleOffset)) float_t  crankAngleOffset;

/// @brief Field crankHandleMaxZ, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_crankHandleMaxZ, put=__cordl_internal_set_crankHandleMaxZ)) float_t  crankHandleMaxZ;

/// @brief Field crankHandleMinZ, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_crankHandleMinZ, put=__cordl_internal_set_crankHandleMinZ)) float_t  crankHandleMinZ;

/// @brief Field crankHandleX, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_crankHandleX, put=__cordl_internal_set_crankHandleX)) float_t  crankHandleX;

/// @brief Field crankHandleY, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_crankHandleY, put=__cordl_internal_set_crankHandleY)) float_t  crankHandleY;

/// @brief Field crankRadius, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_crankRadius, put=__cordl_internal_set_crankRadius)) float_t  crankRadius;

/// @brief Field lastAngle, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastAngle, put=__cordl_internal_set_lastAngle)) float_t  lastAngle;

/// @brief Field maxHandSnapDistance, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxHandSnapDistance, put=__cordl_internal_set_maxHandSnapDistance)) float_t  maxHandSnapDistance;

/// @brief Field onCrankedCallback, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_onCrankedCallback, put=__cordl_internal_set_onCrankedCallback)) ::System::Action_1<float_t>*  onCrankedCallback;

/// @brief Field rotatingPart, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_rotatingPart, put=__cordl_internal_set_rotatingPart)) ::UnityW<::UnityEngine::Transform>  rotatingPart;

/// @brief Field thresholds, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_thresholds, put=__cordl_internal_set_thresholds)) ::ArrayW<::GlobalNamespace::TransferrableObjectHoldablePart_Crank_CrankThreshold>  thresholds;

/// @brief Method Awake, addr 0x573d7c0, size 0x1c0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::TransferrableObjectHoldablePart_Crank* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0x573e108, size 0x104, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method SetOnCrankedCallback, addr 0x573d7b8, size 0x8, virtual false, abstract: false, final false
inline void SetOnCrankedCallback(::System::Action_1<float_t>*  onCrankedCallback) ;

/// @brief Method UpdateHeld, addr 0x573d980, size 0x69c, virtual true, abstract: false, final false
inline void UpdateHeld(::GlobalNamespace::VRRig*  rig, bool  isHeldLeftHand) ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_baseLocalAngle() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_baseLocalAngle() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_baseLocalAngleInverse() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_baseLocalAngleInverse() ;

constexpr float_t const& __cordl_internal_get_crankAngleOffset() const;

constexpr float_t& __cordl_internal_get_crankAngleOffset() ;

constexpr float_t const& __cordl_internal_get_crankHandleMaxZ() const;

constexpr float_t& __cordl_internal_get_crankHandleMaxZ() ;

constexpr float_t const& __cordl_internal_get_crankHandleMinZ() const;

constexpr float_t& __cordl_internal_get_crankHandleMinZ() ;

constexpr float_t const& __cordl_internal_get_crankHandleX() const;

constexpr float_t& __cordl_internal_get_crankHandleX() ;

constexpr float_t const& __cordl_internal_get_crankHandleY() const;

constexpr float_t& __cordl_internal_get_crankHandleY() ;

constexpr float_t const& __cordl_internal_get_crankRadius() const;

constexpr float_t& __cordl_internal_get_crankRadius() ;

constexpr float_t const& __cordl_internal_get_lastAngle() const;

constexpr float_t& __cordl_internal_get_lastAngle() ;

constexpr float_t const& __cordl_internal_get_maxHandSnapDistance() const;

constexpr float_t& __cordl_internal_get_maxHandSnapDistance() ;

constexpr ::System::Action_1<float_t>* const& __cordl_internal_get_onCrankedCallback() const;

constexpr ::System::Action_1<float_t>*& __cordl_internal_get_onCrankedCallback() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rotatingPart() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rotatingPart() ;

constexpr ::ArrayW<::GlobalNamespace::TransferrableObjectHoldablePart_Crank_CrankThreshold> const& __cordl_internal_get_thresholds() const;

constexpr ::ArrayW<::GlobalNamespace::TransferrableObjectHoldablePart_Crank_CrankThreshold>& __cordl_internal_get_thresholds() ;

constexpr void __cordl_internal_set_baseLocalAngle(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_baseLocalAngleInverse(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_crankAngleOffset(float_t  value) ;

constexpr void __cordl_internal_set_crankHandleMaxZ(float_t  value) ;

constexpr void __cordl_internal_set_crankHandleMinZ(float_t  value) ;

constexpr void __cordl_internal_set_crankHandleX(float_t  value) ;

constexpr void __cordl_internal_set_crankHandleY(float_t  value) ;

constexpr void __cordl_internal_set_crankRadius(float_t  value) ;

constexpr void __cordl_internal_set_lastAngle(float_t  value) ;

constexpr void __cordl_internal_set_maxHandSnapDistance(float_t  value) ;

constexpr void __cordl_internal_set_onCrankedCallback(::System::Action_1<float_t>*  value) ;

constexpr void __cordl_internal_set_rotatingPart(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_thresholds(::ArrayW<::GlobalNamespace::TransferrableObjectHoldablePart_Crank_CrankThreshold>  value) ;

/// @brief Method .ctor, addr 0x573e20c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransferrableObjectHoldablePart_Crank() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransferrableObjectHoldablePart_Crank", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransferrableObjectHoldablePart_Crank(TransferrableObjectHoldablePart_Crank && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransferrableObjectHoldablePart_Crank", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransferrableObjectHoldablePart_Crank(TransferrableObjectHoldablePart_Crank const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1236};

/// [SerializeField]
/// @brief Field crankHandleX, offset: 0x4c, size: 0x4, def value: None
 float_t  ___crankHandleX;

/// [SerializeField]
/// @brief Field crankHandleY, offset: 0x50, size: 0x4, def value: None
 float_t  ___crankHandleY;

/// [SerializeField]
/// @brief Field crankHandleMinZ, offset: 0x54, size: 0x4, def value: None
 float_t  ___crankHandleMinZ;

/// [SerializeField]
/// @brief Field crankHandleMaxZ, offset: 0x58, size: 0x4, def value: None
 float_t  ___crankHandleMaxZ;

/// [SerializeField]
/// @brief Field maxHandSnapDistance, offset: 0x5c, size: 0x4, def value: None
 float_t  ___maxHandSnapDistance;

/// @brief Field crankAngleOffset, offset: 0x60, size: 0x4, def value: None
 float_t  ___crankAngleOffset;

/// @brief Field crankRadius, offset: 0x64, size: 0x4, def value: None
 float_t  ___crankRadius;

/// [SerializeField]
/// @brief Field rotatingPart, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___rotatingPart;

/// @brief Field lastAngle, offset: 0x70, size: 0x4, def value: None
 float_t  ___lastAngle;

/// @brief Field baseLocalAngle, offset: 0x74, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___baseLocalAngle;

/// @brief Field baseLocalAngleInverse, offset: 0x84, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___baseLocalAngleInverse;

/// @brief Field onCrankedCallback, offset: 0x98, size: 0x8, def value: None
 ::System::Action_1<float_t>*  ___onCrankedCallback;

/// [SerializeField]
/// @brief Field thresholds, offset: 0xa0, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::TransferrableObjectHoldablePart_Crank_CrankThreshold>  ___thresholds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TransferrableObjectHoldablePart_Crank, ___crankHandleX) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObjectHoldablePart_Crank, ___crankHandleY) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObjectHoldablePart_Crank, ___crankHandleMinZ) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObjectHoldablePart_Crank, ___crankHandleMaxZ) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObjectHoldablePart_Crank, ___maxHandSnapDistance) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObjectHoldablePart_Crank, ___crankAngleOffset) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObjectHoldablePart_Crank, ___crankRadius) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObjectHoldablePart_Crank, ___rotatingPart) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObjectHoldablePart_Crank, ___lastAngle) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObjectHoldablePart_Crank, ___baseLocalAngle) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObjectHoldablePart_Crank, ___baseLocalAngleInverse) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObjectHoldablePart_Crank, ___onCrankedCallback) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObjectHoldablePart_Crank, ___thresholds) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TransferrableObjectHoldablePart_Crank) == 0xa8, "Size mismatch!");

} // namespace end def GlobalNamespace
