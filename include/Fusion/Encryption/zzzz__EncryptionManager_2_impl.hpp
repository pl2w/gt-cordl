#pragma once
// IWYU pragma private; include "Fusion/Encryption/EncryptionManager_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/Encryption/zzzz__EncryptionManager_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
template<typename THandler,typename TEncryption>
constexpr ::System::Collections::Generic::Dictionary_2<THandler,TEncryption>*& Fusion::Encryption::EncryptionManager_2<THandler,TEncryption>::__cordl_internal_get__cyphers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cyphers;
}
template<typename THandler,typename TEncryption>
constexpr ::System::Collections::Generic::Dictionary_2<THandler,TEncryption>* const& Fusion::Encryption::EncryptionManager_2<THandler,TEncryption>::__cordl_internal_get__cyphers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cyphers;
}
template<typename THandler,typename TEncryption>
constexpr void Fusion::Encryption::EncryptionManager_2<THandler,TEncryption>::__cordl_internal_set__cyphers(::System::Collections::Generic::Dictionary_2<THandler,TEncryption>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cyphers = value;
}
template<typename THandler,typename TEncryption>
inline void Fusion::Encryption::EncryptionManager_2<THandler,TEncryption>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Encryption::EncryptionManager_2<THandler,TEncryption>*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename THandler,typename TEncryption>
inline void Fusion::Encryption::EncryptionManager_2<THandler,TEncryption>::RegisterEncryptionKey(THandler  handle, ::ArrayW<uint8_t>  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Encryption::EncryptionManager_2<THandler,TEncryption>*>(),
                        {"RegisterEncryptionKey", {}, {::i2c::type_of<THandler>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle, key);
}
template<typename THandler,typename TEncryption>
inline void Fusion::Encryption::EncryptionManager_2<THandler,TEncryption>::DeleteEncryptionKey(THandler  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Encryption::EncryptionManager_2<THandler,TEncryption>*>(),
                        {"DeleteEncryptionKey", {}, {::i2c::type_of<THandler>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
template<typename THandler,typename TEncryption>
inline bool Fusion::Encryption::EncryptionManager_2<THandler,TEncryption>::HasEncryptionForHandle(THandler  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Encryption::EncryptionManager_2<THandler,TEncryption>*>(),
                        {"HasEncryptionForHandle", {}, {::i2c::type_of<THandler>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, handle);
}
template<typename THandler,typename TEncryption>
inline bool Fusion::Encryption::EncryptionManager_2<THandler,TEncryption>::Wrap(THandler  handle, uint8_t*  buffer, ::by_ref<int32_t>  length, int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Encryption::EncryptionManager_2<THandler,TEncryption>*>(),
                        {"Wrap", {}, {::i2c::type_of<THandler>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, handle, buffer, length, capacity);
}
template<typename THandler,typename TEncryption>
inline bool Fusion::Encryption::EncryptionManager_2<THandler,TEncryption>::Unwrap(THandler  handle, uint8_t*  buffer, ::by_ref<int32_t>  length, int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Encryption::EncryptionManager_2<THandler,TEncryption>*>(),
                        {"Unwrap", {}, {::i2c::type_of<THandler>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, handle, buffer, length, capacity);
}
template<typename THandler,typename TEncryption>
inline bool Fusion::Encryption::EncryptionManager_2<THandler,TEncryption>::ComputeHash(THandler  handle, uint8_t*  buffer, ::by_ref<int32_t>  length, int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Encryption::EncryptionManager_2<THandler,TEncryption>*>(),
                        {"ComputeHash", {}, {::i2c::type_of<THandler>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, handle, buffer, length, capacity);
}
template<typename THandler,typename TEncryption>
inline bool Fusion::Encryption::EncryptionManager_2<THandler,TEncryption>::VerifyHash(THandler  handle, uint8_t*  buffer, ::by_ref<int32_t>  length, int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Encryption::EncryptionManager_2<THandler,TEncryption>*>(),
                        {"VerifyHash", {}, {::i2c::type_of<THandler>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, handle, buffer, length, capacity);
}
template<typename THandler,typename TEncryption>
inline bool Fusion::Encryption::EncryptionManager_2<THandler,TEncryption>::Encrypt(THandler  handle, uint8_t*  buffer, ::by_ref<int32_t>  length, int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Encryption::EncryptionManager_2<THandler,TEncryption>*>(),
                        {"Encrypt", {}, {::i2c::type_of<THandler>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, handle, buffer, length, capacity);
}
template<typename THandler,typename TEncryption>
inline bool Fusion::Encryption::EncryptionManager_2<THandler,TEncryption>::Decrypt(THandler  handle, uint8_t*  buffer, ::by_ref<int32_t>  length, int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Encryption::EncryptionManager_2<THandler,TEncryption>*>(),
                        {"Decrypt", {}, {::i2c::type_of<THandler>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, handle, buffer, length, capacity);
}
template<typename THandler,typename TEncryption>
inline void Fusion::Encryption::EncryptionManager_2<THandler,TEncryption>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Encryption::EncryptionManager_2<THandler,TEncryption>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename THandler,typename TEncryption>
inline ::Fusion::Encryption::EncryptionManager_2<THandler,TEncryption>* Fusion::Encryption::EncryptionManager_2<THandler,TEncryption>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Encryption::EncryptionManager_2<THandler,TEncryption>*>());
}
/// @brief Convert operator to "::System::IDisposable"
template<typename THandler,typename TEncryption>
constexpr  Fusion::Encryption::EncryptionManager_2<THandler,TEncryption>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename THandler,typename TEncryption>
constexpr ::System::IDisposable* Fusion::Encryption::EncryptionManager_2<THandler,TEncryption>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename THandler,typename TEncryption>
constexpr ::Fusion::Encryption::EncryptionManager_2<THandler,TEncryption>::EncryptionManager_2()   {
}
