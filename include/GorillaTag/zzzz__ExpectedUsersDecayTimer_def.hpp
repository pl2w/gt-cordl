#pragma once
// IWYU pragma private; include "GorillaTag/ExpectedUsersDecayTimer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/zzzz__TickSystemTimerAbstract_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ExpectedUsersDecayTimer)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace GorillaTag {
class ExpectedUsersDecayTimer;
}
// Write type traits
MARK_REF_T(::GorillaTag::ExpectedUsersDecayTimer*);
DEFINE_IL2CPP_CLASS(::GorillaTag::ExpectedUsersDecayTimer*, "GorillaTag", "ExpectedUsersDecayTimer");
// Dependencies GorillaTag.TickSystemTimerAbstract
namespace GorillaTag {
// Is value type: false
// CS Name: GorillaTag.ExpectedUsersDecayTimer
class CORDL_TYPE ExpectedUsersDecayTimer : public ::GorillaTag::TickSystemTimerAbstract {
public:
// Declarations
/// @brief Field decayTime, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_decayTime, put=__cordl_internal_set_decayTime)) float_t  decayTime;

/// @brief Field expectedUsers, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_expectedUsers, put=__cordl_internal_set_expectedUsers)) ::System::Collections::Generic::Dictionary_2<::StringW,float_t>*  expectedUsers;

static inline ::GorillaTag::ExpectedUsersDecayTimer* New_ctor() ;

/// @brief Method OnTimedEvent, addr 0x5d364bc, size 0x2a4, virtual true, abstract: false, final false
inline void OnTimedEvent() ;

/// @brief Method Stop, addr 0x5d36760, size 0x58, virtual true, abstract: false, final false
inline void Stop() ;

constexpr float_t const& __cordl_internal_get_decayTime() const;

constexpr float_t& __cordl_internal_get_decayTime() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,float_t>* const& __cordl_internal_get_expectedUsers() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,float_t>*& __cordl_internal_get_expectedUsers() ;

constexpr void __cordl_internal_set_decayTime(float_t  value) ;

constexpr void __cordl_internal_set_expectedUsers(::System::Collections::Generic::Dictionary_2<::StringW,float_t>*  value) ;

/// @brief Method .ctor, addr 0x5d36418, size 0xa4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExpectedUsersDecayTimer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExpectedUsersDecayTimer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ExpectedUsersDecayTimer(ExpectedUsersDecayTimer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExpectedUsersDecayTimer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExpectedUsersDecayTimer(ExpectedUsersDecayTimer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4656};

/// @brief Field decayTime, offset: 0x1c, size: 0x4, def value: None
 float_t  ___decayTime;

/// @brief Field expectedUsers, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,float_t>*  ___expectedUsers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::ExpectedUsersDecayTimer, ___decayTime) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ExpectedUsersDecayTimer, ___expectedUsers) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::ExpectedUsersDecayTimer) == 0x28, "Size mismatch!");

} // namespace end def GorillaTag
