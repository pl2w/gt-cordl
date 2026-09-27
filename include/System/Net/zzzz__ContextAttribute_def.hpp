#pragma once
// IWYU pragma private; include "System/Net/ContextAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ContextAttribute)
// Forward declare root types
namespace System::Net {
struct ContextAttribute;
}
// Write type traits
MARK_VAL_T(::System::Net::ContextAttribute);
DEFINE_IL2CPP_CLASS(::System::Net::ContextAttribute, "System.Net", "ContextAttribute");
// Dependencies 
namespace System::Net {
// Is value type: true
// CS Name: System.Net.ContextAttribute
struct CORDL_TYPE ContextAttribute {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ContextAttribute_Unwrapped
enum struct __ContextAttribute_Unwrapped : int32_t {
__E_Sizes = static_cast<int32_t>(0x0),
__E_Names = static_cast<int32_t>(0x1),
__E_Lifespan = static_cast<int32_t>(0x2),
__E_DceInfo = static_cast<int32_t>(0x3),
__E_StreamSizes = static_cast<int32_t>(0x4),
__E_Authority = static_cast<int32_t>(0x6),
__E_PackageInfo = static_cast<int32_t>(0xa),
__E_NegotiationInfo = static_cast<int32_t>(0xc),
__E_UniqueBindings = static_cast<int32_t>(0x19),
__E_EndpointBindings = static_cast<int32_t>(0x1a),
__E_ClientSpecifiedSpn = static_cast<int32_t>(0x1b),
__E_RemoteCertificate = static_cast<int32_t>(0x53),
__E_LocalCertificate = static_cast<int32_t>(0x54),
__E_RootStore = static_cast<int32_t>(0x55),
__E_IssuerListInfoEx = static_cast<int32_t>(0x59),
__E_ConnectionInfo = static_cast<int32_t>(0x5a),
__E_UiInfo = static_cast<int32_t>(0x68),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ContextAttribute_Unwrapped () const noexcept {
return static_cast<__ContextAttribute_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ContextAttribute() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ContextAttribute(int32_t  value__) noexcept;

/// @brief Field Authority value: I32(6)
static ::System::Net::ContextAttribute const Authority;

/// @brief Field ClientSpecifiedSpn value: I32(27)
static ::System::Net::ContextAttribute const ClientSpecifiedSpn;

/// @brief Field ConnectionInfo value: I32(90)
static ::System::Net::ContextAttribute const ConnectionInfo;

/// @brief Field DceInfo value: I32(3)
static ::System::Net::ContextAttribute const DceInfo;

/// @brief Field EndpointBindings value: I32(26)
static ::System::Net::ContextAttribute const EndpointBindings;

/// @brief Field IssuerListInfoEx value: I32(89)
static ::System::Net::ContextAttribute const IssuerListInfoEx;

/// @brief Field Lifespan value: I32(2)
static ::System::Net::ContextAttribute const Lifespan;

/// @brief Field LocalCertificate value: I32(84)
static ::System::Net::ContextAttribute const LocalCertificate;

/// @brief Field Names value: I32(1)
static ::System::Net::ContextAttribute const Names;

/// @brief Field NegotiationInfo value: I32(12)
static ::System::Net::ContextAttribute const NegotiationInfo;

/// @brief Field PackageInfo value: I32(10)
static ::System::Net::ContextAttribute const PackageInfo;

/// @brief Field RemoteCertificate value: I32(83)
static ::System::Net::ContextAttribute const RemoteCertificate;

/// @brief Field RootStore value: I32(85)
static ::System::Net::ContextAttribute const RootStore;

/// @brief Field Sizes value: I32(0)
static ::System::Net::ContextAttribute const Sizes;

/// @brief Field StreamSizes value: I32(4)
static ::System::Net::ContextAttribute const StreamSizes;

/// @brief Field UiInfo value: I32(104)
static ::System::Net::ContextAttribute const UiInfo;

/// @brief Field UniqueBindings value: I32(25)
static ::System::Net::ContextAttribute const UniqueBindings;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10518};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::ContextAttribute, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Net::ContextAttribute) == 0x4, "Size mismatch!");

} // namespace end def System::Net
