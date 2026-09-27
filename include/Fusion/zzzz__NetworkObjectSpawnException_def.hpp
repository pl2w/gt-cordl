#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectSpawnException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkObjectTypeId_def.hpp"
#include "Fusion/zzzz__NetworkSpawnStatus_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(NetworkObjectSpawnException)
namespace Fusion {
struct NetworkObjectTypeId;
}
namespace Fusion {
struct NetworkSpawnStatus;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Fusion {
class NetworkObjectSpawnException;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkObjectSpawnException*);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkObjectSpawnException*, "Fusion", "NetworkObjectSpawnException");
// Dependencies Fusion.NetworkObjectTypeId, Fusion.NetworkSpawnStatus, System.Exception, System.Nullable`1<T>
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkObjectSpawnException
class CORDL_TYPE NetworkObjectSpawnException : public ::System::Exception {
public:
// Declarations
 __declspec(property(get=get_Message)) ::StringW  Message;

 __declspec(property(get=get_Status)) ::Fusion::NetworkSpawnStatus  Status;

 __declspec(property(get=get_TypeId)) ::System::Nullable_1<::Fusion::NetworkObjectTypeId>  TypeId;

/// @brief Field <Status>k__BackingField, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get__Status_k__BackingField, put=__cordl_internal_set__Status_k__BackingField)) ::Fusion::NetworkSpawnStatus  _Status_k__BackingField;

/// @brief Field <TypeId>k__BackingField, offset 0x90, size 0x10 
 __declspec(property(get=__cordl_internal_get__TypeId_k__BackingField, put=__cordl_internal_set__TypeId_k__BackingField)) ::System::Nullable_1<::Fusion::NetworkObjectTypeId>  _TypeId_k__BackingField;

static inline ::Fusion::NetworkObjectSpawnException* New_ctor(::Fusion::NetworkSpawnStatus  status, ::System::Nullable_1<::Fusion::NetworkObjectTypeId>  id) ;

constexpr ::Fusion::NetworkSpawnStatus const& __cordl_internal_get__Status_k__BackingField() const;

constexpr ::Fusion::NetworkSpawnStatus& __cordl_internal_get__Status_k__BackingField() ;

constexpr ::System::Nullable_1<::Fusion::NetworkObjectTypeId> const& __cordl_internal_get__TypeId_k__BackingField() const;

constexpr ::System::Nullable_1<::Fusion::NetworkObjectTypeId>& __cordl_internal_get__TypeId_k__BackingField() ;

constexpr void __cordl_internal_set__Status_k__BackingField(::Fusion::NetworkSpawnStatus  value) ;

constexpr void __cordl_internal_set__TypeId_k__BackingField(::System::Nullable_1<::Fusion::NetworkObjectTypeId>  value) ;

/// @brief Method .ctor, addr 0x5fd9904, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::Fusion::NetworkSpawnStatus  status, ::System::Nullable_1<::Fusion::NetworkObjectTypeId>  id) ;

/// @brief Method get_Message, addr 0x5fda660, size 0x130, virtual true, abstract: false, final false
inline ::StringW get_Message() ;

/// [CompilerGenerated]
/// @brief Method get_Status, addr 0x5fda658, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::NetworkSpawnStatus get_Status() ;

/// [CompilerGenerated]
/// @brief Method get_TypeId, addr 0x5fda648, size 0x10, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Fusion::NetworkObjectTypeId> get_TypeId() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkObjectSpawnException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkObjectSpawnException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkObjectSpawnException(NetworkObjectSpawnException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkObjectSpawnException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkObjectSpawnException(NetworkObjectSpawnException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19260};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <TypeId>k__BackingField, offset: 0x90, size: 0x10, def value: None
 ::System::Nullable_1<::Fusion::NetworkObjectTypeId>  ____TypeId_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Status>k__BackingField, offset: 0xa0, size: 0x4, def value: None
 ::Fusion::NetworkSpawnStatus  ____Status_k__BackingField;

/// @brief Size padding 0xa0 - 0xa8 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkObjectSpawnException, ____TypeId_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectSpawnException, ____Status_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkObjectSpawnException) == 0xa0, "Size mismatch!");

} // namespace end def Fusion
