#pragma once
// IWYU pragma private; include "GlobalNamespace/RankedMultiplayerStatistic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RankedMultiplayerStatistic_SerializationType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(RankedMultiplayerStatistic)
namespace GlobalNamespace {
struct RankedMultiplayerStatistic_SerializationType;
}
// Forward declare root types
namespace GlobalNamespace {
class RankedMultiplayerStatistic;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RankedMultiplayerStatistic*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RankedMultiplayerStatistic*, "", "RankedMultiplayerStatistic");
// Dependencies RankedMultiplayerStatistic::SerializationType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RankedMultiplayerStatistic
class CORDL_TYPE RankedMultiplayerStatistic : public ::System::Object {
public:
// Declarations
using SerializationType = ::GlobalNamespace::RankedMultiplayerStatistic_SerializationType;

 __declspec(property(get=get_IsValid, put=set_IsValid)) bool  IsValid;

/// @brief Field <IsValid>k__BackingField, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsValid_k__BackingField, put=__cordl_internal_set__IsValid_k__BackingField)) bool  _IsValid_k__BackingField;

/// @brief Field name, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

/// @brief Field serializationType, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_serializationType, put=__cordl_internal_set_serializationType)) ::GlobalNamespace::RankedMultiplayerStatistic_SerializationType  serializationType;

/// @brief Method HandleUserDataGetFailure, addr 0x59656c0, size 0x40, virtual false, abstract: false, final false
inline void HandleUserDataGetFailure(::StringW  keyName) ;

/// @brief Method HandleUserDataGetSuccess, addr 0x5965654, size 0x6c, virtual true, abstract: false, final false
inline void HandleUserDataGetSuccess(::StringW  keyName, ::StringW  value) ;

/// @brief Method HandleUserDataSetFailure, addr 0x5965700, size 0x3c, virtual false, abstract: false, final false
inline void HandleUserDataSetFailure(::StringW  keyName) ;

/// @brief Method HandleUserDataSetSuccess, addr 0x5965624, size 0x30, virtual true, abstract: false, final false
inline void HandleUserDataSetSuccess(::StringW  keyName) ;

/// @brief Method Load, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Load() ;

static inline ::GlobalNamespace::RankedMultiplayerStatistic* New_ctor(::StringW  n, ::GlobalNamespace::RankedMultiplayerStatistic_SerializationType  sType) ;

/// @brief Method Save, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Save() ;

/// @brief Method ToString, addr 0x596553c, size 0x18, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method TrySetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool TrySetValue(::StringW  valAsString) ;

/// @brief Method WriteToJson, addr 0x5965554, size 0x68, virtual true, abstract: false, final false
inline ::StringW WriteToJson() ;

constexpr bool const& __cordl_internal_get__IsValid_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsValid_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr ::GlobalNamespace::RankedMultiplayerStatistic_SerializationType const& __cordl_internal_get_serializationType() const;

constexpr ::GlobalNamespace::RankedMultiplayerStatistic_SerializationType& __cordl_internal_get_serializationType() ;

constexpr void __cordl_internal_set__IsValid_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

constexpr void __cordl_internal_set_serializationType(::GlobalNamespace::RankedMultiplayerStatistic_SerializationType  value) ;

/// @brief Method .ctor, addr 0x59655cc, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::StringW  n, ::GlobalNamespace::RankedMultiplayerStatistic_SerializationType  sType) ;

/// [CompilerGenerated]
/// @brief Method get_IsValid, addr 0x59655bc, size 0x8, virtual false, abstract: false, final false
inline bool get_IsValid() ;

/// [CompilerGenerated]
/// @brief Method set_IsValid, addr 0x59655c4, size 0x8, virtual false, abstract: false, final false
inline void set_IsValid(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RankedMultiplayerStatistic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RankedMultiplayerStatistic", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RankedMultiplayerStatistic(RankedMultiplayerStatistic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RankedMultiplayerStatistic", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RankedMultiplayerStatistic(RankedMultiplayerStatistic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2369};

/// @brief Field serializationType, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::RankedMultiplayerStatistic_SerializationType  ___serializationType;

/// @brief Field name, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___name;

/// [CompilerGenerated]
/// @brief Field <IsValid>k__BackingField, offset: 0x20, size: 0x1, def value: None
 bool  ____IsValid_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RankedMultiplayerStatistic, ___serializationType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedMultiplayerStatistic, ___name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RankedMultiplayerStatistic, ____IsValid_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RankedMultiplayerStatistic) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
