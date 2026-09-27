#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/LinuxNetworkInterfaceAPI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/NetworkInformation/zzzz__UnixNetworkInterfaceAPI_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LinuxNetworkInterfaceAPI)
namespace System::Net::NetworkInformation {
class NetworkInterface;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class LinuxNetworkInterfaceAPI;
}
// Write type traits
MARK_REF_T(::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI*);
DEFINE_IL2CPP_CLASS(::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI*, "System.Net.NetworkInformation", "LinuxNetworkInterfaceAPI");
// Dependencies System.Net.NetworkInformation.UnixNetworkInterfaceAPI
namespace System::Net::NetworkInformation {
// Is value type: false
// CS Name: System.Net.NetworkInformation.LinuxNetworkInterfaceAPI
class CORDL_TYPE LinuxNetworkInterfaceAPI : public ::System::Net::NetworkInformation::UnixNetworkInterfaceAPI {
public:
// Declarations
/// @brief Method FreeInterfaceAddresses, addr 0xacc9d24, size 0x4, virtual false, abstract: false, final false
static inline void FreeInterfaceAddresses(::System::IntPtr  ifap) ;

/// @brief Method GetAllNetworkInterfaces, addr 0xacc9e24, size 0xa9c, virtual true, abstract: false, final false
inline ::ArrayW<::System::Net::NetworkInformation::NetworkInterface*> GetAllNetworkInterfaces() ;

/// @brief Method GetInterfaceAddresses, addr 0xacc9da4, size 0x4, virtual false, abstract: false, final false
static inline int32_t GetInterfaceAddresses(::by_ref<::System::IntPtr>  ifap) ;

static inline ::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI* New_ctor() ;

/// @brief Method .ctor, addr 0xacca9c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LinuxNetworkInterfaceAPI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LinuxNetworkInterfaceAPI", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LinuxNetworkInterfaceAPI(LinuxNetworkInterfaceAPI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LinuxNetworkInterfaceAPI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LinuxNetworkInterfaceAPI(LinuxNetworkInterfaceAPI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10778};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI) == 0x10, "Size mismatch!");

} // namespace end def System::Net::NetworkInformation
