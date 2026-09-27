#pragma once
// IWYU pragma private; include "Modio/Mods/Builder/ModfileBuilder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Mods/Builder/zzzz__ModfileBuilder_Platform_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ModfileBuilder)
namespace GlobalNamespace {
struct ModfileBuilder_Platform;
}
namespace GlobalNamespace {
struct ModfileBuilder__AddAllMulipartUploadParts_d__35;
}
namespace GlobalNamespace {
struct ModfileBuilder__AddMultipartModfile_d__34;
}
namespace GlobalNamespace {
struct ModfileBuilder__PublishModfile_d__33;
}
namespace GlobalNamespace {
struct ModfileBuilder__RetryAddMultipartModfile_d__36;
}
namespace Modio::API::SchemaDefinitions {
struct ModfileObject;
}
namespace Modio::Mods::Builder {
class ModBuilder;
}
namespace Modio::Mods {
struct ModId;
}
namespace Modio {
class Error;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::IO {
class Stream;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace Modio::Mods::Builder {
class ModfileBuilder;
}
// Write type traits
MARK_REF_T(::Modio::Mods::Builder::ModfileBuilder*);
DEFINE_IL2CPP_CLASS(::Modio::Mods::Builder::ModfileBuilder*, "Modio.Mods.Builder", "ModfileBuilder");
// Dependencies Modio.Mods.Builder.ModfileBuilder::Platform, System.Object
namespace Modio::Mods::Builder {
// Is value type: false
// CS Name: Modio.Mods.Builder.ModfileBuilder
class CORDL_TYPE ModfileBuilder : public ::System::Object {
public:
// Declarations
using Platform = ::GlobalNamespace::ModfileBuilder_Platform;

using _AddAllMulipartUploadParts_d__35 = ::GlobalNamespace::ModfileBuilder__AddAllMulipartUploadParts_d__35;

using _AddMultipartModfile_d__34 = ::GlobalNamespace::ModfileBuilder__AddMultipartModfile_d__34;

using _PublishModfile_d__33 = ::GlobalNamespace::ModfileBuilder__PublishModfile_d__33;

using _RetryAddMultipartModfile_d__36 = ::GlobalNamespace::ModfileBuilder__RetryAddMultipartModfile_d__36;

 __declspec(property(get=get_ChangeLog, put=set_ChangeLog)) ::StringW  ChangeLog;

 __declspec(property(get=get_FilePath, put=set_FilePath)) ::StringW  FilePath;

 __declspec(property(get=get_MetadataBlob, put=set_MetadataBlob)) ::StringW  MetadataBlob;

 __declspec(property(get=get_ParentId)) ::Modio::Mods::ModId  ParentId;

 __declspec(property(get=get_Platforms, put=set_Platforms)) ::ArrayW<::GlobalNamespace::ModfileBuilder_Platform>  Platforms;

 __declspec(property(get=get_Version, put=set_Version)) ::StringW  Version;

/// @brief Field <ChangeLog>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__ChangeLog_k__BackingField, put=__cordl_internal_set__ChangeLog_k__BackingField)) ::StringW  _ChangeLog_k__BackingField;

/// @brief Field <FilePath>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__FilePath_k__BackingField, put=__cordl_internal_set__FilePath_k__BackingField)) ::StringW  _FilePath_k__BackingField;

/// @brief Field <MetadataBlob>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__MetadataBlob_k__BackingField, put=__cordl_internal_set__MetadataBlob_k__BackingField)) ::StringW  _MetadataBlob_k__BackingField;

/// @brief Field <Platforms>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Platforms_k__BackingField, put=__cordl_internal_set__Platforms_k__BackingField)) ::ArrayW<::GlobalNamespace::ModfileBuilder_Platform>  _Platforms_k__BackingField;

/// @brief Field <Version>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Version_k__BackingField, put=__cordl_internal_set__Version_k__BackingField)) ::StringW  _Version_k__BackingField;

/// @brief Field _parentModBuilder, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__parentModBuilder, put=__cordl_internal_set__parentModBuilder)) ::Modio::Mods::Builder::ModBuilder*  _parentModBuilder;

/// [AsyncStateMachine(typeof(Modio.Mods.Builder.ModfileBuilder::<AddAllMulipartUploadParts>d__35))]
/// @brief Method AddAllMulipartUploadParts, addr 0xa039e00, size 0x148, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* AddAllMulipartUploadParts(::StringW  uploadId, int32_t  partCount, ::System::IO::Stream*  readStream) ;

/// [AsyncStateMachine(typeof(Modio.Mods.Builder.ModfileBuilder::<AddMultipartModfile>d__34))]
/// @brief Method AddMultipartModfile, addr 0xa039cdc, size 0x124, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* AddMultipartModfile(::System::IO::Stream*  readStream) ;

/// @brief Method AppendPlatform, addr 0xa039ab8, size 0x78, virtual false, abstract: false, final false
inline ::Modio::Mods::Builder::ModfileBuilder* AppendPlatform(::GlobalNamespace::ModfileBuilder_Platform  platform) ;

/// @brief Method AppendPlatforms, addr 0xa039b30, size 0x90, virtual false, abstract: false, final false
inline ::Modio::Mods::Builder::ModfileBuilder* AppendPlatforms(::System::Collections::Generic::ICollection_1<::GlobalNamespace::ModfileBuilder_Platform>*  platforms) ;

/// @brief Method FinishModfile, addr 0xa039bc0, size 0x8, virtual false, abstract: false, final false
inline ::Modio::Mods::Builder::ModBuilder* FinishModfile() ;

/// @brief Method GetPlatformHeader, addr 0xa03a0ec, size 0xdc, virtual false, abstract: false, final false
static inline ::StringW GetPlatformHeader(::GlobalNamespace::ModfileBuilder_Platform  platform) ;

static inline ::Modio::Mods::Builder::ModfileBuilder* New_ctor(::Modio::Mods::Builder::ModBuilder*  parent) ;

/// [AsyncStateMachine(typeof(Modio.Mods.Builder.ModfileBuilder::<PublishModfile>d__33))]
/// @brief Method PublishModfile, addr 0xa039bc8, size 0x114, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* PublishModfile() ;

/// [AsyncStateMachine(typeof(Modio.Mods.Builder.ModfileBuilder::<RetryAddMultipartModfile>d__36))]
/// @brief Method RetryAddMultipartModfile, addr 0xa039f48, size 0x1a4, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::ModfileObject>>>* RetryAddMultipartModfile(::StringW  uploadId, ::StringW  version, ::StringW  changelog, ::StringW  metadataBlob, ::ArrayW<::StringW>  platforms, ::System::IO::Stream*  readStream) ;

/// @brief Method SetChangelog, addr 0xa03999c, size 0x1c, virtual false, abstract: false, final false
inline ::Modio::Mods::Builder::ModfileBuilder* SetChangelog(::StringW  changelog) ;

/// @brief Method SetMetadataBlob, addr 0xa0399b8, size 0x1c, virtual false, abstract: false, final false
inline ::Modio::Mods::Builder::ModfileBuilder* SetMetadataBlob(::StringW  metadataBlob) ;

/// @brief Method SetPlatform, addr 0xa0399d4, size 0x78, virtual false, abstract: false, final false
inline ::Modio::Mods::Builder::ModfileBuilder* SetPlatform(::GlobalNamespace::ModfileBuilder_Platform  platform) ;

/// @brief Method SetPlatforms, addr 0xa039a4c, size 0x6c, virtual false, abstract: false, final false
inline ::Modio::Mods::Builder::ModfileBuilder* SetPlatforms(::System::Collections::Generic::ICollection_1<::GlobalNamespace::ModfileBuilder_Platform>*  platforms) ;

/// @brief Method SetSourceDirectoryPath, addr 0xa039964, size 0x1c, virtual false, abstract: false, final false
inline ::Modio::Mods::Builder::ModfileBuilder* SetSourceDirectoryPath(::StringW  filePath) ;

/// @brief Method SetVersion, addr 0xa039980, size 0x1c, virtual false, abstract: false, final false
inline ::Modio::Mods::Builder::ModfileBuilder* SetVersion(::StringW  version) ;

constexpr ::StringW const& __cordl_internal_get__ChangeLog_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__ChangeLog_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__FilePath_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__FilePath_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__MetadataBlob_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__MetadataBlob_k__BackingField() ;

constexpr ::ArrayW<::GlobalNamespace::ModfileBuilder_Platform> const& __cordl_internal_get__Platforms_k__BackingField() const;

constexpr ::ArrayW<::GlobalNamespace::ModfileBuilder_Platform>& __cordl_internal_get__Platforms_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Version_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Version_k__BackingField() ;

constexpr ::Modio::Mods::Builder::ModBuilder* const& __cordl_internal_get__parentModBuilder() const;

constexpr ::Modio::Mods::Builder::ModBuilder*& __cordl_internal_get__parentModBuilder() ;

constexpr void __cordl_internal_set__ChangeLog_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__FilePath_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__MetadataBlob_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Platforms_k__BackingField(::ArrayW<::GlobalNamespace::ModfileBuilder_Platform>  value) ;

constexpr void __cordl_internal_set__Version_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__parentModBuilder(::Modio::Mods::Builder::ModBuilder*  value) ;

/// @brief Method .ctor, addr 0xa039934, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Modio::Mods::Builder::ModBuilder*  parent) ;

/// [CompilerGenerated]
/// @brief Method get_ChangeLog, addr 0xa0398e0, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_ChangeLog() ;

/// [CompilerGenerated]
/// @brief Method get_FilePath, addr 0xa0398c0, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_FilePath() ;

/// [CompilerGenerated]
/// @brief Method get_MetadataBlob, addr 0xa0398f0, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_MetadataBlob() ;

/// @brief Method get_ParentId, addr 0xa039910, size 0x24, virtual false, abstract: false, final false
inline ::Modio::Mods::ModId get_ParentId() ;

/// [CompilerGenerated]
/// @brief Method get_Platforms, addr 0xa039900, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::GlobalNamespace::ModfileBuilder_Platform> get_Platforms() ;

/// [CompilerGenerated]
/// @brief Method get_Version, addr 0xa0398d0, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Version() ;

/// [CompilerGenerated]
/// @brief Method set_ChangeLog, addr 0xa0398e8, size 0x8, virtual false, abstract: false, final false
inline void set_ChangeLog(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_FilePath, addr 0xa0398c8, size 0x8, virtual false, abstract: false, final false
inline void set_FilePath(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_MetadataBlob, addr 0xa0398f8, size 0x8, virtual false, abstract: false, final false
inline void set_MetadataBlob(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Platforms, addr 0xa039908, size 0x8, virtual false, abstract: false, final false
inline void set_Platforms(::ArrayW<::GlobalNamespace::ModfileBuilder_Platform>  value) ;

/// [CompilerGenerated]
/// @brief Method set_Version, addr 0xa0398d8, size 0x8, virtual false, abstract: false, final false
inline void set_Version(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModfileBuilder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModfileBuilder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModfileBuilder(ModfileBuilder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModfileBuilder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModfileBuilder(ModfileBuilder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17623};

/// [CompilerGenerated]
/// @brief Field <FilePath>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____FilePath_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Version>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____Version_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ChangeLog>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____ChangeLog_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MetadataBlob>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____MetadataBlob_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Platforms>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::ModfileBuilder_Platform>  ____Platforms_k__BackingField;

/// @brief Field _parentModBuilder, offset: 0x38, size: 0x8, def value: None
 ::Modio::Mods::Builder::ModBuilder*  ____parentModBuilder;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Mods::Builder::ModfileBuilder, ____FilePath_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Builder::ModfileBuilder, ____Version_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Builder::ModfileBuilder, ____ChangeLog_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Builder::ModfileBuilder, ____MetadataBlob_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Builder::ModfileBuilder, ____Platforms_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Builder::ModfileBuilder, ____parentModBuilder) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Modio::Mods::Builder::ModfileBuilder) == 0x40, "Size mismatch!");

} // namespace end def Modio::Mods::Builder
