#pragma once
// IWYU pragma private; include "Modio/Users/Wallet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Wallet)
namespace Modio::API::SchemaDefinitions {
struct WalletObject;
}
// Forward declare root types
namespace Modio::Users {
class Wallet;
}
// Write type traits
MARK_REF_T(::Modio::Users::Wallet*);
DEFINE_IL2CPP_CLASS(::Modio::Users::Wallet*, "Modio.Users", "Wallet");
// Dependencies System.Object
namespace Modio::Users {
// Is value type: false
// CS Name: Modio.Users.Wallet
class CORDL_TYPE Wallet : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Balance, put=set_Balance)) int64_t  Balance;

 __declspec(property(get=get_Currency, put=set_Currency)) ::StringW  Currency;

 __declspec(property(get=get_Type, put=set_Type)) ::StringW  Type;

/// @brief Field <Balance>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Balance_k__BackingField, put=__cordl_internal_set__Balance_k__BackingField)) int64_t  _Balance_k__BackingField;

/// @brief Field <Currency>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Currency_k__BackingField, put=__cordl_internal_set__Currency_k__BackingField)) ::StringW  _Currency_k__BackingField;

/// @brief Field <Type>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Type_k__BackingField, put=__cordl_internal_set__Type_k__BackingField)) ::StringW  _Type_k__BackingField;

/// @brief Method ApplyDetailsFromWalletObject, addr 0xa0251f8, size 0x40, virtual false, abstract: false, final false
inline void ApplyDetailsFromWalletObject(::Modio::API::SchemaDefinitions::WalletObject  walletObject) ;

static inline ::Modio::Users::Wallet* New_ctor() ;

/// @brief Method UpdateBalance, addr 0xa02687c, size 0x8, virtual false, abstract: false, final false
inline void UpdateBalance(int64_t  newBalance) ;

constexpr int64_t const& __cordl_internal_get__Balance_k__BackingField() const;

constexpr int64_t& __cordl_internal_get__Balance_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Currency_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Currency_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Type_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Type_k__BackingField() ;

constexpr void __cordl_internal_set__Balance_k__BackingField(int64_t  value) ;

constexpr void __cordl_internal_set__Currency_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Type_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0xa026874, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Balance, addr 0xa026864, size 0x8, virtual false, abstract: false, final false
inline int64_t get_Balance() ;

/// [CompilerGenerated]
/// @brief Method get_Currency, addr 0xa026854, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Currency() ;

/// [CompilerGenerated]
/// @brief Method get_Type, addr 0xa026844, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Type() ;

/// [CompilerGenerated]
/// @brief Method set_Balance, addr 0xa02686c, size 0x8, virtual false, abstract: false, final false
inline void set_Balance(int64_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Currency, addr 0xa02685c, size 0x8, virtual false, abstract: false, final false
inline void set_Currency(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Type, addr 0xa02684c, size 0x8, virtual false, abstract: false, final false
inline void set_Type(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Wallet() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Wallet", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Wallet(Wallet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Wallet", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Wallet(Wallet const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17551};

/// [CompilerGenerated]
/// @brief Field <Type>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____Type_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Currency>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____Currency_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Balance>k__BackingField, offset: 0x20, size: 0x8, def value: None
 int64_t  ____Balance_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Users::Wallet, ____Type_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Users::Wallet, ____Currency_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Users::Wallet, ____Balance_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Modio::Users::Wallet) == 0x28, "Size mismatch!");

} // namespace end def Modio::Users
