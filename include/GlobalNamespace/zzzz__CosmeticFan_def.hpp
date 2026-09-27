#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticFan.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CosmeticFan)
// Forward declare root types
namespace GlobalNamespace {
class CosmeticFan;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CosmeticFan*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticFan*, "", "CosmeticFan");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: CosmeticFan
class CORDL_TYPE CosmeticFan : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field axis, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_axis, put=__cordl_internal_set_axis)) ::UnityEngine::Vector3  axis;

/// @brief Field currentAccelRate, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentAccelRate, put=__cordl_internal_set_currentAccelRate)) float_t  currentAccelRate;

/// @brief Field currentSpeed, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentSpeed, put=__cordl_internal_set_currentSpeed)) float_t  currentSpeed;

/// @brief Field maxSpeed, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxSpeed, put=__cordl_internal_set_maxSpeed)) float_t  maxSpeed;

/// @brief Field spinDownDuration, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_spinDownDuration, put=__cordl_internal_set_spinDownDuration)) float_t  spinDownDuration;

/// @brief Field spinDownRate, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_spinDownRate, put=__cordl_internal_set_spinDownRate)) float_t  spinDownRate;

/// @brief Field spinUpDuration, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_spinUpDuration, put=__cordl_internal_set_spinUpDuration)) float_t  spinUpDuration;

/// @brief Field spinUpRate, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_spinUpRate, put=__cordl_internal_set_spinUpRate)) float_t  spinUpRate;

/// @brief Field targetSpeed, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_targetSpeed, put=__cordl_internal_set_targetSpeed)) float_t  targetSpeed;

/// @brief Method InstantStop, addr 0x5648690, size 0x10, virtual false, abstract: false, final false
inline void InstantStop() ;

static inline ::GlobalNamespace::CosmeticFan* New_ctor() ;

/// @brief Method Run, addr 0x5648600, size 0x50, virtual false, abstract: false, final false
inline void Run() ;

/// @brief Method Start, addr 0x56485e8, size 0x18, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Stop, addr 0x5648650, size 0x40, virtual false, abstract: false, final false
inline void Stop() ;

/// @brief Method Update, addr 0x56486a0, size 0x180, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_axis() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_axis() ;

constexpr float_t const& __cordl_internal_get_currentAccelRate() const;

constexpr float_t& __cordl_internal_get_currentAccelRate() ;

constexpr float_t const& __cordl_internal_get_currentSpeed() const;

constexpr float_t& __cordl_internal_get_currentSpeed() ;

constexpr float_t const& __cordl_internal_get_maxSpeed() const;

constexpr float_t& __cordl_internal_get_maxSpeed() ;

constexpr float_t const& __cordl_internal_get_spinDownDuration() const;

constexpr float_t& __cordl_internal_get_spinDownDuration() ;

constexpr float_t const& __cordl_internal_get_spinDownRate() const;

constexpr float_t& __cordl_internal_get_spinDownRate() ;

constexpr float_t const& __cordl_internal_get_spinUpDuration() const;

constexpr float_t& __cordl_internal_get_spinUpDuration() ;

constexpr float_t const& __cordl_internal_get_spinUpRate() const;

constexpr float_t& __cordl_internal_get_spinUpRate() ;

constexpr float_t const& __cordl_internal_get_targetSpeed() const;

constexpr float_t& __cordl_internal_get_targetSpeed() ;

constexpr void __cordl_internal_set_axis(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_currentAccelRate(float_t  value) ;

constexpr void __cordl_internal_set_currentSpeed(float_t  value) ;

constexpr void __cordl_internal_set_maxSpeed(float_t  value) ;

constexpr void __cordl_internal_set_spinDownDuration(float_t  value) ;

constexpr void __cordl_internal_set_spinDownRate(float_t  value) ;

constexpr void __cordl_internal_set_spinUpDuration(float_t  value) ;

constexpr void __cordl_internal_set_spinUpRate(float_t  value) ;

constexpr void __cordl_internal_set_targetSpeed(float_t  value) ;

/// @brief Method .ctor, addr 0x5648820, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticFan() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticFan", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticFan(CosmeticFan && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticFan", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticFan(CosmeticFan const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{695};

/// [SerializeField]
/// @brief Field axis, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___axis;

/// [SerializeField]
/// @brief Field spinUpDuration, offset: 0x2c, size: 0x4, def value: None
 float_t  ___spinUpDuration;

/// [SerializeField]
/// @brief Field spinDownDuration, offset: 0x30, size: 0x4, def value: None
 float_t  ___spinDownDuration;

/// [SerializeField]
/// @brief Field maxSpeed, offset: 0x34, size: 0x4, def value: None
 float_t  ___maxSpeed;

/// @brief Field currentSpeed, offset: 0x38, size: 0x4, def value: None
 float_t  ___currentSpeed;

/// @brief Field targetSpeed, offset: 0x3c, size: 0x4, def value: None
 float_t  ___targetSpeed;

/// @brief Field currentAccelRate, offset: 0x40, size: 0x4, def value: None
 float_t  ___currentAccelRate;

/// @brief Field spinUpRate, offset: 0x44, size: 0x4, def value: None
 float_t  ___spinUpRate;

/// @brief Field spinDownRate, offset: 0x48, size: 0x4, def value: None
 float_t  ___spinDownRate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticFan, ___axis) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticFan, ___spinUpDuration) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticFan, ___spinDownDuration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticFan, ___maxSpeed) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticFan, ___currentSpeed) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticFan, ___targetSpeed) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticFan, ___currentAccelRate) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticFan, ___spinUpRate) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticFan, ___spinDownRate) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticFan) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
