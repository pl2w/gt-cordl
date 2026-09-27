#pragma once
// IWYU pragma private; include "GorillaTag/CoolDownHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CoolDownHelper)
// Forward declare root types
namespace GorillaTag {
class CoolDownHelper;
}
// Write type traits
MARK_REF_T(::GorillaTag::CoolDownHelper*);
DEFINE_IL2CPP_CLASS(::GorillaTag::CoolDownHelper*, "GorillaTag", "CoolDownHelper");
// Dependencies System.Object
namespace GorillaTag {
// Is value type: false
// CS Name: GorillaTag.CoolDownHelper
class CORDL_TYPE CoolDownHelper : public ::System::Object {
public:
// Declarations
/// @brief Field checkTime, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_checkTime, put=__cordl_internal_set_checkTime)) float_t  checkTime;

/// @brief Field coolDown, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_coolDown, put=__cordl_internal_set_coolDown)) float_t  coolDown;

/// @brief Method CheckCooldown, addr 0x5d3511c, size 0x54, virtual false, abstract: false, final false
inline bool CheckCooldown() ;

static inline ::GorillaTag::CoolDownHelper* New_ctor() ;

static inline ::GorillaTag::CoolDownHelper* New_ctor(float_t  cd) ;

/// @brief Method OnCheckPass, addr 0x5d351a0, size 0x4, virtual true, abstract: false, final false
inline void OnCheckPass() ;

/// @brief Method Start, addr 0x5d35170, size 0x24, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Stop, addr 0x5d35194, size 0xc, virtual true, abstract: false, final false
inline void Stop() ;

constexpr float_t const& __cordl_internal_get_checkTime() const;

constexpr float_t& __cordl_internal_get_checkTime() ;

constexpr float_t const& __cordl_internal_get_coolDown() const;

constexpr float_t& __cordl_internal_get_coolDown() ;

constexpr void __cordl_internal_set_checkTime(float_t  value) ;

constexpr void __cordl_internal_set_coolDown(float_t  value) ;

/// @brief Method .ctor, addr 0x5d350cc, size 0x24, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5d350f0, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(float_t  cd) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CoolDownHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CoolDownHelper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CoolDownHelper(CoolDownHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CoolDownHelper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CoolDownHelper(CoolDownHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4651};

/// @brief Field coolDown, offset: 0x10, size: 0x4, def value: None
 float_t  ___coolDown;

/// @brief Field checkTime, offset: 0x14, size: 0x4, def value: None
 float_t  ___checkTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::CoolDownHelper, ___coolDown) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::CoolDownHelper, ___checkTime) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::CoolDownHelper) == 0x18, "Size mismatch!");

} // namespace end def GorillaTag
