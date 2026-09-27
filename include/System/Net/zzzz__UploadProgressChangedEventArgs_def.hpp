#pragma once
// IWYU pragma private; include "System/Net/UploadProgressChangedEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__ProgressChangedEventArgs_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UploadProgressChangedEventArgs)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class UploadProgressChangedEventArgs;
}
// Write type traits
MARK_REF_T(::System::Net::UploadProgressChangedEventArgs*);
DEFINE_IL2CPP_CLASS(::System::Net::UploadProgressChangedEventArgs*, "System.Net", "UploadProgressChangedEventArgs");
// Dependencies System.ComponentModel.ProgressChangedEventArgs
namespace System::Net {
// Is value type: false
// CS Name: System.Net.UploadProgressChangedEventArgs
class CORDL_TYPE UploadProgressChangedEventArgs : public ::System::ComponentModel::ProgressChangedEventArgs {
public:
// Declarations
 __declspec(property(get=get_BytesReceived)) int64_t  BytesReceived;

 __declspec(property(get=get_BytesSent)) int64_t  BytesSent;

 __declspec(property(get=get_TotalBytesToReceive)) int64_t  TotalBytesToReceive;

 __declspec(property(get=get_TotalBytesToSend)) int64_t  TotalBytesToSend;

/// @brief Field <BytesReceived>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__BytesReceived_k__BackingField, put=__cordl_internal_set__BytesReceived_k__BackingField)) int64_t  _BytesReceived_k__BackingField;

/// @brief Field <BytesSent>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__BytesSent_k__BackingField, put=__cordl_internal_set__BytesSent_k__BackingField)) int64_t  _BytesSent_k__BackingField;

/// @brief Field <TotalBytesToReceive>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__TotalBytesToReceive_k__BackingField, put=__cordl_internal_set__TotalBytesToReceive_k__BackingField)) int64_t  _TotalBytesToReceive_k__BackingField;

/// @brief Field <TotalBytesToSend>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__TotalBytesToSend_k__BackingField, put=__cordl_internal_set__TotalBytesToSend_k__BackingField)) int64_t  _TotalBytesToSend_k__BackingField;

static inline ::System::Net::UploadProgressChangedEventArgs* New_ctor() ;

static inline ::System::Net::UploadProgressChangedEventArgs* New_ctor(int32_t  progressPercentage, ::System::Object*  userToken, int64_t  bytesSent, int64_t  totalBytesToSend, int64_t  bytesReceived, int64_t  totalBytesToReceive) ;

constexpr int64_t const& __cordl_internal_get__BytesReceived_k__BackingField() const;

constexpr int64_t& __cordl_internal_get__BytesReceived_k__BackingField() ;

constexpr int64_t const& __cordl_internal_get__BytesSent_k__BackingField() const;

constexpr int64_t& __cordl_internal_get__BytesSent_k__BackingField() ;

constexpr int64_t const& __cordl_internal_get__TotalBytesToReceive_k__BackingField() const;

constexpr int64_t& __cordl_internal_get__TotalBytesToReceive_k__BackingField() ;

constexpr int64_t const& __cordl_internal_get__TotalBytesToSend_k__BackingField() const;

constexpr int64_t& __cordl_internal_get__TotalBytesToSend_k__BackingField() ;

constexpr void __cordl_internal_set__BytesReceived_k__BackingField(int64_t  value) ;

constexpr void __cordl_internal_set__BytesSent_k__BackingField(int64_t  value) ;

constexpr void __cordl_internal_set__TotalBytesToReceive_k__BackingField(int64_t  value) ;

constexpr void __cordl_internal_set__TotalBytesToSend_k__BackingField(int64_t  value) ;

/// @brief Method .ctor, addr 0xac54ac8, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xac4f904, size 0x40, virtual false, abstract: false, final false
inline void _ctor(int32_t  progressPercentage, ::System::Object*  userToken, int64_t  bytesSent, int64_t  totalBytesToSend, int64_t  bytesReceived, int64_t  totalBytesToReceive) ;

/// [CompilerGenerated]
/// @brief Method get_BytesReceived, addr 0xac54aa8, size 0x8, virtual false, abstract: false, final false
inline int64_t get_BytesReceived() ;

/// [CompilerGenerated]
/// @brief Method get_BytesSent, addr 0xac54ab8, size 0x8, virtual false, abstract: false, final false
inline int64_t get_BytesSent() ;

/// [CompilerGenerated]
/// @brief Method get_TotalBytesToReceive, addr 0xac54ab0, size 0x8, virtual false, abstract: false, final false
inline int64_t get_TotalBytesToReceive() ;

/// [CompilerGenerated]
/// @brief Method get_TotalBytesToSend, addr 0xac54ac0, size 0x8, virtual false, abstract: false, final false
inline int64_t get_TotalBytesToSend() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UploadProgressChangedEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UploadProgressChangedEventArgs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UploadProgressChangedEventArgs(UploadProgressChangedEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UploadProgressChangedEventArgs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UploadProgressChangedEventArgs(UploadProgressChangedEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10481};

/// [CompilerGenerated]
/// @brief Field <BytesReceived>k__BackingField, offset: 0x20, size: 0x8, def value: None
 int64_t  ____BytesReceived_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <TotalBytesToReceive>k__BackingField, offset: 0x28, size: 0x8, def value: None
 int64_t  ____TotalBytesToReceive_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <BytesSent>k__BackingField, offset: 0x30, size: 0x8, def value: None
 int64_t  ____BytesSent_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <TotalBytesToSend>k__BackingField, offset: 0x38, size: 0x8, def value: None
 int64_t  ____TotalBytesToSend_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::UploadProgressChangedEventArgs, ____BytesReceived_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::UploadProgressChangedEventArgs, ____TotalBytesToReceive_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::UploadProgressChangedEventArgs, ____BytesSent_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::UploadProgressChangedEventArgs, ____TotalBytesToSend_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(sizeof(::System::Net::UploadProgressChangedEventArgs) == 0x40, "Size mismatch!");

} // namespace end def System::Net
