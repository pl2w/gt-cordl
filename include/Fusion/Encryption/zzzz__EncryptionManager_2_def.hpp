#pragma once
// IWYU pragma private; include "Fusion/Encryption/EncryptionManager_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EncryptionManager_2)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Fusion::Encryption {
template<typename THandler,typename TEncryption>
class EncryptionManager_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Fusion::Encryption::EncryptionManager_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Fusion::Encryption::EncryptionManager_2, "Fusion.Encryption", "EncryptionManager`2");
// Dependencies System.Object
namespace Fusion::Encryption {
// cpp template
template<typename THandler,typename TEncryption>
// Is value type: false
// CS Name: Fusion.Encryption.EncryptionManager`2<THandler,TEncryption>
class CORDL_TYPE EncryptionManager_2 : public ::System::Object {
public:
// Declarations
/// @brief Field _cyphers, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__cyphers, put=__cordl_internal_set__cyphers)) ::System::Collections::Generic::Dictionary_2<THandler,TEncryption>*  _cyphers;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method ComputeHash, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool ComputeHash(THandler  handle, uint8_t*  buffer, ::by_ref<int32_t>  length, int32_t  capacity) ;

/// @brief Method Decrypt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Decrypt(THandler  handle, uint8_t*  buffer, ::by_ref<int32_t>  length, int32_t  capacity) ;

/// @brief Method DeleteEncryptionKey, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void DeleteEncryptionKey(THandler  handle) ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Encrypt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Encrypt(THandler  handle, uint8_t*  buffer, ::by_ref<int32_t>  length, int32_t  capacity) ;

/// @brief Method HasEncryptionForHandle, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool HasEncryptionForHandle(THandler  handle) ;

static inline ::Fusion::Encryption::EncryptionManager_2<THandler,TEncryption>* New_ctor() ;

/// @brief Method RegisterEncryptionKey, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void RegisterEncryptionKey(THandler  handle, ::ArrayW<uint8_t>  key) ;

/// @brief Method Unwrap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Unwrap(THandler  handle, uint8_t*  buffer, ::by_ref<int32_t>  length, int32_t  capacity) ;

/// @brief Method VerifyHash, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool VerifyHash(THandler  handle, uint8_t*  buffer, ::by_ref<int32_t>  length, int32_t  capacity) ;

/// @brief Method Wrap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Wrap(THandler  handle, uint8_t*  buffer, ::by_ref<int32_t>  length, int32_t  capacity) ;

constexpr ::System::Collections::Generic::Dictionary_2<THandler,TEncryption>* const& __cordl_internal_get__cyphers() const;

constexpr ::System::Collections::Generic::Dictionary_2<THandler,TEncryption>*& __cordl_internal_get__cyphers() ;

constexpr void __cordl_internal_set__cyphers(::System::Collections::Generic::Dictionary_2<THandler,TEncryption>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EncryptionManager_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EncryptionManager_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EncryptionManager_2(EncryptionManager_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EncryptionManager_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EncryptionManager_2(EncryptionManager_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29416};

/// @brief Field _cyphers, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<THandler,TEncryption>*  ____cyphers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion::Encryption
