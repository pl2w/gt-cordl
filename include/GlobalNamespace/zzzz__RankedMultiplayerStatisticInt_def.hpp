#pragma once
// IWYU pragma private; include "GlobalNamespace/RankedMultiplayerStatisticInt.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RankedMultiplayerStatistic_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RankedMultiplayerStatisticInt)
namespace GlobalNamespace {
struct RankedMultiplayerStatistic_SerializationType;
}
// Forward declare root types
namespace GlobalNamespace {
class RankedMultiplayerStatisticInt;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RankedMultiplayerStatisticInt*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RankedMultiplayerStatisticInt*, "", "RankedMultiplayerStatisticInt");
// Dependencies RankedMultiplayerStatistic
namespace GlobalNamespace {
// Is value type: false
// CS Name: RankedMultiplayerStatisticInt
class CORDL_TYPE RankedMultiplayerStatisticInt : public ::GlobalNamespace::RankedMultiplayerStatistic {
public:
// Declarations
/// @brief Field intValue, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_intValue, put=__cordl_internal_set_intValue)) int32_t  intValue;

/// @brief Field maxValue, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxValue, put=__cordl_internal_set_maxValue)) int32_t  maxValue;

/// @brief Field minValue, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_minValue, put=__cordl_internal_set_minValue)) int32_t  minValue;

/// @brief Method AddTo, addr 0x59658d0, size 0x2c, virtual false, abstract: false, final false
inline void AddTo(int32_t  amount) ;

/// @brief Method Get, addr 0x5965848, size 0x8, virtual false, abstract: false, final false
inline int32_t Get() ;

/// @brief Method Increment, addr 0x59658a4, size 0x2c, virtual false, abstract: false, final false
inline void Increment() ;

/// @brief Method Load, addr 0x5965930, size 0x48, virtual true, abstract: false, final false
inline void Load() ;

static inline ::GlobalNamespace::RankedMultiplayerStatisticInt* New_ctor(::StringW  n, int32_t  val, int32_t  min, int32_t  max, ::GlobalNamespace::RankedMultiplayerStatistic_SerializationType  s) ;

/// @brief Method Save, addr 0x59658fc, size 0x34, virtual true, abstract: false, final false
inline void Save() ;

/// @brief Method Set, addr 0x5965820, size 0x28, virtual false, abstract: false, final false
inline void Set(int32_t  val) ;

/// @brief Method ToString, addr 0x5965978, size 0xc, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method TrySetValue, addr 0x5965850, size 0x54, virtual true, abstract: false, final false
inline bool TrySetValue(::StringW  valAsString) ;

constexpr int32_t const& __cordl_internal_get_intValue() const;

constexpr int32_t& __cordl_internal_get_intValue() ;

constexpr int32_t const& __cordl_internal_get_maxValue() const;

constexpr int32_t& __cordl_internal_get_maxValue() ;

constexpr int32_t const& __cordl_internal_get_minValue() const;

constexpr int32_t& __cordl_internal_get_minValue() ;

constexpr void __cordl_internal_set_intValue(int32_t  value) ;

constexpr void __cordl_internal_set_maxValue(int32_t  value) ;

constexpr void __cordl_internal_set_minValue(int32_t  value) ;

/// @brief Method .ctor, addr 0x596573c, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::StringW  n, int32_t  val, int32_t  min, int32_t  max, ::GlobalNamespace::RankedMultiplayerStatistic_SerializationType  s) ;

/// @brief Method op_Implicit, addr 0x596577c, size 0xa4, virtual false, abstract: false, final false
static inline int32_t op_Implicit_int32_t(::GlobalNamespace::RankedMultiplayerStatisticInt*  stat) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RankedMultiplayerStatisticInt() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RankedMultiplayerStatisticInt", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RankedMultiplayerStatisticInt(RankedMultiplayerStatisticInt && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RankedMultiplayerStatisticInt", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RankedMultiplayerStatisticInt(RankedMultiplayerStatisticInt const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2370};

/// @brief Field intValue, offset: 0x24, size: 0x4, def value: None
 int32_t  ___intValue;

/// @brief Field minValue, offset: 0x28, size: 0x4, def value: None
 int32_t  ___minValue;

/// @brief Field maxValue, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___maxValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RankedMultiplayerStatisticInt, ___intValue) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedMultiplayerStatisticInt, ___minValue) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedMultiplayerStatisticInt, ___maxValue) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RankedMultiplayerStatisticInt) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
