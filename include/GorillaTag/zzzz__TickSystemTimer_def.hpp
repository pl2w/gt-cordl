#pragma once
// IWYU pragma private; include "GorillaTag/TickSystemTimer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/zzzz__TickSystemTimerAbstract_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TickSystemTimer)
namespace System {
class Action;
}
// Forward declare root types
namespace GorillaTag {
class TickSystemTimer;
}
// Write type traits
MARK_REF_T(::GorillaTag::TickSystemTimer*);
DEFINE_IL2CPP_CLASS(::GorillaTag::TickSystemTimer*, "GorillaTag", "TickSystemTimer");
// Dependencies GorillaTag.TickSystemTimerAbstract
namespace GorillaTag {
// Is value type: false
// CS Name: GorillaTag.TickSystemTimer
class CORDL_TYPE TickSystemTimer : public ::GorillaTag::TickSystemTimerAbstract {
public:
// Declarations
/// @brief Field callback, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::System::Action*  callback;

static inline ::GorillaTag::TickSystemTimer* New_ctor() ;

static inline ::GorillaTag::TickSystemTimer* New_ctor(::System::Action*  cb) ;

static inline ::GorillaTag::TickSystemTimer* New_ctor(float_t  cd) ;

static inline ::GorillaTag::TickSystemTimer* New_ctor(float_t  cd, ::System::Action*  cb) ;

/// @brief Method OnTimedEvent, addr 0x5d363f4, size 0x1c, virtual true, abstract: false, final false
inline void OnTimedEvent() ;

constexpr ::System::Action* const& __cordl_internal_get_callback() const;

constexpr ::System::Action*& __cordl_internal_get_callback() ;

constexpr void __cordl_internal_set_callback(::System::Action*  value) ;

/// @brief Method .ctor, addr 0x5d36324, size 0x24, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5d363b8, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::System::Action*  cb) ;

/// @brief Method .ctor, addr 0x5d36348, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(float_t  cd) ;

/// @brief Method .ctor, addr 0x5d36374, size 0x44, virtual false, abstract: false, final false
inline void _ctor(float_t  cd, ::System::Action*  cb) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TickSystemTimer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TickSystemTimer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TickSystemTimer(TickSystemTimer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TickSystemTimer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TickSystemTimer(TickSystemTimer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4654};

/// @brief Field callback, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  ___callback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::TickSystemTimer, ___callback) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::TickSystemTimer) == 0x28, "Size mismatch!");

} // namespace end def GorillaTag
