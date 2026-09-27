#pragma once
// IWYU pragma private; include "GlobalNamespace/RealWorldDateTimeWindow.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(RealWorldDateTimeWindow)
namespace System {
struct DateTime;
}
namespace UniLabs::Time {
class UDateTime;
}
// Forward declare root types
namespace GlobalNamespace {
class RealWorldDateTimeWindow;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RealWorldDateTimeWindow*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RealWorldDateTimeWindow*, "", "RealWorldDateTimeWindow");
// Dependencies UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: RealWorldDateTimeWindow
class CORDL_TYPE RealWorldDateTimeWindow : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field endTime, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_endTime, put=__cordl_internal_set_endTime)) ::UniLabs::Time::UDateTime*  endTime;

/// @brief Field startTime, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_startTime, put=__cordl_internal_set_startTime)) ::UniLabs::Time::UDateTime*  startTime;

/// @brief Method MatchesDate, addr 0x56fce9c, size 0xc8, virtual false, abstract: false, final false
inline bool MatchesDate(::System::DateTime  utcDate) ;

static inline ::GlobalNamespace::RealWorldDateTimeWindow* New_ctor() ;

constexpr ::UniLabs::Time::UDateTime* const& __cordl_internal_get_endTime() const;

constexpr ::UniLabs::Time::UDateTime*& __cordl_internal_get_endTime() ;

constexpr ::UniLabs::Time::UDateTime* const& __cordl_internal_get_startTime() const;

constexpr ::UniLabs::Time::UDateTime*& __cordl_internal_get_startTime() ;

constexpr void __cordl_internal_set_endTime(::UniLabs::Time::UDateTime*  value) ;

constexpr void __cordl_internal_set_startTime(::UniLabs::Time::UDateTime*  value) ;

/// @brief Method .ctor, addr 0x56fcf64, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RealWorldDateTimeWindow() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RealWorldDateTimeWindow", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RealWorldDateTimeWindow(RealWorldDateTimeWindow && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RealWorldDateTimeWindow", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RealWorldDateTimeWindow(RealWorldDateTimeWindow const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{144};

/// [SerializeField]
/// @brief Field startTime, offset: 0x18, size: 0x8, def value: None
 ::UniLabs::Time::UDateTime*  ___startTime;

/// [SerializeField]
/// @brief Field endTime, offset: 0x20, size: 0x8, def value: None
 ::UniLabs::Time::UDateTime*  ___endTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RealWorldDateTimeWindow, ___startTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RealWorldDateTimeWindow, ___endTime) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RealWorldDateTimeWindow) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
