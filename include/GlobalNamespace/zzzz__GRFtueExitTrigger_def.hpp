#pragma once
// IWYU pragma private; include "GlobalNamespace/GRFtueExitTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaTriggerBox_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GRFtueExitTrigger)
namespace GlobalNamespace {
class GRFirstTimeUserExperience;
}
// Forward declare root types
namespace GlobalNamespace {
class GRFtueExitTrigger;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRFtueExitTrigger*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRFtueExitTrigger*, "", "GRFtueExitTrigger");
// Dependencies GorillaTriggerBox
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRFtueExitTrigger
class CORDL_TYPE GRFtueExitTrigger : public ::GlobalNamespace::GorillaTriggerBox {
public:
// Declarations
/// @brief Field delayTime, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_delayTime, put=__cordl_internal_set_delayTime)) float_t  delayTime;

/// @brief Field ftueObject, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ftueObject, put=__cordl_internal_set_ftueObject)) ::UnityW<::GlobalNamespace::GRFirstTimeUserExperience>  ftueObject;

/// @brief Field startTime, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_startTime, put=__cordl_internal_set_startTime)) float_t  startTime;

static inline ::GlobalNamespace::GRFtueExitTrigger* New_ctor() ;

/// @brief Method OnBoxTriggered, addr 0x589b6c8, size 0x84, virtual true, abstract: false, final false
inline void OnBoxTriggered() ;

/// @brief Method Update, addr 0x589b74c, size 0x54, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_delayTime() const;

constexpr float_t& __cordl_internal_get_delayTime() ;

constexpr ::UnityW<::GlobalNamespace::GRFirstTimeUserExperience> const& __cordl_internal_get_ftueObject() const;

constexpr ::UnityW<::GlobalNamespace::GRFirstTimeUserExperience>& __cordl_internal_get_ftueObject() ;

constexpr float_t const& __cordl_internal_get_startTime() const;

constexpr float_t& __cordl_internal_get_startTime() ;

constexpr void __cordl_internal_set_delayTime(float_t  value) ;

constexpr void __cordl_internal_set_ftueObject(::UnityW<::GlobalNamespace::GRFirstTimeUserExperience>  value) ;

constexpr void __cordl_internal_set_startTime(float_t  value) ;

/// @brief Method .ctor, addr 0x589b7a0, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRFtueExitTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRFtueExitTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRFtueExitTrigger(GRFtueExitTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRFtueExitTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRFtueExitTrigger(GRFtueExitTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1977};

/// @brief Field ftueObject, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRFirstTimeUserExperience>  ___ftueObject;

/// @brief Field delayTime, offset: 0x28, size: 0x4, def value: None
 float_t  ___delayTime;

/// @brief Field startTime, offset: 0x2c, size: 0x4, def value: None
 float_t  ___startTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRFtueExitTrigger, ___ftueObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRFtueExitTrigger, ___delayTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRFtueExitTrigger, ___startTime) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRFtueExitTrigger) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
