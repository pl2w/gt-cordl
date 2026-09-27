#pragma once
// IWYU pragma private; include "System/Net/NetConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetConfig)
namespace System {
class ICloneable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class NetConfig;
}
// Write type traits
MARK_REF_T(::System::Net::NetConfig*);
DEFINE_IL2CPP_CLASS(::System::Net::NetConfig*, "System.Net", "NetConfig");
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.NetConfig
class CORDL_TYPE NetConfig : public ::System::Object {
public:
// Declarations
/// @brief Field MaxResponseHeadersLength, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxResponseHeadersLength, put=__cordl_internal_set_MaxResponseHeadersLength)) int32_t  MaxResponseHeadersLength;

/// @brief Field ipv6Enabled, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_ipv6Enabled, put=__cordl_internal_set_ipv6Enabled)) bool  ipv6Enabled;

/// @brief Convert operator to "::System::ICloneable"
constexpr operator  ::System::ICloneable*() noexcept;

static inline ::System::Net::NetConfig* New_ctor() ;

/// @brief Method System.ICloneable.Clone, addr 0xacac7ac, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_ICloneable_Clone() ;

constexpr int32_t const& __cordl_internal_get_MaxResponseHeadersLength() const;

constexpr int32_t& __cordl_internal_get_MaxResponseHeadersLength() ;

constexpr bool const& __cordl_internal_get_ipv6Enabled() const;

constexpr bool& __cordl_internal_get_ipv6Enabled() ;

constexpr void __cordl_internal_set_MaxResponseHeadersLength(int32_t  value) ;

constexpr void __cordl_internal_set_ipv6Enabled(bool  value) ;

/// @brief Method .ctor, addr 0xacac79c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetConfig", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetConfig(NetConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetConfig", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetConfig(NetConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10712};

/// @brief Field ipv6Enabled, offset: 0x10, size: 0x1, def value: None
 bool  ___ipv6Enabled;

/// @brief Field MaxResponseHeadersLength, offset: 0x14, size: 0x4, def value: None
 int32_t  ___MaxResponseHeadersLength;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::NetConfig, ___ipv6Enabled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetConfig, ___MaxResponseHeadersLength) == 0x14, "Offset mismatch!");

static_assert(sizeof(::System::Net::NetConfig) == 0x18, "Size mismatch!");

} // namespace end def System::Net
