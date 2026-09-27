#pragma once
// IWYU pragma private; include "Fusion/RpcAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__RpcChannel_def.hpp"
#include "Fusion/zzzz__RpcHostMode_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RpcAttribute)
namespace Fusion {
struct RpcChannel;
}
namespace Fusion {
struct RpcHostMode;
}
namespace Fusion {
struct RpcSources;
}
namespace Fusion {
struct RpcTargets;
}
// Forward declare root types
namespace Fusion {
class RpcAttribute;
}
// Write type traits
MARK_REF_T(::Fusion::RpcAttribute*);
DEFINE_IL2CPP_CLASS(::Fusion::RpcAttribute*, "Fusion", "RpcAttribute");
// [AttributeUsage((System.AttributeTargets)64, Inherited = false, AllowMultiple = false)]
// Dependencies Fusion.RpcChannel, Fusion.RpcHostMode, System.Attribute
namespace Fusion {
// Is value type: false
// CS Name: Fusion.RpcAttribute
class CORDL_TYPE RpcAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_Channel, put=set_Channel)) ::Fusion::RpcChannel  Channel;

 __declspec(property(get=get_HostMode, put=set_HostMode)) ::Fusion::RpcHostMode  HostMode;

 __declspec(property(get=get_InvokeLocal, put=set_InvokeLocal)) bool  InvokeLocal;

 __declspec(property(get=get_Sources)) int32_t  Sources;

 __declspec(property(get=get_Targets)) int32_t  Targets;

 __declspec(property(get=get_TickAligned, put=set_TickAligned)) bool  TickAligned;

/// @brief Field <Channel>k__BackingField, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__Channel_k__BackingField, put=__cordl_internal_set__Channel_k__BackingField)) ::Fusion::RpcChannel  _Channel_k__BackingField;

/// @brief Field <HostMode>k__BackingField, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__HostMode_k__BackingField, put=__cordl_internal_set__HostMode_k__BackingField)) ::Fusion::RpcHostMode  _HostMode_k__BackingField;

/// @brief Field <InvokeLocal>k__BackingField, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__InvokeLocal_k__BackingField, put=__cordl_internal_set__InvokeLocal_k__BackingField)) bool  _InvokeLocal_k__BackingField;

/// @brief Field <Sources>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__Sources_k__BackingField, put=__cordl_internal_set__Sources_k__BackingField)) int32_t  _Sources_k__BackingField;

/// @brief Field <Targets>k__BackingField, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__Targets_k__BackingField, put=__cordl_internal_set__Targets_k__BackingField)) int32_t  _Targets_k__BackingField;

/// @brief Field <TickAligned>k__BackingField, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickAligned_k__BackingField, put=__cordl_internal_set__TickAligned_k__BackingField)) bool  _TickAligned_k__BackingField;

static inline ::Fusion::RpcAttribute* New_ctor() ;

static inline ::Fusion::RpcAttribute* New_ctor(::Fusion::RpcSources  sources, ::Fusion::RpcTargets  targets) ;

constexpr ::Fusion::RpcChannel const& __cordl_internal_get__Channel_k__BackingField() const;

constexpr ::Fusion::RpcChannel& __cordl_internal_get__Channel_k__BackingField() ;

constexpr ::Fusion::RpcHostMode const& __cordl_internal_get__HostMode_k__BackingField() const;

constexpr ::Fusion::RpcHostMode& __cordl_internal_get__HostMode_k__BackingField() ;

constexpr bool const& __cordl_internal_get__InvokeLocal_k__BackingField() const;

constexpr bool& __cordl_internal_get__InvokeLocal_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__Sources_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Sources_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__Targets_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Targets_k__BackingField() ;

constexpr bool const& __cordl_internal_get__TickAligned_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickAligned_k__BackingField() ;

constexpr void __cordl_internal_set__Channel_k__BackingField(::Fusion::RpcChannel  value) ;

constexpr void __cordl_internal_set__HostMode_k__BackingField(::Fusion::RpcHostMode  value) ;

constexpr void __cordl_internal_set__InvokeLocal_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__Sources_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__Targets_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__TickAligned_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0x5fd090c, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5fd0928, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::Fusion::RpcSources  sources, ::Fusion::RpcTargets  targets) ;

/// [CompilerGenerated]
/// @brief Method get_Channel, addr 0x5fd08dc, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::RpcChannel get_Channel() ;

/// [CompilerGenerated]
/// @brief Method get_HostMode, addr 0x5fd08fc, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::RpcHostMode get_HostMode() ;

/// [CompilerGenerated]
/// @brief Method get_InvokeLocal, addr 0x5fd08cc, size 0x8, virtual false, abstract: false, final false
inline bool get_InvokeLocal() ;

/// [CompilerGenerated]
/// @brief Method get_Sources, addr 0x5fd08bc, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Sources() ;

/// [CompilerGenerated]
/// @brief Method get_Targets, addr 0x5fd08c4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Targets() ;

/// [CompilerGenerated]
/// @brief Method get_TickAligned, addr 0x5fd08ec, size 0x8, virtual false, abstract: false, final false
inline bool get_TickAligned() ;

/// [CompilerGenerated]
/// @brief Method set_Channel, addr 0x5fd08e4, size 0x8, virtual false, abstract: false, final false
inline void set_Channel(::Fusion::RpcChannel  value) ;

/// [CompilerGenerated]
/// @brief Method set_HostMode, addr 0x5fd0904, size 0x8, virtual false, abstract: false, final false
inline void set_HostMode(::Fusion::RpcHostMode  value) ;

/// [CompilerGenerated]
/// @brief Method set_InvokeLocal, addr 0x5fd08d4, size 0x8, virtual false, abstract: false, final false
inline void set_InvokeLocal(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_TickAligned, addr 0x5fd08f4, size 0x8, virtual false, abstract: false, final false
inline void set_TickAligned(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RpcAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RpcAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RpcAttribute(RpcAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RpcAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RpcAttribute(RpcAttribute const& ) = delete;

/// @brief Field MaxPayloadSize offset 0xffffffff size 0x4
static constexpr int32_t  MaxPayloadSize{static_cast<int32_t>(0x200)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19182};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Sources>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____Sources_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Targets>k__BackingField, offset: 0x14, size: 0x4, def value: None
 int32_t  ____Targets_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <InvokeLocal>k__BackingField, offset: 0x18, size: 0x1, def value: None
 bool  ____InvokeLocal_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Channel>k__BackingField, offset: 0x1c, size: 0x4, def value: None
 ::Fusion::RpcChannel  ____Channel_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <TickAligned>k__BackingField, offset: 0x20, size: 0x1, def value: None
 bool  ____TickAligned_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <HostMode>k__BackingField, offset: 0x24, size: 0x4, def value: None
 ::Fusion::RpcHostMode  ____HostMode_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::RpcAttribute, ____Sources_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::RpcAttribute, ____Targets_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Fusion::RpcAttribute, ____InvokeLocal_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::RpcAttribute, ____Channel_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Fusion::RpcAttribute, ____TickAligned_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::RpcAttribute, ____HostMode_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Fusion::RpcAttribute) == 0x28, "Size mismatch!");

} // namespace end def Fusion
