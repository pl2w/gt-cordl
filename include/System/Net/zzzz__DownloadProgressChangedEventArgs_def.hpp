#pragma once
// IWYU pragma private; include "System/Net/DownloadProgressChangedEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__ProgressChangedEventArgs_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DownloadProgressChangedEventArgs)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class DownloadProgressChangedEventArgs;
}
// Write type traits
MARK_REF_T(::System::Net::DownloadProgressChangedEventArgs*);
DEFINE_IL2CPP_CLASS(::System::Net::DownloadProgressChangedEventArgs*, "System.Net", "DownloadProgressChangedEventArgs");
// Dependencies System.ComponentModel.ProgressChangedEventArgs
namespace System::Net {
// Is value type: false
// CS Name: System.Net.DownloadProgressChangedEventArgs
class CORDL_TYPE DownloadProgressChangedEventArgs : public ::System::ComponentModel::ProgressChangedEventArgs {
public:
// Declarations
 __declspec(property(get=get_BytesReceived)) int64_t  BytesReceived;

 __declspec(property(get=get_TotalBytesToReceive)) int64_t  TotalBytesToReceive;

/// @brief Field <BytesReceived>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__BytesReceived_k__BackingField, put=__cordl_internal_set__BytesReceived_k__BackingField)) int64_t  _BytesReceived_k__BackingField;

/// @brief Field <TotalBytesToReceive>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__TotalBytesToReceive_k__BackingField, put=__cordl_internal_set__TotalBytesToReceive_k__BackingField)) int64_t  _TotalBytesToReceive_k__BackingField;

static inline ::System::Net::DownloadProgressChangedEventArgs* New_ctor() ;

static inline ::System::Net::DownloadProgressChangedEventArgs* New_ctor(int32_t  progressPercentage, ::System::Object*  userToken, int64_t  bytesReceived, int64_t  totalBytesToReceive) ;

constexpr int64_t const& __cordl_internal_get__BytesReceived_k__BackingField() const;

constexpr int64_t& __cordl_internal_get__BytesReceived_k__BackingField() ;

constexpr int64_t const& __cordl_internal_get__TotalBytesToReceive_k__BackingField() const;

constexpr int64_t& __cordl_internal_get__TotalBytesToReceive_k__BackingField() ;

constexpr void __cordl_internal_set__BytesReceived_k__BackingField(int64_t  value) ;

constexpr void __cordl_internal_set__TotalBytesToReceive_k__BackingField(int64_t  value) ;

/// @brief Method .ctor, addr 0xac54a70, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xac4f944, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(int32_t  progressPercentage, ::System::Object*  userToken, int64_t  bytesReceived, int64_t  totalBytesToReceive) ;

/// [CompilerGenerated]
/// @brief Method get_BytesReceived, addr 0xac54a60, size 0x8, virtual false, abstract: false, final false
inline int64_t get_BytesReceived() ;

/// [CompilerGenerated]
/// @brief Method get_TotalBytesToReceive, addr 0xac54a68, size 0x8, virtual false, abstract: false, final false
inline int64_t get_TotalBytesToReceive() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DownloadProgressChangedEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DownloadProgressChangedEventArgs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DownloadProgressChangedEventArgs(DownloadProgressChangedEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DownloadProgressChangedEventArgs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DownloadProgressChangedEventArgs(DownloadProgressChangedEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10480};

/// [CompilerGenerated]
/// @brief Field <BytesReceived>k__BackingField, offset: 0x20, size: 0x8, def value: None
 int64_t  ____BytesReceived_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <TotalBytesToReceive>k__BackingField, offset: 0x28, size: 0x8, def value: None
 int64_t  ____TotalBytesToReceive_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::DownloadProgressChangedEventArgs, ____BytesReceived_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::DownloadProgressChangedEventArgs, ____TotalBytesToReceive_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::System::Net::DownloadProgressChangedEventArgs) == 0x30, "Size mismatch!");

} // namespace end def System::Net
