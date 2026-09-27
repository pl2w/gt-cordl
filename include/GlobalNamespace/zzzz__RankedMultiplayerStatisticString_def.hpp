#pragma once
// IWYU pragma private; include "GlobalNamespace/RankedMultiplayerStatisticString.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RankedMultiplayerStatistic_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(RankedMultiplayerStatisticString)
namespace GlobalNamespace {
struct RankedMultiplayerStatistic_SerializationType;
}
// Forward declare root types
namespace GlobalNamespace {
class RankedMultiplayerStatisticString;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RankedMultiplayerStatisticString*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RankedMultiplayerStatisticString*, "", "RankedMultiplayerStatisticString");
// Dependencies RankedMultiplayerStatistic
namespace GlobalNamespace {
// Is value type: false
// CS Name: RankedMultiplayerStatisticString
class CORDL_TYPE RankedMultiplayerStatisticString : public ::GlobalNamespace::RankedMultiplayerStatistic {
public:
// Declarations
/// @brief Field stringValue, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_stringValue, put=__cordl_internal_set_stringValue)) ::StringW  stringValue;

/// @brief Method Get, addr 0x5965cd4, size 0x8, virtual false, abstract: false, final false
inline ::StringW Get() ;

/// @brief Method Load, addr 0x5965d28, size 0x54, virtual true, abstract: false, final false
inline void Load() ;

static inline ::GlobalNamespace::RankedMultiplayerStatisticString* New_ctor(::StringW  n, ::StringW  val, ::GlobalNamespace::RankedMultiplayerStatistic_SerializationType  s) ;

/// @brief Method Save, addr 0x5965cf4, size 0x34, virtual true, abstract: false, final false
inline void Save() ;

/// @brief Method Set, addr 0x5965cb0, size 0x24, virtual false, abstract: false, final false
inline void Set(::StringW  val) ;

/// @brief Method ToString, addr 0x5965d7c, size 0x8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method TrySetValue, addr 0x5965cdc, size 0x18, virtual true, abstract: false, final false
inline bool TrySetValue(::StringW  valAsString) ;

constexpr ::StringW const& __cordl_internal_get_stringValue() const;

constexpr ::StringW& __cordl_internal_get_stringValue() ;

constexpr void __cordl_internal_set_stringValue(::StringW  value) ;

/// @brief Method .ctor, addr 0x5965bc8, size 0x34, virtual false, abstract: false, final false
inline void _ctor(::StringW  n, ::StringW  val, ::GlobalNamespace::RankedMultiplayerStatistic_SerializationType  s) ;

/// @brief Method op_Implicit, addr 0x5965bfc, size 0xb4, virtual false, abstract: false, final false
static inline ::StringW op_Implicit___StringW(::GlobalNamespace::RankedMultiplayerStatisticString*  stat) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RankedMultiplayerStatisticString() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RankedMultiplayerStatisticString", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RankedMultiplayerStatisticString(RankedMultiplayerStatisticString && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RankedMultiplayerStatisticString", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RankedMultiplayerStatisticString(RankedMultiplayerStatisticString const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2372};

/// @brief Field stringValue, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___stringValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RankedMultiplayerStatisticString, ___stringValue) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RankedMultiplayerStatisticString) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
