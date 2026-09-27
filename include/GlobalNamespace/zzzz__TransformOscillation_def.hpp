#pragma once
// IWYU pragma private; include "GlobalNamespace/TransformOscillation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TransformOscillation)
namespace UnityEngine {
class Rigidbody;
}
// Forward declare root types
namespace GlobalNamespace {
class TransformOscillation;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TransformOscillation*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TransformOscillation*, "", "TransformOscillation");
// Dependencies System.DateTime, UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: TransformOscillation
class CORDL_TYPE TransformOscillation : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field PosAmp, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_PosAmp, put=__cordl_internal_set_PosAmp)) ::UnityEngine::Vector3  PosAmp;

/// @brief Field PosFreq, offset 0x2c, size 0xc 
 __declspec(property(get=__cordl_internal_get_PosFreq, put=__cordl_internal_set_PosFreq)) ::UnityEngine::Vector3  PosFreq;

/// @brief Field RotAmp, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get_RotAmp, put=__cordl_internal_set_RotAmp)) ::UnityEngine::Vector3  RotAmp;

/// @brief Field RotFreq, offset 0x44, size 0xc 
 __declspec(property(get=__cordl_internal_get_RotFreq, put=__cordl_internal_set_RotFreq)) ::UnityEngine::Vector3  RotFreq;

/// @brief Field dt, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_dt, put=__cordl_internal_set_dt)) ::System::DateTime  dt;

/// @brief Field isRunning, offset 0xac, size 0x1 
 __declspec(property(get=__cordl_internal_get_isRunning, put=__cordl_internal_set_isRunning)) bool  isRunning;

/// @brief Field lastPosOffs, offset 0x6c, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastPosOffs, put=__cordl_internal_set_lastPosOffs)) ::UnityEngine::Vector3  lastPosOffs;

/// @brief Field lastRotOffs, offset 0x78, size 0x10 
 __declspec(property(get=__cordl_internal_get_lastRotOffs, put=__cordl_internal_set_lastRotOffs)) ::UnityEngine::Quaternion  lastRotOffs;

/// @brief Field offsPos, offset 0x88, size 0xc 
 __declspec(property(get=__cordl_internal_get_offsPos, put=__cordl_internal_set_offsPos)) ::UnityEngine::Vector3  offsPos;

/// @brief Field offsRot, offset 0x94, size 0xc 
 __declspec(property(get=__cordl_internal_get_offsRot, put=__cordl_internal_set_offsRot)) ::UnityEngine::Vector3  offsRot;

/// @brief Field startOnEnable, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_startOnEnable, put=__cordl_internal_set_startOnEnable)) bool  startOnEnable;

/// @brief Field startTime, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_startTime, put=__cordl_internal_set_startTime)) float_t  startTime;

/// @brief Field targetRigidbody, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetRigidbody, put=__cordl_internal_set_targetRigidbody)) ::UnityW<::UnityEngine::Rigidbody>  targetRigidbody;

/// @brief Field timer, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_timer, put=__cordl_internal_set_timer)) float_t  timer;

/// @brief Field useRigidbodyMotion, offset 0x51, size 0x1 
 __declspec(property(get=__cordl_internal_get_useRigidbodyMotion, put=__cordl_internal_set_useRigidbodyMotion)) bool  useRigidbodyMotion;

/// @brief Field useServerTime, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_useServerTime, put=__cordl_internal_set_useServerTime)) bool  useServerTime;

/// @brief Field useTimeLimit, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_useTimeLimit, put=__cordl_internal_set_useTimeLimit)) bool  useTimeLimit;

/// @brief Method Awake, addr 0x5b3972c, size 0xe8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ComputeOffsets, addr 0x5b39a58, size 0xd4, virtual false, abstract: false, final false
inline void ComputeOffsets(float_t  t) ;

/// @brief Method FixedUpdate, addr 0x5b39dd8, size 0x614, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method GetTimeSeconds, addr 0x5b398e4, size 0x174, virtual false, abstract: false, final false
inline float_t GetTimeSeconds() ;

/// @brief Method LateUpdate, addr 0x5b39b2c, size 0x2ac, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::TransformOscillation* New_ctor() ;

/// @brief Method OnEnable, addr 0x5b39814, size 0xac, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method StartOscillation, addr 0x5b398c0, size 0x24, virtual false, abstract: false, final false
inline void StartOscillation() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_PosAmp() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_PosAmp() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_PosFreq() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_PosFreq() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_RotAmp() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_RotAmp() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_RotFreq() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_RotFreq() ;

constexpr ::System::DateTime const& __cordl_internal_get_dt() const;

constexpr ::System::DateTime& __cordl_internal_get_dt() ;

constexpr bool const& __cordl_internal_get_isRunning() const;

constexpr bool& __cordl_internal_get_isRunning() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastPosOffs() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastPosOffs() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_lastRotOffs() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_lastRotOffs() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_offsPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_offsPos() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_offsRot() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_offsRot() ;

constexpr bool const& __cordl_internal_get_startOnEnable() const;

constexpr bool& __cordl_internal_get_startOnEnable() ;

constexpr float_t const& __cordl_internal_get_startTime() const;

constexpr float_t& __cordl_internal_get_startTime() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_targetRigidbody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_targetRigidbody() ;

constexpr float_t const& __cordl_internal_get_timer() const;

constexpr float_t& __cordl_internal_get_timer() ;

constexpr bool const& __cordl_internal_get_useRigidbodyMotion() const;

constexpr bool& __cordl_internal_get_useRigidbodyMotion() ;

constexpr bool const& __cordl_internal_get_useServerTime() const;

constexpr bool& __cordl_internal_get_useServerTime() ;

constexpr bool const& __cordl_internal_get_useTimeLimit() const;

constexpr bool& __cordl_internal_get_useTimeLimit() ;

constexpr void __cordl_internal_set_PosAmp(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_PosFreq(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_RotAmp(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_RotFreq(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_dt(::System::DateTime  value) ;

constexpr void __cordl_internal_set_isRunning(bool  value) ;

constexpr void __cordl_internal_set_lastPosOffs(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastRotOffs(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_offsPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_offsRot(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_startOnEnable(bool  value) ;

constexpr void __cordl_internal_set_startTime(float_t  value) ;

constexpr void __cordl_internal_set_targetRigidbody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_timer(float_t  value) ;

constexpr void __cordl_internal_set_useRigidbodyMotion(bool  value) ;

constexpr void __cordl_internal_set_useServerTime(bool  value) ;

constexpr void __cordl_internal_set_useTimeLimit(bool  value) ;

/// @brief Method .ctor, addr 0x5b3a3ec, size 0xa4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformOscillation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformOscillation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformOscillation(TransformOscillation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformOscillation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformOscillation(TransformOscillation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3692};

/// [SerializeField]
/// @brief Field PosAmp, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___PosAmp;

/// [SerializeField]
/// @brief Field PosFreq, offset: 0x2c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___PosFreq;

/// [SerializeField]
/// @brief Field RotAmp, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___RotAmp;

/// [SerializeField]
/// @brief Field RotFreq, offset: 0x44, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___RotFreq;

/// [SerializeField]
/// @brief Field useServerTime, offset: 0x50, size: 0x1, def value: None
 bool  ___useServerTime;

/// [Header("Rigidbody Motion (optional)")]
/// [Tooltip("If true and a Rigidbody is present, applies motion using Rigidbody.MovePosition/MoveRotation in FixedUpdate.")]
/// [SerializeField]
/// @brief Field useRigidbodyMotion, offset: 0x51, size: 0x1, def value: None
 bool  ___useRigidbodyMotion;

/// [SerializeField]
/// @brief Field targetRigidbody, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___targetRigidbody;

/// [Header("Activation Timer (optional)")]
/// [Tooltip("If true, oscillation only runs for \'activeDurationSeconds\' after OnEnable; otherwise it runs indefinitely.")]
/// [SerializeField]
/// @brief Field useTimeLimit, offset: 0x60, size: 0x1, def value: None
 bool  ___useTimeLimit;

/// [SerializeField]
/// @brief Field timer, offset: 0x64, size: 0x4, def value: None
 float_t  ___timer;

/// [Header("Start Behavior (optional)")]
/// [Tooltip("If true, oscillation starts automatically on OnEnable(). If false, call StartOscillation() manually.")]
/// [SerializeField]
/// @brief Field startOnEnable, offset: 0x68, size: 0x1, def value: None
 bool  ___startOnEnable;

/// @brief Field lastPosOffs, offset: 0x6c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastPosOffs;

/// @brief Field lastRotOffs, offset: 0x78, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___lastRotOffs;

/// @brief Field offsPos, offset: 0x88, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___offsPos;

/// @brief Field offsRot, offset: 0x94, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___offsRot;

/// @brief Field dt, offset: 0xa0, size: 0x8, def value: None
 ::System::DateTime  ___dt;

/// @brief Field startTime, offset: 0xa8, size: 0x4, def value: None
 float_t  ___startTime;

/// @brief Field isRunning, offset: 0xac, size: 0x1, def value: None
 bool  ___isRunning;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TransformOscillation, ___PosAmp) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformOscillation, ___PosFreq) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformOscillation, ___RotAmp) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformOscillation, ___RotFreq) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformOscillation, ___useServerTime) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformOscillation, ___useRigidbodyMotion) == 0x51, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformOscillation, ___targetRigidbody) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformOscillation, ___useTimeLimit) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformOscillation, ___timer) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformOscillation, ___startOnEnable) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformOscillation, ___lastPosOffs) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformOscillation, ___lastRotOffs) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformOscillation, ___offsPos) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformOscillation, ___offsRot) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformOscillation, ___dt) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformOscillation, ___startTime) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformOscillation, ___isRunning) == 0xac, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TransformOscillation) == 0xb0, "Size mismatch!");

} // namespace end def GlobalNamespace
