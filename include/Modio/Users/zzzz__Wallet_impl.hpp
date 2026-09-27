#pragma once
// IWYU pragma private; include "Modio/Users/Wallet.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Users/zzzz__Wallet_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__WalletObject_def.hpp"
//  Writing Method size for method: ::Modio::Users::Wallet.get_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Users::Wallet::*)()>(&::Modio::Users::Wallet::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa026844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::Wallet*>(),
                        {"get_Type", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::Wallet.set_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Users::Wallet::*)(::StringW)>(&::Modio::Users::Wallet::set_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa02684c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::Wallet*>(),
                        {"set_Type", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::Wallet.get_Currency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Users::Wallet::*)()>(&::Modio::Users::Wallet::get_Currency)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa026854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::Wallet*>(),
                        {"get_Currency", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::Wallet.set_Currency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Users::Wallet::*)(::StringW)>(&::Modio::Users::Wallet::set_Currency)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa02685c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::Wallet*>(),
                        {"set_Currency", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::Wallet.get_Balance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Modio::Users::Wallet::*)()>(&::Modio::Users::Wallet::get_Balance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa026864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::Wallet*>(),
                        {"get_Balance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::Wallet.set_Balance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Users::Wallet::*)(int64_t)>(&::Modio::Users::Wallet::set_Balance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa02686c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::Wallet*>(),
                        {"set_Balance", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::Wallet._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Users::Wallet::*)()>(&::Modio::Users::Wallet::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa026874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::Wallet*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::Wallet.ApplyDetailsFromWalletObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Users::Wallet::*)(::Modio::API::SchemaDefinitions::WalletObject)>(&::Modio::Users::Wallet::ApplyDetailsFromWalletObject)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa0251f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::Wallet*>(),
                        {"ApplyDetailsFromWalletObject", {}, {::i2c::type_of<::Modio::API::SchemaDefinitions::WalletObject>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::Wallet.UpdateBalance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Users::Wallet::*)(int64_t)>(&::Modio::Users::Wallet::UpdateBalance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa02687c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::Wallet*>(),
                        {"UpdateBalance", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Modio::Users::Wallet::__cordl_internal_get__Type_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Type_k__BackingField;
}
constexpr ::StringW const& Modio::Users::Wallet::__cordl_internal_get__Type_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Type_k__BackingField;
}
constexpr void Modio::Users::Wallet::__cordl_internal_set__Type_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Type_k__BackingField = value;
}
constexpr ::StringW& Modio::Users::Wallet::__cordl_internal_get__Currency_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Currency_k__BackingField;
}
constexpr ::StringW const& Modio::Users::Wallet::__cordl_internal_get__Currency_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Currency_k__BackingField;
}
constexpr void Modio::Users::Wallet::__cordl_internal_set__Currency_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Currency_k__BackingField = value;
}
constexpr int64_t& Modio::Users::Wallet::__cordl_internal_get__Balance_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Balance_k__BackingField;
}
constexpr int64_t const& Modio::Users::Wallet::__cordl_internal_get__Balance_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Balance_k__BackingField;
}
constexpr void Modio::Users::Wallet::__cordl_internal_set__Balance_k__BackingField(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Balance_k__BackingField = value;
}
inline ::StringW Modio::Users::Wallet::get_Type()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::Wallet*>(),
                        {"get_Type", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Modio::Users::Wallet::set_Type(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::Wallet*>(),
                        {"set_Type", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Modio::Users::Wallet::get_Currency()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::Wallet*>(),
                        {"get_Currency", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Modio::Users::Wallet::set_Currency(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::Wallet*>(),
                        {"set_Currency", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t Modio::Users::Wallet::get_Balance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::Wallet*>(),
                        {"get_Balance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Modio::Users::Wallet::set_Balance(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::Wallet*>(),
                        {"set_Balance", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Modio::Users::Wallet::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::Wallet*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Users::Wallet::ApplyDetailsFromWalletObject(::Modio::API::SchemaDefinitions::WalletObject  walletObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::Wallet*>(),
                        {"ApplyDetailsFromWalletObject", {}, {::i2c::type_of<::Modio::API::SchemaDefinitions::WalletObject>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, walletObject);
}
inline void Modio::Users::Wallet::UpdateBalance(int64_t  newBalance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::Wallet*>(),
                        {"UpdateBalance", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newBalance);
}
inline ::Modio::Users::Wallet* Modio::Users::Wallet::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Users::Wallet*>());
}
// Ctor Parameters []
constexpr ::Modio::Users::Wallet::Wallet()   {
}
