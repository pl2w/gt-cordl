#pragma once
// IWYU pragma private; include "Fusion/Sockets/Stun/StunResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Sockets/Stun/zzzz__NATType_def.hpp"
#include "Fusion/Sockets/zzzz__NetAddress_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(StunResult)
namespace Fusion::Sockets {
struct NetAddress;
}
// Forward declare root types
namespace Fusion::Sockets::Stun {
class StunResult;
}
// Write type traits
MARK_REF_T(::Fusion::Sockets::Stun::StunResult*);
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::Stun::StunResult*, "Fusion.Sockets.Stun", "StunResult");
// Dependencies Fusion.Sockets.NetAddress, Fusion.Sockets.Stun.NATType, System.Object
namespace Fusion::Sockets::Stun {
// Is value type: false
// CS Name: Fusion.Sockets.Stun.StunResult
class CORDL_TYPE StunResult : public ::System::Object {
public:
// Declarations
/// @brief Field Invalid, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Invalid, put=setStaticF_Invalid)) ::Fusion::Sockets::Stun::StunResult*  Invalid;

/// @brief Field NatType, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_NatType, put=__cordl_internal_set_NatType)) ::Fusion::Sockets::Stun::NATType  NatType;

 __declspec(property(get=get_PrivateEndPoint, put=set_PrivateEndPoint)) ::Fusion::Sockets::NetAddress  PrivateEndPoint;

 __declspec(property(get=get_PublicEndPoint, put=set_PublicEndPoint)) ::Fusion::Sockets::NetAddress  PublicEndPoint;

/// @brief Field <PrivateEndPoint>k__BackingField, offset 0x30, size 0x18 
 __declspec(property(get=__cordl_internal_get__PrivateEndPoint_k__BackingField, put=__cordl_internal_set__PrivateEndPoint_k__BackingField)) ::Fusion::Sockets::NetAddress  _PrivateEndPoint_k__BackingField;

/// @brief Field <PublicEndPoint>k__BackingField, offset 0x18, size 0x18 
 __declspec(property(get=__cordl_internal_get__PublicEndPoint_k__BackingField, put=__cordl_internal_set__PublicEndPoint_k__BackingField)) ::Fusion::Sockets::NetAddress  _PublicEndPoint_k__BackingField;

/// @brief Method BuildStunResult, addr 0x6038c3c, size 0x22c, virtual false, abstract: false, final false
static inline ::Fusion::Sockets::Stun::StunResult* BuildStunResult(::Fusion::Sockets::NetAddress  publicEndPoint1, ::Fusion::Sockets::NetAddress  publicEndPoint2, ::Fusion::Sockets::NetAddress  privateEndPoint) ;

static inline ::Fusion::Sockets::Stun::StunResult* New_ctor(::Fusion::Sockets::NetAddress  publicEndPoint, ::Fusion::Sockets::NetAddress  privateEndPoint) ;

/// @brief Method ToString, addr 0x603a284, size 0x344, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::Fusion::Sockets::Stun::NATType const& __cordl_internal_get_NatType() const;

constexpr ::Fusion::Sockets::Stun::NATType& __cordl_internal_get_NatType() ;

constexpr ::Fusion::Sockets::NetAddress const& __cordl_internal_get__PrivateEndPoint_k__BackingField() const;

constexpr ::Fusion::Sockets::NetAddress& __cordl_internal_get__PrivateEndPoint_k__BackingField() ;

constexpr ::Fusion::Sockets::NetAddress const& __cordl_internal_get__PublicEndPoint_k__BackingField() const;

constexpr ::Fusion::Sockets::NetAddress& __cordl_internal_get__PublicEndPoint_k__BackingField() ;

constexpr void __cordl_internal_set_NatType(::Fusion::Sockets::Stun::NATType  value) ;

constexpr void __cordl_internal_set__PrivateEndPoint_k__BackingField(::Fusion::Sockets::NetAddress  value) ;

constexpr void __cordl_internal_set__PublicEndPoint_k__BackingField(::Fusion::Sockets::NetAddress  value) ;

/// @brief Method .ctor, addr 0x603a228, size 0x5c, virtual false, abstract: false, final false
inline void _ctor(::Fusion::Sockets::NetAddress  publicEndPoint, ::Fusion::Sockets::NetAddress  privateEndPoint) ;

static inline ::Fusion::Sockets::Stun::StunResult* getStaticF_Invalid() ;

/// [CompilerGenerated]
/// @brief Method get_PrivateEndPoint, addr 0x603a200, size 0x14, virtual false, abstract: false, final false
inline ::Fusion::Sockets::NetAddress get_PrivateEndPoint() ;

/// [CompilerGenerated]
/// @brief Method get_PublicEndPoint, addr 0x603a1d8, size 0x14, virtual false, abstract: false, final false
inline ::Fusion::Sockets::NetAddress get_PublicEndPoint() ;

static inline void setStaticF_Invalid(::Fusion::Sockets::Stun::StunResult*  value) ;

/// [CompilerGenerated]
/// @brief Method set_PrivateEndPoint, addr 0x603a214, size 0x14, virtual false, abstract: false, final false
inline void set_PrivateEndPoint(::Fusion::Sockets::NetAddress  value) ;

/// [CompilerGenerated]
/// @brief Method set_PublicEndPoint, addr 0x603a1ec, size 0x14, virtual false, abstract: false, final false
inline void set_PublicEndPoint(::Fusion::Sockets::NetAddress  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StunResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StunResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StunResult(StunResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StunResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StunResult(StunResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29407};

/// @brief Field NatType, offset: 0x10, size: 0x1, def value: None
 ::Fusion::Sockets::Stun::NATType  ___NatType;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <PublicEndPoint>k__BackingField, offset: 0x18, size: 0x18, def value: None
 ::Fusion::Sockets::NetAddress  ____PublicEndPoint_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <PrivateEndPoint>k__BackingField, offset: 0x30, size: 0x18, def value: None
 ::Fusion::Sockets::NetAddress  ____PrivateEndPoint_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Sockets::Stun::StunResult, ___NatType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunResult, ____PublicEndPoint_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::Stun::StunResult, ____PrivateEndPoint_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Fusion::Sockets::Stun::StunResult) == 0x48, "Size mismatch!");

} // namespace end def Fusion::Sockets::Stun
