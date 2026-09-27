#pragma once
// IWYU pragma private; include "GlobalNamespace/RankedMultiplayerStatisticFloat.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RankedMultiplayerStatistic_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RankedMultiplayerStatisticFloat)
namespace GlobalNamespace {
struct RankedMultiplayerStatistic_SerializationType;
}
// Forward declare root types
namespace GlobalNamespace {
class RankedMultiplayerStatisticFloat;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RankedMultiplayerStatisticFloat*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RankedMultiplayerStatisticFloat*, "", "RankedMultiplayerStatisticFloat");
// Dependencies RankedMultiplayerStatistic
namespace GlobalNamespace {
// Is value type: false
// CS Name: RankedMultiplayerStatisticFloat
class CORDL_TYPE RankedMultiplayerStatisticFloat : public ::GlobalNamespace::RankedMultiplayerStatistic {
public:
// Declarations
/// @brief Field floatValue, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_floatValue, put=__cordl_internal_set_floatValue)) float_t  floatValue;

/// @brief Field maxValue, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxValue, put=__cordl_internal_set_maxValue)) float_t  maxValue;

/// @brief Field minValue, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_minValue, put=__cordl_internal_set_minValue)) float_t  minValue;

/// @brief Method AddTo, addr 0x5965b14, size 0x2c, virtual false, abstract: false, final false
inline void AddTo(float_t  amount) ;

/// @brief Method Get, addr 0x5965a88, size 0x8, virtual false, abstract: false, final false
inline float_t Get() ;

/// @brief Method Increment, addr 0x5965ae4, size 0x30, virtual false, abstract: false, final false
inline void Increment() ;

/// @brief Method Load, addr 0x5965b74, size 0x48, virtual true, abstract: false, final false
inline void Load() ;

static inline ::GlobalNamespace::RankedMultiplayerStatisticFloat* New_ctor(::StringW  n, float_t  val, float_t  min, float_t  max, ::GlobalNamespace::RankedMultiplayerStatistic_SerializationType  s) ;

/// @brief Method Save, addr 0x5965b40, size 0x34, virtual true, abstract: false, final false
inline void Save() ;

/// @brief Method Set, addr 0x5965a64, size 0x24, virtual false, abstract: false, final false
inline void Set(float_t  val) ;

/// @brief Method ToString, addr 0x5965bbc, size 0xc, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method TrySetValue, addr 0x5965a90, size 0x54, virtual true, abstract: false, final false
inline bool TrySetValue(::StringW  valAsString) ;

constexpr float_t const& __cordl_internal_get_floatValue() const;

constexpr float_t& __cordl_internal_get_floatValue() ;

constexpr float_t const& __cordl_internal_get_maxValue() const;

constexpr float_t& __cordl_internal_get_maxValue() ;

constexpr float_t const& __cordl_internal_get_minValue() const;

constexpr float_t& __cordl_internal_get_minValue() ;

constexpr void __cordl_internal_set_floatValue(float_t  value) ;

constexpr void __cordl_internal_set_maxValue(float_t  value) ;

constexpr void __cordl_internal_set_minValue(float_t  value) ;

/// @brief Method .ctor, addr 0x5965984, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::StringW  n, float_t  val, float_t  min, float_t  max, ::GlobalNamespace::RankedMultiplayerStatistic_SerializationType  s) ;

/// @brief Method op_Implicit, addr 0x59659c0, size 0xa4, virtual false, abstract: false, final false
static inline float_t op_Implicit_float_t(::GlobalNamespace::RankedMultiplayerStatisticFloat*  stat) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RankedMultiplayerStatisticFloat() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RankedMultiplayerStatisticFloat", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RankedMultiplayerStatisticFloat(RankedMultiplayerStatisticFloat && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RankedMultiplayerStatisticFloat", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RankedMultiplayerStatisticFloat(RankedMultiplayerStatisticFloat const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2371};

/// @brief Field floatValue, offset: 0x24, size: 0x4, def value: None
 float_t  ___floatValue;

/// @brief Field minValue, offset: 0x28, size: 0x4, def value: None
 float_t  ___minValue;

/// @brief Field maxValue, offset: 0x2c, size: 0x4, def value: None
 float_t  ___maxValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RankedMultiplayerStatisticFloat, ___floatValue) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedMultiplayerStatisticFloat, ___minValue) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedMultiplayerStatisticFloat, ___maxValue) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RankedMultiplayerStatisticFloat) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
