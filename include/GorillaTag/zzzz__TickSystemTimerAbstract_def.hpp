#pragma once
// IWYU pragma private; include "GorillaTag/TickSystemTimerAbstract.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/zzzz__CoolDownHelper_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TickSystemTimerAbstract)
namespace GlobalNamespace {
class ITickSystemPre;
}
// Forward declare root types
namespace GorillaTag {
class TickSystemTimerAbstract;
}
// Write type traits
MARK_REF_T(::GorillaTag::TickSystemTimerAbstract*);
DEFINE_IL2CPP_CLASS(::GorillaTag::TickSystemTimerAbstract*, "GorillaTag", "TickSystemTimerAbstract");
// Dependencies GorillaTag.CoolDownHelper
namespace GorillaTag {
// Is value type: false
// CS Name: GorillaTag.TickSystemTimerAbstract
class CORDL_TYPE TickSystemTimerAbstract : public ::GorillaTag::CoolDownHelper {
public:
// Declarations
 __declspec(property(get=ITickSystemPre_get_PreTickRunning, put=ITickSystemPre_set_PreTickRunning)) bool  ITickSystemPre_PreTickRunning;

 __declspec(property(get=get_Running)) bool  Running;

/// @brief Field registered, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_registered, put=__cordl_internal_set_registered)) bool  registered;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemPre"
constexpr operator  ::GlobalNamespace::ITickSystemPre*() noexcept;

/// @brief Method ITickSystemPre.PreTick, addr 0x5d362d8, size 0x4c, virtual true, abstract: false, final true
inline void ITickSystemPre_PreTick() ;

/// @brief Method ITickSystemPre.get_PreTickRunning, addr 0x5d36194, size 0x8, virtual true, abstract: false, final true
inline bool ITickSystemPre_get_PreTickRunning() ;

/// @brief Method ITickSystemPre.set_PreTickRunning, addr 0x5d3619c, size 0x8, virtual true, abstract: false, final true
inline void ITickSystemPre_set_PreTickRunning(bool  value) ;

static inline ::GorillaTag::TickSystemTimerAbstract* New_ctor() ;

static inline ::GorillaTag::TickSystemTimerAbstract* New_ctor(float_t  cd) ;

/// @brief Method OnCheckPass, addr 0x5d362cc, size 0xc, virtual true, abstract: false, final false
inline void OnCheckPass() ;

/// @brief Method OnTimedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnTimedEvent() ;

/// @brief Method Start, addr 0x5d361d8, size 0x80, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Stop, addr 0x5d36258, size 0x74, virtual true, abstract: false, final false
inline void Stop() ;

constexpr bool const& __cordl_internal_get_registered() const;

constexpr bool& __cordl_internal_get_registered() ;

constexpr void __cordl_internal_set_registered(bool  value) ;

/// @brief Method .ctor, addr 0x5d34d6c, size 0x24, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5d361ac, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(float_t  cd) ;

/// @brief Method get_Running, addr 0x5d361a4, size 0x8, virtual false, abstract: false, final false
inline bool get_Running() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemPre"
constexpr ::GlobalNamespace::ITickSystemPre* i___GlobalNamespace__ITickSystemPre() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TickSystemTimerAbstract() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TickSystemTimerAbstract", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TickSystemTimerAbstract(TickSystemTimerAbstract && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TickSystemTimerAbstract", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TickSystemTimerAbstract(TickSystemTimerAbstract const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4653};

/// @brief Field registered, offset: 0x18, size: 0x1, def value: None
 bool  ___registered;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::TickSystemTimerAbstract, ___registered) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::TickSystemTimerAbstract) == 0x20, "Size mismatch!");

} // namespace end def GorillaTag
