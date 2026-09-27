#pragma once
// IWYU pragma private; include "Fusion/CloudCommunicator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Protocol/zzzz__CommunicatorBase_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CloudCommunicator)
namespace Fusion::Photon::Realtime {
class FusionAppSettings;
}
namespace Fusion::Photon::Realtime {
class FusionRelayClient;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Fusion {
class CloudCommunicator;
}
// Write type traits
MARK_REF_T(::Fusion::CloudCommunicator*);
DEFINE_IL2CPP_CLASS(::Fusion::CloudCommunicator*, "Fusion", "CloudCommunicator");
// Dependencies Fusion.Protocol.CommunicatorBase
namespace Fusion {
// Is value type: false
// CS Name: Fusion.CloudCommunicator
class CORDL_TYPE CloudCommunicator : public ::Fusion::Protocol::CommunicatorBase {
public:
// Declarations
 __declspec(property(get=get_Client, put=set_Client)) ::Fusion::Photon::Realtime::FusionRelayClient*  Client;

 __declspec(property(get=get_CommunicatorID)) int32_t  CommunicatorID;

 __declspec(property(get=get_WasExtracted, put=set_WasExtracted)) bool  WasExtracted;

/// @brief Field <Client>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__Client_k__BackingField, put=__cordl_internal_set__Client_k__BackingField)) ::Fusion::Photon::Realtime::FusionRelayClient*  _Client_k__BackingField;

/// @brief Field <WasExtracted>k__BackingField, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__WasExtracted_k__BackingField, put=__cordl_internal_set__WasExtracted_k__BackingField)) bool  _WasExtracted_k__BackingField;

/// @brief Field _buffer, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__buffer, put=__cordl_internal_set__buffer)) ::ArrayW<uint8_t>  _buffer;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method ConvertData, addr 0x5f706ac, size 0x90, virtual true, abstract: false, final false
inline void ConvertData(::System::Object*  data, ::by_ref<::ArrayW<uint8_t>>  dataBuffer, ::by_ref<int32_t>  maxLength) ;

/// @brief Method Dispose, addr 0x5f707e4, size 0x18, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::Fusion::CloudCommunicator* New_ctor(::Fusion::Photon::Realtime::FusionAppSettings*  clientConfig) ;

/// @brief Method Reset, addr 0x5f7073c, size 0xa8, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SendPackage, addr 0x5f7067c, size 0x30, virtual true, abstract: false, final false
inline bool SendPackage(uint8_t  code, int32_t  targetActor, bool  reliable, uint8_t*  buffer, int32_t  bufferLength) ;

/// @brief Method Service, addr 0x5f7064c, size 0x30, virtual true, abstract: false, final false
inline void Service() ;

constexpr ::Fusion::Photon::Realtime::FusionRelayClient* const& __cordl_internal_get__Client_k__BackingField() const;

constexpr ::Fusion::Photon::Realtime::FusionRelayClient*& __cordl_internal_get__Client_k__BackingField() ;

constexpr bool const& __cordl_internal_get__WasExtracted_k__BackingField() const;

constexpr bool& __cordl_internal_get__WasExtracted_k__BackingField() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__buffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__buffer() ;

constexpr void __cordl_internal_set__Client_k__BackingField(::Fusion::Photon::Realtime::FusionRelayClient*  value) ;

constexpr void __cordl_internal_set__WasExtracted_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__buffer(::ArrayW<uint8_t>  value) ;

/// @brief Method .ctor, addr 0x5f70544, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::Fusion::Photon::Realtime::FusionAppSettings*  clientConfig) ;

/// [CompilerGenerated]
/// @brief Method get_Client, addr 0x5f704fc, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::Photon::Realtime::FusionRelayClient* get_Client() ;

/// @brief Method get_CommunicatorID, addr 0x5f7050c, size 0x28, virtual true, abstract: false, final false
inline int32_t get_CommunicatorID() ;

/// [CompilerGenerated]
/// @brief Method get_WasExtracted, addr 0x5f70534, size 0x8, virtual false, abstract: false, final false
inline bool get_WasExtracted() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Client, addr 0x5f70504, size 0x8, virtual false, abstract: false, final false
inline void set_Client(::Fusion::Photon::Realtime::FusionRelayClient*  value) ;

/// [CompilerGenerated]
/// @brief Method set_WasExtracted, addr 0x5f7053c, size 0x8, virtual false, abstract: false, final false
inline void set_WasExtracted(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CloudCommunicator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CloudCommunicator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CloudCommunicator(CloudCommunicator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CloudCommunicator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CloudCommunicator(CloudCommunicator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18834};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Client>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::Fusion::Photon::Realtime::FusionRelayClient*  ____Client_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <WasExtracted>k__BackingField, offset: 0x40, size: 0x1, def value: None
 bool  ____WasExtracted_k__BackingField;

/// @brief Field _buffer, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____buffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::CloudCommunicator, ____Client_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudCommunicator, ____WasExtracted_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::CloudCommunicator, ____buffer) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Fusion::CloudCommunicator) == 0x50, "Size mismatch!");

} // namespace end def Fusion
