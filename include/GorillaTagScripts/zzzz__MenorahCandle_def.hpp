#pragma once
// IWYU pragma private; include "GorillaTagScripts/MenorahCandle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/zzzz__MonoBehaviourPun_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MenorahCandle)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GorillaTagScripts {
class MenorahCandle;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::MenorahCandle*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::MenorahCandle*, "GorillaTagScripts", "MenorahCandle");
// Dependencies Photon.Pun.MonoBehaviourPun, System.DateTime
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.MenorahCandle
class CORDL_TYPE MenorahCandle : public ::Photon::Pun::MonoBehaviourPun {
public:
// Declarations
/// @brief Field activeTimeEventDay, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_activeTimeEventDay, put=__cordl_internal_set_activeTimeEventDay)) bool  activeTimeEventDay;

/// @brief Field candle, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_candle, put=__cordl_internal_set_candle)) ::UnityW<::UnityEngine::GameObject>  candle;

/// @brief Field currentDate, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentDate, put=__cordl_internal_set_currentDate)) ::System::DateTime  currentDate;

/// @brief Field day, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_day, put=__cordl_internal_set_day)) int32_t  day;

/// @brief Field flame, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_flame, put=__cordl_internal_set_flame)) ::UnityW<::UnityEngine::GameObject>  flame;

/// @brief Field litDate, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_litDate, put=__cordl_internal_set_litDate)) ::System::DateTime  litDate;

/// @brief Field month, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_month, put=__cordl_internal_set_month)) int32_t  month;

/// @brief Field year, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_year, put=__cordl_internal_set_year)) int32_t  year;

/// @brief Method Awake, addr 0x5bcf46c, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CandleShouldBeVisible, addr 0x5bcf734, size 0x64, virtual false, abstract: false, final false
inline bool CandleShouldBeVisible() ;

/// @brief Method EnableCandle, addr 0x5bcf60c, size 0x94, virtual false, abstract: false, final false
inline void EnableCandle(bool  enable) ;

/// @brief Method EnableFlame, addr 0x5bcf6a0, size 0x94, virtual false, abstract: false, final false
inline void EnableFlame(bool  enable) ;

static inline ::GorillaTagScripts::MenorahCandle* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5bcf8f0, size 0x16c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnTimeChanged, addr 0x5bcf85c, size 0x80, virtual false, abstract: false, final false
inline void OnTimeChanged() ;

/// @brief Method OnTimeEventEnd, addr 0x5bcf8e8, size 0x8, virtual false, abstract: false, final false
inline void OnTimeEventEnd() ;

/// @brief Method OnTimeEventStart, addr 0x5bcf8dc, size 0xc, virtual false, abstract: false, final false
inline void OnTimeEventStart() ;

/// @brief Method ShouldLightCandle, addr 0x5bcf7f0, size 0x44, virtual false, abstract: false, final false
inline bool ShouldLightCandle() ;

/// @brief Method ShouldSnuffCandle, addr 0x5bcf834, size 0x28, virtual false, abstract: false, final false
inline bool ShouldSnuffCandle() ;

/// @brief Method Start, addr 0x5bcf470, size 0x19c, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateMenorah, addr 0x5bcf798, size 0x58, virtual false, abstract: false, final false
inline void UpdateMenorah() ;

constexpr bool const& __cordl_internal_get_activeTimeEventDay() const;

constexpr bool& __cordl_internal_get_activeTimeEventDay() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_candle() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_candle() ;

constexpr ::System::DateTime const& __cordl_internal_get_currentDate() const;

constexpr ::System::DateTime& __cordl_internal_get_currentDate() ;

constexpr int32_t const& __cordl_internal_get_day() const;

constexpr int32_t& __cordl_internal_get_day() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_flame() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_flame() ;

constexpr ::System::DateTime const& __cordl_internal_get_litDate() const;

constexpr ::System::DateTime& __cordl_internal_get_litDate() ;

constexpr int32_t const& __cordl_internal_get_month() const;

constexpr int32_t& __cordl_internal_get_month() ;

constexpr int32_t const& __cordl_internal_get_year() const;

constexpr int32_t& __cordl_internal_get_year() ;

constexpr void __cordl_internal_set_activeTimeEventDay(bool  value) ;

constexpr void __cordl_internal_set_candle(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_currentDate(::System::DateTime  value) ;

constexpr void __cordl_internal_set_day(int32_t  value) ;

constexpr void __cordl_internal_set_flame(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_litDate(::System::DateTime  value) ;

constexpr void __cordl_internal_set_month(int32_t  value) ;

constexpr void __cordl_internal_set_year(int32_t  value) ;

/// @brief Method .ctor, addr 0x5bcfa5c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MenorahCandle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MenorahCandle", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MenorahCandle(MenorahCandle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MenorahCandle", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MenorahCandle(MenorahCandle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4001};

/// @brief Field day, offset: 0x28, size: 0x4, def value: None
 int32_t  ___day;

/// @brief Field month, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___month;

/// @brief Field year, offset: 0x30, size: 0x4, def value: None
 int32_t  ___year;

/// @brief Field flame, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___flame;

/// @brief Field candle, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___candle;

/// @brief Field litDate, offset: 0x48, size: 0x8, def value: None
 ::System::DateTime  ___litDate;

/// @brief Field activeTimeEventDay, offset: 0x50, size: 0x1, def value: None
 bool  ___activeTimeEventDay;

/// @brief Field currentDate, offset: 0x58, size: 0x8, def value: None
 ::System::DateTime  ___currentDate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::MenorahCandle, ___day) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::MenorahCandle, ___month) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::MenorahCandle, ___year) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::MenorahCandle, ___flame) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::MenorahCandle, ___candle) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::MenorahCandle, ___litDate) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::MenorahCandle, ___activeTimeEventDay) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::MenorahCandle, ___currentDate) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::MenorahCandle) == 0x60, "Size mismatch!");

} // namespace end def GorillaTagScripts
