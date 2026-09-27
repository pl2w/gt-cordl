#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalActivateOnDateRange.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LocalActivateOnDateRange)
// Forward declare root types
namespace GlobalNamespace {
class LocalActivateOnDateRange;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LocalActivateOnDateRange*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LocalActivateOnDateRange*, "", "LocalActivateOnDateRange");
// Dependencies System.DateTime, UnityEngine.GameObject, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LocalActivateOnDateRange
class CORDL_TYPE LocalActivateOnDateRange : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field activationDay, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_activationDay, put=__cordl_internal_set_activationDay)) int32_t  activationDay;

/// @brief Field activationHour, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_activationHour, put=__cordl_internal_set_activationHour)) int32_t  activationHour;

/// @brief Field activationMinute, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_activationMinute, put=__cordl_internal_set_activationMinute)) int32_t  activationMinute;

/// @brief Field activationMonth, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_activationMonth, put=__cordl_internal_set_activationMonth)) int32_t  activationMonth;

/// @brief Field activationSecond, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_activationSecond, put=__cordl_internal_set_activationSecond)) int32_t  activationSecond;

/// @brief Field activationTime, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_activationTime, put=__cordl_internal_set_activationTime)) ::System::DateTime  activationTime;

/// @brief Field activationYear, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_activationYear, put=__cordl_internal_set_activationYear)) int32_t  activationYear;

/// @brief Field dbgTimeUntilActivation, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_dbgTimeUntilActivation, put=__cordl_internal_set_dbgTimeUntilActivation)) double_t  dbgTimeUntilActivation;

/// @brief Field dbgTimeUntilDeactivation, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_dbgTimeUntilDeactivation, put=__cordl_internal_set_dbgTimeUntilDeactivation)) double_t  dbgTimeUntilDeactivation;

/// @brief Field deactivationDay, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_deactivationDay, put=__cordl_internal_set_deactivationDay)) int32_t  deactivationDay;

/// @brief Field deactivationHour, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_deactivationHour, put=__cordl_internal_set_deactivationHour)) int32_t  deactivationHour;

/// @brief Field deactivationMinute, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_deactivationMinute, put=__cordl_internal_set_deactivationMinute)) int32_t  deactivationMinute;

/// @brief Field deactivationMonth, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_deactivationMonth, put=__cordl_internal_set_deactivationMonth)) int32_t  deactivationMonth;

/// @brief Field deactivationSecond, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_deactivationSecond, put=__cordl_internal_set_deactivationSecond)) int32_t  deactivationSecond;

/// @brief Field deactivationTime, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_deactivationTime, put=__cordl_internal_set_deactivationTime)) ::System::DateTime  deactivationTime;

/// @brief Field deactivationYear, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_deactivationYear, put=__cordl_internal_set_deactivationYear)) int32_t  deactivationYear;

/// @brief Field gameObjectsToActivate, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameObjectsToActivate, put=__cordl_internal_set_gameObjectsToActivate)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  gameObjectsToActivate;

/// @brief Field isActive, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_isActive, put=__cordl_internal_set_isActive)) bool  isActive;

/// @brief Method Awake, addr 0x567bb38, size 0x64, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method InitActiveTimes, addr 0x567bba0, size 0x68, virtual false, abstract: false, final false
inline void InitActiveTimes() ;

/// @brief Method LateUpdate, addr 0x567bc08, size 0x188, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::LocalActivateOnDateRange* New_ctor() ;

/// @brief Method OnEnable, addr 0x567bb9c, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr int32_t const& __cordl_internal_get_activationDay() const;

constexpr int32_t& __cordl_internal_get_activationDay() ;

constexpr int32_t const& __cordl_internal_get_activationHour() const;

constexpr int32_t& __cordl_internal_get_activationHour() ;

constexpr int32_t const& __cordl_internal_get_activationMinute() const;

constexpr int32_t& __cordl_internal_get_activationMinute() ;

constexpr int32_t const& __cordl_internal_get_activationMonth() const;

constexpr int32_t& __cordl_internal_get_activationMonth() ;

constexpr int32_t const& __cordl_internal_get_activationSecond() const;

constexpr int32_t& __cordl_internal_get_activationSecond() ;

constexpr ::System::DateTime const& __cordl_internal_get_activationTime() const;

constexpr ::System::DateTime& __cordl_internal_get_activationTime() ;

constexpr int32_t const& __cordl_internal_get_activationYear() const;

constexpr int32_t& __cordl_internal_get_activationYear() ;

constexpr double_t const& __cordl_internal_get_dbgTimeUntilActivation() const;

constexpr double_t& __cordl_internal_get_dbgTimeUntilActivation() ;

constexpr double_t const& __cordl_internal_get_dbgTimeUntilDeactivation() const;

constexpr double_t& __cordl_internal_get_dbgTimeUntilDeactivation() ;

constexpr int32_t const& __cordl_internal_get_deactivationDay() const;

constexpr int32_t& __cordl_internal_get_deactivationDay() ;

constexpr int32_t const& __cordl_internal_get_deactivationHour() const;

constexpr int32_t& __cordl_internal_get_deactivationHour() ;

constexpr int32_t const& __cordl_internal_get_deactivationMinute() const;

constexpr int32_t& __cordl_internal_get_deactivationMinute() ;

constexpr int32_t const& __cordl_internal_get_deactivationMonth() const;

constexpr int32_t& __cordl_internal_get_deactivationMonth() ;

constexpr int32_t const& __cordl_internal_get_deactivationSecond() const;

constexpr int32_t& __cordl_internal_get_deactivationSecond() ;

constexpr ::System::DateTime const& __cordl_internal_get_deactivationTime() const;

constexpr ::System::DateTime& __cordl_internal_get_deactivationTime() ;

constexpr int32_t const& __cordl_internal_get_deactivationYear() const;

constexpr int32_t& __cordl_internal_get_deactivationYear() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_gameObjectsToActivate() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_gameObjectsToActivate() ;

constexpr bool const& __cordl_internal_get_isActive() const;

constexpr bool& __cordl_internal_get_isActive() ;

constexpr void __cordl_internal_set_activationDay(int32_t  value) ;

constexpr void __cordl_internal_set_activationHour(int32_t  value) ;

constexpr void __cordl_internal_set_activationMinute(int32_t  value) ;

constexpr void __cordl_internal_set_activationMonth(int32_t  value) ;

constexpr void __cordl_internal_set_activationSecond(int32_t  value) ;

constexpr void __cordl_internal_set_activationTime(::System::DateTime  value) ;

constexpr void __cordl_internal_set_activationYear(int32_t  value) ;

constexpr void __cordl_internal_set_dbgTimeUntilActivation(double_t  value) ;

constexpr void __cordl_internal_set_dbgTimeUntilDeactivation(double_t  value) ;

constexpr void __cordl_internal_set_deactivationDay(int32_t  value) ;

constexpr void __cordl_internal_set_deactivationHour(int32_t  value) ;

constexpr void __cordl_internal_set_deactivationMinute(int32_t  value) ;

constexpr void __cordl_internal_set_deactivationMonth(int32_t  value) ;

constexpr void __cordl_internal_set_deactivationSecond(int32_t  value) ;

constexpr void __cordl_internal_set_deactivationTime(::System::DateTime  value) ;

constexpr void __cordl_internal_set_deactivationYear(int32_t  value) ;

constexpr void __cordl_internal_set_gameObjectsToActivate(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_isActive(bool  value) ;

/// @brief Method .ctor, addr 0x567bd90, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalActivateOnDateRange() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalActivateOnDateRange", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalActivateOnDateRange(LocalActivateOnDateRange && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalActivateOnDateRange", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalActivateOnDateRange(LocalActivateOnDateRange const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{861};

/// [Header("Activation Date and Time (UTC)")]
/// @brief Field activationYear, offset: 0x20, size: 0x4, def value: None
 int32_t  ___activationYear;

/// @brief Field activationMonth, offset: 0x24, size: 0x4, def value: None
 int32_t  ___activationMonth;

/// @brief Field activationDay, offset: 0x28, size: 0x4, def value: None
 int32_t  ___activationDay;

/// @brief Field activationHour, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___activationHour;

/// @brief Field activationMinute, offset: 0x30, size: 0x4, def value: None
 int32_t  ___activationMinute;

/// @brief Field activationSecond, offset: 0x34, size: 0x4, def value: None
 int32_t  ___activationSecond;

/// [Header("Deactivation Date and Time (UTC)")]
/// @brief Field deactivationYear, offset: 0x38, size: 0x4, def value: None
 int32_t  ___deactivationYear;

/// @brief Field deactivationMonth, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___deactivationMonth;

/// @brief Field deactivationDay, offset: 0x40, size: 0x4, def value: None
 int32_t  ___deactivationDay;

/// @brief Field deactivationHour, offset: 0x44, size: 0x4, def value: None
 int32_t  ___deactivationHour;

/// @brief Field deactivationMinute, offset: 0x48, size: 0x4, def value: None
 int32_t  ___deactivationMinute;

/// @brief Field deactivationSecond, offset: 0x4c, size: 0x4, def value: None
 int32_t  ___deactivationSecond;

/// @brief Field gameObjectsToActivate, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___gameObjectsToActivate;

/// @brief Field isActive, offset: 0x58, size: 0x1, def value: None
 bool  ___isActive;

/// @brief Field activationTime, offset: 0x60, size: 0x8, def value: None
 ::System::DateTime  ___activationTime;

/// @brief Field deactivationTime, offset: 0x68, size: 0x8, def value: None
 ::System::DateTime  ___deactivationTime;

/// [DebugReadout]
/// @brief Field dbgTimeUntilActivation, offset: 0x70, size: 0x8, def value: None
 double_t  ___dbgTimeUntilActivation;

/// [DebugReadout]
/// @brief Field dbgTimeUntilDeactivation, offset: 0x78, size: 0x8, def value: None
 double_t  ___dbgTimeUntilDeactivation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocalActivateOnDateRange, ___activationYear) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalActivateOnDateRange, ___activationMonth) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalActivateOnDateRange, ___activationDay) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalActivateOnDateRange, ___activationHour) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalActivateOnDateRange, ___activationMinute) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalActivateOnDateRange, ___activationSecond) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalActivateOnDateRange, ___deactivationYear) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalActivateOnDateRange, ___deactivationMonth) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalActivateOnDateRange, ___deactivationDay) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalActivateOnDateRange, ___deactivationHour) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalActivateOnDateRange, ___deactivationMinute) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalActivateOnDateRange, ___deactivationSecond) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalActivateOnDateRange, ___gameObjectsToActivate) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalActivateOnDateRange, ___isActive) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalActivateOnDateRange, ___activationTime) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalActivateOnDateRange, ___deactivationTime) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalActivateOnDateRange, ___dbgTimeUntilActivation) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalActivateOnDateRange, ___dbgTimeUntilDeactivation) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LocalActivateOnDateRange) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
