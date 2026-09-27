#pragma once
// IWYU pragma private; include "Fusion/Protocol/DummyTrafficSync.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Protocol/zzzz__Message_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DummyTrafficSync)
namespace Fusion::Protocol {
class BitStream;
}
// Forward declare root types
namespace Fusion::Protocol {
class DummyTrafficSync;
}
// Write type traits
MARK_REF_T(::Fusion::Protocol::DummyTrafficSync*);
DEFINE_IL2CPP_CLASS(::Fusion::Protocol::DummyTrafficSync*, "Fusion.Protocol", "DummyTrafficSync");
// Dependencies Fusion.Protocol.Message
namespace Fusion::Protocol {
// Is value type: false
// CS Name: Fusion.Protocol.DummyTrafficSync
class CORDL_TYPE DummyTrafficSync : public ::Fusion::Protocol::Message {
public:
// Declarations
 __declspec(property(get=get_IsValid)) bool  IsValid;

 __declspec(property(get=get_SendInterval, put=set_SendInterval)) int32_t  SendInterval;

 __declspec(property(get=get_Size, put=set_Size)) int32_t  Size;

/// @brief Field <SendInterval>k__BackingField, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__SendInterval_k__BackingField, put=__cordl_internal_set__SendInterval_k__BackingField)) int32_t  _SendInterval_k__BackingField;

/// @brief Field <Size>k__BackingField, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__Size_k__BackingField, put=__cordl_internal_set__Size_k__BackingField)) int32_t  _Size_k__BackingField;

static inline ::Fusion::Protocol::DummyTrafficSync* New_ctor() ;

/// @brief Method SerializeProtected, addr 0x60237e0, size 0xd8, virtual true, abstract: false, final false
inline void SerializeProtected(::Fusion::Protocol::BitStream*  stream) ;

/// @brief Method ToString, addr 0x60238b8, size 0x250, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr int32_t const& __cordl_internal_get__SendInterval_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__SendInterval_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__Size_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Size_k__BackingField() ;

constexpr void __cordl_internal_set__SendInterval_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__Size_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0x60237c8, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsValid, addr 0x6023784, size 0x44, virtual true, abstract: false, final false
inline bool get_IsValid() ;

/// [CompilerGenerated]
/// @brief Method get_SendInterval, addr 0x6023764, size 0x8, virtual false, abstract: false, final false
inline int32_t get_SendInterval() ;

/// [CompilerGenerated]
/// @brief Method get_Size, addr 0x6023774, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Size() ;

/// [CompilerGenerated]
/// @brief Method set_SendInterval, addr 0x602376c, size 0x8, virtual false, abstract: false, final false
inline void set_SendInterval(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Size, addr 0x602377c, size 0x8, virtual false, abstract: false, final false
inline void set_Size(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DummyTrafficSync() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DummyTrafficSync", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DummyTrafficSync(DummyTrafficSync && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DummyTrafficSync", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DummyTrafficSync(DummyTrafficSync const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29318};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <SendInterval>k__BackingField, offset: 0x28, size: 0x4, def value: None
 int32_t  ____SendInterval_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Size>k__BackingField, offset: 0x2c, size: 0x4, def value: None
 int32_t  ____Size_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Protocol::DummyTrafficSync, ____SendInterval_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::Protocol::DummyTrafficSync, ____Size_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::Fusion::Protocol::DummyTrafficSync) == 0x30, "Size mismatch!");

} // namespace end def Fusion::Protocol
