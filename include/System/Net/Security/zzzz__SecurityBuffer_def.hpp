#pragma once
// IWYU pragma private; include "System/Net/Security/SecurityBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Security/zzzz__SecurityBufferType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SecurityBuffer)
namespace System::Net::Security {
struct SecurityBufferType;
}
namespace System::Runtime::InteropServices {
class SafeHandle;
}
namespace System::Security::Authentication::ExtendedProtection {
class ChannelBinding;
}
// Forward declare root types
namespace System::Net::Security {
class SecurityBuffer;
}
// Write type traits
MARK_REF_T(::System::Net::Security::SecurityBuffer*);
DEFINE_IL2CPP_CLASS(::System::Net::Security::SecurityBuffer*, "System.Net.Security", "SecurityBuffer");
// Dependencies System.Net.Security.SecurityBufferType, System.Object
namespace System::Net::Security {
// Is value type: false
// CS Name: System.Net.Security.SecurityBuffer
class CORDL_TYPE SecurityBuffer : public ::System::Object {
public:
// Declarations
/// @brief Field offset, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_offset, put=__cordl_internal_set_offset)) int32_t  offset;

/// @brief Field size, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_size, put=__cordl_internal_set_size)) int32_t  size;

/// @brief Field token, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_token, put=__cordl_internal_set_token)) ::ArrayW<uint8_t>  token;

/// @brief Field type, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_type, put=__cordl_internal_set_type)) ::System::Net::Security::SecurityBufferType  type;

/// @brief Field unmanagedToken, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_unmanagedToken, put=__cordl_internal_set_unmanagedToken)) ::System::Runtime::InteropServices::SafeHandle*  unmanagedToken;

static inline ::System::Net::Security::SecurityBuffer* New_ctor(::System::Security::Authentication::ExtendedProtection::ChannelBinding*  binding) ;

static inline ::System::Net::Security::SecurityBuffer* New_ctor(::ArrayW<uint8_t>  data, ::System::Net::Security::SecurityBufferType  tokentype) ;

static inline ::System::Net::Security::SecurityBuffer* New_ctor(int32_t  size, ::System::Net::Security::SecurityBufferType  tokentype) ;

constexpr int32_t const& __cordl_internal_get_offset() const;

constexpr int32_t& __cordl_internal_get_offset() ;

constexpr int32_t const& __cordl_internal_get_size() const;

constexpr int32_t& __cordl_internal_get_size() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_token() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_token() ;

constexpr ::System::Net::Security::SecurityBufferType const& __cordl_internal_get_type() const;

constexpr ::System::Net::Security::SecurityBufferType& __cordl_internal_get_type() ;

constexpr ::System::Runtime::InteropServices::SafeHandle* const& __cordl_internal_get_unmanagedToken() const;

constexpr ::System::Runtime::InteropServices::SafeHandle*& __cordl_internal_get_unmanagedToken() ;

constexpr void __cordl_internal_set_offset(int32_t  value) ;

constexpr void __cordl_internal_set_size(int32_t  value) ;

constexpr void __cordl_internal_set_token(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_type(::System::Net::Security::SecurityBufferType  value) ;

constexpr void __cordl_internal_set_unmanagedToken(::System::Runtime::InteropServices::SafeHandle*  value) ;

/// @brief Method .ctor, addr 0xacf4814, size 0x5c, virtual false, abstract: false, final false
inline void _ctor(::System::Security::Authentication::ExtendedProtection::ChannelBinding*  binding) ;

/// @brief Method .ctor, addr 0xacf4628, size 0x54, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  data, ::System::Net::Security::SecurityBufferType  tokentype) ;

/// @brief Method .ctor, addr 0xacf467c, size 0x198, virtual false, abstract: false, final false
inline void _ctor(int32_t  size, ::System::Net::Security::SecurityBufferType  tokentype) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SecurityBuffer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SecurityBuffer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SecurityBuffer(SecurityBuffer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SecurityBuffer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SecurityBuffer(SecurityBuffer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10927};

/// @brief Field size, offset: 0x10, size: 0x4, def value: None
 int32_t  ___size;

/// @brief Field type, offset: 0x14, size: 0x4, def value: None
 ::System::Net::Security::SecurityBufferType  ___type;

/// @brief Field token, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___token;

/// @brief Field unmanagedToken, offset: 0x20, size: 0x8, def value: None
 ::System::Runtime::InteropServices::SafeHandle*  ___unmanagedToken;

/// @brief Field offset, offset: 0x28, size: 0x4, def value: None
 int32_t  ___offset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Security::SecurityBuffer, ___size) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Security::SecurityBuffer, ___type) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Net::Security::SecurityBuffer, ___token) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::Security::SecurityBuffer, ___unmanagedToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::Security::SecurityBuffer, ___offset) == 0x28, "Offset mismatch!");

static_assert(sizeof(::System::Net::Security::SecurityBuffer) == 0x30, "Size mismatch!");

} // namespace end def System::Net::Security
