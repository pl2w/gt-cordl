#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/BacktraceCredentials.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BacktraceCredentials)
namespace System {
class Uri;
}
// Forward declare root types
namespace Backtrace::Unity::Model {
class BacktraceCredentials;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Model::BacktraceCredentials*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Model::BacktraceCredentials*, "Backtrace.Unity.Model", "BacktraceCredentials");
// Dependencies System.Object
namespace Backtrace::Unity::Model {
// Is value type: false
// CS Name: Backtrace.Unity.Model.BacktraceCredentials
class CORDL_TYPE BacktraceCredentials : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_BacktraceHostUri, put=set_BacktraceHostUri)) ::System::Uri*  BacktraceHostUri;

/// @brief Field <BacktraceHostUri>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__BacktraceHostUri_k__BackingField, put=__cordl_internal_set__BacktraceHostUri_k__BackingField)) ::System::Uri*  _BacktraceHostUri_k__BackingField;

/// @brief Method GetMinidumpSubmissionUrl, addr 0x5f06750, size 0x130, virtual false, abstract: false, final false
inline ::System::Uri* GetMinidumpSubmissionUrl() ;

/// @brief Method GetPlCrashReporterSubmissionUrl, addr 0x5f10534, size 0x130, virtual false, abstract: false, final false
inline ::System::Uri* GetPlCrashReporterSubmissionUrl() ;

/// @brief Method GetSubmissionUrl, addr 0x5f06684, size 0xcc, virtual false, abstract: false, final false
inline ::System::Uri* GetSubmissionUrl() ;

/// @brief Method GetSymbolsSubmissionUrl, addr 0x5f10664, size 0x23c, virtual false, abstract: false, final false
inline ::System::Uri* GetSymbolsSubmissionUrl(::StringW  token) ;

/// @brief Method IsValid, addr 0x5f108d0, size 0x2c, virtual false, abstract: false, final false
inline bool IsValid(::System::Uri*  uri, ::ArrayW<uint8_t>  token) ;

static inline ::Backtrace::Unity::Model::BacktraceCredentials* New_ctor(::StringW  backtraceSubmitUrl) ;

static inline ::Backtrace::Unity::Model::BacktraceCredentials* New_ctor(::System::Uri*  backtraceSubmitUrl) ;

constexpr ::System::Uri* const& __cordl_internal_get__BacktraceHostUri_k__BackingField() const;

constexpr ::System::Uri*& __cordl_internal_get__BacktraceHostUri_k__BackingField() ;

constexpr void __cordl_internal_set__BacktraceHostUri_k__BackingField(::System::Uri*  value) ;

/// @brief Method .ctor, addr 0x5efe40c, size 0x7c, virtual false, abstract: false, final false
inline void _ctor(::StringW  backtraceSubmitUrl) ;

/// @brief Method .ctor, addr 0x5f108a0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Uri*  backtraceSubmitUrl) ;

/// [CompilerGenerated]
/// @brief Method get_BacktraceHostUri, addr 0x5f10524, size 0x8, virtual false, abstract: false, final false
inline ::System::Uri* get_BacktraceHostUri() ;

/// [CompilerGenerated]
/// @brief Method set_BacktraceHostUri, addr 0x5f1052c, size 0x8, virtual false, abstract: false, final false
inline void set_BacktraceHostUri(::System::Uri*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BacktraceCredentials() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BacktraceCredentials", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BacktraceCredentials(BacktraceCredentials && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BacktraceCredentials", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BacktraceCredentials(BacktraceCredentials const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27591};

/// [CompilerGenerated]
/// @brief Field <BacktraceHostUri>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::System::Uri*  ____BacktraceHostUri_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Model::BacktraceCredentials, ____BacktraceHostUri_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Model::BacktraceCredentials) == 0x18, "Size mismatch!");

} // namespace end def Backtrace::Unity::Model
