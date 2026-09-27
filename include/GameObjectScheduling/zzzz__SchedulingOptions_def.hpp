#pragma once
// IWYU pragma private; include "GameObjectScheduling/SchedulingOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SchedulingOptions)
namespace System {
struct DateTime;
}
// Forward declare root types
namespace GameObjectScheduling {
class SchedulingOptions;
}
// Write type traits
MARK_REF_T(::GameObjectScheduling::SchedulingOptions*);
DEFINE_IL2CPP_CLASS(::GameObjectScheduling::SchedulingOptions*, "GameObjectScheduling", "SchedulingOptions");
// [CreateAssetMenu(fileName = "New Options", menuName = "Game Object Scheduling/Options", order = 0)]
// Dependencies System.DateTime, UnityEngine.ScriptableObject
namespace GameObjectScheduling {
// Is value type: false
// CS Name: GameObjectScheduling.SchedulingOptions
class CORDL_TYPE SchedulingOptions : public ::UnityEngine::ScriptableObject {
public:
// Declarations
 __declspec(property(get=get_DtDebugServerTime)) ::System::DateTime  DtDebugServerTime;

/// @brief Field debugServerTime, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_debugServerTime, put=__cordl_internal_set_debugServerTime)) ::StringW  debugServerTime;

/// @brief Field dtDebugServerTime, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_dtDebugServerTime, put=__cordl_internal_set_dtDebugServerTime)) ::System::DateTime  dtDebugServerTime;

/// @brief Field timescale, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_timescale, put=__cordl_internal_set_timescale)) float_t  timescale;

static inline ::GameObjectScheduling::SchedulingOptions* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_debugServerTime() const;

constexpr ::StringW& __cordl_internal_get_debugServerTime() ;

constexpr ::System::DateTime const& __cordl_internal_get_dtDebugServerTime() const;

constexpr ::System::DateTime& __cordl_internal_get_dtDebugServerTime() ;

constexpr float_t const& __cordl_internal_get_timescale() const;

constexpr float_t& __cordl_internal_get_timescale() ;

constexpr void __cordl_internal_set_debugServerTime(::StringW  value) ;

constexpr void __cordl_internal_set_dtDebugServerTime(::System::DateTime  value) ;

constexpr void __cordl_internal_set_timescale(float_t  value) ;

/// @brief Method .ctor, addr 0x5de0e1c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DtDebugServerTime, addr 0x5de0da4, size 0x78, virtual false, abstract: false, final false
inline ::System::DateTime get_DtDebugServerTime() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SchedulingOptions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SchedulingOptions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SchedulingOptions(SchedulingOptions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SchedulingOptions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SchedulingOptions(SchedulingOptions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5131};

/// [SerializeField]
/// @brief Field debugServerTime, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___debugServerTime;

/// [SerializeField]
/// @brief Field dtDebugServerTime, offset: 0x20, size: 0x8, def value: None
 ::System::DateTime  ___dtDebugServerTime;

/// [SerializeField]
/// [Range(-60, 3660)]
/// @brief Field timescale, offset: 0x28, size: 0x4, def value: None
 float_t  ___timescale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GameObjectScheduling::SchedulingOptions, ___debugServerTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GameObjectScheduling::SchedulingOptions, ___dtDebugServerTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GameObjectScheduling::SchedulingOptions, ___timescale) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GameObjectScheduling::SchedulingOptions) == 0x30, "Size mismatch!");

} // namespace end def GameObjectScheduling
