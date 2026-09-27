#pragma once
// IWYU pragma private; include "GlobalNamespace/CallLimiterWithCooldown.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CallLimiter_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CallLimiterWithCooldown)
namespace GlobalNamespace {
class CallLimiter;
}
// Forward declare root types
namespace GlobalNamespace {
class CallLimiterWithCooldown;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CallLimiterWithCooldown*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CallLimiterWithCooldown*, "", "CallLimiterWithCooldown");
// Dependencies CallLimiter
namespace GlobalNamespace {
// Is value type: false
// CS Name: CallLimiterWithCooldown
class CORDL_TYPE CallLimiterWithCooldown : public ::GlobalNamespace::CallLimiter {
public:
// Declarations
/// @brief Field spamCoolDown, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_spamCoolDown, put=__cordl_internal_set_spamCoolDown)) float_t  spamCoolDown;

/// @brief Method CheckCallTime, addr 0x5ac43ac, size 0x30, virtual true, abstract: false, final false
inline bool CheckCallTime(float_t  time) ;

/// @brief Method GetCopy, addr 0x5ac4328, size 0x84, virtual true, abstract: false, final false
inline ::GlobalNamespace::CallLimiter* GetCopy() ;

static inline ::GlobalNamespace::CallLimiterWithCooldown* New_ctor(float_t  coolDownSpam, int32_t  historyLength, float_t  coolDown) ;

static inline ::GlobalNamespace::CallLimiterWithCooldown* New_ctor(float_t  coolDownSpam, int32_t  historyLength, float_t  coolDown, float_t  latencyMax) ;

constexpr float_t const& __cordl_internal_get_spamCoolDown() const;

constexpr float_t& __cordl_internal_get_spamCoolDown() ;

constexpr void __cordl_internal_set_spamCoolDown(float_t  value) ;

/// @brief Method .ctor, addr 0x5ac42cc, size 0x30, virtual false, abstract: false, final false
inline void _ctor(float_t  coolDownSpam, int32_t  historyLength, float_t  coolDown) ;

/// @brief Method .ctor, addr 0x5ac42fc, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(float_t  coolDownSpam, int32_t  historyLength, float_t  coolDown, float_t  latencyMax) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CallLimiterWithCooldown() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CallLimiterWithCooldown", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CallLimiterWithCooldown(CallLimiterWithCooldown && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CallLimiterWithCooldown", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CallLimiterWithCooldown(CallLimiterWithCooldown const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3360};

/// [SerializeField]
/// @brief Field spamCoolDown, offset: 0x34, size: 0x4, def value: None
 float_t  ___spamCoolDown;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CallLimiterWithCooldown, ___spamCoolDown) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CallLimiterWithCooldown) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
